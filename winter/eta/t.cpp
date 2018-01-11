#include <iostream>
using namespace std;

int main()
{
    string a, b; cin >> a >> b;

    if (a != b)
        cout << max(a.size(), b.size()) << endl;
    else
        cout << -1 << endl;
}
