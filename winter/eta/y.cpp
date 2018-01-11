#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;

    bool good = false;
    while (n--)
    {
        string name; int before, after;
        cin >> name >> before >> after;

        if (before >= 2400 && after > before) good = true;
    }

    cout << (good ? "YES" : "NO") << endl;
}
