#include <stdio.h>
#include <math.h>

int main(){ 
    double salario,reajuste,bonus;
    int servico;

printf("Escreva seu sálario:");
scanf("%lf",&salario);

printf("Escreva seu tempo de serviço:");
scanf("%d",&servico);
    

//sobre o Tempo de serviço

if(servico >= 1 && servico <=3){
    bonus =  100;

}else if (servico >= 4 && servico <=6){
    bonus =  200;

}else if (servico >= 7 && servico <10){
    bonus =  300;

}else if (servico >= 10){
    bonus =  500;

}else {
    printf("\nSem bônus");
}

//sobre o salario 
if(salario <= 500){

    reajuste= bonus + salario + (25*salario)/100;
    printf("\nO salario reajustado :%.2lf",reajuste);

}else if(salario >= 501 && salario <= 1000){

    reajuste= bonus + salario + (20*salario)/100;
    printf("\nO salario reajustado :%.2lf",reajuste);

}else if(salario >= 1001 && salario <=1500){

    reajuste= bonus + salario + (15*salario)/100;
    printf("\nO salario reajustado :%.2lf",reajuste);

}else if(salario >= 1501 && salario <=2000){

    reajuste= bonus + salario + (10*salario)/100;
    printf("\nO salario reajustado :%.2lf",reajuste);

}else {
    printf("\nSem reajuste ");
}
    



    return 0 ;
}