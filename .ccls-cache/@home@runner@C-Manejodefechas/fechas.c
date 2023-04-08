#include "fechas.h"
#include <stdio.h>


struct fechaEstructura{
    char dia[2];
    char mes[2];
    char anio[4];
};

Fecha crearFecha(char dia[2],char mes[2],char anio[4]){
  Fecha f = malloc(sizeof(struct fechaEstructura));

    strcpy(f->dia, dia);
    strcpy(f->mes, mes);
    strcpy(f->anio, anio);

  return f;
};

void mostrarFecha(Fecha f){
  printf("%s/%s/%s",f->dia, f->mes, f->anio);
}

char* getFecha(Fecha f){
  char fecha[10] = "";
  strcat(fecha,f->dia);
  strcat(fecha,'/');
  strcat(fecha,f->mes);
  strcat(fecha,'/');
  strcat(fecha,f->anio);
  return fecha;
};

int getDia(Fecha f);

int getMes(Fecha f);

int getAnio(Fecha f);

void setFecha(Fecha f, char nuevaFecha[10]);

int devolverAniosAHoy(Fecha f);