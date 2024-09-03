#include<stdio.h>

int main(){
    float soma,media;
    char nomes[3][20];
    float notas[3][10];

    for(int i=0 ; i<3;i++){
        printf("Digite o nome do aluno  ");
        fgets(nomes[i] , 20 , stdin);
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
        printf("Digite a nota do aluno %s: ", nomes[i]);
        scanf("%f", &notas[i][j]);
        }
    }
    
    for (int i = 0; i < 3; i++){
        soma = 0;
        for (int j = 0; j < 3; j++){
            soma += notas[i][j];
            
        }   
        media = soma/3;
    printf("\na media do aluno %s é : %.2f " ,nomes[i] , media);
    }
  
    

return 0;
}