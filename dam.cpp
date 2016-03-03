#include <iostream>
#include <queue> 

using namespace std;

//�����¿��� �����ǥ 
int relPos[4][2] = { {-1,0},{0,-1},{1,0},{0,1} };
int sec, n, ARR[101][101];
//��ǥ�� ����ü 
typedef struct {
	int x;
	int y;
}Point;
queue<Point> curq;

int dam(int count) {

	//������� 1 : ť�� �� ����ְų� 
	if (curq.empty()) return 0;
	
	
	//������� 2 : �ð��� �� ������ ���� 
	if (count == sec) return curq.size();

	//�ӽ� ť ���� 
	queue<Point> nextq;
	
	//ť�� �������� �ݺ� 
	while (!curq.empty()) {
		Point p = curq.front();
		curq.pop();

		for (int i = 0; i<4; i++) {
			//�����ǥ 
			int ny = p.y + relPos[i][0];
			int nx = p.x + relPos[i][1];
			
			//�����¿��� ��ġ���ִ� ���� �ʿ� ���Եǰ� 0�̸� ���� 
			if (ARR[ny-1][nx-1] == 0 && nx>0&&nx<=n&&ny>0&&ny<=n) {
				//1�� ��ȯ�� ���� ť�� ����. 
				ARR[ny-1][nx-1] = 1;
				Point p = { nx,ny };
				nextq.push(p);
			}
		}
	}
	
	//������ ������ ť�� �ӽ�ť�� ������ ���� 
	curq = nextq;

	//ī��Ʈ�� 1 ������Ű�� �� ���� 
	return dam(count + 1);
}

int main() {
	cin >> n;


	//���� �ʱ�ȭ 
	for (int i = 0; i < n; i++) 
		for (int j = 0; j < n; j++) 
			cin >> ARR[i][j];

	//ȣ�� ����  �ʱ�ȭ 
	Point lake;
	cin >> lake.x >> lake.y;
	cin >> sec;
	ARR[lake.y - 1][lake.x - 1] = 1;
	curq.push(lake);
	
	int ret = dam(0);
	printf(ret == 0 ? "OH, MY GOD" : "%d", ret);

}
