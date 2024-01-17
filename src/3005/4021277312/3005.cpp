#include <iostream>
using namespace std ;  
int main (){
	int n , m , C[100][100] ; 
	cin>> n >> m ; 
	int A[n][m] ; 
	for (int i=0 ; i<n ; i++){
		for (int j=0 ; j<m ; j++){	
		cin>> A[i][j] ; 
		}
	}
	int nn , mm ; 
	cin>> nn >> mm ; 
	int B[nn][mm] ; 
	for (int i=0 ; i<nn ; i++){
		for (int j=0 ; j<mm ; j++){	
		cin>> B[i][j] ; 
		}
	}
	// Zarb : 
	if (m!=nn) {
	cout<< "Zarb nemishvd " ; 
	}
	else {
	for(int i=0 ; i<n ; i++){
		for(int j=0;j<m;j++){
			c[i][j] = 0 ;
			for(int k=0 ; k<n ; k++) c[i][j] += A[i][k] * B[k][j] ;
			}
		}
	for (int i=0 ; i<n ; i++){
		for (int j=0 ; j<m ; j++){	
		cout<< C[i][j] ; 
		}
	}	
	}
	// Jam : 
	if (mm==m && n==nn){
		int D[100][100] ; 
	for (int i=0 ; i<n ; i++){
		for (int j=0 ; j<m ; j++){	
			D[i][j] = A[i][j] + B[i][j] ; 
			}
		}
	for (int i=0 ; i<n ; i++){
		for (int j=0 ; j<m ; j++){	
		cout<< D[i][j] ; 
		}
	}
	}else {
		cout<<"jam nemishavad ! " ; 
	}
	// brabri : 
	bool ham=false ;  
	if (mm==m && n==nn){
		for (int i=0 ; i<n ; i++){
			for (int j=0 ; j<m ; j++){	
				if (A[i][j]==B[i][j]){
				ham = true ; 
				}else{
					ham = false ; 
					j = m ; 
					i = n ;
				}
			}
		}
	}
	if (ham==false){
		cout<<"brabr nistand ! " ; 
	}else if (ham==true){
		cout<<"brabrnd ! " ; 
	}
}
