//
//  NewEnemy.cpp
//  allegro-test
//
//  Created by Mac on 2020/5/24.
//  Copyright © 2020 Mac. All rights reserved.
//

#include "NewEnemy.hpp"
#include <string>
#include <random>
#include <string>

#include "Point.hpp"
//radius hp money
//std::string img, float x, float y, float radius, float speed, float hp, int money) :
NewEnemy::NewEnemy(int x, int y) : Enemy("play/enemy-8.png", x, y, 20, 30, 50, 1000) {
  
}
void NewEnemy::Draw() const {
    Enemy::Draw();
}
void NewEnemy::Update(float deltaTime) {
    Enemy::Update(deltaTime);
    std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_real_distribution<> dist(0.0f, 5.0f);
    float rnd = dist(rng);
    
    if (rnd < deltaTime) {
        if(Visible==true)Visible=false;
        else Visible=true;
    }
    
   
}
