#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include <sample.hpp>
#include <random>

TEST_CASE("Test Adding Empty Vectors")
{
    std::vector<double> x(0);
    auto y = add_vectors(x, x);

    // Check that we got the right answer
    CHECK(y.size() == 0);
}

TEST_CASE("Test Adding Singleton Vectors")
{
    std::vector<double> x = {2};
    std::vector<double> y = {3};
    auto z = add_vectors(x, y);

    // Check that we got the right answer
    CHECK(z.size() == 1);
    CHECK(z[0] == 5);

    // Check that we didn't modify the original vectors
    CHECK(x[0] == 2);
    CHECK(y[0] == 3);
}

TEST_CASE("Test Adding Vectors")
{
    // Set up RNG
    // Setting the seed (rather than a random device) guarantees that the same sequence will be
    // generated regardless of platform
    const long int seed = 10;
    std::default_random_engine eng(seed);
    std::uniform_real_distribution<double> distr(10, 100);

    // Set up vector
    const int N = 100;
    std::vector<double> v1(N);
    std::generate(v1.begin(), v1.end(), [&distr, &eng]() { return distr(eng); });

    // Check than if we add it to the negative version of itself, things cancel
    std::vector<double> v2 = v1;
    std::for_each(v2.begin(), v2.end(), [](double &d) { d *= -1; });
    auto v3 = add_vectors(v1, v2);
    for (auto v3_i : v3)
    {
        CHECK(v3_i == 0);
    }
}

TEST_CASE("Test Adding Vectors with Bad Args")
{
    // Setup
    const int N = 10, M = 100;
    std::vector<double> v1(N);
    std::vector<double> v2(M);

    // Generally check that it throws an exception
    REQUIRE_THROWS(add_vectors(v1, v2));

    // Check that it throws a specific type of exception
    REQUIRE_THROWS_AS(add_vectors(v1, v2), std::invalid_argument);
}
