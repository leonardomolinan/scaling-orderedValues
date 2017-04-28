#include "structs2.h"

int main()
{
    clock_t start1, end1, start2, end2, start3, end3, start4, end4;
    double cpu_time_used1, cpu_time_used2, cpu_time_used3, cpu_time_used4;

    int i, n, trocas=0, comparacoes=0;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    printf("\n");

    int *vet1 = (int) malloc(n*sizeof(int));/*
    int *vet2 = (int) malloc(n*sizeof(int));
    int *vet3 = (int) malloc(n*sizeof(int));
    int *vet4 = (int) malloc(n*sizeof(int));*/

    srand(time(NULL));
    for(i=0; i<n; i++){
        vet1[i] = rand()%451;

    }

    /*srand(time(NULL));
    for(i=0; i<n; i++){
        vet2[i] = rand()%451;

    }srand(time(NULL));
    for(i=0; i<n; i++){
        vet3[i] = rand()%451;

    }srand(time(NULL));
    for(i=0; i<n; i++){
        vet4[i] = rand()%451;

    }

    bubbleSort1(n, vet1);
    bubbleSort1(n, vet2);
    bubbleSort1(n, vet3);
    bubbleSort1(n, vet4);*/

    printf("Vetor: ");
    for(i=0; i<n; i++)
        printf("%d ", vet1[i]);
    printf("\n");

    bolha(vet1, n);

    printf("Vetor organizado: ");
    for(i=0; i<n; i++)
        printf("%d ", vet1[i]);
    printf("\n");


    /*start1 = clock();
    bubbleSort2(n, vet1);
    end1 = clock();

    start2 = clock();
    organiza(n, vet2);
    end2 = clock();

    start3 = clock();
    insertionSort(vet3, n);
    end3 = clock();

    start4 = clock();
    Quicksort(vet4, n, &trocas, &comparacoes);
    end4 = clock();

    cpu_time_used1 = ((double) (end1-start1))/CLOCKS_PER_SEC;
    cpu_time_used2 = ((double) (end2-start2))/CLOCKS_PER_SEC;
    cpu_time_used3 = ((double) (end3-start3))/CLOCKS_PER_SEC;
    cpu_time_used4 = ((double) (end4-start4))/CLOCKS_PER_SEC;

    printf("\nTempo gasto BubbleSort: %lf", cpu_time_used1);
    printf("\nTempo gasto SelectionSort: %lf", cpu_time_used2);
    printf("\nTempo gasto InsertionSort: %lf", cpu_time_used3);
    printf("\nTempo gasto QuikSort: %lf", cpu_time_used4);
    printf("\nTrocas QuickSort: %d", trocas);
    printf("\nComparacoes QuickSort: %d", comparacoes);*/

return 0;
}
