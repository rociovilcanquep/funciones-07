#include <iostream>
using namespace std;

void CalculaMCDyMCD(int a, int b, int &MCD, int &MCM);

int main() {
    int A, B, mcm, mcd;
    cout << "Ingrese el primer numero: " << endl;
    cin >> A;
    cout << "Ingrese el segundo numero: " << endl;
    cin >> B;
    CalculaMCDyMCD(A, B, mcd, mcm);
    cout << "El minimo comun multiplo es: " << mcm << endl;
    cout << "El maximo comun divisor: " << mcd << endl;
    return 0;
}

// Función para calcular el Máximo Común Divisor - Mínimo Común Múltiplo
void CalculaMCDyMCD(int a, int b, int &MCD, int &MCM) {
    int i = 1;
    MCD = 1; 
    while (i <= a && i <= b) {
        if (a % i == 0 && b % i == 0) {
            MCD = i;
        }
        i = i + 1;
    }
    MCM = (a * b) / MCD;
}
