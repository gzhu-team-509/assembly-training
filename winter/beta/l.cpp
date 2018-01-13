#include <iostream>
#include <cmath>
using namespace std;

// “输出任意符合条件的整数” - wangfujian
// https://github.com/wangfujian/acm/blob/master/Beta/Beta.l.txt

bool isprime(int n)
{
    int i, range = floor(sqrt(n) + 0.5);
    for (i = 2; i <= range; ++i) if (n % i == 0) break;
    return i > range;
}

int main()
{
    int n; cin >> n;
    int a = n / 2, b = a + n % 2;
    while (isprime(a) || isprime(b)) --a, ++b;
    cout << a << " " << b << endl;
}
