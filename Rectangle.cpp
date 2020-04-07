//
// Created by zugvangg on 07.04.2020.
//
#include "Vector2D.h"
#include "Vector2D.cpp"
#include "Rectangle.h"

Rectangle::Rectangle(Vector2D A, Vector2D B, Vector2D C, Vector2D D) //конструктор задаёт точку в определённой координате, НЕ раскрашенную
{
    this->A=A;
    this->B=A;
    this->C=C;
    this->D=D;
}

Rectangle::Rectangle(Vector2D A, Vector2D B, Vector2D C, Vector2D D, double blue_color, double green_color, double red_color) //конструктор задаёт точку в нопределённой координате, раскрашенную
{
    this->A=A;
    this->B=B;
    this->C=C;
    this->D=D;
    this->green_color=green_color;
    this->red_color=red_color;
    this->blue_color=blue_color;
};

Rectangle::Rectangle(Vector2D A, Vector2D B, Vector2D C, double red_color, double green_color, double blue_color)
{
    this->A=A;
    this->B=B;
    this->C=C;
    this->green_color=green_color;
    this->red_color=red_color;
    this->blue_color=blue_color;
}


Rectangle::~Rectangle()
{
    //деструктор
    this->A=Vector2D(0, 0);
    this->B=Vector2D(0, 0);
    this->C=Vector2D(0, 0);
    this->blue_color=0;
    this->red_color=0;
    this->green_color=0;
}


void Rectangle::RandomColor()  // задаёт рандомный цвет линии
{
    this->red_color = (double)(rand())/RAND_MAX;
    this->blue_color= (double)(rand())/RAND_MAX;
    this->green_color= (double)(rand())/RAND_MAX;
}

void Rectangle::setColor(double red_color, double green_color, double blue_color)
{
    this->red_color=red_color;
    this->green_color=green_color;
    this->blue_color=blue_color;
};

void Rectangle::SumVectors(Vector2D A, Vector2D B, Vector2D C, Vector2D D)
{
    this->A+=A;
    this->B+=B;
    this->C+=C;
    this->D+=D;
};

void Rectangle::DifVectors(Vector2D A, Vector2D B, Vector2D C, Vector2D D)
{
    this->A-=A;
    this->B-=B;
    this->C-=C;
    this->D-=D;
};

double Rectangle::GetBlueColor()
{
    return this->blue_color;
}

double Rectangle::GetRedColor()
{
    return this->red_color;
}

double Rectangle::GetGreenColor()
{
    return this->green_color;
}

Vector2D Rectangle::GetFirstCoordinate()
{
    return this->A;
}

Vector2D Rectangle::GetSecondCoordinate()
{
    return this->B;
}

Vector2D Rectangle::GetThirdCoordinate() {
    return this->C;
}

Vector2D Rectangle::GetFourthCoordinate() {
    return this->C;
}

void Rectangle::RaiseSize(double N)
{
    this->A*=N;
    this->B*=N;
    this->C*=N;
    this->D*=N;
}

void Rectangle::LowerSize(double N)
{
    this->A/=N;
    this->B/=N;
    this->C/=N;
    this->D/=N;
}

void Rectangle::PositionUp(double x)
{
    A.setY(A.getY() + x);
    B.setY(B.getY() + x);
    C.setY(C.getY() + x);
    D.setY(D.getY() + x);

}

void Rectangle::PositionDown(double x)
{
    A.setY(A.getY() - x);
    B.setY(B.getY() - x);
    C.setY(C.getY() - x);
    D.setY(D.getY() - x);
}

void Rectangle::PositionLeft(double x)
{
    A.setX(A.getX() - x);
    B.setX(B.getX() - x);
    C.setX(C.getX() - x);
    D.setX(D.getX() - x);
}

void Rectangle::PositionRight(double x)
{
    A.setX(A.getX() + x);
    B.setX(B.getX() + x);
    C.setX(C.getX() + x);
    D.setX(D.getX() + x);
}

void Rectangle::paintBound() {
    glBegin(GL_LINES);
    glColor3f(GetRedColor(), GetGreenColor(), GetBlueColor());
    glVertex2f(A.getX(), A.getY());
    glColor3f(GetRedColor(), GetGreenColor(), GetBlueColor());
    glVertex2f(B.getX(), B.getY());
    glEnd();
    glBegin(GL_LINES);
    glColor3f(GetRedColor(), GetGreenColor(), GetBlueColor());
    glVertex2f(B.getX(), B.getY());
    glColor3f(GetRedColor(), GetGreenColor(), GetBlueColor());
    glVertex2f(C.getX(), C.getY());
    glEnd();
    glBegin(GL_LINES);
    glColor3f(GetRedColor(), GetGreenColor(), GetBlueColor());
    glVertex2f(A.getX(), A.getY());
    glColor3f(GetRedColor(), GetGreenColor(), GetBlueColor());
    glVertex2f(C.getX(), C.getY());
    glEnd();
    glEnd();
    glBegin(GL_LINES);
    glColor3f(GetRedColor(), GetGreenColor(), GetBlueColor());
    glVertex2f(C.getX(), C.getY());
    glColor3f(GetRedColor(), GetGreenColor(), GetBlueColor());
    glVertex2f(D.getX(), D.getY());
    glEnd();
}

void Rectangle::paintCompletely()
{
    glBegin(GL_POLYGON);
    glColor3f(GetRedColor(), GetGreenColor(), GetBlueColor());
    glVertex2f(A.getX(), A.getY());
    glColor3f(GetRedColor(), GetGreenColor(), GetBlueColor());
    glVertex2f(B.getX(), B.getY());
    glColor3f(GetRedColor(), GetGreenColor(), GetBlueColor());
    glVertex2f(C.getX(), C.getY());
    glColor3f(GetRedColor(), GetGreenColor(), GetBlueColor());
    glVertex2f(D.getX(), D.getY());
    glEnd();
}

void Rectangle::MovePosition(double x, double y)
{
    A.setX(A.getX()+x);
    B.setX(B.getX()+x);
    A.setY(A.getY()+y);
    B.setY(B.getY()+y);
    C.setX(C.getX()+x);
    C.setY(C.getY()+y);
    D.setX(D.getX()+x);
    D.setY(D.getY()+y);
}

void Rectangle::RandomCoordinte()
{
    A.setX(rand()%200);
    B.setX(rand()%200);
    A.setY(rand()%200);
    B.setY(rand()%200);
    C.setX(rand()%200);
    C.setY(rand()%200);
    D.setX(rand()%200);
    D.setY(rand()%200);
}
