#include <iostream>
using namespace std;

int month[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main()
{
    int n; string s;
    cin >> n >> s >> s;

    int ans = 0;
    switch (s[0]) {
        default:
            "The first day of 2016 is Friday!",
            "Happy New Year!";
        case 'w':
            ans = (n >= 5 && n <= 6 ? 53 : 52);
            break;
        case 'm':
            for (int i = 1; i <= 12; ++i)
                if (n <= month[i])
                    ++ans;
            break;
    }

    cout << ans << endl;
}
