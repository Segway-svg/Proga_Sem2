#pragma once

#include "generalgos.cpp"

#include <iterator>

template<typename iter, typename object>
bool all_of(const iter &begin, const iter &end, bool (&func)(object));

template<typename iter, typename object>
bool is_sorted(const iter &begin, const iter &end, bool (&func)(object, object));

template<typename iter, typename obj>
bool isPalindrome(const iter &begin, const iter &end, bool(&func)(obj));