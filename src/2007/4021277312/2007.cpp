#include <iostream>
using namespace std ; 
int main (){
	int n ; 
	cin>> n ; 
	char A[n][n] ; 
	for (int i=0 ; i<n ; i++){
		for(int j=0 ; j<n ; j++){
			A[i][j] = ' ' ;
			A[0][j] = '#' ;
			A[i][0] = '#' ;
			A[i][n-1] = '#' ; 
			A[n-1][j] = '#' ; 
			if(i==j) A[i][j] = '#' ; 
			if(j==n-1-i) A[i][j] = '#' ; 
			if(j>i && i>n-1-j) A[i][j] = '#' ;
		}
	}
	for (int i=0 ; i<n ; i++){
		for(int j=0; j<n ;j++){
			cout<<A[i][j] ; 
		}
	cout<<endl ; 
	}
}
