#include <iostream>
using namespace std;

int main()
{
    int a, b;
        cin >> a;
        cin >> b;
    int x = a;
    for (int i = 1; i < b; i++)
    {
        x = x * a;
    }

    cout << x << endl;
}
