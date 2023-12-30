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
for (int j = 0; j < Ja; j++)
{
    sum += A[0][j];
}
cout<<sum<<endl;
// A
// B
int multi = 0;
for (int i = 0; i < Ia; i++)
{
    multi *= A[i][Ja - 1];
}
cout<<multi<<endl;
// B
// C
int counter = 0;
for (int i = 0; i < Ia; i++)
{
    for (int j = 0; j < Ja; j++)
    {
        if (A[i][j] == 0)
        {
            counter++;
        }
    }
}
cout <<counter;
// C
// D
int min = A[0][Ja - 1],i = 0,j = Ja - 1;
while (i < Ia)
{
    if (A[i][j] < min)
    {
        min = A[i][j];
    }
    i++;
    j--;
}
// D
    return 0;
}
