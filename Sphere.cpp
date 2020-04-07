//
// Created by zugvangg on 07.04.2020.
//


#include "Vector3D.h"
#include "Vector3D.cpp"
#include "Sphere.h"

Sphere::Sphere(Vector3D A, double radius)
{
    this->A=A;
    this->radius=radius;
}

Sphere::Sphere(Vector3D A, double red_color, double green_color, double blue_color, double radius)
{
    this->A=A;
    this->radius=radius;
    this->blue_color=blue_color;
    this->green_color=green_color;
    this->red_color=red_color;
}

Sphere::~Sphere() {
    this->radius=0;
    this->A=Vector3D(0, 0, 0);
}

Sphere::Sphere(double radius) {
    this->A=Vector3D(0, 0, 0);
    this->radius=radius;
}


void Sphere::RandomColor()
{
    this->red_color = (double)(rand())/RAND_MAX;
    this->blue_color= (double)(rand())/RAND_MAX;
    this->green_color= (double)(rand())/RAND_MAX;
}

void Sphere::setColor(double red_color, double green_color, double blue_color)
{
    this->red_color=red_color;
    this->green_color=green_color;
    this->blue_color=blue_color;
};


double Sphere::GetBlueColor()
{
    return this->blue_color;
}

double Sphere::GetRedColor()
{
    return this->red_color;
}

double Sphere::GetGreenColor()
{
    return this->green_color;
}

Vector3D Sphere::GetCoordinate() {
    return this->A;
}

void Sphere::RaiseSize(double N)
{
    this->radius*=N;
}

void Sphere::LowerSize(double N)
{
    this->radius/=N;
}

void Sphere::PositionUp(double x)
{
    A.setY(A.getY() + x);
}

void Sphere::PositionDown(double x)
{
    A.setY(A.getY() - x);
}

void Sphere::PositionLeft(double x)
{
    A.setX(A.getX() - x);
}

void Sphere::PositionRight(double x)
{
    A.setX(A.getX() + x);
}

void Sphere::PositionDeep(double x)
{
    A.setZ(A.getZ() - x);
}

void Sphere::PositionAhead(double x)
{
    A.setZ(A.getZ() + x);
}



void Sphere::paintCompletely()
{
    glBegin(GL_POLYGON);
    for (int i = 0; i < 100; i++)
    {
        double angle = 2.0 * 3.1415926 * double(i) / 100;
        double x = radius * cosf(float(angle));
        double y = radius * sinf(float(angle));
        double z = radius * sinf(float(angle));
        glVertex3f(this->A.getX() + x, this->A.getY() + y, this->A.getZ()+z);
    }
    glEnd();
}

void Sphere::MovePosition(double x, double y, double z) //сдвиг на расстояние(выбор направления менется знаком "-", соответственно)
{
    A.setX(A.getX()+x);
    A.setY(A.getY()+y);
    A.setZ(A.getZ() + z);
}

void Sphere::RandomCoordinate()
{
    A.setX(rand()%200);
    A.setY(rand()%200);
    A.setZ(rand()%200);
}
