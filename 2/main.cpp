//
// Created by Amir Yeshurun on 2020-03-31.
//

#include "Student.h"
#include <iostream>

using namespace std;

int main()
{
    {
        Course c("calc 2", 70);
    } //DTOR
    cout << "I am after the block" << endl;
}