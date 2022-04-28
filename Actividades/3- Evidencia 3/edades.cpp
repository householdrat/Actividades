#include <iostream>
using namespace std;

/*Realice una aplicación en C++ que le pregunte al usuario la edad de su hijo. Si el
niño tiene entre 0 y 6 años el programa debe imprimir que el niño pertenece al grupo de
la primera infancia. Si la edad está entre los 6 y los 12 años el programa debe imprimir
que el niño pertenece al grupo de la segunda infancia; y en caso de que el niño tenga
entre 12 y 18 años el mensaje impreso dirá que pertenece al grupo de los adolescentes.*/

int main(int argc, char const *argv[]) {
 int edad;

 cout <<"Ingrese la edad \n" <<endl;
 cin >>edad;

  if((edad>=0) & (edad<6)){
    cout << "primera infancia";
  }
  else if((edad>=6) & (edad<=12)){
    cout <<"segunda infancia";
  }
  else{
    cout <<"adolescentes";
  }
  return 0;
}
