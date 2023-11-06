#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>


int main () {

setlocale(LC_ALL, "portuguese");

int codigo;
float numero;
float conversao;




printf("Conversões disponíveis\n");
printf("1 - Quilometros para milhas\n");
printf("2 - Celsius para  Fahrenheit\n");
printf("3 - Metros para  Centimetros\n");
printf("4 - Decimetro  para  Metro\n");
printf("5 - Hectares para  Metros quadrados\n");
printf("O - programa sera encerrado\n");


  	


do {
	
  printf("informe o numero da conversão\n");
  scanf("%d", &codigo);
  
  printf("Opção %d escolhida\n", codigo);
  
  printf("informe o número que você deseja converter\n");
  scanf("%f", &numero);
	
switch (codigo) {
	
case 1:

conversao = (numero / 1.609) ; 
break;

case 2:

conversao = (numero * 1.8) + 32; 
break;	

case 3:

conversao = numero/100; 
break;	

case 4:

conversao  = numero * 10; 
break;	

case 5:

conversao  = numero * 10000; 
break;	
	
	
case 0:
("\n");	
printf("Encerrando programa\n");
break;

default :
printf("Código inválido\n");
break;
}
	

printf ("Resultado da conversão %.2f\n", conversao );
	
} while (codigo != 0);






return 0;
}

