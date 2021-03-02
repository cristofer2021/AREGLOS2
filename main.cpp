#include <iostream>
using namespace std;

int main(){
  cout<<" ingresar los numeros del areglo \n";
	int vector[6],i,j, aux=0;
	for(i=0;i<6;i++){
		cin>>vector[i];
	}
	j=0;
	for(i=0;i<3;i++){
		aux=vector[i];
		vector[i]=vector[6-j];
		vector[6-j]=aux;
		j=j+1;
	}
	for(i=1;i<7;i++){
		cout<<"["<< vector[i]<<"]";
	}
	
	return(0);
}


