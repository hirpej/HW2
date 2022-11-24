#include "iostream"
#include "chrono"
#include "math.h"

// make random number between -1 and 1
double makeRandomNumber() {
    auto now = std::chrono::high_resolution_clock::now();
    srand(now.time_since_epoch().count());
    // std::cout << rand();
    return std::pow(-1,rand() % 2) * rand() / RAND_MAX;
}