#include <stdio.h>
#include <math.h>

int main(){ 
    int num1,ultimodigito;

printf("Digite um numero :");
scanf("%d",&num1);


ultimodigito = (num1 %10);
if(ultimodigito == 1 || ultimodigito == 3 || 
ultimodigito == 5 || ultimodigito == 7 || 
ultimodigito == 9 ){

    printf("Impar");
    
}else{

    printf("Par");
}


return 0 ;
}