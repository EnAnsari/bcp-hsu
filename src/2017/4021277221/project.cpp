#include <iostream>
#include <vector>
using namespace std;

int findwinner(int n, bool d[], int cur, int level)
{
    bool went = false;
    if(level == n) return cur;
    d[cur - 1] = true;
    while(true) {
        if(cur == n)
            cur = 1;
        else cur++;
        if(d[cur - 1] == 0) {
            if(went == false)
                went = true;
            else return findwinner(n, d, cur, level + 1);
        } 
    }
    return findwinner(n, d, cur, level + 1);
}
int main()
{
    int numcandidates;
    cin >> numcandidates;
    bool deleted[numcandidates];
    for(int i = 0; i < numcandidates; i++)
        deleted[i] = 0;
    cout << findwinner(numcandidates, deleted, 2, 1);

    return 0;
}
