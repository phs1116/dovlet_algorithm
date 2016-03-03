#include <iostream>
#include <stack>
#include <string>
using namespace std;

//str : ��θ� �����ϴ� �迭
//input : �Է°�, sortStr : ������ �Է°� 
string str[1000],input,sortStr;

//count : ������� �ε�����, n : �Է°� ���ڿ� ����:  
int count = 0, n;

//������ ���� 
stack<char> st;

//���� ��� ���� �� ���ɿ��� Ȯ�� 
bool dish(int chCur, int ipCur){
	
	//Ǫ�� 
	st.push(sortStr[chCur]);
	str[count++] = "push"; 
	
	//���� push�ؾ� �ϴ� ���� ��ġ�ϸ� ��� pop 
	while(!st.empty()&&st.top() == input[ipCur]){
		st.pop();
		ipCur+=1;
		str[count++] = "pop";
	}
	
	//��� ���ڸ� �־���, ������ ������� true 
	if(st.empty()&&chCur == n) return true;
	
	//��� ���ڸ� �־����� ������ ���� �ʾ����� false 
	else if(!st.empty()&&chCur == n) return false;
	
	//��� 
	return dish(chCur+1,ipCur);
}

//���� ������ �պ���  ���� 
void bubblesort(){
	for(int i = 0; i <n; i++){
		for(int j = 0; j < n - i; j++){
			if(sortStr[j] > sortStr[j+1])
				swap(sortStr[j],sortStr[j+1]);
		}
	}
}

int main(){
	cin >> input;
	sortStr = input;
	n = sortStr.length()-1;
	//���� 
	bubblesort();
	if(dish(0,0)){
		for(int i = 0; i<count;i++)
			cout<<str[i]<<endl;
	}
	else
		cout<<"impossible"<<endl;
	
}
