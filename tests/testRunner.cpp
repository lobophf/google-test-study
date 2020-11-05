#include <iostream>
#include <gtest/gtest.h>
#include "../src/libraryCode.h"

class ValidatorFixture : public testing::TestWithParam<std::tuple<int, bool> >{
public:
protected:
	Validator mValidator{5, 10};
};

TEST_P(ValidatorFixture, TestInRange){
	std::tuple<int, bool> myTuple = GetParam();
	int param = std::get<0>(myTuple);
	bool expectedValue = std::get<1>(myTuple);

	std::cout << "Param = " << param << " ExpectedValue = " << expectedValue << "\n";
	
	bool isInside = mValidator.inRange(param);
	ASSERT_EQ(expectedValue, isInside);
}

INSTANTIATE_TEST_CASE_P(InRangeTrue, ValidatorFixture, testing::Values(std::make_tuple(2, false), 
								       std::make_tuple(5, true), 
								       std::make_tuple(6, true), 
								       std::make_tuple(7, true), 
								       std::make_tuple(10, true), 
								       std::make_tuple(20, false))
								      );

int main(int argc, char **argv){
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
