#include <iostream>

using namespace std;

int A, B, C, D;

void koi_watch() {
	C += D;
	B += C / 60;
	A += B / 60;
	C = C % 60;
	B = B % 60;
	A = A % 24;
}

int main() {
	cin >> A >> B >> C >> D;
	koi_watch();
	cout << A << " " << B << " " << C << endl;
}