#include <iostream>
using namespace std ; 
int mian (){
	int A[1001] , temp , B[1001] ; 
	for (int i=0 ; i<1001 ; i++){
		cin>> A[i] ; 
	}
	for (int i=0 ; i<1001 ; i++){
		for (int j=i ; j<1001 ; j++){
			if (A[i]>A[i]){
				temp = A[i] ; 
				A[i] = A[j] ; 
				A[j] = temp ; 
			}
		}
	}
	for (int i=0 ; i<1001 ;i++){
		B[i] = A[i] - A[500] ; 
	}
	for (int i=0 ; i<1001 ; i++){
		cout<< B[i] ; 
	}
}
