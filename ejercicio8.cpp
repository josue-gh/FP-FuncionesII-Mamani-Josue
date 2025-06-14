#include<iostream>
#include<string>
#include<cstdlib>

using namespace std;

int tragamonedas(int s ){
	return s*10;
}

int tragamonedas1(int p){
	return p*2;
}

int tragamonedas2(int q){
	return q*5;
}


int main(){
	
	int a, b, c, mon, apos;
	
	string r;
	
	cout<<"juego del tragamoneda "<<endl;
	cout<<"inicias con 100 monedas "<<endl;
	
	mon=100;
	
	do{
	
	do{
	
		
	cout<<"cuanto deseas apostar en esta ronda (1-10) "<<endl;
	cin>> apos;
	cout<< endl;
    
	if(apos>10 or apos<1){
    cout<<"error, vuelve a intentarlo "<<endl;
	}
    
    }while(apos>10 or apos<1);
    
	a= rand( ) % 5+1;
	b= rand( ) % 5+1;
	c= rand( ) % 5+1;
	
	cout<<a<<"-"<<b<<"-"<<c<<endl;
	
	if(a==b and b==c and a==c){
	
	cout<<"has ganado: "<<tragamonedas(apos)<<endl;
	
	mon= mon+ tragamonedas(apos);
	cout<<"monedas= "<<mon <<endl;
	
	}else if(a==b or b==c or a==c){
		
	cout<<"has ganado: "<< tragamonedas1(apos) <<endl;
	mon= mon+ tragamonedas1(apos);
	cout<<"monedas= "<<mon<<endl;
	}else if(a==1 and b==2 and c==3){
		
	cout<<"has ganado: "<<tragamonedas2(apos) <<endl;
	mon=mon + tragamonedas2(apos);
	cout<<"monedas= "<<mon <<endl;
	
	}else if(a==2 and b==3 and c==4){
		
	cout<<"has ganado: "<<tragamonedas2(apos) <<endl;
	mon=mon + tragamonedas2(apos);
	cout<<"monedas= "<<mon <<endl;
	
	}else if(a==3 and b==4 and c==5){
		
	cout<<"has ganado: "<<tragamonedas2(apos) <<endl;
	mon=mon + tragamonedas2(apos);
	cout<<"monedas= "<<mon <<endl;
	
	}else if(a==5 and b==4 and c==3){
	
	cout<<"has ganado: "<<tragamonedas2(apos) <<endl;
	mon=mon + tragamonedas2(apos);
	cout<<"monedas= "<<mon <<endl;
	
	}else if(a==4 and b==3 and c==2){
		
	cout<<"has ganado: "<<tragamonedas2(apos) <<endl;
	mon=mon + tragamonedas2(apos);
	cout<<"monedas= "<<mon <<endl;
	
	} else if(a==3 and b==2 and c==1){
		
	cout<<"has ganado: "<<tragamonedas2(apos) <<endl;
	mon=mon + tragamonedas2(apos);
	cout<<"monedas= "<<mon <<endl;
	
	}else{
		
	cout<<"has perdido: "<<apos<<endl;
	mon=mon-apos,
	cout<<"monedas= "<<mon<<endl;
	
	}
		
	cout<<"deseas seguir jugando? (si / no)  "<<endl;
 
	cin>> r;	
	cout<<endl;
	
	}while(r=="si" and mon>0);
	
	return 0;
	
}