//
// Created by Amir Yeshurun on 2020-05-05.
//

#include <string.h>
#include "String.h"

String::String(const char *newData) {
    if(newData == nullptr){
        data = "";
        size = 0;
    }
    else {
        data = strdup(newData);
        size = strlen(newData);
    }
}

const String& String::operator=(const String& str) {
    if(this != &str) { // address
        delete[] data;
        size = str.size;
        data = strdup(str.data);
    }
    return *this;
}

String::String(const String& str) {
    data = nullptr;
    *this = str;
}

char &String::operator[](int idx) {
    if(idx >= size)
        throw IndexOutOfBounds();
    return data[idx];
}

String String::operator+(const String& str) const {
    char* tmpStr = new char[size + str.size + 1];
    strcpy(tmpStr, data);
    strcat(tmpStr, str.data);
    return tmpStr;
}

String String::operator-(const String& str) const {
    if(size < str.size)
        return nullptr;
    if(!strcmp(data + (size - str.size) * sizeof(char), str.data)) {
        char* newData = new char[size - str.size + 1];
        for(int i = 0; i < size - str.size; i++)
            newData[i] = data[i];
        newData[size - str.size] = '\0';
        return newData;
    }
    return nullptr;
}

void String::operator+=(const String &str) {
    *this = *this + str;
}

void String::operator-=(const String &str) {
    *this = *this - str;
}

String String::concat(const String &str) const {
    return *this + str;
}

String& String::append(const String &str) {
    *this += str;
    return *this;
}


