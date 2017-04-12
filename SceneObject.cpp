#include "SceneObject.h"



CSceneObject::CSceneObject()
{
}


CSceneObject::~CSceneObject()
{
}

void CSceneObject::InitObjectData(int iSpeed)
{
    if (this->bInit == 1)
    {
        return;
    }
    this->bInit = 1;
    this->iSpeed = iSpeed;
}

void CSceneObject::Clear()
{
    this->bInit = 0;
    this->iSpeed = 0;
    this->iPosX = 0;
    this->iPosY = 0;
}

void CSceneObject::SetPos(int iPosX, int iPosY)
{
    this->iPosX = iPosX;
    this->iPosY = iPosY;
}

