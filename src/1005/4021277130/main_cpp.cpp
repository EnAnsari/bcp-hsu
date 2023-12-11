#include<iostream>
#include <cmath>
using namespace std;
int main()
{
int a,b,c;
float Root1,Root2;
cout<<"Coefficient 1 : ";
cin>>a;
cout<<"Coefficient 2 : ";
cin>>b;
cout<<"Coefficient 3 : ";
cin>>c;

    if (a!=0)
    {


        int delta = ((b * b ) - ( 4 * a * c ));
        if (delta > 0 )
        {

             Root1 = ( -b + sqrt(delta) ) / ( 2 * a );
             Root2 = ( -b - sqrt(delta) ) / ( 2 * a );
             cout<<"It Has Two Roots"<<endl;
             cout<<"Root 1 : "<<Root1<<endl;
             cout<<"Root 2 : "<<Root2<<endl;

        }
        else if (delta == 0)
        {

            Root1 = (-b) / ( 2 * a );
            cout<<"Root 1 : "<<Root1<<endl;
        }

        else
        {
            cout<<"No Root"<<endl;
        }
    }



    else
    {
        cout<<"It's Impossible";
    }


}
