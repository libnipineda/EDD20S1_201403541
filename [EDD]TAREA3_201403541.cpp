#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <conio.h>
#include <iostream>
 
using namespace std;

struct dato {
 int i;
 dato *s;
 }*a, *i, *p, *e;
 
int da;
string nombre;

int buscar (int d);

void insertar(int dat, string info);
void mostrar(void);
void borrar(void);
void menu(void);

main()
 {
 menu();
 }
 
void menu(void)
 {
 int opc,da;
 do
 {
 cout <<"1 - Buscar datos";
 cout <<"\t2 - Insertar datos";
 cout <<"\t3 - Mostrar todos los datos";
 cout <<"\t4 - Borrar un dato"; 
 cout <<"\t0 - Finalizar";
 cout <<"\nSeleccione opcion: ";
 cin >> opc;

 switch(opc)
 {
 case 0: cout<<"\n\nFinaliza el programa";
 getch();
 // o sea usar delete para eliminar toda la lista
 p=i;
 while(p)
 {
 a=p;
 p=p->s;
 delete(a);
 }
 exit(0);

 case 1: cout<<"\n\nIngrese dato a buscar: ";
 cin>>da;
 if(buscar(da))
 cout<<"\n\nDato existe";
 else
 cout<<"\n\nDato NO EXISTE";
 getch();
 break;

 case 2: cout<<"Ingrese dato: ";
 cin>>da;
 insertar(da);
 break;

 case 3: mostrar();
 break;

 case 4: borrar();
 break;
 
 default: cout<<"\n\nOPCION NO VALIDA.";
 getch();
 }
 }while(opc);
 }
 
void mostrar(void)
 {
 int cont=1;
 if(!i)
 {
 cout <<"\n\nNO HAY LISTA PARA MOSTRAR";
 getch();
 return;
 }
 p=i;
 cout << endl << endl;
 while(p)
 {
 cout << cont++ <<" - Id = "<<p->i<<endl;
 p=p->s;
 }
 cout <<"\n\nEso es todo";
 getch();
 }
 
int buscar(int d)
 {
 if (!i)
 {
 cout <<"No hay datos en la lista";
 getch();
 return(0);
 }
 p=i;
 a=NULL;
 while(p->s && p->i<d)
 {
 a=p;
 p=p->s;
 }
 return(p->i==d?1:0);
 }
 
void insertar(int dat)
 {
 if(!i)
 {
 i=new(dato);
 i->s=NULL;
 i->i=dat;
 return;
 }


 if(buscar(dat))
 {
 cout << "\n\nDato existente";
 getch();
 return;
 }
 e=new(dato);
 e->i=dat;
 if(p==i && p->s)
 {
 e->s=p;
 i=e;
 return;
 }
 if(p==i && !p->s)
 {
 if(p->i < e->i)
 {
 p->s=e;
 e->s=NULL;
 }
 else
 {
 e->s=p;
 i=e;
 }
 return;
 }
 if(p->s)
 {
 a->s=e;
 e->s=p;
 return;
 }
 if(e->i > p->i)
 {
 e->s=NULL;
 p->s=e;
 }
 else
 {
 a->s=e;
 e->s=p;
 }
 }
 
void borrar(void)
 {
 cout << "\n\nIngrese dato a eliminar: ";
 cin >> da;
 if(buscar(da))
 {
 if(a)
 a->s=p->s;
 else
 i=p->s;
 delete(p);
 cout << "\n\nDato eliminado";
 }
 else
 cout << "\n\nDato no se encuentra";
 getch();
 }
 