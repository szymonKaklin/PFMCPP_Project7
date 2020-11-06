#pragma once
#include "Character.h"
#include "AttackItem.h"

struct DragonSlayer : Character
{
    DragonSlayer(std::string name_, int hp, int armor);
    const std::string& getName() override;
    std::string getStats() override;
    void attack(Character& other) override;
private:
    std::unique_ptr<AttackItem> attackItem{ new AttackItem() };
    const std::string name;
};
