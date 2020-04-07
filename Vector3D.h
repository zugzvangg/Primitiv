//
// Created by alik on 13.03.2020.
//

#ifndef LINAL_VECTOR3D_H
#define LINAL_VECTOR3D_H

#include <cmath>

class Vector3D
{
private:
    double x;  //координаты вектора на плоскости
    double y;
    double z;

public:
    Vector3D(); //конструктор вектора по умолчанию, задающий ему координаты (0; 0)
    Vector3D(double x, double y, double z);  //просто конструктор вектора (х; у)
    ~Vector3D();  //деструктор вектора (делаем его нулевым)

    double getX() const;  //получаем координату по х, ни в коем случае не меняя её
    double getY() const;  //аналогично для у
    double getZ() const;  //и для z

    void setX(double x);  //задаём координату по х
    void setY(double y);  //задаём координату по у
    void setZ(double z);  //задаём координату по z

    double getLength() const;  // узнаём длину вектора

    bool operator==(const Vector3D &v3) const;  //оператор сравнения векторов на равенство
    bool operator!=(const Vector3D &v3) const;  //оператор неравенства векторов

    Vector3D operator+(const Vector3D &v3);  //сложение векторов
    Vector3D operator-(const Vector3D &v3);  //вычитание векторов
    Vector3D operator*(const double a);  //умножение вектора на число
    Vector3D operator/(const double b);  //деление вектора на число

    Vector3D operator+= (const Vector3D &b);
    Vector3D operator-= (const Vector3D &b);
    Vector3D operator*= (const double b);
    Vector3D operator/= (const double b);


};

Vector3D operator*(double a, const Vector3D &v3);  //умножение скаляра на вектор
std::ostream &operator<<(std::ostream &os, const Vector3D &v3);  //вывод вектора в формате (х; у)
std::istream &operator>>(std::istream &is, Vector3D &v3);  //считываем координаты вектора и задаём их ему
double scalarProduct(Vector3D v2, Vector3D v3);  //скалярное произведение двух векторов
double getAngle(Vector3D v3, Vector3D v2);  //получаем угол между двумя векторами
Vector3D vectorProduct(Vector3D v3, Vector3D v2);  //векторное произведение

#endif //LINAL_VECTOR3D_H
