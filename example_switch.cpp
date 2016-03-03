#include <iostream>

using namespace std;

int main(){
	int y,m;
	cin>>y>>m;
	switch(m){
		case 4:
		case 6:
		case 9:
		case 11:
			cout << 30 << endl;
			break;
		case 2:
			if(y%4 == 0)
				cout << 29 << endl;
			else 
				cout << 28<< endl;
			break;
		default :
			cout << 31<< endl;
			break;
	}
	
}
