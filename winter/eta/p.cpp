#include <iostream>
using namespace std;

string names[] = {"chest", "biceps", "back"};

int main()
{
    int n; cin >> n;

    int exer[3] = {0};
    for (int i = 0; i < n; ++i)
    {
        int t; cin >> t;
        exer[i % 3] += t;
    }

    if (exer[0] > exer[1] && exer[0] > exer[2]) cout << names[0] << endl;
    else if (exer[1] > exer[0] && exer[1] > exer[2]) cout << names[1] << endl;
    else cout << names[2] << endl;
}
