/* ChapelSyncvar.chpl:921 */
static void chpl__init_AlignedTSupport(int64_t _ln,
                                       int32_t _fn) {
  _ref_int32_t refIndentLevel = NULL;
  if (chpl__init_AlignedTSupport_p) {
    goto _exit_chpl__init_AlignedTSupport;
  }
  printModuleInit("%*s\n", "AlignedTSupport", INT64(15));
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_AlignedTSupport_p = UINT8(true);
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_AlignedTSupport:;
  return;
}

