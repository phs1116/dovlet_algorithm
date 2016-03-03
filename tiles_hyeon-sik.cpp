#include <iostream>
#include <cmath>

using namespace std;

int width, height, tile, parts;

void tiles() {

	//��ü Ÿ���� ����
	tile = floor(width / 8) * floor(height / 8);

	//����Ÿ�� ����, width�� �������� 0�� �ƴϸ� Ÿ���� ���θ�ŭ �����ְ�, height�� �������� 0�� �ƴϸ� ���θ�ŭ ������.
	//�Ѵ� �������� 0�� �ƴϸ� 1�� �����ش�.
	parts = (width % 8 == 0 ? 0 : 1)*floor(width / 8) + (height % 8 == 0 ? 0 : 1)*floor(width / 8)
		+ (width%8 == 0||height%8 == 0 ?0:1) ;
}

int main() {
	cin >> width >> height;
	tiles();
	cout << "The number of whole tiles is " << tile << " part tiles is " << parts << endl;
}