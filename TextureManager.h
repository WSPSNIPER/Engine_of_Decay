#ifndef TEXTUREMANAGER_H
#define TEXTUREMANAGER_H

#include <SFML/Graphics.hpp>
#include <string>
#include <map>

typedef std::map<std::string, sf::Texture>              tTextureList;
typedef std::map<std::string, sf::Texture>::iterator    tTextureIterator;

sf::Texture& getTexture(std::string name);

class TextureManager
{
private:
    TextureManager();
    static TextureManager* m_instance;

public:
    ~TextureManager();
    static TextureManager* get();

    sf::Texture& texture(std::string file);

private:
    sf::Texture&        m_addTexture(std::string file);

    tTextureList        m_textureList;
    tTextureIterator    m_iterator;
};



#endif // TEXTUREMANAGER_H
