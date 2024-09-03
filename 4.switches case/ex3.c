#include <stdio.h>
#include <math.h>

int main(){ 
    /*
    Estrutura switch case */
int prato,sobremesa,bebida,cal, cal1,cal2 , total;


printf("Digite o prato:");
scanf("%d", &prato);

printf("Digite o codigo:");
scanf("%d", &sobremesa);

printf("Digite a bebida:");
scanf("%d", &bebida);

switch(prato){
    case 1:
    cal= 180;
    break;
    
    case 2:
    cal= 230;
    break;

    case 3:
    cal= 250;
    break;

    case 4:
    cal= 350;
    break;

    default:
    printf("ERROR");
}

switch(sobremesa){
    case 1:
    cal1= 75;
    break;
    
    case 2:
    cal1= 110;
    break;

    case 3:
    cal1= 170;
    break;

    case 4:
    cal1= 200;
    break;

    default:
    printf("ERROR");
}

switch(bebida){
    case 1:
    cal2= 20;
    break;
    
    case 2:
    cal2= 70;
    break;

    case 3:
    cal2= 100;
    break;

    case 4:
    cal2= 65;
    break;

    default:
    printf("ERROR");
}

total = cal + cal1 + cal2 ;
printf("A caloria total é de :%d",total);
    
return 0 ;
}




