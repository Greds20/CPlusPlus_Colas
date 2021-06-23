#include<iostream>                                        
using namespace std;

typedef struct EstructuraNodo
{ 
int dato;
EstructuraNodo* sig;	
}apuntador, Nodo;

apuntador*eliminar(apuntador*);
apuntador*agregar(apuntador*);
void buscar(apuntador*,int,int);

int main(){	
system("color A0");
int op,x=0,Nn=0;
apuntador *primero=NULL;	
do{
	cout<<endl;
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	cout<<" 1.Agregar nodo"<<endl;
	cout<<" 2.Eliminar nodo"<<endl;
	cout<<" 3.Buscar nodo"<<endl;
	cout<<" 4.Salir"<<endl;
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	cout<<" =>";cin>>op;cout<<endl;
 switch(op){
 	case 1:{
		primero=agregar(primero);
		Nn++;
	 }break;
 
 	case 2:{
 		primero=eliminar(primero);
 		cout<<" Eliminado"<<endl;
 		cout<<endl;
	 break;
	 }

 	case 3:{
 		cout<<" Que nodo desea buscar"<<endl;
 		cout<<" =>";cin>>x;
 		buscar(primero,x,Nn);
 		system("pause");
		
	 }break;

 }

 }while(op!=4);	
}
apuntador* agregar(apuntador *primero)
{
	apuntador *ultimo;
	apuntador *nuevo=new(Nodo);
	cout<<" Ingrese dato para el nodo"<<endl;
	cout<<" =>";cin>>nuevo->dato;
	if(primero==NULL)
	{
		nuevo->sig=NULL;
		ultimo=nuevo;
		primero=nuevo;
	}
	else
	{
		ultimo->sig=nuevo;
		nuevo->sig=NULL;
		ultimo=nuevo;
		
	}
	return(primero);	
}

apuntador*eliminar(apuntador *primero){
	apuntador *aux=primero;
	primero=primero->sig;
	delete(aux);
	return(primero);
}
void buscar(apuntador *primero,int x,int Nn){
 cout<<endl;
 apuntador *aux=primero;
 if(x<=Nn){
	for(int i=1;i<x;i++){
		aux=aux->sig;
	}
	cout<<" El nodo "<<x<<" tiene "<<aux->dato;
	cout<<endl;
}
else{
	cout<<" No existe ese nodo"<<endl;
}
}
