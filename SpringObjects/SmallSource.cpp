#include <iostream>

class Snek {
private:
	int length;
public:
	Snek(int l) {
		length = l;
	}
};

class Game {
private:
	Snek snake;
public:
	Game(int sneklength) : snake(sneklength) {
		//snake = Snek(5);
	}
};



int main()
{
	Game game(7);
	int a;
	std::cin >> a;
}

