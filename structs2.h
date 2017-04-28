#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubbleSort1(int n, int *vet);
void bubbleSort2(int n, int *vet);
void organiza(int n, int *vet);
void insertionSort(int *vetorDesordenado, int tamanhoVetor );
void Particao(int *A, int Esq, int Dir, int *i, int *j, int *trocas, int *comparacoes);
void Ordena(int *A, int Esq, int Dir, int *trocas, int *comparacoes);
void Quicksort(int *A, int n, int *trocas, int *comparacoes);
void selecao(int *vet, int n);
void insertion(int *vet, int n);
void bolha(int *vet, int n);
