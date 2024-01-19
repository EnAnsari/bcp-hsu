#include<iostream>
using namespace std;
float maxi(float nomre[50],float &maximum){
    maximum=0 ;
for(int i=0 ; i<50 ; i++){
    if(nomre[i]>maximum) maximum=nomre[i];
}
return maximum;
}
void up(float nomre[50],float power){
for(int i=0 ; i<50;i++){
    nomre[i]=nomre[i]+power;
    cout<<"the last score is :"<<endl;
    cout<<nomre[i]<<endl;
}

}
int main(){
float nomre[50],maximum,power;
for(int i=0 ; i<50;i++){
        cout<<"enter score"<<endl;
    cin>>nomre[i];
}
power=20 - maxi(nomre,maximum) ;
up(nomre,power);
}

