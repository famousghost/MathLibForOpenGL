#include <iostream>
#include <math.h>
#pragma once
namespace Math
{
class Vector3D
{
public:
    Vector3D();
    Vector3D(float p_x, float p_y, float p_z);
    Vector3D operator+(Vector3D& p_vec);
    Vector3D& operator+=(Vector3D& p_vec);
    Vector3D operator-(Vector3D& p_vec);
    Vector3D& operator-=(Vector3D& p_vec);
    Vector3D operator*(float p_scalar);
    Vector3D& operator*=(float p_scalar);
    Vector3D operator=(const Vector3D& p_vec);
    friend std::ostream& operator<<(std::ostream & p_out, const Vector3D& p_vec);

    float length();
    void setX(float x);
    void setY(float y);
    void setZ(float z);
    float getX();
    float getY();
    float getZ();

private:
    float x;
    float y;
    float z;
};
}
