#ifndef _STATE_H_
#define _STATE_H_

#include <SFML/Graphics.hpp>
#include <string>

class State
{
public:
    State(){}
    virtual ~State() {}

    virtual void render(sf::RenderWindow& window) = 0;
    virtual void update(sf::RenderWindow& window) = 0;
    virtual void handleEvents(sf::RenderWindow& window) = 0;

    void setName(std::string name) { m_name = name; }

    std::string name()  { return m_name; }

protected:
    std::string m_name;

};
#endif // _STATE_H_
