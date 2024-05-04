//
// Copyright (c) 2024 Semyon Hoyrish
//

#ifndef COLLECTIBLECARDGAME_GAMEFIELDSCENE_H
#define COLLECTIBLECARDGAME_GAMEFIELDSCENE_H


#include "SceneManager/Scene.h"

class GameFieldScene : public Force2D::SceneManager::Scene {
public:
    void OnLoad() override;
    void Update(const Time time) override;
};


#endif //COLLECTIBLECARDGAME_GAMEFIELDSCENE_H
