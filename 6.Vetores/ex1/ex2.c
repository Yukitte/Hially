#include <stdio.h>
#include <math.h>

int main (){
    int inteiros[6];

    for (int i = 0; i < 6; i++){
        printf("Digite os numeros: ");
        scanf("%d", &inteiros[i]);
    }

    for (int i = 0; i < 6; i++)
    {
        printf("\nInteiros [%d]:%d ", i , inteiros[i]);
    }
    
    

return 0;
}