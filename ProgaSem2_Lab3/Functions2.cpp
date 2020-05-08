//
// Created by tukat on 08.05.2020.
//
#include <iostream>
#include <string>
#include <cstdlib>

#include <cmath>
#include "Header2.h"
// Number 6
IntArray::IntArray() {
    size = 0;
}

IntArray::IntArray(int size) {
    this->size = size;
    array = new int[size];
    for (int i = 0; i < size; i++) {
        array[i] = 0;
    }
}

IntArray::IntArray(IntArray const &prevArray) {
    size = prevArray.getSize();
    array = new int[size];
    for (int i = 0; i < size; i++) {
        array[i] = prevArray.array[i];
    }
}

IntArray::~IntArray() {
    delete[] array;
}

int IntArray::getSize() const {
    return size;
}


int& IntArray::operator [] (int idx) {
    if (idx < size && idx >= 0)
        return array[idx];
    else
        throw out_of_range("Out of range");
}

IntArray IntArray::operator + (IntArray array2) {
    if (size + array2.getSize() > 100)
        throw out_of_range("Array length cannot be more than 100");
    IntArray newArray(size + array2.getSize());
    for (int i = 0; i < size; i++) {
        newArray[i] = array[i];
    }
    for (int i = 0; i < array2.getSize(); i++) {
        newArray[i + size] = array2[i];
    }
    return IntArray(newArray);
}

bool IntArray::operator==(const IntArray &array2) {
    return size == array2.getSize();
}

bool IntArray::operator>(const IntArray &array2) {
    return size > array2.getSize();
}

bool IntArray::operator<(const IntArray &array2) {
    return size < array2.getSize();
}

bool IntArray::operator!=(const IntArray &array2) {
    return size != array2.getSize();
}

IntArray::operator std::string() {
    string result = "[";
    for (int i = 0; i < size - 1; i++) {
        result += to_string(array[i]) + ", ";
    }
    result += to_string(array[size - 1]) + "]";
    return result;
}
