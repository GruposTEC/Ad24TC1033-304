#include<iostream>
#include "dado.h"
#include "jugador.h"
#include "casilla.h"
#include "juego.h"
using std::cout;
using std::cin;
using std::endl;

int main()
{
    /*Jugador j1;
    j1.set_nombre("Juanito");

    Dado d(6);
    //d.set_caras(6);

    for(int i = 0 ; i< 5 ; i++)
    {
         int ncasillas =  d.tirar() ;
         j1.set_posicion(ncasillas);
         cout << j1.toString() << endl;
    }
    */  

    /*Casilla c1(50,0);
    Casilla c2(60,10);
    Casilla c3( 70,-30);

    cout  << c1.get_posicion() << endl;
    cout  << c2.get_posicion() << endl;
    cout  << c3.get_posicion() << endl;

    cout << c1.toString()  << endl;*/

    Juego serpientes(10);
    serpientes.creacion_tablero();
    serpientes.impresion_tablero();

    return 0;
}