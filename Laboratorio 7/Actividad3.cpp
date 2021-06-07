#include <stdio.h>
int num;
int x;
int sobra;
int main(){
  printf("Ingrese un número:");
  scanf("%d", &num);
  printf("Los divisores son\n");
  for(x=1; x<=num; x++){
  sobra=num%x;
  if(sobra==0){
    printf("%d, ",x);

  }  
  }
  return 0;
}
