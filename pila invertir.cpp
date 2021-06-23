#include<iostream>                                       
using namespace std;

typedef struct EstructuraNodo
{ 
int dato;
EstructuraNodo* sig;	
}apuntador, Nodo;

apuntador* agregar(apuntador*);
apuntador* invertir(apuntador*);
void mostrar(apuntador*);

int main(){
	system("color B0");
int op;
apuntador *primero=NULL;	
do{
	cout<<endl;
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	cout<<" 1.Agregar nodo"<<endl;
	cout<<" 2.Invertir nodos"<<endl;
	cout<<" 3.Mostrar nodos"<<endl;
	cout<<" 4.Salir"<<endl;
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	cout<<" =>";cin>>op;cout<<endl;
 switch(op){
 	case 1:{
	 primero=agregar(primero);
	 system("cls");
	 break;
	 }
 
 	case 2:{
	 primero=invertir(primero);
	 system("cls");
	 break;
	 }

 	case 3:{
	 mostrar(primero);
	 cout<<endl;
	 system("pause");
	 system("cls");
	 break;
	 }

 }

 }while(op!=4);	
}
apuntador* agregar(apuntador *primero){
	apuntador *nuevo=new(Nodo);
	cout<<" Ingrese dato para el nodo"<<endl;
	cout<<" =>";cin>>nuevo->dato;
	if(primero==NULL)
	{
		nuevo->sig=NULL;
		primero=nuevo;
	}
	else
	{
		nuevo->sig=primero;
		primero=nuevo;
	}
	return(primero);	
}

void mostrar(apuntador *primero){
	apuntador *aux=primero;
	while(aux != NULL){
		cout<<aux->dato<<endl;
		aux=aux->sig;
	}
}

apuntador* invertir(apuntador *primero){
	apuntador *ant=primero;
	apuntador *gap;
	
	gap=primero->sig;
	primero->sig=NULL;
	while(gap != NULL){
		primero=gap;
		gap=primero->sig;
		primero->sig=ant;
		ant=primero;
	}
return(primero);
}
