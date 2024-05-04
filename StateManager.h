//
// Copyright (c) 2024 Semyon Hoyrish
//

#ifndef COLLECTIBLECARDGAME_STATEMANAGER_H
#define COLLECTIBLECARDGAME_STATEMANAGER_H


#include <cstdint>
#include <vector>
#include <map>
#include "Basics/Vector2.h"

class StateManager {
public:
    static uint16_t WINDOW_WIDTH;
    static uint16_t WINDOW_HEIGHT;
    static const uint16_t HAND_SIZE = 7;
    static std::map<uint16_t, Vector2_f32> CARD_HAND_POSITION_BY_INDEX;
    static const uint32_t CARD_HAND_LAYER = 10;

    static void Init();

    static uint16_t GetFreeHandIndex();

    static void FreeHandIndex(uint16_t index);

    static bool TakeHandIndex(uint16_t index);

private:
    static std::vector<bool> handIndexes;
};


#endif //COLLECTIBLECARDGAME_STATEMANAGER_H
