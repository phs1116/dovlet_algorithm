#include <iostream>
#include <stack>
using namespace std;

int n, input[1001], output[1001];
stack<int> st;

bool rails(int count, int cur) {


	//스택에 count에 위치한 값을 푸시한다.
	st.push(count);

	//스택이 비어있지 않거나 스택의 top과 뺴낼 값이 같으면 pop한다
	while (!st.empty()&&st.top() == output[cur]) {
		st.pop();
		cur += 1;

	}
	//기저사례 1 : 끝까지 다 넣은 상태에서 스택이 비어있으면 true
	if (n == count && st.empty()) return true;
	
	//기저사례 2 : 끝까지 다 넣었지만 스택이 비어있지 않으면 flase
	else if (n == count && !st.empty()) return false;

	//넣을값을 하나 증가시키고
	return rails(count+1, cur);
}

int main() {
	cin >> n;
	
	while (true) {
		//스택 초기화 
		while (!st.empty())
			st.pop();

		//구할 값들을 입력받는다.
		for (int i = 1; i<=n; i++) {
			cin >> output[i];
			if (output[i] == 0)
				return 0;
		}
		cout << (rails(1, 1) ? "Yes" : "No") << endl;
	}
}
