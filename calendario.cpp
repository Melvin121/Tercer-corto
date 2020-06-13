#include "iostream"
int revisar(int);
using namespace std;

int main(){
    
    int rev;
    int opcion = 0;

    cout << "CONSULTA DE ANS" << endl << endl;

    do 
    {
        cout << "1-----------Consulta de ans"; cout << endl;
        cout << "2-----------Creador"; cout << endl;
        cout << "3-----------Salir"; cout << endl;
        cin >> opcion; cout << endl << endl;

        switch(opcion){
            case 1: revisar(rev);
            break; 
            case 2: cout << "Creador por: Melvin Romero" << endl;

        }
   
    }while( opcion != 3);
         cout << "Gracias por preferirnos :D" << endl;


         return (0);
}

int revisar(int rev){
    
    int calculo1, calculo2;

    cout << "Ingrese el an a revisar: "; cin >> rev; cout << endl;

    calculo1 = rev % 100 == 0;

    if( rev % 100 ==0){
        cout << "Segun la prueba 1 El an es bisiesto" << endl;
    } else{
        cout << "Segun la prueba 1 El an no es bisiesto" << endl;
    }

    calculo2 = rev % 4 == 0;

    if( rev % 4 == 0 && rev % 100 > 0){
        cout << "Segun la prueba 2 el an es bisiesto" << endl;
    } else{
        cout<< "Segun la prueba 2 el an no es bisiesto" << endl;

    }

    return(rev);
}
