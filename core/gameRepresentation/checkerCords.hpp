#pragma once

#include <cstdint>

namespace checkers
{
    class CheckerCords
    {
    public:
        CheckerCords(uint8_t asOfficialNotation);
        CheckerCords(uint8_t asCartesianX,uint8_t asCartesianY);

        uint8_t getAsOfficialNotation();
        uint8_t getAsCartesianX();
        uint8_t getAsCartesianY();

    protected:
        uint8_t asOfficialNotation;
    };
}