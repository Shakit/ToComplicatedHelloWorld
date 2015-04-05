/*============================================================
  main.cpp
  Author : Guillaume LEGRU
  Date : 05/04/2015

  ToComplicatedHelloWorld/main.cpp
  ============================================================*/

#include <iostream>
#include <string>
#include "Hello.hpp"

//============================================================
// fonction principale
int main(int argc, char** argv)
{
	// variables
	std::string hello = "Hello World !";
	Hello * pHello = new Hello(hello);

	//========================================
	pHello->sayHello();
	
	return 0;
} // end main
