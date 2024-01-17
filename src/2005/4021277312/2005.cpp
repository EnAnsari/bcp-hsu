#include <iostream>
using namespace std ; 
int main (){
	int a , b , m ; 
	cin>> a >> b ; 
	m = a - b ; 
	if (b>=a) cout<<"Wrong order!" ; 
	else if (m%2!=0) cout<<"Wrong difference!" ; 
	else {
		for (int i=0 ; i<m/2 ; i++){
			for (int j=0 ; j<a ; j++) cout<<"* ";
			cout<< endl ; 
		}
		for (int i=0 ; i<b ; i++){
			for (int j=0 ; j<m/2 ; j++) cout<<"* ";
			for (int j=0 ; j<2*b ; j++) cout<<" "; 
			for (int j=0 ; j<m/2 ; j++) cout<<"* ";			
			cout<< endl ; 
		}
		for (int i=0 ; i<m/2 ; i++){
			for (int j=0 ; j<a ; j++) cout<<"* ";
			cout<< endl ; 
		}		
	}  
}
