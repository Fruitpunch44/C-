#include<iostream>
using namespace std;

//STL STANDARD TEMPLATE LIBRARY
//CODE QUICKER EFFECTIVELY AND SIMPLER
//TEMPLATES ENABLES GENERIC PROGRAMMING
/*some componets include
iterators,algorithims containers and functors*/

template <typename T>//defining the template
T area_rect(T x, T y){
    T result=x*y;
    return result;
}

int main()
{
    int x1=area_rect<int>(23,43);
    double x2=area_rect<double>(24.3,23.30);
    float x3=area_rect<float>(10.3,42);
    return 0;
}