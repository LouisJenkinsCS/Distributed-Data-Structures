/* CPtr.chpl:21 */
static void chpl__init_CPtr(int64_t _ln,
                            int32_t _fn) {
  _ref_int32_t refIndentLevel = NULL;
  if (chpl__init_CPtr_p) {
    goto _exit_chpl__init_CPtr;
  }
  printModuleInit("%*s\n", "CPtr", INT64(4));
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_CPtr_p = UINT8(true);
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_CPtr:;
  return;
}

