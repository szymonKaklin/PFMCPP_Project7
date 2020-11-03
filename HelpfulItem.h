#pragma once

#include "Item.h"
#include "Character.h"

struct HelpfulItem : Item
{
    HelpfulItem();
    void use(Character* character) override;
};

