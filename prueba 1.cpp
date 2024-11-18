#include <iostream>

using namespace std;

int main()
{
    float V,F,R,I;
    cout<< "ingrese el valor del voltaje del foco "<<endl;
    cin>> F;
    cout<< "ingrese el valor de la resistencia "<< endl;
    cin>> R;
    const V=12;
     I= (V-F)/R;
cout<< "el valor de la corriente es "<<endl;
    return 0;
}
