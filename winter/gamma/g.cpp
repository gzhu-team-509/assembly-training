#include <iostream>
using namespace std;

int main()
{
    string s; cin >> s;

    int lower = 0;
    for (char c : s)
    {
        if (islower(c)) ++lower;
    }

    bool upper = (s.size() - lower > lower ? true : false);
    for (char c : s)
    {
        cout << (upper ? (char)toupper(c) : (char)tolower(c));
    }
    cout << endl;
}
