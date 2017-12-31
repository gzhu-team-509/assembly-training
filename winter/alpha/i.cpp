#include <iostream>
using namespace std;

int main()
{
    string s; cin >> s;
    bool dangerous = false;
    if (s.find("1111111") != -1 || s.find("0000000") != -1) dangerous = true;
    cout << (dangerous ? "YES" : "NO") << endl;
}
