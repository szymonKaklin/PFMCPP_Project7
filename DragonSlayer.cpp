#include "DragonSlayer.h"
#include "Dragon.h"
#include "Utility.h"
#include "AttackItem.h"
#include <assert.h>

DragonSlayer::DragonSlayer(std::string name_, int hp, int armor) : Character(hp, armor, 4), name(name_) 
{
    helpfulItems = makeHelpfulItems();
    defensiveItems = makeDefensiveItems();
    attackItems = makeAttackItems(0);
}

const std::string& DragonSlayer::getName()
{
    return name;
}

void DragonSlayer::attack(Character& other)
{
    if( hitPoints <= 0 )
    {
        std::cout << getName() << " can't attack. " << getName() << " is dead." << std::endl;
        std::cout << "make another party member use an item to revive them" << std::endl << std::endl;
        return;
    }
        
    isDefending = false;
    
    std::cout << name << " is attacking " << other.getName() << " !!" << std::endl;
    
    if( auto* dragon = dynamic_cast<Dragon*>(&other) )
    {
        //DragonSlayers get a 10x boost when attacking dragons, from their attack item.
        //so they should USE their attack item before attacking the dragon... 
        //note that items are single-use only, so you need to reset it after use.  
        //look in the Character class for how the other item types are reset after use.

        // boost attack damage with attackItem
        for( auto& item : attackItems )
        {
            std::cout<<"attack item" << std::endl;
            item->use(this);
            item.reset();
        }
        
        while( dragon->getHP() > 0 )
        {
          dragon->takeDamage(attackDamage);
        }
    }
    else
    {
        // added else as otherwise dragon would die twice in battle
        Character::attack(other);
    }
}

std::string DragonSlayer::getStats()
{
    return getCharacterStats(this);
}
