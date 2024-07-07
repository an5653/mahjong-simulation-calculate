#include <iostream>
using namespace std;

class Tile {
	string mark;
	int dora;
	bool needed;
public:
	Tile(){
		mark = "blank";
		dora = 0;
		needed = false;
	}
	void plusDora() {
		dora ++;
	}
	void setDora(int num) {
		dora = num;
	}
	void setMark(string mark) {
		this->mark = mark;
	}
	string showMark() {
		return mark;
	}
	int showDora() {
		return dora;
	}
	void setNeeded(bool needed) {
		this->needed = needed;
	}
};
class NumTile:Tile {
	int num;
public:
	NumTile() {
		num = 0;
	}
	NumTile(string mark,int num) {
		setMark(mark);
		this->num = num;
		if (num ==1 || num==9)
			setNeeded(true);
	}
	void setNum(int num) {
		this->num = num;
	}
	int showNum() {
		return num;
	}
	void showTileinfo() {
		cout<<num << showMark() << " 도라 : " << showDora()<<endl;
	}
};

class DirectionTile :Tile {
	string direction;
public:
	DirectionTile(string direction) {
		setMark("direction");
		setDora(0);
		setNeeded(true);
		this->direction = direction;
	}
	void setDirection(string direction) {
		this->direction = direction;
	}
	string showDirection() {
		return direction;
	}
	void showTileinfo() {
		cout << "자패 : " << direction << " 도라 : " << showDora()<<endl;
	}
};
class DragonTile :Tile {
	string dragon;
public:
	DragonTile(string dragon) {
		setMark("dragon");
		setDora(0);
		setNeeded(true);
		this->dragon = dragon;
	}
	void setDragon(string dragon) {
		this->dragon = dragon;
	}
	string showDragon() {
		return dragon;
	}
	void showTileinfo() {
		cout << "삼원패 : "<< dragon << " 도라 : " << showDora()<<endl;
	}
};

int main() {
	NumTile m9 ("man", 9);
	DragonTile wh("white");
	DirectionTile e("east");
	m9.showTileinfo();
	wh.showTileinfo();
	e.showTileinfo();
}