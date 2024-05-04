//
// Copyright (c) 2024 Semyon Hoyrish
//

#include "GameFieldScene.h"
#include "../GameObjects/HandCard.h"


void GameFieldScene::OnLoad() {
    Scene::OnLoad();

    AddGameObject(
            new HandCard(0)
            );

}

void GameFieldScene::Update(const Time time) {
    Scene::Update(time);

}
