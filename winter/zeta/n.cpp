#include <iostream>
using namespace std;

int main()
{
    string s; cin >> s;

    const string ab = "AB", ba = "BA";
    bool ok = false;

    if (s.find(ab) != -1) if (s.find(ba, s.find(ab) + 2) != -1) ok = true;
    if (s.find(ba) != -1) if (s.find(ab, s.find(ba) + 2) != -1) ok = true;

    cout << (ok ? "YES" : "NO") << endl;
}
