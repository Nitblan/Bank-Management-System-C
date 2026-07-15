#include <stdio.h>
#include "banco.h"
#include "cajero.h"
#include "utilidades.h"

// 1

void registrar_nombre(CuentaBancaria* cuenta){
  char nombre[50];
  printf("\n[+] Ingrese el nombre del titular: ");
  scanf(" %49[^\n]", nombre);
  modificar_nombre(cuenta, nombre);
  printf("\n[+] El nombre registrado correctamente\n");
}

// 2
void depositar_dinero(CuentaBancaria* cuenta){
  float monto;
  printf("\n[+] Cantidad a depositar: ");
  scanf("%f", &monto);

  if(ingresar_saldo(cuenta, monto)){
    printf("\n[+] El deposito se ha realizado correctamente");
    printf("\n[+] Se han depositado: $%f" ,monto);
    printf("\n[+] Su saldo ahora es de %.2f", cuenta->saldo);
  }
  else{
    printf("\n[!] La cantidad que ingresaste es invalida\n");
    }
}


//3 
void retirar_dinero(CuentaBancaria* cuenta){
  float monto;

  printf("\n[+] Cantidad a retirar: ");
  scanf("%f", &monto);

  if(retirar_saldo(cuenta, monto)){
    printf("\n[+] Retiro realizado correctamente\n");
    printf("\n[+] Su saldo ahora es de %.2f", cuenta->saldo);
  }
  else{
    printf("\n[!] Fondos insuficientes o cantidad invalida\n");
  }
}

// 4

void cambiar_nip_menu(CuentaBancaria* cuenta)
{
  int actual;
  int nuevo;
  printf("\n[+] Ingrese su NIP actual: ");
  scanf("%d", &actual);
  printf("[+] Ingrese el nuevo NIP: ");
  scanf("%d", &nuevo);
  if(modificar_nip(cuenta, actual, nuevo)){
    printf("\n[+] NIP cambiado correctamente\n");
  }
  else{
    printf("\n[!] NIP actual incorrecto\n");
  }
}

//5 

void consultar_cuenta(CuentaBancaria* cuenta){
  imprimir_cuenta(cuenta);
}

