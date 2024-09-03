#include<stdio.h>
#include<math.h>

int main(){
    int vetor[8],x,y;

    for(int i =0 ;i <8; i++){
        printf("Digite o numero em vetor [%d]",i);
        scanf("%d",&vetor[i]);
    }
    do{
        printf("Digite o valor de x:");
        scanf("%d",&x);
        printf("Digite o valor de y:");
        scanf("%d",&y);
        if (x<0 || x>7 && y<0 || y>7)
        {
            printf("Indice Invalido");

        }
        
    } while (x<0 || x>7 && y<0 || y>7);

    int soma =vetor[x] + vetor[y];
    printf("Soma do indice[%d]+ indice[%d] = %d",x,y ,soma);
    


return 0 ;
}