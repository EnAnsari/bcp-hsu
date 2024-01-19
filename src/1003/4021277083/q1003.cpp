#include<iostream>
using namespace std ;
int main(){
int sum=0 , hour , minute , second ;
cout<<"whats hour ?"<<endl;
cin>>hour ;
cout<<"whats minute?"<<endl;
cin>>minute ;
cout<<"whats second"<<endl;
cin>>second ;
if(hour>=0&&hour<=24&&minute>=0&&minute<=60&&second>=0&&second<=60){
    sum=sum+ hour*3600 + minute*60 + second ;
    cout<<"the second passed of day is : "<<sum ;
}
else cout<<"one of inputs is not correct";
}
