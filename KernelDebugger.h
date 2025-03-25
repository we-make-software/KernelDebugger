#ifndef KernelDebugger_H
#define KernelDebugger_H
#include "../TheRequirements/TheRequirements.h"
#define ActiveStudy() static bool ActiveStudy=false;
#define ActiveStudyStart() if(ActiveStudy)return
#define ActiveStudyEnd() ActiveStudy=true
#endif