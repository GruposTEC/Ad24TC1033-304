#include<iostream>
#include "dado.h"
#include "jugador.h"
using std::cout;
using std::cin;
using std::endl;

int main()
{
    Jugador j1;
    j1.get_nombre("Juanito");

    Dado d;
    d.set_caras(6);

    for(int i = 0 ; i< 5 ; i++)
    {
         int ncasillas =  d.tirar() ;
         j1.set_posicion(ncasillas);
         cout << j1.toString() << endl;
    }


    return 0;
}