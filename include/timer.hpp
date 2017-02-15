/*
    Copyright 2017 Deyan Rizov

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
*/

#ifndef RIZOV_TIMER_HPP
#define RIZOV_TIMER_HPP

#include <chrono>

namespace rizov
{
    /*
     * Simple benchmark timer.
     */
    template<typename T>
    class timer
    {

    public:

        /*
         * Reset the timer start point to current time
         */
        void reset()
        {
            b = Clock::now();
        }

        /*
         * Stop the timer and save end point to current point
         */
        void stop()
        {
            e = std::chrono::high_resolution_clock::now();
            d = e - b;
        }

        /*
         * Get timer duration as template specific type
         */
        auto duration()
        {
            return std::chrono::duration_cast<T>(d).count();
        }

        /*
         * Get the start time
         */
        auto start_time()
        {
            return b;
        }

        /*
         * Get the end time
         */
        auto end_time()
        {
            return e;
        }

    private:

        using Clock = std::chrono::high_resolution_clock;
        std::chrono::high_resolution_clock::time_point b, e;
        std::chrono::high_resolution_clock::duration d;

    };
}
#endif //RIZOV_TIMER_HPP
