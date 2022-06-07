#include <SFML/Graphics.hpp>

using namespace sf;

void main(void) {
	//윈도창 열기
	RenderWindow app(VideoMode(520, 450), "BrickBreak");
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
		for (int j = 1; j < 10; j++) {
			block[n].setTexture(t1);
			block[n].setPosition(i * 43, j * 20);
			n++;
		}
	}

	while (app.isOpen()) {
		Event e;
		while (app.pollEvent(e)) {
			if (e.type == Event::Closed)
				app.close();
		}
		app.close();
		app.draw(sBackgroud);
		app.draw(sBall);

	}
}
