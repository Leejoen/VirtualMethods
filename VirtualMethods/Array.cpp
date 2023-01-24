#include "Array.h"

Array::Array():len(0), arr(NULL){}

Array::Array(int n) : len(n) {
	arr = new unsigned char[n];
	for (int index = 0; index < n; index++) {
		arr[index] = 0;
	}
}

unsigned char& Array::operator[] (const int index) {
	unsigned char ch = '\0';
	if (index < 0 || index > size)
		return ch;
	return arr[index];
}

ostream& operator << (ostream& out, Array& a) {
	for (int index = 0; index < a.len; index++) {
		out << (int)a.arr[index] << ",";
	}
	out << endl;
	return out;
}

Array Array::operator + (Array& in_arr) {
	int max_len = max(length(), in_arr.length());
	Array ret(max_len);

	int min_len = min(length(), in_arr.length());
	for (int index = 0; index < max_len; index++) {
		ret[index] = (index < min_len) ? arr[index] + in_arr.arr[index] : ((min_len == length()) ? in_arr.arr[index] : arr[index]);
	}
	return ret;
}
