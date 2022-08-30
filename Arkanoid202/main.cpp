#include<SFML/Graphics.hpp>
#define WIDTH 520
#define HEIGHT 450

using namespace sf;

bool isCollide(Sprite s1, Sprite s2);

void main(void) {
    //windowâ ����/ ������ : 520 / 450
    RenderWindow app(VideoMode(WIDTH, HEIGHT), "BrickBreak");
    app.setFramerateLimit(60);

    Texture t1, t2, t3, t4;
    t1.loadFromFile("images/block01.png");
    t2.loadFromFile("images/background.jpg");
    t3.loadFromFile("images/ball.png");
    t4.loadFromFile("images/paddle.png");

    Sprite sBackground(t2), sBall(t3), sPaddle(t4);
    sPaddle.setPosition(300, 400);
    sBall.setPosition(300, 300);

    Sprite block[200];
    int n = 0; //������ ����

    for (int i = 1; i < 10; i++) {
        for (int j = 0; j <= 10; j++)
        {
            block[n].setTexture(t1);
            block[n].setPosition(i * 43, j * 20);
            n++;
        }

    }

    float dx = 3.0f, dy = 4.0f; //dx : x�� ���̿� �̼��� ���� 

    while (app.isOpen())
    {
        Event e;
        while (app.pollEvent(e))
        {
            if (e.type == Event::Closed)
                app.close();
        }

        //���� ������ �浹���� ��
        sBall.move(dx, 0);
        for (int i = 0; i < n; i++) {
            if (isCollide(sBall, block[i]))
            {
                //��������
                block[i].setPosition(-100, 0);
                dx = -dx;
            }
        }
        //���� ������ �浹���� ��
        for (int i = 0; i < n; i++) {
            if (isCollide(sBall, block[i]))
            {
                //��������
                block[i].setPosition(-100, 0);
                dy = -dy;
            }
        }

        Vector2f b = sBall.getPosition();
        if (b.x<0 || b.x>WIDTH)
            dx = -dx;
        if (b.y<0 || b.y>HEIGHT)
            dy = -dy;

        //paddle ������
        if (Keyboard::isKeyPressed(Keyboard::Right))
            sPaddle.move(7.0f, 0);
        if (Keyboard::isKeyPressed(Keyboard::Left))
            sPaddle.move(-7.0f, 0);
        //paddle�� ���� �浹ó��
        if (isCollide(sPaddle, sBall)) {
            dy = -dy;
        }


        sBall.move(dx, 0);
        sBall.move(0, dy);

        app.clear();
        app.draw(sBackground);
        app.draw(sBall);
        app.draw(sPaddle);

        for (int i = 0; i < n; i++)
            app.draw(block[i]);

        app.display();

    }

}

bool isCollide(Sprite s1, Sprite s2) {
    return s1.getGlobalBounds().intersects(s2.getGlobalBounds());
}