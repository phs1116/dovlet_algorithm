#include <iostream>
#define abs(x) x<0?x*-1:x
using namespace std;

int main() {
	int x1, y1, p1, q1;
	int x2, y2, p2, q2;
	cin >> x1 >> y1 >> p1 >> q1 >> x2 >> y2 >> p2 >> q2;
	printf(((p2 < x1 || q2 < y1) || (p1 < x2 || q1 < y2)) ? "none" :
		((p2 <= x1 || q2 <= y1) || (p1 <= x2 || q1 <= y2) ? ((x1 == p2&&q1 == y2) || (x1 == p2&&y1 == q2) || (p1 == x2&&y1 == q2) || (p1 == x2&&q1 == y2) ? "point" : "line") : "rectangle"));
}
