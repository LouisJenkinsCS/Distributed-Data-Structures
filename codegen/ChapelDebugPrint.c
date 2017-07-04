/* ChapelDebugPrint.chpl:28 */
static void chpl__init_ChapelDebugPrint(int64_t _ln,
                                        int32_t _fn) {
  _ref_int32_t refIndentLevel = NULL;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_558;
  chpl_bool chpl_macro_tmp_559;
  if (chpl__init_ChapelDebugPrint_p) {
    goto _exit_chpl__init_ChapelDebugPrint;
  }
  printModuleInit("%*s\n", "ChapelDebugPrint", INT64(16));
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_ChapelDebugPrint_p = UINT8(true);
  chpl_macro_tmp_558.locale = (&chpl__testParOn)->locale;
  chpl_macro_tmp_558.addr = &(((&chpl__testParOn)->addr)->value);
  chpl_macro_tmp_559 = UINT8(false);
  chpl_gen_comm_put(((void*)(&chpl_macro_tmp_559)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_558).locale), INT64(0), INT32(0)), (chpl_macro_tmp_558).addr, sizeof(chpl_bool), -1, COMMID(0), INT64(67), INT64(9));
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_ChapelDebugPrint:;
  return;
}

