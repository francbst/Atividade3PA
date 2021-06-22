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



  
}