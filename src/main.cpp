#include <iostream>
#include <vector>
#include "math.h"

void usage(std::string cmd)
{
    std::cout << "Usage: " << cmd << " <number> <number> ..." << std::endl;
}

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        usage(argv[0]);
        return 1;
    }

    // Read the command line arguments as doubles
    // If the string is not a valid double, it will be ignored
    // If the string is a valid double, it will be added to the vector
    std::vector<double> v;
    for (int i = 1; i < argc; i++)
    {
        try
        {
            v.push_back(std::stod(argv[i]));
        }
        catch (std::invalid_argument &e)
        {
            std::cerr << "Invalid argument: " << argv[i] << std::endl;
        }
    }

    // Sum the vector with math.cpp and print the result
    double result = math::sum(v);

    // Print the result
    std::cout << "The sum is: " << result << std::endl;

    return 0;
}