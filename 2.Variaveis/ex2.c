#include <stdio.h>
#include <math.h>

int main() {
 int A = 4, B = 2, C = 1, D = 3, maior, menor;
if(A>B && A>C && A>D){
   maior =A;
 }else if (B>A && B>C && B>D){
   maior = B;

 }else if (C>A && C>B && C>D){
   maior = C;

 }else{
   maior = D;
 }
if(A<B && A<C && A<D){
   menor =A;
 }else if (B<A && B<C && B<D){
   menor = B;

 }else if (C<A && C<B && C<D){
   menor = C;

 }else{
   menor = D;
 }
 printf("Maior: %d\n", maior);
printf("Menor: %d",menor);

return 0;
}