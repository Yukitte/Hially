#include <stdio.h>
#include <math.h>

int main (){
    int a[5] = {10 ,0  , -2, -5 ,16},soma;

    soma = (a[1]+a[0]+a[4]);

    printf("soma: %d \n",soma );
    a[4] =100;
   
    for (int i = 0; i < 6; i++)
    {
        if (i == 0||i == 1 || i ==4);
        {
            soma += a[i];
        }
        if (i==4)
        {
            a[4] == 100;
        }
        printf("Nova soma: %d\n",soma);
        
    }
    




    return 0;
}