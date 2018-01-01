#include <iostream>
using namespace std;

int main()
{
    int a, b; cin >> a >> b;
    int idle = min(a, b);
    cout << (idle % 2 ? "Akshat" : "Malvika") << endl;
}
