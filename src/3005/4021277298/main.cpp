#include<iostream>
using namespace std;
int main (){
int IA ,JA ,IB ,JB;
cin >>IA >>JA >> IB >>JB;
int A[IA][JA] ,B[IB][JB] ,i = 0 ,j ,sum ,C[IA][JB];
while (i < IA)
{
    int j = 0;
    while (j < JA)
    {
        cout << "enter number: ";
        cin >> A[i][j];
        j++;
    }
    i++;
}
i = 0;
while (i < IB)
{
    j = 0;
    while (j < JB)
    {
        cout << "enter number: ";
        cin >> B[i][j];
        j++;
    }
    i++;
}
// B
if (JA != IB)
{
    cout<<"zarb nemishavand.";
}
else{
    int Ia = 0, Jb = 0 ,Ic = 0 ,Jc = 0 ;
    while (Ic < IA)
    {
    int Ja = 0 , Ib = 0 , sum = 0;
    while (Ja < JA)
    {
        sum = sum + (A[Ia][Ja] * B[Ib][Jb]);
        Ja = Ja + 1;
        Ib = Ib + 1;
    }
    Jb = Jb + 1;
    if (Jb == JB)
    {
        Jb = 0;
        Ia = Ia + 1;
        Jc = 0;
        Ic = Ic + 1;
    }
    C[Ic][Jc] = sum;
    Jc = Jc + 1;
    }
    for (int i = 0; i < IA; i++)
    {
    for (int j = 0; j < JB; j++)
    {
        cout<<C[i][j]<<endl;
    }
    }
}
// B
// A 
int D[IA][IB];
if (IA != IB && JA != JB)
{
    cout<<"jam nemishavand"<<endl;
}
else{
    for (int i = 0; i < IA; i++)
    {
        for (int j = 0; j < JB; j++)
        {
            D[i][j] = A[i][j] + B[i][j];
        }
    }

    for (int i = 0; i < IA; i++)
    {
    for (int j = 0; j < JA; j++)
    {
        cout<<D[i][j]<<endl;
    }
    }
}
// B
// C
bool same = true;
if (IA != IB && JA != JB)
{
    cout<<"2 matris barabar nistand"<<endl;
}
else{
for (int i = 0; i < IA && same == true; i++)
{
    for (int j = 0; j < JA && same == true; i++)
    {
        if (A[i][j] != B[i][j])
        {
            same = false;
        }
    }
}
}
if (same == true)
{
    cout<<"2 matris barabarand";
}
else {
    cout<<"2 matris barabar nistand";
}
// C
    return 0;
}
