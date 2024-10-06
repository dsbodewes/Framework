#ifndef SCENE_H
#define SCENE_H

#include "entity.h"

class Scene: public Entity
{
public:
	Scene();
	virtual ~Scene();
	
	virtual void Update(float deltaTime) = 0;
	void Tick(float deltaTime);
	
	bool isActive() {return !WindowShouldClose();}
	
	Camera2D camera = { 0 };

private:
	Color background;
	float deltaTime;
};

#endif 
