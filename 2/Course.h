//
// Created by Amir Yeshurun on 2020-03-31.
//

#ifndef OOP_COURSE_H
#define OOP_COURSE_H

#include <string>
#include <iostream>

using namespace std;


class Course {
private:
    char* courseName;
    int grade;
public:
    Course();
    Course(char* newName, int newGrade);
    void setName(char* newName);
    void setGrade(int newGrade);
    char* getName() const;
    int getGrade() const;
    ~Course();
};


#endif //OOP_COURSE_H
