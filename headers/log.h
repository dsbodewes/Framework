#ifndef LOG_H
#define LOG_H

#include "entity.h"

class Log: public Entity
{
public:
	Log();
	virtual ~Log();

	void Draw();
	void Rotate();

private:
	Texture2D image;
	
};

#endif 
