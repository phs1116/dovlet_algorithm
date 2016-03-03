#include <iostream>
#include <cmath>

using namespace std;


int input;
//1. 수학으로 풀기
//층의 맨 앞이 2의 곱씩 증가한다. 따라서 층 맨앞의 값은 2^(n-1)
//즉 구하고자 가는 값의 log2 + 1을 구하면 답을 얻을수있다.
int flr(int num){
	int ret = log2(num)+1;
	return ret;
}
//2.완전탐색으로 구하기
//각 값의 자식노드는 2 * 현재값, 2*현재값+1이다.
int flr2(int num,int floor) {
	//기저사례 : 일치하는 값을 찾았을때 층 반환
	if (num == input) return floor;

	//기저사례2 : 값이 구하고자 하는 값보다 클때 0 반환
	if (num > input) return 0;

	return flr2(2*num, floor + 1) + flr2(2*num + 1, floor+ 1);
}



int main() {
	cin >> input;
	
	// 1. 수학으로 풀 때
	cout << flr(input) << endl;

	// 2. 완전탐색으로 풀 때
	cout << flr2(1, 1) << endl;
}