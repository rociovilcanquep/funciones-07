#include <iostream>
using namespace std;

int division(int a, int b);

int main() {
    int num1, num2, resultado, residuo;
    cout << "Ingrese el primer numero: " << endl;
    cin >> num1;
    cout << "Ingrese el segundo numero: " << endl;
    cin >> num2;

    if (num1 > num2) {
        resultado = division(num1, num2);
        residuo=num1%num2;
        cout << "El cociente de la division es: " << resultado << " y el residuo es:  "<<residuo<<endl;
    } 
	else if (num2 > num1) {
        resultado = division(num2, num1);
        residuo=num2%num1;
        cout << "El resultado de la division es: " << resultado << endl;
    }
	else if (num1 == num2) {
        cout << "ERROR, los numeros ingresados son iguales" << endl;
    } 
    return 0;
}

//Función división cociente
int division(int a, int b) {
    int resultado2 = 0;
    for (int i = 0; a >= b; i=i+1) {
        a = a - b;
        resultado2 = resultado2 + 1;
    }
    return resultado2;
}


