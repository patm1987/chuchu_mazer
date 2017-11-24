#include "Map.h"
#include "2d/CCSprite.h"

Map::Map(const Config& config): _config(config)
{
	int x = 0;
	int y = 0;
	for (auto tile : config.tiles)
	{
		auto sprite = cocos2d::Sprite::createWithSpriteFrame(tile.getSpriteFrame());
		sprite->setPosition(x, y);
		addChild(sprite);
		x += config.tileWidth;
		if (x >= config.tileWidth * config.tilesPerRow)
		{
			x = 0;
			y += config.tileHeight;
		}
	}
}
