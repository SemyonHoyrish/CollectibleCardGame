//
// Copyright (c) 2024 Semyon Hoyrish
//

#ifndef COLLECTIBLECARDGAME_CARDINFO_H
#define COLLECTIBLECARDGAME_CARDINFO_H

#include <cstdint>
#include <string>
#include <map>

enum class CardType {
    Minion,
    Spell,
};

struct CardInfo {
    std::string name;
    std::string description;

    CardType type;

    uint32_t baseCost;
    uint32_t baseHealth;
    uint32_t baseAttack;

    uint32_t actualCost;
    uint32_t actualHealth;
    uint32_t actualAttack;

    std::string handTexture;
    std::string groundTexture;
};

const std::map<uint32_t, CardInfo> cardInfoById = {
        {0, {"Test card", "no desc", CardType::Minion, 4, 2, 6, 4, 2, 6, "assets/testing.png"}},
};

#endif //COLLECTIBLECARDGAME_CARDINFO_H
