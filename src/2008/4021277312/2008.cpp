#include <iostream>
using namespace std ; 

void ShowFibNth(long int &n, long int &m){
	int t ; 
	t = m - n ;
	m = n ; 
	n = t  ;
	cout<< t << endl ;
	if (m!=1){
		ShowFibNth(n,m); 
	}
}

int main (){
	long int a , b ; 
	cin>> a >> b ; 
	cout<< a << endl ; 
	ShowFibNth(a,b) ;
}
