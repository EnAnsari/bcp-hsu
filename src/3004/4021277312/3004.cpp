#include <iostream>
using namespace std ; 
int main (){
	int a=1 , b=1 , c=0 , d ; 
	int n ; 
	cin>> n ; 
	for (int i=0 ; i<n ; i++){
		for (int j=0 ; j<n ; j++){	
		cin>> A[i][j] ; 
		}
	}
	d = A[0][n-1] ; 
		for (int i=0 ; i<n ; i++){
		for (int j=0 ; j<n ; j++){
			a = a * A[0][j] ;
			b = b * A[i][n-1] ; 
			if (A[i][j]==0) c++ ;
			if ( j==n-1-i && A[i][j] < d ) d = A[i][j] ;     
		}
	}	
	cout<< a << b << c << d ; 
}
