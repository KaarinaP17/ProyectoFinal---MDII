#include <iostream>
#include <string>   //Libreria que contiene la función para manipular cadenas.

using namespace std;

float MonedaAmaniada(); // Probabilidad total de que la moneda sea amañada
float Moneda1();        // Probabilidad de que a seleccionar la primera moneda, esta salga amañanada
float Moneda2();        // Probabilidad de que a seleccionar la segunda moneda, esta salga amañanada
float Moneda3();        // Probabilidad de que a seleccionar la tercera moneda, esta salga amañanada
void menu();            // Menu de opciones para el programa

int main()
{

    menu();

    return 0;
}

void menu()
{

    int respuesta;
    cout << "Una caja contiene tres monedas, dos de ellas normales (HT) y una amañada (HH). Una moneda se selecciona al azar y se lanza dos veces.Si H aparece en ambas ocasiones, cual es la probabilidad de que la moneda seleccionada sea la amaniada?.";
    cout << "\n----- Bienvenido al programa que detectara la probabilidad de que una moneda sea amaniada -----\n" << endl;

    do
    {
        cout << "Introduce el numero de la opcion la cual deseas conocer" << endl;
        cout << "1. Mostrar las probabilidades. " << endl;
        cout << "2. Salir del programa" << endl;
        cout << "Opción: ";
        cin >> respuesta;

        switch (respuesta)
        {

        case 1:
            cout << "\n----------------------------------- PROBABILIDADES --------------------------------------- \n"
                 << endl;
            cout << "----- Aqui se calculara la probabilidad total de que la moneda sea amaniada" << endl;
            cout << "   |" << endl;
            cout << "   |-- Su probabilidad es de: " << MonedaAmaniada() << endl;
            cout << "   |   |" << endl;
            cout << "   |   |-- Aqui se calculara la probabilidad de que la primera moneda sea amaniada " << endl;
            cout << "   |       |" << endl;
            cout << "   |       |-- Su probabilidad es de: " << Moneda1() << endl;
            cout << "   |       |" << endl;
            cout << "   |       |   |-- Aqui se calculara la probabilidad de que la segunda moneda sea amaniada " << endl;
            cout << "   |            " << endl;
            cout << "   |       |   |-- Su probabilidad es de: " << Moneda2() << endl;
            cout << "   |       |" << endl;
            cout << "   |       |   |   |-- Aqui se calculara la probabilidad de que la tercer moneda sea amaniada " << endl;
            cout << "   |            " << endl;
            cout << "   |       |   |   |-- Su probabilidad es de: " << Moneda3() << endl;
            cout << "   |       |" << endl;
            cout << "   |" << endl;
            cout << "\n\n";
            break;

        case 2:
            cout << "Usuario, ha salido del programa. Gracias por utilizarlo!";
            break;

        default:
            break;
        }
    } while (respuesta != 2);
}

float MonedaAmaniada()
{
    float probMoneda1 = Moneda1();
    float probMoneda2 = Moneda2();
    float probMoneda3 = Moneda3();

    float ProbabilidadTotal = (0.3333) / (probMoneda1 + probMoneda2 + probMoneda3);
    return ProbabilidadTotal;
}

float Moneda1()
{
    float ProbabilidadPrimeraSeleccion = 0.3333;
    float ProbabilidadSegundaSeleccion = 0.5;
    float ProbabilidadTerceraSeleccion = 0.5;
    float ProbabilidadAmanio1;

    ProbabilidadAmanio1 = ProbabilidadPrimeraSeleccion * ProbabilidadSegundaSeleccion * ProbabilidadTerceraSeleccion;
    return ProbabilidadAmanio1;
}

float Moneda2()
{

    float ProbabilidadPrimeraSeleccion = 0.3333; // Probabilidad de seleccionar 1 moneda entre 3 opciones
    float ProbabilidadSegundaSeleccion = 0.5;    // Una vez seleccionada la primera moneda, solo hay 2 posibilidades para seleccionar la siguiente
    float ProbabilidadTerceraSeleccion = 0.5;    // Una vez seleccionada la primera moneda, solo hay 2 posibilidades para seleccionar la siguiente, al igual que en la segunda seleccion
    float ProbabilidadAmanio2;                   // Resultado de la probabilidad de que la segunda moneda seleccionada sea amañanada

    ProbabilidadAmanio2 = ((ProbabilidadPrimeraSeleccion) * (ProbabilidadSegundaSeleccion) * (ProbabilidadTerceraSeleccion));
    return ProbabilidadAmanio2;
}

float Moneda3()
{

    float ProbabilidadPrimeraSeleccion = 0.3333; // Solo hay una opcion en este caso para seleccionar la moneda
    float ProbabilidadAmanio3;                   // Resultado de la probabilidad de que la tercera moneda seleccionada sea amañanada

    ProbabilidadAmanio3 = ProbabilidadPrimeraSeleccion;
    return ProbabilidadAmanio3;
}
