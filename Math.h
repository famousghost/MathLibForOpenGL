#include <iostream>
#include "Vector3D.h"
#include "Vector4D.h"
#pragma once

namespace Math
{
float dotProduct(Vector3D& p_vec1, Vector3D& p_vec2)
{
    return (p_vec1.getX() * p_vec2.getX()) +
           (p_vec1.getY() * p_vec2.getY()) +
           (p_vec1.getZ() * p_vec2.getZ());
}
float dotProduct(Vector4D& p_vec1, Vector4D& p_vec2)
{
    return (p_vec1.getX() * p_vec2.getX()) +
           (p_vec1.getY() * p_vec2.getY()) +
           (p_vec1.getZ() * p_vec2.getZ()) +
           (p_vec1.getW() * p_vec2.getW());
}

Vector3D crossProduct(Vector3D& p_vec1, Vector3D& p_vec2)
{
    float x = p_vec1.getY() * p_vec2.getZ() - p_vec1.getZ() * p_vec2.getY();
    float y = p_vec1.getX() * p_vec2.getZ() - p_vec1.getZ() * p_vec2.getX();
    float z = p_vec1.getX() * p_vec2.getY() - p_vec1.getY() * p_vec2.getX();

    return Vector3D(x, -y, z);
}
}
