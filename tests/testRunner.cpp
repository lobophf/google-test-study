#include <iostream>
#include <gtest/gtest.h>
#include "../src/libraryCode.h"

class ValidatorFixture : public testing::TestWithParam<int>{
public:
protected:
	Validator mValidator{5, 10};
};

TEST_P(ValidatorFixture, TestInRange){
	int param = GetParam();
	std::cout << "Param = " << param << "\n";
	bool isInside = mValidator.inRange(param);
	ASSERT_TRUE(isInside);
}

INSTANTIATE_TEST_CASE_P(InRangeTrue, ValidatorFixture, testing::Values(2, 5, 6, 7, 8, 10, 20));

int main(int argc, char **argv){
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
