#include<iostream>
using namespace std;
int main(){
int i,n,t,c=0,sum=0,A[1000];

 for(i=0;i<1000;i++) cin>>A[i];

 for(i=0;i<1000;i++){
    while(A[i] != 0){
        t=A[i]%10;
        sum=t+sum;
        A[i] = A[i]/10;
         if(sum%9==0) c++;
    }
  }
  cout<<'\n'<<c<<endl;

  return 0;
}
