#pragma once
#include "gpRender.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <tuple>
#include <string>
#include <algorithm>
#include <SDL.h>
#include <SDL_image.h>
#include "../General/Sprite.h"
#include "../General/HpBar.h"
#include "../General/Ship.h"
#include "../General/planet.h"
#include "../General/Star.h"
#include "../General/SpaceStation.h"
#include "../General/SpaceStationUI.h"
#include "../General/asteroid.h"
#include "../Physics/BasicMovementFPSlimit.h"
#include "../Physics/TimeData.h"
#include "../Physics/Audio.h"
#include "../General/gpRender.h"
#include "../Level_Generation/Ellers_Maze.h"
#include "../AI/AI.h"
#include "../General/Sector.h"
void run_demo(gpRender gr);