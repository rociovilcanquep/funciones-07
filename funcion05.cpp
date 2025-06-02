#include <iostream>
using namespace std;

int fibonacci(int x);
int ackermann(int m, int n);

int main() {
    int cant, opcion, m, n;
    cout << "Seleccione una de las opciones:" << endl;
    cout << "1. Serie Fibonacci, 2. Serie Ackermann, 0. Para salir:" << endl;
    cin >> opcion;
    system("cls");
    int i=1;
    while (opcion!=0 && i<3){
        switch (opcion) {
            case 1: {
                cout<< "Ingrese el numero de terminos que desea de la serie de Fibonacci:" << endl;
                cin>> cant;
                if(cant <= 0) {
                    cout << "El numero de terminos debe ser positivo" << endl;
                } 
			    else {
                    fibonacci(cant);
                }
                break;
            }
            case 2: {
                cout << "Ingrese el valor de m: ";
                cin >> m;
                cout << "Ingrese el valor de n: ";
                cin >> n;
                int resultado = ackermann(m, n);
                cout << "A(" << m << ", " << n << ") = " << resultado <<endl;
                break;
            }
            default: {
                cout << "Fin del programa" << endl;
                break;
            }
        }
    cout << "1. Serie Fibonacci, 2. Serie Ackermann, 0. Para salir:" << endl;
    cin>>opcion;
    system("cls");
}
    cout<<"Fin cel programa";
    return 0;
}

// Función Fibonacci
int fibonacci(int x) {
    if (x <= 0) {
        return 0;
    }
    if (x == 1) {
        return 1;
    }
    int S=0;
    int a = 0;
    int b = 1;
    int sigui_num;
    cout << "Serie de Fibonacci: ";
    for (int i = 0; i < x; i++) {
        cout << a << " ";
        S=S+a;
        sigui_num = a + b;
        a = b;
        b = sigui_num;
    }
    cout << endl;
	cout<<"La suma es: "<<S<<endl;
    return sigui_num;
}

// Función Ackermann
int ackermann(int m, int n) {
    if (m == 0) {
        return n + 1;
    } 
	else if (n == 0) {
        int temp = 1;
        for (int i = 0; i < m - 1; ++i) {
            temp = 2 * temp;
        }
        return temp + 1;
    } 
	else {
        return ackermann(m - 1, ackermann(m, n - 1));
    }
}
