#pragma once

#include <cstdint>

namespace checkers
{
    class CheckerCords
    {
    public:
        CheckerCords(uint8_t asOfficialNotation);

        uint8_t getAsOfficialNotation();

        bool operator< (const CheckerCords& other);
        bool operator==(const CheckerCords& other);

    protected:
        uint8_t asOfficialNotation;
    };
}