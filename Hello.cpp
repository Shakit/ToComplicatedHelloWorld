/*============================================================
  Hello.cpp
  Author : Guillaume LEGRU
  Date : 05/04/2015

  ToComplicatedHelloWorld/Hello.cpp
  Pourquoi ne pas utiliser la POO pour un "simple" Hello World
  ============================================================*/

//includes
#include "Hello.hpp"
#include "iostream"

//============================================================
// Constructeur
Hello::Hello(std::string hello) : hello_(hello) {}

//============================================================
// methode d'affichage
void Hello::sayHello(void)
{
	std::cout << hello_
			  << std::endl;
}
