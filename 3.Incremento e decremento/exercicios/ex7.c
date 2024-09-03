#include <stdio.h>
#include <math.h>

int main(){
    char sexo, olhos, cabelos;
    int opcao, totalhab = 0, totalesp = 0, totalM = 0, totalF = 0, idade;
    float salario, porcentagem;

    do{
       
        //sexo
        do{
            fflush(stdin);
            printf("\nDigite 'm' para masculino e 'f' para feminino:");
            scanf("%c", &sexo);
            if (sexo=='m'){
                totalM++;
            }else if (sexo=='f'){
                totalF++;
            }else{
                printf("\nOpção invalida");
            }

        }while (sexo!='m'&& sexo !='f');

        //Olhos
        do{
                fflush(stdin);
                printf("\nDigite a cor dos olhos: a (azuis),v(verdes),c(castanhos),p(pretos)");
                scanf("%c", &olhos);
                if (olhos !='a'&& olhos !='v' && olhos !='c' && olhos !='v' && olhos !='p'){
                    printf("\nOpção invalida");
                }
                
        }while(olhos !='a'&& olhos !='v' && olhos !='c' && olhos !='v' && olhos !='p');
       
       //Cabelo
        do{
                fflush(stdin);
                printf("\nDigite a cor dos cabelos:");
                scanf("%c", &cabelos);
                if (cabelos !='l'&& cabelos !='p' && cabelos !='c' && cabelos !='r'){
                    printf("\nOpção invalida");
                }
                
        }while(cabelos !='l'&& cabelos !='p' && cabelos !='c' && cabelos !='r');

        //idade
        do{
            fflush(stdin);
            printf("\nDigite sua idade:");
            scanf("%d", &idade);
            if(idade<10 ||idade>100){
                printf("\nOpção invalida");
            }

        }while(idade<10 ||idade>100);   
       
       //Salário
         do{
            fflush(stdin);
            printf("\nDigite o Salário:");
            scanf("%f", &salario);
            if(salario<0){
                printf("\nOpção invalida");
            }

        }while(salario<0);   

        //Especifico
        if(sexo=='f' && olhos == 'c' && cabelos == 'c'&& (idade>18 && idade<35)){
            totalesp++;

        }
       

     totalhab ++;
    printf("\nDeseja adicionar um novo habitante?\n1-Sim 2-Não");
    scanf("%d",&opcao);
    }while (opcao !=2);

    porcentagem = (float)totalesp/totalhab*100;


    printf("\n\nTotal de habitantes cadastrados: %d\n",totalhab);
    printf("Total de Mulheres: %d\n",totalF);
    printf("Total de Homens: %d\n",totalM);
    printf("Porcentagem de Pessoas:%.2f %%",porcentagem);

   
    



return 0;
}