// Copyright Kaan Kirant


#include "AbilitySystem/Data/CharacterClassInfo.h"

FCharacterClassDefaultInfo UCharacterClassInfo::GetClassDefaultInfo(EChracterClass CharacterClass)
{
	return CharacterClassInformation.FindChecked(CharacterClass);
}
