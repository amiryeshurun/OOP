//
// Created by Amir Yeshurun on 2020-03-31.
//

#include "Course.h"

Course::Course() : courseName(nullptr), grade(0) {}

Course::Course(char *newName, int newGrade) {
    courseName = strdup(newName); // allocate + copy
    grade = newGrade;
}

char* Course::getName() const {
    return courseName;
}

int Course::getGrade() const {
    return grade;
}

void Course::setName(char *newName) {
    courseName = strdup(newName);
}

void Course::setGrade(int newGrade) {
    grade = newGrade;
}

Course::~Course() {
    delete[] courseName;
    cout << "DTOR: Course" << endl;
}
