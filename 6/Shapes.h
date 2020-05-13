//
// Created by Amir Yeshurun on 2020-05-12.
//

#ifndef OOP_SHAPES_H
#define OOP_SHAPES_H

#include <string>
#include <iostream>

using namespace std;

class Shape {
private:
    string name;
public:
    Shape(const string& s) : name(s) {}
    string getName() const {
        return name;
    }
    virtual double getArea() const = 0;
    virtual ~Shape(){
        cout << "I am now destroying the part of shape" << endl;
    }
};

class Triangle : public Shape {
private:
    double base;
    double height;
public:
    Triangle(const string& new_name, double new_base, double new_height) : Shape(new_name) {
        base = new_base;
        height = new_height;
    }
    double getBase() const {
        return base;
    }
    virtual double getArea() const {
        return base * height / 2;
    }
    virtual ~Triangle() {
        cout << "I am now destroying Triangle" << endl;
    }
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(const string& new_name, double new_radius) : Shape(new_name) {
        radius = new_radius;
    }
    virtual double getArea() const {
        return radius * radius * 3.14;
    }
};

class Square : public Shape {
private:
    double length;
public:
    Square(const string& new_name, double new_length) : Shape(new_name) {
        length = new_length;
    }
    virtual double getArea() const {
        return length * length;
    }
};

#endif //OOP_SHAPES_H
