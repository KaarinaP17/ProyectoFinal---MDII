#include <iostream>

using namespace std;

float probabilidadGeneral();
float probabilidadT2();
float probabilidadT3();
void menu();

int main()
{

    menu();
    return 0;
}

void menu()
{
    int opc;

    cout << "\n----- Bienvenido al programa que te brindara las probabilidades del siguiente ejercicio -----\n"
         << endl;
    cout << "Consideremos que el 40% de una fabrica proviene del T1, el 35% del turno T2 y el 25% del T3; y que los porcentajes de los articulos defectuosos son del 1%, 2% y 3%. Respectivamente, en cada turno, al seleccionar un articulo al azar de la produccion total: " << endl;
    cout << "a. cual es la probabilidad de que resulte defectuoso?" << endl;
    cout << "b. Si el articulo resulta defectuoso, ¿Cual es la probabilidad de que haya sido producido en el turno T2?" << endl;
    cout << "c. cual es la probabilidad de que haya sido producido en el turno T3\n"
         << endl;
    do
    {
        cout << "1- Mostrar las probabilidades. " << endl
             << "2- Salir del programa. \n"
             << endl;
        cout << "Introduce el numero de la opcion de la cual deseas conocer" << endl;
        cout << "Opcion: ";
        cin >> opc;

        switch (opc)
        {
        case 1:
            cout << "\n\nUsuario, te presentamos las posibles probabilidades: \n"
                 << endl;
            cout << "-------------------------------- PROBABILIDADES ------------------------------" << endl;
            cout << "   |" << endl;
            cout << "   |--- La probabilidad General es de: " << probabilidadGeneral() << endl;
            cout << "   |   |" << endl;
            cout << "   |   |--- La probabilidad que sea defectuoso especificamente de T2 " << endl;
            cout << "   |       |" << endl;
            cout << "   |       |    |--- Su probabilidad es de: " << probabilidadT2() << endl;
            cout << "   |       |" << endl;
            cout << "   |       |    |   |--- La probabilidad que sea defectuoso especificamente de T3 " << endl;
            cout << "   |       |     " << endl;
            cout << "   |       |    |   |--- Su probabilidad es de: " << probabilidadT3() << endl;
            cout << "   |\n\n\n" << endl;
            break;

        case 2:
            cout << "Usuario, ha salido del programa. Gracias por utilizarlo" << endl;
            break;
        default:
            break;
        }

    } while (opc != 2);
}

float probabilidadGeneral()
{
    // calculamos la probabilidad total de que un articulo seleccionado al azar sea defectuoso:
    float P_T = 0.40;                // probabilidad de la produccion proveniente de T
    float P_T2 = 0.35;               // probabilidad de la produccion proveniente de 1T2
    float P_T3 = 0.25;               // probabilidad de la produccion proveniente de T2
    float P_Defectuoso_en_T = 0.01;  // probabilidad de defectuoso en T
    float P_Defectuoso_en_T2 = 0.02; // probabilidad de defectuoso en 1T2
    float P_Defectuoso_en_T3 = 0.03; // probabilidad de defectuoso en T2
    float P_DefectuosoGeneral;
    // P_Defectuoso = (P_T * P_Defectuoso_en_T + P_T2 * P_Defectuoso_en_T2 + P_T3 * P_Defectuoso_en_T3);
    P_DefectuosoGeneral = ((P_T * P_Defectuoso_en_T) + (P_T2 * P_Defectuoso_en_T2) + (P_T3 * P_Defectuoso_en_T3));
    return P_DefectuosoGeneral;
}

float probabilidadT2()
{
    float P_T2 = 0.35;
    float P_Defectuoso_en_T2 = 0.02; // probabilidad de defectuoso en 1T2
    float P_DefectuosoGeneral;
    P_DefectuosoGeneral = ((0.40 * 0.01) + (0.35 * 0.02) + (0.25 * 0.03));
    float defectuosoT2;
    defectuosoT2 = ((P_T2 * P_Defectuoso_en_T2) / P_DefectuosoGeneral);
    return defectuosoT2;
}

float probabilidadT3()
{
    float P_T3 = 0.25;
    float P_Defectuoso_en_T3 = 0.03; // probabilidad de defectuoso en T2
    float P_DefectuosoGeneral;
    P_DefectuosoGeneral = ((0.40 * 0.01) + (0.35 * 0.02) + (0.25 * 0.03));
    float defectuosoT3;
    defectuosoT3 = ((P_T3 * P_Defectuoso_en_T3) / P_DefectuosoGeneral);
    return defectuosoT3;
}
