#include <locale.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main ()
{
    setlocale(LC_ALL,"portuguese");
 
 char usuario = "computador123";
 int senha = 123456;
 
 
 do  {
 
 
 printf("informe usuario\n");
 scanf("%s", &usuario);
 
 printf("informe senha\n");
 scanf("%d", &senha);
 
 if (usuario == "computador123" || senha == 123456) {
 	  printf("Acesso autorizado\n");
 } else {
  		printf("Acesso negado\n");
 }
 

}while(usuario != "computador123" &&  senha != 123456);
 
 
 
 
 
 return 0;   
}

