#include <RTBEngine.h>

int main(int argc, char* argv[]) {
    RTBEngine::Core::ApplicationConfig config;
    config.window.title = "RTB Game Demo";
    config.window.width = 1280;
    config.window.height = 720;
    config.initialScenePath = "Assets/Scenes/TestScene.lua";
    
    return RTBEngine::Run(config);
}
