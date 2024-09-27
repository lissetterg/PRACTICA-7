/*Angela Lissette Reyes Gómez*/
#include <stdio.h>
int main() {
  char op = '\0';
  printf("\tMenú\n\n");
  printf("Elegir la opcion deseada\n");
  printf("a) ingresar\n");
  printf("b) registrarse\n");
  printf("c) salir\n");
  scanf("%c", &op);
  switch(op)
{
default: 
printf("opcion no valida.\n");
break;
  case 'a':
printf("Se seleccionó 'Ingresar'.\n");
break;
  case 'b':
printf("Se seleccionó 'Registrarse'.\n");
break;
  case 'c':
printf("Se seleccionó 'Salir'.\n");
break;
}
return 0;
}
  
