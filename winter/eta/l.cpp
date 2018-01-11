#include <iostream>
using namespace std;

int score(int p, int t)
{
    return max(3 * p / 10, p - p / 250 * t);
}

int main()
{
    int a, b, c, d; cin >> a >> b >> c >> d;

    int misha = score(a, c);
    int vasya = score(b, d);

    if (misha != vasya)
        cout << (misha < vasya ? "Vasya" : "Misha") << endl;
    else
        cout << "Tie" << endl;
}
