//
// Created by tukat on 08.05.2020.
//

#ifndef PROGASEM2_LAB3_HEADER2_H
#define PROGASEM2_LAB3_HEADER2_H

using namespace std;

// Number 6
class IntArray {
public:
    IntArray();

    explicit IntArray(int size);

    IntArray(IntArray const &prevArray);

    ~IntArray();

    int getSize() const;

    int &operator[](int idx);

    IntArray operator+(IntArray array2);

    bool operator==(const IntArray &array2);

    bool operator>(const IntArray &array2);

    bool operator<(const IntArray &array2);

    bool operator!=(const IntArray &array2);

    explicit operator std::string();

private:
    int *array;
    int size;
};

#endif //PROGASEM2_LAB3_HEADER2_H
