#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  int codigo;
  char primeiroNome;
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

Node iniciaNode (int codigo, char *primeiroNome, char *nomeFamilia, int idade) {
  novoNode = (Node *)malloc(sizeof(Node));
  novoNode->codigo;
  novoNode->primeiroNome;
  novoNode->nomeFamilia;
  novoNode->idade;

  return novoNode;
}

// Liste na tela todos os registros por ordem crescente de código;
void insereCrescente (Node *pessoa, Node cadastro) {
  Node *nodeAtual, *novoNode, *nodeAnterior;
  novoNode = (Node *)malloc(sizeof(Node));

  nodeAtual = pessoa;
  nodeAnterior = NULL
  novoNode->novo = novo;

  if (nodeAtual == NULL) {
    novoNode->prox = NULL;
    pessoa = novoNode;
  } else {
      while (nodeAtual != NULL && nodeAtual->novo < novo) {
          nodeAnterior = nodeAtual;
          nodeAtual = nodeAtual->prox;
      }
      novoNode->prox = nodeAtual;
      if (nodeAnterior == NULL){
        pessoa =  novoNode
      } else {
          nodeAnterior->prox = novo;
      }
  }
}

// Liste na tela todos os registros por ordem decrescente de código;


// Leia os dados de um novo registro e o inclua na lista (mantendo-a ordenada por código). Lembre-se que não pode haver códigos repetidos.

// Exclua o registro de um código informado pelo usuário;

// Liste o registro de um código informado pelo usuário;

// Altere o registro de um código informado pelo usuário


int main() {
  Node *lista = malloc(sizeof(Node));

  return 0;
}
