#include <locale.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main ()
{
    setlocale(LC_ALL,"portuguese");

  float valor1;
  float valor2;
  float resultado;
  char escolha ;
  
  printf("Operações disponíveis\n");
  printf(" (+) ADIÇÃO \n");
  printf(" (-) SUBTRAÇÃO \n");
  printf(" (/) DIVISÃO \n"); 
  printf(" (+) MULTIPLICAÇÃO \n");

  printf ("informe operacão\n");
  scanf ("%c", &escolha);


  printf ("Informe primeiro valor\n");
  scanf ("%f", &valor1);


  printf ("Informe segundo valor\n");
  scanf ("%f", &valor2);



  switch (escolha)
    {

    case '+':
      resultado = valor1 + valor2;
      break;


    case '-':
      resultado = valor1 - valor2;
      break;


    case '/':
      resultado = valor1 / valor2;
      break;


    case '*':
      resultado = valor1 * valor2;
      break;

    default:
      printf ("operacão inválida\n");
      break;
    }

  printf ("Resultado: %.2f", resultado);



  return 0;
}
