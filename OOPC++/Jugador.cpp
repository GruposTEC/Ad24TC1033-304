#include <string>
#include "jugador.h"

using std::string;
using std::to_string;

int Jugador::get_posicion()
{
    return posicion;
}

void Jugador::set_posicion(int ncasillas)
{
    posicion = posicion + ncasillas;
}

void Jugador::set_nombre(string n)
{
    nombre = n;
}

string Jugador::toString()
{
    return "Soy el jugador " + nombre + " y estoy en la posicion " + to_string(posicion);
}