/*Dados três valores A, B e C, construa um algoritmo, 
que imprima os valores de forma ascendente (do menor para o maior). */
#include <stdio.h>
#include <math.h>

int main (){
 int A =10 , B=20, C=30;


if(A>B && A>C){
    printf("%d ",A);
    if(B>C){
        printf("%d %d", B, C);
    }else if(C>B){
        printf(" %d %d",C , B);
    }

}else if (B>A && B>C){
    printf(" %d",B);
    if(A>C){
        printf(" %d %d", A , C);

    }else if (C>A){
        printf(" %d %d", C, A);
    }

}else if (C>A && C>B){
    printf(" %d",C);
    if(B>A){
        printf(" %d %d", B , A);

    }else if (A>B){
        printf(" %d %d", A,B);
    }
}

    return 0;
}