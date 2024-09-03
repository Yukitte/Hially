#include <stdio.h>
#include <math.h>

int main(){
    int lado1,lado2,lado3;

    printf("Digite 3 numeros consecultivos:");
    scanf("%d %d %d",&lado1,&lado2,&lado3);

if (lado1 + lado2 >lado3 && lado2 + lado3 > lado1 &&lado1 + lado3>lado2)
    {
    printf("é um triangulo");

    // definindo o tipo de triangulo 

    if (lado1 == lado2 && lado1 == lado3 && lado2 == lado3)
    {printf(" equilatero ");

    }else if (lado1 != lado2 && lado1 != lado3 && lado2 != lado3)
    {
        printf(" escaleno ");
    }else 
    {
        printf(" isósceles ");
    }

}else{
printf("não é um triangulo");
}


    
    
    

return 0;    
}