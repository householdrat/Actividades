#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {

  int i;
  float nota1, nota2, nota3, nota4, final;
  string nombre;

  do {

  cout<<"Ingrese el nombre del alumno: "<<endl;
  cin>>nombre;
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
    cout <<"la definitiva de "<<nombre<<" es:  "<<final << " No aprobado"<<endl;
    }

  else if((final>=3.0) & (final<=3.5)){
    cout <<"La definitiva de "<<nombre<<" es:  "<<final <<" En este momento no tiene aprobada la materia de tecnología, pero tiene la oportunidadde recuperar "<<endl;
  }

  else{
      cout <<"La definitiva de "<<nombre<<" es:  "<<final <<" Aprobado"<<endl;

  }
  cout<<"Oprima 1 sí desea ingresar otro alumno, de lo contrario oprima 0 "<<endl;
  cin>>i;

} while(i==1);
  return 0;
}

// Maria Liliana Rodriguez Gutierrez
