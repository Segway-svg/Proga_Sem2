#include <iterator>

template<typename iter, typename object>
bool all_of(const iter &begin, const iter &end, bool (&func)(object)) {
    for (auto it = begin; it != end; it = std::next(it)) {
        if (!func(*it)) {
            return false;
        }
    }
    return true;
}

template<typename iter, typename object>
bool is_sorted(const iter &begin, const iter &end, bool (&func)(object, object)) {
    iter prev = begin;
    for (auto it = next(begin); it != end; it = std::next(it)) {
        if (!func(*prev, *it)) {
            return false;
        }
    }
    return true;
}

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
