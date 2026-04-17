#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

/**
 * \brief Adds two integers
 * \param a first number
 * \param b second number
 * \return sum of a and b
 */
int add(int a, int b) {
    return a + b;
}

/**
 * \brief Multiplies two integers
 * \param a first number
 * \param b second number
 * \return multiplication result
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