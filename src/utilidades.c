#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cajero.h"
#include "banco.h"
#include "utilidades.h"


//imprimir lineas ----

void ImprimirLinea(int longitud){
  for(int i = 0; i < longitud; i++ ){
    printf("-");
  }
  printf("\n");
}



// Mostrar menu con scanf

int MostrarMenu(void){
  printf("\n\n[+]¡Bienvenido a la banca de Ñu!\n\n");
  ImprimirLinea(40);
  printf("\n\t\tMenu\n");
  ImprimirLinea(40);
  printf("\t\n[+] 0 - Salir del menu");
  printf("\t\n[+] 1 - Registrar nombre");
  printf("\t\n[+] 2 - Depositar Dinero");
  printf("\t\n[+] 3 - Retirar Dinero");
  printf("\t\n[+] 4 - Cambiar NIP");
  printf("\t\n[+] 5 - Consultar cuenta");
  
  printf("\n\nSeleccione su opcion: ");
  int menu;
  scanf("%d", &menu);
  return menu;
}

// Salir del menu

int Salir_del_menu(void){
  char salir;
  char confirmar[20];

  do{
    printf("\n[!] Estas seguro que quieres salir?: (y/n) ");
    scanf(" %c", &salir);
    if (salir == 'y'){
      printf("\n[!] Escriba \"salir\" para confirmar la salida: ");
      scanf("%19s", confirmar);
      if(strcmp(confirmar, "salir") == 0){
        printf("\n\t[+] Gracias por usar nuestra banca de Ñu :)");
        return 1;
      }
      printf("\n[+] Confirmacion incorrecta\n");
      return 0;
    }
    else if (salir == 'n'){
      printf("\n[-] Regresando al Menu...");
      return 0;
    } 
    else
      printf("\n[!] la opcion es incorracta");
  }while(1);
}

// imprimir cuenta bancaria
//
//

void imprimir_cuenta_bancaria(void){
  ImprimirLinea(40);
  printf("\n\tCuenta Bancaria\n");
  ImprimirLinea(40);
  printf("\n");
}

void GraciasC(void){
  char OFINAL;
  printf("\n\n\tDesean ver algo extra? (y/n) ");
  scanf(" %c", &OFINAL);
  
  OFINAL == 'y'
  ?
  printf("\n\n\t[!] i love C ": printf("\n[*] Nothing more...\n");
  

  printf("\n\n\t[*] Time spended: 9 H 23M 43s");
}
