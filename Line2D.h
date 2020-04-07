//
// Created by zugvangg on 06.04.2020.
//

#ifndef PRIMITIVES_LINE2D_H
#define PRIMITIVES_LINE2D_H


#include "Vector2D.h"
#include "Line2D.h"
#include <GL/glut.h>

class Line2D
{
private:
    double red_color;
    double green_color;
    double blue_color;
    Vector2D A;
    Vector2D B;
public:  //различные типы конструкторов
    Line2D(Vector2D A, Vector2D B);
    Line2D(Vector2D A, Vector2D B, double red_color, double green_color, double blue_color);
    Line2D();
    ~Line2D(); //деструктор
    Line2D(Vector2D A);
    Line2D(Vector2D A, double blue_color, double green_color, double red_color);
    Line2D(double red_color, double green_color, double blue_color);
    void RandomColor(); //выставляет рандомный цвет объекту
    void SumVectors(Vector2D A, Vector2D B); //сумма и разность векторов
    void DifVectors(Vector2D A, Vector2D B);
    void setColor(double red_color, double green_color, double blue_color); //установка цвета
    double GetBlueColor(); //возвращают цвет
    double GetGreenColor();
    double GetRedColor();
    Vector2D GetFirstCoordinate(); //возвращают координату
    Vector2D GetSecondCoordinate();
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


#endif //PRIMITIVES_LINE2D_H
