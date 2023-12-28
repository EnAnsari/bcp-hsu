#include<iostream>
using namespace std;
int main(){

int i,MaxDif,index,D,A[50];

cout<<"Enter 50 Numbers:"<<endl;

 for(i=0;i<10;i++) {cin>>A[i];}

 MaxDif = A[1] - A[0];
 if (MaxDif < 0)
  MaxDif *= (-1);

 for(i=1;i<10;i++){
    D = A[i] - A[i-1] ;
    if(D < 0) D *= (-1);
    if (D > MaxDif) {MaxDif = D;
     index = i;}
 }
  cout<<"Max Different: "<<MaxDif<<endl;
  cout<<"Max Different index: "<<index<<" And "<<index + 1<<endl;

 return 0;
}
