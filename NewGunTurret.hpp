//
//  NewGunTurret.hpp
//  allegro-test
//
//  Created by Mac on 2020/5/24.
//  Copyright © 2020 Mac. All rights reserved.
//

#ifndef NewGunTurret_hpp
#define NewGunTurret_hpp

#include <stdio.h>
#include "Turret.hpp"
#include "NewBullet.hpp"
class NewGunTurret: public Turret {
public:
    static const int Price;
    NewGunTurret(float x, float y);
    void CreateBullet() override;
};


#endif /* NewGunTurret_hpp */
