#include "log.h"
#include "config.h"

Log::Log() : Entity()
{
    imageLog = LoadTexture("../assets/log.png");


    int frameWidth = imageLog.width;
    int frameHeight = imageLog.height;
    
    position.x = GetScreenWidth() / 2 - imageLog.width / 2;
    position.y = GetScreenHeight() / 2 - imageLog.height / 2;

    sourceRec = { 0.0f, 0.0f, (float)frameWidth, (float)frameHeight }; // Source rectangle (part of the texture to use for drawing)
    destRec = { GetScreenWidth()/2.0f, GetScreenHeight()/2.0f - 100, (float)frameWidth, (float)frameHeight }; // Destination rectangle (screen rectangle where drawing part of texture)
    
    origin = { (float)frameWidth/2.0f, (float)frameHeight/2.0f }; // Origin of the texture (rotation/scale point), it's relative to destination rectangle size

    rotation = 0;
}

Log::~Log()
{
    UnloadTexture(imageLog);
}

void Log::Draw()
{
    DrawCircle(GetScreenWidth() / 2, GetScreenHeight() / 2 - 100, 300, BLUE);
    DrawTexturePro(imageLog, sourceRec, destRec, origin, (float)rotation, WHITE);
}

void Log::Rotate()
{
    rotation++;
}


void Log::Update(float deltaTime)
{
    Draw();
    Rotate();
}

