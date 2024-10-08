#include "../include/Animation.hpp"

Animation::Animation()
{

}

Animation::Animation(std::string name, const sf::Texture& t)
{
  Animation(name, t, 1, 0);
}

Animation::Animation(std::string name, const sf::Texture& t, size_t frameCount, size_t speed)
  : m_name       (name),
    m_sprite     (t),
    m_frameCount (frameCount),
    m_speed      (speed)
{
  m_size = Vec2((float)t.getSize().x, (float)t.getSize().y);
  m_sprite.setOrigin(m_size.x/2.0f, m_size.y/2.0f);
  m_sprite.setTextureRect(sf::IntRect(std::floor(m_currentFrame)*m_size.x, 0, m_size.x, m_size.y));
}

void Animation::update()
{

}

bool Animation::hasEnded() const
{

}

const std::string& Animation::getName() const
{

}

const Vec2& Animation::getSize() const
{

}

sf::Sprite& Animation::getSprite() const
{

}