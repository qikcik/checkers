#pragma once

#include "checker.hpp"
#include <memory>


namespace checkers
{
    class CheckersInteractor
    {
    public:
    protected:
        PlayerType player;
        std::shared_ptr<CheckerState> checkerState;
    };
}