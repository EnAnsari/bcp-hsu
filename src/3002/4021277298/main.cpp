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
int max = A[0][0];
for (int i = 0; i < Ia; i++)
{
    for (int j = 0; j < Ja; j++)
    {
        if (A[i][j] > max)
        {
            max = A[i][j];
        }
    }
}
cout<<max<<endl;
// A
// B
int max = A[0][0];
for (int i = 0; i < Ia; i++)
{
    for (int j = 0; j < Ja; j++)
    {
        if (i == j)
        {
            if (A[i][j] > max)
            {
                max = A[i][j];
            }   
        }
    }
}
cout<<max<<endl;
// B
// C
int max = A[1][0], vector = Ia ;
for (int i = Ia - 1; i >= 0; i--)
{
    for (int j = Jb - 1; j >= 0; j--)
    {
        if (i == j)
        {
            vector--;
        }
        if (i < vector && j < vector)
        {
            if (A[i][j] > max)
            {
                max = A[i][j];
            }
        }   
    }
}
cout<<max<<endl;
// C
// D
int max = A[1][0], vector = -1;
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
            if (A[i][j] > max)
            {
                max = A[i][j];
            }
        }   
    }
}
cout<<max<<endl;
// D
    return 0;
}
