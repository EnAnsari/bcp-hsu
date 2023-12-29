#include<iostream>
using namespace std;
int main(){
int a[50],b[50],c[50],i;
for(i=0;i<50;i++){
cout<<"enter number for array a:";
cin>>a[i];
}
for(i=0;i<50;i++){
    cout<<"enter a number for array b:";
cin>>b[i];
}
for(i=0;i<50;i++){
c[i]=b[i]+a[i];
}
for(i=0;i<50;i++){
cout<<c[i]<<"     ";
}
}
