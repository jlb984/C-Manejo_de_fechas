#include<time.h>

struct fechaEstructura;

typedef struct fechaEstructura* Fecha;

Fecha crearFecha(char fecha[10]);

Fecha getFecha(Fecha f);

int getDia(Fecha f);

int getMes(Fecha f);

int getAnio(Fecha f);

void setFecha(Fecha f, char nuevaFecha[10]);

int devolverAniosAHoy(Fecha f);

