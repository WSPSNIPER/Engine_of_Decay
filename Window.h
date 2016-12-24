#ifndef _WINDOW_H_
#define _WINDOW_H_

#include <SFML/Graphics.hpp>
#include <string>

class Window
{
public:
    Window();
    Window(std::string title, int width, int height);
    virtual ~Window();

    void create(std::string title, int w, int h);

    void clear();
    void display();

    void draw(sf::Drawable& drawable);

    void handleEvents();

    bool open();

    void close();

    sf::RenderWindow& window()  { return m_window; }
private:
    sf::RenderWindow    m_window;
    sf::Vector2u        m_size;

};

#endif // _WINDOW_H_
