#include <iostream>
#include "include/point3d.h"
#include "include/vec3d.h"
#include "vec3d.cpp"

Point3d::Point3d()
  : x(0.0), y(0.0), z(0.0)
{
}

Point3d::Point3d(double input_x, double input_y, double input_z)
  : x(input_x), y(input_y), z(input_z)
{
}

const double Point3d::get_x() const
{
  return x;
}

const double Point3d::get_y() const
{
  return y;
}

const double Point3d::get_z() const
{
  return z;
}

void Point3d::set_x(double input_x)
{
  x = input_x;
}

void Point3d::set_y(double input_y)
{
  y = input_y;
}

void Point3d::set_z(double input_z)
{
  z = input_z;
}

Point3d Point3d::operator+(Vec3d& other)
{
  double result_x = x + other.get_x();
  double result_y = y + other.get_y();
  double result_z = z + other.get_z();

  return Point3d(result_x, result_y, result_z);
}  

Vec3d Point3d::operator-(Point3d& other)
{
  double result_x = x - other.get_x();
  double result_y = y - other.get_y();
  double result_z = z - other.get_z();

  return Vec3d(result_x, result_y, result_z);
}

Point3d Point3d::operator-(Vec3d& other)
{
  double result_x = x - other.get_x();
  double result_y = y - other.get_y();
  double result_z = z - other.get_z();

  return Point3d(result_x, result_y, result_z);
}

Point3d& Point3d::operator-()
{
  x = -x;
  y = -y;
  z = -z;

  return *this;
}

Vec3d Point3d::operator--()
{
  --x;
  --y;
  --z;

  return Vec3d(x, y, z);
}

Point3d& Point3d::operator+=(Vec3d& other)
{
  x += other.get_x();
  y += other.get_y();
  z += other.get_z();

  return *this;
}

Vec3d Point3d::operator-=(Point3d& other)
{
  double result_x = x - other.get_x();
  double result_y = y - other.get_y();
  double result_z = z - other.get_z();
  return Vec3d(result_x, result_y, result_z);
}

Point3d& Point3d::operator-=(Vec3d& other)
{
  x -= other.get_x();
  y -= other.get_y();
  z -= other.get_z();

  return *this;  
}

bool Point3d::operator==(Point3d& other)
{
  if(x == other.get_x() && y == other.get_y() && z == other.get_z())
    return true;
  return false;
}

bool Point3d::operator!=(Point3d& other)
{
  if(x == other.get_x() && y == other.get_y() && z == other.get_z())
    return false;
  return true;
}

Point3d::~Point3d()
{
}