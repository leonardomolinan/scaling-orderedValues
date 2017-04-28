#include "structs2.h"

void bubbleSort1(int n, int *vet){
    int aux, i, j;
    long count = 0, cont2 = 0;

    for(i = n-1; i >= 1; i--){
        for(j = 0; j < i; j++){
            count++;
            if(vet[j] < vet[j+1]){
                aux = vet[j+1];
                vet[j+1] = vet[j];
                vet[j] = aux;
                cont2++;
            }
        }
        if(cont2 == 0)
            break;
    }
}

void bubbleSort2(int n, int *vet){
    int aux, i, j;
    long count = 0, cont2 = 0;

    for(i = n-1; i >= 1; i--){
        for(j = 0; j < i; j++){
            count++;
            if(vet[j] > vet[j+1]){
                aux = vet[j+1];
                vet[j+1] = vet[j];
                vet[j] = aux;
                cont2++;
            }
        }
        if(cont2 == 0)
            break;
    }
    printf("\nNumero de trocas BubbleSort: %d", cont2);
    printf("\nNumero de comparacoes no BubbleSort: %d\n", count);
}

void organiza(int n, int *vet)
{
    int i, j, min, temp, cont=0, troca=0;
    for(i=0; i<n-1; i++)
    {
        min=i;
        for(j=i+1; j<n; j++)
        {
            cont++;
            if(vet[j]<vet[min])
                min=j;
        }
        temp = vet[i];
        vet[i]=vet[min];
        vet[min]=temp;
        troca++;
    }
    printf("\nNumero de trocas no Selection: %d", troca);
    printf("\nNumero de comparacoes no Selection: %d\n", cont);
}

void insertionSort(int *vet, int n)
{
   int i, j, temp, troca=0, cont3=0;

   for(i=1; i<n; i++)
   {
        temp=vet[i];
        j = i-1;
        while(j>=0 && vet[i]>temp)
        {
            vet[j+1] = vet[j];
            j--;
            cont3++;
            troca++;
        }
        vet[j+1]=temp;
   }
   printf("\nNumero de trocas insertionSort: %d", troca);
   printf("\nNumero de comparacoes insertionSort: %d\n", cont3);
}

void Particao(int *A, int Esq, int Dir, int *i, int *j, int *trocas, int *comparacoes)
{
    int x, aux;
    *i=Esq; *j=Dir;
    x=A[(*i+*j)/2]; //pivo
    do{
        while(A[*i]<x){
            (*i)++;
            (*comparacoes)++;
        }
        while(A[*j]>x){
            (*j)--;
            (*comparacoes)++;
        }
        if((*i)<=(*j)){
            aux=A[*i];A[*i]=A[*j];A[*j]=aux;
            (*trocas)++;
            (*i)++;(*j)--;
        }
    }while (*i<=*j);
}

void Ordena(int *A, int Esq, int Dir, int *trocas, int *comparacoes)
    {
    int i, j;
    Particao(A, Esq, Dir, &i, &j, trocas, comparacoes);
    if(Esq<j) Ordena(A, Esq, j, trocas, comparacoes);
    if(i<Dir) Ordena(A, i, Dir, trocas, comparacoes);
    }

void Quicksort(int *A, int n, int *trocas, int *comparacoes)
    {
        Ordena(A, 0, n-1, trocas, comparacoes);
    }

void bolha(int *vet, int n)
{
    int i, j, aux, troca;
    for(i=0;i<n;i++)
    {
        troca=0;
        for(j=0;j<n-1-i;j++)
        {
            if(vet[j]>vet[j+1]){
                aux=vet[j];
                vet[j]=vet[j+1];
                vet[j+1]=aux;
                troca=1;
            }
        }
        if(troca==0)
                return;
    }
    return;
}
