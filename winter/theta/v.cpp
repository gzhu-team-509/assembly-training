#include <iostream>
#include <algorithm>
using namespace std;

long long num[300300];

int main()
{
    cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(false);

    int n; cin >> n;

    for (int i = 0; i < n; ++i)
        cin >> num[i];

    sort(num, num + n);

    long long sum = 0;
    for (int i = 0; i < n; ++i)
        sum += num[i] * (i + 2);
    sum -= num[n - 1];

    cout << sum << endl;
}
