#include "DefensiveItem.h"
#include "Utility.h"

DefensiveItem::DefensiveItem() : Item("defensive item", 3) { }

void DefensiveItem::use(Character* character)
{
    //make your defensive item use the appropriate Utility helper functions
    useDefensiveItem(character, *this);
}
