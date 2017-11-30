#include <iostream>
using namespace std;

class Lineal{
	public:
		int Search (int a[],int data,int cont){
			int index = -1;
			for(int b=0;b<cont;b++){
			if(a[b]==data){
				index = b;
				break;
			}
		}
		return mostrar(index);//paso el parametro para poder ser mostrado
		}
		
		mostrar(int index){	
	    	cout<<"El indice del elemento a buscar es: "<<endl;
			cout<<index<<endl;//muestro el valor
		}
};


int main(){
	int cadena;
	int data;
	int cont =0;
	string e;
	
	cout<<"Exercise of LINEAL SEARCH"<<endl;
	cout<<" "<<endl;
	cout<<"Enter the string of numbers"<<endl;
  	cin >> e;
  	char b [e.length()];//array type char
  	
  	for (int i=0; i<e.length(); ++i){
  		b[i] = e[i];
  		if(b[i] != ','){
  			cont = cont +1;
	  	}
  	}
  	
  	int a [cont];
  	int posiciones = 0;
  	
  	for(int i =0; i<e.length(); ++i){
  		if(b[i] != ','){
  			a[posiciones] = (int)b[i] - '0';
  			posiciones = posiciones +1;
	  	}
  	}
	
	cout<<"Enter the number to search:"<<endl;
	cin>> data;
	
	Lineal open = Lineal();
	open.Search(a,data,cont); //I pass all the parameters 
    return 0;	
}

