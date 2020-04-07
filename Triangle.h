//
// Created by zugvangg on 06.04.2020.
//

#ifndef PRIMITIVES_Triangle_H
#define PRIMITIVES_Triangle_H
#include "Vector2D.h"
#include <GL/glut.h>

class Triangle
{
private:
    double red_color;
    double green_color;
    double blue_color;
    Vector2D A;
    Vector2D B;
    Vector2D C;
public:
    Triangle(Vector2D A, Vector2D B, Vector2D C); //как и у линии
    Triangle(Vector2D A, Vector2D B, Vector2D C, double red_color, double green_color, double blue_color);
    ~Triangle();
    Triangle(Vector2D A, Vector2D B, double blue_color, double green_color, double red_color);
    void RandomColor();
    void SumVectors(Vector2D A, Vector2D B, Vector2D C);
    void DifVectors(Vector2D A, Vector2D B, Vector2D C);
    void setColor(double red_color, double green_color, double blue_color);
    double GetBlueColor();
    double GetGreenColor();
    double GetRedColor();
    Vector2D GetFirstCoordinate();
    Vector2D GetSecondCoordinate();
    Vector2D GetThirdCoordinate();
    void paintBound();
    void paintCompletely();
    void RaiseSize(double N);
    void LowerSize(double N);
    void PositionUp(double up);
    void PositionDown(double down);
    void PositionLeft(double left);
    void PositionRight(double right);
    void MovePosition(double x, double y);
    void RandomCoordinte();
};


#endif //PRIMITIVES_Triangle_H
