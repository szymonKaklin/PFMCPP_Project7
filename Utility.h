#pragma once

#include <vector>
#include <memory>
#include "Item.h"


std::vector<std::unique_ptr<Item>> makeHelpfulItems();

std::vector<std::unique_ptr<Item>> makeDefensiveItems();

struct Character;
std::string getCharacterStats(Character* ch);

void useDefensiveItem(Character*, Item&);
void useHelpfulItem(Character*, Item*);
void useAttackItem(Character*, Item*);
