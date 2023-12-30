#include <iostream>
using namespace std;
int fact(){

 int i,f=1,n;

 cin>>n;

 for(i=1;i<=n;i++){
     f*=i;
 }

 return f;

}

int main(){
 cout<<fact();


return 0;
}
