#include "Header.h"

int normOfOPT() {
    std::time_t t = std::time(nullptr);
    std::tm currentTime;
    localtime_s(&currentTime, &t);

    int currentMonth = currentTime.tm_mon;
    int monthsSinceSeptember;
    
    if (currentMonth > SeptemberNumber)
        monthsSinceSeptember = currentMonth - SeptemberNumber;
    else if (currentMonth < JulyNumber)
        monthsSinceSeptember = currentMonth + DifferenceForStartOfYear;
    else
        return 0;
    return 4 * monthsSinceSeptember;
}
