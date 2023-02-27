#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h> //gerar números
int main()

{
 int num,sort,tent=0;
 char c;
 setlocale(LC_ALL,"Portuguese");
 srand(time(NULL));
 sort = rand() % 100; //número aleatório

 do{
 printf("tente adivinhar o número: \n");
 scanf("%d",&num);

 if(num==sort){
  printf("\t você acertou!!");
  break;
  }
 if(num<sort){
 printf("\ndigite um numero maior");
 }

 else{
 printf("\ndigite um número menor");
 }
 
 printf("\ntentar de novo? digite s ou n \n");
 fflush(stdin);
 scanf("%s",&c);
}
while(c=='s'||c=='S');
return 0;
}