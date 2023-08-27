#ifndef _VEC3D_H_
#define _VEC3D_H_

class Vec3d
{
private:
  double x;
  double y;
  double z;

public:
  Vec3d();
  Vec3d(double input_x, double input_y, double input_z);
  const double get_x() const;
  const double get_y() const;
  const double get_z() const;
  void set_x(double input_x);
  void set_y(double input_y);
  void set_z(double input_z);

  Vec3d operator+(Vec3d& other);
  Vec3d operator-(Vec3d& other);
  Vec3d operator*(double value);
  Vec3d operator/(double value);
  Vec3d operator%(int value);
  Vec3d& operator-();

  Vec3d& operator++();
  Vec3d& operator--();
  Vec3d& operator+=(Vec3d& other);
  Vec3d& operator-=(Vec3d& other);

  bool operator==(Vec3d& other);
  bool operator!=(Vec3d& other);

  Vec3d CrossProduct(Vec3d& other);
  double DotProduct(Vec3d& other);
  double Size();
  ~Vec3d();
};

#endif