#include<iostream>
#include<vector>

enum TokenType {
    True, False, And, Or, Not, Lparen, Rparen, Comma, Eostr,
};

struct Token {
    TokenType type;
    std::string literal;
};

enum NodeType {
    TrueLiteral, FalseLiteral, AND, NOT, OR,
};

struct ast {
    NodeType type;
    std::vector<ast*> children;
};

class Parser {
    std::vector<Token> tokens;
    size_t pos;
};

bool parseBoolExpr(std::string expression) {
    std::vector<char> ch_vec;

    return true;
}

int main() {
    std::string expression = "&(|(f))";

    std::cout << parseBoolExpr(expression);

    std::cin.get();
}

