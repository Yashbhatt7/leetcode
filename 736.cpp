#include<iostream>
#include<vector>
#include<unordered_map>
#include<memory>

// (let x 2 (mult x (let x 3 y 4 (add x y))))
//
// (let x 1 y 2 x (add x y) (add x y))
// for this look at let here we'll provide x = 1 and y = 2 then check if there is new var or not here in this case its not..
// here its x (add x y) which means we'll reassign x with the result of first (add x y) then x will become x = 3... then we'll eval last (add x y) here x is
// already been calculated so it will be result in (add x = 3 y = 2) = 5; we can use peekToken to see if we've used var from previous declaration of var or its new

enum class TokenType {
    Illegal,
    Lparen,
    Rparen,
    Let,
    Mult,
    Add,
    Ident,
    Int,
    Eof,
};

struct Token {
    TokenType type;
    std::string literal;
};

class TokenTypeMap {
public:
    static TokenType lookupIdent(const std::string& ident) {
        static const std::unordered_map<std::string, TokenType> keywords = {
            { "let", TokenType::Let },
            { "mult", TokenType::Mult },
            { "add", TokenType::Add },
        };

        auto it = keywords.find(ident);
        if (it != keywords.end()) {
            return it->second;
        }
        return TokenType::Ident;
    }
};

// yes we don't need lexer here(brain: you don't know how to solve it without lexer) yeah... true
class Lexer {
public:
    std::string input;
    size_t readPosition = 0;
    size_t position = 0;
    char ch = 0;

    Lexer(const std::string& input) : input(input) {
        readChar();
    }

    Token NextToken() {
        Token tok;
        skipWhitespace();

        switch (ch) {
            case '(': tok = Token{ TokenType::Lparen, std::string(1, ch) }; break;
            case ')': tok = Token{ TokenType::Rparen, std::string(1, ch) }; break;
            case 0: tok = Token{ TokenType::Eof, "" }; break;
            default: {
                if (isLetter(ch)) {
                    tok.literal = readIdentifier();
                    tok.type = TokenTypeMap::lookupIdent(tok.literal);

                    return tok;
                } else if (isDigit(ch)) {
                    tok.literal = readNumber();
                    tok.type = TokenType::Int;

                    return tok;
                } else {
                    tok = Token { TokenType::Illegal, std::string(1, ch) };
                }
            }
        }

        readChar();
        return tok;
    }

    void readChar() {
        ch = (readPosition >= input.size()) ? 0 : input[readPosition];
        position = readPosition;
        ++readPosition;
    }

    char peekChar() {
        return (readPosition >= input.size()) ? 0 : input[readPosition];
    }

    std::string readIdentifier() {
        size_t start = position;
        while (isLetter(ch)) {
            readChar();
        }

        return input.substr(start, position - start);
    }

    std::string readNumber() {
        size_t start = position;
        while (isDigit(ch)) {
            readChar();
        }

        return input.substr(start, position - start);
    }

    void skipWhitespace() {
        while (ch == ' ' || ch == '\n' || ch == '\t' || ch == '\r') {
            readChar();
        }
    }

    bool isLetter(char ch) {
        return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || ch == '_';
    }

    bool isDigit(char ch) {
        return ch >= '0' && ch <= '9';
    }
};

class Eval {
public:
    std::unique_ptr<Lexer> l;
    Token curToken;
    Token peekToken;

    Eval(std::unique_ptr<Lexer> lexer) : l(std::move(lexer)) {
        peekToken = l->NextToken();
        nextToken();
    }

    void nextToken() {
        curToken = peekToken;
        peekToken = l->NextToken();
    }

    int evalExpr() {
        int res = 0;
        nextToken();

        switch (curToken.type) {
            case TokenType::Let: res = evalLet(); break;
            case TokenType::Add: res = evalAdd(); break;
            case TokenType::Mult: res = evalMult(); break;
            default: throw std::runtime_error("illegal character");
        }

        return res;
    }

    int evalLet() {
        std::cout << "it came to let\n";
        return 0;
    }

    int evalAdd() {
        return 0;
    }

    int evalMult() {
        return 0;
    }
};

int evaluate(std::string expression) {
    auto lexer = std::make_unique<Lexer>(expression);
    Eval eval(std::move(lexer));

    eval.evalExpr();

    return 0;
}

int main() {
    std::string expression = "(let x 2 (mult x (let x 3 y 4 (add x y))))";

    auto lexer = std::make_unique<Lexer>(expression);

    for (int i = 0; i < 21; ++i) {
        Token tok = lexer->NextToken();

        std::cout << i + 1 << ": " << tok.literal << "\n";
    }
    std::cout << "\n\n";

    evaluate(expression);

    std::cin.get();
}

