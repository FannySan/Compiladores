#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Estructura de la tabla
typedef struct contenido{
	int id;
    char name[100], type[100], value[100];
}CONTENIDO;

typedef CONTENIDO* item;

//Estructura del arbol
typedef struct nodo
{
	item dato;
	struct nodo *izq, *der;
}ELEMENTODEARBOLBINARIO;

typedef ELEMENTODEARBOLBINARIO *ARBOLBINARIO;

//Crear raiz
ARBOLBINARIO CrearNodo(item x){
	ARBOLBINARIO r=(ARBOLBINARIO)malloc(sizeof(ELEMENTODEARBOLBINARIO));
	r->dato=x;
	r->izq=r->der=NULL;
	return r;
}

//Inserta un dato a un arbol de busqueda binaria
void insertarABB(ARBOLBINARIO *raiz, item x){
	if(!(*raiz)){
		*raiz=CrearNodo(x);
	}
		else if((toascii(((*raiz)->dato->name))<toascii(x->name))){
			insertarABB(&((*raiz)->der),x);
		}
		else if((toascii(((*raiz)->dato->name))>toascii(x->name))){
			insertarABB(&((*raiz)->izq),x);
	}
	
}

//Buscar un dato en una ABB
int Buscar(ARBOLBINARIO raiz, item x) {
   while(raiz) {
       /*printf("primero %s",raiz -> dato -> name);
        printf("segundo %s",x->name);
        printf("\n%d\n",strcmp(raiz -> dato -> name,x->name));*/

      if(strcmp(raiz -> dato -> name,x->name) == 0)
	  return 1; /* dato encontrado */
      else if(toascii(raiz->dato->name)<toascii(x->name)) 
	  raiz = raiz->der;  
      else if(toascii(raiz->dato->name)>toascii(x->name)) 
	  raiz = raiz->izq; 
   }
   return 0; /* No está en árbol (1) */
}

void imprimirOrd(ARBOLBINARIO raiz){
    if (raiz != NULL)
    {
        imprimirOrd(raiz->izq);
       // printf("ID=%d\t",raiz->dato->id);
        printf("Nombre=%s\t",raiz->dato->name);
        printf("Tipo=%s\t",raiz->dato->type);
        printf("Valor=%s\t\n",raiz->dato->value);
        imprimirOrd(raiz->der);
    }
}

void eliminarABB(ARBOLBINARIO *raiz, item x){
	if(strcmp((*raiz) -> dato -> name,x->name) == 0){
		//printf(" \tDato encontrado para eliminar\n");
		ARBOLBINARIO q=(*raiz);
		if(q->der==NULL)
			*raiz=q->izq;
		else if(q->izq==NULL)
			*raiz=q->der;
		else
			reemplazar(&q);
		free(q);
    }
	else if((toascii(((*raiz)->dato->name))<toascii(x->name))){
		eliminarABB(&((*raiz)->der),x);
    }else if((toascii(((*raiz)->dato->name))>toascii(x->name))){
		eliminarABB(&((*raiz)->izq),x);
    }
}

void reemplazar(ARBOLBINARIO *act){
	ARBOLBINARIO a,p;
	p=*act;
	a=(*act)->izq;
	while(a->der){
		p=a;
		a=a->der;
	}
	(*act)->dato=a->dato;
	if(p==(*act))
		p->izq=a->izq;
	else
		p->der=a->izq;
	(*act)=a;
	
}

int toascii( char x[]){
    int sum;
    for(int i=0; x[i]!='\0'; i++){
        sum=sum+x[i];
    }
    return sum;
}

//Regresar contenio de una hoja
char * Buscarcon(ARBOLBINARIO raiz, item x) {
   while(raiz) {
      // printf("primero %s",raiz -> dato -> name);
        //printf("segundo %s",x->name);
        //printf("\n%d\n",strcmp(raiz -> dato -> name,x->name));

      if(strcmp(raiz -> dato -> name,x->name) == 0)
	  return (raiz -> dato -> value); /* dato encontrado */
      else if(toascii(raiz->dato->name)<toascii(x->name)) 
	  raiz = raiz->der;  
      else if(toascii(raiz->dato->name)>toascii(x->name)) 
	  raiz = raiz->izq; 
   }
}
//Nos dice si es tipo string la var
int Buscars(ARBOLBINARIO raiz, item x, item y) {
   while(raiz) {
      // printf("primero %s",raiz -> dato -> name);
        //printf("segundo %s",x->name);
        //printf("\n%d\n",strcmp(raiz -> dato -> name,x->name));
        
      if((strcmp(raiz -> dato -> name,x->name) == 0) && (strcmp(raiz -> dato -> type,y->type) == 0))
	  return 0; /* dato encontrado */
      else if(toascii(raiz->dato->name)<toascii(x->name)) 
	  raiz = raiz->der;  
      else if(toascii(raiz->dato->name)>toascii(x->name)) 
	  raiz = raiz->izq; 
   }
}

//Regresar tipo
