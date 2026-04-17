#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

/**
 * @brief Sum two integers
 */
int add(int a, int b) {
    return a + b;
}

/**
 * @brief Multiply two integers
 */
int multiply(int a, int b) {
    return a * b;
}

// ================= TESTS =================

TEST_CASE("Testing add function") {
    CHECK(add(2, 3) == 5);
    CHECK(add(-1, 1) == 0);
}

TEST_CASE("Testing multiply function") {
    CHECK(multiply(2, 3) == 6);
    CHECK(multiply(5, 0) == 0);
}