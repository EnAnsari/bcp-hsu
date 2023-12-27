#include <iostream>
using namespace std;
void p(int x,int a){
  int spaces=a-x;
  int stars=2*x+1;
  for (int i=0;i<spaces;i++){
    cout<<" ";
  }
  for(int i=0;i<stars;i++){
    cout<<"*";
  }
  cout<<"\n";
}

void q(int diameter){
  int a=diameter/2;
  for(int x=0;x<=a;x++){
    p(x,a);
  }
  for(int x=a-1;x>=0;x--){
    p(x,a);
  }
}

int main(){
  int n;
  cin>>n;
  q(2*n+1);
  return 0;
}
