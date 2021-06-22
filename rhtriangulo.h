#include <iostream>
#include <math.h>
using namespace std;

namespace rht
{
  struct tTriangulo
 {
   float cat1; float cat2;
  };

  float pitagoras(tTriangulo t)
  {
    cout<<endl<<"O valor da hipotenusa é   :  "<<sqrt((t.cat1*t.cat1) + (t.cat2*t.cat2))<<endl;

    
    return 0;
  }

  float perimetro(tTriangulo t)
  {
    cout<<"A mediada do perimetro é  :  "<<t.cat1 + t.cat2 + (sqrt((t.cat1*t.cat1) + (t.cat2*t.cat2)))<<endl;

    return 0;
  }

  float area(tTriangulo t)
  {
    cout<<"A medida da area é        :  "<<(t.cat1 * t.cat2) / 2<<endl;

    return 0;
  }

};