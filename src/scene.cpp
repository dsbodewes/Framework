#include "scene.h"
#include "config.h"

Scene::Scene() : Entity()
{
    background = {14, 82, 77};
    InitWindow(screen_width, screen_height, "Knife Hit");
}

Scene::~Scene()
{
    CloseWindow();
}

void Scene::Tick(float deltaTime)
{
    BeginDrawing();
    ClearBackground(background);
    DrawFPS(10, 10);

    Update(deltaTime);
    EndDrawing();
}
