//
//  StartScene.hpp
//  allegro-test
//
//  Created by Mac on 2020/5/24.
//  Copyright © 2020 Mac. All rights reserved.
//

#ifndef StartScene_hpp
#define StartScene_hpp

#include <allegro5/allegro_audio.h>
#include <memory>
#include "IScene.hpp"

class StartScene final : public Engine::IScene {
private:
    std::shared_ptr<ALLEGRO_SAMPLE_INSTANCE> bgmInstance;
public:
    explicit StartScene() = default;
    void Initialize() override;
    void Terminate() override;
    void BackOnClick(int stage);
};

#endif // LOSESCENE_HPP
