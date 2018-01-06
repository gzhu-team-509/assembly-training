#include <iostream>
using namespace std;

string keys = "qwertyuiopasdfghjkl;zxcvbnm,./";

int main()
{
    char c; cin >> c;
    bool right = (c == 'R' ? true : false);

    string s; cin >> s;
    for (char c : s)
    {
        int pos = keys.find(c);
        cout << keys[pos + (right ? -1 : 1)];
    }
    cout << endl;
}
