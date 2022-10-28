#include "checkerCords.hpp"

using namespace checkers;

CheckerCords::CheckerCords(uint8_t asOfficialNotation)
: asOfficialNotation(asOfficialNotation)
{

}

CheckerCords::CheckerCords(uint8_t asCartesianX, uint8_t asCartesianY)
{

}

uint8_t CheckerCords::getAsOfficialNotation()
{
    return asOfficialNotation;
}

uint8_t CheckerCords::getAsCartesianX()
{
    return 0;
}

uint8_t CheckerCords::getAsCartesianY()
{
    return 0;
}
