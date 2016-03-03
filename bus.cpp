#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int dir, a, b;
	while(scanf("%d %d %d",&dir,&a,&b) != -1){
		if(dir == 1)
			printf(a == b ? "-1\n":"%.2f\n",(a*b)/(abs((float)a - b))) ;
		else
			printf("%.2f\n",(a*b)/((float)a + b));
	}
}
