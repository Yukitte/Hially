#include <stdio.h>

main(){

    int vetor[10], maior, menor,pMaior=0, pMenor=0;

    for(int i = 0; i < 10; i++){
        printf("\nDigite os valores");
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0];
    menor = vetor[0];

    for (int i = 0; i < 10; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
            pMaior = i;
        }
        if(vetor[i] < menor){
            menor = vetor[i];
            pMenor = i;
        }
    }
    printf("Maior: %d, Posicao: %d Menor: %d, Posicao: %d", maior, pMaior, menor, pMenor);

}