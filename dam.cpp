#include <iostream>
#include <queue> 

using namespace std;

//상하좌우의 상대좌표 
int relPos[4][2] = { {-1,0},{0,-1},{1,0},{0,1} };
int sec, n, ARR[101][101];
//좌표값 구조체 
typedef struct {
	int x;
	int y;
}Point;
queue<Point> curq;

int dam(int count) {

	//기저사례 1 : 큐가 다 비어있거나 
	if (curq.empty()) return 0;
	
	
	//기저사례 2 : 시간이 다 지나면 리턴 
	if (count == sec) return curq.size();

	//임시 큐 생성 
	queue<Point> nextq;
	
	//큐가 빌때까지 반복 
	while (!curq.empty()) {
		Point p = curq.front();
		curq.pop();

		for (int i = 0; i<4; i++) {
			//상대좌표 
			int ny = p.y + relPos[i][0];
			int nx = p.x + relPos[i][1];
			
			//상하좌우의 위치에있는 값이 맵에 포함되고 0이면 실행 
			if (ARR[ny-1][nx-1] == 0 && nx>0&&nx<=n&&ny>0&&ny<=n) {
				//1로 변환후 다음 큐에 저장. 
				ARR[ny-1][nx-1] = 1;
				Point p = { nx,ny };
				nextq.push(p);
			}
		}
	}
	
	//다음에 실행할 큐에 임시큐의 값들을 저장 
	curq = nextq;

	//카운트를 1 증가시키고 재 실행 
	return dam(count + 1);
}

int main() {
	cin >> n;


	//지도 초기화 
	for (int i = 0; i < n; i++) 
		for (int j = 0; j < n; j++) 
			cin >> ARR[i][j];

	//호수 정보  초기화 
	Point lake;
	cin >> lake.x >> lake.y;
	cin >> sec;
	ARR[lake.y - 1][lake.x - 1] = 1;
	curq.push(lake);
	
	int ret = dam(0);
	printf(ret == 0 ? "OH, MY GOD" : "%d", ret);

}
