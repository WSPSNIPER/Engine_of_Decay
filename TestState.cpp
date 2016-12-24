#include "TestState.h"

TestState::TestState()
{
    this->setName("TestState");
    m_sprite.setTexture(getTexture("test.png"));
}

TestState::~TestState()
{
    //dtor
}

void TestState::render(sf::RenderWindow& window)
{
    window.draw(m_sprite);
}

void TestState::update(sf::RenderWindow& window)
{

}

void TestState::handleEvents(sf::RenderWindow& window)
{
    sf::Event event;

    while(window.pollEvent(event))
    {
        if(event.type == sf::Event::Closed)
        {
            window.close();
        }
    }
}
