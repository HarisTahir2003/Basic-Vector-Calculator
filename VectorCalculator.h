#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

class Point3D {
private:
    double x;
    double y;
    double z;

public:
    // Constructor to initialize the point with x, y, and z components
    Point3D(double x = 0.0, double y = 0.0, double z = 0.0);

    // Getter methods to retrieve the x, y, and z components of the point
    double getX() const;
    double getY() const;
    double getZ() const;

    // Setter methods to set the x, y, and z components of the point
    void setX(double x);
    void setY(double y);
    void setZ(double z);

    // Operator overloading for point operations
    Point3D operator+(const Point3D &other) const;
    Point3D operator-(const Point3D &other) const;
    Point3D operator*(double scalar) const;
    friend ostream &operator<<(ostream &os, const Point3D &point);
    friend istream &operator>>(istream &is, Point3D &point);

    // Method to calculate the distance between two points
    double calculateDistance(const Point3D &other) const;

    // Additional methods
    double magnitude() const;
    Point3D unit() const;
    bool parallel(const Point3D &other) const;
    bool orthogonal(const Point3D &other) const;
};