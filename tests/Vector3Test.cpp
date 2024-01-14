#include "Vector3.h"

int vec_test_1() {
	Vector3 v1;
	Vector3 v2(1.2, 33.2, 2319.232);
	if (v1.d0() != 0 || v1.d1() != 0 || v1.d1() != 0) {
		return -1;
	}
	if (v1.d0() != 1.2 || v1.d1() != 33.2 || v1.d2() != 2319.232) {
		return -1;
	}

	return 0;
}
int main() {
	vec_test_1();
}