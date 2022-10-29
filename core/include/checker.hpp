#pragma once

#include <map>
#include <optional>
#include <cstdint>

#include "checkerCords.hpp"

namespace checkers
{
    enum class PawnType : uint8_t
    {
        Man,
        King
    };

    enum class PlayerType : uint8_t
    {
        White,
        Dark
    };

    struct Pawn
    {
        PawnType type;
        PlayerType ownedByPlayer;
    };

    struct CheckerField
    {
        std::optional<Pawn> pawn {};
    };

    class CheckerState
    {
    public:

    protected:
        std::array<CheckerField,50> state;
    };
}