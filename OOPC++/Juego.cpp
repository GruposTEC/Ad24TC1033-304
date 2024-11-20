#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include  "juego.h"
#include "casilla.h"

using std::cout;
using std::endl;
using std::ifstream;
using std::stoi;
using std::stringstream;

Juego::Juego()
{

}

Juego::Juego(int n)
{
    num_casillas = n;
}

void Juego::creacion_tablero()
{
    string linea;
    string num_casilla, desplazamiento;

    for(int i =0 ; i < num_casillas ; i++)
    {
        Casilla c(i,0);
        casillas.push_back(c);   
    }

    ifstream archivo;
    archivo.open("casillas.txt");
    while(getline(archivo,linea))
    {
        //cout <<linea << endl;
        stringstream token(linea);
        getline(token,num_casilla,',');
        getline(token,desplazamiento,',');
        //cout << num_casilla << endl;
        //cout << desplazamiento << endl;
        casillas[stoi(num_casilla)].set_desplazamiento(stoi(desplazamiento));
    }

}

void Juego::impresion_tablero()
{

    for(int i =0 ; i < num_casillas ; i++)
    {
       cout << casillas[i].toString() << endl;  
    }
}
