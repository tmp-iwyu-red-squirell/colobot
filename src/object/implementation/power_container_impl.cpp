/*
 * This file is part of the Colobot: Gold Edition source code
 * Copyright (C) 2001-2023, Daniel Roux, EPSITEC SA & TerranovaTeam
 * http://epsitec.ch; http://colobot.info; http://github.com/colobot
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see http://gnu.org/licenses
 */

#include "object/implementation/power_container_impl.h"

CPowerContainerObjectImpl::CPowerContainerObjectImpl(ObjectInterfaceTypes& types)
    : CPowerContainerObject(types)
    , m_energyLevel(1.0f)
{}

CPowerContainerObjectImpl::~CPowerContainerObjectImpl()
{}

void CPowerContainerObjectImpl::SetEnergyLevel(float level)
{
    m_energyLevel = level;
}

float CPowerContainerObjectImpl::GetEnergyLevel()
{
    return m_energyLevel;
}
