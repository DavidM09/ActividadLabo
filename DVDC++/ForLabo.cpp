#include <iostream>

using namespace std;

int main (){

    int numero;

    cout << "ingrese un numero positivo: " << endl; //solicitandole al usuario un numero
    cin >> numero;
    
    if (numero <= 0) {
        cout << "porfavor ingrese un numero positivo" << endl;

    }else{

        for (int i = 0; i <= 10; i++){

        numero * i;
        
        cout <<"su resultado es: " << numero * i << endl;
        };

    }

    


    return 0;
}