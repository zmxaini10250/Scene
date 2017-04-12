#pragma once

class CSceneObject
{
public:
	CSceneObject();
	virtual ~CSceneObject();
    void InitObjectData(int iSpeed);
    void Clear();
    void SetPos(int iPosX, int iPosY);
protected:
    int bInit = 0;
    int iPosX = 0;
    int iPosY = 0;
    int iSpeed = 0;
};

