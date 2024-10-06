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
    std::cout << knife->position.x << " " << knife->position.y << std::endl;
    std::cout << "log screen" << log->position.x << " " << log->position.y << std::endl;
    if (CheckCollisionCircles(knife->position, 150, log->position, 500))
    {
        knife->velocity = 0.0f;
        std::cout << "Collision detected" << std::endl;
    }


}

void Myscene::Update(float deltaTime)
{
    knife->Update(deltaTime);
    log->Update(deltaTime);
    CheckCollision();
}

