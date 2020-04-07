//
// Created by zugvangg on 06.04.2020.
//
#include "Vector2D.h"
#include "Vector2D.cpp"
#include "Triangle.h"


Triangle::Triangle(Vector2D A, Vector2D B, Vector2D C) //конструктор задаёт точку в определённой координате, НЕ раскрашенную
{
    this->A=A;
    this->B=A;
    this->C=C;
}

Triangle::Triangle(Vector2D A, Vector2D B, Vector2D C, double blue_color, double green_color, double red_color) //конструктор задаёт точку в нопределённой координате, раскрашенную
{
    this->A=A;
    this->B=B;
    this->C=C;
    this->green_color=green_color;
    this->red_color=red_color;
    this->blue_color=blue_color;
}

Triangle::Triangle(Vector2D A, Vector2D B, double red_color, double green_color, double blue_color)
{
    this->A=A;
    this->B=B;
    this->C=Vector2D(0.0, 0.0);
    this->blue_color=blue_color;
    this->red_color=red_color;
    this->green_color=green_color;
};



Triangle::~Triangle()
{
    //деструктор
    this->A=Vector2D(0, 0);
    this->B=Vector2D(0, 0);
    this->C=Vector2D(0, 0);
    this->blue_color=0;
    this->red_color=0;
    this->green_color=0;
}


void Triangle::RandomColor()  // задаёт рандомный цвет линии
{
    this->red_color = (double)(rand())/RAND_MAX;
    this->blue_color= (double)(rand())/RAND_MAX;
    this->green_color= (double)(rand())/RAND_MAX;
}

void Triangle::setColor(double red_color, double green_color, double blue_color)
{
    this->red_color=red_color;
    this->green_color=green_color;
    this->blue_color=blue_color;
};

void Triangle::SumVectors(Vector2D A, Vector2D B, Vector2D C)
{
    this->A+=A;
    this->B+=B;
    this->C+=C;
};

void Triangle::DifVectors(Vector2D A, Vector2D B, Vector2D C)
{
    this->A-=A;
    this->B-=B;
    this->C-=C;
};

double Triangle::GetBlueColor()
{
    return this->blue_color;
}

double Triangle::GetRedColor()
{
    return this->red_color;
}

double Triangle::GetGreenColor()
{
    return this->green_color;
}

Vector2D Triangle::GetFirstCoordinate()
{
    return this->A;
}

Vector2D Triangle::GetSecondCoordinate()
{
    return this->B;
}

Vector2D Triangle::GetThirdCoordinate() {
    return this->C;
}

void Triangle::RaiseSize(double N)
{
    this->A*=N;
    this->B*=N;
    this->C*=N;
}

void Triangle::LowerSize(double N)
{
    this->A/=N;
    this->B/=N;
    this->C/=N;
}

void Triangle::PositionUp(double x)
{
    A.setY(A.getY() + x);
    B.setY(B.getY() + x);
    C.setY(C.getY() + x);

}

void Triangle::PositionDown(double x)
{
    A.setY(A.getY() - x);
    B.setY(B.getY() - x);
    C.setY(C.getY() - x);
}

void Triangle::PositionLeft(double x)
{
    A.setX(A.getX() - x);
    B.setX(B.getX() - x);
    C.setX(C.getX() - x);
}

void Triangle::PositionRight(double x)
{
    A.setX(A.getX() + x);
    B.setX(B.getX() + x);
    C.setX(C.getX() + x);
}

void Triangle::paintBound() {
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
}

void Triangle::paintCompletely()
{
    glBegin(GL_POLYGON);
    glColor3f(GetRedColor(), GetGreenColor(), GetBlueColor());
    glVertex2f(A.getX(), A.getY());
    glColor3f(GetRedColor(), GetGreenColor(), GetBlueColor());
    glVertex2f(B.getX(), B.getY());
    glColor3f(GetRedColor(), GetGreenColor(), GetBlueColor());
    glVertex2f(C.getX(), C.getY());
    glEnd();
}

void Triangle::MovePosition(double x, double y)
{
    A.setX(A.getX()+x);
    B.setX(B.getX()+x);
    A.setY(A.getY()+y);
    B.setY(B.getY()+y);
    C.setX(C.getX()+x);
    C.setY(C.getY()+y);
}

void Triangle::RandomCoordinte()
{
    A.setX(rand()%200);
    B.setX(rand()%200);
    A.setY(rand()%200);
    B.setY(rand()%200);
    C.setX(rand()%200);
    C.setY(rand()%200);

}



