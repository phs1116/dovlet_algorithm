#include<iostream>
using namespace std;
int main(){
    float a,b;
    cin>>a;
    for(;;){
    	cin>>b;
        if(b==999.0){
            printf("End of Output\n");  
            break;
        }
        printf("%.2lf\n",b-a);
        a=b;
    }
}

