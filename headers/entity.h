#ifndef ENTITY_H
#define ENTITY_H

#include <iostream>
#include "raylib.h"

class Entity
{
public:
	Entity();
	virtual ~Entity();

	Vector2 position;
	Vector2 origin;

private:
	protected: Vector2 scale;

};

#endif 
