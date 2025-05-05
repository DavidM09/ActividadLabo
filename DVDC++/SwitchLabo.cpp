#include <iostream>

using namespace std;

int main (){

    int op;
    int num1;
    int num2;
    float total;
    //asignacion de variables
    //op = operacion

    //menu de opciones al usuario
    cout <<"Choose what kind of mathematical operation you want to do:" << endl;
    cout <<"1. the sum of two numbers" << endl;
    cout <<"2. the substraccion of two numbers" << endl;
    cout <<"3. the multiplication of two numbers" << endl;
    cout <<"4. the division of two numbers" << endl;
    cout <<"5. close the program" << endl;
    cin >> op; 

    //las operaciones matematicas
    switch (op){

        case 1:
        cout <<"please enter the first number: " << endl;
        cin >> num1;
        cout <<"please enter the second number: " << endl;
        cin >> num2;
        total = num1 + num2;
        cout <<"the sum of the two number is: " << total << endl;
        break;
        case 2:
        cout <<"please enter the first number: " << endl;
        cin >> num1;
        cout <<"please enter the second number: " << endl;
        cin >> num2; 
        total = num1 - num2;
        cout <<"the substraccion of the two numbers is: " << total << endl;
        break;
        case 3:
        cout <<"please enter the first number: " << endl;
        cin >> num1;
        cout <<"please enter the second number: " << endl;
        cin >> num2;
        total = num1 * num2;
        cout << "the multiplicacion of the two numbers is: " << total << endl;
        break;
        case 4:
        cout <<"please enter the first number: " << endl;
        cin >> num1;
        cout <<"please enter the second number: " << endl;
        cin >> num2;

        if (num2 == 0){
            cout << "you can't divide by 0" << endl; // este if es para evitar que el usuario divida entre 0
        }
        else{

        total = num1 / num2 != 0;
        cout <<"the division of the two numbers is: " << total << endl;
        break;
        }
        case 5:
        cout <<"the program is closing" << endl; //por si el usuario elige la opcion 5 o una no valida
        break;   
        //me toco poner que cada caso pidiera los dos numeros porque sino el en el caso 5 me seguia pidiendo los numeros antes de que se cerrara el programa xD
        default:
        cout <<"please choose a valid option" <<endl; //por si el usuario elige una opcion fuera del menu


    
    
    }
    return 0;
}