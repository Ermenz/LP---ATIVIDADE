#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>


int main () {

setlocale(LC_ALL, "portuguese");

int numero;
float soma = 0;
int par = 0;
int impar = 0;
float resultadopar;
float resultadoimpar;
int j = 0;
int h  = 0;
char resposta;




 do {

  printf("Informe um valor\n");	
  scanf("%d", &numero);	


 
  if (numero % 2 == 0){
   par+= numero;
   h++;
   }

  if (numero % 2 != 0){
   impar+= numero;
   j++;
   }
   
   
   
  printf("Digite (S) para sim ou (N) para não\n");
  printf("Deseja adicionar mais algum número ?\n");	
  scanf("%s", &resposta);	

  }while (resposta != 'N');

  resultadopar= par/h;
  resultadoimpar= impar/j;

  printf("\n");


  printf("Quantidadede pares: %d  \n", h);
  printf("Quantidadede impares: %d  \n", j);
  printf("media par %.2f \n", resultadopar);
  printf("media impar  %.2f \n", resultadoimpar);


return 0;

 } 
