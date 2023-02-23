#include <iostream>
using namespace std;

int main()
{
/*Escriba un programa que pida dos números A y B e imprima
             en pantalla el mayor.*/
    int A=0,B=0;
    cout<<"ingrese un valor para A:";
    cin>>A;
    cout<<"ingrese un valor para B:";
    cin>>B;
    if(A>B){
        cout<<"el mayor es "<<A<<endl;
    }
    else{
        cout<<"el mayor es "<<B<<endl;

    }
    return 0;


}
