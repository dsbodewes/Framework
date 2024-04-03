#ifndef MYSCENE_H
#define MYSCENE_H

#include "scene.h"
#include "config.h"
#include "knife.h"
#include "log.h"


class Myscene: public Scene
{
public:
	Myscene();
	virtual ~Myscene();
	virtual void Update(float deltaTime);
private:
	Log *log;
	Knife *knife;
};

#endif 
