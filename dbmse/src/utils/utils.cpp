#include "../../Include/utils/utils.h"

namespace util {
	template<typename T>
	void swap(T& first, T& second) {
		T tmp = first;
		first = second;
		second = tmp;
	}
}