//Programa para encontrar o digito verificador de um sequencia de 3 numeros
#include <stdio.h>
int main() {
  // declaração de todas as Variaves no calculo
  int conta, calculo, calculo2, calculo3, calculo4, calculo5, calculo6, calculo7, controledeloop, soma, soma2, x, v, c, soma3, b = 1, n = 2;
  //laço de repetiçoes do codigo
for (controledeloop = 1; controledeloop <= 100; controledeloop++){
  printf("Numero da Conta:");
  scanf("%i", &conta);  
  // calculo de toda a operação reduzido e maximixado ao maximo possivel para não dar erros futuros
calculo3 = (conta / 100) % 10, calculo2 = (conta/10) % 10, calculo = conta & 10, soma = calculo * 100 + calculo2 * 10 + calculo3 * 1, soma2 = soma + conta; ;
calculo4 = (soma2 / 100) % 10, calculo5 = (soma2/10)%10, calculo6 = soma2 & 10, x = calculo4 * 1, c = calculo5 * 2, v = calculo6 * 3, soma3 = x+c+v ;
  //mostrando resultado do Digito verifiador 
  printf("Verificador:""%i ", soma3 % 10 );
printf("\n");}  
  return 0;
}
