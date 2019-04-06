#include <iostream>
#include "Math.h"

using namespace std;
using namespace Math;

int main()
{
    Vector4D a(1, 2, 3, 4);
    Vector4D b(2, 1, 0, -1);
    Vector3D c(1, 2, 3);
    Vector3D d(2, 1, 7);



    std::cout<<crossProduct(c, d)<<std::endl;
    std::cout<<normalize(c)<<std::endl;
    std::cout<<c.length()<<std::endl;
    std::cout<<dotProduct(c, d)<<std::endl;
    return 0;
}
