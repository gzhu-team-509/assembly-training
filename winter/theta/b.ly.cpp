/* Dasha and Stairs */
#include <iostream>
#include <cmath>
using namespace std;

// 值必须先存在并且合理，才能继续比较大小
// 注意 if else 嵌套

int main()
{
    int even, odd; cin >> even >> odd;
    if (!(even || odd)) cout << "NO" << endl;
    else if (abs(even - odd) > 1) cout << "NO" << endl;
    else cout << "YES" << endl;
}
