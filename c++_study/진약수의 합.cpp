//����������� 1�� ������ ���� �Ǳ� ������ 1�� ó������ �����Ѵٴ°��� �����Ͽ� �����ϸ� �ȴ�
// �׷��ٸ� for���� �ʱⰪ�� 2���� �����ϸ� �ȴ�
#include <iostream>

using namespace std;
int main() {

	int i, n;
	int sum = 0;
	
	cin >> n;
	cout << 1;

	for (i = 2; i < n; i++) 
	{
		if (n % i == 0)
		{
			cout <<"+" << i;
			sum += i;
		}
	}
	cout << "=" << sum+1 << endl;
	return 0;
}

