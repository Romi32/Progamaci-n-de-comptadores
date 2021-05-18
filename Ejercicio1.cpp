#include <stdio.h>
int numero;
int main(){
printf("Ingrese un número:\n");
  scanf("%d", &numero);
  if (numero%2 == 0){
    printf("El número es par\n");
  }else{
    printf("El número es impar\n");
  }
  return 0;
}