#include <iostream>
using namespace std ; 
int main (){
	int x , y , m ; 
	cin>> x >> y ; 
	m = x - y ; 
	if (y>=x) {
	cout<<"Wrong order!" ;
	} 
    if (m%2!=0) {
	cout<<"Wrong difference!"; 
	}
	else {
	
	
		for (int i=0 ; i<m/2 ; i++){
	
	
			for (int j=0 ; j<x ; j++) cout<<"* ";
			cout<< endl ; 
		}
	
		for (int i=0 ; i<y ; i++){
	
	
	
			for (int j=0 ; j<m/2 ; j++){cout<<"* ";
			} 
		    for (int j=0 ; j<2*y ; j++)
			{cout<<" "; 
			 } 
			for (int j=0 ; j<m/2 ; j++) {cout<<"* ";
			}			
			cout<< endl ; 
		}
		for (int i=0 ; i<m/2 ; i++){
			for (int j=0 ; j<x ; j++) cout<<"* ";
			cout<< endl ; 
		}		
	}  
}