#include <iostream>
#include <iterator>
#include <vector>
#include "generalgos.h"
#include "Vector.h"


using namespace std;


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
//NONE_OF
    std::cout << "\t//3. none_of//" << std::endl;
    int num_check;
    std::cout << "Enter the number to check: " << std::endl;
    std::cin >> num_check;
    std::vector<int> container1{0, 1, 2, 3, 4};
    if (None_of(container1.cbegin(), container1.cend(), GreaterThan(num_check))) {
        std::cout << "Greater than " << num_check << " is not" << std::endl;
    } else {
        std::cout << "Greater than " << num_check << " is" << std::endl;
    }
    Vector v1_1(5, 5, 4, 4); //1.41
    Vector v2_1(0, 0, 0, 0); //0
    Vector v3_1(90, 90, 5, 5); //120.2
    Vector v4_1(90, 90, 5, 5); //120.2
    std::vector<Vector> vec_1{v1_1, v2_1, v3_1};
    if (None_of(vec_1.begin(), vec_1.end(), GreaterThan(v4_1))) {
        std::cout << "In VECTOR greater than v4_1 is not" << std::endl;
    } else {
        std::cout << "In VECTOR greater than v4_1 is" << std::endl;
    }
    std::cout << endl;

    // IS_SORTED
    std::cout << "\t//5. is_sorted//" << std::endl;
    int value_check;
    std::cout << "Enter the value to check " << std::endl;
    std::cin >> value_check;
    std::vector<int> container2{0, 5, -10, 10, 11, 12};
    bool res = Is_sorted(container2.begin(), container2.end(), GreaterThan(value_check));
    if (res) {
        std::cout << "Sorted" << std::endl;
    } else {
        std::cout << "Not sorted" << std::endl;
    }
    Vector v1_2(95, 0, 0, 0); //95
    Vector v2_2(-1, 0, -4, 0); //3
    Vector v3_2(90, 90, 5, 5); //120
    Vector v4_2(0, 0, 0, 0); //0
    std::vector<Vector> vec_2{v1_2, v2_2, v3_2};
    bool res_vec = Is_sorted(vec_2.begin(), vec_2.end(), GreaterThan(v2_2));
    if (res_vec) {
        std::cout << "VECTORS sorted" << std::endl;
    } else {
        std::cout << "VECTORS unsorted" << std::endl;
    }


// IS_PALINDROME
    vector<int> vi1{1, 1, 1};
    cout << "Is palindrome:" << endl;
    cout << vi1 << ": " << isPalindrome(vi1.begin(), vi1.end(), foo) << endl;
    cout << endl;

    return 0;
}