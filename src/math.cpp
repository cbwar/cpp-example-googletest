#include <vector>
#include "math.h"

namespace math
{
    double sum(const std::vector<double>& v)
    {
        double sum = 0;
        for (double d : v)
        {
            sum += d;
        }
        return sum;
    }
} // namespace math