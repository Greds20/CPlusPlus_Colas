#include<iostream>
using namespace std;

typedef struct EstructuraNodo
{ 
int dato;
EstructuraNodo* sig;	
}apuntador, Nodo;


apuntador* agregar(apuntador*,int);
void mostrart(apuntador*);
apuntador* mostrar(apuntador*);

int main(){
	int cont=0;
	system("color A0");
int op,x=0;
apuntador *primero=NULL;	
for(int i=0;i<=100;i++){
		primero=agregar(primero,x);
		x++;
	}
do{
	cout<<endl;
    cout<<"----------------------------------"<<endl;
	cout<<" 1.Pasar turno"<<endl;
	cout<<" 2.Mostrar todo"<<endl;
	cout<<" 3.Salir"<<endl;
	cout<<"----------------------------------"<<endl;
	cout<<" =>";cin>>op;

	
 switch(op){
 	case 1:{
 		if(cont<100){
		primero=mostrar(primero);
		system("cls");
		cout<<" Turno: "<<primero->dato;
		cont++;
	}else{
	cout<<"No hay mas turnos"<<endl;
}
	 }break;
 
 	case 2:{
 		mostrart(primero);
 		cout<<endl;
 		system("pause");
 		system("cls");
	 }break;
 }

 }while(op!=3);	
}
apuntador* agregar(apuntador *primero,int x)
{
	apuntador *ultimo;
	apuntador *nuevo=new(Nodo);
	nuevo->dato=x;
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
void mostrart(apuntador *primero){
   cout<<endl;
	apuntador *aux=primero;
	while(aux != NULL){
		cout<<" "<<aux->dato;
		aux=aux->sig;
	}
	cout<<endl;
}
apuntador* mostrar(apuntador *primero){
	apuntador *aux=primero;
	primero=primero->sig;
	
	delete(aux);
	return(primero);
}
