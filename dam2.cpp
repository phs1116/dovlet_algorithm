#include <iostream>
#include <queue> 

using namespace std;

//�����¿��� �����ǥ 
int relPos[4][2] = { { -1,0 },{ 0,-1 },{ 1,0 },{ 0,1 } };
int sec, n, ARR[101][101];
//��ǥ�� ����ü 
typedef struct {
	int x;
	int y;
}Point;

queue<Point> curq;

//��͸� ������� �ʴ� DFS. dam�� �޸� ����ť ������ ���� �ӽ�ť�� �ʿ䰡 ����. 
int dam2() {
	int count = 0;
	while (1) {
		//������� 1 : ť�� �� ����ְų� 
		if (curq.empty()) return 0;
		//������� 2 : �ð��� �� ������ ���� 
		if (sec == count) return curq.size();
		//���� ť�� ����ִ� ������ �������� �ݺ� 
		int curSize = curq.size();
			while(curSize--){
			Point p = curq.front();
			curq.pop();
			for (int i = 0; i < 4; i++) {
				//�����ǥ 
				int ny = p.y + relPos[i][0];
				int nx = p.x + relPos[i][1];
				//�����¿��� ��ġ���ִ� ���� �ʿ� ���Եǰ� 0�̸� ���� 
				if ((ARR[ny - 1][nx - 1] == 0)&& nx>0 && nx <= n&&ny>0 && ny <= n) {
					//1�� ��ȯ�� ���� ť�� ����. 
					ARR[ny - 1][nx - 1] = 1;
					Point p1 = { nx,ny };
					//ť�� ����
					curq.push(p1);
				}

			}
			}
		//ī��Ʈ�� 1 ������Ű�� ���� �ڽĵ� ����
		count++;
	}
}

int main() {
	cin >> n;


	//���� �ʱ�ȭ 
	for (int y = 0; y < n; y++)
		for (int x = 0; x < n; x++)
			cin >> ARR[y][x];

	//ȣ�� ����  �ʱ�ȭ 
	Point lake;
	cin >> lake.x >> lake.y;
	cin >> sec;
	ARR[lake.y - 1][lake.x - 1] = 1;
	curq.push(lake);

	int ret = dam2();
	printf(ret == 0 ? "OH, MY GOD\n" : "%d\n", ret);

}
