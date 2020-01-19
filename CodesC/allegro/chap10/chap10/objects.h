//Object IDS
enum IDS{PLAYER, BULLET, ENEMY};

//Our Player
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

	int maxFrame;
	int curFrame;
	int frameCount;
	int frameDelay;
	int frameWidth;
	int frameHeight;
	int animationColoums;
	int animationDirection;

	int animationRow;

	ALLEGRO_BITMAP *image;
};

struct Bullet
{
	int ID;
	int x;
	int y;
	bool live;
	int speed;
};

struct Comet
{
	int ID;
	int x;
	int y;
	bool live;
	int speed;
	int boundx;
	int boundy;

	int maxFrame;
	int curFrame;
	int frameCount;
	int frameDelay;
	int frameWidht;
	int frameHeight;
	int animationColoums;
	int animationDirection;

	ALLEGRO_BITMAP *image;
};

struct explotion{
	int x;
	int y;
	int live;

	int maxFrame;
	int curFrame;
	int frameCount;
	int frameDelay;
	int frameWidth;
	int frameHeight;
	int animationColoums;
	int animationDirection;

	ALLEGRO_BITMAP *image;
};