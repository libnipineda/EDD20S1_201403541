#ifndef LISTA_H
#define LISTA_H

#include <iostream>
#include "Nodo.h"

using namespace std;

class Lista
{
private:
    /* data */
      char valor;
      int opc;

      Nodo *primero;
      Nodo *ultimo;
      

public:
    Lista();
    ~Lista();
    void Insertar(char v);
    void Eliminar();
    void Buscar(char s);
    void Imprimir();
};

#endif