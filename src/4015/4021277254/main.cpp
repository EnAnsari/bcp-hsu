#include<iostream>
using namespace std;
int main(){
int i,j,s;
for(i=1000;i<10000;i++){
int n=0;
for(j=1;j<=i;j++){
    if(i%j==0)
n++;
if(n>7){
cout<<i<<endl;
break;
}
}
}
return 0;
}
