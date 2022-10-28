#include "gtest/gtest.h"
#include "../../core/gameRepresentation/checkerCords.hpp"

TEST(CheckerCords, CreatedInOfficialRepresentationContainValidRepresentation) {
    uint8_t testedOfficialPos = 12;

    checkers::CheckerCords Cords(testedOfficialPos);

    ASSERT_EQ(Cords.getAsOfficialNotation(),testedOfficialPos);
}
