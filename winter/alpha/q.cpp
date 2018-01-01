#include <iostream>
using namespace std;

int main()
{
    string s; cin >> s;
    string v = "HQ9";

    bool output = false;
    for (char c : s)
    {
        if (v.find(c) != -1) output = true;
    }
    cout << (output ? "YES" : "NO") << endl;
}
