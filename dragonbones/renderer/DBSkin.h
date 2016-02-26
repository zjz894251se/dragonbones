//
//  DBSkin.h
//  dragonbones
//
//  Created by Relvin on 16/2/25.
//  Copyright © 2016年 Relvin. All rights reserved.
//

#ifndef DBSkin_h
#define DBSkin_h

#include "2d/CCSprite.h"
#include "DragonBones.h"
#include "renderer/DBCCTextureAtlas.h"
NAME_SPACE_DRAGON_BONES_BEGIN


class DBSkin
: public cocos2d::Sprite
{
public:
    
    DBSkin();
    virtual ~DBSkin();
    
    static DBSkin* create(const std::string &name,const std::string & textureAtlasName);
    virtual bool initWithTextureName(const std::string &name,const std::string & textureAtlasName);
    virtual bool initWithTextureData(const ITextureAtlas *textureAtlas, const TextureData *textureData);
    
    
private:
    
    
};

NAME_SPACE_DRAGON_BONES_END

#endif /* DBSkin_hpp */
