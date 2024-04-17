#include "knife.h"
#include "config.h"

Knife::Knife() : Entity()
{
	imageKnife = LoadTexture("../assets/knife.png");

	position.x = GetScreenWidth() / 2 - imageKnife.width / 2;
    position.y = GetScreenHeight() / 2 - imageKnife.height / 2 + 470;

	scale = { 2.0f, 2.0f };

	int frameWidth = imageKnife.width;
	int frameHeight = imageKnife.height;

	sourceRec = { 0.0f, 0.0f, (float)frameWidth, (float)frameHeight };
	destRec = { position.x, position.y, (float)frameWidth * scale.x, (float)frameHeight * scale.y };

	origin = { (float)frameWidth / 2.0f, (float)frameHeight / 2.0f };
}

Knife::~Knife()
{	
	velocity = 0.0f;
	acceleration = 10.0f;
	isSpacebarPressed = false;	

    UnloadTexture(imageKnife);
}

void Knife::Draw()
{	DrawRectangle(position.x + 12.5, position.y - 25, scale.x * 21, scale.y, RED);
	DrawTexturePro(imageKnife, sourceRec, destRec, origin, 0, WHITE);
}

void Knife::HandleInput()
{ 
	if (!isSpacebarPressed && IsKeyPressed(KEY_SPACE)) 
	{
		velocity -= 900.0f;
		isSpacebarPressed = true;
		std::cout << "Spacebar pressed" << std::endl;
    }
}
void Knife::Update(float deltaTime)
{
	destRec.y += velocity * deltaTime; // Update the y position of destRec based on velocity

	Draw();
	HandleInput();

	velocity += acceleration * deltaTime; // Increase the velocity by the acceleration
	position.y = destRec.y + destRec.height / 2; // Update the position based on the new destRec
}