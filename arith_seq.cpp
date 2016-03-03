#include<iostream>
#include <cmath>
using namespace std;
int main(){
   double a,d,an,i=1;
   cin >> a >> d >> an;
   while(abs(a)<= abs(an)){
   		a=a+d;
   		i++;
   		if(a==an){
   			cout<<i;
   			return 0;
		}
   }
    cout<<'X';
}
