#include <gamedata.hpp>

#include <spr/system/application.hpp>
#include <spr/data/alltypes.hpp> //needed to give unique_ptrs ability to destroy
#include <spr/data/alltypes.hpp> //needed to give unique_ptrs ability to destroy
#include <data/alltypes.hpp> //needed to give unique_ptrs ability to destroy
#include <spr/entitystates/entitystateslogic.hpp>
#include <spr/physics/collisionlogic.hpp>
#include <spr/scene/scenelogic.hpp>
#include <entity/entitylogic.hpp>
#include <player/playerlogic.hpp>
#include <player/inputlogic.hpp>
#include <spr/window/glwindow.hpp>
#include <spr/physics/physicslogic.hpp>
#include <rendering/renderlogic.hpp>
#include <spr/audio/audiologic.hpp>

class Dino : public spr::Application
{
    public:
        Dino();
        void loadResources();
		void startScenario();
    protected:
        void setup(const std::vector<std::string>& args) override;
        void loop() override;
    private:
        void handleInput();
        //game data
        GameData mData;

        //window
        spr::GlWindow mWindow;

        //input
        InputLogic mInputLogic;

        //system
        th::Optional<int32_t> mClickedEntity;

        dpx::TableId mImguiFontTexture;

        bool mGuiBlocksMouse;

        //logic
        PlayerLogic mPlayerLogic;
        spr::EntityStatesLogic mEntityStatesLogic;
        EntityLogic mEntityLogic;
        spr::CollisionLogic mCollisionLogic;
        spr::SceneLogic mSceneLogic;
        spr::PhysicsLogic mPhysicsLogic;

        RenderLogic mRenderLogic;
        spr::AudioLogic mAudioLogic;
};
