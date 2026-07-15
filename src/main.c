#include <stdio.h>

#include <stdlib.h>

#include <string.h>

// no estandar
#include "cajero.h"

#include "utilidades.h"

#include "banco.h"


int main() {
  int menu;
  int salir = 0;
  CuentaBancaria cuenta;
  inicializar_cuenta(&cuenta, 1001, 1234, 500);
    
  do{
    menu = MostrarMenu();
    switch(menu){
      case 0:
        salir = Salir_del_menu();    
        break;
      case 1:
        // Función que ejecuta la lógica de la opción 1.
        registrar_nombre(&cuenta);
        break;
      case 2:
        depositar_dinero(&cuenta);
        // Función que ejecuta la lógica de la opción 2.
        break;
      case 3:
        retirar_dinero(&cuenta);
        // Función que ejecuta la lógica de la opción 3.
        break;
      case 4:
        cambiar_nip_menu(&cuenta);
        // Función que ejecuta la lógica de la opción 4.
        break;
      case 5:
        consultar_cuenta(&cuenta);
        break;
      default:
        printf("Opción no válida.\n");
    }
  }while(salir==0);



  //asegurarnos de liberar la memoria
  if(cuenta.nombre_titular != NULL){
    free(cuenta.nombre_titular);
  }else{
    printf("\n\n\t[-] No hay memoria por liberar");
  }
  GraciasC();
return 0;
}
