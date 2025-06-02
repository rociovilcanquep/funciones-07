#include <iostream>
using namespace std;
int main() {
    int n,  S=0;
    cout<<"Ingrese el numero de terminos que desea de la serie de Fibonacci: "<<endl;
    cin>>n;
    if(n<=0){
        cout<<"El numero de trminos debe ser positivo";
    }
    else {
    int a=0, b=1, sigui_num;
    cout << "Serie de Fibonacci: ";
    for (int i=0;i<n;i=i+1){
        cout<<a <<" ";
        S=S+a;
        sigui_num=a+b;
        a=b;
        b=sigui_num;
        }
        cout<<endl<<"La suma es: "<<S;
    }
    return 0;
}


