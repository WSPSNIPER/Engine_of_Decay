#include "Window.h"
#include "TextureManager.h"
int main()
{

    Window win("Lukes Shit", 800, 600);
    sf::Sprite image;
    image.setTexture(getTexture("test.png"));

    while(win.open())
    {
        win.clear();

        win.draw(image);
        // draw
        win.display();

        win.handleEvents();
    }
    return 0;
}
