#include <iostream> //libreria
using namespace std;

int main () //Función indispensable
{
    int a,b; //Se definen las variables 'a' y 'b'
    cout << "Ingresa el primer número" <<endl; //Le pide a usuario ingresar un número
    cin >> a;//asigna el valor a la variable 'a'
    cout << "Ingresa el segundo número" <<endl;//Le pide a usuario ingresar un número
    cin >> b;//asigna el valor a la variable 'b'

    cout <<"La suma de los números es: " <<a+b << endl; //Imprime la operación de la suma de las dos variables
    cout <<"La resta de los numeros es: "<<a-b <<endl; //Imprime la operación de la resta de las dos variables
    cout <<"La multiplicación de los números es: "<<a*b <<endl; //Imprime la operación de la multiplicación de las dos variables
    cout <<"La división de los números es: "<<a/b <<endl; //Imprime la operación de la división de las dos variables
    cout <<"El residuo es: "<<a%b <<endl; //Imprime el residuo de las dos variables

    system("pause");
    return EXIT_SUCCESS;
}
