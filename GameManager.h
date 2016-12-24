#ifndef _GAME_MANAGER_H_
#define _GAME_MANAGER_H_

#include "State.h"
#include "Window.h"
#include <vector>

typedef std::vector<State*> tStatesList;

class GameManager
{
public:
    GameManager();
    ~GameManager();

    void render();
    void update();
    void handleEvents();

    void run();

    void addState(State* s);

    void popState();

private:
    Window m_window;

    tStatesList m_stateList;

};

#endif // _GAME_MANAGER_H_
