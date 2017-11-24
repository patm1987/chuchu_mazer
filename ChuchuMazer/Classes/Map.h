#ifndef _MAP_H
#define _MAP_H
#include "2d/CCSpriteFrame.h"

class MapTile
{
public:
	MapTile(const MapTile& mapTile) : MapTile(mapTile.getSpriteFrame())
	{
	}

	explicit MapTile(cocos2d::SpriteFrame* spriteFrame)
		: _pSpriteFrame(spriteFrame)
	{
		_pSpriteFrame->retain();
	}

	~MapTile()
	{
		_pSpriteFrame->release();
		_pSpriteFrame = nullptr;
	}

	cocos2d::SpriteFrame* getSpriteFrame() const
	{
		return _pSpriteFrame;
	}

private:
	cocos2d::SpriteFrame* _pSpriteFrame;
};

class Map : public cocos2d::Node
{
public:
	struct Config
	{
		std::vector<MapTile> tiles;
		int tilesPerRow;
		int tileWidth;
		int tileHeight;
	};

	explicit Map(const Config& config);

private:
	Config _config;
};

#endif//_MAP_H
