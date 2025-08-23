#include<iostream>
#include <iterator>
#include<vector>
#include<memory>

enum class TokenType {
    Illegal,
    Lparen,
    Rparen,
    Comma,
    And,
    Or,
    Not,
    True,
    False,
    Eof,
};

struct Token {
    TokenType Type;
    char Literal;
};

// we don't even need Lexer here, yeah.. true
class Lexer {
public:
    std::string input;
    size_t position;
    char ch;

    Lexer(const std::string& input) : input(input), position(0), ch(0) {
        readChar();
    };

    Token NextToken() {
        Token tok;

        switch (ch) {
            case '(': tok = Token{ TokenType::Lparen, '(' }; break;
            case ')': tok = Token{ TokenType::Rparen, ')' }; break;
            case ',': tok = Token{ TokenType::Comma, ',' }; break;
            case '&': tok = Token{ TokenType::And, '&' }; break;
            case '|': tok = Token{ TokenType::Or, '|' }; break;
            case '!': tok = Token{ TokenType::Not, '!' }; break;
            case 't': tok = Token{ TokenType::True, 't' }; break;
            case 'f': tok = Token{ TokenType::False, 'f' }; break;
            case 0 : tok = Token{ TokenType::Eof, 0}; break;
            default: throw std::runtime_error("illegal character");
        }

        readChar();
        return tok;
    }

    void readChar() {
        ch = position >= input.size() ? 0 : input[position];
        ++position;
    }
};

class Parser {
public:
    std::unique_ptr<Lexer> l;
    Token curToken;
    Token peekToken;

    Parser(std::unique_ptr<Lexer> lexer) : l(std::move(lexer)) {
        peekToken = l->NextToken();
        nextToken();
    }

    void nextToken() {
        curToken = peekToken;
        peekToken = l->NextToken();
    }

    bool parseExpr() {
        bool result;

        switch (curToken.Type) {
            case TokenType::And: result = parseAndRes(); break;
            case TokenType::Not: result = parseNotRes(); break;
            case TokenType::Or : result = parseOrRes(); break;
            case TokenType::False: nextToken(); return false;
            case TokenType::True: nextToken(); return true;
            default: std::cout << "cutToken: " << curToken.Literal; throw std::runtime_error("illegal character");
        };

        return result;
    }

    bool parseAndRes() {
        nextToken(); // |(&(t,f,t),t)
        nextToken();

        bool tRes = parseExpr();
        // std::cout << "and curToken: " << curToken.Literal;
        while (curToken.Type ==  TokenType::Comma) {
            nextToken();
            bool nextResult = parseExpr();
            tRes = tRes && nextResult;
            // std::cout << "before curToken: " << curToken.Literal << "\n";
        }
        // std::cout << "tres: " << tRes << "\n";

        nextToken();
        // std::cout << "before peekToken: " << peekToken.Literal << "\n";
        return tRes;
    }

    bool parseNotRes() { // |(f,&(t,t))
        nextToken(); // !(&(f,t))
        nextToken();

        bool tRes = !parseExpr();

        nextToken();
        return tRes;
    }

    bool parseOrRes() {
        nextToken(); // |(&(t,f,t),t)
        nextToken();

        bool tRes = parseExpr();
        // std::cout << "curToken: " << curToken.Literal;
        while (curToken.Type ==  TokenType::Comma) {
            nextToken();
            bool nextResult = parseExpr();
            tRes = tRes || nextResult;}

        nextToken();
        return tRes;
    }
};

bool parseBoolExpr(std::string expression) {
    auto lexer = std::make_unique<Lexer>(expression);
    Parser parse(std::move(lexer));

    return parse.parseExpr();
}

int main() {
    std::string expression = "!(&(&(!(&(f)),&(t),|(f,f,t)),&(t),&(t,t,f)))";

    std::cout << parseBoolExpr(expression);

    // Lexer l(expression);
    //
    // for (int i = 0; i < expression.size(); ++i) {
    //     Token t = l.NextToken();
    //     std::cout << t.Literal;
    // }

    std::cin.get();
}

