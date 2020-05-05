//
// Created by Amir Yeshurun on 2020-05-05.
//

#ifndef OOP_STRING_H
#define OOP_STRING_H

#include "IndexOutOfBounds.h"
#include <ostream>

class String {
private:
    char* data;
    int size;
public:
    String(const char* newData);
    String(const String& str);

    const String& operator=(const String& str);
    char& operator[](int idx);
    String operator+(const String& str) const;
    String operator-(const String& str) const;
    void operator+=(const String& str);
    void operator-=(const String& str);

    String concat(const String& str) const;
    String& append(const String& str);

    friend std::ostream& operator<<(std::ostream& out, const String& str);
};



#endif //OOP_STRING_H
