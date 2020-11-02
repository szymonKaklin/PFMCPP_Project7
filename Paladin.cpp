#include "Paladin.h"
#include "Utility.h"

Paladin::Paladin(std::string name, int hp, int armor) : Character(hp, armor, 10) { }

const std::string& Paladin::getName()
{
    return name;   
}

std::string Paladin::getStats()
{
    return getCharacterStats(this);
}
