/* ChapelSyncvar.chpl:840 */
static void chpl__init_SyncVarRuntimeSupport(int64_t _ln,
                                             int32_t _fn) {
  _ref_int32_t refIndentLevel = NULL;
  if (chpl__init_SyncVarRuntimeSupport_p) {
    goto _exit_chpl__init_SyncVarRuntimeSupport;
  }
  printModuleInit("%*s\n", "SyncVarRuntimeSupport", INT64(21));
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_SyncVarRuntimeSupport_p = UINT8(true);
  {
    chpl__init_AlignedTSupport(INT64(840), INT32(23));
  }
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_SyncVarRuntimeSupport:;
  return;
}

