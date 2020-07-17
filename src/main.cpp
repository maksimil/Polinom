#include <SFML/Graphics.hpp>

#define WINWIDTH  500
#define WINHEIGHT 500

int main(int argc, char const *argv[])
{
    sf::RenderWindow window(sf::VideoMode(WINWIDTH, WINHEIGHT), "Window");

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
