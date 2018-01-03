#include <iostream>
using namespace std;

int main()
{
    string a, b; cin >> a >> b;

    int len = a.size();
    for (int i = 0; i < len; ++i)
    {
        if (a[i] == b[i]) cout << '0';
        else if (a[i] == '1' || b[i] == '1') cout << '1';
    }
    cout << endl;
}
