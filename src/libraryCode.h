#ifndef VALIDATOR_H
#define VALIDATOR_H

class Validator{
public:
	Validator(int low, int high);
	bool inRange(int valueToTest);
private:
	int mLow, mHigh;
};

#endif
