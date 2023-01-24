#include "BitString.h"

BitString::BitString() : Array() {}

BitString::BitString(int n) : Array(n) {}

Array BitString::operator+(Array& in_arr) {
	int max_len = max(length(), in_arr.length());
	Array ret(max_len);
	int min_len = min(length(), in_arr.length());
	for (int index = 0; index < max_len; index++) {
		ret[index] = (index < min_len) ? arr[index] + in_arr.arr[index] : ((min_len == length()) ? in_arr.arr[index] : arr[index]);

	}
	return ret;
}
