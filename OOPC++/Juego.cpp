#include <iostream>
#include  "juego.h"
#include "casilla.h"

using std::cout;
using std::endl;

Juego::Juego()
{

}

Juego::Juego(int n)
{
    num_casillas = n;
}

void Juego::creacion_tablero()
{
    for(int i =0 ; i < num_casillas ; i++)
    {
        Casilla c(i,0);
        casillas.push_back(c);   
    }
}

void Juego::impresion_tablero()
{
    for(int i =0 ; i < num_casillas ; i++)
    {
       cout << casillas[i].toString() << endl;  
    }
}
