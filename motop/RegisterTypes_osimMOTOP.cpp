/* -------------------------------------------------------------------------- *
 *                   OpenSim:  RegisterTypes_osimMOTOP.cpp                    *
 * -------------------------------------------------------------------------- *
 * The OpenSim API is a toolkit for musculoskeletal modeling and simulation.  *
 * See http://opensim.stanford.edu and the NOTICE file for more information.  *
 * OpenSim is developed at Stanford University and supported by the US        *
 * National Institutes of Health (U54 GM072970, R24 HD065690) and by DARPA    *
 * through the Warrior Web program.                                           *
 *                                                                            *
 * Copyright (c) 2005-2015 Stanford University and the Authors                *
 * Author(s): Chris Dembia                                                    *
 *                                                                            *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may    *
 * not use this file except in compliance with the License. You may obtain a  *
 * copy of the License at http://www.apache.org/licenses/LICENSE-2.0.         *
 *                                                                            *
 * Unless required by applicable law or agreed to in writing, software        *
 * distributed under the License is distributed on an "AS IS" BASIS,          *
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.   *
 * See the License for the specific language governing permissions and        *
 * limitations under the License.                                             *
 * -------------------------------------------------------------------------- */

#include "RegisterTypes_osimPSim.h"

#include "ConcreteParameters.h"
#include "PSimDynamicOptimizationSolver.h"
#include "PSimGoal.h" // TODO remove?
#include "PSimGoalValue.h"
#include "PSimGoalValueSet.h"
#include "PSimParameter.h"
#include "PSimParameterValue.h"
#include "PSimSolution.h"
#include "PSimSolver.h"
#include "PSimTool.h"
#include "StatesCollector.h"
#include "StateTrajectory.h"

#include <string>
#include <iostream>
#include <exception>

using namespace OpenSim;

static PSimInstantiator psimInstantiator;

OSIMPSIM_API void RegisterTypes_osimPSim()
{
    Object::registerType(PSimCoordInitialValueParameter());
    Object::registerType(PSimCoordInitialSpeedParameter());
    Object::registerType(PSimDynamicOptimizationSolver());
    Object::registerType(PSimGoalValue());
    Object::registerType(PSimGoalValueSet());
    Object::registerType(PSimTool());
    Object::registerType(PSimParameterValue());
    Object::registerType(PSimParameterValueSet());
    Object::registerType(PSimSolution());
    Object::registerType(StatesCollector());
}

PSimInstantiator::PSimInstantiator() {
    RegisterTypes_osimPSim();
}
