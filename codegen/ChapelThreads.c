/* ChapelThreads.chpl:29 */
static void chpl__init_ChapelThreads(int64_t _ln,
                                     int32_t _fn) {
  _ref_int32_t refIndentLevel = NULL;
  int32_t call_tmp2;
  if (chpl__init_ChapelThreads_p) {
    goto _exit_chpl__init_ChapelThreads;
  }
  printModuleInit("%*s\n", "ChapelThreads", INT64(13));
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_ChapelThreads_p = UINT8(true);
  call_tmp2 = chpl_task_getenvNumThreadsPerLocale();
  numThreadsPerLocale = ((int64_t)(call_tmp2));
  chpl_comm_broadcast_private(INT64(14), sizeof(int64_t), -1);
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_ChapelThreads:;
  return;
}

