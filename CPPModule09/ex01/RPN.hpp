#ifndef RPN_H
# define RPN_H

# include <iostream>
# include <cstdlib>
# include <string>
# include <stack>
# include <string>

class RPN {
	public:
		RPN(const std::string& expr);
		~RPN();
		RPN(const RPN& other);
		RPN& 			operator=(const RPN& other);
		int				evaluate();

	private:
		std::stack<int>	_operands;
		std::string		_expression;
};

# endif
