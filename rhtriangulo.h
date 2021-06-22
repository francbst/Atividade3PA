#include <iostream>
#include <math.h>
using namespace std;

namespace rht
{
  struct tTriangulo
  {
    tTriangulo (float a; float b; float c;) : cat1(a), cat2(b), hip(c)
    {

    }
    }
  float perimetro(tTriangulos t)
  {
    cout<<"Perimetro:"<<t.cat1 + t.cat2 + t.hip<<endl;
  }

  float area(tTriangulos t)
  {
    cout<<"Area:"<<(t.cat1 * t.cat2) / 2<<endl;
  }

  float pitagoras(tTriangulos t)
  {
    cout<<"Hipotenusa:"<<sqrt((t.cat1*t.cat1) + (t.cat2*t.cat2))<<endl;

  }


}