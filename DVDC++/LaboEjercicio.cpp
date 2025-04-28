#include <iostream>

using namespace std;

int main (){

    string quees = "";
    

    cout <<"Kraven el Cazador quiere saber quien eres (persona, malo o animal)" << endl;

    cout <<"ingresa el tipo de individuo que eres:   "<< endl;
    cin >> quees;

     //dependiendo de lo que el usuario introduzca dara el mnsj

    if (quees == "malo"){
        cout <<"Estas dentro de su linea de presas"<<  endl;
        

    } 
    else if (quees == "animal"){
    cout <<"Te protegeria"<< endl;

    }
    else if (quees == "persona"){
        cout <<"Simplemente te saludaria"<< endl;

    } else {

}

return 0;
}