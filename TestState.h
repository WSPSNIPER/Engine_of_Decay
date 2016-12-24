#ifndef _TESTSTATE_H_
#define _TESTSTATE_H_

#include <State.h>
#include "TextureManager.h"

class TestState : public State
{
    public:
        TestState();
        virtual ~TestState();

        virtual void render(sf::RenderWindow& window);
        virtual void update(sf::RenderWindow& window);
        virtual void handleEvents(sf::RenderWindow& window);

    private:
        sf::Sprite m_sprite;
};

#endif // _TESTSTATE_H_
