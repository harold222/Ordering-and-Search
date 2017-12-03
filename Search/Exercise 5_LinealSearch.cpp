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
		return mostrar(index); //passed the parameter to be shown
		}
		
		mostrar(int index){	
	    	cout<<"The index of the element to look for is: "<<endl;
			cout<<index<<endl;
		}
};


int main(){
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
  			cont = cont +1; //increase cont
	  	}
  	}
  	
  	int a [cont]; //size of the array cont
  	int posiciones = 0;
  	
  	for(int i =0; i<e.length(); ++i){
  		if(b[i] != ','){
  			a[posiciones] = (int)b[i] - '0'; //convert from char to int
  			posiciones = posiciones +1; //increase positions
	  	}
  	}
	
	cout<<"Enter the number to search:"<<endl;
	cin>> data;
	
	Lineal open = Lineal();
	open.Search(a,data,cont); //I pass all the parameters 
    return 0;	
}

