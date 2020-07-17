#include <SFML/Graphics.hpp>

int main(int argc, char const *argv[])
{
    sf::RenderWindow window(sf::VideoMode(500, 500), "Window");

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type = sf::Event::Closed)
                window.close();
        }

        window.clear();
        // draw shizz
        window.close();
    }
    return 0;
}
