#include "casilla.h"

using std::to_string;

Casilla::Casilla()
{

}

Casilla::Casilla(int p, int d)
{
    posicion = p;
    desplazamiento = d;
}

int Casilla::get_posicion()
{
    return posicion + desplazamiento;
}

string  Casilla::toString()
{
    return "Casilla número " + to_string(posicion) + " con desplazamiento "+ to_string(desplazamiento);
}