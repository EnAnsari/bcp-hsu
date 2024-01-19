#include <iostream>
#include <string>
using namespace std;

int main() {

   int i,k;
   string num;

   for(i=1;i<=5000;i++){
       num = num + to_string(i);
   }

   cin>>k;
   cout<<num[k-1];

return 0;

}








