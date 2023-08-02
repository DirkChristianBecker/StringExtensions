#include <StringExtensions.h>
#include "unit_test_framework.h"

#include <string>
#include <iostream>

TEST(EndsWithTest) 
{
    ASSERT_TRUE(StringExtensions::EndsWith("Test", "st"));
    ASSERT_FALSE(StringExtensions::EndsWith("Test", "St"));
    ASSERT_FALSE(StringExtensions::EndsWith("Test", "esT"));
    ASSERT_FALSE(StringExtensions::EndsWith("Test", "esttt"));
}

TEST(StartsWith) 
{
    ASSERT_TRUE(StringExtensions::StartsWith("Test", "Tes"));
    ASSERT_FALSE(StringExtensions::StartsWith("Test", "te"));
    ASSERT_FALSE(StringExtensions::StartsWith("Test", "Tests"));
}

// DO NOT REMOVE
// Generates a main() function that runs all of your tests.
// Note: Some versions of g++ incorrectly produce a warning about empty
// statements when using the -pedantic flag. Therefore, we will not put
// a semicolon after the TEST_MAIN() macro.
TEST_MAIN()
