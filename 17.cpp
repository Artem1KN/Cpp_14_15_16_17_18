#include<iostream>
using namespace std;
int main()
{
    int h, x, sum = 0;
    cout << "number of students";
    cin >> x;
    for (int i = 1; i <= x; i+=1)
    {
        cout << "height" << i;
        cin >> h;
        sum += h;
    }
    cout << sum / x;
}