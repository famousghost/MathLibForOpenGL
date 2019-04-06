#include <iostream>
#include <math.h>
#pragma once

namespace Math
{
class Vector4D
{
public:
    Vector4D();
    Vector4D(float p_x, float p_y, float p_z, float p_w);
    Vector4D operator+(Vector4D& p_vec);
    Vector4D& operator+=(Vector4D& p_vec);
    Vector4D operator-(Vector4D& p_vec);
    Vector4D& operator-=(Vector4D& p_vec);
    Vector4D operator*(float p_scalar);
    Vector4D& operator*=(float p_scalar);
    Vector4D operator=(const Vector4D& p_vec);
    friend std::ostream& operator<<(std::ostream & p_out, const Vector4D& p_vec);

    float length();
    void setX(float x);
    void setY(float y);
    void setZ(float z);
    void setW(float w);
    float getX();
    float getY();
    float getZ();
    float getW();

private:
    float x;
    float y;
    float z;
    float w;
};
}
