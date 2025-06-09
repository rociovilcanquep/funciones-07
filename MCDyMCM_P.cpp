#include <iostream>
using namespace std;

void MCDyMCM(int a, int b, int *mcd, int *mcm);

int main() {
    int cant, opcion;
    cout << "¿Cuantas veces quiere utilizar la funcion MCM y MCD?: " << endl;
    cin >> cant;
    system("cls");
    cout << "¿Desea saber el numero maximo del MCM y MCD? (1=si, 2=no): ";
    cin >> opcion;
    system("cls");
    int v=0;
    switch (opcion) {
        case 1: {
        	int mayor1=0, mayor2=0;
            while (cant>0 && v<cant) {
                int x, y;
                cout<<"Ingresa el primer numero: ";
                cin>>x;
                cout<<"Ingresa el segundo numero: ";
                cin>>y;
                if (x==y) {
                    cout<<"MCD y MCM es: "<<x<<endl;
                    if (x>mayor1) {
                        mayor1=x;
                    }
                    if (x>mayor2){
                    	mayor2=x;
					}
                } 
				else {
                    int rMCD, rMCM;
                    MCDyMCM(x, y, &rMCD, &rMCM); 
                    cout<<"MCD: "<<rMCD<<endl;
                    cout<<"MCM: "<<rMCM<<endl;
                    if (mayor1<rMCD) {
                        mayor1=rMCD;
                    }
                    if (mayor2<rMCM) {
                        mayor2=rMCM;
                    }
                }
                v=v+1;
            }
            cout<<"El numero mayor de MCM es: "<<mayor2<<endl;
            cout<<"El numero mayor de MCD es: "<<mayor1<<endl;
            break;
        }
        case 2: {
            while (cant!=0 && v<cant) {
                int x, y;
                cout<<"Ingresa el primer numero: ";
                cin>>x;
                cout<<"Ingresa el segundo numero: ";
                cin>>y;
                if (x==y) {
                    cout<<"MCD y MCM es: "<<x<<endl;
                } else {
                    int rMCD, rMCM;
                    MCDyMCM(x, y, &rMCD, &rMCM); 
                    cout<<"MCD: "<<rMCD<<endl;
                    cout<<"MCM: "<<rMCM<<endl;
                }
                v=v+1;
            }
            break;
        }
        default: {
            cout<<"Error"<<endl;
            break;
        }
    }
    cout<<"Fin del programa";
    return 0;
}

//Función MCD y MCM
void MCDyMCM(int a, int b, int *mcd, int *mcm) {
    int i;
    i=1;
    *mcd=1;
    while (i<=a && i<=b) {
        if (a%i==0 && b%i==0) {
            *mcd=i; 
        }
        i=i+1;
    }
    *mcm=(a*b)/(*mcd);
}
