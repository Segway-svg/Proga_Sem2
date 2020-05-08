#ifndef PROGA_LAB5_SWAP_H
#define PROGA_LAB5_SWAP_H

#pragma once

template<class T>
void swap(T &a, T &b) {
    T temp(a);
    a = b;
    b = temp;
}

#endif //PROGA_LAB5_SWAP_H
