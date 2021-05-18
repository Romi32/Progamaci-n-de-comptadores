#include <stdio.h>
int main(){
int num1, num2, num3;
printf("Ingrese un primer número:\n");
scanf("%d", &num1);
printf("Ingrese un segundo número:\n");
scanf("%d", &num2);
printf("Ingrese un tercer número:\n");
scanf("%d", &num3);

if(num1>num2 && num1> num3){
  printf("El %d es mayor\n", num1);
}if(num2>num1 && num2>num3){
  printf("El %d es mayor", num2);
}if(num3>num2 && num3>num1){
  scanf("El %d es mayor", num3);
}if (num1==num2==num3){
  printf("Los tres números son iguales");
}

  return 0;

}