#include <iostream>
using namespace std;

void CalculaMCDyMCD(int a, int b, int &MCD, int &MCM);
int MCM(int A, int B);
int MCD(int A, int B);

int main() {
    int num, a, b, x, y, num1, num2, opcion, cant, mcm, mcd;
    cout << "Elige una de las opciones:" << endl;
    cout << "1. Minimo Comun Multiplo, 2. Maximo Comun Divisor, 3. Minimo Comun Multiplo - Maximo Comun Divisor: " << endl;
    cin >> opcion;
    switch (opcion) {
        case 1: {
            cout<<"Ingresa el primer numero: "<<endl;
            cin>>a;
            cout<<"Ingresa el segundo numero: "<<endl;
            cin>>b;
            mcm=MCM(a, b); 
            cout<<"El minimo comun multiplo es: "<<mcm<<endl;
            break;
        }
        case 2: {
            cout<<"Ingresa el primer numero: "<<endl;
            cin>>x;
            cout<<"Ingresa el segundo numero: "<<endl;
            cin>>y;
            mcd=MCD(x, y); 
            cout<<"El maximo comun divisor es: "<<mcd<<endl;
            break;
        }
        case 3: {
            cout<<"Ingresa los numeros: "<<endl;
            cin>>num1>>num2; 
            CalculaMCDyMCD(num1, num2, mcd, mcm);
            cout<<"El minimo comun multiplo es: "<<mcm<<endl;
            cout<<"El maximo comun divisor: "<<mcd<<endl;
            break;
        }
        default: {
            cout<<"ERROR"<<endl;
            break;
        }
    }
    cout << "Fin del programa";
    return 0;
}

// Función Máximo Común Divisor - Mínimo Común Múltiplo
void CalculaMCDyMCD(int a, int b, int &MCD, int &MCM) {
    int i=1;
    MCD=1;
    while (i<=a && i<=b) {
        if (a%i==0 && b%i==0) {
            MCD=i;
        }
        i=i+1;
    }
    MCM=(a*b)/MCD;
}

// Función Mínimo Común Múltiplo
int MCM(int A, int B) {
    if (A==0 || B==0) {
        return 0; 
    }
    return (A*B)/MCD(A, B);
}

// Función Común Divisor
int MCD(int A, int B) {
    while (B!=0) {
        int temp=B;
        B=A%B;
        A=temp;
    }
    return A;
}
