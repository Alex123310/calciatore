#include <stdio.h>
#include <stdlib.h>
#include "Costanti.h"
#include "Tipi.h"
#include "Prototipi.h"



int main(int argc, char *argv[])
{
calciatore c;

c = Carica_Record_F();

Visualizza_Record_P(c);


return 0;
}
