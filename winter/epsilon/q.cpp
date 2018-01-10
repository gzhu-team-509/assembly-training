#include <iostream>
using namespace std;

int main()
{
    int k2, k3, k5, k6; cin >> k2 >> k3 >> k5 >> k6;

    int sum = 0;
    while (k2 && k5 && k6)
        sum += 256, k2--, k5--, k6--;
    while (k3 && k2)
        sum += 32, k3--, k2--;
    
    cout << sum << endl;
}
