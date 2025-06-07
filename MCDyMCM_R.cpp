#include <iostream>
using namespace std;

void MCDyMCM(int a,int b,int &mcd, int &mcm);

int main() {
    int cant,opcion;
    cout << "¿Cuantas veces quiere utilizar la funcion MCM y MCD?: "<<endl;
    cin >> cant;
    system("cls");
    cout<<"¿Desea sumar los resultados? (1=si, 2=no): ";
    cin>>opcion;
    system("cls");
    int i=1, S1=0, S2=0;
    switch (opcion){
    	case 1:{
    		while (cant!=0 && i<=cant){
                int x, y;
	            cout<<"Ingresa el primer numero: ";
	            cin>>x;
	            cout<<"Ingresa el segundo numero: ";
	            cin>>y;
        	        if (x==y){
		                cout<<"MCD y MCM es: "<<x<<endl;
		                S1=S1+x;
		                S2=S2+x;
	                } 
	                else{
	                    int rMCD, rMCM;
	                    MCDyMCM(x,y,rMCD,rMCM);
	                    cout<<"MCD: "<<rMCD<<endl;
    	                cout<<"MCM: "<<rMCM<<endl;
    	                S1=S1+rMCD;
    	                S2=S2+rMCM;
                    }
                    i=i+1;
            }
            cout<<"La suma de los MCD ingresados es: "<<S1<<endl;
            cout<<"La suma de los MCM ingresados es: "<<S2<<endl;
			break;
		}
		case 2:{
			while (cant!=0 && i<=cant){
            int x, y;
	        cout<<"Ingresa el primer numero: ";
	        cin>>x;
	        cout<<"Ingresa el segundo numero: ";
	        cin>>y;
        	    if (x==y){
		            cout<<"MCD y MCM es: "<<x<<endl;
	            } 
	            else{
	                int rMCD, rMCM;
	                MCDyMCM(x,y,rMCD,rMCM);
	                cout<<"MCD: "<<rMCD<<endl;
    	            cout<<"MCM: "<<rMCM<<endl;
                }
                i=i+1;
            }
            break;
	    }
	    default: {
	    	cout<<"Error";
			break;
		}
    }
    cout<<"Fin del programa";
    return 0;
}

//Función MCD-MCM
void MCDyMCM(int a,int b,int &mcd, int &mcm){
	int i;
	i=1;
	mcd=1;
	while (i<=a && i<=b){
		if (a%i==0 && b%i==0)
			mcd=i;
		i=i+1;
	}
	mcm=(a*b)/(mcd);
}
