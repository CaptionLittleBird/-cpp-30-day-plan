#include <SFML/Graphics.hpp>
#include <iostream>

int main() {
    // Create a window
    sf::RenderWindow window(sf::VideoMode(800, 600), "Day01 - Hello SFML");
    window.setFramerateLimit(60);

    // Simple text using SFML (requires a font file in assets if you want text)
    sf::CircleShape shape(50.f);
    shape.setFillColor(sf::Color::Green);
    shape.setPosition(375.f, 275.f);

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape)
                window.close();
        }

        // Simple movement example
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) shape.move(-200.f * 0.016f, 0.f);
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) shape.move(200.f * 0.016f, 0.f);
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) shape.move(0.f, -200.f * 0.016f);
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) shape.move(0.f, 200.f * 0.016f);

        window.clear(sf::Color::Black);
        window.draw(shape);
        window.display();
    }

    std::cout << "Exited cleanly\n";
    return 0;
}