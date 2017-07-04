/*** Compilation Info ***/


#include <stdio.h>

#include "chpltypes.h"
const char* chpl_compileCommand = "chpl --fast --devel queues/distributed/FCHQueue.chpl queues/Queue.chpl misc/LocalAtomicObject.chpl misc/FCHLock.chpl misc/Bitmap.chpl misc/GDT.chpl -o bin/main.exe --main-module FCHQueue --savec=codegen ";
const char* chpl_compileVersion = "1.16.0 pre-release (3eaee12)";
const char* chpl_compileDirectory = "/mnt/c/Github/Distributed_Queue";
const char* chpl_saveCDir = "/mnt/c/Github/Distributed_Queue/codegen";
const char* CHPL_HOME = "/mnt/c/chapel";
const int CHPL_STACK_CHECKS = 0;
const int CHPL_CACHE_REMOTE = 0;
const char* CHPL_ATOMICS = "intrinsics";
const char* CHPL_AUX_FILESYS = "none";
const char* CHPL_COMM = "gasnet";
const char* CHPL_COMM_SUBSTRATE = "udp";
const char* CHPL_GASNET_SEGMENT = "everything";
const char* CHPL_GMP = "gmp";
const char* CHPL_HOST_COMPILER = "gnu";
const char* CHPL_HOST_PLATFORM = "linux64";
const char* CHPL_HWLOC = "hwloc";
const char* CHPL_JEMALLOC = "jemalloc";
const char* CHPL_LAUNCHER = "amudprun";
const char* CHPL_LLVM = "none";
const char* CHPL_LOCALE_MODEL = "flat";
const char* CHPL_MAKE = "make";
const char* CHPL_MEM = "jemalloc";
const char* CHPL_NETWORK_ATOMICS = "none";
const char* CHPL_REGEXP = "re2";
const char* CHPL_TARGET_ARCH = "native";
const char* CHPL_TARGET_COMPILER = "gnu";
const char* CHPL_TARGET_PLATFORM = "linux64";
const char* CHPL_TASKS = "qthreads";
const char* CHPL_TIMERS = "generic";
const char* CHPL_UNWIND = "none";
const char* CHPL_WIDE_POINTERS = "struct";

void chpl_program_about(void);

void chpl_program_about() {
  printf("%s", "Compilation command: chpl --fast --devel queues/distributed/FCHQueue.chpl queues/Queue.chpl misc/LocalAtomicObject.chpl misc/FCHLock.chpl misc/Bitmap.chpl misc/GDT.chpl -o bin/main.exe --main-module FCHQueue --savec=codegen \n");
  printf("%s", "Chapel compiler version: 1.16.0 pre-release (3eaee12)\n");
  printf("Chapel environment:\n");
  printf("%s", "  CHPL_HOME: /mnt/c/chapel\n");
  printf("%s", "  CHPL_ATOMICS: intrinsics\n");
  printf("%s", "  CHPL_AUX_FILESYS: none\n");
  printf("%s", "  CHPL_COMM: gasnet\n");
  printf("%s", "  CHPL_COMM_SUBSTRATE: udp\n");
  printf("%s", "  CHPL_GASNET_SEGMENT: everything\n");
  printf("%s", "  CHPL_GMP: gmp\n");
  printf("%s", "  CHPL_HOST_COMPILER: gnu\n");
  printf("%s", "  CHPL_HOST_PLATFORM: linux64\n");
  printf("%s", "  CHPL_HWLOC: hwloc\n");
  printf("%s", "  CHPL_JEMALLOC: jemalloc\n");
  printf("%s", "  CHPL_LAUNCHER: amudprun\n");
  printf("%s", "  CHPL_LLVM: none\n");
  printf("%s", "  CHPL_LOCALE_MODEL: flat\n");
  printf("%s", "  CHPL_MAKE: make\n");
  printf("%s", "  CHPL_MEM: jemalloc\n");
  printf("%s", "  CHPL_NETWORK_ATOMICS: none\n");
  printf("%s", "  CHPL_REGEXP: re2\n");
  printf("%s", "  CHPL_TARGET_ARCH: native\n");
  printf("%s", "  CHPL_TARGET_COMPILER: gnu\n");
  printf("%s", "  CHPL_TARGET_PLATFORM: linux64\n");
  printf("%s", "  CHPL_TASKS: qthreads\n");
  printf("%s", "  CHPL_TIMERS: generic\n");
  printf("%s", "  CHPL_UNWIND: none\n");
  printf("%s", "  CHPL_WIDE_POINTERS: struct\n");
}
/*** Filename Lookup Table ***/

