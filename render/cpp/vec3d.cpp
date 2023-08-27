#include <iostream>
#include "include/vec3d.h"

Vec3d::Vec3d()
  : x(0.0), y(0.0), z(0.0)
{
}

Vec3d::Vec3d(double input_x, double input_y, double input_z)
  : x(input_x), y(input_y), z(input_z)
{
}

const double Vec3d::get_x() const
{
  return x;
}

const double Vec3d::get_y() const
{
  return y;
}

const double Vec3d::get_z() const
{
  return z;
}

void Vec3d::set_x(double input_x)
{
  x = input_x;
}
  
void Vec3d::set_y(double input_y)
{
  y = input_y;
}

void Vec3d::set_z(double input_z)
{
  z = input_z;
}

Vec3d Vec3d::operator+(Vec3d& other)
{
  double result_x = x + other.get_x();
  double result_y = y + other.get_y();
  double result_z = z + other.get_z();
  
  return Vec3d(result_x, result_y, result_z);
}

Vec3d Vec3d::operator-(Vec3d& other)
{
  double result_x = x - other.get_x();
  double result_y = y - other.get_y();
  double result_z = z - other.get_z();

  return Vec3d(result_x, result_y, result_z);
}

Vec3d Vec3d::operator*(double value)
{
  return Vec3d(x*value, y*value, z*value);
}

Vec3d Vec3d::operator/(double value)
{
  return Vec3d(x/value, y/value, z/value);
}

Vec3d Vec3d::operator%(int value)
{
  double result_x = (double)((int)x % value);
  double result_y = (double)((int)y % value);
  double result_z = (double)((int)z % value);

  return Vec3d(result_x, result_y, result_z);
}

Vec3d& Vec3d::operator-()
{
  x = -x;
  y = -y;
  z = -z;

  return *this;
}

Vec3d& Vec3d::operator++()
{
  ++x;
  ++y;
  ++z;

  return *this;
}

Vec3d& Vec3d::operator--()
{
  --x;
  --y;
  --z;
  
  return *this;
}

Vec3d& Vec3d::operator+=(Vec3d& other)
{
  x += other.get_x();
  y += other.get_y();
  z += other.get_z();

  return *this;
}

Vec3d& Vec3d::operator-=(Vec3d& other)
{
  x -= other.get_x();
  y -= other.get_y();
  z -= other.get_z();

  return *this;
}

bool Vec3d::operator==(Vec3d& other)
{
  if(x == other.get_x() && y == other.get_y() && z == other.get_z())
    return true;
  return false;
}

bool Vec3d::operator!=(Vec3d& other)
{
  if(x == other.get_x() && y == other.get_y() && z == other.get_z())
    return false;
  return true;
}

Vec3d Vec3d::CrossProduct(Vec3d& other)
{
  double result_x = (y*other.get_z()) - (z*other.get_y());
  double result_y = (z*other.get_x()) - (x*other.get_z());
  double result_z = (x*other.get_y()) - (y*other.get_x());

  return Vec3d(result_x, result_y, result_z);
}

double Vec3d::DotProduct(Vec3d &other)
{
  double result = x * other.get_x();
  result += (y * other.get_y());
  result += (z * other.get_z());

  return result;
}

double Vec3d::Size()
{
  double result_x = x * x;
  double result_y = y * y;
  double result_z = z * z;
  double result = sqrt(result_x + result_y + result_z);

  return result;
}

Vec3d::~Vec3d()
{
}