#include <iostream>
#include <vector>

#include "Force2D.h"
#include "SceneManager/SceneManager.h"
#include "StateManager.h"
#include "Scenes/GameFieldScene.h"

using namespace std;
using namespace Force2D;

void run()
{
    auto scene = new GameFieldScene();
    SceneManager::SceneManager::LoadScene(scene);
    quitApp();
}

int main()
{
    cout << "TEST" << endl;

    using namespace Force2D;

    initSDL("GAME", StateManager::WINDOW_WIDTH, StateManager::WINDOW_HEIGHT);

    runEventLoop(run);

    quitSDL();

    return 0;
}
