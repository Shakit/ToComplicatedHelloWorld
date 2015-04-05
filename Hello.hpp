/*============================================================
  Hello.hpp
  Author : Guillaume LEGRU
  Date : 05/04/2015

  ToComplicatedHelloWorld/Hello.hpp
  Pourquoi ne pas utiliser la POO pour un "simple" Hello World
  ============================================================*/

#ifndef HELLO_HPP
#define HELLO_HPP

// includes
#include <string>

//============================================================
class Hello
{
public :
	//Constructeur
	Hello(std::string hello);

	//methode d'affichage
	void sayHello(void);
	
private:
	std::string hello_;
};

#endif //HELLO_HPP
