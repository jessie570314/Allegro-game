//
//  NewEnemy.hpp
//  allegro-test
//
//  Created by Mac on 2020/5/24.
//  Copyright © 2020 Mac. All rights reserved.
//

#ifndef NewEnemy_hpp
#define NewEnemy_hpp

#include <stdio.h>
#include "Enemy.hpp"
#include "Sprite.hpp"
class NewEnemy : public Enemy {
public:
    float lasttime=0;
    NewEnemy(int x, int y);
    void Draw() const override;
    void Update(float deltaTime) override;
};
#endif /* NewEnemy_hpp */


