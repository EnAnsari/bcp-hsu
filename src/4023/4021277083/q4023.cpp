#include<iostream>
using namespace std;
void dif(int number[50]){
int max1=0 , max2=1 ,maxall=0 ,power ;
for(int i=0 ; i<49;i++){
    power=number[i]-number[i+1];
    if(power<0) power=power*-1;
    if (power>maxall){
        max1=i ;
        max2=i+1;
        maxall=power;
    }
}
cout<<max1<<" "<<max2<<" "<<maxall;
}
int main(){
int number[50];
for(int i=0 ; i<50 ; i++){
    cin>>number[i];
}
dif(number);
}
