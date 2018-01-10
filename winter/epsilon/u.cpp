#include <iostream>
#include <algorithm>
using namespace std;

struct laptop
{
    int price, quality;
} laptops[100100];

int main()
{
    int n; cin >> n;

    for (int i = 0; i < n; ++i)
        cin >> laptops[i].price >> laptops[i].quality;

    auto cmp = [](laptop a, laptop b) {
        return a.price < b.price;
    };
    sort(laptops, laptops + n, cmp);

    bool happy = false;
    for (int i = 0; i < n - 1; ++i)
    {
        if (laptops[i].price < laptops[i + 1].price)
            if (laptops[i].quality > laptops[i + 1].quality)
                happy = true;
    }

    cout << (happy ? "Happy Alex" : "Poor Alex") << endl;
}
