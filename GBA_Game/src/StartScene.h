//
// Created by Wout Briels on 29/11/2018.
//

#ifndef GBA_SPRITE_ENGINE_PROJECT_STARTSCENE_H
#define GBA_SPRITE_ENGINE_PROJECT_STARTSCENE_H


#include <libgba-sprite-engine/scene.h>
#include <libgba-sprite-engine/sprites/affine_sprite.h>

class StartScene : public Scene {
private:
    //std::unique_ptr<Sprite> smiley;
    //std::unique_ptr<AffineSprite> player;
    std::unique_ptr<Sprite> player;
    std::unique_ptr<Background> bg;

    int bgX, bgY;
    int playerX, playerY;
    int playerOnMapX, playerOnMapY;
    bool jumpingDisabled;
public:
    StartScene(std::shared_ptr<GBAEngine> engine) : Scene(engine), bgX(0), bgY(96) {}

    std::vector<Sprite *> sprites() override;
    std::vector<Background *> backgrounds() override;

    void load() override;
    void tick(u16 keys) override;
};


#endif //GBA_SPRITE_ENGINE_PROJECT_STARTSCENE_H