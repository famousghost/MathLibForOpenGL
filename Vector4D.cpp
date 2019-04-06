#include "Vector4D.h"

namespace Math
{
Vector4D::Vector4D()
{
    this->x = 0.0f;
    this->y = 0.0f;
    this->z = 0.0f;
    this->w = 0.0f;
}

Vector4D::Vector4D(float p_x, float p_y, float p_z, float p_w)
{
    this->x = p_x;
    this->y = p_y;
    this->z = p_z;
    this->w = p_w;
}

std::ostream& operator<<(std::ostream & p_out, const Vector4D& p_vec)
{
    p_out<<"("<<p_vec.x<<", "<<p_vec.y<<", "<<p_vec.z<<", "<<p_vec.w<<")"<<std::endl;
    return p_out;
}

Vector4D Vector4D::operator+(Vector4D& p_vec)
{
    Vector4D l_vec;
    l_vec.x = this->x + p_vec.x;
    l_vec.y = this->y + p_vec.y;
    l_vec.z = this->z + p_vec.z;
    l_vec.w = this->w + p_vec.w;
    return l_vec;
}

Vector4D& Vector4D::operator-=(Vector4D& p_vec)
{
    this->x -= p_vec.x;
    this->y -= p_vec.y;
    this->z -= p_vec.z;
    this->w -= p_vec.w;
    return *this;
}

Vector4D Vector4D::operator-(Vector4D& p_vec)
{
    Vector4D l_vec;
    l_vec.x = this->x - p_vec.x;
    l_vec.y = this->y - p_vec.y;
    l_vec.z = this->z - p_vec.z;
    l_vec.w = this->w - p_vec.w;
    return l_vec;
}

Vector4D& Vector4D::operator+=(Vector4D& p_vec)
{
    this->x += p_vec.x;
    this->y += p_vec.y;
    this->z += p_vec.z;
    this->w += p_vec.w;
    return *this;
}

Vector4D Vector4D::operator*(float p_scalar)
{
    Vector4D l_vec;
    l_vec.x = this->x * p_scalar;
    l_vec.y = this->y * p_scalar;
    l_vec.z = this->z * p_scalar;
    l_vec.w = this->w * p_scalar;
    return l_vec;
}

Vector4D& Vector4D::operator*=(float p_scalar)
{
    this->x *= p_scalar;
    this->y *= p_scalar;
    this->z *= p_scalar;
    this->w *= p_scalar;
    return *this;
}

Vector4D Vector4D::operator=(const Vector4D& p_vec)
{
    this->x = p_vec.x;
    this->y = p_vec.y;
    this->z = p_vec.z;
    this->w = p_vec.w;
    return *this;
}

float Vector4D::getX()
{
    return this->x;
}

float Vector4D::getY()
{
    return this->y;
}

float Vector4D::getZ()
{
    return this->z;
}

float Vector4D::getW()
{
    return this->w;
}

void Vector4D::setX(float p_x)
{
    this->x = p_x;
}

void Vector4D::setY(float p_y)
{
    this->y = p_y;
}

void Vector4D::setZ(float p_z)
{
    this->z = p_z;
}

void Vector4D::setW(float p_w)
{
    this->w = p_w;
}

float Vector4D::length()
{
    return sqrt(this->x * this->x + this->y * this->y + this->z * this->z + this->w * this->w);
}
}
