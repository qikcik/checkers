#include "checkerCords.hpp"

using namespace checkers;

CheckerCords::CheckerCords(uint8_t asOfficialNotation)
: asOfficialNotation(asOfficialNotation)
{

}

uint8_t CheckerCords::getAsOfficialNotation()
{
    return asOfficialNotation;
}

bool CheckerCords::operator<(const CheckerCords &other)
{
    return asOfficialNotation < other.asOfficialNotation;
}

bool CheckerCords::operator==(const CheckerCords &other)
{
    return asOfficialNotation == other.asOfficialNotation;
}


