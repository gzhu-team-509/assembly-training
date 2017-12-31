#include <iostream>
using namespace std;

int main()
{
    string a, b; cin >> a >> b;
    int diff;
    for (int i = 0; i < a.length(); ++i)
    {
        diff = tolower(a[i]) - tolower(b[i]);
        if (diff) break;
    }
    diff = diff < 0 ? -1 : diff;
    diff = diff > 1 ? 1 : diff;
    cout << diff << endl;
}
