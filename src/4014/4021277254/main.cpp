#include<iostream>
using namespace std;
int main(){
int i,n;
int avg=0,sum=0,f=0;
for(i=1;i<=100;i++){
 cin>>n;
   if(n%2==0) {
   sum=n+sum,f=f+1;

  avg=sum/f;
   }
}

cout<<avg;


}
