/* RangeChunk.chpl:36 */
static void chpl__init_RangeChunk(int64_t _ln_chpl,
                                  int32_t _fn_chpl) {
  _ref_int32_t refIndentLevel_chpl = NULL;
  if (chpl__init_RangeChunk_p) {
    goto _exit_chpl__init_RangeChunk_chpl;
  }
  printModuleInit("%*s\n", "RangeChunk", INT64(10));
  refIndentLevel_chpl = &moduleInitLevel;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_RangeChunk_p = UINT8(true);
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_RangeChunk_chpl:;
  return;
}

