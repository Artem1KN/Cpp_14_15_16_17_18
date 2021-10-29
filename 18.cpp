#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n; //натуральное число N
	int count = 0;//счетчик

	for (int i = 0; i < n; i++)
	{
		if (!(i % 5 == 0 && i % 3 == 0 && i % 2 == 0))
			//проверка на Ќ≈ƒ≈Ћ»ћќ—“№
			count++;
	}

	cout << count << endl;

	return 0;
}