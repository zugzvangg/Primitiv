//
// Created by alik on 13.03.2020.
//

#ifndef LINAL_VECTOR2D_H
#define LINAL_VECTOR2D_H

#include <cmath>
class Vector2D {
private:
    double x; //координаты вектора на плоскости
    double y;
public:
    Vector2D(); //конструктор вектора по умолчанию, задающий ему координаты (0; 0)
    Vector2D(double x, double y);  //просто конструктор вектора (х; у)
    ~Vector2D();  //деструктор вектора (делаем его нулевым)

    double getX() const;  //получаем координату по х, ни в коем случае не меняя её
    double getY() const;  //аналогично для у

    void setX(double x);  //задаём координату по х
    void setY(double y);  //задаём координату по у

    double getLength() const; //узнаём длину вектора

    bool operator== (const Vector2D& v2) const;  //оператор сравнения векторов на равенство
    bool operator!= (const Vector2D& v2) const;  //оператор неравенства векторов
    Vector2D operator+ (const Vector2D& v2) const;  //сложение векторов
    Vector2D operator- (const Vector2D& v2) const;  //вычитание векторов
    Vector2D operator* (const double a) const;  //умножение вектора на число

    Vector2D operator+= (const Vector2D &b);
    Vector2D operator-= (const Vector2D &b);
    Vector2D operator*= (const double b);
    Vector2D operator/= (const double b);

};
Vector2D operator* (double a, const Vector2D& v);  //умножение скаляра на вектор
std::ostream& operator<<(std::ostream& os, const Vector2D& v);  //вывод вектора в формате (х; у)
std::istream& operator >> (std::istream &is, Vector2D &v);  //считываем координаты вектора и задаём их ему
double scalarProduct(Vector2D v2, Vector2D v3);  //скалярное произведение
double getAngle(Vector2D v2, Vector2D v3);  //получаем угол между двумя векторами

#endif //LINAL_VECTOR2D_H
