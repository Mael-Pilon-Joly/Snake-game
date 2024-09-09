#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Window/Keyboard.hpp>
#include "snake.h"

int main()
{
    Snake snake;
    snake.setLength(100);
    snake.setWidth(10);
    snake.setLocationX(400);
    snake.setLocationY(200);

    // Create the main window
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML window");

    sf::RectangleShape rectangle(sf::Vector2f(snake.getLength(), snake.getWidth()));
    rectangle.setFillColor(sf::Color{255, 0, 0});
    rectangle.setPosition(snake.getLocationX(), snake.getLocationY());

    while (window.isOpen())
    {
        // Process events
        sf::Event event;
        while (window.pollEvent(event))
        {
            // Close window: exit
            if (event.type == sf::Event::Closed)
                window.close();
        }

        sf::Vector2 rectanglePosition = rectangle.getPosition();

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
        {
            rectangle.setPosition(rectanglePosition.x - 1, rectanglePosition.y);
        }
        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
        {
            rectangle.setPosition(rectanglePosition.x + 1, rectanglePosition.y);
        } else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
        {
            rectangle.setPosition(rectanglePosition.x , rectanglePosition.y - 1);
        } else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
        {
            rectangle.setPosition(rectanglePosition.x , rectanglePosition.y + 1);
        } 
 
        // Clear screen
        window.clear();
 
        // Draw the snake
        window.draw(rectangle);
 
        // Update the window
        window.display();
    }
    return 0;
}