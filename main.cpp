#include <iostream>
using namespace std;
int main() {
  FILE*f;
float d1, m1,a1,d2,m2,a2, dias1, dias2, conversion1,resultado;
//pedir datos 
cout<<"Ingrese el dia 1:"<<endl;
cin>>d1;
cout<<"Ingrese el mes 1:"<<endl;
cin>>m1;
cout<<"Ingrese el año 1:"<<endl;
cin>>a1;
cout<<"Ingrese el dia 2:"<<endl;
cin>>d2;
cout<<"Ingrese el mes 2:"<<endl;
cin>>m2;
cout<<"Ingrese el año 2:"<<endl;
cin>>a2;
//operaciones y conversiones 
dias1= (a1*365)+(m1-1)*30+d1;
dias2=(a2*365)+(m2-1)*30+d2;
resultado= dias2-dias1;
conversion1=resultado/30.417;
// mostrar solucion 
cout<<"Los meses transcurridos desde la fecha 1 hasta la fexha 2 son: "<<conversion1<<endl;
return 0;
}