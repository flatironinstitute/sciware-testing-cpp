#include <sample.hpp>

std::vector<double> add_vectors(std::vector<double> &v1, std::vector<double> &v2)
{
    // Check inputs
    if (v1.size() != v2.size())
    {
        throw std::invalid_argument("There's a mismatch in vector size" + std::to_string(v1.size()) + "!=" + std::to_string(v2.size()));
    }

    //
    // Solution 1
    //

    // Add the vectors
    std::vector<double> new_vector(v1.size());

    for (size_t i = 0; i < v1.size(); i++)
    {
        new_vector[i] = v1[i] + v2[i];
    }

    //
    // Solution 2
    //

    // std::vector<double> new_vector = v1;
    // std::transform(new_vector.begin(), new_vector.end(), v2.begin(), new_vector.begin(), std::plus<double>());

    return new_vector;
}
