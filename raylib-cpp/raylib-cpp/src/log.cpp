#include "log.h"
#include "config.h"

Log::Log() : Entity()
{
	image = LoadTexture("assets/log.png");
    position.x = 100;
    position.y = 100;
    
}

Log::~Log()
{
    UnloadTexture(image);
}

void Log::Draw()
{
    DrawTexture(image, position.x, position.y, WHITE);
}