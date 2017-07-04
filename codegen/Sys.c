/* Sys.chpl:44 */
static void chpl__init_Sys(int64_t _ln_chpl,
                           int32_t _fn_chpl) {
  _ref_int32_t refIndentLevel_chpl = NULL;
  if (chpl__init_Sys_p) {
    goto _exit_chpl__init_Sys_chpl;
  }
  printModuleInit("%*s\n", "Sys", INT64(3));
  refIndentLevel_chpl = &moduleInitLevel;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_Sys_p = UINT8(true);
  {
    chpl__init_SysBasic(INT64(44), INT32(74));
  }
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_Sys_chpl:;
  return;
}

