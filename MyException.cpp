#include "MyException.h"

const std::string& MyException::what() const {
	return _whatStr;
}


int func(int num1, int num2) {
	MyException my_ex;

	if (num2 != 0) {
		return num1 / num2;		
	}	
	throw my_ex;
}