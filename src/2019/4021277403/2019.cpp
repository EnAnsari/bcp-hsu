#include<iostream>
using namespace std;
int main(){
int n,number,rev=0;
 cin>>n;
 number=n;
 while(n>0){
   rev = (rev*10 + n%10);
   n=n/10;
 }
if(rev==number)cout<<"YES";
 else{cout<<"NO";}

return 0;
}
