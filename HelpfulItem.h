#pragma once

#include "Item.h"
#include "Character.h"
#include "Dwarf.h"
#include "Dragon.h"
#include "Paladin.h"
#include "DragonSlayer.h"

struct HelpfulItem : Item
{
    HelpfulItem();
    void use(Character* character) override;
};

