#include <iostream>
#include "raylib.h"
#include "core.h"
#include "myscene.h"

using namespace std;

int main()
{
    Core* core = new Core();
    Myscene* myscene = new Myscene();

    while (myscene->isActive())
    {
        core->Run(myscene);
    }
    
    delete myscene;
    delete core;
    
    return 0;
}







