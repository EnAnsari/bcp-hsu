#include <iostream>
using namespace std ; 

int gcd (int n){
	int m , a=0 , b=0 , ham=-1 ;
	m = n % 1000 ;
	n = n / 1000 ;  
	for (int i=1 ; i<m && i<n ; i++ ){
		if(m%i==0 && n%i==0){
			ham = i ; 
		}
	}
	return ham ; 
}

int main (){
int n ;
cout<<"enter a number :";
cin>> n ;
cout<< gcd(n) ; 
}
