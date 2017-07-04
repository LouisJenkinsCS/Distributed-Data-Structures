/* ChapelNumLocales.chpl:22 */
static void chpl__init_ChapelNumLocales(int64_t _ln,
                                        int32_t _fn) {
  _ref_int32_t refIndentLevel = NULL;
  int64_t T;
  chpl_bool call_tmp2;
  chpl_bool call_tmp3;
  int64_t call_tmp4;
  c_string call_tmp5;
  if (chpl__init_ChapelNumLocales_p) {
    goto _exit_chpl__init_ChapelNumLocales;
  }
  printModuleInit("%*s\n", "ChapelNumLocales", INT64(16));
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_ChapelNumLocales_p = UINT8(true);
  call_tmp2 = chpl_config_has_value("numLocales", "Built-in");
  call_tmp3 = (! call_tmp2);
  if (call_tmp3) {
    call_tmp4 = chpl_comm_default_num_locales();
    T = call_tmp4;
  } else {
    call_tmp5 = chpl_config_get_value("numLocales", "Built-in");
    T = _command_line_cast(call_tmp5);
  }
  numLocales = T;
  chpl_comm_broadcast_private(INT64(31), sizeof(int64_t), -1);
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_ChapelNumLocales:;
  return;
}

