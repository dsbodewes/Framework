#include "log.h"
#include "config.h"

Log::Log() : Entity()
{
    imageLog = LoadTexture("../assets/log.png");
    position.x = GetScreenWidth() / 2 - imageLog.width / 2;
    position.y = GetScreenHeight() / 2 - imageLog.height / 2;

}

Log::~Log()
{
    UnloadTexture(imageLog);
}

void Log::Draw()
{
    DrawTexture(imageLog, position.x, position.y, WHITE);
}

void Log::Update(float deltaTime)
{
    Draw();
    ImageRotate(imageLog, 0 + 20);
}