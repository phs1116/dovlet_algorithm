#include <iostream>

using namespace std;

int k, n;
// 1. 공식으로 풀기
// 어차피 모두 k개씩 분열하여 갯수가 맞춰지기때문에 핵이 불안정할 확률, 불안정하지 않을 확률은 중요하지않다. 
// 분열 갯수는 정해져있으므로 분열후 갯수 n = 1+(k-1)+분열횟수 밖에 올 수 없다.
// 즉 분열횟수 = (n-1)/(k-1)

int nuclear() {
	
	return (n - 1) / (k - 1) * 100;
}

//2. 완전 탐색으로 풀기
// 확률은 상관없으므로 하나 빼고 모두 불안정하고 갯수가 맞춰지면 안정해진다고 가정.
int nuclaer2(int num, int col) {
	//기저사례 : 현재 갯수가 분열이 끝난후 핵 수와 같을경우
	if (num == n) return col;

	//인자값으로 기존핵-1+분열핵수, 분열횟수+1 전달
	return nuclaer2(num - 1 + k, col+1);
}

int main() {
	cin >> k >> n;


	// 공식으로 풀기
	cout << nuclear() << endl;

	// 완전 탐색으로 풀기
	cout << nuclaer2(1, 0) * 100 << endl;;


}