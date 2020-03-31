//
// Created by Amir Yeshurun on 2020-03-31.
//

#ifndef OOP_STUDENT_H
#define OOP_STUDENT_H

#include "Course.h"

class Student {
private:
    char* name;
    int age;
    Course** courses;
    int numOfCourses;
public:
    Student();
    Student(char* name, int age);
    void addCourse(const Course& c);
    const Course& getCourseAtIndex(int idx) const;
    ~Student();
};



#endif //OOP_STUDENT_H
