// Se tiene que declarar los def, es como ponerlas al inicio para que jale el archivo los def

#ifndef BANCO_H
#define BANCO_H
#include "cajero.h"

void registrar_nombre(CuentaBancaria* cuenta);

void depositar_dinero(CuentaBancaria* cuenta);

void retirar_dinero(CuentaBancaria* cuenta);

void cambiar_nip_menu(CuentaBancaria* cuenta);

void consultar_cuenta(CuentaBancaria* cuenta);
#endif
