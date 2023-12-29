#include <iostream>
using namespace std ; 
int main (){
	int A[300] , temp , a=1 ; 
	for (int i=0 ; i<300 ; i++){
		cin>> A[i] ;
	}
	for(int i=0 ; i<300 ; i++){
		for(int j=0 ; j<300 ; j++){
			if(A[i]>A[j]){
			temp = A[i] ; 
			A[i] = A[j] ; 
			A[j] = temp ; 	
			}
		}
	}
	for (int i=299 ; i>=150 ; i--){
		temp = A[299] ; 
		for (int j=298 ; j>=a ; j--){
			A[j+1] = A[j] ; 
		}
		A[a] = temp ; 
		a = a + 2 ; 
	}
	for (int i=0 ; i<300 ; i++){
		cout<< A[i] ;
	}
}
