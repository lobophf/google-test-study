#include <iostream>
#include <gtest/gtest.h>
#include <string.h>

void toUpper(char *inputString){
	for(unsigned i = 0; i < strlen(inputString); i++){
		inputString[i] = toupper(inputString[i]);
	}
}

TEST(ToUpperTest, BasicTest){
	
	//Arange
	char inputString[] = "Hello world";

	//Act
	toUpper(inputString);

	//Assert
	ASSERT_EQ("HELLO WORLD", inputString); // This does not work as expected.

}

int main(int argc, char *argv[]){
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
