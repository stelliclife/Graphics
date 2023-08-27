#include <iostream>
#include "include/ray.h"
#include "include/vec3d.h"
#include "vec3d.cpp"

Ray::Ray(Vec3d& input_origin, Vec3d& input_direction)
{
  origin = input_origin;
  direction = input_direction;
}

Vec3d const Ray::get_origin() const
{
  return origin;
}

Vec3d const Ray::get_direction() const
{
  return direction;
}

void Ray::set_origin(Vec3d& input_origin)
{
  origin = input_origin;
}

void Ray::set_direction(Vec3d& input_direction)
{
  direction = input_direction;
}

Vec3d Ray::get_position_at(double t)
{
  return origin + (direction*t);
}


Ray::~Ray()
{ 
}