#include <iostream>
using namespace std;
int main(){
int n , k , s=0,coutnter=0,i ,t=240;
cin>>n;
cin>>k;
t = t - k ;
for(i=1;i<n&&s<t;i++){
    s = (i * 5) + s ;
    if(s<=t){coutnter++;}
}
cout<<coutnter<<endl;
}
