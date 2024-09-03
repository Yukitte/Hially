#include <stdio.h>
#include <math.h>

int main(){ 
    /*
    Estrutura switch case */
    int codigo,quantidade,opcao;
    double total ,valor;

do{
    printf("digite o codigo:");
    scanf("%d", &codigo);

    printf("digite a quantidade:");
    scanf("%d", &quantidade);

    switch(codigo){
        case 100:
        valor = 10.10;
        total += valor * quantidade;
        break;
        
        case 101:
        valor = 8.30;
        total += valor * quantidade;
        break;

        case 102:
        valor = 8.50;
        total += valor * quantidade;
        break;
        
        case 103:
        valor = 12.50;
        total += valor * quantidade;
        break;

        case 104:
        valor = 13.25;
        total += valor * quantidade;
        break;

        printf("O valor do lanche é :%.2lf",total);
        default:
        printf("ERROR");
    }
    printf("O valor do lanche é :%.2lf",total);

    printf("\nDeseja adicionar um novo item?\n1-sim / 0-Nao\n");
    scanf("%d",&opcao);

}while ( opcao !=0);   
return 0 ;
}





