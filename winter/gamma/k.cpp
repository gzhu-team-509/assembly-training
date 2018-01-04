#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;

    int i = 0;
    while (n >= (1 + i) * i / 2)
    {
        n -= (1 + i) * i / 2;
        i++;
    }
    cout << i - 1 << endl;
}
