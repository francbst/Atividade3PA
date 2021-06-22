#include <iostream>
#include <math.h>
using namespace std;

namespace rht
{
  struct tTriangulo
 {
   float cat1; float cat2; float hip;

  };

  float pitagoras(tTriangulo t)
  {
    cout<<"Hipotenusa:"<<sqrt((t.cat1*t.cat1) + (t.cat2*t.cat2))<<endl;

  }

  float perimetro(tTriangulo t)
  {
    cout<<"Perimetro:"<<t.cat1 + t.cat2 + t.hip<<endl;
  }

  float area(tTriangulo t)
  {
    cout<<"Area:"<<(t.cat1 * t.cat2) / 2<<endl;
  }

  


}