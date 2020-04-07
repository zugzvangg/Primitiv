//
// Created by zugvangg on 07.04.2020.
//

#ifndef PRIMITIVES_CIRCLE_H
#define PRIMITIVES_CIRCLE_H

#include "Vector2D.h"
#include <GL/glut.h>
#include "Circle.h"

class Circle {
private:
    double red_color;
    double green_color;
    double blue_color;
    Vector2D A;
    double radius;
public:  //различные типы конструкторов
    Circle(Vector2D A, double radius);
    Circle(Vector2D A, double red_color, double green_color, double blue_color, double radius);
    ~Circle(); //деструктор
    Circle(double radius);
    void RandomColor(); //выставляет рандомный цвет объекту
    void setColor(double red_color, double green_color, double blue_color); //установка цвета
    double GetBlueColor(); //возвращают цвет
    double GetGreenColor();
    double GetRedColor();
    Vector2D GetCoordinate(); //возвращают координату
    void paintBound(); //рисовка границы
    void paintCompletely(); //рисовка всего объекта
    void RaiseSize(double N); //гомотетия(умное слово)
    void LowerSize(double N);
    void PositionUp(double x);//перемещение позиции
    void PositionDown(double x);
    void PositionLeft(double x);
    void PositionRight(double x);
    void MovePosition(double x, double y);
    void RandomCoordinate();
};


#endif //PRIMITIVES_CIRCLE_H
