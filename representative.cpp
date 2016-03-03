#include <iostream>

using namespace std;

int A[5],sum = 0,n = 5;
int bubblesort(){
	for(int i = 0; i <n-1; i++){
		for(int j = 0; j < n-1 - i; j++){
			if(A[j] > A[j+1])
				swap(A[j],A[j+1]);
		}
	}
}

int main(){
	for(int i = 0; i < n;i++){
		cin>>A[i];
		sum+=A[i];
	}
	bubblesort();
	cout << sum/5<<endl<<A[2];
}
