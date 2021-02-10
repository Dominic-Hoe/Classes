#include<iostream>

#define LOG(x) std::cout << x << std::endl

class Player {
public:
	int x = 0;
	int y = 0;
	int speed = 5;

	void Move(int xa, int ya) {
		x += xa * speed;
		y += ya * speed;
	}
};

int main() {
	Player player;
	player.Move(5, 5);
	LOG(player.x);
	LOG(player.y);

	std::cin.get();
}