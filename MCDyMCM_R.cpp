#include <iostream>
using namespace std;

void MCDyMCM(int a,int b,int &mcd, int &mcm);

int main (){
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
	return 0;
}

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
