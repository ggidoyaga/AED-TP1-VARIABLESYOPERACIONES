/* TP #1
* Gustavo Gaston Idoyaga 
* 20150505
*/ 
 
#include <iostream> 
#include <string>
 
using namespace std;
 
int main () { 
	cout << "Buenas tardes, vamos a hacer la prueba de algunos usos de variables, valores y operaciones.\n\n"; 
    cout << "A continuación le pediremos que nos ingrese algunos datos. Para empezar ingrese su apellido.\n"; 
    string ape;
	cin >> ape; 
    cout << "Ahora ingrese su nombre.\n"; 
    string nom; 
	cin >> nom; 
	cout << "Hola " << ape + nom << ".\n" << endl; 
	string ty;
    ty = ape+nom;
    cout << "Su apellido y nombre tiene un total de " << ty.size () << " letras.\n";
	cout << endl << "Por favor ingrese un numero que desee.\n"; 
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
	cout << endl << "Ingrese una letra: ";
    char q;
	cin >> q;
    cout << "Ingrese una letra: ";
    char w;
	cin >> w;
	cout << endl << "Las letras que ingreso son iguales (0 significa NO y 1 significa SI): " << (q==w) << endl;
}
