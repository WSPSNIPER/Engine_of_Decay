#include "TextureManager.h"

sf::Texture& getTexture(std::string name)
{
    return (TextureManager::get()->texture(name));
}

TextureManager::TextureManager()
{
}

TextureManager::~TextureManager()
{
    if(m_instance)
        delete m_instance;
}

TextureManager* TextureManager::m_instance = NULL;
TextureManager* TextureManager::get()
{
    if(!m_instance)
    {
        m_instance = new TextureManager;
    }
    return m_instance;
}


sf::Texture& TextureManager::texture(std::string name)
{
    m_iterator = m_textureList.find(name);
    if(m_iterator == m_textureList.end())
    {
        return m_addTexture(name);
    }

    return m_iterator->second;
}

sf::Texture& TextureManager::m_addTexture(std::string name)
{
    sf::Texture temp;
    temp.loadFromFile(name);
    m_textureList.insert(std::pair<std::string, sf::Texture>(name, temp));
    m_iterator = m_textureList.find(name);

    return m_iterator->second;
}
