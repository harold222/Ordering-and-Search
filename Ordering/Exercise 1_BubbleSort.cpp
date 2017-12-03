
#include <iostream> //library
using namespace std;

int main(){
  	bool swampped;
  	int swamp;
  	string e; //variables to use
	int cont =0;
	cout<<"Exercise 1 of BUBBLE SORT"<<endl;
	cout<<" "<<endl;
	cout<<"Enter the string of numbers separated by commas"<<endl;
  	cin >> e;
  	char b [e.length()];//array char
  	
  	for (int i=0; i<e.length(); ++i){//to convert in array
  		b[i] = e[i]; //I pass the chain to char
  		if(b[i] != ','){ //I check the char positions to check the commas
  			cont = cont +1; //increase the counter
	  	}
  	}
  	
  	int a [cont]; //I define my size array cont
  	int positions = 0; //will help me go through array a
  	
  	for(int i =0; i<e.length(); ++i){
  		if(b[i] != ','){ //I check the char positions to check the commas
  			a[positions] = (int)b[i] - '0'; //of the char convert to int and use positions to not leave the array
  			positions = positions +1;
	  	}
  	}
    
	int limit = (sizeof(a)/sizeof(a[0])); //to go through the array
	
	for(int i =0; i < limit-1; i++){
		swampped = false; //starts at false
		for(int j=0; j<limit-1; j++){
			if (a[j] > a[j+1] ){
				swamp = a[j];
				a[j] = a[j+1];
				a[j+1] = swamp;
				swampped = true;
			}
		}
		
		if(swampped==false){ //if no number is exchanged
			break; //I finish process, since the array was already ordered
		}
	}
	cout<<"\n"<<endl;
	cout<<"Result:"<<endl;
	
	for(int i =0; i< limit; i++){
		cout<<a[i]<<" ";
	}
	
	return 0;
}
