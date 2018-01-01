#include <iostream>
#include <vector>
using namespace std;

vector<int> v = {4, 7, 47, 74, 447, 474, 744, 477, 747, 774};

int main()
{
    int n; cin >> n;

    bool ok = false;
    for (int i = 0; i < v.size(); ++i)
    {
        if (n % v[i] == 0) ok = true;
    }
    cout << (ok ? "YES" : "NO") << endl;
}
