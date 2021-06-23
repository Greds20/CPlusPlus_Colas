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
system("color B0");
int op;
apuntador *primero=NULL;	
do{
	cout<<endl;
	cout<<"------------------------------------------------"<<endl;
	cout<<" 1.Agregar nodo"<<endl;
	cout<<" 2.Eliminar nodo repetido"<<endl;
	cout<<" 3.Mostrar nodos"<<endl;
	cout<<" 4.Salir"<<endl;
	cout<<"------------------------------------------------"<<endl;
	cout<<" =>";cin>>op;cout<<endl;
 switch(op){
 	case 1:{
		primero=agregar(primero);
		system("cls");
	 }break;
 
 	case 2:{
 		primero=eliminar(primero);
	 }break;

 	case 3:{
 		mostrar(primero);
 		cout<<endl;
 		system("pause");
		system("cls");
	 }break;

 }

 }while(op!=4);	
}
apuntador* agregar(apuntador *primero)
{
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

apuntador *eliminar(apuntador *primero){
		apuntador *aux=primero;
	apuntador *aux2=primero->sig;
	apuntador *gd;
	apuntador *anull=aux2;

	while(anull->sig!=NULL){
	
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
