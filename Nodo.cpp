#include "Nodo.h"

#include <string>
using namespace std;


Nodo::Nodo(char arg){
    this->info=arg;
    siguiente = NULL;
    anterior = NULL;
}

Nodo::~Nodo(){    
}

char Nodo::getInfo(){
    return info;
}