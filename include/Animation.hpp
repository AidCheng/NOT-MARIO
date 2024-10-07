#pragma once
#include "Vec2.hpp"

#include <vector>
#include <SFML/Graphics.hpp>

class Animation
{
    sf::Sprite  m_sprite;
    size_t      m_frameCount = 1;
    size_t      m_currentFrame = 0;
    size_t      m_speed = 0; // speed to play the animation
    Vec2        m_size = {1, 1}; // size of the animation frame
    std::string m_name = "none";
public:

    Animation();
    Animation(std::string name, const sf::Texture& t);
    Animation(std::string name, const sf::Texture& t, size_t frameCount, size_t speed);

    void update();
    bool hasEnded() const;
    const std::string& getName() const; 
    const Vec2& getSize() const;
    sf::Sprite& getSprite() const;
};
