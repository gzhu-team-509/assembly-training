#include <iostream>
using namespace std;

int main()
{
    int n, t; cin >> n >> t;
    char que[55];
    for (int i = 0; i < n; ++i)
        cin >> que[i];

    while (t--)
    {
        for (int i = 0; i < n - 1; ++i)
        {
            if (que[i] == 'B' && que[i + 1] == 'G')
            {
                swap(que[i], que[i + 1]);
                ++i;
            }
        }
    }

    for (int i = 0; i < n; ++i)
        cout << que[i];
    cout << endl;
}
