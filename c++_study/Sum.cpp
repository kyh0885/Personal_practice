//����Ʈ ���� for���ȿ� i�� int i =0;���� ó�� �ʱ�ȭ�� �� ���̶�� �������� cout << i << "=";��
//�� �� ���� �ֳ��ϸ� ���������̱� ������ �ʱ�ȭ�� �Ǳ� �����̴�.
#include <iostream>

using namespace std;
int main() {

	int i, n, m;
	int sum = 0;

	cin >> n >> m;	
	for (i = n; i < m; i++)
	{
		cout << i << "+";
		sum += i;
	}
	cout << i << "=";
	cout << sum + i << endl;
	return 0;
}

