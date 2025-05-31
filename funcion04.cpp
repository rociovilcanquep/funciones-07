#include<iostream>
using namespace std;
int main (){
	int num,n=0;
	cout<<"Ingrese el numero:";
	cin>>num;
    if (num==0){
    	cout<<"El cero no es ni un numero primo ni un numero compuesto";
	}
	else{
        for (int i=1;i<=num;i=i+1){
    	    if (num%i==0)
    	    n=n+1;
	    }
    }
	if (n>2)
	    cout<<"El numero es compuesto";
	else 
	    cout<<"El numero es primo";
	return 0;
}


