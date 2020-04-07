//
// Created by zugvangg on 06.04.2020.
//
#include "Vector2D.h"
#include "Vector2D.cpp"
#include "Line2D.h"


Line2D::Line2D()
{
    Vector2D a= Vector2D();
    this->A=Vector2D(0, 0);
    this->B=Vector2D(0, 0);
}

Line2D::Line2D(double red_color, double green_color_color, double blue_color)
{
    Vector2D a= Vector2D();
    this->A=Vector2D(0, 0);
    this->B=Vector2D(0, 0);
    this->blue_color=blue_color;
    this->red_color=red_color;
    this->green_color=green_color;
}


Line2D::Line2D(Vector2D A)
{
    this->A=A;
    this->B=A;
}

Line2D::Line2D(Vector2D A, double blue_color, double green_color, double red_color)
{
    this->A=A;
    this->B=A;
    this->green_color=green_color;
    this->red_color=red_color;
    this->blue_color=blue_color;
}

Line2D::Line2D(Vector2D A, Vector2D B, double red_color, double green_color, double blue_color)
{
    this->A=A;
    this->B=B;
    this->blue_color=blue_color;
    this->red_color=red_color;
    this->green_color=green_color;
};

Line2D::Line2D(Vector2D A, Vector2D B)
{

    this->A=A;
    this->B=B;
}

Line2D::~Line2D()
{
    //деструктор
    this->A=Vector2D(0, 0);
    this->B=Vector2D(0, 0);
    this->blue_color=0;
    this->red_color=0;
    this->green_color=0;
}


void Line2D::RandomColor()
{
    this->red_color = (double)(rand())/RAND_MAX;
    this->blue_color= (double)(rand())/RAND_MAX;
    this->green_color= (double)(rand())/RAND_MAX;
}

void Line2D::setColor(double red_color, double green_color, double blue_color)
{
    this->red_color=red_color;
    this->green_color=green_color;
    this->blue_color=blue_color;
};

void Line2D::SumVectors(Vector2D A, Vector2D B)
{
    this->A+=A;
    this->B+=B;
};

void Line2D::DifVectors(Vector2D A, Vector2D B)
{
    this->A-=A;
    this->B-=B;
};

double Line2D::GetBlueColor()
{
    return this->blue_color;
}

double Line2D::GetRedColor()
{
    return this->red_color;
}

double Line2D::GetGreenColor()
{
    return this->green_color;
}

Vector2D Line2D::GetFirstCoordinate()
{
    return this->A;
}

Vector2D Line2D::GetSecondCoordinate()
{
    return this->B;
}

void Line2D::RaiseSize(double N)
{
    this->A*=N;
    this->B*=N;
}

void Line2D::LowerSize(double N)
{
    this->A/=N;
    this->B/=N;
}

void Line2D::PositionUp(double x)
{
    A.setY(A.getY() + x);
    B.setY(B.getY() + x);


}

void Line2D::PositionDown(double x)
{
    A.setY(A.getY() - x);
    B.setY(B.getY() - x);
}

void Line2D::PositionLeft(double x)
{
    A.setX(A.getX() - x);
    B.setX(B.getX() - x);
}

void Line2D::PositionRight(double x)
{
    A.setX(A.getX() + x);
    B.setX(B.getX() + x);
}

void Line2D::paintBound() {
    glBegin(GL_LINES);
    glColor3f(GetRedColor(), GetGreenColor(), GetBlueColor());
    glVertex2f(A.getX(), A.getY());
    glColor3f(GetRedColor(), GetGreenColor(), GetBlueColor());
    glVertex2f(B.getX(), B.getY());
    glEnd();
}

void Line2D::paintCompletely()
{
    glBegin(GL_POLYGON);
    glColor3f(red_color, green_color, blue_color);
    glVertex2f(A.getX(), A.getY());
    glColor3f(red_color, green_color, blue_color);
    glVertex2f(B.getX(), B.getY());
    glColor3f(red_color, green_color, blue_color);
    glEnd();
}

void Line2D::MovePosition(double x, double y) //сдвиг на расстояние(выбор направления менется знаком "-", соответственно)
{
A.setX(A.getX()+x);
B.setX(B.getX()+x);
A.setY(A.getY()+y);
B.setY(B.getY()+y);
}

void Line2D::RandomCoordinate()
{
    A.setX(rand()%200);
    B.setX(rand()%200);
    A.setY(rand()%200);
    B.setY(rand()%200);
}





