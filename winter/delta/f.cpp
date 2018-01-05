#include <iostream>
using namespace std;

int main()
{
    cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(false);

    int n; cin >> n;
    int mod[3] = {0};

    for (int i = 0; i < 3; ++i)
    for (int j = 0; j < n - i; ++j)
    {
        int t; cin >> t;
        mod[i] ^= t;
    }

    cout << (mod[0] ^ mod[1]) << endl;
    cout << (mod[1] ^ mod[2]) << endl;
}
