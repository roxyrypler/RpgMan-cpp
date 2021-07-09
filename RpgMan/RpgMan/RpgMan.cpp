
#include <iostream>

#include<SFML/Graphics.hpp>
#include<SFML/System.hpp>
#include<SFML/Window.hpp>
#include<SFML/Audio.hpp>
#include<SFML/Network.hpp>


int main()
{
    // create the window
    sf::RenderWindow window(sf::VideoMode(800, 600), "Rpg Man");

    sf::Texture texture;
    if (!texture.loadFromFile("assets/conceptartBG.png"))
    {
        std::cout << "Could not Load Image";
        return 0;
    }

    sf::Sprite bg;
    bg.setTexture(texture);
    bg.setPosition(sf::Vector2f(100, 100));
    bg.scale(sf::Vector2f(0.5, 0.5));

    // run the program as long as the window is open
    while (window.isOpen())
    {
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;
        while (window.pollEvent(event))
        {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // clear the window with black color
        window.clear(sf::Color::Black);

        // draw everything here...
        // window.draw(...);

        window.draw(bg);

        // end the current frame
        window.display();
    }

    return 0;
}


