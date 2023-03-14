#include "RPN.hpp"

RPN::RPN(const std::string& expr) : _expression(expr) {}

RPN::~RPN() {}

RPN::RPN(const RPN& other) : _operands(other._operands), _expression(other._expression) {}

RPN& RPN::operator=(const RPN& other) {
    if (this != &other) {
        _operands = other._operands;
        _expression = other._expression;
    }
    return *this;
}

int RPN::evaluate() {
    for (size_t i = 0; i < _expression.length(); i++) {
        char c = _expression[i];
        if (c >= '0' && c <= '9') {
            _operands.push(c - '0');
		} else if (c == '+' || c == '-' || c == '*' || c == '/') {
            if (_operands.size() < 2) {
                std::cout << "Error" << std::endl;
                return 0;
            }
            int op2 = _operands.top();
            _operands.pop();
            int op1 = _operands.top();
            _operands.pop();
            int result = 0;
            switch (c) {
                case '+':
                    result = op1 + op2;
                    break;
                case '-':
                    result = op1 - op2;
                    break;
                case '*':
                    result = op1 * op2;
                    break;
                case '/':
                    if (op2 == 0) {
                        std::cout << "Error: Division by zero!" << std::endl;
                        return 0;
                    }
                    result = op1 / op2;
                    break;
            }
            _operands.push(result);
        }
    }
    if (_operands.size() != 1) {
        std::cout << "Error" << std::endl;
        return 0;
    }
    return _operands.top();
}

/*
La fonction RPN::evaluate() est la méthode principale de la classe RPN. Elle prend en charge l'expression en RPN stockée dans l'objet RPN et retourne le résultat de l'évaluation.
La fonction commence par vérifier si l'objet RPN contient une expression valide. Si ce n'est pas le cas, elle affiche un message d'erreur et retourne une valeur par défaut, qui est 0.
Si l'expression est valide, la fonction utilise une pile pour stocker les nombres en entrée et les résultats de chaque opération. Elle commence à traiter chaque élément de l'expression un par un, en suivant l'algorithme de la notation polonaise inversée. 
Si l'élément est un nombre, elle le pousse sur la pile. Si l'élément est un opérateur, elle retire les deux derniers éléments de la pile, effectue l'opération appropriée et pousse le résultat sur la pile.
Si l'expression est correctement formatée, après avoir traité tous les éléments, il ne doit rester qu'un seul élément dans la pile, qui est le résultat final de l'expression. La fonction récupère donc ce résultat et le renvoie.
*/