#include "log.h"
#include "config.h"

Log::Log() : Entity()
{
    imageLog = LoadTexture("../assets/log.png");
    
    position.x = GetScreenWidth() / 2 - imageLog.width / 2;
    position.y = GetScreenHeight() / 2 - imageLog.height / 2 - 75;

    int frameWidth = imageLog.width;
    int frameHeight = imageLog.height;

    // Source rectangle (part of the texture to use for drawing) 
    // Destination rectangle (screen rectangle where drawing part of texture)
    sourceRec = { 0.0f, 0.0f, (float)frameWidth, (float)frameHeight };
    destRec = { GetScreenWidth()/2.0f, GetScreenHeight()/2.0f, (float)frameWidth, (float)frameHeight };
    
    // Origin of the texture (rotation/scale point), it's relative to destination rectangle size
    origin = { (float)frameWidth/2.0f, (float)frameHeight/2.0f };

    rotation = 0;
}

Log::~Log()
{
    UnloadTexture(imageLog);
}

void Log::Draw()
{
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

