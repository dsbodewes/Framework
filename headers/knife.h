#ifndef KNIFE_H
#define KNIFE_H

#include "entity.h"

class Knife: public Entity
{
public:
	Knife();
	virtual ~Knife();
	virtual void Update(float deltaTime);

	void Draw();
	void ShootForward();

private:
	Texture2D image;
	float deltaTime;
	
};

#endif 
