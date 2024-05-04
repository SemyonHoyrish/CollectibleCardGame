#include <iostream>
#include <vector>

#include "Force2D.h"
#include "SceneManager/SceneManager.h"

using namespace std;
using namespace Force2D;

void run()
{
    auto scene = new SceneManager::Scene();
    SceneManager::SceneManager::LoadScene(scene);
    quitApp();
}

int main()
{
    cout << "TEST" << endl;

    using namespace Force2D;

    initSDL("GAME");

    runEventLoop(run);

    quitSDL();

    return 0;
}
