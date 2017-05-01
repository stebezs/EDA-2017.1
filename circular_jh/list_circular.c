// Liste na tela todos os registros por ordem crescente de código;
// Liste na tela todos os registros por ordem decrescente de código;
// Leia os dados de um novo registro e o inclua na lista (mantendo-a ordenada por código). Lembre-se que não pode haver códigos repetidos.
// Exclua o registro de um código informado pelo usuário;
// Liste o registro de um código informado pelo usuário;
// Altere o registro de um código informado pelo usuário

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node{
  int cod;
  char first_name[20];
  char family_name[20];
  int age;
  struct Node *prox;
  struct Node *ant;
};

typedef struct Node Node;

typedef struct IndexNode{
  int qtd;
  struct Node *head;
  struct Node *tail;
}IndexNode;

Node createNode(){
  Node *novo = (Node *) malloc(sizeof(Node));
  return *novo;
}



void printList(Node *LISTA)
{
  while(LISTA != NULL){
      printf(" %d %s %s %d \n", LISTA->cod, LISTA->first_name,LISTA->family_name, LISTA->age);
      LISTA = LISTA->prox;
  }
  printf("\n");
}


 void insert_crescent(Node *LISTA, Node *pessoa)
{
  Node *atual, *novo, *anterior;
  novo = (Node *) malloc(sizeof(Node));

  novo->cod = pessoa->cod;
  strcpy(novo->first_name,pessoa->first_name);
  strcpy(novo->family_name,pessoa->family_name);
  novo->age = pessoa->age;

   atual = LISTA;
   anterior = NULL;

   if(atual == NULL){
       novo->prox = NULL;
       LISTA = novo;
   } else{
       while(atual != NULL && atual->cod < novo->cod){
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
  Node *usr = malloc(sizeof(Node));
  char spt[1];

  FILE *arquivo;
  if ((arquivo = fopen("Cadastro.txt", "r")) == NULL) {
      printf("Erro ao abrir o arquivo.\n");
    } else {
      //  Consertar isso a última linha do arquivo é lida duplamente.
      // e o 'erro' e na varificação aonde o arquivo termina.
      while(!feof(arquivo)){
        //Metodo de leitura sem separação por vígulas
        // (fscanf(arquivo,"%d %s %s %s %s %d \n", &usr->cod,spt,usr->first_name,spt,usr->family_name,&usr->age ))!=EOF)
        fscanf(arquivo, "%d[^,]", &usr->cod);
        fseek(arquivo, +1, SEEK_CUR);
        fscanf(arquivo, "%[^,]*c",usr->first_name);
        fseek(arquivo, +1, SEEK_CUR);
        fscanf(arquivo, "%[^,]*c",usr->family_name);
        fseek(arquivo, +1, SEEK_CUR);
        fscanf(arquivo, "%d[^,]",&usr->age);
        printf("%d %s %s %d \n", usr->cod,usr->first_name,usr->family_name,usr->age);
        insert_crescent(list,usr);
      }
      fclose(arquivo);
    }

  printList(list);
  return 0;

}
