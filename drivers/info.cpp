#include "info.h"
#include "../matrix.h"

info::info(){}
info::~info(){}

// Determine if MATRIX is using bus or kernel modules
bool info::isDirectBus(){
    // Kernel Modules are being used
    if(!bus.IsDirectBus()) {return false;}
    // Bus is being used
    else {return true;}
}