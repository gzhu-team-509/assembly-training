#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;

    if (n == 2 || n == 3) cout << 1 << endl << n << endl;
    else
    {
        int cnt = n / 2 - n % 2;
        cout << (cnt + n % 2) << endl;
        while (cnt--) cout << "2 ";
        cout << (n % 2 ? "3\n" : "\n");
    }
}
