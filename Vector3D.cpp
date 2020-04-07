//
// Created by alik on 13.03.2020.
//

#include "Vector3D.h"

Vector3D::Vector3D()
{
    this->x = 0;
    this->y = 0;
    this->z = 0;
};

Vector3D::Vector3D(double x, double y, double z)
{
    this->x = x;
    this->y = y;
    this->z = z;
};

Vector3D::~Vector3D()
{
    x = 0;
    y = 0;
    z = 0;
};

double Vector3D::getX() const
{
    return x;
};

double Vector3D::getY() const
{
    return y;
};

double Vector3D::getZ() const
{
    return z;
};

void Vector3D::setX(double x)
{
    this->x = x;
};

void Vector3D::setY(double y)
{
    this->y = y;
};

void Vector3D::setZ(double z)
{
    this->z = z;
};

double scalarProduct(Vector3D v2, Vector3D v3)
{
    return (v3.getX() * v2.getX() + v3.getY() * v2.getY() + v3.getZ() * v2.getZ());
};

double getAngle(Vector3D v3, Vector3D v2)
{
    return (scalarProduct(v3, v2) / (v3.getLength() * v2.getLength()));
};

double Vector3D::getLength() const
{
    return sqrt(x * x + y * y + z * z);
};

Vector3D vectorProduct(Vector3D v3, Vector3D v2)
{
    Vector3D a;
    a.setX(v3.getY() * v2.getZ() - v3.getZ() * v2.getY());
    a.setY(-v3.getX() * v2.getZ() + v2.getX() * v3.getZ());
    a.setZ(v3.getX() * v2.getY() - v3.getY() * v2.getX());
    return a;
};

bool Vector3D::operator==(const Vector3D &v3) const
{
    return (x == v3.getX() && y == v3.getY() && z == v3.getX());
};

bool Vector3D::operator!=(const Vector3D &v3) const
{
    return !(x == v3.getX() && y == v3.getY() && z == v3.getZ());
};

Vector3D Vector3D::operator+(const Vector3D &v3)
{
    double x2 = x + v3.getX();
    double y2 = y + v3.getY();
    double z2 = z + v3.getZ();
    return Vector3D(x2, y2, z2);
};

Vector3D Vector3D::operator-(const Vector3D &v3)
{
    double x2 = x - v3.getX();
    double y2 = y - v3.getY();
    double z2 = z - v3.getZ();
    return Vector3D(x2, y2, z2);
};

Vector3D Vector3D::operator*(const double a)
{
    double x2 = x * a;
    double y2 = y * a;
    double z2 = z * a;
    return Vector3D(x2, y2, z2);
};

Vector3D Vector3D::operator/(const double b)
{
    Vector3D result = {x / b, y / b, z / b};
    return result;
};

Vector3D Vector3D::operator+=(const Vector3D &b)
{
    x += b.x;
    y += b.y;
    z += b.z;
    return *this;
};

Vector3D Vector3D::operator-=(const Vector3D &b)
{
    x -= b.x;
    y -= b.y;
    z -= b.z;
    return *this;
};

Vector3D Vector3D::operator*=(const double b)
{
    x *= b;
    y *= b;
    z *= b;
    return *this;
};

Vector3D Vector3D::operator/=(const double b)
{
    x /= b;
    y /= b;
    z /= b;
    return *this;
};

// Оператор умножения скаляра на вектор, исходный вектор не меняется, возвращается новый вектор
Vector3D operator*(double a, const Vector3D &v)
{
    double x2 = a * v.getX();
    double y2 = a * v.getY();
    double z2 = a * v.getZ();
    return Vector3D(x2, y2, z2);
};

// Вывод вектора, ожидается строго в формате (1; 1)
std::ostream &operator<<(std::ostream &os, const Vector3D &v)
{
    os << "(" << v.getX() << "; " << v.getY() << ";" << v.getZ() << ")";
    return os;
};

// Чтение вектора, читает просто две координаты без хитростей
std::istream &operator>>(std::istream &is, Vector3D &v)
{
    double a, b, c;
    is >> a;
    is >> b;
    is >> c;
    v.setX(a);
    v.setY(b);
    v.setZ(c);
    return is;
};
