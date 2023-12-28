#include<iostream>
using namespace std;
int main(){
 int i,j=0,sum=0,avg,A[100];
 cout<<"Enter Numbers: "<<endl;
 for(i=0;i<10;i++){
    cin>>A[i];
 }
 for(i=0;i<10;i++){
    if(A[i]%2==0){
        j++;
        sum=A[i]+sum;
    }
 }
 avg=sum/j;
 cout<<"The Average is: "<<avg;
return 0;
}

