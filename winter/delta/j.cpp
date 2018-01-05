#include <iostream>
using namespace std;

int main()
{
    int n, m; cin >> n >> m;

    string color = "CMY";
    bool colorful = false;
    for (int i = 0; !colorful && i < n * m; ++i)
    {
        char c; cin >> c;
        if (color.find(c) != -1) colorful = true;
    }

    cout << (colorful ? "#Color" : "#Black&White") << endl;
}
