//
// Copyright (c) 2024 Semyon Hoyrish
//

#include "HandCard.h"
#include "../StateManager.h"
#include "SceneManager/SceneManager.h"

HandCard::HandCard(uint32_t cardId) : Force2D::GameObject(POSITION_BEFORE_HAND, SIZE, StateManager::CARD_HAND_LAYER),
                                      cardId(cardId) {
    cardInfo = cardInfoById.at(cardId);

    costText = new Force2D::UI::UI_Text("", costFontSize, costPos, costColor);
    attackText = new Force2D::UI::UI_Text("", attackFontSize, attackPos, attackColor);
    hpText = new Force2D::UI::UI_Text("", hpFontSize, hpPos, hpColor);
    nameText = new Force2D::UI::UI_Text(cardInfo.name, nameFontSize, namePos, nameColor);
    descriptionText = new Force2D::UI::UI_Text(cardInfo.description, descriptionFontSize, descriptionPos,
                                               descriptionColor);

    Force2D::SceneManager::SceneManager::GetCurrent()->AddUIComponent(costText);
    Force2D::SceneManager::SceneManager::GetCurrent()->AddUIComponent(attackText);
    Force2D::SceneManager::SceneManager::GetCurrent()->AddUIComponent(hpText);
    Force2D::SceneManager::SceneManager::GetCurrent()->AddUIComponent(nameText);
    Force2D::SceneManager::SceneManager::GetCurrent()->AddUIComponent(descriptionText);

    image = new Force2D::GameObject({0, -SIZE.y / 4}, {SIZE.x - 10, SIZE.y / 2 - 10});
    image->texture_filename = cardInfo.handTexture;
    AddChild(image);
}

void HandCard::Update(const Time time) {
    GameObject::Update(time);

    costText->SetText(std::to_string(cardInfo.actualCost));
    attackText->SetText(std::to_string(cardInfo.actualAttack));
    hpText->SetText(std::to_string(cardInfo.actualHealth));

    costText->SetPosition(GetWorldPosition() + costPos);
    attackText->SetPosition(GetWorldPosition() + attackPos);
    hpText->SetPosition(GetWorldPosition() + hpPos);
    nameText->SetPosition(GetWorldPosition() + namePos);
    descriptionText->SetPosition(GetWorldPosition() + descriptionPos);
}

Vector2_f32 HandCard::POSITION_BEFORE_HAND = {
        StateManager::WINDOW_WIDTH - SIZE.x,
        StateManager::WINDOW_HEIGHT - SIZE.y
};
