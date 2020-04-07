//
// Created by zugvangg on 06.04.2020.
//
#include "Vector2D.h"
#include "Vector2D.cpp"
#include "Circle.h"



Circle::Circle(Vector2D A, double radius)
{
    this->A=A;
    this->radius=radius;
}

Circle::Circle(Vector2D A, double red_color, double green_color, double blue_color, double radius)
{
this->A=A;
this->radius=radius;
this->blue_color=blue_color;
this->green_color=green_color;
this->red_color=red_color;
}

Circle::~Circle() {
this->radius=0;
this->A=Vector2D(0, 0);
}

Circle::Circle(double radius) {
    this->A=Vector2D(0, 0);
    this->radius=radius;
}


void Circle::RandomColor()
{
    this->red_color = (double)(rand())/RAND_MAX;
    this->blue_color= (double)(rand())/RAND_MAX;
    this->green_color= (double)(rand())/RAND_MAX;
}

void Circle::setColor(double red_color, double green_color, double blue_color)
{
    this->red_color=red_color;
    this->green_color=green_color;
    this->blue_color=blue_color;
};


double Circle::GetBlueColor()
{
    return this->blue_color;
}

double Circle::GetRedColor()
{
    return this->red_color;
}

double Circle::GetGreenColor()
{
    return this->green_color;
}

Vector2D Circle::GetCoordinate() {
    return this->A;
}

void Circle::RaiseSize(double N)
{
    this->radius*=N;

}

void Circle::LowerSize(double N)
{
    this->radius/=N;
}

void Circle::PositionUp(double x)
{
    A.setY(A.getY() + x);
}

void Circle::PositionDown(double x)
{
    A.setY(A.getY() - x);
}

void Circle::PositionLeft(double x)
{
    A.setX(A.getX() - x);
}

void Circle::PositionRight(double x)
{
    A.setX(A.getX() + x);
}

void Circle::paintBound() {
    glBegin(GL_LINE_LOOP);
    for (int i = 0; i < 100; i++)
    {
        double angle = 2.0 * 3.1415926 * double(i) / 100;
        double dx = radius * cosf(angle);
        double dy = radius * sinf(angle);
        glVertex2f(this->A.getX() + dx, this->A.getY() + dy);
    }
    glEnd();
}

void Circle::paintCompletely()
{
    glBegin(GL_POLYGON);
    for (int i = 0; i < 100; i++)
    {
        double angle = 2.0 * 3.1415926 * double(i) / 100;
        double x = radius * cosf(angle);
        double y = radius * sinf(angle);
        glVertex2f(this->A.getX() + x, this->A.getY() + y);
    }
    glEnd();
}

void Circle::MovePosition(double x, double y) //сдвиг на расстояние(выбор направления менется знаком "-", соответственно)
{
    A.setX(A.getX()+x);
    A.setY(A.getY()+y);
}

void Circle::RandomCoordinate()
{
    A.setX(rand()%200);
    A.setY(rand()%200);
}









