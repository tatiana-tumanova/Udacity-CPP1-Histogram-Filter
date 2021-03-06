// You recommend inclusion guards, but pragma_once looks like a widely supported alternative, and the code is cleaner 
// https://en.wikipedia.org/wiki/Pragma_once
#pragma once 
using namespace std;

#include "targetver.h"


#include <iostream>
#include <string>
#include <fstream>

#include <stdlib.h>


#include <stdexcept>

#include <vector>
#include <math.h>
#include <cmath>
#include <algorithm>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif
//#define _USE_MATH_DEFINES // doesn't help for Pi, but might be useful later for other constants

#include "helpers.h"
#include "debugging_helpers.h"
#include "simulate.h"
#include "localizer.h"








