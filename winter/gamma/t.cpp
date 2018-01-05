#include <iostream>
using namespace std;

int main()
{
    int n, k; cin >> n >> k;

    int rst = 240;
    int i = 0;
    while (rst - k >= 5 * (i + 1) && i + 1 <= n)
    {
        rst -= 5 * (i + 1);
        ++i;
    }
    cout << i << endl;
}