const c_string chpl_filenameTable[] = {
  /* 0 */ "",
  /* 1 */ "<internal>",
  /* 2 */ "$CHPL_HOME/modules/internal/ChapelBase.chpl",
  /* 3 */ "$CHPL_HOME/modules/internal/ChapelStandard.chpl",
  /* 4 */ "$CHPL_HOME/modules/internal/PrintModuleInitOrder.chpl",
  /* 5 */ "$CHPL_HOME/modules/internal/startInitCommDiags.chpl",
  /* 6 */ "$CHPL_HOME/modules/internal/CPtr.chpl",
  /* 7 */ "$CHPL_HOME/modules/internal/CString.chpl",
  /* 8 */ "$CHPL_HOME/modules/internal/String.chpl",
  /* 9 */ "$CHPL_HOME/modules/internal/ChapelDebugPrint.chpl",
  /* 10 */ "$CHPL_HOME/modules/internal/ChapelEnv.chpl",
  /* 11 */ "$CHPL_HOME/modules/internal/MemConsistency.chpl",
  /* 12 */ "$CHPL_HOME/modules/internal/Atomics.chpl",
  /* 13 */ "$CHPL_HOME/modules/internal/NetworkAtomics.chpl",
  /* 14 */ "$CHPL_HOME/modules/internal/NetworkAtomicTypes.chpl",
  /* 15 */ "$CHPL_HOME/modules/internal/AtomicsCommon.chpl",
  /* 16 */ "$CHPL_HOME/modules/internal/ChapelIteratorSupport.chpl",
  /* 17 */ "$CHPL_HOME/modules/internal/ChapelThreads.chpl",
  /* 18 */ "$CHPL_HOME/modules/internal/ChapelThreadsInternal.chpl",
  /* 19 */ "$CHPL_HOME/modules/internal/ChapelTasksInternal.chpl",
  /* 20 */ "$CHPL_HOME/modules/internal/ChapelTuple.chpl",
  /* 21 */ "$CHPL_HOME/modules/internal/ChapelRange.chpl",
  /* 22 */ "$CHPL_HOME/modules/internal/ChapelReduce.chpl",
  /* 23 */ "$CHPL_HOME/modules/internal/ChapelSyncvar.chpl",
  /* 24 */ "$CHPL_HOME/modules/internal/localeModels/flat/LocaleModel.chpl",
  /* 25 */ "$CHPL_HOME/modules/internal/ChapelLocale.chpl",
  /* 26 */ "$CHPL_HOME/modules/internal/DefaultRectangular.chpl",
  /* 27 */ "$CHPL_HOME/modules/internal/LocalesArray.chpl",
  /* 28 */ "$CHPL_HOME/modules/internal/ChapelArray.chpl",
  /* 29 */ "$CHPL_HOME/modules/internal/ChapelDistribution.chpl",
  /* 30 */ "$CHPL_HOME/modules/internal/ChapelIO.chpl",
  /* 31 */ "$CHPL_HOME/modules/internal/LocaleTree.chpl",
  /* 32 */ "$CHPL_HOME/modules/internal/DefaultAssociative.chpl",
  /* 33 */ "$CHPL_HOME/modules/internal/DefaultSparse.chpl",
  /* 34 */ "$CHPL_HOME/modules/internal/DefaultOpaque.chpl",
  /* 35 */ "$CHPL_HOME/modules/internal/ChapelTaskID.chpl",
  /* 36 */ "$CHPL_HOME/modules/internal/tasktable/off/ChapelTaskTable.chpl",
  /* 37 */ "$CHPL_HOME/modules/internal/MemTracking.chpl",
  /* 38 */ "$CHPL_HOME/modules/internal/ChapelUtil.chpl",
  /* 39 */ "$CHPL_HOME/modules/internal/ChapelError.chpl",
  /* 40 */ "$CHPL_HOME/modules/internal/ChapelDynDispHack.chpl",
  /* 41 */ "$CHPL_HOME/modules/internal/stopInitCommDiags.chpl",
  /* 42 */ "$CHPL_HOME/modules/internal/StringCasts.chpl",
  /* 43 */ "$CHPL_HOME/modules/internal/LocaleModelHelpFlat.chpl",
  /* 44 */ "$CHPL_HOME/modules/internal/LocaleModelHelpMem.chpl",
  /* 45 */ "$CHPL_HOME/modules/internal/ArrayViewSlice.chpl",
  /* 46 */ "$CHPL_HOME/modules/internal/ArrayViewRankChange.chpl",
  /* 47 */ "$CHPL_HOME/modules/internal/ArrayViewReindex.chpl",
  /* 48 */ "$CHPL_HOME/modules/internal/LocaleModelHelpSetup.chpl",
  /* 49 */ "$CHPL_HOME/modules/internal/LocaleModelHelpRuntime.chpl",
  /* 50 */ "$CHPL_HOME/modules/internal/ChapelNumLocales.chpl",
  /* 51 */ "queues/distributed/FCHQueue.chpl",
  /* 52 */ "queues/Queue.chpl",
  /* 53 */ "misc/LocalAtomicObject.chpl",
  /* 54 */ "misc/FCHLock.chpl",
  /* 55 */ "misc/Bitmap.chpl",
  /* 56 */ "misc/GDT.chpl",
  /* 57 */ "$CHPL_HOME/modules/standard/List.chpl",
  /* 58 */ "$CHPL_HOME/modules/dists/ReplicatedDist.chpl",
  /* 59 */ "$CHPL_HOME/modules/dists/CyclicDist.chpl",
  /* 60 */ "$CHPL_HOME/modules/standard/Time.chpl",
  /* 61 */ "$CHPL_HOME/modules/dists/OldReplicatedDist.chpl",
  /* 62 */ "$CHPL_HOME/modules/dists/DSIUtil.chpl",
  /* 63 */ "$CHPL_HOME/modules/standard/Assert.chpl",
  /* 64 */ "$CHPL_HOME/modules/standard/Types.chpl",
  /* 65 */ "$CHPL_HOME/modules/standard/Math.chpl",
  /* 66 */ "$CHPL_HOME/modules/standard/CommDiagnostics.chpl",
  /* 67 */ "$CHPL_HOME/modules/standard/gen/linux64-gnu/SysCTypes.chpl",
  /* 68 */ "$CHPL_HOME/modules/packages/Sort.chpl",
  /* 69 */ "$CHPL_HOME/modules/standard/Reflection.chpl",
  /* 70 */ "$CHPL_HOME/modules/standard/SysBasic.chpl",
  /* 71 */ "$CHPL_HOME/modules/standard/IO.chpl",
  /* 72 */ "$CHPL_HOME/modules/packages/RangeChunk.chpl",
  /* 73 */ "$CHPL_HOME/modules/packages/Search.chpl",
  /* 74 */ "$CHPL_HOME/modules/standard/Sys.chpl",
  /* 75 */ "$CHPL_HOME/modules/standard/SysError.chpl",
  /* 76 */ "$CHPL_HOME/modules/standard/Regexp.chpl"
};
const int32_t chpl_filenameTableSize = 77;
/*** Unwind symbol tables ***/

const c_string chpl_funSymTable[] = {
  /* 0 */ "",
  /* 1 */ ""
};
const c_int chpl_filenumSymTable[] = {
  /* 0 */ INT32(0),
  /* 1 */ INT32(0)
};
const int32_t chpl_sizeSymTable = 0;
