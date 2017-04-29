#include <stdio.h>
#include <stdlib.h>

struct Node {
  int codigo;
  char primeiroNOme;
  char nomeFamilia;
  int idade;
  struct Node *proximo;
  struct Node *anterior;
} ;

typedef struct Tno {
  int info;
  struct Tno *prox;
  struct Node *head;
  struct Node *tail;
} ;

void iniciaLista (Tno *listaCadastro){
  prox->NULL;
  anterior->NULL;
  tamanhoLista = 0;
}


// Liste na tela todos os registros por ordem crescente de código;
void listar (struct Tno *ptlista) {

     int i = 0;
     struct Tno *pont;

     pont = ptlista->head;
     while (pont != ptlista) {
           printf("Elemento %d = %d\n", i++, pont->info);
           pont = pont->tail;
     }
}

// Liste na tela todos os registros por ordem decrescente de código;
void listar (struct Tno *ptlista) {

     int i = 0;
     struct Tno *pont;

     pont = ptlista->head;
     while (pont != ptlista) {
           printf("Elemento %d = %d\n", i++, pont->info);
           pont = pont->;
     }
}


// Leia os dados de um novo registro e o inclua na lista (mantendo-a ordenada por código). Lembre-se que não pode haver códigos repetidos.

// Exclua o registro de um código informado pelo usuário;

// Liste o registro de um código informado pelo usuário;

// Altere o registro de um código informado pelo usuário


int main() {

  return 0;
}
