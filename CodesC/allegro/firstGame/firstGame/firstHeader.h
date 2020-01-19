enum IDS{ PLAYER, BULLET, ENEMY};
enum KEY{ UP, DOWN, LEFT, RIGHT, SPACE};

struct SpaceShip
{
	int ID;
	int x;
	int y;
	int lives;
	int speed;
	int boundx;
	int boundy;
	int score;
};

struct Bullet
{
	int x;
	int y;
	bool live;
	int speed;
	int ID;
};

struct Comet
{
	int ID;
	int x;
	int y;
	int speed;
	bool live;
	int boundx;
	int boundy;
};