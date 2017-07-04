#include "error.h"

const int mainHasArgs = 0;
void CreateConfigVarTable(void) {
  initConfigVarTable();
  installConfigVar("printModuleInitOrder", "bool", "Built-in");
  installConfigVar("dataParTasksPerLocale", "int(64)", "Built-in");
  installConfigVar("dataParIgnoreRunningTasks", "bool", "Built-in");
  installConfigVar("dataParMinGranularity", "int(64)", "Built-in");
  installConfigVar("memTrack", "bool", "Built-in");
  installConfigVar("memStats", "bool", "Built-in");
  installConfigVar("memLeaksByType", "bool", "Built-in");
  installConfigVar("memLeaks", "bool", "Built-in");
  installConfigVar("memMax", "uint(64)", "Built-in");
  installConfigVar("memThreshold", "uint(64)", "Built-in");
  installConfigVar("memLog", "string", "Built-in");
  installConfigVar("memLeaksLog", "string", "Built-in");
  installConfigVar("memLeaksByDesc", "string", "Built-in");
  installConfigVar("numLocales", "int(64)", "Built-in");
  installConfigVar("nElementForFCHQueue", "int(64)", "FCHQueue");
  installConfigVar("GDT_NUM_ENTRIES", "int(64)", "GDT");
  installConfigVar("isGDT", "bool", "GDT");
  installConfigVar("isSync", "bool", "GDT");
  installConfigVar("logNodes", "bool", "GDT");
  installConfigVar("nTrials", "int(64)", "GDT");
}


