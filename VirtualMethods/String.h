#include <iostream>
#include "Array.h"

using namespace std;

class String : public Array {
public:
	String(void);

	String(int n);

	virtual Array operator+(Array& in_arr);
};

