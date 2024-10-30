#include <iostream>
#include <cmath>

//using namespace std;
using std::cout;
using std::cin;
using std::endl;

int  main()
{
    int mi_entero = 0;
    //std::cout << "HolaMundo" << std::endl;
    cout << "HolaMundo" << endl;
    cout << "Dame un numero : ";
    // cin >> mi_entero;
    cout << "El sumero leido es : " << mi_entero << endl;

    //DECISIONES
    if (mi_entero == 0)
    {
        cout << "la variable es igul a cero"<< endl;
    }
    else
    {
        cout << "La variables no es cero"<< endl;
    }

    switch (mi_entero)
    {
        case 0 :
            cout <<"Dentro del switch opcion 0 " << endl;
            break;
    }

    for(int i = 10 ; i > 0 ; i = i - 2)
    {
        cout << i << endl;
    }

    int i = 0;
    while(i < 5)
    {
        cout << " dentro del while "  << i << endl;
        i++;
    }

    i = 0;
    
    do
    {
        cout << " dentro del dp-while "  << i << endl;
        i++;
    }
    while(i < 5);
    
    return 0;
}