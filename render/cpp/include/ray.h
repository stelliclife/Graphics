#ifndef _RAY_H_
#define _RAY_H_

#include "include/vec3d.h"
#include "vec3d.cpp"

class Ray{
private:
  Vec3d origin;
  Vec3d direction;

public:
  Ray(Vec3d& input_origin, Vec3d& input_direction);
  Vec3d const get_origin() const;
  Vec3d const get_direction() const;
  void set_origin(Vec3d& input_origin);
  void set_direction(Vec3d& input_direction);
  Vec3d get_position_at(double t);
  ~Ray();
};

#endif