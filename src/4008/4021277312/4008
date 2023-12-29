#include <iostream>
using namespace std ; 
int main () {
	cout<<"Q34) miangin adad moteqaren : "<<endl ; 
	int A[50] ;
	float x=0 , y=0 ; 
	for (int i=0 ; i<10 ;i++){
		cout<<"Enter a number ["<<i<<"] :";
		cin>> A[i] ;
	}
	for (int i=0 ; i<10 ; i++){
		int m , a=1 , t=0 ;
		m = A[i] ; 
		while (m>10){
			m = m / 10 ; 
			a = a * 10 ; 
		}	
		
		m = A[i] ; 
		while (m>=1){
			t = (m%10)*a + t ; 
			m = m / 10 ;
			a = a / 10 ;  
		}
		if (t==A[i]){
			x++ ; 
			y = t + y ; 
		}
	}
	if (x==0){
		cout<<"There was no palindromatic numbers in the input ! ";
	}
	cout<< y / x ; 
}
