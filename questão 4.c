#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main () {
	
	int idade;
	
	
	setlocale(LC_ALL, "portuguese");
	
	printf("informe seua idade");
	scanf("%d", &idade);

   if (idade >= 18) {
     printf("Acesso permitodo");
   } else {
   	printf("Acesso negado");
   }
	
	
	return 0;
}
