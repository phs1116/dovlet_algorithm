#include <iostream>
#include <cmath>

using namespace std;

int width, height, tile, parts;

void tiles() {

	//전체 타일의 갯수
	tile = floor(width / 8) * floor(height / 8);

	//조각타일 갯수, width의 나머지가 0이 아니면 타일의 세로만큼 더해주고, height의 나머지가 0이 아니면 가로만큼 더해줌.
	//둘다 나머지가 0이 아니면 1을 더해준다.
	parts = (width % 8 == 0 ? 0 : 1)*floor(width / 8) + (height % 8 == 0 ? 0 : 1)*floor(width / 8)
		+ (width%8 == 0||height%8 == 0 ?0:1) ;
}

int main() {
	cin >> width >> height;
	tiles();
	cout << "The number of whole tiles is " << tile << " part tiles is " << parts << endl;
}