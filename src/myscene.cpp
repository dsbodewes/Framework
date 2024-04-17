#include "myscene.h"

Myscene::Myscene() : Scene()
{
    // Camera settings.
    camera.offset = Vector2();
    Config::configure();

    knife = new Knife();
    log = new Log(); 
}

Myscene::~Myscene()
{
    
}

void Myscene::CheckCollision()
{
    // Check collision between knife and log
    if (CheckCollisionCircleRec(knife->GetCollisionCircle(), log->GetCollisionRectangle()))
    {
        std::cout << "Collision detected" << std::endl;
    }
}

void Myscene::Update(float deltaTime)
{
    knife->Update(deltaTime);
    log->Update(deltaTime);
    
}

