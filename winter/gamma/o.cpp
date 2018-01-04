#include <iostream>
using namespace std;

int main()
{
    int a, b; cin >> a >> b;

    int tot = min(a, b);
    a -= tot, b -= tot;

    int rst = max(a, b) / 2;
    cout << tot << " " << rst << endl;
}
