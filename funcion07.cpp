#include <iostream>
using namespace std;

int multiplicacion(int mult1, int mult2);
int division(int a, int b, int &cociente, int &residuo);
int potencia(int x, int y);

int main() {
    int num1, num2, respuesta, respuesta1, cociente, residuo;
    char operacion;
    cout << "�Cu�l de estas tres operaciones desea realizar el usuario; Multiplicaci�n(M), divisi�n(D) o potencia(P)? " << endl;
    cin >> operacion;
    cout << "Ingrese el primer numero: " << endl;
    cin >> num1;
    cout << "Ingrese el segundo numero: " << endl;
    cin >> num2;

    if (num1 <= 0 || num2 <= 0) {
        cout << "ERROR, ingrese numeros positivos";
    } else {
        switch (operacion) {
            case 'M':
            case 'm':
                respuesta = multiplicacion(num1, num2);
                cout << "El resultado de la multiplicacion es: " << respuesta;
                break;
            case 'D':
            case 'd':
                if (num2 == 0) {
                    cout << "Error" << endl;
                } else {
                    division(num1, num2, cociente, residuo);
                    cout << "Cociente: " << cociente << endl;
                    cout << "Residuo: " << residuo << endl;
                }
                break;
            case 'P':
            case 'p':
                respuesta1 = potencia(num1, num2);
                cout << "El resultado de la potencia es: " << respuesta1;
                break;
            default:
                cout << "Operacion no valida." << endl;
        }
    }
    return 0;
}

//Funci�n multiplicaci�n
int multiplicacion(int mult1, int mult2) {
    int resultado1 = 0;
    for (int i = 0; i < mult2; i++) {
        resultado1 = resultado1 + mult1;
    }
    return resultado1;
}

//Funci�n divisi�n
int division(int dividendo, int divisor, int &cociente, int &residuo) {
    cociente = 0;
    residuo = dividendo;
    while (residuo >= divisor) {
        residuo=residuo-divisor;
        cociente=cociente+1;
    }
    return 0;
}

//Funci�n potencia
int potencia(int x, int y) {
    int resultado3 = 1;
    for (int i = 0; i < y; i++) {
        resultado3 = resultado3 * x;
    }
    return resultado3;
}
