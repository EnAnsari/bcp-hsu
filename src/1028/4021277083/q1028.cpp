#include<iostream>
using namespace std ;
int main(){
unsigned long long int number , sum=0,power,i=1,ch,point ;
bool sw=true;
cout<<" enter number bar mabnaye 2 "<<endl;
cin>>number;
if(number>=0){
 ch=number;
  while(ch>0){
        point=ch%10;
        if(point>=number){
            sw=false;
            break;
        }
        ch=ch/10;
    }
    if(sw==true){
        while(number>0){
            power=number%10;
            sum=power*i + sum;
            i=i*2;
            number=number/10;
        }
        cout<<"number bar mabnaye 10 is :"<<sum;
    }
    else cout<<"ragham ha bayad az 2 kochek tar bashand"<<endl;
}
else cout<<"number is not correct"<<endl;
}
