#include<stdio.h>
#include<stdlib.h>

struct nodo{
   int val;
   struct nodo *sgte;
};


void imprimir(struct nodo *);
struct nodo *eliminar(struct nodo *, int);
struct nodo *posicioninicial(struct nodo *,int);
struct nodo *posicionfinal(struct nodo *,int);
void concatenar(struct nodo *, struct nodo *);
struct nodo *crear(int);

int main(){
   struct nodo *cabeza;
   cabeza=malloc(sizeof(struct nodo));
   cabeza=crear(2);
   imprimir(cabeza);
   cabeza=eliminar(cabeza,2);
   imprimir(cabeza);
   cabeza=posicioninicial(cabeza,67);
   imprimir(cabeza);
   cabeza=posicionfinal(cabeza,34);
   imprimir(cabeza);


   struct nodo *cabeza2;
   cabeza2=malloc(sizeof(struct nodo));
   cabeza2=crear(2);
   concatenar(cabeza,cabeza2);
   imprimir(cabeza);
   cabeza=posicionfinal(cabeza,89);
   imprimir(cabeza);

   return 0;
}


void imprimir(struct nodo *cabeza){
   struct nodo *temp;
   temp=cabeza;
   while(temp != NULL){
      printf("[%d|*--]-->  ",temp->val);
      temp=temp->sgte;
   }
   printf("NULL\n");
}

struct nodo *eliminar(struct nodo *cabeza, int key){
   struct nodo *prev,*cur;
   prev=cabeza;
   cur=cabeza->sgte;
   while(cur != NULL){
      if (cur->val == key){
         prev->sgte=cur->sgte;
         free(cur);
      }
      prev=cur;
      cur=cur->sgte;
   }
   return cabeza;
}


struct nodo *posicioninicial(struct nodo *cabeza,int valor){
   struct nodo *prev,*nuevo;
   nuevo=malloc(sizeof(struct nodo));
   nuevo->val=valor;//
   prev=cabeza;
   nuevo->sgte=prev;
   cabeza=nuevo;
   return cabeza;

}


void concatenar (struct nodo *cabeza1, struct nodo *cabeza2){
   struct nodo *cur;
   cur = cabeza1;
   while(cur->sgte != NULL)
      cur = cur->sgte;//llegara al null de cabeza1
   cur->sgte=cabeza2;
}


struct nodo *crear(int n){
    struct nodo *cabeza, *cur;
    cabeza = malloc(sizeof(struct nodo));
    cabeza->val = 1;
    cur = cabeza;
    int e=1;
    while(e++<n){
        struct nodo *newnodo;
        newnodo = malloc(sizeof(struct nodo));
        newnodo-> val = e;
        cur-> sgte = newnodo;
        cur = newnodo;
    }
    cur-> sgte = NULL;
    return cabeza;
}

struct nodo *posicionfinal(struct nodo *cabeza,int n){
   struct nodo *prev, *nuevo;
   nuevo=malloc(sizeof(struct nodo));
   nuevo->val=n;
   prev=cabeza;
   int e=0;
   while(prev->sgte != NULL){
      prev=prev->sgte;
   }
   prev->sgte=nuevo;
   return cabeza;
}
