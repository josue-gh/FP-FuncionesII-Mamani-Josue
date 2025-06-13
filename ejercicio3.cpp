#include<iostream>
#include<cmath>
using namespace std;

int main(){
	float c1, c2, sc, h;
	
	cout<<"ingrese el primer cateto "<<endl;
	cin>> c1;
	
	cout<<"ingrese el segundo cateto "<<endl;
	cin>> c2;
	
	sc= pow(c1, 2) + pow(c2, 2) ;
	
	h= sqrt(sc) ;
	
	cout<<"la hipotenusa es: "<<endl;
	cout<< h;
	return 0;
}
