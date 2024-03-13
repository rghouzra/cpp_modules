//
// Created by reda ghouzraf on Wed Mar  6 20:02:39 2024
//
#include "RPN.hpp"


std::string gettrimedstring(const std::string &string){
	std::istringstream str_stream(string);
	std::string readed = "";
	std::string fullline ="";
	while (getline(str_stream, readed,' '))
	{
		fullline+= readed;
	}
	return fullline;
}

void checkRpnsyntax(std::string string){
	for (size_t i = 0; i < string.size(); i++)
	{
		if(!isdigit(string[i]) && !isop(string[i]))
			throw std::runtime_error("invalid token");
	}
}

int16_t calc(int16_t left, int16_t right, char op){
	switch (op)
	{
		case '+':
			return left + right;
		case '-':
			return left - right;
		case '*':
			return left * right;
		case '/':
			if(!right)
				throw std::runtime_error("error division by zero");
			return left / right;
	}
	return 0;
}

void ShuntingYardAlgorithm(std::string s, std::stack<int16_t> &stack){
	for (size_t i = 0; i < s.size(); i++){
		if(isdigit(s[i]))
			stack.push((s[i] - '0'));
		else if(isop(s[i]))
		{
			if(stack.size() < 2)
				throw std::runtime_error("invalid usage of shunting yard algorithm");
			int16_t right = stack.top();
			stack.pop();
			int16_t left = stack.top();
			stack.pop();
			stack.push(calc(left, right, s[i]));
		}
	}
	if(stack.size() != 1)
		throw std::runtime_error("invalid postfix");
	std::cout << stack.top() << '\n';
}

RPN::RPN(std::string arg)
{
	std::string trimmedstring = gettrimedstring(arg);

	checkRpnsyntax(trimmedstring);
	ShuntingYardAlgorithm(trimmedstring, stack);
}

RPN::~RPN()
{
}
