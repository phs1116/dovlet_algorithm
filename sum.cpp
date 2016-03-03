#include <iostream>
using namespace std;
int main() {
	int a[7], sum = 0;
	for (int i = 0; i<7; i++) {
		cin >> a[i];
		sum += a[i];
	}
	cout << sum;
}
