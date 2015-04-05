/*============================================================
  Hello.cpp
  Author : Guillaume LEGRU
  Date : 05/04/2015

  ToComplicatedHelloWorld/Hello.cpp
  Pourquoi ne pas utiliser la POO pour un "simple" Hello World
  ============================================================*/


#include "Hello.hpp"
#include "iostream"

Hello::Hello(std::string hello) : hello_(hello) {}

void Hello::sayHello(void)
{
	std::cout << hello_
			  << std::endl;
}
