#include <iostream>
using namespace std;
int main(){
int Ia,Ja;
cin>>Ia>>Ja;
int A[Ia][Ja];
for (int i = 0; i < Ia; i++)
{
    for (int j = 0; j < Ja; j++)
    {
        cin>>A[i][j];
    }
}
// A
int sum = 0;
for (int i = 0; i < Ia; i++)
{
    for (int j = 0; j < Ja; j++)
    {
        sum += A[i][j];
    }
}
cout<<sum<<endl;
// A
// B
int sum = 0;
for (int i = 0; i < Ia; i++)
{
    for (int j = 0; j < Ja; j++)
    {
        if (i == j)
        {
            sum += A[i][j];
        }
    }
}
cout<<sum<<endl;
// B
// C
int sum = 0 ,vector = -1;
for (int i = 0; i < Ia; i++)
{
    for (int j = 0; j < Ja; j++)
    {
        if (i == j)
        {
            vector++;
        }
        if (i > vector && j > vector)
        {
            sum += A[i][j];
        }   
    }
}
cout<<sum<<endl;
// C
// D
int sum = 0 , vector = -1;
for (int i = 0; i < Ia; i++)
{
    for (int j = 0; j < Ja; j++)
    {
        if (i == j)
        {
            vector++;
        }
        if (i < vector && j < vector)
        {
            sum += A[i][j];
        }   
    }
}
cout<<sum<<endl;
// D
    return 0;
}
