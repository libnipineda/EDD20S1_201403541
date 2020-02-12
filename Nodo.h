#ifndef NODO_H
#define NODO_H

#include <iostream>

using namespace std;

class Nodo
{
    private:
    /* data */
      char info;


    public:
      
      Nodo(char arg);
      ~Nodo();
      Nodo *siguiente;
      Nodo *anterior;
      char getInfo();
};
#endif