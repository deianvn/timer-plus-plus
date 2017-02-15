# timer-plus-plus
Simple C++ Benchmark Timer
=======================================================

Introduction
------------
Simple C++ benchmark timer written in C++ using the chrono standard library.

Installation
------------
Just include the timer.hpp header in your application.

Examples
--------
```
    rizov::timer<std::chrono::nanoseconds> t; // create a nanoseconds timer
    t.reset(); // reset the timer to current time
    // Do your calculations
    t.stop(); // calculate duration
    std::cout << t.duration() << std::endl; // print the duration on the screen
```

License
-------
```
    Copyright [2017] [Deyan Rizov]

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
```
