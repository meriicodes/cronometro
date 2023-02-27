#include<stdio.h> 

int main (){
int n;

   printf("escolha um número entre 0 e 4:\n");
scanf("%d",&n);

if (n>4 || n<0){
printf("inválido");
   return 1;
   } else {

if (n==0)
   printf("zero");
else
   switch (n){
case 1: printf("um"); 
   break;
case 2: printf("dois");
   break;
case 3: printf("três");
   break;
case 4: printf("quatro");
   break;

return 0;
}
   }
     }