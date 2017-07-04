/* CString.chpl:41 */
static void chpl__init_CString(int64_t _ln,
                               int32_t _fn) {
  _ref_int32_t refIndentLevel = NULL;
  if (chpl__init_CString_p) {
    goto _exit_chpl__init_CString;
  }
  printModuleInit("%*s\n", "CString", INT64(7));
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_CString_p = UINT8(true);
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_CString:;
  return;
}

