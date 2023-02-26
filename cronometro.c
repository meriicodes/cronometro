#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
int main()
{
 setlocale(LC_ALL,'Portuguese');
 setConsoleTitle("Cronometro");
 
 int sec=0, min=0, hr=0;
 
 int i=0;
 do{
 system("clr");
 printf("cronometro \n\n");
 printf("\n\t %dh:%dm:%ds \n",hr,min,sec);
 
if(sec==60){
  min=0;
  hr++;
}
if(min==60){
  min=0
  hr++;
}
if(hr==24){
  hr=0
  }
Sleep(1000);
sec++;
} while(i==0);
  
return 0;
}
