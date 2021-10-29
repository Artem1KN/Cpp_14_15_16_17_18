#include <iostream>
using namespace std;


int main()
{
	int N, i = 1, sum = 0;
	cin >> N;
	while (i <= N)
	{
		sum += i * i;
		i += 1;
	}
	return sum;
	cout << sum;
}