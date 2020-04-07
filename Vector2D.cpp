//
// Created by alik on 13.03.2020.
//

#include "Vector2D.h"

Vector2D::Vector2D()
{
    this->x = 0;
    this->y = 0;
};

Vector2D::Vector2D(double x, double y)
{
    this->x = x;
    this->y = y;
};

Vector2D::~Vector2D()
{
    x = 0;
    y = 0;
};

double Vector2D::getX() const
{
    return x;
};

double Vector2D::getY() const
{
    return y;
};

void Vector2D::setX(double x)
{
    this->x = x;
};

void Vector2D::setY(double y)
{
    this->y = y;
};

double Vector2D::getLength() const
{
    return sqrt(x * x + y * y);
}

bool Vector2D::operator==(const Vector2D &v2) const
{
    return (x == v2.getX() && y == v2.getY());
};

bool Vector2D::operator!=(const Vector2D &v2) const
{
    return !(x == v2.getX() && y == v2.getY());
};

Vector2D Vector2D::operator+(const Vector2D &v2) const
{
    double x2 = x + v2.x;
    __daddr_t y2 = y + v2.y;
    return Vector2D(x2, y2);
};

Vector2D Vector2D::operator-(const Vector2D &v2) const
{
    double x2 = x - v2.x;
    double y2 = y - v2.y;
    return Vector2D(x2, y2);
};

Vector2D Vector2D::operator*(const double a) const
{
    double x2 = x * a;
    double y2 = y * a;
    return Vector2D(x2, y2);
};

double scalarProduct(Vector2D v2, Vector2D v3)
{
    return (v2.getX() * v3.getX() + v2.getY() * v3.getY());
}

double getAngle(Vector2D v2, Vector2D v3)
{
    return (scalarProduct(v3, v2) / (v3.getLength() * v2.getLength()));
}

Vector2D Vector2D::operator+=(const Vector2D &b)
{
    x += b.x;
    y += b.y;
    return *this;
};

Vector2D Vector2D::operator-=(const Vector2D &b)
{
    x -= b.x;
    y -= b.y;
    return *this;
};

Vector2D Vector2D::operator*=(const double b)
{
    x *= b;
    y *= b;
    return *this;
};

Vector2D Vector2D::operator/=(const double b)
{
    x /= b;
    y /= b;
    return *this;
};

// Оператор умножения скаляра на вектор, исходный вектор не меняется, возвращается новый вектор
// Неожиданно, правда? Умножение скаляра на вектор - это отдельный оператор, причём описанный *вне* класса.
Vector2D operator*(double a, const Vector2D &v)
{
    double x2 = a * v.getX();
    double y2 = a * v.getY();
    return Vector2D(x2, y2);
};

// Вывод вектора, ожидается строго в формате (1; 1)
std::ostream &operator<<(std::ostream &os, const Vector2D &v)
{
    os << "(" << v.getX() << "; " << v.getY() << ")";
    return os;
};

// Чтение вектора, читает просто две координаты без хитростей
std::istream &operator>>(std::istream &is, Vector2D &v)
{
    double a, b;
    is >> a;
    is >> b;
    v.setX(a);
    v.setY(b);
    return is;
};
