#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> legs(6);

    for (int i = 0; i < 6; ++i) cin >> legs[i];
    sort(legs.begin(), legs.end());

    int lleg = legs[3], nleg = 0;
    for (int i = 0; i < 6; ++i)
    {
        if (legs[i] == lleg) ++nleg;
    }

    if (nleg < 4) cout << "Alien" << endl;
    else
    {
        for (int i = 0; legs.size() > 2; i++)
        {
            if (legs[i] == lleg)
            {
                legs.erase(legs.begin() + i);
                i--;
            }
        }
        if (legs[0] == legs[1]) cout << "Elephant" << endl;
        else cout << "Bear" << endl;
    }
}
