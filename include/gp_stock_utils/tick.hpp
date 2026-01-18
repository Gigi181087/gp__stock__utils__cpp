#ifndef __GP__STOCK__UTILS__TICK_H__
#define __GP__STOCK__UTILS__TICK_H__

#include <cstdint>
#include <chrono>
using std::chrono::system_clock;

class Tick {

    public:
        system_clock::time_point getTimestamp() const;
        int64_t getPrice() const;
        int64_t getVolume() const;
        int64_t getPriceScale() const;

    private:
        system_clock::time_point timestamp;
        int64_t price;
        int64_t volume;
        int64_t priceScale;
};


#endif //__GP__STOCK__UTILS__TICK_H__