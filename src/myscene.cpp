#include "myscene.h"
#include "knife.h"
#include "log.h"

Myscene::Myscene() : Scene()
{
    // Camera settings.
    camera.offset = Vector2();

    Config::configure();
}

Myscene::~Myscene()
{

}


