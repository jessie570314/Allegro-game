//
//  NewBullet.hpp
//  allegro-test
//
//  Created by Mac on 2020/5/24.
//  Copyright © 2020 Mac. All rights reserved.
//

#ifndef NewBullet_hpp
#define NewBullet_hpp

#include <stdio.h>
#include "Bullet.hpp"

class Enemy;
class Turret;
namespace Engine {
struct Point;
}  // namespace Engine

class NewBullet : public Bullet {
public:
    explicit NewBullet(Engine::Point position, Engine::Point forwardDirection, float rotation, Turret* parent);
    void OnExplode(Enemy* enemy) override;
};


#endif /* NewBullet_hpp */
