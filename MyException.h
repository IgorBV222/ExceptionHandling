#pragma once
#include <iostream>

class MyException{

public:
	MyException() {}
	const std::string& what() const;
private:
	std::string _whatStr = "MyException()";
};

int func(int num1, int num2);