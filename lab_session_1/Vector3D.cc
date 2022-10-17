#include <iostream>
#include "Vector3D.h"
#include <cmath>
using namespace std;

//These constructor creates a 3D vector
Vector3D::Vector3D(double x, double y, double z){
    x_ = x;
    y_ = y;
    z_ = z;
}

//These functions return the x, y and z value of a vector
double Vector3D::x(){
    return x_;
}
double Vector3D::y(){
    return y_;
}
double Vector3D::z(){
    return z_;
}

//These functions modify the x, y and z value of a vector
void Vector3D::setx(double x){
    x_ = x;
}
void Vector3D::sety(double y){
    y_ = y;
}
void Vector3D::setz(double z){
    z_ = z;
}

//This function prints the 3D vector
void Vector3D::print(){
    cout << "{ " << x_ << ", "<< y_ << ", " << z_ << " }";
}

//This function performs a cross product axb between 3D vectors
Vector3D Vector3D::vectorProduct(Vector3D v){
    double x1, y1, z1;
    x1 = y_*v.z()-z_*v.y();
    y1 = z_*v.x()-z_*v.z();
    z1 = x_*v.y()-y_*v.x();
    Vector3D v1(x1,y1,z1);
    return v1;
}
//This function performs a scalar product a.b between 3D vectors
double Vector3D::scalarProduct(Vector3D v){
    double sp;
    sp = x_*v.x()+y_*v.y()+z_*v.z();
    return sp;
}
//This function obtains the magnitude of a 3D vector
double Vector3D::magnitude(){
    double mag; 
    mag = pow(x_,2.)+pow(y_,2.)+pow(z_,2.);
    mag = sqrt(mag);
    return mag;
}
//This function calculates the angle between two 3D vectors
double Vector3D::angle(Vector3D v){
    Vector3D v1(x_,y_,z_);
    double ang;
    ang = v1.scalarProduct(v)/(v1.magnitude()*v.magnitude());
    ang = acos(ang);
    return ang;
}
//This function obtains the angle theta between a 3D vector and the x plane
double Vector3D::theta(){
    double th;
    th = atan(y_/x_);
    return th;
}
//This function obtains the azimuthal angle of a 3D vector
double Vector3D::phi(){
    Vector3D v1(x_,y_,z_);
    double ph;
    ph = acos(z_/v1.magnitude());
    return ph;
}

//This is the sum operator between vectors
Vector3D Vector3D::operator+(const Vector3D& v) const{
    double x1 = x_ + v.x_;
    double y1 = y_ + v.y_;
    double z1 = z_ + v.z_;
    return Vector3D(x1,y1,z1);
}
//This is the minus operator between vectors
Vector3D Vector3D::operator-(const Vector3D& v) const{
    double x1 = x_ - v.x_;
    double y1 = y_ - v.y_;
    double z1 = z_ - v.z_;
    return Vector3D(x1,y1,z1);
}
//This is the multiplication operator between vectors
Vector3D Vector3D::operator*(const double& a) const{
    double x1 = x_*a;
    double y1 = y_*a;
    double z1 = z_*a;
    return Vector3D(x1,y1,z1);
}
//This is the division operator between vectors
Vector3D Vector3D::operator/(const double& a) const{
    double x1 = x_/a;
    double y1 = y_/a;
    double z1 = z_/a;
    return Vector3D(x1,y1,z1);
}
//This is the equality operator between vectors
Vector3D Vector3D::operator=(const Vector3D& v){
    x_ = v.x_;
    y_ = v.y_;
    z_ = v.z_;
    return *this;
}

//This function converts a vector from rectangular to spherical coordinates
Vector3D Vector3D::spherical(){
    Vector3D v(x_,y_,z_);
    double r = v.magnitude();
    double th = v.theta();
    double ph = v.phi();
    return Vector3D(r, th, ph);
}
//This function converts a vector from spherical to rectangular coordinates
Vector3D Vector3D::rectangular(){
    double x= x_*cos(y_)*sin(z_);
    double y = x_*sin(y_)*sin(z_);
    double z = x_*cos(z_);
    return Vector3D(x, y, z);
}
