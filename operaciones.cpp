 /* TP #1 
* Gustavo Gaston Idoyaga 
* 20150414 
*/ 
 
 
#include <iostream> 
#include <string> 
 
 
int a, b, suma, resta, resta2, resto;  
unsigned eda; 
char direc; 
double potencia; 
bool c, d; 
 
 
int main () { 
    std :: cout << "Buenas tardes, vamos a hacer la prueba de algunos usos de variables, valores y operaciones.\n\n"; 
    std :: cout << "A continuación le pediremos que nos ingrese algunos datos. Para empezar ingrese su apellido.\n"; 
    std :: string ape; 
std :: cin >> ape; 
    std :: cout << "Ahora ingrese su nombre.\n"; 
    std :: string nom; 
std :: cin >> nom; 
std :: cout << "Por favor ingrese su edad.\n"; 
std :: cin >> eda; 
std :: cout << "Por favor ingrese un numero que desee.\n"; 
    std :: cin >> a; 
    std :: cout << "Por favor, ingrese otro numero.\n"; 
    std :: cin >> b; 
    suma = a + b; 
    resta = a - b; 
    resta2 = b - a; 
    resto = a % b; 
    potencia = a * a * a * a * a * a * a * a * a * a * a * a * a * a * a * a * a * a * a * a * a * a * a * a * a * a * a * a * a * a * a * a * a * a * a * a * a * a * a * a; 
    c = eda == a; 
    d = eda >= b; 
std :: cout << "Hola " << ape << " " << nom << ".\n"; 
std :: cout << "El sistema va a evaluar si su edad es igual al primer numero que ingreso (0 significa 'NO' y 1 significa 'SI'): " << c << ".\n"; 
std :: cout << "Ahora evaluara si es mayor o igual al segundo numero que ingreso (0 significa 'NO' y 1 significa 'SI'): " << d << ".\n"; 
    std :: cout << "La suma de los números que ingreso es: " << suma << ".\n"; 
    std :: cout << "La resta del primer numero por el segundo es :" << resta << " y de forma inversa es: " << resta2 << ".\n"; 
    std :: cout << "El resto que hay entre el primer numero y el segundo es: " << resto << ".\n"; 
    std :: cout << "El primer numero potenciado sobre si mismo 40 veces: " << potencia << ".\n"; 
}
