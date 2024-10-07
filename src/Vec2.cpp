#include<iostream>
#include "../include/Vec2.hpp"

Vec2::Vec2(){}   

Vec2::Vec2(float xin, float yin)
    :x(xin),y(yin)
{}

bool Vec2::operator == (const Vec2& rhs) const
{
    return (x == rhs.x) && (y == rhs.y);
}

bool Vec2::operator != (const Vec2& rhs) const
{
    return (x != rhs.x) || (y != rhs.y);
}

Vec2 Vec2::operator + (const Vec2& rhs) const
{
    return Vec2{x+rhs.x, y+rhs.y};
}

Vec2 Vec2::operator - (const Vec2& rhs) const
{
    return Vec2(x-rhs.x, x-rhs.y);
}

void Vec2::operator +=(const Vec2& rhs)
{
    x += rhs.x;
    y += rhs.y;
}
 




