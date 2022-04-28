#include <iostream>
using namespace std;

int main() {

  int cantidad=0;
  float i, nota=0, suma=0, promedio;

  cout<< "Cuantas notas desea ingresar? " <<endl;
  cin >>cantidad;

for (i = 1; i <= cantidad; i++) {
  cout<<"Ingrese la nota " <<i<<endl;
  cin >>nota;

  if (nota>=0.0 && nota<=5.0) {
    suma=suma+nota;
    promedio=suma/cantidad;
  }
}
  cout <<"El promdeio es: "<<promedio <<endl;
  return 0;
}

//Maria Liliana Rodriguez Gutierrez
