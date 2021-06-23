#include<iostream>                                        
using namespace std;

typedef struct EstructuraNodo
{ 
int dato;
EstructuraNodo* sig;	
}apuntador, Nodo;

apuntador *eliminar(apuntador*);
apuntador *agregar(apuntador*);
void mostrar(apuntador*);

int main(){
	system("color A0");
int op;
apuntador *primero=NULL;	
do{
	cout<<endl;
	cout<<"----------------------------------------"<<endl;
	cout<<" 1.Agregar nodo"<<endl;
	cout<<" 2.Eliminar repetido"<<endl;
	cout<<" 3.Mostrar nodos"<<endl;
	cout<<" 4.Salir"<<endl;
	cout<<"----------------------------------------"<<endl;
	cout<<" =>";cin>>op;cout<<endl;
 switch(op){
 	case 1:{
		primero=agregar(primero);
		
		
	 }break;
 
 	case 2:{
 		primero=eliminar(primero);
 		
	 }break;

 	case 3:{
 		mostrar(primero);
 		cout<<endl;
 		
		
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

apuntador *eliminar(apuntador *primero){
	apuntador *aux=primero;
	apuntador *aux2=primero->sig;
	apuntador *gd;
	apuntador *anull=aux2;

	while(anull!=NULL){
	
	if(aux->dato==aux2->dato ){
	gd=aux2->sig;
	anull=anull->sig;
	gd=aux2->sig;
	aux->sig=gd;
	delete(aux2);
	}
	else{
		anull=anull->sig;
	}
	aux=aux->sig;
	aux2=aux2->sig;
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
