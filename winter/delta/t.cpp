#include <iostream>
using namespace std;
using ll = long long;

int main()
{
    ll d1, d2, d3; cin >> d1 >> d2 >> d3;

    // 顺次拜访拓扑图形中的各个顶点，拜访每个顶点时采用最短行程，则总行程最短
    ll ans = min(d1, d2 + d3) + min(d2, d1 + d3) + min(d3, d1 + d2);
    cout << ans << endl;
}
