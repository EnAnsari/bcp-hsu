#include <iostream>
using namespace std ; 
int main (){
	int a , b , c , d ;
	int n ; 
	cin>> n ; 
	for (int i=0 ; i<n ; i++){
		for (int j=0 ; j<n ; j++){	
		cin>> A[i][j] ; 
		}
	}
	a = A[0][0] ; 
	b = A[0][0] ;
	c = A[0][1] ;  
	d = A[1][0] ; 
	for (int i=0 ; i<n ; i++){
		for (int j=0 ; j<n ; j++){
			if ( A[i][j] > a ) a = A[i][j] ; 
			if ( i==j && A[i][j] > b ) b = A[i][j] ; 
			if ( j>i && A[i][j] > c ) c = A[i][j] ; 
			if ( j<i && A[i][j] > d ) d = A[i][j] ; 
		}
	}
	cout<< a << b << c << d ; 
}
