#include "GameManager.h"

GameManager::GameManager():
    m_window("Lukes Game", 1000, 800)
{
}

GameManager::~GameManager()
{
    //dtor
}


void GameManager::render()
{
    for(int i = 0; i < m_stateList.size(); i++)
    {
        m_stateList.back()->render(m_window.window());
    }
}

void GameManager::update()
{
    for(int i = 0; i < m_stateList.size(); i++)
    {
        m_stateList.back()->update(m_window.window());
    }
}

void GameManager::handleEvents()
{
    for(int i = 0; i < m_stateList.size(); i++)
    {
        m_stateList.back()->handleEvents(m_window.window());
    }
}

void GameManager::run()
{
    while(m_window.open())
    {
        m_window.clear();
        render();
        m_window.display();

        update();
        handleEvents();
    }
}

void GameManager::addState(State* s)
{
    m_stateList.push_back(s);
}

void GameManager::popState()
{
    m_stateList.pop_back();
}
