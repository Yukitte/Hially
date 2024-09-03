#include <stdio.h>
#include <math.h>

int main(){ 
    /*
    Sem raiz 1 2 3
    Raiz unica 1 -10 25 
    Raizes 1 -2 -15 */

    int A = 1,B = -10 ,C = 25,delta;
    double X1, X2 ;

//Transformando formula de bhaskara em codigo
delta = (B*B) - 4 * A * C ;
X1 = (-B+ sqrt(delta)) / (2*A);
X2 = (-B- sqrt(delta)) / (2*A);

//Caso raiz for menor que zero
if(delta < 0){
    printf("\nNão existe raiz");

//Duas alternativas pra verificar se delta for igual a 0 
}else if(delta == 0){
    if(X1>0){
        printf("\nRaiz única :%.2lf",X1);
    }else{
        printf("\nRaiz única :%.2lf",X2);
    }

//Se for maior que 0
}else{
    printf("As duas raizes são:%.2lf %.2lf", X1, X2);
}
    
    
return 0 ;
}