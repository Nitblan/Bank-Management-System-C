#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "cajero.h"

void inicializar_cuenta(CuentaBancaria* cuenta, int numero_cuenta, int nip, float saldo) {
  cuenta->numero_cuenta = numero_cuenta;
  cuenta->nip = nip;
  cuenta->saldo = saldo;
  cuenta->nombre_titular = NULL;
}


void modificar_nombre(CuentaBancaria* cuenta, char* nuevo_nombre) {
  if(cuenta->nombre_titular != NULL){
    free(cuenta->nombre_titular);
  }
  cuenta->nombre_titular = malloc(strlen(nuevo_nombre)+ 1);
  if(cuenta->nombre_titular != NULL){
    strcpy(cuenta->nombre_titular, nuevo_nombre);
  }


}

int modificar_nip(CuentaBancaria* cuenta, int nip_actual, int nip_nuevo) {
  if( cuenta -> nip == nip_actual) {
    cuenta -> nip = nip_nuevo;
    return 1;
  }
  return 0;
}

int retirar_saldo(CuentaBancaria* cuenta, float monto) {
  if (monto>0 && cuenta->saldo >=monto){
    cuenta->saldo -=monto;
    return 1;
  }
  return 0;
}

int ingresar_saldo(CuentaBancaria* cuenta, float monto) {
  if( monto > 0 ) {
    cuenta -> saldo += monto;
    return 1;
  }
  return 0;
}

void imprimir_cuenta(CuentaBancaria* cuenta) {
  printf("-----------------------------------------------------------------");
  printf("\t\tCUENTA BANCARIA\t\t");
  printf("----------------------------------------------------------------");
  if (cuenta->nombre_titular != NULL){
    printf("\n[+] Titular: %s\n", cuenta-> nombre_titular);
  }else{
    printf("\n[!] Titular sin asignar...\n");
  }
  printf("[+] Numero de cuenta. %d\n", cuenta-> numero_cuenta);
  printf("[+] NIP: %d\n", cuenta->nip);
  printf("[+] Saldo: %.2f\n", cuenta-> saldo);
  printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
  printf("\n");
}
