#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;

    int mid = n + 1;
    for (int i = 1; i <= 2 * n + 1; ++i)
    {
        int k = (i <= mid ? i : 2 * mid - i);
        for (int j = 1; j <= 2 * n + 1; ++j)
        {
            if (abs(j - mid) <= k - 1)
                cout << k - 1 - abs(j - mid);
            else
                cout << ' ';

            if (j - mid == k - 1) {
                cout << endl; break;
            }
            else
                cout << ' ';
        }
    }
}
