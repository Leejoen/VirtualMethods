#include <iostream>
#include "Array.h"

using namespace std;

class BitString : public Array {
public:
	BitString(void);

	BitString(int n);

	virtual Array operator+(Array& in_arr);
};

