
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
	/* add your private declarations */
	float deltaTime;
};

#endif /* CORE_H */
