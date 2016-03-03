#include <iostream>
#include <queue> 

using namespace std;

//상하좌우의 상대좌표 
int relPos[4][2] = { { -1,0 },{ 0,-1 },{ 1,0 },{ 0,1 } };
int sec, n, ARR[101][101];
//좌표값 구조체 
typedef struct {
	int x;
	int y;
}Point;

queue<Point> curq;

//재귀를 사용하지 않는 DFS. dam과 달리 다음큐 전달을 위한 임시큐가 필요가 없다. 
int dam2() {
	int count = 0;
	while (1) {
		//기저사례 1 : 큐가 다 비어있거나 
		if (curq.empty()) return 0;
		//기저사례 2 : 시간이 다 지나면 리턴 
		if (sec == count) return curq.size();
		//현재 큐에 들어있는 값들이 빌때까지 반복 
		int curSize = curq.size();
			while(curSize--){
			Point p = curq.front();
			curq.pop();
			for (int i = 0; i < 4; i++) {
				//상대좌표 
				int ny = p.y + relPos[i][0];
				int nx = p.x + relPos[i][1];
				//상하좌우의 위치에있는 값이 맵에 포함되고 0이면 실행 
				if ((ARR[ny - 1][nx - 1] == 0)&& nx>0 && nx <= n&&ny>0 && ny <= n) {
					//1로 변환후 다음 큐에 저장. 
					ARR[ny - 1][nx - 1] = 1;
					Point p1 = { nx,ny };
					//큐에 삽입
					curq.push(p1);
				}

			}
			}
		//카운트를 1 증가시키고 다음 자식들 실행
		count++;
	}
}

int main() {
	cin >> n;


	//지도 초기화 
	for (int y = 0; y < n; y++)
		for (int x = 0; x < n; x++)
			cin >> ARR[y][x];

	//호수 정보  초기화 
	Point lake;
	cin >> lake.x >> lake.y;
	cin >> sec;
	ARR[lake.y - 1][lake.x - 1] = 1;
	curq.push(lake);

	int ret = dam2();
	printf(ret == 0 ? "OH, MY GOD\n" : "%d\n", ret);

}
