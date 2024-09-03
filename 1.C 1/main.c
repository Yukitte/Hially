#include <stdio.h>
 int main() {
     
     //int numero , float numero decimal e char palavras
     char nome[200];
     int ano;
     float salario;
     int carreira;
     
 printf("Escreva respectivamente seu nome, ano de nascimento,\n ultimo salario e anos de carreira:\n");
     scanf("%s %i %f %i", &nome, &ano, &salario, &carreira );
     
 printf("_\n");
     printf("\nOs dados do cliente são:\n");
     printf("Nome:%s\n" ,nome );
     printf("Ano de Nascimento:%i\n", ano);
     printf("Ultimo Salário: %.3f\n", salario);
     printf("Tempo de Carreira:%i\n", carreira);
     
return 0;
}