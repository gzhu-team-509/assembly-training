#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string a, b, c; cin >> a >> b >> c;

    string d = a + b;
    sort(c.begin(), c.end());
    sort(d.begin(), d.end());

    cout << (c == d ? "YES" : "NO") << endl; 
}
