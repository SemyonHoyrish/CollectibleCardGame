//
// Copyright (c) 2024 Semyon Hoyrish
//

#include "StateManager.h"
#include "GameObjects/HandCard.h"

void StateManager::Init() {
    handIndexes = std::vector<bool>(HAND_SIZE, false);
}

uint16_t StateManager::GetFreeHandIndex() {
    for (uint16_t i = 0; i < HAND_SIZE; i++) {
        if (!handIndexes[i]) return i;
    }
    return -1;
}

void StateManager::FreeHandIndex(uint16_t index) {
    handIndexes[index] = false;
}

bool StateManager::TakeHandIndex(uint16_t index) {
    if (handIndexes[index]) return false;
    handIndexes[index] = true;
    return true;
}


uint16_t StateManager::WINDOW_WIDTH = 1280;
uint16_t StateManager::WINDOW_HEIGHT = 720;
std::map<uint16_t, Vector2_f32> StateManager::CARD_HAND_POSITION_BY_INDEX = {
        {0, {10.0f, 10.0f}},
};
std::vector<bool> StateManager::handIndexes;

