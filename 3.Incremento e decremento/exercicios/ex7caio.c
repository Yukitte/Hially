#include<stdio.h>
#include<math.h>

int main(){

    char sexo, olhos, cabelo;
    int totalHabitantes = 0, totalEspecifico = 0, totalM = 0, totalF = 0, idade;
    float salario, porcetagem;

    do{
        totalHabitantes ++;

        do{
            fflush(stdin);
            printf("igite o sexo: (m ou f)\n");
            scanf("%c", &sexo);
            if (sexo != 'm' && sexo != 'f')
            {
                printf("\nOpcao Invalida");
            }
            

        }while (sexo != 'm' && sexo != 'f');

        do{
                fflush(stdin);
                printf("\nDigite a cor dos olhos: a (azuis), v (verdes), c (castanhos), p (pretos)");
                scanf("%c", &olhos);
                if (olhos != 'a' && olhos != 'p' && olhos != 'c' && olhos != 'v')
                {
                    printf("\nOpcao Invalida");
                }

        }while(olhos != 'a' && olhos != 'p' && olhos != 'c' && olhos != 'v');



    printf("Deseja cadastrar um novo habitante: 1 sim 2 Nao\n");
    scanf("%d", &idade);
 
    } while (idade != 2);
    










}