#include "Vector3D.h"

namespace Math
{
Vector3D::Vector3D()
{
    this->x = 0.0f;
    this->y = 0.0f;
    this->z = 0.0f;
}

Vector3D::Vector3D(float p_x, float p_y, float p_z)
{
    this->x = p_x;
    this->y = p_y;
    this->z = p_z;
}

std::ostream& operator<<(std::ostream & p_out, const Vector3D& p_vec)
{
    p_out<<"("<<p_vec.x<<", "<<p_vec.y<<", "<<p_vec.z<<")"<<std::endl;
    return p_out;
}

Vector3D Vector3D::operator+(Vector3D& p_vec)
{
    Vector3D l_vec;
    l_vec.x = this->x + p_vec.x;
    l_vec.y = this->y + p_vec.y;
    l_vec.z = this->z + p_vec.z;
    return l_vec;
}

Vector3D& Vector3D::operator-=(Vector3D& p_vec)
{
    this->x -= p_vec.x;
    this->y -= p_vec.y;
    this->z -= p_vec.z;
    return *this;
}

Vector3D Vector3D::operator-(Vector3D& p_vec)
{
    Vector3D l_vec;
    l_vec.x = this->x - p_vec.x;
    l_vec.y = this->y - p_vec.y;
    l_vec.z = this->z - p_vec.z;
    return l_vec;
}

Vector3D& Vector3D::operator+=(Vector3D& p_vec)
{
    this->x += p_vec.x;
    this->y += p_vec.y;
    this->z += p_vec.z;
    return *this;
}

Vector3D Vector3D::operator*(float p_scalar)
{
    Vector3D l_vec;
    l_vec.x = this->x * p_scalar;
    l_vec.y = this->y * p_scalar;
    l_vec.z = this->z * p_scalar;
    return l_vec;
}

Vector3D& Vector3D::operator*=(float p_scalar)
{
    this->x *= p_scalar;
    this->y *= p_scalar;
    this->z *= p_scalar;
    return *this;
}

Vector3D Vector3D::operator=(const Vector3D& p_vec)
{
    this->x = p_vec.x;
    this->y = p_vec.y;
    this->z = p_vec.z;
    return *this;
}

float Vector3D::getX()
{
    return this->x;
}

float Vector3D::getY()
{
    return this->y;
}

float Vector3D::getZ()
{
    return this->z;
}

void Vector3D::setX(float p_x)
{
    this->x = p_x;
}

void Vector3D::setY(float p_y)
{
    this->y = p_y;
}

void Vector3D::setZ(float p_z)
{
    this->z = p_z;
}

float Vector3D::length()
{
    return sqrt(this->x * this->x + this->y * this->y + this->z * this->z);
}
}
