#include<iostream>
using namespace std;
bool arr(int s, int n) {
int array[s];
for(int i=0; i<s; i++) {
array[i]=n%10;
n/=10;
}
for(int i=0, l=s-1; i<l; i++,l--) {
if(array[l]!=array[i]) {
return false;
}
}
return true;
}
int main() {
int n, f, s=0;
cin>>n;
f=n;
while(f>0) {
f/=10;
s++;
}
bool k=arr(s,n);
if(k) {
cout<<"YES";
}
else {
cout<<"NO";
}
return 0;
}
