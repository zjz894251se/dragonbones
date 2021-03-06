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

namespace cocos2d {
    class PolygonInfo;
}
NAME_SPACE_DRAGON_BONES_BEGIN

class DisplayData;

class DBSkin
: public cocos2d::Sprite
{
public:
    
    DBSkin();
    virtual ~DBSkin();
    
    static DBSkin* create(DisplayData *displayData,const std::string & textureAtlasName);
    virtual bool initWithDisplayDataTextureName(DisplayData *displayData,const std::string & textureAtlasName);
    virtual bool initWithTextureName(const std::string &name,const std::string & textureAtlasName);
    virtual bool initWithTextureData(const ITextureAtlas *textureAtlas, const TextureData *textureData);
    
    void setDisplayData(DisplayData* displayData);
    void updateTextureData();
    void updateBaseInfo();
    
    virtual void draw(cocos2d::Renderer *renderer, const cocos2d::Mat4 &transform, uint32_t flags) override;
    void updatePolygonVectex();
    
protected:
    void buildPolygonInfo();
private:
    DisplayData* _displayData;
    std::string _textureAtlasName;
    cocos2d::Vec2 _offset;
    std::vector<int> _polyVtx;
    
    
};

NAME_SPACE_DRAGON_BONES_END

#endif /* DBSkin_hpp */
