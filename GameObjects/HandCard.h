//
// Copyright (c) 2024 Semyon Hoyrish
//

#ifndef COLLECTIBLECARDGAME_HANDCARD_H
#define COLLECTIBLECARDGAME_HANDCARD_H


#include "GameObject/GameObject.h"
#include "../CardInfo.h"
#include "UI/UI_Text.h"

class HandCard : public Force2D::GameObject {
public:
    constexpr static const Vector2_f32 SIZE = {120.0f, 180.0f};
    static Vector2_f32 POSITION_BEFORE_HAND;

    explicit HandCard(uint32_t cardId);

    void Update(const Time time) override;

private:
    const uint32_t cardId;
    CardInfo cardInfo;

    constexpr static const Vector2_f32 costPos = {SIZE.x / 2, -SIZE.y / 2};
    constexpr static const Vector2_f32 attackPos = {-SIZE.x / 2, SIZE.y / 2};
    constexpr static const Vector2_f32 hpPos = {SIZE.x / 2, SIZE.y / 2};
    constexpr static const Vector2_f32 namePos = {0, 10};
    constexpr static const Vector2_f32 descriptionPos = {0, 30};

    static const uint32_t costFontSize = 16;
    static const uint32_t attackFontSize = 16;
    static const uint32_t hpFontSize = 16;
    static const uint32_t nameFontSize = 16;
    static const uint32_t descriptionFontSize = 16;

    constexpr static const Vector4_u8 costColor = {0, 0, 0, 255};
    constexpr static const Vector4_u8 attackColor = {0, 0, 0, 255};
    constexpr static const Vector4_u8 hpColor = {0, 0, 0, 255};
    constexpr static const Vector4_u8 nameColor = {0, 0, 0, 255};
    constexpr static const Vector4_u8 descriptionColor = {0, 0, 0, 255};

    Force2D::UI::UI_Text *costText;
    Force2D::UI::UI_Text *attackText;
    Force2D::UI::UI_Text *hpText;
    Force2D::UI::UI_Text *nameText;
    Force2D::UI::UI_Text *descriptionText;

    Force2D::GameObject *image;
};


#endif //COLLECTIBLECARDGAME_HANDCARD_H
