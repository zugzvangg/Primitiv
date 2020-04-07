//
// Created by zugvangg on 07.04.2020.
//

#ifndef PRIMITIVES_SPHERE_H
#define PRIMITIVES_SPHERE_H


#include "Vector3D.h"
#include <GL/glut.h>
#include "Sphere.h"

class Sphere {
private:
    double red_color;
    double green_color;
    double blue_color;
    Vector3D A;
    double radius;
public:  //различные типы конструкторов
    Sphere(Vector3D A, double radius);
    Sphere(Vector3D A, double red_color, double green_color, double blue_color, double radius);
    ~Sphere(); //деструктор
    Sphere(double radius);
    void RandomColor(); //выставляет рандомный цвет объекту
    void setColor(double red_color, double green_color, double blue_color); //установка цвета
    double GetBlueColor(); //возвращают цвет
    double GetGreenColor();
    double GetRedColor();
    Vector2D GetCoordinate(); //возвращают координату
    void paintCompletely(); //рисовка всего объекта
    void RaiseSize(double N); //гомотетия(умное слово)
    void LowerSize(double N);
    void PositionUp(double x);//перемещение позиции
    void PositionDown(double x);
    void PositionLeft(double x);
    void PositionRight(double x);
    void PositionDeep(double x);
    void PositionAhead(double x);
    void MovePosition(double x, double y, double z);
    void RandomCoordinate();
};

#endif //PRIMITIVES_SPHERE_H
