#include <iostream>
using namespace std;

int main()
{
    int n, x = 0; cin >> n;
    while (n--)
    {
        string s; cin >> s;
        x += (s[1] == '+') ? 1 : -1;
    }
    cout << x << endl;
}
