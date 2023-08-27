#ifndef _SPHERE_H_
#define _SPHERE_H_

#include "include/vec3d.h"
#include "include/ray.h"
#include "vec3d.cpp"
#include "ray.cpp"

class Sphere{
private:
  Vec3d center;
  int radius;

public:
  Sphere(Vec3d& input_center, int input_radius);
  Sphere(Sphere& copy);
  Vec3d const get_center() const;
  int const get_radius() const; 
  void set_center(Vec3d& input_center);
  void set_radius(int input_radius);
  double hit(Ray& ray);
  ~Sphere();
};

#endif