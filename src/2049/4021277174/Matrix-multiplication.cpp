#include <iostream>
using namespace std;
int main(){
int i , j , z ,x ,y ,s=0,i1,j1;
cin>>i>>j>>z;
int  A[i][j],B[j][z],C[i][z];
cout<<"A"<<endl;
for(x=0;x<i;x++){
    for(y=0;y<j;y++){
        cin>>A[x][y];
    }
}
cout<<"B"<<endl;
for(x=0;x<j;x++){
    for(y=0;y<z;y++){
        cin>>B[x][y];
    }
}
x=0;
y=0;
for(i1=0;i1<i;i1++){
    for(j1=0;j1<z;j1++){
            for(y=0;y<j;y++){
                s = A[i1][y] * B[y][j1] + s;
            }
        C[i1][j1] = s;
        s=0;
        }

    }


cout<<"c"<<endl;
for(i1=0;i1<i;i1++){
    for(j1=0;j1<z;j1++){
        cout<<C[i1][j1]<<endl;
    }
}
}
