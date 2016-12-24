#include "Window.h"

Window::Window()
{
}

Window::Window(std::string title, int width, int height) :
    m_size(width, height)
{
    create(title, width, height);
}
Window::~Window()
{
    //dtor
}

void Window::create(std::string title, int width, int height)
{
    m_size.x = width;
    m_size.y = height;

    m_window.create(sf::VideoMode(width, height), title);
}

void Window::clear()
{
    m_window.clear(sf::Color::Black);
}

void Window::display()
{
    m_window.display();
}

void Window::handleEvents()
{
    sf::Event event;
    while(m_window.pollEvent(event))
    {
        if(event.type == sf::Event::Closed)
        {
            close();
        }
    }
}

void Window::draw(sf::Drawable& drawable)
{
    m_window.draw(drawable);
}

void Window::close()
{
    m_window.close();
}

bool Window::open()
{
    return (m_window.isOpen());
}
