#ifndef PROGASEM2_LAB7_ITERATOR_H
#define PROGASEM2_LAB7_ITERATOR_H

#include <iostream>
#include <algorithm>
#include <iterator>
#include <string>

template<typename T>
class Iterator : public std::iterator<std::random_access_iterator_tag, T> {
public:
    using difference_type = typename std::iterator<std::random_access_iterator_tag, T>::difference_type;

    Iterator(T *buffer, size_t &_capacity, int &_start, int &_end, int _position) {
        data = buffer;
        capacity = _capacity;
        start = _start;
        end = _end;
        position = _position;
    }

            difference_type operator-(const Iterator &it) const {
        Iterator iterator = *this;
        iterator.position -= it.position;
        return *iterator;
    }

    difference_type operator+(const Iterator &it) const {
        Iterator iterator = *this;
        iterator.position += it.position;
        return *iterator;
    }

    Iterator operator+(const int &_pos) const {
        Iterator iterator = *this;
        iterator.position = (position + _pos) % capacity;
        return iterator;
    }

    Iterator operator-(const int &_pos) const {
        Iterator iterator = *this;
        iterator.position = (position + capacity - _pos) % capacity;
        return iterator;
    }

    Iterator operator++() {
        this->position++;
        return *this;
    }

    Iterator operator++(int) {
        Iterator tmp(*this);
        operator++();
        return tmp;
    }

    Iterator operator--() {
        this->position--;
        return *this;
    }

    Iterator operator--(int) {
        Iterator tmp(*this);
        operator--();
        return tmp;
    }

    typename Iterator::reference operator*() const {
        return data[position % capacity];
    }

    bool operator==(const Iterator &rhs) const {
        return static_cast<const std::iterator<std::random_access_iterator_tag, T> &>(*this) ==
               static_cast<const std::iterator<std::random_access_iterator_tag, T> &>(rhs) &&
               data == rhs.data &&
               position == rhs.position &&
               start == rhs.start &&
               end == rhs.end &&
               capacity == rhs.capacity;
    }

    bool operator!=(const Iterator &rhs) const {
        return !(rhs == *this);
    }

    bool operator<(const Iterator &rhs) const {
        if (static_cast<const std::iterator<std::random_access_iterator_tag, T> &>(*this) <
            static_cast<const std::iterator<std::random_access_iterator_tag, T> &>(rhs))
            return true;
        if (static_cast<const std::iterator<std::random_access_iterator_tag, T> &>(rhs) <
            static_cast<const std::iterator<std::random_access_iterator_tag, T> &>(*this))
            return false;
        if (data < rhs.data)
            return true;
        if (rhs.data < data)
            return false;
        if (position < rhs.position)
            return true;
        if (rhs.position < position)
            return false;
        if (start < rhs.start)
            return true;
        if (rhs.start < start)
            return false;
        if (end < rhs.end)
            return true;
        if (rhs.end < end)
            return false;
        return capacity < rhs.capacity;
    }

    bool operator>(const Iterator &rhs) const {
        return rhs < *this;
    }

    bool operator<=(const Iterator &rhs) const {
        return !(rhs < *this);
    }

    bool operator>=(const Iterator &rhs) const {
        return !(*this < rhs);
    }

private:
    T *data;
    int position;
    int start;
    int end;
    size_t capacity;
};

#endif //PROGASEM2_LAB7_ITERATOR_H
