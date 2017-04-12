#include "SceneMap.h"

#include "MapPos.h"

CSceneMap::CSceneMap()
{
}


CSceneMap::~CSceneMap()
{
}

void CSceneMap::InitMapData(int iWidth, int iLength)
{
    if (this->bInit == 1)
    {
        return;
    }
    this->bInit = 1;
    this->iWidth = iWidth;
    this->iLength = iLength;
    this->lstMap.reserve(iWidth*iLength);
    this->lstMap.resize(iWidth*iLength, CMapPos());
}

void CSceneMap::Clear()
{
    this->iWidth = 0;
    this->iLength = 0;
    this->lstMap.clear();
}

