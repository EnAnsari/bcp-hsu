#include<iostream>
using namespace std;
int main(){
int x,max,n,i;
cin>>n;
cout<<endl;
cin>>x;
max=x;
for(i=1;i<n;i++){
        cin>>x;
if(x>max){max=x;

}
}
cout<<max;
return 0;
}
