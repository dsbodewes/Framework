#include "knife.h"
#include "config.h"

Knife::Knife() : Entity()
{
	imageKnife = LoadTexture("../assets/knife.png");
	position.x = GetScreenWidth() / 2 - imageKnife.width / 2;
    position.y = GetScreenHeight() / 2 - imageKnife.height / 2 + 300;
}

Knife::~Knife()
{
    UnloadTexture(imageKnife);
}

void Knife::Draw()
{
	DrawTexture(imageKnife, position.x, position.y, WHITE);
}

void Knife::Update(float deltaTime)
{
	Draw();
}
