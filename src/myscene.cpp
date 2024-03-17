#include "myscene.h"
#include "knife.h"
#include "log.h"

Myscene::Myscene() : Scene()
{
    // Camera settings.
    camera.offset = Vector2();
    Config::configure();

    log = new Log();
}

Myscene::~Myscene()
{
    
}

void Myscene::Update(float deltaTime)
{
    log->Update(deltaTime);
    
}

