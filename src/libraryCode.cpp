#include "libraryCode.h"

Validator::Validator(int low, int high) : mLow{low}, mHigh{high}{
}

bool Validator::inRange(int valueToTest){
	return mLow <= valueToTest && valueToTest <= mHigh;
}
