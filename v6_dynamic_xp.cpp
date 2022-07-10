#include "Define.h"
#include "ScriptMgr.h"
#include "SharedDefines.h"
#include "Unit.h"
 
class v6_dynamic_xp_class : UnitScript
{
public:
    v6_dynamic_xp_class() : UnitScript("v6_dynamic_xp") {}
 
    void OnGiveXP(Player* player, uint32& amount, Unit* /*unit*/) override
    {
        if(player->GetLevel() <= 5){
            amount *= 2;
        }
        else if(player->GetLevel() <= 20){
            amount *= 5;
        }
        else if(player->GetLevel() <= 68){
            amount *= 10;
        }
        else {
            amount *= 7;
        }
    }
};
 
void AddSC_v6_dynamic_xp()
{
    new v6_dynamic_xp_class();
}