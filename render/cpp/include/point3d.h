#ifndef _POINT3D_H_
#define _POINT3D_H_

#include "include/vec3d.h"
#include "vec3d.cpp"

class Point3d
{
private:
  double x;
  double y;
  double z;

public:
  Point3d();
  Point3d(double input_x, double input_y, double input_z);
  const double get_x() const;
  const double get_y() const;
  const double get_z() const;
  void set_x(double input_x);
  void set_y(double input_y);
  void set_z(double input_z);

  Point3d operator+(Vec3d& other);  
  Vec3d operator-(Point3d& other);
  Point3d operator-(Vec3d& other);
  Point3d& operator-();

  Vec3d operator--();
  Point3d& operator+=(Vec3d& other);
  Vec3d operator-=(Point3d& other);
  Point3d& operator-=(Vec3d& other);

  bool operator==(Point3d& other);
  bool operator!=(Point3d& other);

  ~Point3d();
};

#endif