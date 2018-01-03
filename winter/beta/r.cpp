#include <iostream>
using namespace std;

int main()
{
    int a, b; cin >> a >> b;

    int i, res;
    for (i = 0, res = 0; a; ++i)
    {
        --a, ++res;
        if (res % b == 0) res = 0, ++a;
    }
    cout << i << endl;
}
