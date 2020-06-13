#include "iostream"
int numero(int);
using namespace std;

int main(){

int n;
int opcion = 0;

    cout << "BIENVENIDO AL JUEGO DEL NUMERO" << endl;

    do {

        cout << "1-----------Jugar" << endl;
        cout << "2-----------Creditos" << endl;
        cout << "3-----------Salir" << endl;
        cin >> opcion; cout << endl << endl;

        switch(opcion){

            case 1: numero(n);
            break;
            case 2: cout << "Juego creado por INNOVACORP" << endl;
            break;
            

        }
    }while(opcion != 3);
       cout << "Gracias por jugar :3" << endl << endl;

    return (0);
}

int numero(int n){

     n = 4;

    do 
    {
        cout << "Ingresa un numero" << endl;
        cin >> n; cout << endl;

        if( n > 4){
            cout << "Ingresaste un numero mayor" << endl;
        } else if( n < 4){
            cout << "Ingresaste un numero menor" << endl;
        }
    }
    while( n != 4);
         cout << "ESE ES EL NUMERO!!! GANASTE" << endl;


     return(n);

}