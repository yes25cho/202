#include <SFML/Graphics.hpp>
#define WIDTH 520
#define HEIGHT 450

using namespace sf;

bool isCollide(Sprite s1, Sprite s2);

int main(void) {
	//윈도창 열기

	RenderWindow app(VideoMode(WIDTH, HEIGHT), "BrickBreak");
	app.setFramerateLimit(60);
	
	Texture t1, t2, t3, t4;
	t1.loadFromFile("images/brock01.png");
	t2.loadFromFile("images/background.jpg");
	t3.loadFromFile("images/ball.png");
	t4.loadFromFile("images/paddle.png");

	Sprite sBackgroud(t2), sBall(t3), sPaddle(t4);
	sPaddle.setPosition(300, 400);
	sBall.setPosition(300, 400);

	Sprite block[200];
	int n = 0;
	for (int i = 1; i < 10; i++) {
		for (int j = 1; j <= 10; j++) {
			block[n].setTexture(t1);
			block[n].setPosition(i * 43, j * 20);
			n++;
		}
	}

	float dx = 3.0f, dy=4.0;

	while (app.isOpen()) {
		Event e;
		while (app.pollEvent(e)) {
			if (e.type == Event::Closed)
				app.close();
		}
		
		Vector2f b = sBall.getPosition();
		if (b.x < 0 || b.x > WIDTH) {
			dx = -dx;
		}

		sBall.move(dx, 0);
		if (b.x < 0 || b.x > HEIGHT) {
			dy = -dy;
		}
		//paddle움직임
		if (Keyboard::isKeyPressed(Keyboard::Right))
			sPaddle.move(7.0f, 0);
		if (Keyboard::isKeyPressed(Keyboard::Left))
			sPaddle.move(0, 7.0f);
		//paddle과 공의 충돌 처리
		if (isCollide(sPaddle, sBall)) {
			dy = -dy;
		}

		sBall.move(0, dy);
		sBall.move(dx, 0);
		for (int i = 0; i < n; i++) {
			if (isCollide(sBall, block[i])) {
				block[i].setPosition(-100, 0);
				dx = -dx;
			}
		}
		sBall.move(0, dy);
		for (int i = 0; i < n; i++) {
			if (isCollide(sBall, block[i])) {
				block[i].setPosition(-100, 0);
				dy = -dy;
			}
		}

		app.close();
		app.draw(sBackgroud);
		app.draw(sBall);
		app.draw(sPaddle);
		for (int i = 0; i < n; i++) {
			app.draw(block[i]);
		}
		app.display();
	}
}

bool isCollide(Sprite s1, Sprite s2) {
	return 
}