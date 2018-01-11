#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s; cin >> s;
    sort(s.begin(), s.end());

    for (int i = s.size() - 1; i >= 0 && s[i] != '0' && s[i] != '1'; --i)
        cout << s[i];
    cout << endl;
}
