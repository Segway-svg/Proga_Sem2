#include <iostream>
#include <iterator>
#include <vector>
#include "generalgos.h"
#include "Vector2D.h"

using namespace std;

bool all_of_check(int x) {
    return x != 2;
}

bool is_sorted_check(int x, int y) {
    return x < y;
}

bool foo(int x) {
    return x > 0;
}

template<typename T>
ostream &operator<<(ostream &os, const vector<T> &c) {
    os << "{";
    for (auto it = c.begin(); it != c.end(); it = next(it)) {
        os << *it;
        if (next(it) != c.end())
            os << ", ";
    }
    os << "}";
    return os;
}

int main() {
    Vector2D(1, 2);
    Vector2D(5, 3);

    std::vector<Vector2D> a{{1,  2},
                            {10, 7},
                            {3,  2.5}};
    std::vector<Vector2D> p{{0, 0},
                            {1, 1},
                            {0, 0}};
    std::vector<int> arr = {1, 2, 1};


    std::cout << ((all_of(arr.begin(), arr.end(), all_of_check)) ? "TRUE" : "FALSE") << std::endl;
    std::cout << ((is_sorted(arr.begin(), arr.end(), is_sorted_check)) ? "TRUE" : "FALSE") << std::endl;

    vector<int> vi1{1, 1, 1};
    cout << "Is palindrome:" << endl;
    cout << vi1 << ": " << isPalindrome(vi1.begin(), vi1.end(), foo) << endl;
    cout << endl;

    return 0;
}