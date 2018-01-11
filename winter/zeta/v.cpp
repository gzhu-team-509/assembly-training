#include <iostream>
using namespace std;

int main()
{
    cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(false);

    string n; cin >> n;

    for (int i = 0; i < n.size(); ++i) cout << n[i];
    for (int j = n.size() - 1; j >= 0; --j) cout << n[j];
    cout << endl;
}
