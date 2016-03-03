#include <iostream>
#include <stack>
#include <string>
using namespace std;

//str : 경로를 저장하는 배열
//input : 입력값, sortStr : 정렬한 입력값 
string str[1000],input,sortStr;

//count : 경로저장 인덱스값, n : 입력값 문자열 길이:  
int count = 0, n;

//저장할 스택 
stack<char> st;

//스택 경로 저장 및 가능여부 확인 
bool dish(int chCur, int ipCur){
	
	//푸시 
	st.push(sortStr[chCur]);
	str[count++] = "push"; 
	
	//값이 push해야 하는 값과 일치하면 계속 pop 
	while(!st.empty()&&st.top() == input[ipCur]){
		st.pop();
		ipCur+=1;
		str[count++] = "pop";
	}
	
	//모든 문자를 넣었고, 스택이 비었으면 true 
	if(st.empty()&&chCur == n) return true;
	
	//모든 문자를 넣었으나 스택이 비지 않았으면 false 
	else if(!st.empty()&&chCur == n) return false;
	
	//재귀 
	return dish(chCur+1,ipCur);
}

//문자 사전순 앞부터  정렬 
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
	//정렬 
	bubblesort();
	if(dish(0,0)){
		for(int i = 0; i<count;i++)
			cout<<str[i]<<endl;
	}
	else
		cout<<"impossible"<<endl;
	
}
