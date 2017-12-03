#include <iostream>
using namespace std;

class insertion{
	public:
		 InserionSort(int a[],int cont){
			int x;
			int index;
			for(int i =1; i<cont; i++){
				x = a[i];
				index = i;
				while (index > 0 && a[index-1]>x ) {
					a[index] = a[index-1];
					index = index-1;
				}
				a[index] = x;
			}
			cout<<"\n"<<endl;
			cout<<"The result is: "<<endl;
			for(int i = 0; i<cont;i++){
				cout<<a[i]<<" ";
			}						
		}
		
	};

int main(){
	bool swampped;
	int swamp;
	int cont=0; //will serve me to go through the array
	string e;
	cout<<"Exersice of INSERTION SORT"<<endl;
	cout<<" "<<endl;
	cout<<"Enter the string of numbers separated by commas"<<endl;
  	cin >> e;
  	char b [e.length()];
  	
  	for (int i=0; i<e.length(); ++i){//to convert in array
  		b[i] = e[i];
  		if(b[i] != ','){
  			cont = cont +1;
	  	}
  	}
  	int a [cont];
  	int positions = 0;
	
  	for(int i =0; i<e.length(); ++i){
  		if(b[i] != ','){
  			a[positions] = (int)b[i] - '0';
			positions = positions +1;
	  	}
  	}
	
	insertion open = insertion(); //build
	open.InserionSort(a,cont); //passed the array along with the counter
	return 0;
}


