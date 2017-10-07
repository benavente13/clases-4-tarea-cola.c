#include <stdio.h>
void Add(pNodo *primero,pnodo *ultimo, int v){
	pnodo new;
	//Crea nodo nuevo y asignar la memoria dinamica con malloc
	new=(pNodo)malloc(sizeof(noodles));
	new->valor=v;
	new->sgt=NULL;
}
int main(){
	//typedef struct es una palabra reservada que sirve para asignar un nombre especifico a el tipo de la estructura
	typedef struct nodo(){
		int dato;
		//sgt corresponde al enlace asignado para el siguiente nodo en la cola
		struct nodo *sgt;
	}noodo;
	//noodo es el tipo para declarar los nodos
	typedef noodo *pNodo;
	//pNodo es el tipo para declarar punteros a un nodo
	typedef noodo *Cola;
	//Cola es el tipo para declarar colas

	return 0;
}
