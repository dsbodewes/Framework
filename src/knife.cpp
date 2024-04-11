#include "knife.h"
#include "config.h"

Knife::Knife() : Entity()
{
	imageKnife = LoadTexture("../assets/knife.png");

	position.x = GetScreenWidth() / 2 - imageKnife.width / 2;
    position.y = GetScreenHeight() / 2 - imageKnife.height / 2 + 500;

	int frameWidth = imageKnife.width;
	int frameHeight = imageKnife.height;

	sourceRec = { 0.0f, 0.0f, (float)frameWidth, (float)frameHeight };
	destRec = { GetScreenWidth()/2.0f, GetScreenHeight()/2.0f, (float)frameWidth, (float)frameHeight };

	origin = { (float)frameWidth/2.0f, (float)frameHeight/2.0f };
}

Knife::~Knife()
{
    UnloadTexture(imageKnife);
}

void Knife::Draw()
{
	DrawTexture(imageKnife, position.x, position.y, WHITE);
}

void Knife::HandleInput()
{ 
	if (!isSpacebarPressed && IsKeyPressed(KEY_SPACE)) 
	{
		velocity -= 900.0f;
		isSpacebarPressed = true;
    }

}

void Knife::Update(float deltaTime)
{
	Draw();
	HandleInput();

	velocity += acceleration * deltaTime; // Increase the velocity by the acceleration
    position.y += velocity * deltaTime; // Increase the position by the velocity
}
