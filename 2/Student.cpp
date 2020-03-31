//
// Created by Amir Yeshurun on 2020-03-31.
//

#include "Student.h"

Student::Student() : name(nullptr), age(0), courses(nullptr), numOfCourses(0) {}

void Student::addCourse(const Course &c) {
    if(numOfCourses == 0) {
        courses = new Course*;
        courses[0] = new Course(c.getName(), c.getGrade());
        ++numOfCourses;
        return;
    }
    Course** tmpCourses = new Course*[numOfCourses + 1];
    //tmpCourses[i] = new Course;
    for(int i = 0; i < numOfCourses; i++)
        tmpCourses[i] = courses[i];
    tmpCourses[numOfCourses] = new Course(c.getName(), c.getGrade());
    ++numOfCourses;
    delete[] courses; //[.........]
    courses = tmpCourses;
}

Student::Student(char *name, int age) {
    this->age = age;
    this ->name = strdup(name);
}

const Course& Student::getCourseAtIndex(int idx) const {
    return *(courses[idx]);
}

Student::~Student() {
    delete[] name;
    for(int i=0; i < numOfCourses; i++)
        delete courses[i];
    delete[] courses;
    cout << "DTOR: Student" << endl;
}



