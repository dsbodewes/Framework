#include "entity.h"
 
Entity::Entity()
{
    position = { 0.0f, 0.0f };
    origin = { 0.0f, 0.0f };
    sourceRec = { 0.0f, 0.0f, 0.0f, 0.0f };
    destRec = { 0.0f, 0.0f, 0.0f, 0.0f };
    scale = { 1.0f, 1.0f};
    velocity = { 0.0f };
    acceleration = { 0.0f };
}

Entity::~Entity()
{

}
