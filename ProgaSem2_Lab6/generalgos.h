#pragma once

#include "generalgos.cpp"

#include <iterator>

template<class T>
class GreaterThan {
public:
    explicit GreaterThan(T value) : value(value) {
        this->value = value;
    }
    bool operator() (T num)const {
        return num > value;
    }
private:
    T value;
};

template<class InputIt, class UnaryPredicate>
bool None_of(InputIt first, InputIt last, UnaryPredicate p) {
    for (; first != last; ++first) {
        if (p(*first)) {
            return false;
        }
    }
    return true;
}

//IS_SORTED
template<class InputIt, class Compare>
bool Is_sorted(InputIt begin, InputIt end, Compare comp) {
    InputIt first = begin;
    InputIt last = end;

    if (first != last) {
        InputIt next = first;
        while (++next != last) {
            if (!comp(*next)) {
                first = next;
                continue;
            }
            if (*next < *first)
                return false;
            first = next;
        }
    }
    return true;
}

//IS_PALINDROME
template<typename iter, typename obj>
bool isPalindrome(const iter &begin, const iter &end, bool(&func)(obj));