#include "gtest/gtest.h"
#include "../../core/include/checkerCords.hpp"

TEST(CheckerCords, CreatedInOfficialNotationContainSameValue) {
    uint8_t testedOfficialPos = 12;

    checkers::CheckerCords Cords(testedOfficialPos);

    ASSERT_EQ(Cords.getAsOfficialNotation(),testedOfficialPos);
}

TEST(CheckerCords, CartesianToOfficalNotation) {

    //ASSERT_EQ(Cords.getAsOfficialNotation(),testedOfficialPos);
}