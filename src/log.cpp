#include "log.h"
#include "config.h"

Log::Log() : Entity()
{
    diego = LoadTexture("../assets/log.png");
    position.x = 100;
    position.y = 100;

    if(diego.id == 0)
    {
        std::cout << "Error loading log texture" << std::endl;
    }
    
}

Log::~Log()
{
    UnloadTexture(diego);
}

void Log::Draw(float deltaTime)
{
    DrawTexture(diego, position.x, position.y, WHITE);
}