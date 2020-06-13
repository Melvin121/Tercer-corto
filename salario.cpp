#include "iostream"

using namespace std;

int main()
{

int n;
int horas = 0;
int horase = 0;
float horan = 1.75;
float horae = 2.50;
float salariot = 0;
float salarior = 0;

cout << "Consulte salario mensual de empleados" << endl << endl;

cout << "Ingrese la cantidad de empleados: " << endl;
     cin >> n; cout << endl;

cout << "Ingrese horas trabajadas: " << endl;
     cin >>horas; cout << endl;
     
 cout << "Ingrese horas extras trabajadas: " << endl;
     cin >>horase; cout << endl;

     if( horase == 0)
     {
         salariot = n * (horas * horan);

     } else {

         salariot = n * (horas * horan) + (horase * horae);
     } 

     if( salariot > 500)
     {
         salarior = salariot - (salariot * (4) / (100)) - (salariot * (6.25) / (100)) - (salariot * (10) / (100));

     }else {             
         salarior = salariot - (salariot * (4) / (100)) - (salariot * (6.25) / (100));
         
     }
    
cout << "El salario total es: " << "$ " << salariot << endl << endl;

cout << "El salario real es: " << "$ " << salarior << endl << endl;


return 0;
}






