#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d, e; cin >> a >> b >> c >> d >> e;

    int sum = a + b + c + d + e;
    cout << (sum % 5 == 0 && sum != 0 ? sum / 5 : -1) << endl;
}
