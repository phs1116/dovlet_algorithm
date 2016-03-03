#include <iostream>
#include <cmath>
using namespace std;

//약수의 갯수가 홀수인 경우는 2^2,3^2와 같은 제곱수이다.
int A, B;
int even() {

	//A미만의 정수를 빼고, 중복 제거된 A미만의 제곱근을 더해준다.
	return B - (int)sqrt(double(B)) - (A-1) + (int)sqrt(double(A-1));
}

int main() {
	cin >> A >> B;

	cout << even() << endl;
}