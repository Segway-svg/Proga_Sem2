#include <iterator>

template<typename iter, typename obj>
bool isPalindrome(const iter &begin, const iter &end, bool(&func)(obj)) {
    for (auto itLeft = begin, itRight = prev(end); itLeft != end, itRight != begin;
         itLeft = next(itLeft), itRight = prev(itRight)) {
        if (func(*itLeft) ^ func(*itRight)) {
            return false;
        }
    }
    return true;
}
