#include "log.h"
#include "config.h"

Log::Log() : Entity()
{
    image = LoadTexture("../assets/log.png");
    position.x = GetScreenWidth() / 2 - image.width / 2;
    position.y = GetScreenHeight() / 2 - image.height / 2;

}

Log::~Log()
{
    UnloadTexture(image);
}

void Log::Draw(float deltaTime)
{
    DrawTexture(image, position.x, position.y, WHITE);
}