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
bool isDiagonal = true;
for (int i = 0; i < Ia; i++)
{
    for (int j = 0; j < Ja; j++)
    {
        if (i != j)
        {
            if (A[i][j] != 0)
            {
                isDiagonal = false;
            }
        }
    }
}
if (isDiagonal)
{
    cout<<"matrix is Diagonal"<<endl;
}
else{
    cout<<"matrix is not Diagonal"<<endl;
}
// A
// B
bool upper = true;
int vector = Ia;
for (int i = Ia - 1; i >= 0 && upper == true; i--)
{
    for (int j = Ja - 1; j >= 0 && upper == true; j--)
    {
        if (i == j)
        {
            vector--;
        }
        if (i < vector && j < vector)
        {
            if (A[i][j] != 0)
            {
                upper = false;
            }
        }
    }
}
if (upper)
{
    cout<<"Matrix is Upper triangular"<<endl;
}
else{
    cout<<"Matrix is not Upper triangular"<<endl;
}
// B
// C
bool below = true;
int vector = -1;
for (int i = 0; i < Ia && below == true; i++)
{
    for (int j = 0; j < Ja && below == true; j++)
    {
        if (i == j)
        {
            vector++;
        }
        if (i > vector && j > vector)
        {
            if (A[i][j] != 0)
            {
                below = false;
            }
        }
    }
}
if (below)
{
    cout<<"Matrix is lower triangular"<<endl;
}
else{
    cout<<"Matrix is not lower triangular"<<endl;
// C
// D
if (Ia != Ja)
{
    cout<<"not symmetrical";
}
else{
int transpose_A[Ia][Ja];
for (int i = 0; i < Ia; i++)
{
    for (int j = 0; j < Ja; j++)
    {
        transpose_A[j][i] = A[i][j];
    }
}
bool isSymmetrical = true;
for (int i = 0; i < Ia && isSymmetrical == true; i++)
{
    for (int j = 0; j < Ja && isSymmetrical == true; j++)
    {
        if (A[i][j] != transpose_A[i][j])
        {
            isSymmetrical = false;
        }
    }
}
if (isSymmetrical == true)
{
    cout<<"Symmetrical";
}
else{
    cout<<"not Symmetrical";
}
}
return 0;
// D
}
}
