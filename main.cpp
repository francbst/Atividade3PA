#include <iostream>
#include "rhtriangulo.h"
using namespace std;

int main ()
{
  rht::tTriangulo aresta;

  cout<< "Digite o valor de um cateto de um triangolo retangulo: "<<endl;
  cin>>aresta.cat1;

  cout<< "Digite o valor do outro cateto deste triangulo: "<<endl;
  cin>>aresta.cat2;

  aresta.hip = pitagoras(aresta);

  area(aresta);

  perimetro(aresta);

  cout<<"O valor da hipotenusa é "<<pitagoras(aresta)<<"."<<endl;
  cout<<"As 3 arestas do triangulo medem: "<<aresta.cat1<<", "<<aresta.cat2<<" e "<<aresta.hip<<"."<<endl;
  cout<<"A area do triangulo é de "<<area(aresta)<<"."<<endl;
  cout<<"O perimetro do triandulo é "<<perimetro(aresta)<<"."<<endl;

  
}