#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;

    int normal = n / 7 * 2;
    int more = (n % 7 > 2 ? 2 : n % 7);
    int less = (n % 7 > 5 ? 1 : 0);

    cout << normal + less << ' ' << normal + more << endl;
}
