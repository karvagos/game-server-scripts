#include "Define.h"
#include "ScriptMgr.h"
#include "SharedDefines.h"
#include "Unit.h"
 
class v6_dynamic_xp_class : PlayerScript
{
public:
    v6_dynamic_xp_class() : PlayerScript("v6_dynamic_xp") {}
 
    void OnGiveXP(Player* player, uint32& amount, Unit* /*unit*/) override
    {
        /*if(player->GetLevel() <= 10){
            amount = uint32(floor(amount*1.3f));
        }*/
        /*else if(player->GetLevel() <= 20){
            amount *= 7;
        }
        else if(player->GetLevel() <= 68){
            amount *= 7;
        }*/
        if(player->GetLevel() >= 10 && player->GetLevel() < 80) {
            amount *= 7;
        }
    }
};
 
void AddSC_v6_dynamic_xp()
{
    new v6_dynamic_xp_class();
}