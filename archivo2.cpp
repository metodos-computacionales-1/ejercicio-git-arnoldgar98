///Escriba un programa que lea tres números enteros e indique si esos números pueden representar los lados de un triángulo rectángulo. Use como caso de prueba 3,4,5 (si) y 3,4,6 (no). Guarde el programa en el archivo 2.cpp

#include<iostream>
#include<math.h>
using namespace std;

int main(void){
    int a,b,c;
    a=3; b=4; c=5;
    if(((a*a)+(b*b))==(c*c))
    {
        cout<< "Si"<<endl;
    }
    else
    {
        cout<<"No";
    }
    
    cout<<"probando con otros valores"<<endl;
    
    int a1,b1,c1;
    cout<<"Ingrese valor del cateto adyacente"<<endl;
    cin>>a1;
    cout<<"Ingrese valor del cateto opuesto"<<endl;
    cin>>b1;
    cout<<"Ingrese valor de hipotenusa"<<endl;
    cin>>c1;
    if(((a1*a1)+(b1*b1))==(c1*c1))
    {
        cout<<"Si"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
        
    return 0;
        
}