#include <stdio.h>
int contraseña = 21006302;
int main() {
printf("Ingrese contraseña (rut sin digito verificador)\n");
scanf("%d", &contraseña);
if(contraseña==21006302){
  printf("Bienvenid@ Usuario");
}else {
  printf("Contraseña Incorrecta. Tiene 2 intentos más\n");
  printf("Ingrese contraseña nuevamente\n");
  scanf("%d", &contraseña);
  if(contraseña==21006302){
    printf("Bienvenid@ Usuario");
  }else {
    printf("Contraseña Incorrecta. Tiene un intento más\n");
    printf("Ingrese contraseña nuevamente\n");
    scanf("%d", &contraseña);
    if(contraseña==21006302){
      printf("Bienvenid@ Usuario");
    }else {
      printf("Usuario Bloqueado");
    }

  }
}
}

  