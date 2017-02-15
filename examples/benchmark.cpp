#include "../include/timer.hpp"

#include <iostream>
#include <string>
#include <array>
#include <algorithm>
#include <memory>
#include <iterator>
#include <chrono>

/*
 * Benchmark milion strings allocation and destruction
 */
int main()
{
    rizov::timer<std::chrono::milliseconds> t;
    t.reset();

    {
        constexpr int SIZE = 1000000;
        auto strs = std::make_unique<std::array<std::string, SIZE>>();
        int index { 0 };

        std::generate(std::begin(*strs), std::end(*strs), [&index]() {
            return std::string { "string " + std::to_string(++index) };
        });
    }

    t.stop();
    std::cout << "Duration: " << t.duration() << std::endl;

    return 0;
}
