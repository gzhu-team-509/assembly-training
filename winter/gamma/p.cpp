#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int cor[3]; cin >> cor[0] >> cor[1] >> cor[2];

    sort(cor, cor + 3);
    cout << cor[1] - cor[0] + cor[2] - cor[1] << endl;
}
