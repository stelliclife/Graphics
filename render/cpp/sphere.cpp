#include <iostream>
#include "include/vec3d.h"
#include "include/util.h"
#include "include/ray.h"
#include "vec3d.cpp"
#include "util.cpp"
#include "ray.cpp"

Sphere::Sphere(Vec3d& input_center, int input_radius)
  : radius(input_radius)
{
  center = input_center;
}

Sphere::Sphere(Sphere& copy)
{
  radius = copy.get_radius();
  center = copy.get_center();
}

Vec3d const Sphere::get_center() const
{
  return center;
}

int const Sphere::get_radius() const
{
  return radius;
}

void Sphere::set_center(Vec3d& input_center)
{
  center = input_center;
}

void Sphere::set_radius(int input_radius)
{
  radius = input_radius;
}

double Sphere::hit(Ray& ray)
{
  double x0, double x1;
  Vec3d ray_direction = ray.get_direction();
  Vec3d ray_origin = ray.get_origin();
  
  double t = -1;
  Vec3d oc = center - ray_origin;
  double l = oc.Size();
  double d= ray_direction.Size();
  double s = center.Size();
  double a = pow(d, 2);
  double b = 2 * center.DotProduct(ray_direction);
  double c = pow(s, 2);
  int number_of_roots = SolveQuadratic(a, b, c, x0, x1);

  if(number_of_roots == 0)
    return t;
  if(x0 > 0 && x1 > 0)
  {
    if(x0 < x1)
      t = x0;
    else
      t = x1;
  }
  else if(x0 < 0 && x1 > 0)
    t = x1;
  else if(x0 > 0 && x1 < 0)
    t = x0;
  return t;
}

Sphere::~Sphere()
{
} 