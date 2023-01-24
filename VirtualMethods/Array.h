#include <iostream>

using namespace std;

class Array {
public:
    static const int size = 15;
    unsigned char *arr;
    int len;

public:
    Array();

    Array(int n);

    int length() {
        return len;
    }

    unsigned char& operator [] (const int index);

    friend ostream& operator << (ostream& out, Array& a);

    virtual Array operator + (Array& in_arr);

    virtual void sum(const Array& y) {
        int k = 0;
        for (int i = 0; i < len; i++) {
            arr[i] = arr[i] + y.arr[i] - '0' + k;
            k = 0;
            if (arr[i] > '9') {
                arr[i] -= 10;
                k++;
            }
        }
        if (k == 1)
            arr[len] = '1';
    }
};