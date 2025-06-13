#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
	
	int cn, mv, na;
	cout<<"ingrese la cantidad de numeros aleatorios que desea generar "<<endl;
	cin>> cn;
	
	cout<<"ingrese el maximo valor que puede tener el numero "<<endl;
	cin>> mv;
	
	cout<<"los numeros aleatorios son: "<<endl;
	
	for(int i=1; i<=cn; i++){
		
	na= rand() % mv ;
	
	cout<< na<<endl;
	
	}
	
	return 0;
}
