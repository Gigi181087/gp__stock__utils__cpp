#ifndef __GP__STOCK__UTILS__TICK_H__
#define __GP__STOCK__UTILS__TICK_H__

#include <cstdint>
#include <chrono>

using std::chrono::system_clock;

namespace GP
{
    namespace STOCK
    {
        namespace UTILS
        {
            struct Tick
            {
                system_clock::time_point timestamp;
                int64_t price;
                int64_t volume;
                int64_t priceScale;
            };
        }
    }
}

#endif //__GP__STOCK__UTILS__TICK_H__