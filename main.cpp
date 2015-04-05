/*============================================================
  main.cpp
  Author : Guillaume LEGRU
  Date : 05/04/2015

  ToComplicatedHelloWorld/main.cpp
  ============================================================*/

#include <iostream>
#include <string>
#include "Hello.hpp"


int main(int argc, char** argv)
{
	std::string hello = "Hello World !";
	Hello * pHello = new Hello(hello);
	
	pHello->sayHello();
	
	return 0;
}
/*
int main(int argc, char** argv)
{
	std::string hello = "Hello World !";
	
	std::cout << hello
			  << std::endl;
	
	return 0;
}
*/
