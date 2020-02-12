#include "Lista.h"

Lista::Lista(){
  primero = NULL;
  ultimo = NULL;
}

Lista::~Lista(){
}

void Lista::Insertar(char c){
   Nodo *aux = new Nodo(c);

   if(primero==NULL)
   {
     primero = aux;
     aux->siguiente = NULL;
     aux->anterior = NULL;
     ultimo = primero;
   }else{
       ultimo->siguiente = aux;
       aux->siguiente = NULL;
       aux->anterior = ultimo;
       ultimo = aux;
   }
}

void Lista::Imprimir(){
  
  if(primero==NULL && ultimo==NULL){
    cout<<" lista vacia "<<endl;
  }else{
    Nodo *actual = primero; 
    while(actual!=NULL){
      cout<<"Elemento: "<<actual->getInfo()<<endl;
      actual=actual->siguiente;
    }    
  }
}


void Lista::Eliminar(){
  Nodo *aux = primero;

    if(primero == NULL && ultimo == NULL){
      cout << "Lista vacia." << endl;
    }else
    {
      ultimo = ultimo -> anterior;
      ultimo -> siguiente = NULL;
    }
}

void Lista::Buscar(char dato){
  Nodo *actual = primero;
  
  if(primero==NULL && ultimo==NULL){
    cout << "lista vacia "<<endl;
  }else
  {
    while(actual!=NULL){
      if(actual->getInfo() == dato){
        cout << "Valor encontrado."<< endl;
        break;
      }
      actual=actual->siguiente;
    }
    cout << "Valor no encontrado.";
  }
}