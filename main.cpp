#include <SFML/Graphics.hpp>

using namespace sf;


int main() {

    RenderWindow window(VideoMode(200,200),"Asteroids");
    CircleShape shape(10.f);
    shape.setFillColor(Color::Green);
    shape.setOrigin(Vector2f(5,5));
    shape.setPosition(Vector2f(100,100));
    
    while (window.isOpen()) {

        Event event;

        while (window.pollEvent(event)) {

            if (Keyboard::isKeyPressed(Keyboard::Left)) {
                shape.move(-1.f,0.f);
            }
            if (Keyboard::isKeyPressed(Keyboard::Right)) {
                shape.move(1.f,0.f);
            }
            if (Keyboard::isKeyPressed(Keyboard::Up)) {
                shape.move(0.f,-1.f);
            }
            if (Keyboard::isKeyPressed(Keyboard::Down)) {
                shape.move(0.f,1.f);
            }
            if (event.type==Event::Closed) {
                window.close();
            }
        }



        window.clear();
        window.draw(shape);
        window.display();
    }
    
    return 0;
}