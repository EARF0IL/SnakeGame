#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <GameObjects/test.h>

int main(){
    //Test GameObjects library
    GameObjects::hello_function();

    // Create the main window
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML window");
    sf::RectangleShape rect;
    rect.setSize(sf::Vector2f(100, 100));
    rect.setPosition(window.getSize().x / 2 - rect.getSize().x / 2, window.getSize().y / 2 - rect.getSize().y / 2);

    // Start the game loop
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

        // Clear screen
        window.clear();

        window.draw(rect);

        // Update the window
        window.display();
    }

    return EXIT_SUCCESS;
}