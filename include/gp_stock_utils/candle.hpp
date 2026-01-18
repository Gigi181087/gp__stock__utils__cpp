#ifndef __GP__STOCK__UTILS__CANDLE_HPP__
#define __GP__STOCK__UTILS__CANDLE_HPP__

#include <chrono>
#include <cstdint>

namespace GP
{
    namespace STOCK
    {
        namespace UTILS
        {

            struct Candle
            {
                std::chrono::system_clock::time_point timestamp;
                int64_t open;
                int64_t high;
                int64_t low;
                int64_t close;
            };
        }
    }
}

#endif //__GP__STOCK__UTILS__CANDLE_HPP__