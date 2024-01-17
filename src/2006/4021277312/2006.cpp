#include <iostream>
using namespace std ; 
int main (){
	int a , b , t=0 ; 
	cin>> a >> b ;
	for  (int i=a ; i<=b ; i++){
		t=0 ; 
		for (int j=2 ; j<i ; j++){
			if (i%j==0) t = -1 ; 
		}
			if (t==0) cout<< i << endl ; 
	} 	
}
