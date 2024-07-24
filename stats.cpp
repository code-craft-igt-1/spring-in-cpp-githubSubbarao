#include "stats.h"
#include <vector>
#include <algorithm>

Statistics::Stats Statistics::ComputeStatistics(const std::vector<float> &numbers ) {
    Stats statResult;

    if (numbers.empty())
    {
        statResult.min = NAN;
        statResult.max = NAN;
        statResult.average = NAN;
    }
    else
    {
        //Implement statistics here
        statResult.min = *std::min_element(numbers.begin(), numbers.end());
        statResult.max = *std::max_element(numbers.begin(), numbers.end());
        double sum = 0.0;
        for (double number : numbers) {
            sum += number;
        }
        statResult.average = sum / numbers.size();
    }

    return statResult;
}
