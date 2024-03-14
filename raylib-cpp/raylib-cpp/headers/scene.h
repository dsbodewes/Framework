#ifndef SCENE_H
#define SCENE_H

#include "entity.h"

class Scene: public Entity
{
public:
	Scene();
	virtual ~Scene();

	Camera2D camera = { 0 };

private:
	
};

#endif 
