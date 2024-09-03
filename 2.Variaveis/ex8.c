#include <stdio.h>
#include <math.h>

int main(){ 
    int idade , trabalho;

printf("Escreva respectivamente sua idade e seus anos de trabalho:");
scanf("%d %d ", &idade, &trabalho);


if(idade >= 65){
    printf("APOSENTADO");
    
}else if (trabalho>= 30){
    printf("APOSENTADO");
        
}else if (idade >=60 && trabalho>=25 ){
    printf("APOSENTADO");
}else {
    printf("Trabalha mais");
}
    

    return 0 ;
}