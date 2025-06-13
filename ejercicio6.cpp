#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
	int n, c, i, a;
	
	cout<<juegos del piedra, papel y tijera<<endl;
	cout<<endl;
	
	cout<<instrucciones: <<endl;
	cout<<papel = 1 <<endl;
	cout<<tijera = 2 <<endl;
	cout<<piedra = 3 <<endl;
	
	c=0;
	i=0;
	
	
	while(c<3 and i<3){
	
	cin>> n;
	
	int a = rand() % 3+1;
	
	if(n==1 and a==1){
	
	cout<<la maquina eligio papel, empate! <<endl;
	cout<<endl;
			
	} else if(n==1 and a==2){
		
		i=i+1;
		cout<<la maquina eligio tijera, punto para la maquina! <<endl;
		cout<<endl;
		
	} else if(n==1 and a==3){
		
		c=c+1;
		cout<<la maquina eligio piedra, punto para ti! <<endl;
		cout<<endl;
	} 
		
	}	
	
	}
	return 0;	
}
