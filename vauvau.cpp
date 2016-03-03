#include <iostream>
using namespace std;

int a,b,c,d,p,m,g;
int dogA, dogB;
int vauvau(int time){
	bool atA = time%dogA <= a && time%dogA >0;
	bool atB = time%dogB <= c && time%dogB >0;
	if(atA&&atB)
		cout<<"both"<<endl;
	else if(atA||atB)
		cout<<"one"<<endl;
	else
		cout<<"none"<<endl;
} 

int main(){
	cin >> a>>b>>c>>d>>p>>m>>g;
	dogA = a+b;
	dogB = c+d;
	vauvau(p);
	vauvau(m);
	vauvau(g);
	
}
