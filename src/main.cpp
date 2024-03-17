#include <iostream>
#include "raylib.h"
#include "core.h"
#include "myscene.h"

using namespace std;

int main()
{
    
    // cout << "Start Game" << endl;
    // const int screen_width = 1280;
    // const int screen_height = 800;
    // SetTargetFPS(60);
    
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







