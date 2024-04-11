
#ifndef CORE_H
#define CORE_H

#include "scene.h"

class Core
{
public:
	Core();
	virtual ~Core();
	void Run(Scene* scene);
	
private:
	float deltaTime;

};

#endif 
