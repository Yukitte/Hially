// Elabore um algoritmo que permita ao usuário realizar a compra de frutas. 
// Assim, apresente a lista de frutas disponíveis, abaixo, com seus respectivos 
// valores. O algoritmo deve permitir ao usuário retomar o menu frutas quantas 
// vezes quiser, e solicitar a quantidade de frutas. Ao final, apresente o valor 
// total da compra. 

// 1 => ABACAXI – 5,00 a unidade 2 => MAÇA – 1,00 a unidade 
// 3 => PERA – 4,00 a unidade 

#include <stdio.h>
#include <math.h>

int main(){
    int swi,whi,qtd;
    float valor,total;
do{
    printf("Digite a fruta escolhida:");
    scanf("%d",&swi);
    fflush;

    printf("\nDigite a quantidade:");
    scanf("%d",&qtd);

        switch(swi){
        case 1:
        valor=5,00 ;
        total+=valor*qtd;
        break;

        case 2:
        valor=1,00 ;
        total+=valor*qtd;
        break;

        case 3:
        valor=4,00 ;
        total+=valor*qtd;
        break;
        }

    
    printf("\nDeseja adicionar um novo item?\n1-sim / 0-Nao\n");
    scanf("%d",&whi);

}while ( whi !=0);   
printf("O valor das frutas é :%.2lf",total);


return 0;
}
