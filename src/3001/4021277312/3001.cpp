#include <iostream>
using namespace std ; 
int main (){
	int a=0 , b=0 , c=0 , d=0 ;
	int n ; 
	cin>> n ;
	for (int i=0 ; i<n ; i++){
		for(int j=0 ; j<n ; j++){
			cin>>A[i][j] ; 
		}
	} 
	for (int i=0 ; i<n ; i++){
		for (int j=0 ; j<n ; j++){
			a = a + A[i][j] ;
			if (i==j) b = b + A[i][j] ; 
			if (j>i)  c = c + A[i][j] ;
			if (j<i)  d = d + A[i][j] ;  
			}  
		}
	}
	cout<< a << b << c << d ; 
}
