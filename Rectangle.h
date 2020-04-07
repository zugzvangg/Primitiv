//
// Created by zugvangg on 07.04.2020.
//

#ifndef PRIMITIVES_RECTANGLE_H
#define PRIMITIVES_RECTANGLE_H

#include "Vector2D.h"
#include "Line2D.h"
#include <GL/glut.h>

class Rectangle {
private:
    double red_color;
    double green_color;
    double blue_color;
    Vector2D A;
    Vector2D B;
    Vector2D C;
    Vector2D D;
public:
    Rectangle(Vector2D A, Vector2D B, Vector2D C, Vector2D D); //как и у линии
    Rectangle(Vector2D A, Vector2D B, Vector2D C, Vector2D D, double red_color, double green_color, double blue_color);
    ~Rectangle();
    Rectangle(Vector2D A, Vector2D B, Vector2D C, double blue_color, double green_color, double red_color);
    void RandomColor();
    void SumVectors(Vector2D A, Vector2D B, Vector2D C, Vector2D D);
    void DifVectors(Vector2D A, Vector2D B, Vector2D C, Vector2D D);
    void setColor(double red_color, double green_color, double blue_color);
    double GetBlueColor();
    double GetGreenColor();
    double GetRedColor();
    Vector2D GetFirstCoordinate();
    Vector2D GetSecondCoordinate();
    Vector2D GetThirdCoordinate();
    Vector2D GetFourthCoordinate();
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


#endif //PRIMITIVES_RECTANGLE_H
