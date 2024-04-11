#ifndef LOG_H
#define LOG_H

#include "entity.h"

class Log: public Entity
{
public:
	Log();
	virtual ~Log();
	virtual void Update(float deltaTime);

	void Draw();
	void Rotate();
	
private:
	Texture2D imageLog;
	int rotation;
};

#endif 
