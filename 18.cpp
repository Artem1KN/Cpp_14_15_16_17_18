#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n; //����������� ����� N
	int count = 0;//�������

	for (int i = 0; i < n; i++)
	{
		if (!(i % 5 == 0 && i % 3 == 0 && i % 2 == 0))
			//�������� �� �����������
			count++;
	}

	cout << count << endl;

	return 0;
}