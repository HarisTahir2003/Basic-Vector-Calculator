#include <iostream>
#include "task3.h"
using namespace std;

// Constructor implementation
Point3D::Point3D(double x, double y, double z)
{ 
    this->x = x;
    this->y = y;
    this->z = z;
}

// Getter methods implementation
double Point3D::getX() const  {return x;}
double Point3D::getY() const  {return y;}
double Point3D::getZ() const  {return z;}

// Setter methods implementation
void Point3D::setX(double x)  {this->x = x;}
void Point3D::setY(double y)  {this->y = y;}
void Point3D::setZ(double z)  {this->z = z;}

// Operator overloading implementations
Point3D Point3D::operator+(const Point3D &other) const
{
    Point3D temp;
    temp.x = x + other.x;
    temp.y = y + other.y;
    temp.z = z + other.z;

    return temp;
}

Point3D Point3D::operator-(const Point3D &other) const
{
    Point3D temp;
    temp.x = x - other.x;
    temp.y = y - other.y;
    temp.z = z - other.z;

    return temp;
}

Point3D Point3D::operator*(double scalar) const
{
    Point3D temp;
    temp.x = x * scalar;
    temp.y = y * scalar;
    temp.z = z * scalar;

    return temp;
}

ostream &operator<<(ostream &os, const Point3D &point)
{
    os << '(' << point.x << ", " << point.y << ", " << point.z << ')';
    return os;
}

istream &operator>>(istream &is, Point3D &point)
{
    cout << "Enter x coordinate of vector: ";
    is >> point.x;
    cout << "Enter y coordinate of vector: ";
    is >> point.y;
    cout << "Enter z coordinate of vector: ";
    is >> point.z;

    return is;
}

// Method to calculate the distance between two points
double Point3D::calculateDistance(const Point3D &other) const
{
    double distance = sqrt(pow((x - other.x), 2) + pow((y - other.y), 2) + pow((z - other.z),2));
    return distance;
}

// Additional methods implementations
double Point3D::magnitude() const
{
    double magnitude = sqrt(pow(x,2) + pow(y,2) + pow(z,2));
    return magnitude;
}

Point3D Point3D::unit() const
{
    double magnitude1 = magnitude();
    if (magnitude1 == 0) 
    {
        return Point3D();
    }

    Point3D temp;
    temp.x = x/magnitude1;
    temp.y = y/magnitude1;
    temp.z = z/magnitude1;

    return temp;
}

bool Point3D::parallel(const Point3D &other) const
{
    double crossX = (y * other.z) - (z * other.y);
    double crossY = (z * other.x) - (x * other.z);
    double crossZ = (x * other.y) - (y * other.x);
    
    if ((crossX == 0) && (crossY == 0) && (crossZ == 0))
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Point3D::orthogonal(const Point3D &other) const
{
    double dotX = x * other.x;
    double dotY = y * other.y;
    double dotZ = z * other.z;
    double dot = dotX + dotY + dotZ;
    if (dot == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void test(const string &testName, bool condition)
{
    cout << testName << ": " << (condition ? "Passed" : "Failed") << endl;
}

int main()
{
    // Test cases
    Point3D p1(1, 2, 3);
    Point3D p2(4, 5, 6);
    Point3D p3(-1, -2, -3);

    // Addition
    Point3D sum = p1 + p2;
    test("Sum Test", sum.getX() == 5 && sum.getY() == 7 && sum.getZ() == 9);

    // Subtraction
    Point3D diff = p1 - p2;
    test("Difference Test", diff.getX() == -3 && diff.getY() == -3 && diff.getZ() == -3);

    // Scalar multiplication
    Point3D scaled = p1 * 2.5;
    test("Scalar Multiplication Test", scaled.getX() == 2.5 && scaled.getY() == 5 && scaled.getZ() == 7.5);

    // Distance calculation
    double distance = p1.calculateDistance(p2);
    test("Distance Calculation Test", distance == sqrt(27));

    // Magnitude calculation
    double mag = p1.magnitude();
    test("Magnitude Calculation Test", mag == sqrt(14));

    // Unit vector
    Point3D unitVec = p1.unit();
    test("Unit Vector Test", unitVec.getX() == 1 / sqrt(14) && unitVec.getY() == sqrt(2 / 7.0) && unitVec.getZ() == 3 / sqrt(14));

    // Parallel check
    bool isParallel = p1.parallel(p2);
    test("Parallel Check Test", !isParallel);

    // Orthogonal check
    bool isOrthogonal = p1.orthogonal(p3);
    test("Orthogonal Check Test", isOrthogonal);

    return 0;
}