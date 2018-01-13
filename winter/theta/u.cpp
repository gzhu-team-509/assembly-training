#include <iostream>
using namespace std;

int main()
{
    int a1, a2; cin >> a1 >> a2;

    int last = 0;
    while (a1 > 0 && a2 > 0)
    {
        if (max(a1, a2) >= 2) ++last;
        if (a1 < a2)
            a1 += 1, a2 -= 2;
        else
            a1 -= 2, a2 += 1;
    }
    cout << last << endl;
}
