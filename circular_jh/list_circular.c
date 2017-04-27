// Liste na tela todos os registros por ordem crescente de código;
// Liste na tela todos os registros por ordem decrescente de código;
// Leia os dados de um novo registro e o inclua na lista (mantendo-a ordenada por código). Lembre-se que não pode haver códigos repetidos.
// Exclua o registro de um código informado pelo usuário;
// Liste o registro de um código informado pelo usuário;
// Altere o registro de um código informado pelo usuário

#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
  int cod;
  char first_name;
  char family_name;
  int age;
  struct Node *prox;
  struct Node *ant;
};

typedef struct IndexNode{
  int qtd;
  struct Node *head;
  struct Node *tail;
}

Node createNode(int cod,char* first_name, char* family_name, int age){
  novo = (Node *) malloc(sizeof(Node));
  novo->cod = cod;
  novo->first_name =first_name;
  novo->family_name = family_name;
  novo->age = age;
  return novo;
}

void insert_crescent(Node *LISTA, Node pessoa)
{
    Node *atual, *novo, *anterior;
    novo = (Node *) malloc(sizeof(Node));
     atual = LISTA;
     anterior = NULL;
     novo->num = num;

     if(atual == NULL){
         novo->prox = NULL;
         LISTA = novo;
     } else{
         while(atual != NULL && atual->num < num){
             anterior = atual;
             atual = atual->prox;
         }
         novo->prox = atual;
         if(anterior == NULL){
             LISTA = novo;
         } else{
             anterior->prox = novo;
         }
     }
}




int main() {

  Node *list =  malloc(sizeof(Node));

  return 0;
}
