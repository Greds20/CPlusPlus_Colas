#include<iostream>                                        
using namespace std;

typedef struct EstructuraNodo
{ 
int dato;
EstructuraNodo* sig;	
}apuntador, Nodo;

apuntador *eliminar(apuntador*);
void buscar(apuntador*,int,int);
apuntador*agregar(apuntador*);

int main(){
	system("color B0");
int op,x,Nn=0;
apuntador *primero=NULL;	
do{
	cout<<endl;
	cout<<"........................................"<<endl;
	cout<<" 1,Agregar nodo"<<endl;
	cout<<" 2.Eliminar nodo"<<endl;
	cout<<" 3.Buscar nodo"<<endl;
	cout<<" 4.Salir"<<endl;
	cout<<"........................................"<<endl;
	cout<<" =>";cin>>op;cout<<endl;
 switch(op){
 	case 1:{
		primero=agregar(primero);
		Nn++;
		system("cls");
	 }break;
 
 	case 2:{
 		if(primero==NULL){
 			cout<<endl<<"la lista esa vacia"<<endl;
		 }
		 else{
		 primero=eliminar(primero);
		 cout<<" Eliminado"<<endl;
		 cout<<endl;
		 system("pause");
		 system("cls");	
 		Nn--;
 	}	
	 }break;

 	case 3:{
 		cout<<" Que nodo desea buscar"<<endl;
 		cout<<" =>";cin>>x;cout<<endl;
 		buscar(primero,x,Nn);
 		system("pause");
 		system("cls");
		
	 }break;

 }

 }while(op!=4);	
}
apuntador* agregar(apuntador *primero)
{
	apuntador *nuevo=new(Nodo);
	cout<<" Ingresa dato para el nodo"<<endl;
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

apuntador*eliminar(apuntador *primero){
	apuntador *aux=primero;
	if(primero!=NULL){
	if(primero->sig!=NULL){
	primero=primero->sig;
	delete(aux);
}
else{
	delete(aux);
	primero=NULL;
}
}
	return(primero);
}
void buscar(apuntador *primero,int x,int Nn){
 cout<<endl;
 apuntador *aux=primero;
 if(x<=Nn){
	for(int i=1;i<x;i++){
		aux=aux->sig;
	}
	cout<<" El nodo "<<x<<" tiene "<<aux->dato;cout<<endl;
	cout<<endl;
}
else{
	cout<<" No existe ese nodo"<<endl;
	cout<<endl;
}
}
