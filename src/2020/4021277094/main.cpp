#include<iostream>
using namespace std;
int main(){
int n,i,j,line;
cin>>n;
line=2*n+1;
for(i=1;i<=n+1;i++){
for(j=1;j<=line;j++){
if(j>=n-i+2 && j<=n+i)
cout<<"*";
else cout<<" ";
}
cout<<endl;
}
for(i=n;i>0;i--){
for(j=line;j>1;j--){
if(j>=n-i+2 && j<=n+i)
cout<<"*";
else cout<<" ";
}
cout<<endl;
}
return 0;
}
