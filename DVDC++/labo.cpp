/* ejercicio: mostrar 3 opciones al usuario en el cual ls opciones seran:
Opcion1: solicitar N cantidad de numeros y que finalice al ingresar 0, luego mostrar la suma de positivos y negativos
Opcion2: solicitar numero N y mostrar factorial
Opcion3: salir */

#include <iostream>

using namespace std;

int main()
{

    int op;
    float N = 0;
    float suma;
    float sumaN;
    float nf;
    int resultado = 1;

    cout << "Eliga una opcion porfavor: " << endl;
    cout << "Opcion 1" << endl;
    cout << "Opcion 2" << endl;
    cout << "Salir: " << endl;
    cin >> op;

    switch (op){

    case 1:
        do
        {
            cout << "ingrese un numero aleatorio" << endl;
            cin >> N;

            if (N > 0)
            {
                suma += N + N;
            }
            else if (N < 0)
            {
                sumaN += N + N;
            }

        } while (N != 0);

        cout << "la suma de los positivos es: " << suma << endl;

        cout << "la suma de los negativo es: " << sumaN << endl;

        break;

    case 2:

        cout << "ingrese un numero: " << endl;
        cin >> nf;

        for (int i = 1; i < nf; i++){
            resultado *= i;
        }
        cout <<"Su factorial es: "<< resultado * nf << endl;
        break;

    case 3:

    return 1;
        
    }

    return 0;
}