#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {

  float nota1, nota2, nota3, nota4, final;

  cout <<"Ingrese la primera nota" <<endl;
  cin>> nota1;
  cout <<"Ingrese la segunda nota" <<endl;
  cin>> nota2;
  cout <<"Ingrese la tercera nota" <<endl;
  cin >>nota3;
  cout <<"Ingrese la cuarta nota" <<endl;
  cin>> nota4;

  final=(nota1+nota2+nota3+nota4)/4;

   if((final>=1) & (final<3.0)){
    cout <<"Su definitiva es: "<<final <<" No aprobado";
}

  else if((final>=3.0) & (final<=3.5)){
    cout <<"Su definitiva es: "<<final <<" En este momento no tiene aprobada la materia de tecnología, pero tiene la oportunidadde recuperar ";
  }

  else{
      cout <<"Su definitiva es: "<<final <<" Aprobado";

  }
  return 0;
}

// Maria Liliana Rodriguez Gutierrez
