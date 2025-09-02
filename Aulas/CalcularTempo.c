#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 10000

int main() {

    int V[TAMANHO];

    srand(time(NULL));

    for(int i = 0; i < TAMANHO; i++) V[i] = rand();

    clock_t T0 = clock();
    for(int i = 0; i < TAMANHO; i++) printf("%d\t", V[i]);
    clock_t TF = clock();

    double TempoCPU = (TF - T0) / CLOCKS_PER_SEC;
    printf("Tempo de CPU: %.3f segundos\n", TempoCPU);

    // observação
}