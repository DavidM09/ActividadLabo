#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int id;

struct Estudiante
{
    int id;
    string nombre;
    int edad;
};
Estudiante estudiantes[10];
int total = 0;
void agregar()
{
    cout << "ID: ";
    cin >> estudiantes[total].id;
    cout << "Nombre: ";
    cin >> estudiantes[total].nombre;
    cout << "Edad: ";
    cin >> estudiantes[total].edad;
    total++;
    cout << "Agregado!\n";
}
void mostrar()
{
    cout << "\n--- ESTUDIANTES ---\n";
    for (int i = 0; i < total; i++)
    {
        cout << estudiantes[i].id << " - "
             << estudiantes[i].nombre << " - "
             << estudiantes[i].edad << " años\n";
    }
}
void buscar()
{
    cout << "ingresa tu id para ingresar al sistema: " << endl;
    cin >> id;

    for (int i = 0; i < total; i++)
    {
        if (estudiantes[i].id == id)
        {
            cout << "id correcto " << endl;
            cout << "tu id: " << estudiantes[i].id << endl;
            cout << "tu edad: " << estudiantes[i].edad << endl;
            cout << "tu nombre: " << estudiantes[i].nombre << endl;
        }
        else
        {}
    }
}

// AQUÍ VA TU CÓDIGO
// Pide un ID
// Busca en el array
// Muestra el estudiante si lo encuentra

void guardar()
{
    ofstream archivo("estudiantes.txt");
    archivo << total << endl;
    for (int i = 0; i < total; i++)
    {
        archivo << estudiantes[i].id << " "
                << estudiantes[i].nombre << " "
                << estudiantes[i].edad << endl;
    }
    archivo.close();
}
void cargar()
{
    ifstream archivo("estudiantes.txt");
    if (archivo.is_open())
    {
        archivo >> total;
        for (int i = 0; i < total; i++)
        {
            archivo >> estudiantes[i].id >> estudiantes[i].nombre >> estudiantes[i].edad;
        }
        archivo.close();
    }
}
int main()
{
    cargar();
    int op;
    do
    {
        cout << "\n1.Agregar 2.Mostrar 3.Buscar 4.Salir\n";
        cin >> op;
        if (op == 1)
            agregar();
        else if (op == 2)
            mostrar();
        else if (op == 3)
            buscar();
        else if (op == 4)
        {
            guardar();
            break;
        }
    } while (true);
    return 0;
}