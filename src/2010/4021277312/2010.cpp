#include <iostream>
using namespace std ; 
int main (){
	long int a , b , bmm ;
	cin>> a >> b ;
	for (int i=1 ; i<=b & i<=a ; i++){
		if(a%i==0 && b%i==0){
			bmm = i ; 
		}
	}
	cout<< bmm ; 
}
