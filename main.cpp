#include "Window.h"
#include "TextureManager.h"


#include "GameManager.h"
#include "TestState.h"
int main()
{
    GameManager game;

    TestState* state = new TestState;

    game.addState(state);

    game.run();

    if(state)
        delete state;


    return 0;
}
