#include <iostream>
using namespace std;
using ll = long long;

string name[5] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};

int main()
{
    ll n; cin >> n;

    ll base = 1;
    while (base * 5 < n)
    {
        n -= base * 5;
        base *= 2;
    }

    ll cnt = 0;
    while (base < n)
    {
        n -= base;
        ++cnt;
    }
    cout << name[cnt] << endl;
}
