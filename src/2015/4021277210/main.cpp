#include <iostream>
using namespace std;
int main()
{
    int index = 1;
    int Area = 3;
    int Coordinates[2] = {0 , 0};

    int x; cin >> x; //input

    for (int i = 1; i < x; i++)
    {
        switch (Area)
        {
        case 1:
            Coordinates[0] -= index;
            break;

        case 2:
            Coordinates[1] -= index;
            break;

        case 3:
            Coordinates[0] += index;
            break;

        case 0: //4
            Coordinates[1] += index;
            break;
        }

        Area += 1;
        Area %= 4;

        //each twice
        if (i%2 == 0)
        {
            index += 1;
        }

    }

    cout << Coordinates[0] << " " << Coordinates[1];

    return 0;
}