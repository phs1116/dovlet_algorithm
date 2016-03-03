#include <iostream>
#include <stack>
using namespace std;

int n, input[1001], output[1001];
stack<int> st;

bool rails(int count, int cur) {


	//���ÿ� count�� ��ġ�� ���� Ǫ���Ѵ�.
	st.push(count);

	//������ ������� �ʰų� ������ top�� ���� ���� ������ pop�Ѵ�
	while (!st.empty()&&st.top() == output[cur]) {
		st.pop();
		cur += 1;

	}
	//������� 1 : ������ �� ���� ���¿��� ������ ��������� true
	if (n == count && st.empty()) return true;
	
	//������� 2 : ������ �� �־����� ������ ������� ������ flase
	else if (n == count && !st.empty()) return false;

	//�������� �ϳ� ������Ű��
	return rails(count+1, cur);
}

int main() {
	cin >> n;
	
	while (true) {
		//���� �ʱ�ȭ 
		while (!st.empty())
			st.pop();

		//���� ������ �Է¹޴´�.
		for (int i = 1; i<=n; i++) {
			cin >> output[i];
			if (output[i] == 0)
				return 0;
		}
		cout << (rails(1, 1) ? "Yes" : "No") << endl;
	}
}
