/* TP #1
* Gustavo Gaston Idoyaga 
* 20150427
*/ 
 
#include <iostream> 
#include <string> 
 
using namespace std;
 
int main () { 
   	cout << "Buenas tardes, vamos a hacer la prueba de algunos usos de variables, valores y operaciones.\n\n"; 
    cout << "A continuación le pediremos que nos ingrese algunos datos. Para empezar ingrese su apellido.\n"; 
    char ape[20];
   	cin >> ape; 
    cout << "Ahora ingrese su nombre.\n"; 
    char nom[20]; 
	   cin >> nom; 
	   cout << "Hola " << ape << " " << nom << ".\n" << endl; 
	   cout << "Por favor ingrese un numero que desee.\n"; 
    int a;
	   cin >> a; 
    cout << "Por favor, ingrese otro numero.\n"; 
    int b;
	   cin >> b;
    int suma, resta, resta2, resto;
	   suma = (a + b); 
    cout << "La suma de los números que ingreso es: " << suma << ".\n"; 
    resta = (a - b); 
    resta2 = (b - a); 
    cout << "La resta del primer numero por el segundo es :" << resta << " y de forma inversa es: " << resta2 << ".\n"; 
    resto = a%2; 
	   cout << "El resto que hay en dividir con el primer numero ingresado es: " << resto << ".\n" << endl; 
	   double potencia, potencia2;
    potencia = a * 13 * 13 * 13 * 13 * 13 * 13 * 13 * 13 * 13 * 13 * 13 * 13 * 13 * 13 * 13 * 13 * 13 * 13 * 13 * 13 * 13 * 13 * 13 * 13 * 13 * 13 * 13 * 13; 
    potencia2 = b * 13 * 13 * 13 * 13 * 13 * 13 * 13 * 13 * 13 * 13 * 13 * 13 * 13 * 13 * 13 * 13 * 13 * 13 * 13 * 13 * 13 * 13 * 13;
    cout << "El primer numero multiplicado por trece 28 veces da como resultado: " << potencia << "y el segundo multiplicado por el mismo numero 23 veces: " << potencia2 << ".\n"; 
	   cout << "Si sumamos estos numeros: " << (potencia + potencia2) << ".\n";
	   cout << "Si restamos estos numeros: " << (potencia - potencia2) << ".\n"; 
	   cout << "Si multiplicamos estos numeros: " << (potencia * potencia2) << ".\n";
	   cout << "Si dividimos estos numeros: " << (potencia * potencia2) << ".\n" << endl;
    cout << "El sistema va a evaluar si el apellido que ingreso es distinto al nombre que ingreso (0 significa 'NO' y 1 significa 'SI'): " << !(ape == nom) << ".\n"; 
	   cout << "Ingrese una palabra.\n";
    string e;
	   cin >> e;
    cout << "Ingrese otra palabra.\n";
    string r;
	   cin >> r;
   	string ty;
    ty = e+r;
    cout << "Las palabras tienen un total de " << ty.size () << " letras.\n";
}
