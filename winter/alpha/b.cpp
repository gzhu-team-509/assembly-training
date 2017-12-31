#include <iostream>
using namespace std;

int main()
{
    int w; cin >> w;
    switch (w)
    {
        case 1: case 2: cout << "NO" << endl; break;
        default: cout << (w % 2 ? "NO" : "YES") << endl; break;
    }
}
