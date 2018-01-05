#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    string s; cin >> s;

    int acnt = 0, dcnt = 0;
    for (char c : s)
    {
        c == 'A' ? acnt++ : dcnt++;
    }

    if (acnt < dcnt) cout << "Danik" << endl;
    else if (acnt > dcnt) cout << "Anton" << endl;
    else cout << "Friendship" << endl;
}
