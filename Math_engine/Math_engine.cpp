#include <iostream>
#include "Math.h"


int main()
{
    std::cout <<Math::From_radians_to_degrees(Math::Angle(Vector3(0,1,0),Vector3(1,0,0)));
}