#include <iostream>
#include "Lista.h"

using namespace std;

int opc;
char valor;
Lista Lt;

main(){
    do{
      cout << "---------------------------------------" << endl;
      cout << "\t\t\tMenu" << endl;
      cout << "1. Insertar dato a la lista." << endl;
      cout << "2. Ver datos de la lista." << endl;
      cout << "3. Eliminar datos de la lista." << endl;
      cout << "4. Buscar datos de la lista." << endl;
      cout << "5. Salir." << endl;
      cout << "Ingrese opcion: " << endl; cin >> opc;
      cout << "---------------------------------------" << endl;

      switch(opc){
      
         case 1:
          cout << "Ingrese letra." << endl; cin >> valor;
          Lt.Insertar(valor);
          break;
      
         case 2:
          cout << "Valores de la lista: " << endl;
          Lt.Imprimir();
          break;
      
         case 3:
          cout << "Valores eliminados." << endl;
          Lt.Eliminar();
          break;

         case 4:
          cout << "Ingrese la letra a buscar: " << endl; cin >> valor;
          Lt.Buscar(valor);
          break;

         case 5: cout << "Finaliza el programa..." << endl;
                system("pause");
                system("cls");
                exit(0);
          break;

        default:
           cout << "Error por favor ingresar los valores indicados." << endl;
           cout << "Ejemplo: Ingrese opcion: 2" << endl;
          break;
      }
    }while(true);

}