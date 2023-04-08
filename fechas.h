#include<time.h>

struct fechaEstructura;

typedef struct fechaEstructura* Fecha;

Fecha crearFecha(char dia[2],char mes[2],char anio[4] );

void mostrarFecha(Fecha f);

char* getFecha(Fecha f);

int getDia(Fecha f);

int getMes(Fecha f);

int getAnio(Fecha f);

void setFecha(Fecha f, char nuevaFecha[10]);

int devolverAniosAHoy(Fecha f);

