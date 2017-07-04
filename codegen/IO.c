/* IO.chpl:1149 */
static void chpl__init_IO(int64_t _ln_chpl,
                          int32_t _fn_chpl) {
  _ref_int32_t refIndentLevel_chpl = NULL;
  string local__str_literal_2579_chpl;
  string local__str_literal_2577_chpl;
  string local__str_literal_2575_chpl;
  string local__str_literal_2573_chpl;
  string local__str_literal_2571_chpl;
  string local__str_literal_392_chpl;
  string local__str_literal_2421_chpl;
  string local__str_literal_2419_chpl;
  string local__str_literal_2417_chpl;
  string local__str_literal_2415_chpl;
  string inlineImm_chpl;
  string inlineImm_chpl2;
  string inlineImm_chpl3;
  string inlineImm_chpl4;
  string inlineImm_chpl5;
  string inlineImm_chpl6;
  _tuple_6_star_string tmp_chpl;
  string elt_x1_chpl;
  _ref_string i_s_chpl = NULL;
  string elt_x2_chpl;
  _ref_string i_s_chpl2 = NULL;
  string elt_x3_chpl;
  _ref_string i_s_chpl3 = NULL;
  string elt_x4_chpl;
  _ref_string i_s_chpl4 = NULL;
  string elt_x5_chpl;
  _ref_string i_s_chpl5 = NULL;
  string elt_x6_chpl;
  _ref_string i_s_chpl6 = NULL;
  channel_F_dynamic_T_chpl type_tmp_chpl;
  channel_F_dynamic_T_chpl this_chpl6;
  chpl____wide_locale tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_locale tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  locale call_tmp_chpl = NULL;
  chpl____wide_locale tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  qio_channel_ptr_t default_arg_channel_internal_chpl;
  locale call_tmp_chpl2 = NULL;
  chpl____wide_locale tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  channel_F_dynamic_T_chpl ret_tmp_chpl;
  _ref_channel_F_dynamic_T ret_to_arg_ref_tmp__chpl = NULL;
  file_chpl call_tmp_chpl3;
  int32_t call_tmp_chpl4;
  int32_t default_arghints_chpl;
  iostyle call_tmp_chpl5;
  iostyle ret_tmp_chpl2;
  _ref_iostyle ret_to_arg_ref_tmp__chpl2 = NULL;
  file_chpl ret_tmp_chpl3;
  _ref_file ret_to_arg_ref_tmp__chpl3 = NULL;
  _ref_iostyle i_style_chpl = NULL;
  channel_F_dynamic_T_chpl call_tmp_chpl6;
  _ref_file _ref_tmp__chpl = NULL;
  int32_t default_arghints_chpl2;
  iostyle call_tmp_chpl7;
  iostyle ret_tmp_chpl4;
  _ref_iostyle ret_to_arg_ref_tmp__chpl4 = NULL;
  channel_F_dynamic_T_chpl ret_tmp_chpl5;
  _ref_channel_F_dynamic_T ret_to_arg_ref_tmp__chpl5 = NULL;
  _ref_iostyle i_style_chpl2 = NULL;
  _ref_channel_F_dynamic_T _ref_tmp__chpl2 = NULL;
  chpl____wide__ref_channel_F_dynamic_T tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  channel_T_dynamic_T_chpl type_tmp_chpl2;
  channel_T_dynamic_T_chpl this_chpl7;
  chpl____wide_locale tmp_chpl7 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_locale tmp_chpl8 = {CHPL_LOCALEID_T_INIT, NULL};
  locale call_tmp_chpl8 = NULL;
  chpl____wide_locale tmp_chpl9 = {CHPL_LOCALEID_T_INIT, NULL};
  qio_channel_ptr_t default_arg_channel_internal_chpl2;
  locale call_tmp_chpl9 = NULL;
  chpl____wide_locale tmp_chpl10 = {CHPL_LOCALEID_T_INIT, NULL};
  channel_T_dynamic_T_chpl ret_tmp_chpl6;
  _ref_channel_T_dynamic_T ret_to_arg_ref_tmp__chpl6 = NULL;
  _cfile call_tmp_chpl10;
  file_chpl call_tmp_chpl11;
  int32_t default_arghints_chpl3;
  iostyle call_tmp_chpl12;
  iostyle ret_tmp_chpl7;
  _ref_iostyle ret_to_arg_ref_tmp__chpl7 = NULL;
  file_chpl ret_tmp_chpl8;
  _ref_file ret_to_arg_ref_tmp__chpl8 = NULL;
  _ref_iostyle i_style_chpl3 = NULL;
  channel_T_dynamic_T_chpl call_tmp_chpl13;
  _ref_file _ref_tmp__chpl3 = NULL;
  iostyle call_tmp_chpl14;
  iostyle ret_tmp_chpl9;
  _ref_iostyle ret_to_arg_ref_tmp__chpl9 = NULL;
  channel_T_dynamic_T_chpl ret_tmp_chpl10;
  _ref_channel_T_dynamic_T ret_to_arg_ref_tmp__chpl10 = NULL;
  _ref_iostyle i_style_chpl4 = NULL;
  _ref_channel_T_dynamic_T _ref_tmp__chpl4 = NULL;
  chpl____wide__ref_channel_T_dynamic_T tmp_chpl11 = {CHPL_LOCALEID_T_INIT, NULL};
  channel_T_dynamic_T_chpl type_tmp_chpl3;
  channel_T_dynamic_T_chpl this_chpl8;
  chpl____wide_locale tmp_chpl12 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_locale tmp_chpl13 = {CHPL_LOCALEID_T_INIT, NULL};
  locale call_tmp_chpl15 = NULL;
  chpl____wide_locale tmp_chpl14 = {CHPL_LOCALEID_T_INIT, NULL};
  qio_channel_ptr_t default_arg_channel_internal_chpl3;
  locale call_tmp_chpl16 = NULL;
  chpl____wide_locale tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  channel_T_dynamic_T_chpl ret_tmp_chpl11;
  _ref_channel_T_dynamic_T ret_to_arg_ref_tmp__chpl11 = NULL;
  _cfile call_tmp_chpl17;
  file_chpl call_tmp_chpl18;
  int32_t default_arghints_chpl4;
  iostyle call_tmp_chpl19;
  iostyle ret_tmp_chpl12;
  _ref_iostyle ret_to_arg_ref_tmp__chpl12 = NULL;
  file_chpl ret_tmp_chpl13;
  _ref_file ret_to_arg_ref_tmp__chpl13 = NULL;
  _ref_iostyle i_style_chpl5 = NULL;
  channel_T_dynamic_T_chpl call_tmp_chpl20;
  _ref_file _ref_tmp__chpl5 = NULL;
  iostyle call_tmp_chpl21;
  iostyle ret_tmp_chpl14;
  _ref_iostyle ret_to_arg_ref_tmp__chpl14 = NULL;
  channel_T_dynamic_T_chpl ret_tmp_chpl15;
  _ref_channel_T_dynamic_T ret_to_arg_ref_tmp__chpl15 = NULL;
  _ref_iostyle i_style_chpl6 = NULL;
  _ref_channel_T_dynamic_T _ref_tmp__chpl6 = NULL;
  chpl____wide__ref_channel_T_dynamic_T tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_channel_T_dynamic_T _ref_tmp__chpl7 = NULL;
  _ref_file _ref_tmp__chpl8 = NULL;
  _ref_channel_T_dynamic_T _ref_tmp__chpl9 = NULL;
  _ref_file _ref_tmp__chpl10 = NULL;
  _ref_channel_F_dynamic_T _ref_tmp__chpl11 = NULL;
  _ref_file _ref_tmp__chpl12 = NULL;
  chpl____wide__ref_string chpl_macro_tmp_7206;
  chpl____wide__ref_string chpl_macro_tmp_7207;
  chpl____wide__ref_string chpl_macro_tmp_7208;
  chpl____wide__ref_string chpl_macro_tmp_7209;
  chpl____wide__ref__tuple_6_star_string chpl_macro_tmp_7210;
  chpl____wide__nilType chpl_macro_tmp_7211;
  chpl____wide_locale chpl_macro_tmp_7212;
  chpl____wide__nilType chpl_macro_tmp_7213;
  chpl____wide_locale chpl_macro_tmp_7214;
  chpl____wide_locale chpl_macro_tmp_7215;
  chpl____wide_locale chpl_macro_tmp_7216;
  chpl____wide__ref_channel_F_dynamic_T chpl_macro_tmp_7217;
  chpl____wide__nilType chpl_macro_tmp_7218;
  chpl____wide_locale chpl_macro_tmp_7219;
  chpl____wide__nilType chpl_macro_tmp_7220;
  chpl____wide_locale chpl_macro_tmp_7221;
  chpl____wide_locale chpl_macro_tmp_7222;
  chpl____wide_locale chpl_macro_tmp_7223;
  chpl____wide__ref_channel_T_dynamic_T chpl_macro_tmp_7224;
  chpl____wide__nilType chpl_macro_tmp_7225;
  chpl____wide_locale chpl_macro_tmp_7226;
  chpl____wide__nilType chpl_macro_tmp_7227;
  chpl____wide_locale chpl_macro_tmp_7228;
  chpl____wide_locale chpl_macro_tmp_7229;
  chpl____wide_locale chpl_macro_tmp_7230;
  chpl____wide__ref_channel_T_dynamic_T chpl_macro_tmp_7231;
  if (chpl__init_IO_p) {
    goto _exit_chpl__init_IO_chpl;
  }
  printModuleInit("%*s\n", "IO", INT64(2));
  refIndentLevel_chpl = &moduleInitLevel;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_IO_p = UINT8(true);
  {
    chpl__init_SysBasic(INT64(1149), INT32(71));
    chpl__init_SysError(INT64(1149), INT32(71));
    chpl__init_Regexp(INT64(1149), INT32(71));
  }
  chpl_addModule("IO", ((c_fn_ptr)(chpl__deinit_IO)));
  local__str_literal_2579_chpl /* "f" */ = _str_literal_2579 /* "f" */;
  local__str_literal_2577_chpl /* "e" */ = _str_literal_2577 /* "e" */;
  local__str_literal_2575_chpl /* "d" */ = _str_literal_2575 /* "d" */;
  local__str_literal_2573_chpl /* "c" */ = _str_literal_2573 /* "c" */;
  local__str_literal_2571_chpl /* "b" */ = _str_literal_2571 /* "b" */;
  local__str_literal_392_chpl /* "a" */ = _str_literal_392 /* "a" */;
  local__str_literal_2421_chpl /* "w+" */ = _str_literal_2421 /* "w+" */;
  local__str_literal_2419_chpl /* "w" */ = _str_literal_2419 /* "w" */;
  local__str_literal_2417_chpl /* "r+" */ = _str_literal_2417 /* "r+" */;
  local__str_literal_2415_chpl /* "r" */ = _str_literal_2415 /* "r" */;
  IOHINT_NONE_chpl = INT32(0);
  chpl_comm_broadcast_private(INT64(40), sizeof(int32_t), -1);
  IOHINT_RANDOM_chpl = QIO_HINT_RANDOM;
  chpl_comm_broadcast_private(INT64(41), sizeof(int32_t), -1);
  IOHINT_SEQUENTIAL_chpl = QIO_HINT_SEQUENTIAL;
  chpl_comm_broadcast_private(INT64(42), sizeof(int32_t), -1);
  IOHINT_CACHED_chpl = QIO_HINT_CACHED;
  chpl_comm_broadcast_private(INT64(43), sizeof(int32_t), -1);
  IOHINT_PARALLEL_chpl = QIO_HINT_PARALLEL;
  chpl_comm_broadcast_private(INT64(44), sizeof(int32_t), -1);
  chpl_macro_tmp_7206.locale = (&_r_chpl)->locale;
  chpl_macro_tmp_7206.addr = &(((&_r_chpl)->addr)->value);
  chpl_gen_comm_put(((void*)(&local__str_literal_2415_chpl /* "r" */)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_7206).locale), INT64(0), INT32(0)), (chpl_macro_tmp_7206).addr, sizeof(string), -1, COMMID(0), INT64(2257), INT64(71));
  chpl_macro_tmp_7207.locale = (&_rw_chpl)->locale;
  chpl_macro_tmp_7207.addr = &(((&_rw_chpl)->addr)->value);
  chpl_gen_comm_put(((void*)(&local__str_literal_2417_chpl /* "r+" */)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_7207).locale), INT64(0), INT32(0)), (chpl_macro_tmp_7207).addr, sizeof(string), -1, COMMID(1), INT64(2258), INT64(71));
  chpl_macro_tmp_7208.locale = (&_cw_chpl)->locale;
  chpl_macro_tmp_7208.addr = &(((&_cw_chpl)->addr)->value);
  chpl_gen_comm_put(((void*)(&local__str_literal_2419_chpl /* "w" */)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_7208).locale), INT64(0), INT32(0)), (chpl_macro_tmp_7208).addr, sizeof(string), -1, COMMID(2), INT64(2259), INT64(71));
  chpl_macro_tmp_7209.locale = (&_cwr_chpl)->locale;
  chpl_macro_tmp_7209.addr = &(((&_cwr_chpl)->addr)->value);
  chpl_gen_comm_put(((void*)(&local__str_literal_2421_chpl /* "w+" */)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_7209).locale), INT64(0), INT32(0)), (chpl_macro_tmp_7209).addr, sizeof(string), -1, COMMID(3), INT64(2260), INT64(71));
  inlineImm_chpl = local__str_literal_392_chpl /* "a" */;
  inlineImm_chpl2 = local__str_literal_2571_chpl /* "b" */;
  inlineImm_chpl3 = local__str_literal_2573_chpl /* "c" */;
  inlineImm_chpl4 = local__str_literal_2575_chpl /* "d" */;
  inlineImm_chpl5 = local__str_literal_2577_chpl /* "e" */;
  inlineImm_chpl6 = local__str_literal_2579_chpl /* "f" */;
  i_s_chpl = &inlineImm_chpl;
  elt_x1_chpl = chpl__autoCopy6(i_s_chpl);
  i_s_chpl2 = &inlineImm_chpl2;
  elt_x2_chpl = chpl__autoCopy6(i_s_chpl2);
  i_s_chpl3 = &inlineImm_chpl3;
  elt_x3_chpl = chpl__autoCopy6(i_s_chpl3);
  i_s_chpl4 = &inlineImm_chpl4;
  elt_x4_chpl = chpl__autoCopy6(i_s_chpl4);
  i_s_chpl5 = &inlineImm_chpl5;
  elt_x5_chpl = chpl__autoCopy6(i_s_chpl5);
  i_s_chpl6 = &inlineImm_chpl6;
  elt_x6_chpl = chpl__autoCopy6(i_s_chpl6);
  *(tmp_chpl + INT64(0)) = elt_x1_chpl;
  *(tmp_chpl + INT64(1)) = elt_x2_chpl;
  *(tmp_chpl + INT64(2)) = elt_x3_chpl;
  *(tmp_chpl + INT64(3)) = elt_x4_chpl;
  *(tmp_chpl + INT64(4)) = elt_x5_chpl;
  *(tmp_chpl + INT64(5)) = elt_x6_chpl;
  chpl_macro_tmp_7210.locale = (&_arg_to_proto_names_chpl)->locale;
  chpl_macro_tmp_7210.addr = &(((&_arg_to_proto_names_chpl)->addr)->value);
  chpl_gen_comm_put(((void*)(&tmp_chpl)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_7210).locale), INT64(0), INT32(0)), (chpl_macro_tmp_7210).addr, sizeof(_tuple_6_star_string), -1, COMMID(4), INT64(4126), INT64(71));
  chpl_macro_tmp_7211.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7211.addr = nil;
  chpl_macro_tmp_7212.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7212.addr = NULL;
  tmp_chpl2 = chpl_macro_tmp_7212;
  (&this_chpl6)->home_chpl = tmp_chpl2;
  chpl_macro_tmp_7213.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7213.addr = nil;
  chpl_macro_tmp_7214.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7214.addr = NULL;
  tmp_chpl3 = chpl_macro_tmp_7214;
  (&this_chpl6)->_readWriteThisFromLocale_chpl = tmp_chpl3;
  call_tmp_chpl = ((locale)(nil));
  chpl_macro_tmp_7215.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7215.addr = call_tmp_chpl;
  tmp_chpl4 = chpl_macro_tmp_7215;
  (&this_chpl6)->home_chpl = tmp_chpl4;
  default_arg_channel_internal_chpl = QIO_CHANNEL_PTR_NULL;
  (&this_chpl6)->_channel_internal_chpl = default_arg_channel_internal_chpl;
  call_tmp_chpl2 = ((locale)(nil));
  chpl_macro_tmp_7216.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7216.addr = call_tmp_chpl2;
  tmp_chpl5 = chpl_macro_tmp_7216;
  (&this_chpl6)->_readWriteThisFromLocale_chpl = tmp_chpl5;
  ret_to_arg_ref_tmp__chpl = &ret_tmp_chpl;
  _construct_channel_chpl2(call_tmp_chpl, default_arg_channel_internal_chpl, call_tmp_chpl2, &this_chpl6, ret_to_arg_ref_tmp__chpl);
  type_tmp_chpl = ret_tmp_chpl;
  call_tmp_chpl4 = ((int32_t)(INT64(0)));
  default_arghints_chpl = IOHINT_NONE_chpl;
  ret_to_arg_ref_tmp__chpl2 = &ret_tmp_chpl2;
  defaultIOStyle_chpl(ret_to_arg_ref_tmp__chpl2);
  call_tmp_chpl5 = ret_tmp_chpl2;
  ret_to_arg_ref_tmp__chpl3 = &ret_tmp_chpl3;
  i_style_chpl = &call_tmp_chpl5;
  openfd_chpl2(call_tmp_chpl4, default_arghints_chpl, i_style_chpl, ret_to_arg_ref_tmp__chpl3);
  call_tmp_chpl3 = ret_tmp_chpl3;
  _ref_tmp__chpl = &call_tmp_chpl3;
  default_arghints_chpl2 = IOHINT_NONE_chpl;
  ret_to_arg_ref_tmp__chpl4 = &ret_tmp_chpl4;
  _style_chpl(_ref_tmp__chpl, ret_to_arg_ref_tmp__chpl4);
  call_tmp_chpl7 = ret_tmp_chpl4;
  ret_to_arg_ref_tmp__chpl5 = &ret_tmp_chpl5;
  i_style_chpl2 = &call_tmp_chpl7;
  reader_chpl3(_ref_tmp__chpl, INT64(0), INT64(9223372036854775807), default_arghints_chpl2, i_style_chpl2, ret_to_arg_ref_tmp__chpl5);
  call_tmp_chpl6 = ret_tmp_chpl5;
  _ref_tmp__chpl2 = &type_tmp_chpl;
  chpl_macro_tmp_7217.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7217.addr = _ref_tmp__chpl2;
  tmp_chpl6 = chpl_macro_tmp_7217;
  chpl___ASSIGN_15(tmp_chpl6, &ret_tmp_chpl5);
  stdin_chpl = type_tmp_chpl;
  chpl_comm_broadcast_private(INT64(45), sizeof(channel_F_dynamic_T_chpl), -1);
  chpl_macro_tmp_7218.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7218.addr = nil;
  chpl_macro_tmp_7219.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7219.addr = NULL;
  tmp_chpl7 = chpl_macro_tmp_7219;
  (&this_chpl7)->home_chpl = tmp_chpl7;
  chpl_macro_tmp_7220.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7220.addr = nil;
  chpl_macro_tmp_7221.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7221.addr = NULL;
  tmp_chpl8 = chpl_macro_tmp_7221;
  (&this_chpl7)->_readWriteThisFromLocale_chpl = tmp_chpl8;
  call_tmp_chpl8 = ((locale)(nil));
  chpl_macro_tmp_7222.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7222.addr = call_tmp_chpl8;
  tmp_chpl9 = chpl_macro_tmp_7222;
  (&this_chpl7)->home_chpl = tmp_chpl9;
  default_arg_channel_internal_chpl2 = QIO_CHANNEL_PTR_NULL;
  (&this_chpl7)->_channel_internal_chpl = default_arg_channel_internal_chpl2;
  call_tmp_chpl9 = ((locale)(nil));
  chpl_macro_tmp_7223.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7223.addr = call_tmp_chpl9;
  tmp_chpl10 = chpl_macro_tmp_7223;
  (&this_chpl7)->_readWriteThisFromLocale_chpl = tmp_chpl10;
  ret_to_arg_ref_tmp__chpl6 = &ret_tmp_chpl6;
  _construct_channel_chpl3(call_tmp_chpl8, default_arg_channel_internal_chpl2, call_tmp_chpl9, &this_chpl7, ret_to_arg_ref_tmp__chpl6);
  type_tmp_chpl2 = ret_tmp_chpl6;
  call_tmp_chpl10 = chpl_cstdout();
  default_arghints_chpl3 = IOHINT_NONE_chpl;
  ret_to_arg_ref_tmp__chpl7 = &ret_tmp_chpl7;
  defaultIOStyle_chpl(ret_to_arg_ref_tmp__chpl7);
  call_tmp_chpl12 = ret_tmp_chpl7;
  ret_to_arg_ref_tmp__chpl8 = &ret_tmp_chpl8;
  i_style_chpl3 = &call_tmp_chpl12;
  openfp_chpl2(call_tmp_chpl10, default_arghints_chpl3, i_style_chpl3, ret_to_arg_ref_tmp__chpl8);
  call_tmp_chpl11 = ret_tmp_chpl8;
  _ref_tmp__chpl3 = &call_tmp_chpl11;
  ret_to_arg_ref_tmp__chpl9 = &ret_tmp_chpl9;
  _style_chpl(_ref_tmp__chpl3, ret_to_arg_ref_tmp__chpl9);
  call_tmp_chpl14 = ret_tmp_chpl9;
  ret_to_arg_ref_tmp__chpl10 = &ret_tmp_chpl10;
  i_style_chpl4 = &call_tmp_chpl14;
  writer_chpl3(_ref_tmp__chpl3, INT64(0), INT64(9223372036854775807), ((int32_t)(INT64(0))), i_style_chpl4, ret_to_arg_ref_tmp__chpl10);
  call_tmp_chpl13 = ret_tmp_chpl10;
  _ref_tmp__chpl4 = &type_tmp_chpl2;
  chpl_macro_tmp_7224.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7224.addr = _ref_tmp__chpl4;
  tmp_chpl11 = chpl_macro_tmp_7224;
  chpl___ASSIGN_14(tmp_chpl11, &ret_tmp_chpl10);
  stdout_chpl = type_tmp_chpl2;
  chpl_comm_broadcast_private(INT64(46), sizeof(channel_T_dynamic_T_chpl), -1);
  chpl_macro_tmp_7225.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7225.addr = nil;
  chpl_macro_tmp_7226.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7226.addr = NULL;
  tmp_chpl12 = chpl_macro_tmp_7226;
  (&this_chpl8)->home_chpl = tmp_chpl12;
  chpl_macro_tmp_7227.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7227.addr = nil;
  chpl_macro_tmp_7228.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7228.addr = NULL;
  tmp_chpl13 = chpl_macro_tmp_7228;
  (&this_chpl8)->_readWriteThisFromLocale_chpl = tmp_chpl13;
  call_tmp_chpl15 = ((locale)(nil));
  chpl_macro_tmp_7229.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7229.addr = call_tmp_chpl15;
  tmp_chpl14 = chpl_macro_tmp_7229;
  (&this_chpl8)->home_chpl = tmp_chpl14;
  default_arg_channel_internal_chpl3 = QIO_CHANNEL_PTR_NULL;
  (&this_chpl8)->_channel_internal_chpl = default_arg_channel_internal_chpl3;
  call_tmp_chpl16 = ((locale)(nil));
  chpl_macro_tmp_7230.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7230.addr = call_tmp_chpl16;
  tmp_chpl15 = chpl_macro_tmp_7230;
  (&this_chpl8)->_readWriteThisFromLocale_chpl = tmp_chpl15;
  ret_to_arg_ref_tmp__chpl11 = &ret_tmp_chpl11;
  _construct_channel_chpl3(call_tmp_chpl15, default_arg_channel_internal_chpl3, call_tmp_chpl16, &this_chpl8, ret_to_arg_ref_tmp__chpl11);
  type_tmp_chpl3 = ret_tmp_chpl11;
  call_tmp_chpl17 = chpl_cstderr();
  default_arghints_chpl4 = IOHINT_NONE_chpl;
  ret_to_arg_ref_tmp__chpl12 = &ret_tmp_chpl12;
  defaultIOStyle_chpl(ret_to_arg_ref_tmp__chpl12);
  call_tmp_chpl19 = ret_tmp_chpl12;
  ret_to_arg_ref_tmp__chpl13 = &ret_tmp_chpl13;
  i_style_chpl5 = &call_tmp_chpl19;
  openfp_chpl2(call_tmp_chpl17, default_arghints_chpl4, i_style_chpl5, ret_to_arg_ref_tmp__chpl13);
  call_tmp_chpl18 = ret_tmp_chpl13;
  _ref_tmp__chpl5 = &call_tmp_chpl18;
  ret_to_arg_ref_tmp__chpl14 = &ret_tmp_chpl14;
  _style_chpl(_ref_tmp__chpl5, ret_to_arg_ref_tmp__chpl14);
  call_tmp_chpl21 = ret_tmp_chpl14;
  ret_to_arg_ref_tmp__chpl15 = &ret_tmp_chpl15;
  i_style_chpl6 = &call_tmp_chpl21;
  writer_chpl3(_ref_tmp__chpl5, INT64(0), INT64(9223372036854775807), ((int32_t)(INT64(0))), i_style_chpl6, ret_to_arg_ref_tmp__chpl15);
  call_tmp_chpl20 = ret_tmp_chpl15;
  _ref_tmp__chpl6 = &type_tmp_chpl3;
  chpl_macro_tmp_7231.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7231.addr = _ref_tmp__chpl6;
  tmp_chpl16 = chpl_macro_tmp_7231;
  chpl___ASSIGN_14(tmp_chpl16, &ret_tmp_chpl15);
  stderr_chpl = type_tmp_chpl3;
  chpl_comm_broadcast_private(INT64(47), sizeof(channel_T_dynamic_T_chpl), -1);
  _ref_tmp__chpl7 = &call_tmp_chpl20;
  deinit_chpl3(_ref_tmp__chpl7);
  _ref_tmp__chpl8 = &call_tmp_chpl18;
  deinit_chpl(_ref_tmp__chpl8);
  _ref_tmp__chpl9 = &call_tmp_chpl13;
  deinit_chpl3(_ref_tmp__chpl9);
  _ref_tmp__chpl10 = &call_tmp_chpl11;
  deinit_chpl(_ref_tmp__chpl10);
  _ref_tmp__chpl11 = &call_tmp_chpl6;
  deinit_chpl2(_ref_tmp__chpl11);
  _ref_tmp__chpl12 = &call_tmp_chpl3;
  deinit_chpl(_ref_tmp__chpl12);
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_IO_chpl:;
  return;
}

/* IO.chpl:1149 */
static void chpl__deinit_IO(void) {
  chpl____wide_heap_string local__r_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_heap_string local__rw_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_heap_string local__cw_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_heap_string local__cwr_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_channel_T_dynamic_T _ref_tmp__chpl = NULL;
  _ref_channel_T_dynamic_T _ref_tmp__chpl2 = NULL;
  _ref_channel_F_dynamic_T _ref_tmp__chpl3 = NULL;
  chpl____wide__ref__tuple_6_star_string tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string _field_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string _field_destructor_tmp__chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string _field_destructor_tmp__chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string _field_destructor_tmp__chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string _field_destructor_tmp__chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string _field_destructor_tmp__chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string _ref_tmp__chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string _ref_tmp__chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string _ref_tmp__chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string _ref_tmp__chpl7 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__tuple_6_star_string chpl_macro_tmp_7232;
  chpl____wide__ref_string chpl_macro_tmp_7233;
  chpl____wide__ref_string chpl_macro_tmp_7234;
  chpl____wide__ref_string chpl_macro_tmp_7235;
  chpl____wide__ref_string chpl_macro_tmp_7236;
  chpl____wide__ref_string chpl_macro_tmp_7237;
  chpl____wide__ref_string chpl_macro_tmp_7238;
  chpl____wide__ref_string chpl_macro_tmp_7239;
  chpl____wide__ref_string chpl_macro_tmp_7240;
  chpl____wide__ref_string chpl_macro_tmp_7241;
  chpl____wide__ref_string chpl_macro_tmp_7242;
  local__r_chpl = _r_chpl;
  local__rw_chpl = _rw_chpl;
  local__cw_chpl = _cw_chpl;
  local__cwr_chpl = _cwr_chpl;
  _ref_tmp__chpl = &stderr_chpl;
  deinit_chpl3(_ref_tmp__chpl);
  _ref_tmp__chpl2 = &stdout_chpl;
  deinit_chpl3(_ref_tmp__chpl2);
  _ref_tmp__chpl3 = &stdin_chpl;
  deinit_chpl2(_ref_tmp__chpl3);
  chpl_macro_tmp_7232.locale = (&_arg_to_proto_names_chpl)->locale;
  chpl_macro_tmp_7232.addr = &(((&_arg_to_proto_names_chpl)->addr)->value);
  tmp_chpl = chpl_macro_tmp_7232;
  chpl_macro_tmp_7233.locale = (tmp_chpl).locale;
  chpl_macro_tmp_7233.addr = (*((tmp_chpl).addr) + INT64(5));
  _field_destructor_tmp__chpl = chpl_macro_tmp_7233;
  deinit44(_field_destructor_tmp__chpl);
  chpl_macro_tmp_7234.locale = (tmp_chpl).locale;
  chpl_macro_tmp_7234.addr = (*((tmp_chpl).addr) + INT64(4));
  _field_destructor_tmp__chpl2 = chpl_macro_tmp_7234;
  deinit44(_field_destructor_tmp__chpl2);
  chpl_macro_tmp_7235.locale = (tmp_chpl).locale;
  chpl_macro_tmp_7235.addr = (*((tmp_chpl).addr) + INT64(3));
  _field_destructor_tmp__chpl3 = chpl_macro_tmp_7235;
  deinit44(_field_destructor_tmp__chpl3);
  chpl_macro_tmp_7236.locale = (tmp_chpl).locale;
  chpl_macro_tmp_7236.addr = (*((tmp_chpl).addr) + INT64(2));
  _field_destructor_tmp__chpl4 = chpl_macro_tmp_7236;
  deinit44(_field_destructor_tmp__chpl4);
  chpl_macro_tmp_7237.locale = (tmp_chpl).locale;
  chpl_macro_tmp_7237.addr = (*((tmp_chpl).addr) + INT64(1));
  _field_destructor_tmp__chpl5 = chpl_macro_tmp_7237;
  deinit44(_field_destructor_tmp__chpl5);
  chpl_macro_tmp_7238.locale = (tmp_chpl).locale;
  chpl_macro_tmp_7238.addr = (*((tmp_chpl).addr) + INT64(0));
  _field_destructor_tmp__chpl6 = chpl_macro_tmp_7238;
  deinit44(_field_destructor_tmp__chpl6);
  chpl_macro_tmp_7239.locale = (&local__cwr_chpl)->locale;
  chpl_macro_tmp_7239.addr = &(((&local__cwr_chpl)->addr)->value);
  tmp_chpl2 = chpl_macro_tmp_7239;
  _ref_tmp__chpl4 = tmp_chpl2;
  deinit44(_ref_tmp__chpl4);
  chpl_macro_tmp_7240.locale = (&local__cw_chpl)->locale;
  chpl_macro_tmp_7240.addr = &(((&local__cw_chpl)->addr)->value);
  tmp_chpl3 = chpl_macro_tmp_7240;
  _ref_tmp__chpl5 = tmp_chpl3;
  deinit44(_ref_tmp__chpl5);
  chpl_macro_tmp_7241.locale = (&local__rw_chpl)->locale;
  chpl_macro_tmp_7241.addr = &(((&local__rw_chpl)->addr)->value);
  tmp_chpl4 = chpl_macro_tmp_7241;
  _ref_tmp__chpl6 = tmp_chpl4;
  deinit44(_ref_tmp__chpl6);
  chpl_macro_tmp_7242.locale = (&local__r_chpl)->locale;
  chpl_macro_tmp_7242.addr = &(((&local__r_chpl)->addr)->value);
  tmp_chpl5 = chpl_macro_tmp_7242;
  _ref_tmp__chpl7 = tmp_chpl5;
  deinit44(_ref_tmp__chpl7);
  return;
}

/* IO.chpl:1892 */
static void defaultIOStyle_chpl(_ref_iostyle _retArg_chpl) {
  iostyle ret_chpl;
  iostyle type_tmp_chpl;
  _ref_iostyle _ref_tmp__chpl = NULL;
  ret_chpl = type_tmp_chpl;
  _ref_tmp__chpl = &ret_chpl;
  qio_style_init_default(_ref_tmp__chpl);
  *(_retArg_chpl) = ret_chpl;
  return;
}

/* IO.chpl:2025 */
static void _construct_file_chpl(chpl____wide_locale home_chpl,
                                 qio_file_ptr_t _file_internal_chpl,
                                 _ref_file meme_chpl,
                                 _ref_file _retArg_chpl) {
  file_chpl this_chpl6;
  this_chpl6 = *(meme_chpl);
  (&this_chpl6)->home_chpl = home_chpl;
  (&this_chpl6)->_file_internal_chpl = _file_internal_chpl;
  *(_retArg_chpl) = this_chpl6;
  return;
}

/* IO.chpl:2059 */
static void check_chpl(_ref_file this_chpl6) {
  string local__str_literal_2399_chpl;
  chpl_bool call_tmp_chpl;
  qio_file_ptr_t coerce_tmp_chpl;
  qio_file_ptr_t tmp_chpl;
  local__str_literal_2399_chpl /* "Operation attempted on an invalid file" */ = _str_literal_2399 /* "Operation attempted on an invalid file" */;
  tmp_chpl = (this_chpl6)->_file_internal_chpl;
  coerce_tmp_chpl = tmp_chpl;
  call_tmp_chpl = is_c_nil(coerce_tmp_chpl);
  if (call_tmp_chpl) {
    halt(&local__str_literal_2399_chpl /* "Operation attempted on an invalid file" */, INT64(2061), INT32(71));
  }
  return;
}

/* IO.chpl:2066 */
static void deinit_chpl(_ref_file this_chpl6) {
  _ref__wide_locale call_tmp_chpl = NULL;
  chpl_localeID_t call_tmp_chpl2;
  chpl____wide_locale tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_file tmp_chpl2 = NULL;
  chpl_bool isdirect_chpl;
  chpl____wide__ref_file tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl13 _args_foron_fn_chpl = NULL;
  _ref_file tmp_chpl4 = NULL;
  chpl____wide__ref_file tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  chpl____wide__ref_file chpl_macro_tmp_7243;
  chpl__class_localson_fn_chpl13_object chpl_macro_tmp_7244;
  chpl____wide__ref_file chpl_macro_tmp_7245;
  call_tmp_chpl = &((this_chpl6)->home_chpl);
  tmp_chpl = *(call_tmp_chpl);
  call_tmp_chpl2 = (&tmp_chpl)->locale;
  tmp_chpl2 = this_chpl6;
  isdirect_chpl = chpl_doDirectExecuteOn(&call_tmp_chpl2);
  if (isdirect_chpl) {
    chpl_macro_tmp_7243.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7243.addr = tmp_chpl2;
    tmp_chpl3 = chpl_macro_tmp_7243;
    on_fn_chpl13(tmp_chpl3);
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn_chpl13)(&chpl_macro_tmp_7244));
    (_args_foron_fn_chpl)->_0_rvfDerefTmp_chpl = call_tmp_chpl2;
    tmp_chpl4 = this_chpl6;
    chpl_macro_tmp_7245.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7245.addr = tmp_chpl4;
    tmp_chpl5 = chpl_macro_tmp_7245;
    (_args_foron_fn_chpl)->_1_tmp_chpl = tmp_chpl5;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    /*** wrapon_fn_chpl13 ***/ chpl_executeOn(&call_tmp_chpl2, INT32(269), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), sizeof(chpl__class_localson_fn_chpl13_object), INT64(2067), INT32(71));
  }
  return;
}

/* IO.chpl:2067 */
static void on_fn_chpl13(chpl____wide__ref_file this_chpl6) {
  qio_file_ptr_t local_QIO_FILE_PTR_NULL_chpl;
  qio_file_ptr_t coerce_tmp_chpl;
  qio_file_ptr_t tmp_chpl;
  chpl____wide__ref_qio_file_ptr_t chpl_macro_tmp_7246;
  chpl____wide__ref_qio_file_ptr_t chpl_macro_tmp_7247;
  local_QIO_FILE_PTR_NULL_chpl = QIO_FILE_PTR_NULL;
  chpl_macro_tmp_7246.locale = (this_chpl6).locale;
  chpl_macro_tmp_7246.addr = &(((this_chpl6).addr)->_file_internal_chpl);
  chpl_gen_comm_get(((void*)(&tmp_chpl)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_7246).locale), INT64(0), INT32(0)), (chpl_macro_tmp_7246).addr, sizeof(qio_file_ptr_t), -1, COMMID(5), INT64(2068), INT64(71));
  coerce_tmp_chpl = tmp_chpl;
  qio_file_release(coerce_tmp_chpl);
  chpl_macro_tmp_7247.locale = (this_chpl6).locale;
  chpl_macro_tmp_7247.addr = &(((this_chpl6).addr)->_file_internal_chpl);
  chpl_gen_comm_put(((void*)(&local_QIO_FILE_PTR_NULL_chpl)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_7247).locale), INT64(0), INT32(0)), (chpl_macro_tmp_7247).addr, sizeof(qio_file_ptr_t), -1, COMMID(6), INT64(2069), INT64(71));
  return;
}

/* IO.chpl:2067 */
static void wrapon_fn_chpl13(_class_localson_fn_chpl13 c_chpl) {
  chpl____wide__ref_file _1_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _1_tmp_chpl = (c_chpl)->_1_tmp_chpl;
  on_fn_chpl13(_1_tmp_chpl);
  return;
}

/* IO.chpl:2093 */
static void _style_chpl(_ref_file this_chpl6,
                        _ref_iostyle _retArg_chpl) {
  iostyle ret_chpl;
  iostyle type_tmp_chpl;
  _ref__wide_locale call_tmp_chpl = NULL;
  chpl_localeID_t call_tmp_chpl2;
  chpl____wide_locale tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_iostyle tmp_chpl2 = NULL;
  file_chpl rvfDerefTmp_chpl;
  chpl_bool isdirect_chpl;
  chpl____wide__ref_iostyle tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl14 _args_foron_fn_chpl = NULL;
  _ref_iostyle tmp_chpl4 = NULL;
  chpl____wide__ref_iostyle tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  chpl____wide__ref_iostyle chpl_macro_tmp_7248;
  chpl__class_localson_fn_chpl14_object chpl_macro_tmp_7249;
  chpl____wide__ref_iostyle chpl_macro_tmp_7250;
  check_chpl(this_chpl6);
  ret_chpl = type_tmp_chpl;
  call_tmp_chpl = &((this_chpl6)->home_chpl);
  tmp_chpl = *(call_tmp_chpl);
  call_tmp_chpl2 = (&tmp_chpl)->locale;
  tmp_chpl2 = &ret_chpl;
  rvfDerefTmp_chpl = *(this_chpl6);
  isdirect_chpl = chpl_doDirectExecuteOn(&call_tmp_chpl2);
  if (isdirect_chpl) {
    chpl_macro_tmp_7248.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7248.addr = tmp_chpl2;
    tmp_chpl3 = chpl_macro_tmp_7248;
    on_fn_chpl14(&rvfDerefTmp_chpl, tmp_chpl3);
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn_chpl14)(&chpl_macro_tmp_7249));
    (_args_foron_fn_chpl)->_0_rvfDerefTmp_chpl = call_tmp_chpl2;
    (_args_foron_fn_chpl)->_1_rvfDerefTmp_chpl = rvfDerefTmp_chpl;
    tmp_chpl4 = &ret_chpl;
    chpl_macro_tmp_7250.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7250.addr = tmp_chpl4;
    tmp_chpl5 = chpl_macro_tmp_7250;
    (_args_foron_fn_chpl)->_2_tmp_chpl = tmp_chpl5;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    /*** wrapon_fn_chpl14 ***/ chpl_executeOn(&call_tmp_chpl2, INT32(270), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), sizeof(chpl__class_localson_fn_chpl14_object), INT64(2097), INT32(71));
  }
  *(_retArg_chpl) = ret_chpl;
  return;
}

/* IO.chpl:2097 */
static void wrapon_fn_chpl14(_class_localson_fn_chpl14 c_chpl) {
  file_chpl _1_rvfDerefTmp_chpl;
  file_chpl tmp_chpl;
  chpl____wide__ref_iostyle _2_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  tmp_chpl = (c_chpl)->_1_rvfDerefTmp_chpl;
  _1_rvfDerefTmp_chpl = tmp_chpl;
  _2_tmp_chpl = (c_chpl)->_2_tmp_chpl;
  on_fn_chpl14(&_1_rvfDerefTmp_chpl, _2_tmp_chpl);
  return;
}

/* IO.chpl:2097 */
static void on_fn_chpl14(_ref_file this_chpl6,
                         chpl____wide__ref_iostyle ret_chpl) {
  iostyle local_style_chpl;
  iostyle type_tmp_chpl;
  qio_file_ptr_t coerce_tmp_chpl;
  qio_file_ptr_t tmp_chpl;
  _ref_iostyle _ref_tmp__chpl = NULL;
  local_style_chpl = type_tmp_chpl;
  tmp_chpl = (this_chpl6)->_file_internal_chpl;
  coerce_tmp_chpl = tmp_chpl;
  _ref_tmp__chpl = &local_style_chpl;
  qio_file_get_style(coerce_tmp_chpl, _ref_tmp__chpl);
  chpl_gen_comm_put(((void*)(&local_style_chpl)), chpl_nodeFromLocaleID(&((ret_chpl).locale), INT64(0), INT32(0)), (ret_chpl).addr, sizeof(iostyle), -1, COMMID(7), INT64(2100), INT64(71));
  return;
}

/* IO.chpl:2131 */
static void close_chpl(_ref_file this_chpl6,
                       _ref_syserr error_chpl) {
  syserr _formal_tmp_error_chpl;
  _ref__wide_locale call_tmp_chpl = NULL;
  chpl_localeID_t call_tmp_chpl2;
  chpl____wide_locale tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_syserr tmp_chpl2 = NULL;
  file_chpl rvfDerefTmp_chpl;
  chpl_bool isdirect_chpl;
  chpl____wide__ref_syserr tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl15 _args_foron_fn_chpl = NULL;
  _ref_syserr tmp_chpl4 = NULL;
  chpl____wide__ref_syserr tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  chpl____wide__ref_syserr chpl_macro_tmp_7251;
  chpl__class_localson_fn_chpl15_object chpl_macro_tmp_7252;
  chpl____wide__ref_syserr chpl_macro_tmp_7253;
  check_chpl(this_chpl6);
  call_tmp_chpl = &((this_chpl6)->home_chpl);
  tmp_chpl = *(call_tmp_chpl);
  call_tmp_chpl2 = (&tmp_chpl)->locale;
  tmp_chpl2 = &_formal_tmp_error_chpl;
  rvfDerefTmp_chpl = *(this_chpl6);
  isdirect_chpl = chpl_doDirectExecuteOn(&call_tmp_chpl2);
  if (isdirect_chpl) {
    chpl_macro_tmp_7251.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7251.addr = tmp_chpl2;
    tmp_chpl3 = chpl_macro_tmp_7251;
    on_fn_chpl15(&rvfDerefTmp_chpl, tmp_chpl3);
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn_chpl15)(&chpl_macro_tmp_7252));
    (_args_foron_fn_chpl)->_0_rvfDerefTmp_chpl = call_tmp_chpl2;
    (_args_foron_fn_chpl)->_1_rvfDerefTmp_chpl = rvfDerefTmp_chpl;
    tmp_chpl4 = &_formal_tmp_error_chpl;
    chpl_macro_tmp_7253.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7253.addr = tmp_chpl4;
    tmp_chpl5 = chpl_macro_tmp_7253;
    (_args_foron_fn_chpl)->_2_tmp_chpl = tmp_chpl5;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    /*** wrapon_fn_chpl15 ***/ chpl_executeOn(&call_tmp_chpl2, INT32(271), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), sizeof(chpl__class_localson_fn_chpl15_object), INT64(2133), INT32(71));
  }
  *(error_chpl) = _formal_tmp_error_chpl;
  return;
}

/* IO.chpl:2133 */
static void wrapon_fn_chpl15(_class_localson_fn_chpl15 c_chpl) {
  file_chpl _1_rvfDerefTmp_chpl;
  file_chpl tmp_chpl;
  chpl____wide__ref_syserr _2_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  tmp_chpl = (c_chpl)->_1_rvfDerefTmp_chpl;
  _1_rvfDerefTmp_chpl = tmp_chpl;
  _2_tmp_chpl = (c_chpl)->_2_tmp_chpl;
  on_fn_chpl15(&_1_rvfDerefTmp_chpl, _2_tmp_chpl);
  return;
}

/* IO.chpl:2133 */
static void on_fn_chpl15(_ref_file this_chpl6,
                         chpl____wide__ref_syserr _formal_tmp_error_chpl) {
  syserr call_tmp_chpl;
  qio_file_ptr_t coerce_tmp_chpl;
  qio_file_ptr_t tmp_chpl;
  tmp_chpl = (this_chpl6)->_file_internal_chpl;
  coerce_tmp_chpl = tmp_chpl;
  call_tmp_chpl = qio_file_close(coerce_tmp_chpl);
  chpl_gen_comm_put(((void*)(&call_tmp_chpl)), chpl_nodeFromLocaleID(&((_formal_tmp_error_chpl).locale), INT64(0), INT32(0)), (_formal_tmp_error_chpl).addr, sizeof(syserr), -1, COMMID(8), INT64(2134), INT64(71));
  return;
}

/* IO.chpl:2140 */
static void close_chpl2(_ref_file this_chpl6) {
  string local__str_literal_2402_chpl;
  syserr err_chpl;
  syserr call_tmp_chpl;
  _ref_syserr _ref_tmp__chpl = NULL;
  int32_t call_tmp_chpl2;
  chpl_bool call_tmp_chpl3;
  string call_tmp_chpl4;
  string ret_tmp_chpl;
  _ref_string ret_to_arg_ref_tmp__chpl = NULL;
  _ref_string _ref_tmp__chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_7254;
  local__str_literal_2402_chpl /* "in file.close" */ = _str_literal_2402 /* "in file.close" */;
  call_tmp_chpl = qio_int_to_err(INT32(0));
  err_chpl = call_tmp_chpl;
  _ref_tmp__chpl = &err_chpl;
  close_chpl(this_chpl6, _ref_tmp__chpl);
  call_tmp_chpl2 = qio_err_iserr(err_chpl);
  call_tmp_chpl3 = (call_tmp_chpl2 != INT32(0));
  if (call_tmp_chpl3) {
    ret_to_arg_ref_tmp__chpl = &ret_tmp_chpl;
    tryGetPath_chpl(this_chpl6, ret_to_arg_ref_tmp__chpl);
    call_tmp_chpl4 = ret_tmp_chpl;
    ioerror_chpl2(err_chpl, &local__str_literal_2402_chpl /* "in file.close" */, &ret_tmp_chpl);
    _ref_tmp__chpl2 = &call_tmp_chpl4;
    chpl_macro_tmp_7254.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7254.addr = _ref_tmp__chpl2;
    tmp_chpl = chpl_macro_tmp_7254;
    deinit44(tmp_chpl);
  }
  return;
}

/* IO.chpl:2192 */
static void getPath_chpl(_ref_file this_chpl6,
                         _ref_syserr error_chpl,
                         _ref_string _retArg_chpl) {
  syserr _formal_tmp_error_chpl;
  string ret_chpl;
  string this_chpl7;
  c_ptr_uint8_t call_tmp_chpl = NULL;
  int32_t default_arglocale_id_chpl;
  string ret_tmp_chpl;
  _ref_string ret_to_arg_ref_tmp__chpl = NULL;
  _ref__wide_locale call_tmp_chpl2 = NULL;
  chpl_localeID_t call_tmp_chpl3;
  chpl____wide_locale tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_syserr tmp_chpl2 = NULL;
  _ref_string tmp_chpl3 = NULL;
  file_chpl rvfDerefTmp_chpl;
  chpl_bool isdirect_chpl;
  chpl____wide__ref_syserr tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl16 _args_foron_fn_chpl = NULL;
  _ref_syserr tmp_chpl6 = NULL;
  chpl____wide__ref_syserr tmp_chpl7 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string tmp_chpl8 = NULL;
  chpl____wide__ref_string tmp_chpl9 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  chpl____wide__ref_syserr chpl_macro_tmp_7255;
  chpl____wide__ref_string chpl_macro_tmp_7256;
  chpl__class_localson_fn_chpl16_object chpl_macro_tmp_7257;
  chpl____wide__ref_syserr chpl_macro_tmp_7258;
  chpl____wide__ref_string chpl_macro_tmp_7259;
  check_chpl(this_chpl6);
  (&this_chpl7)->len = INT64(0);
  (&this_chpl7)->_size = INT64(0);
  (&this_chpl7)->buff = nil;
  (&this_chpl7)->owned = UINT8(false);
  (&this_chpl7)->locale_id = INT32(0);
  (&this_chpl7)->len = INT64(0);
  (&this_chpl7)->_size = INT64(0);
  call_tmp_chpl = ((c_ptr_uint8_t)(nil));
  (&this_chpl7)->buff = call_tmp_chpl;
  (&this_chpl7)->owned = UINT8(true);
  default_arglocale_id_chpl = chpl_nodeID;
  (&this_chpl7)->locale_id = default_arglocale_id_chpl;
  ret_to_arg_ref_tmp__chpl = &ret_tmp_chpl;
  _construct_string(INT64(0), INT64(0), call_tmp_chpl, UINT8(true), default_arglocale_id_chpl, &this_chpl7, ret_to_arg_ref_tmp__chpl);
  ret_chpl = ret_tmp_chpl;
  call_tmp_chpl2 = &((this_chpl6)->home_chpl);
  tmp_chpl = *(call_tmp_chpl2);
  call_tmp_chpl3 = (&tmp_chpl)->locale;
  tmp_chpl2 = &_formal_tmp_error_chpl;
  tmp_chpl3 = &ret_chpl;
  rvfDerefTmp_chpl = *(this_chpl6);
  isdirect_chpl = chpl_doDirectExecuteOn(&call_tmp_chpl3);
  if (isdirect_chpl) {
    chpl_macro_tmp_7255.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7255.addr = tmp_chpl2;
    tmp_chpl4 = chpl_macro_tmp_7255;
    chpl_macro_tmp_7256.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7256.addr = tmp_chpl3;
    tmp_chpl5 = chpl_macro_tmp_7256;
    on_fn_chpl16(&rvfDerefTmp_chpl, tmp_chpl4, tmp_chpl5);
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn_chpl16)(&chpl_macro_tmp_7257));
    (_args_foron_fn_chpl)->_0_rvfDerefTmp_chpl = call_tmp_chpl3;
    (_args_foron_fn_chpl)->_1_rvfDerefTmp_chpl = rvfDerefTmp_chpl;
    tmp_chpl6 = &_formal_tmp_error_chpl;
    chpl_macro_tmp_7258.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7258.addr = tmp_chpl6;
    tmp_chpl7 = chpl_macro_tmp_7258;
    (_args_foron_fn_chpl)->_2_tmp_chpl = tmp_chpl7;
    tmp_chpl8 = &ret_chpl;
    chpl_macro_tmp_7259.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7259.addr = tmp_chpl8;
    tmp_chpl9 = chpl_macro_tmp_7259;
    (_args_foron_fn_chpl)->_3_tmp_chpl = tmp_chpl9;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    /*** wrapon_fn_chpl16 ***/ chpl_executeOn(&call_tmp_chpl3, INT32(272), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), sizeof(chpl__class_localson_fn_chpl16_object), INT64(2195), INT32(71));
  }
  *(error_chpl) = _formal_tmp_error_chpl;
  *(_retArg_chpl) = ret_chpl;
  return;
}

/* IO.chpl:2195 */
static void wrapon_fn_chpl16(_class_localson_fn_chpl16 c_chpl) {
  file_chpl _1_rvfDerefTmp_chpl;
  file_chpl tmp_chpl;
  chpl____wide__ref_syserr _2_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string _3_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  tmp_chpl = (c_chpl)->_1_rvfDerefTmp_chpl;
  _1_rvfDerefTmp_chpl = tmp_chpl;
  _2_tmp_chpl = (c_chpl)->_2_tmp_chpl;
  _3_tmp_chpl = (c_chpl)->_3_tmp_chpl;
  on_fn_chpl16(&_1_rvfDerefTmp_chpl, _2_tmp_chpl, _3_tmp_chpl);
  return;
}

/* IO.chpl:2195 */
static void on_fn_chpl16(_ref_file this_chpl6,
                         chpl____wide__ref_syserr _formal_tmp_error_chpl,
                         chpl____wide__ref_string ret_chpl) {
  string local__str_literal_2408_chpl;
  c_string_copy tmp_chpl;
  c_string_copy tmp2_chpl;
  syserr call_tmp_chpl;
  qio_file_ptr_t coerce_tmp_chpl;
  qio_file_ptr_t tmp_chpl2;
  _ref_c_string_copy _ref_tmp__chpl = NULL;
  syserr tmp_chpl3;
  int32_t call_tmp_chpl2;
  chpl_bool call_tmp_chpl3;
  syserr call_tmp_chpl4;
  qio_file_ptr_t coerce_tmp_chpl2;
  qio_file_ptr_t tmp_chpl4;
  _ref_c_string_copy _ref_tmp__chpl2 = NULL;
  _ref_c_string_copy _ref_tmp__chpl3 = NULL;
  int64_t call_tmp_chpl5;
  chpl_bool call_tmp_chpl6;
  string call_tmp_chpl7;
  string ret_chpl2;
  syserr tmp_chpl5;
  int32_t call_tmp_chpl8;
  chpl_bool call_tmp_chpl9;
  chpl____wide__ref_string tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  c_string call_tmp_chpl10;
  string ret_tmp_chpl;
  _ref_string ret_to_arg_ref_tmp__chpl = NULL;
  chpl____wide__ref_string tmp_chpl7 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp__chpl4 = NULL;
  chpl____wide__ref_string tmp_chpl8 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_7260;
  chpl____wide__ref_string chpl_macro_tmp_7261;
  chpl____wide__ref_string chpl_macro_tmp_7262;
  local__str_literal_2408_chpl /* "unknown" */ = _str_literal_2408 /* "unknown" */;
  tmp_chpl = NULL;
  tmp2_chpl = NULL;
  tmp_chpl2 = (this_chpl6)->_file_internal_chpl;
  coerce_tmp_chpl = tmp_chpl2;
  _ref_tmp__chpl = &tmp_chpl;
  call_tmp_chpl = qio_file_path(coerce_tmp_chpl, _ref_tmp__chpl);
  chpl_gen_comm_put(((void*)(&call_tmp_chpl)), chpl_nodeFromLocaleID(&((_formal_tmp_error_chpl).locale), INT64(0), INT32(0)), (_formal_tmp_error_chpl).addr, sizeof(syserr), -1, COMMID(9), INT64(2198), INT64(71));
  chpl_gen_comm_get(((void*)(&tmp_chpl3)), chpl_nodeFromLocaleID(&((_formal_tmp_error_chpl).locale), INT64(0), INT32(0)), (_formal_tmp_error_chpl).addr, sizeof(syserr), -1, COMMID(10), INT64(2199), INT64(71));
  call_tmp_chpl2 = qio_err_iserr(tmp_chpl3);
  call_tmp_chpl3 = (call_tmp_chpl2 == INT32(0));
  if (call_tmp_chpl3) {
    tmp_chpl4 = (this_chpl6)->_file_internal_chpl;
    coerce_tmp_chpl2 = tmp_chpl4;
    _ref_tmp__chpl2 = &tmp2_chpl;
    call_tmp_chpl4 = qio_shortest_path(coerce_tmp_chpl2, _ref_tmp__chpl2, ((c_string)(tmp_chpl)));
    chpl_gen_comm_put(((void*)(&call_tmp_chpl4)), chpl_nodeFromLocaleID(&((_formal_tmp_error_chpl).locale), INT64(0), INT32(0)), (_formal_tmp_error_chpl).addr, sizeof(syserr), -1, COMMID(11), INT64(2200), INT64(71));
  }
  _ref_tmp__chpl3 = &tmp_chpl;
  call_tmp_chpl5 = string_compare(((c_string)(tmp_chpl)), ((c_string)(NULL)));
  call_tmp_chpl6 = (call_tmp_chpl5 != INT64(0));
  if (call_tmp_chpl6) {
    chpl_rt_free_c_string(_ref_tmp__chpl3, INT64(2202), INT32(71));
  }
  chpl_gen_comm_get(((void*)(&tmp_chpl5)), chpl_nodeFromLocaleID(&((_formal_tmp_error_chpl).locale), INT64(0), INT32(0)), (_formal_tmp_error_chpl).addr, sizeof(syserr), -1, COMMID(12), INT64(2203), INT64(71));
  call_tmp_chpl8 = qio_err_iserr(tmp_chpl5);
  call_tmp_chpl9 = (call_tmp_chpl8 != INT32(0));
  if (call_tmp_chpl9) {
    chpl_macro_tmp_7260.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7260.addr = &local__str_literal_2408_chpl /* "unknown" */;
    tmp_chpl6 = chpl_macro_tmp_7260;
    ret_chpl2 = chpl__initCopy13(tmp_chpl6);
    goto _end__if_fn183_chpl;
  } else {
    call_tmp_chpl10 = ((c_string)(tmp2_chpl));
    ret_to_arg_ref_tmp__chpl = &ret_tmp_chpl;
    string3(call_tmp_chpl10, string_length(call_tmp_chpl10), UINT8(true), UINT8(false), ret_to_arg_ref_tmp__chpl);
    ret_chpl2 = ret_tmp_chpl;
    goto _end__if_fn183_chpl;
  }
  _end__if_fn183_chpl:;
  call_tmp_chpl7 = ret_chpl2;
  chpl_macro_tmp_7261.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7261.addr = &ret_chpl2;
  tmp_chpl7 = chpl_macro_tmp_7261;
  chpl___ASSIGN_13(ret_chpl, tmp_chpl7);
  _ref_tmp__chpl4 = &call_tmp_chpl7;
  chpl_macro_tmp_7262.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7262.addr = _ref_tmp__chpl4;
  tmp_chpl8 = chpl_macro_tmp_7262;
  deinit44(tmp_chpl8);
  return;
}

/* IO.chpl:2215 */
static void tryGetPath_chpl(_ref_file this_chpl6,
                            _ref_string _retArg_chpl) {
  string local__str_literal_2408_chpl;
  string ret_chpl;
  syserr err_chpl;
  syserr call_tmp_chpl;
  string ret_chpl2;
  string this_chpl7;
  c_ptr_uint8_t call_tmp_chpl2 = NULL;
  int32_t default_arglocale_id_chpl;
  string ret_tmp_chpl;
  _ref_string ret_to_arg_ref_tmp__chpl = NULL;
  string call_tmp_chpl3;
  string ret_tmp_chpl2;
  _ref_string ret_to_arg_ref_tmp__chpl2 = NULL;
  _ref_syserr _ref_tmp__chpl = NULL;
  _ref_string _ref_tmp__chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  int32_t call_tmp_chpl4;
  chpl_bool call_tmp_chpl5;
  chpl____wide__ref_string tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp__chpl3 = NULL;
  chpl____wide__ref_string tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp__chpl4 = NULL;
  chpl____wide__ref_string tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp__chpl5 = NULL;
  chpl____wide__ref_string tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_7263;
  chpl____wide__ref_string chpl_macro_tmp_7264;
  chpl____wide__ref_string chpl_macro_tmp_7265;
  chpl____wide__ref_string chpl_macro_tmp_7266;
  chpl____wide__ref_string chpl_macro_tmp_7267;
  chpl____wide__ref_string chpl_macro_tmp_7268;
  local__str_literal_2408_chpl /* "unknown" */ = _str_literal_2408 /* "unknown" */;
  call_tmp_chpl = qio_int_to_err(INT32(0));
  err_chpl = call_tmp_chpl;
  (&this_chpl7)->len = INT64(0);
  (&this_chpl7)->_size = INT64(0);
  (&this_chpl7)->buff = nil;
  (&this_chpl7)->owned = UINT8(false);
  (&this_chpl7)->locale_id = INT32(0);
  (&this_chpl7)->len = INT64(0);
  (&this_chpl7)->_size = INT64(0);
  call_tmp_chpl2 = ((c_ptr_uint8_t)(nil));
  (&this_chpl7)->buff = call_tmp_chpl2;
  (&this_chpl7)->owned = UINT8(true);
  default_arglocale_id_chpl = chpl_nodeID;
  (&this_chpl7)->locale_id = default_arglocale_id_chpl;
  ret_to_arg_ref_tmp__chpl = &ret_tmp_chpl;
  _construct_string(INT64(0), INT64(0), call_tmp_chpl2, UINT8(true), default_arglocale_id_chpl, &this_chpl7, ret_to_arg_ref_tmp__chpl);
  ret_chpl2 = ret_tmp_chpl;
  ret_to_arg_ref_tmp__chpl2 = &ret_tmp_chpl2;
  _ref_tmp__chpl = &err_chpl;
  getPath_chpl(this_chpl6, _ref_tmp__chpl, ret_to_arg_ref_tmp__chpl2);
  call_tmp_chpl3 = ret_tmp_chpl2;
  _ref_tmp__chpl2 = &ret_chpl2;
  chpl_macro_tmp_7263.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7263.addr = _ref_tmp__chpl2;
  tmp_chpl = chpl_macro_tmp_7263;
  chpl_macro_tmp_7264.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7264.addr = &ret_tmp_chpl2;
  tmp_chpl2 = chpl_macro_tmp_7264;
  chpl___ASSIGN_13(tmp_chpl, tmp_chpl2);
  call_tmp_chpl4 = qio_err_iserr(err_chpl);
  call_tmp_chpl5 = (call_tmp_chpl4 != INT32(0));
  if (call_tmp_chpl5) {
    chpl_macro_tmp_7265.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7265.addr = &local__str_literal_2408_chpl /* "unknown" */;
    tmp_chpl3 = chpl_macro_tmp_7265;
    ret_chpl = chpl__initCopy13(tmp_chpl3);
    _ref_tmp__chpl3 = &call_tmp_chpl3;
    chpl_macro_tmp_7266.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7266.addr = _ref_tmp__chpl3;
    tmp_chpl4 = chpl_macro_tmp_7266;
    deinit44(tmp_chpl4);
    _ref_tmp__chpl4 = &ret_chpl2;
    chpl_macro_tmp_7267.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7267.addr = _ref_tmp__chpl4;
    tmp_chpl5 = chpl_macro_tmp_7267;
    deinit44(tmp_chpl5);
    goto _end_tryGetPath_chpl;
  } else {
    ret_chpl = ret_chpl2;
    _ref_tmp__chpl5 = &call_tmp_chpl3;
    chpl_macro_tmp_7268.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7268.addr = _ref_tmp__chpl5;
    tmp_chpl6 = chpl_macro_tmp_7268;
    deinit44(tmp_chpl6);
    goto _end_tryGetPath_chpl;
  }
  _end_tryGetPath_chpl:;
  *(_retArg_chpl) = ret_chpl;
  return;
}

/* IO.chpl:2466 */
static void openfd_chpl(int32_t fd_chpl,
                        _ref_syserr error_chpl,
                        int32_t hints_chpl,
                        _ref_iostyle style_chpl,
                        _ref_file _retArg_chpl) {
  qio_file_ptr_t local_QIO_FILE_PTR_NULL_chpl;
  int32_t local_c_sublocid_any_chpl;
  iostyle local_style_chpl;
  file_chpl ret_chpl;
  file_chpl this_chpl6;
  chpl____wide_locale tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t _autoCopy_tmp__chpl;
  chpl____wide_locale call_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  qio_file_ptr_t default_arg_file_internal_chpl;
  file_chpl ret_tmp_chpl;
  _ref_file ret_to_arg_ref_tmp__chpl = NULL;
  chpl_localeID_t _autoCopy_tmp__chpl2;
  chpl____wide_locale call_tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_qio_file_ptr_t call_tmp_chpl3 = NULL;
  _cfile call_tmp_chpl4;
  syserr call_tmp_chpl5;
  chpl____wide__nilType chpl_macro_tmp_7269;
  chpl____wide_locale chpl_macro_tmp_7270;
  local_QIO_FILE_PTR_NULL_chpl = QIO_FILE_PTR_NULL;
  local_c_sublocid_any_chpl = c_sublocid_any;
  local_style_chpl = *(style_chpl);
  chpl_macro_tmp_7269.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7269.addr = nil;
  chpl_macro_tmp_7270.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7270.addr = NULL;
  tmp_chpl = chpl_macro_tmp_7270;
  (&this_chpl6)->home_chpl = tmp_chpl;
  _autoCopy_tmp__chpl = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any_chpl);
  call_tmp_chpl = chpl_localeID_to_locale(&_autoCopy_tmp__chpl);
  (&this_chpl6)->home_chpl = call_tmp_chpl;
  default_arg_file_internal_chpl = local_QIO_FILE_PTR_NULL_chpl;
  (&this_chpl6)->_file_internal_chpl = default_arg_file_internal_chpl;
  ret_to_arg_ref_tmp__chpl = &ret_tmp_chpl;
  _construct_file_chpl(call_tmp_chpl, default_arg_file_internal_chpl, &this_chpl6, ret_to_arg_ref_tmp__chpl);
  ret_chpl = ret_tmp_chpl;
  _autoCopy_tmp__chpl2 = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any_chpl);
  call_tmp_chpl2 = chpl_localeID_to_locale(&_autoCopy_tmp__chpl2);
  (&ret_chpl)->home_chpl = call_tmp_chpl2;
  call_tmp_chpl3 = &((&ret_chpl)->_file_internal_chpl);
  call_tmp_chpl4 = chpl_cnullfile();
  call_tmp_chpl5 = qio_file_init(call_tmp_chpl3, call_tmp_chpl4, fd_chpl, hints_chpl, &local_style_chpl, ((int32_t)(INT64(0))));
  *(error_chpl) = call_tmp_chpl5;
  *(_retArg_chpl) = ret_chpl;
  return;
}

/* IO.chpl:2478 */
static void openfd_chpl2(int32_t fd_chpl,
                         int32_t hints_chpl,
                         _ref_iostyle style_chpl,
                         _ref_file _retArg_chpl) {
  string local__str_literal_2477_chpl;
  string local__str_literal_2408_chpl;
  syserr err_chpl;
  syserr call_tmp_chpl;
  file_chpl ret_tmp_chpl;
  _ref_file ret_to_arg_ref_tmp__chpl = NULL;
  _ref_syserr _ref_tmp__chpl = NULL;
  int32_t call_tmp_chpl2;
  chpl_bool call_tmp_chpl3;
  c_string_copy path_cs_chpl;
  syserr call_tmp_chpl4;
  _ref_c_string_copy _ref_tmp__chpl2 = NULL;
  string path_chpl;
  string ret_chpl;
  int32_t call_tmp_chpl5;
  chpl_bool call_tmp_chpl6;
  chpl____wide__ref_string tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  c_string call_tmp_chpl7;
  string ret_tmp_chpl2;
  _ref_string ret_to_arg_ref_tmp__chpl2 = NULL;
  _ref_string _ref_tmp__chpl3 = NULL;
  chpl____wide__ref_string tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_7271;
  chpl____wide__ref_string chpl_macro_tmp_7272;
  local__str_literal_2477_chpl /* "in openfd" */ = _str_literal_2477 /* "in openfd" */;
  local__str_literal_2408_chpl /* "unknown" */ = _str_literal_2408 /* "unknown" */;
  call_tmp_chpl = qio_int_to_err(INT32(0));
  err_chpl = call_tmp_chpl;
  ret_to_arg_ref_tmp__chpl = &ret_tmp_chpl;
  _ref_tmp__chpl = &err_chpl;
  openfd_chpl(fd_chpl, _ref_tmp__chpl, hints_chpl, style_chpl, ret_to_arg_ref_tmp__chpl);
  call_tmp_chpl2 = qio_err_iserr(err_chpl);
  call_tmp_chpl3 = (call_tmp_chpl2 != INT32(0));
  if (call_tmp_chpl3) {
    path_cs_chpl = NULL;
    qio_int_to_err(INT32(0));
    _ref_tmp__chpl2 = &path_cs_chpl;
    call_tmp_chpl4 = qio_file_path_for_fd(fd_chpl, _ref_tmp__chpl2);
    call_tmp_chpl5 = qio_err_iserr(call_tmp_chpl4);
    call_tmp_chpl6 = (call_tmp_chpl5 != INT32(0));
    if (call_tmp_chpl6) {
      chpl_macro_tmp_7271.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_7271.addr = &local__str_literal_2408_chpl /* "unknown" */;
      tmp_chpl = chpl_macro_tmp_7271;
      ret_chpl = chpl__initCopy13(tmp_chpl);
      goto _end__if_fn184_chpl;
    } else {
      call_tmp_chpl7 = ((c_string)(path_cs_chpl));
      ret_to_arg_ref_tmp__chpl2 = &ret_tmp_chpl2;
      string3(call_tmp_chpl7, string_length(call_tmp_chpl7), UINT8(true), UINT8(false), ret_to_arg_ref_tmp__chpl2);
      ret_chpl = ret_tmp_chpl2;
      goto _end__if_fn184_chpl;
    }
    _end__if_fn184_chpl:;
    path_chpl = ret_chpl;
    ioerror_chpl2(err_chpl, &local__str_literal_2477_chpl /* "in openfd" */, &ret_chpl);
    _ref_tmp__chpl3 = &path_chpl;
    chpl_macro_tmp_7272.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7272.addr = _ref_tmp__chpl3;
    tmp_chpl2 = chpl_macro_tmp_7272;
    deinit44(tmp_chpl2);
  }
  *(_retArg_chpl) = ret_tmp_chpl;
  return;
}

/* IO.chpl:2521 */
static void openfp_chpl(_cfile fp_chpl,
                        _ref_syserr error_chpl,
                        int32_t hints_chpl,
                        _ref_iostyle style_chpl,
                        _ref_file _retArg_chpl) {
  qio_file_ptr_t local_QIO_FILE_PTR_NULL_chpl;
  int32_t local_c_sublocid_any_chpl;
  iostyle local_style_chpl;
  file_chpl ret_chpl;
  file_chpl this_chpl6;
  chpl____wide_locale tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t _autoCopy_tmp__chpl;
  chpl____wide_locale call_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  qio_file_ptr_t default_arg_file_internal_chpl;
  file_chpl ret_tmp_chpl;
  _ref_file ret_to_arg_ref_tmp__chpl = NULL;
  chpl_localeID_t _autoCopy_tmp__chpl2;
  chpl____wide_locale call_tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_qio_file_ptr_t call_tmp_chpl3 = NULL;
  syserr call_tmp_chpl4;
  chpl____wide__nilType chpl_macro_tmp_7273;
  chpl____wide_locale chpl_macro_tmp_7274;
  local_QIO_FILE_PTR_NULL_chpl = QIO_FILE_PTR_NULL;
  local_c_sublocid_any_chpl = c_sublocid_any;
  local_style_chpl = *(style_chpl);
  chpl_macro_tmp_7273.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7273.addr = nil;
  chpl_macro_tmp_7274.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7274.addr = NULL;
  tmp_chpl = chpl_macro_tmp_7274;
  (&this_chpl6)->home_chpl = tmp_chpl;
  _autoCopy_tmp__chpl = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any_chpl);
  call_tmp_chpl = chpl_localeID_to_locale(&_autoCopy_tmp__chpl);
  (&this_chpl6)->home_chpl = call_tmp_chpl;
  default_arg_file_internal_chpl = local_QIO_FILE_PTR_NULL_chpl;
  (&this_chpl6)->_file_internal_chpl = default_arg_file_internal_chpl;
  ret_to_arg_ref_tmp__chpl = &ret_tmp_chpl;
  _construct_file_chpl(call_tmp_chpl, default_arg_file_internal_chpl, &this_chpl6, ret_to_arg_ref_tmp__chpl);
  ret_chpl = ret_tmp_chpl;
  _autoCopy_tmp__chpl2 = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any_chpl);
  call_tmp_chpl2 = chpl_localeID_to_locale(&_autoCopy_tmp__chpl2);
  (&ret_chpl)->home_chpl = call_tmp_chpl2;
  call_tmp_chpl3 = &((&ret_chpl)->_file_internal_chpl);
  call_tmp_chpl4 = qio_file_init(call_tmp_chpl3, fp_chpl, ((int32_t)(INT64(-1))), hints_chpl, &local_style_chpl, ((int32_t)(INT64(1))));
  *(error_chpl) = call_tmp_chpl4;
  *(_retArg_chpl) = ret_chpl;
  return;
}

/* IO.chpl:2533 */
static void openfp_chpl2(_cfile fp_chpl,
                         int32_t hints_chpl,
                         _ref_iostyle style_chpl,
                         _ref_file _retArg_chpl) {
  string local__str_literal_2479_chpl;
  string local__str_literal_2408_chpl;
  syserr err_chpl;
  syserr call_tmp_chpl;
  file_chpl ret_tmp_chpl;
  _ref_file ret_to_arg_ref_tmp__chpl = NULL;
  _ref_syserr _ref_tmp__chpl = NULL;
  int32_t call_tmp_chpl2;
  chpl_bool call_tmp_chpl3;
  c_string_copy path_cs_chpl;
  syserr call_tmp_chpl4;
  _ref_c_string_copy _ref_tmp__chpl2 = NULL;
  string path_chpl;
  string ret_chpl;
  int32_t call_tmp_chpl5;
  chpl_bool call_tmp_chpl6;
  chpl____wide__ref_string tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  c_string call_tmp_chpl7;
  string ret_tmp_chpl2;
  _ref_string ret_to_arg_ref_tmp__chpl2 = NULL;
  _ref_string _ref_tmp__chpl3 = NULL;
  chpl____wide__ref_string tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_7275;
  chpl____wide__ref_string chpl_macro_tmp_7276;
  local__str_literal_2479_chpl /* "in openfp" */ = _str_literal_2479 /* "in openfp" */;
  local__str_literal_2408_chpl /* "unknown" */ = _str_literal_2408 /* "unknown" */;
  call_tmp_chpl = qio_int_to_err(INT32(0));
  err_chpl = call_tmp_chpl;
  ret_to_arg_ref_tmp__chpl = &ret_tmp_chpl;
  _ref_tmp__chpl = &err_chpl;
  openfp_chpl(fp_chpl, _ref_tmp__chpl, hints_chpl, style_chpl, ret_to_arg_ref_tmp__chpl);
  call_tmp_chpl2 = qio_err_iserr(err_chpl);
  call_tmp_chpl3 = (call_tmp_chpl2 != INT32(0));
  if (call_tmp_chpl3) {
    path_cs_chpl = NULL;
    qio_int_to_err(INT32(0));
    _ref_tmp__chpl2 = &path_cs_chpl;
    call_tmp_chpl4 = qio_file_path_for_fp(fp_chpl, _ref_tmp__chpl2);
    call_tmp_chpl5 = qio_err_iserr(call_tmp_chpl4);
    call_tmp_chpl6 = (call_tmp_chpl5 != INT32(0));
    if (call_tmp_chpl6) {
      chpl_macro_tmp_7275.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_7275.addr = &local__str_literal_2408_chpl /* "unknown" */;
      tmp_chpl = chpl_macro_tmp_7275;
      ret_chpl = chpl__initCopy13(tmp_chpl);
      goto _end__if_fn185_chpl;
    } else {
      call_tmp_chpl7 = ((c_string)(path_cs_chpl));
      ret_to_arg_ref_tmp__chpl2 = &ret_tmp_chpl2;
      string3(call_tmp_chpl7, string_length(call_tmp_chpl7), UINT8(true), UINT8(false), ret_to_arg_ref_tmp__chpl2);
      ret_chpl = ret_tmp_chpl2;
      goto _end__if_fn185_chpl;
    }
    _end__if_fn185_chpl:;
    path_chpl = ret_chpl;
    ioerror_chpl2(err_chpl, &local__str_literal_2479_chpl /* "in openfp" */, &ret_chpl);
    _ref_tmp__chpl3 = &path_chpl;
    chpl_macro_tmp_7276.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7276.addr = _ref_tmp__chpl3;
    tmp_chpl2 = chpl_macro_tmp_7276;
    deinit44(tmp_chpl2);
  }
  *(_retArg_chpl) = ret_tmp_chpl;
  return;
}

/* IO.chpl:2613 */
static void openmem_chpl(_ref_syserr error_chpl,
                         _ref_iostyle style_chpl,
                         _ref_file _retArg_chpl) {
  qbuffer_ptr_t local_QBUFFER_PTR_NULL_chpl;
  qio_file_ptr_t local_QIO_FILE_PTR_NULL_chpl;
  int32_t local_c_sublocid_any_chpl;
  iostyle local_style_chpl;
  file_chpl ret_chpl;
  file_chpl this_chpl6;
  chpl____wide_locale tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t _autoCopy_tmp__chpl;
  chpl____wide_locale call_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  qio_file_ptr_t default_arg_file_internal_chpl;
  file_chpl ret_tmp_chpl;
  _ref_file ret_to_arg_ref_tmp__chpl = NULL;
  chpl_localeID_t _autoCopy_tmp__chpl2;
  chpl____wide_locale call_tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_qio_file_ptr_t call_tmp_chpl3 = NULL;
  syserr call_tmp_chpl4;
  chpl____wide__nilType chpl_macro_tmp_7277;
  chpl____wide_locale chpl_macro_tmp_7278;
  local_QBUFFER_PTR_NULL_chpl = QBUFFER_PTR_NULL;
  local_QIO_FILE_PTR_NULL_chpl = QIO_FILE_PTR_NULL;
  local_c_sublocid_any_chpl = c_sublocid_any;
  local_style_chpl = *(style_chpl);
  chpl_macro_tmp_7277.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7277.addr = nil;
  chpl_macro_tmp_7278.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7278.addr = NULL;
  tmp_chpl = chpl_macro_tmp_7278;
  (&this_chpl6)->home_chpl = tmp_chpl;
  _autoCopy_tmp__chpl = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any_chpl);
  call_tmp_chpl = chpl_localeID_to_locale(&_autoCopy_tmp__chpl);
  (&this_chpl6)->home_chpl = call_tmp_chpl;
  default_arg_file_internal_chpl = local_QIO_FILE_PTR_NULL_chpl;
  (&this_chpl6)->_file_internal_chpl = default_arg_file_internal_chpl;
  ret_to_arg_ref_tmp__chpl = &ret_tmp_chpl;
  _construct_file_chpl(call_tmp_chpl, default_arg_file_internal_chpl, &this_chpl6, ret_to_arg_ref_tmp__chpl);
  ret_chpl = ret_tmp_chpl;
  _autoCopy_tmp__chpl2 = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any_chpl);
  call_tmp_chpl2 = chpl_localeID_to_locale(&_autoCopy_tmp__chpl2);
  (&ret_chpl)->home_chpl = call_tmp_chpl2;
  call_tmp_chpl3 = &((&ret_chpl)->_file_internal_chpl);
  call_tmp_chpl4 = qio_file_open_mem(call_tmp_chpl3, local_QBUFFER_PTR_NULL_chpl, &local_style_chpl);
  *(error_chpl) = call_tmp_chpl4;
  *(_retArg_chpl) = ret_chpl;
  return;
}

/* IO.chpl:2625 */
static void openmem_chpl2(_ref_iostyle style_chpl,
                          _ref_file _retArg_chpl) {
  string local__str_literal_2483_chpl;
  syserr err_chpl;
  syserr call_tmp_chpl;
  file_chpl ret_tmp_chpl;
  _ref_file ret_to_arg_ref_tmp__chpl = NULL;
  _ref_syserr _ref_tmp__chpl = NULL;
  int32_t call_tmp_chpl2;
  chpl_bool call_tmp_chpl3;
  local__str_literal_2483_chpl /* "in openmem" */ = _str_literal_2483 /* "in openmem" */;
  call_tmp_chpl = qio_int_to_err(INT32(0));
  err_chpl = call_tmp_chpl;
  ret_to_arg_ref_tmp__chpl = &ret_tmp_chpl;
  _ref_tmp__chpl = &err_chpl;
  openmem_chpl(_ref_tmp__chpl, style_chpl, ret_to_arg_ref_tmp__chpl);
  call_tmp_chpl2 = qio_err_iserr(err_chpl);
  call_tmp_chpl3 = (call_tmp_chpl2 != INT32(0));
  if (call_tmp_chpl3) {
    ioerror_chpl(err_chpl, &local__str_literal_2483_chpl /* "in openmem" */);
  }
  *(_retArg_chpl) = ret_tmp_chpl;
  return;
}

/* IO.chpl:2654 */
static void _construct_channel_chpl4(chpl____wide_locale home_chpl,
                                     qio_channel_ptr_t _channel_internal_chpl,
                                     chpl____wide_locale _readWriteThisFromLocale_chpl,
                                     _ref_channel_T_dynamic_F meme_chpl,
                                     _ref_channel_T_dynamic_F _retArg_chpl) {
  channel_T_dynamic_F_chpl this_chpl6;
  this_chpl6 = *(meme_chpl);
  (&this_chpl6)->home_chpl = home_chpl;
  (&this_chpl6)->_channel_internal_chpl = _channel_internal_chpl;
  (&this_chpl6)->_readWriteThisFromLocale_chpl = _readWriteThisFromLocale_chpl;
  *(_retArg_chpl) = this_chpl6;
  return;
}

/* IO.chpl:2654 */
static void _construct_channel_chpl3(locale home_chpl,
                                     qio_channel_ptr_t _channel_internal_chpl,
                                     locale _readWriteThisFromLocale_chpl,
                                     _ref_channel_T_dynamic_T meme_chpl,
                                     _ref_channel_T_dynamic_T _retArg_chpl) {
  channel_T_dynamic_T_chpl this_chpl6;
  chpl____wide_locale tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_locale tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_locale chpl_macro_tmp_7279;
  chpl____wide_locale chpl_macro_tmp_7280;
  this_chpl6 = *(meme_chpl);
  chpl_macro_tmp_7279.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7279.addr = home_chpl;
  tmp_chpl = chpl_macro_tmp_7279;
  (&this_chpl6)->home_chpl = tmp_chpl;
  (&this_chpl6)->_channel_internal_chpl = _channel_internal_chpl;
  chpl_macro_tmp_7280.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7280.addr = _readWriteThisFromLocale_chpl;
  tmp_chpl2 = chpl_macro_tmp_7280;
  (&this_chpl6)->_readWriteThisFromLocale_chpl = tmp_chpl2;
  *(_retArg_chpl) = this_chpl6;
  return;
}

/* IO.chpl:2654 */
static void _construct_channel_chpl2(locale home_chpl,
                                     qio_channel_ptr_t _channel_internal_chpl,
                                     locale _readWriteThisFromLocale_chpl,
                                     _ref_channel_F_dynamic_T meme_chpl,
                                     _ref_channel_F_dynamic_T _retArg_chpl) {
  channel_F_dynamic_T_chpl this_chpl6;
  chpl____wide_locale tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_locale tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_locale chpl_macro_tmp_7281;
  chpl____wide_locale chpl_macro_tmp_7282;
  this_chpl6 = *(meme_chpl);
  chpl_macro_tmp_7281.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7281.addr = home_chpl;
  tmp_chpl = chpl_macro_tmp_7281;
  (&this_chpl6)->home_chpl = tmp_chpl;
  (&this_chpl6)->_channel_internal_chpl = _channel_internal_chpl;
  chpl_macro_tmp_7282.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7282.addr = _readWriteThisFromLocale_chpl;
  tmp_chpl2 = chpl_macro_tmp_7282;
  (&this_chpl6)->_readWriteThisFromLocale_chpl = tmp_chpl2;
  *(_retArg_chpl) = this_chpl6;
  return;
}

/* IO.chpl:2654 */
static void _construct_channel_chpl(locale home_chpl,
                                    qio_channel_ptr_t _channel_internal_chpl,
                                    locale _readWriteThisFromLocale_chpl,
                                    _ref_channel_F_dynamic_F meme_chpl,
                                    _ref_channel_F_dynamic_F _retArg_chpl) {
  channel_F_dynamic_F_chpl this_chpl6;
  chpl____wide_locale tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_locale tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_locale chpl_macro_tmp_7283;
  chpl____wide_locale chpl_macro_tmp_7284;
  this_chpl6 = *(meme_chpl);
  chpl_macro_tmp_7283.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7283.addr = home_chpl;
  tmp_chpl = chpl_macro_tmp_7283;
  (&this_chpl6)->home_chpl = tmp_chpl;
  (&this_chpl6)->_channel_internal_chpl = _channel_internal_chpl;
  chpl_macro_tmp_7284.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7284.addr = _readWriteThisFromLocale_chpl;
  tmp_chpl2 = chpl_macro_tmp_7284;
  (&this_chpl6)->_readWriteThisFromLocale_chpl = tmp_chpl2;
  *(_retArg_chpl) = this_chpl6;
  return;
}

/* IO.chpl:2697 */
static void chpl___ASSIGN_15(chpl____wide__ref_channel_F_dynamic_T ret_chpl,
                             _ref_channel_F_dynamic_T x_chpl) {
  _ref__wide_locale call_tmp_chpl = NULL;
  chpl_localeID_t call_tmp_chpl2;
  chpl____wide_locale tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  channel_F_dynamic_T_chpl rvfDerefTmp_chpl;
  chpl_bool isdirect_chpl;
  _class_localson_fn_chpl20 _args_foron_fn_chpl = NULL;
  c_void_ptr _args_vforon_fn_chpl;
  chpl____wide__ref__wide_locale call_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp_chpl4;
  chpl____wide_locale tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_channel_F_dynamic_T tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect_chpl2;
  _class_localson_fn_chpl23 _args_foron_fn_chpl2 = NULL;
  chpl____wide__ref_channel_F_dynamic_T tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl2;
  chpl____wide_locale coerce_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  qio_channel_ptr_t coerce_tmp_chpl2;
  qio_channel_ptr_t tmp_chpl5;
  chpl__class_localson_fn_chpl20_object chpl_macro_tmp_7285;
  chpl____wide__ref__wide_locale chpl_macro_tmp_7286;
  chpl__class_localson_fn_chpl23_object chpl_macro_tmp_7287;
  chpl____wide__ref__wide_locale chpl_macro_tmp_7288;
  chpl____wide__ref_qio_channel_ptr_t chpl_macro_tmp_7289;
  call_tmp_chpl = &((x_chpl)->home_chpl);
  tmp_chpl = *(call_tmp_chpl);
  call_tmp_chpl2 = (&tmp_chpl)->locale;
  rvfDerefTmp_chpl = *(x_chpl);
  isdirect_chpl = chpl_doDirectExecuteOn(&call_tmp_chpl2);
  if (isdirect_chpl) {
    on_fn_chpl20(&rvfDerefTmp_chpl);
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn_chpl20)(&chpl_macro_tmp_7285));
    (_args_foron_fn_chpl)->_0_rvfDerefTmp_chpl = call_tmp_chpl2;
    (_args_foron_fn_chpl)->_1_rvfDerefTmp_chpl = rvfDerefTmp_chpl;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    /*** wrapon_fn_chpl17 ***/ chpl_executeOn(&call_tmp_chpl2, INT32(273), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), sizeof(chpl__class_localson_fn_chpl20_object), INT64(2699), INT32(71));
  }
  chpl_macro_tmp_7286.locale = (ret_chpl).locale;
  chpl_macro_tmp_7286.addr = &(((ret_chpl).addr)->home_chpl);
  call_tmp_chpl3 = chpl_macro_tmp_7286;
  chpl_gen_comm_get(((void*)(&tmp_chpl2)), chpl_nodeFromLocaleID(&((call_tmp_chpl3).locale), INT64(0), INT32(0)), (call_tmp_chpl3).addr, sizeof(chpl____wide_locale), -1, COMMID(13), INT64(2703), INT64(71));
  call_tmp_chpl4 = (&tmp_chpl2)->locale;
  tmp_chpl3 = ret_chpl;
  isdirect_chpl2 = chpl_doDirectExecuteOn(&call_tmp_chpl4);
  if (isdirect_chpl2) {
    on_fn_chpl24(tmp_chpl3);
  } else {
    _args_foron_fn_chpl2 = ((_class_localson_fn_chpl23)(&chpl_macro_tmp_7287));
    (_args_foron_fn_chpl2)->_0_rvfDerefTmp_chpl = call_tmp_chpl4;
    tmp_chpl4 = ret_chpl;
    (_args_foron_fn_chpl2)->_1_tmp_chpl = tmp_chpl4;
    _args_vforon_fn_chpl2 = ((void*)(_args_foron_fn_chpl2));
    /*** wrapon_fn_chpl22 ***/ chpl_executeOn(&call_tmp_chpl4, INT32(278), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl2)), sizeof(chpl__class_localson_fn_chpl23_object), INT64(2703), INT32(71));
  }
  coerce_tmp_chpl = (x_chpl)->home_chpl;
  chpl_macro_tmp_7288.locale = (ret_chpl).locale;
  chpl_macro_tmp_7288.addr = &(((ret_chpl).addr)->home_chpl);
  chpl_gen_comm_put(((void*)(&coerce_tmp_chpl)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_7288).locale), INT64(0), INT32(0)), (chpl_macro_tmp_7288).addr, sizeof(chpl____wide_locale), -1, COMMID(14), INT64(2707), INT64(71));
  tmp_chpl5 = (x_chpl)->_channel_internal_chpl;
  coerce_tmp_chpl2 = tmp_chpl5;
  chpl_macro_tmp_7289.locale = (ret_chpl).locale;
  chpl_macro_tmp_7289.addr = &(((ret_chpl).addr)->_channel_internal_chpl);
  chpl_gen_comm_put(((void*)(&coerce_tmp_chpl2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_7289).locale), INT64(0), INT32(0)), (chpl_macro_tmp_7289).addr, sizeof(qio_channel_ptr_t), -1, COMMID(15), INT64(2708), INT64(71));
  return;
}

/* IO.chpl:2697 */
static void chpl___ASSIGN_16(chpl____wide__ref_channel_F_dynamic_F ret_chpl,
                             _ref_channel_F_dynamic_F x_chpl) {
  _ref__wide_locale call_tmp_chpl = NULL;
  chpl_localeID_t call_tmp_chpl2;
  chpl____wide_locale tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  channel_F_dynamic_F_chpl rvfDerefTmp_chpl;
  chpl_bool isdirect_chpl;
  _class_localson_fn_chpl19 _args_foron_fn_chpl = NULL;
  c_void_ptr _args_vforon_fn_chpl;
  chpl____wide__ref__wide_locale call_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp_chpl4;
  chpl____wide_locale tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_channel_F_dynamic_F tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect_chpl2;
  _class_localson_fn_chpl24 _args_foron_fn_chpl2 = NULL;
  chpl____wide__ref_channel_F_dynamic_F tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl2;
  chpl____wide_locale coerce_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  qio_channel_ptr_t coerce_tmp_chpl2;
  qio_channel_ptr_t tmp_chpl5;
  chpl__class_localson_fn_chpl19_object chpl_macro_tmp_7290;
  chpl____wide__ref__wide_locale chpl_macro_tmp_7291;
  chpl__class_localson_fn_chpl24_object chpl_macro_tmp_7292;
  chpl____wide__ref__wide_locale chpl_macro_tmp_7293;
  chpl____wide__ref_qio_channel_ptr_t chpl_macro_tmp_7294;
  call_tmp_chpl = &((x_chpl)->home_chpl);
  tmp_chpl = *(call_tmp_chpl);
  call_tmp_chpl2 = (&tmp_chpl)->locale;
  rvfDerefTmp_chpl = *(x_chpl);
  isdirect_chpl = chpl_doDirectExecuteOn(&call_tmp_chpl2);
  if (isdirect_chpl) {
    on_fn_chpl17(&rvfDerefTmp_chpl);
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn_chpl19)(&chpl_macro_tmp_7290));
    (_args_foron_fn_chpl)->_0_rvfDerefTmp_chpl = call_tmp_chpl2;
    (_args_foron_fn_chpl)->_1_rvfDerefTmp_chpl = rvfDerefTmp_chpl;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    /*** wrapon_fn_chpl18 ***/ chpl_executeOn(&call_tmp_chpl2, INT32(274), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), sizeof(chpl__class_localson_fn_chpl19_object), INT64(2699), INT32(71));
  }
  chpl_macro_tmp_7291.locale = (ret_chpl).locale;
  chpl_macro_tmp_7291.addr = &(((ret_chpl).addr)->home_chpl);
  call_tmp_chpl3 = chpl_macro_tmp_7291;
  chpl_gen_comm_get(((void*)(&tmp_chpl2)), chpl_nodeFromLocaleID(&((call_tmp_chpl3).locale), INT64(0), INT32(0)), (call_tmp_chpl3).addr, sizeof(chpl____wide_locale), -1, COMMID(16), INT64(2703), INT64(71));
  call_tmp_chpl4 = (&tmp_chpl2)->locale;
  tmp_chpl3 = ret_chpl;
  isdirect_chpl2 = chpl_doDirectExecuteOn(&call_tmp_chpl4);
  if (isdirect_chpl2) {
    on_fn_chpl21(tmp_chpl3);
  } else {
    _args_foron_fn_chpl2 = ((_class_localson_fn_chpl24)(&chpl_macro_tmp_7292));
    (_args_foron_fn_chpl2)->_0_rvfDerefTmp_chpl = call_tmp_chpl4;
    tmp_chpl4 = ret_chpl;
    (_args_foron_fn_chpl2)->_1_tmp_chpl = tmp_chpl4;
    _args_vforon_fn_chpl2 = ((void*)(_args_foron_fn_chpl2));
    /*** wrapon_fn_chpl21 ***/ chpl_executeOn(&call_tmp_chpl4, INT32(277), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl2)), sizeof(chpl__class_localson_fn_chpl24_object), INT64(2703), INT32(71));
  }
  coerce_tmp_chpl = (x_chpl)->home_chpl;
  chpl_macro_tmp_7293.locale = (ret_chpl).locale;
  chpl_macro_tmp_7293.addr = &(((ret_chpl).addr)->home_chpl);
  chpl_gen_comm_put(((void*)(&coerce_tmp_chpl)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_7293).locale), INT64(0), INT32(0)), (chpl_macro_tmp_7293).addr, sizeof(chpl____wide_locale), -1, COMMID(17), INT64(2707), INT64(71));
  tmp_chpl5 = (x_chpl)->_channel_internal_chpl;
  coerce_tmp_chpl2 = tmp_chpl5;
  chpl_macro_tmp_7294.locale = (ret_chpl).locale;
  chpl_macro_tmp_7294.addr = &(((ret_chpl).addr)->_channel_internal_chpl);
  chpl_gen_comm_put(((void*)(&coerce_tmp_chpl2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_7294).locale), INT64(0), INT32(0)), (chpl_macro_tmp_7294).addr, sizeof(qio_channel_ptr_t), -1, COMMID(18), INT64(2708), INT64(71));
  return;
}

/* IO.chpl:2697 */
static void chpl___ASSIGN_17(chpl____wide__ref_channel_T_dynamic_F ret_chpl,
                             _ref_channel_T_dynamic_F x_chpl) {
  _ref__wide_locale call_tmp_chpl = NULL;
  chpl_localeID_t call_tmp_chpl2;
  chpl____wide_locale tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  channel_T_dynamic_F_chpl rvfDerefTmp_chpl;
  chpl_bool isdirect_chpl;
  _class_localson_fn_chpl17 _args_foron_fn_chpl = NULL;
  c_void_ptr _args_vforon_fn_chpl;
  chpl____wide__ref__wide_locale call_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp_chpl4;
  chpl____wide_locale tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_channel_T_dynamic_F tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect_chpl2;
  _class_localson_fn_chpl21 _args_foron_fn_chpl2 = NULL;
  chpl____wide__ref_channel_T_dynamic_F tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl2;
  chpl____wide_locale coerce_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  qio_channel_ptr_t coerce_tmp_chpl2;
  qio_channel_ptr_t tmp_chpl5;
  chpl__class_localson_fn_chpl17_object chpl_macro_tmp_7295;
  chpl____wide__ref__wide_locale chpl_macro_tmp_7296;
  chpl__class_localson_fn_chpl21_object chpl_macro_tmp_7297;
  chpl____wide__ref__wide_locale chpl_macro_tmp_7298;
  chpl____wide__ref_qio_channel_ptr_t chpl_macro_tmp_7299;
  call_tmp_chpl = &((x_chpl)->home_chpl);
  tmp_chpl = *(call_tmp_chpl);
  call_tmp_chpl2 = (&tmp_chpl)->locale;
  rvfDerefTmp_chpl = *(x_chpl);
  isdirect_chpl = chpl_doDirectExecuteOn(&call_tmp_chpl2);
  if (isdirect_chpl) {
    on_fn_chpl19(&rvfDerefTmp_chpl);
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn_chpl17)(&chpl_macro_tmp_7295));
    (_args_foron_fn_chpl)->_0_rvfDerefTmp_chpl = call_tmp_chpl2;
    (_args_foron_fn_chpl)->_1_rvfDerefTmp_chpl = rvfDerefTmp_chpl;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    /*** wrapon_fn_chpl19 ***/ chpl_executeOn(&call_tmp_chpl2, INT32(275), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), sizeof(chpl__class_localson_fn_chpl17_object), INT64(2699), INT32(71));
  }
  chpl_macro_tmp_7296.locale = (ret_chpl).locale;
  chpl_macro_tmp_7296.addr = &(((ret_chpl).addr)->home_chpl);
  call_tmp_chpl3 = chpl_macro_tmp_7296;
  chpl_gen_comm_get(((void*)(&tmp_chpl2)), chpl_nodeFromLocaleID(&((call_tmp_chpl3).locale), INT64(0), INT32(0)), (call_tmp_chpl3).addr, sizeof(chpl____wide_locale), -1, COMMID(19), INT64(2703), INT64(71));
  call_tmp_chpl4 = (&tmp_chpl2)->locale;
  tmp_chpl3 = ret_chpl;
  isdirect_chpl2 = chpl_doDirectExecuteOn(&call_tmp_chpl4);
  if (isdirect_chpl2) {
    on_fn_chpl23(tmp_chpl3);
  } else {
    _args_foron_fn_chpl2 = ((_class_localson_fn_chpl21)(&chpl_macro_tmp_7297));
    (_args_foron_fn_chpl2)->_0_rvfDerefTmp_chpl = call_tmp_chpl4;
    tmp_chpl4 = ret_chpl;
    (_args_foron_fn_chpl2)->_1_tmp_chpl = tmp_chpl4;
    _args_vforon_fn_chpl2 = ((void*)(_args_foron_fn_chpl2));
    /*** wrapon_fn_chpl23 ***/ chpl_executeOn(&call_tmp_chpl4, INT32(279), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl2)), sizeof(chpl__class_localson_fn_chpl21_object), INT64(2703), INT32(71));
  }
  coerce_tmp_chpl = (x_chpl)->home_chpl;
  chpl_macro_tmp_7298.locale = (ret_chpl).locale;
  chpl_macro_tmp_7298.addr = &(((ret_chpl).addr)->home_chpl);
  chpl_gen_comm_put(((void*)(&coerce_tmp_chpl)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_7298).locale), INT64(0), INT32(0)), (chpl_macro_tmp_7298).addr, sizeof(chpl____wide_locale), -1, COMMID(20), INT64(2707), INT64(71));
  tmp_chpl5 = (x_chpl)->_channel_internal_chpl;
  coerce_tmp_chpl2 = tmp_chpl5;
  chpl_macro_tmp_7299.locale = (ret_chpl).locale;
  chpl_macro_tmp_7299.addr = &(((ret_chpl).addr)->_channel_internal_chpl);
  chpl_gen_comm_put(((void*)(&coerce_tmp_chpl2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_7299).locale), INT64(0), INT32(0)), (chpl_macro_tmp_7299).addr, sizeof(qio_channel_ptr_t), -1, COMMID(21), INT64(2708), INT64(71));
  return;
}

/* IO.chpl:2697 */
static void chpl___ASSIGN_14(chpl____wide__ref_channel_T_dynamic_T ret_chpl,
                             _ref_channel_T_dynamic_T x_chpl) {
  _ref__wide_locale call_tmp_chpl = NULL;
  chpl_localeID_t call_tmp_chpl2;
  chpl____wide_locale tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  channel_T_dynamic_T_chpl rvfDerefTmp_chpl;
  chpl_bool isdirect_chpl;
  _class_localson_fn_chpl18 _args_foron_fn_chpl = NULL;
  c_void_ptr _args_vforon_fn_chpl;
  chpl____wide__ref__wide_locale call_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp_chpl4;
  chpl____wide_locale tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_channel_T_dynamic_T tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect_chpl2;
  _class_localson_fn_chpl22 _args_foron_fn_chpl2 = NULL;
  chpl____wide__ref_channel_T_dynamic_T tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl2;
  chpl____wide_locale coerce_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  qio_channel_ptr_t coerce_tmp_chpl2;
  qio_channel_ptr_t tmp_chpl5;
  chpl__class_localson_fn_chpl18_object chpl_macro_tmp_7300;
  chpl____wide__ref__wide_locale chpl_macro_tmp_7301;
  chpl__class_localson_fn_chpl22_object chpl_macro_tmp_7302;
  chpl____wide__ref__wide_locale chpl_macro_tmp_7303;
  chpl____wide__ref_qio_channel_ptr_t chpl_macro_tmp_7304;
  call_tmp_chpl = &((x_chpl)->home_chpl);
  tmp_chpl = *(call_tmp_chpl);
  call_tmp_chpl2 = (&tmp_chpl)->locale;
  rvfDerefTmp_chpl = *(x_chpl);
  isdirect_chpl = chpl_doDirectExecuteOn(&call_tmp_chpl2);
  if (isdirect_chpl) {
    on_fn_chpl18(&rvfDerefTmp_chpl);
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn_chpl18)(&chpl_macro_tmp_7300));
    (_args_foron_fn_chpl)->_0_rvfDerefTmp_chpl = call_tmp_chpl2;
    (_args_foron_fn_chpl)->_1_rvfDerefTmp_chpl = rvfDerefTmp_chpl;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    /*** wrapon_fn_chpl20 ***/ chpl_executeOn(&call_tmp_chpl2, INT32(276), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), sizeof(chpl__class_localson_fn_chpl18_object), INT64(2699), INT32(71));
  }
  chpl_macro_tmp_7301.locale = (ret_chpl).locale;
  chpl_macro_tmp_7301.addr = &(((ret_chpl).addr)->home_chpl);
  call_tmp_chpl3 = chpl_macro_tmp_7301;
  chpl_gen_comm_get(((void*)(&tmp_chpl2)), chpl_nodeFromLocaleID(&((call_tmp_chpl3).locale), INT64(0), INT32(0)), (call_tmp_chpl3).addr, sizeof(chpl____wide_locale), -1, COMMID(22), INT64(2703), INT64(71));
  call_tmp_chpl4 = (&tmp_chpl2)->locale;
  tmp_chpl3 = ret_chpl;
  isdirect_chpl2 = chpl_doDirectExecuteOn(&call_tmp_chpl4);
  if (isdirect_chpl2) {
    on_fn_chpl22(tmp_chpl3);
  } else {
    _args_foron_fn_chpl2 = ((_class_localson_fn_chpl22)(&chpl_macro_tmp_7302));
    (_args_foron_fn_chpl2)->_0_rvfDerefTmp_chpl = call_tmp_chpl4;
    tmp_chpl4 = ret_chpl;
    (_args_foron_fn_chpl2)->_1_tmp_chpl = tmp_chpl4;
    _args_vforon_fn_chpl2 = ((void*)(_args_foron_fn_chpl2));
    /*** wrapon_fn_chpl24 ***/ chpl_executeOn(&call_tmp_chpl4, INT32(280), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl2)), sizeof(chpl__class_localson_fn_chpl22_object), INT64(2703), INT32(71));
  }
  coerce_tmp_chpl = (x_chpl)->home_chpl;
  chpl_macro_tmp_7303.locale = (ret_chpl).locale;
  chpl_macro_tmp_7303.addr = &(((ret_chpl).addr)->home_chpl);
  chpl_gen_comm_put(((void*)(&coerce_tmp_chpl)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_7303).locale), INT64(0), INT32(0)), (chpl_macro_tmp_7303).addr, sizeof(chpl____wide_locale), -1, COMMID(23), INT64(2707), INT64(71));
  tmp_chpl5 = (x_chpl)->_channel_internal_chpl;
  coerce_tmp_chpl2 = tmp_chpl5;
  chpl_macro_tmp_7304.locale = (ret_chpl).locale;
  chpl_macro_tmp_7304.addr = &(((ret_chpl).addr)->_channel_internal_chpl);
  chpl_gen_comm_put(((void*)(&coerce_tmp_chpl2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_7304).locale), INT64(0), INT32(0)), (chpl_macro_tmp_7304).addr, sizeof(qio_channel_ptr_t), -1, COMMID(24), INT64(2708), INT64(71));
  return;
}

/* IO.chpl:2699 */
static void wrapon_fn_chpl20(_class_localson_fn_chpl18 c_chpl) {
  channel_T_dynamic_T_chpl _1_rvfDerefTmp_chpl;
  channel_T_dynamic_T_chpl tmp_chpl;
  tmp_chpl = (c_chpl)->_1_rvfDerefTmp_chpl;
  _1_rvfDerefTmp_chpl = tmp_chpl;
  on_fn_chpl18(&_1_rvfDerefTmp_chpl);
  return;
}

/* IO.chpl:2699 */
static void wrapon_fn_chpl17(_class_localson_fn_chpl20 c_chpl) {
  channel_F_dynamic_T_chpl _1_rvfDerefTmp_chpl;
  channel_F_dynamic_T_chpl tmp_chpl;
  tmp_chpl = (c_chpl)->_1_rvfDerefTmp_chpl;
  _1_rvfDerefTmp_chpl = tmp_chpl;
  on_fn_chpl20(&_1_rvfDerefTmp_chpl);
  return;
}

/* IO.chpl:2699 */
static void wrapon_fn_chpl19(_class_localson_fn_chpl17 c_chpl) {
  channel_T_dynamic_F_chpl _1_rvfDerefTmp_chpl;
  channel_T_dynamic_F_chpl tmp_chpl;
  tmp_chpl = (c_chpl)->_1_rvfDerefTmp_chpl;
  _1_rvfDerefTmp_chpl = tmp_chpl;
  on_fn_chpl19(&_1_rvfDerefTmp_chpl);
  return;
}

/* IO.chpl:2699 */
static void on_fn_chpl17(_ref_channel_F_dynamic_F x_chpl) {
  qio_channel_ptr_t coerce_tmp_chpl;
  qio_channel_ptr_t tmp_chpl;
  tmp_chpl = (x_chpl)->_channel_internal_chpl;
  coerce_tmp_chpl = tmp_chpl;
  qio_channel_retain(coerce_tmp_chpl);
  return;
}

/* IO.chpl:2699 */
static void wrapon_fn_chpl18(_class_localson_fn_chpl19 c_chpl) {
  channel_F_dynamic_F_chpl _1_rvfDerefTmp_chpl;
  channel_F_dynamic_F_chpl tmp_chpl;
  tmp_chpl = (c_chpl)->_1_rvfDerefTmp_chpl;
  _1_rvfDerefTmp_chpl = tmp_chpl;
  on_fn_chpl17(&_1_rvfDerefTmp_chpl);
  return;
}

/* IO.chpl:2699 */
static void on_fn_chpl19(_ref_channel_T_dynamic_F x_chpl) {
  qio_channel_ptr_t coerce_tmp_chpl;
  qio_channel_ptr_t tmp_chpl;
  tmp_chpl = (x_chpl)->_channel_internal_chpl;
  coerce_tmp_chpl = tmp_chpl;
  qio_channel_retain(coerce_tmp_chpl);
  return;
}

/* IO.chpl:2699 */
static void on_fn_chpl18(_ref_channel_T_dynamic_T x_chpl) {
  qio_channel_ptr_t coerce_tmp_chpl;
  qio_channel_ptr_t tmp_chpl;
  tmp_chpl = (x_chpl)->_channel_internal_chpl;
  coerce_tmp_chpl = tmp_chpl;
  qio_channel_retain(coerce_tmp_chpl);
  return;
}

/* IO.chpl:2699 */
static void on_fn_chpl20(_ref_channel_F_dynamic_T x_chpl) {
  qio_channel_ptr_t coerce_tmp_chpl;
  qio_channel_ptr_t tmp_chpl;
  tmp_chpl = (x_chpl)->_channel_internal_chpl;
  coerce_tmp_chpl = tmp_chpl;
  qio_channel_retain(coerce_tmp_chpl);
  return;
}

/* IO.chpl:2703 */
static void on_fn_chpl21(chpl____wide__ref_channel_F_dynamic_F ret_chpl) {
  qio_channel_ptr_t coerce_tmp_chpl;
  qio_channel_ptr_t tmp_chpl;
  chpl____wide__ref_qio_channel_ptr_t chpl_macro_tmp_7305;
  chpl_macro_tmp_7305.locale = (ret_chpl).locale;
  chpl_macro_tmp_7305.addr = &(((ret_chpl).addr)->_channel_internal_chpl);
  chpl_gen_comm_get(((void*)(&tmp_chpl)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_7305).locale), INT64(0), INT32(0)), (chpl_macro_tmp_7305).addr, sizeof(qio_channel_ptr_t), -1, COMMID(25), INT64(2704), INT64(71));
  coerce_tmp_chpl = tmp_chpl;
  qio_channel_release(coerce_tmp_chpl);
  return;
}

/* IO.chpl:2703 */
static void on_fn_chpl23(chpl____wide__ref_channel_T_dynamic_F ret_chpl) {
  qio_channel_ptr_t coerce_tmp_chpl;
  qio_channel_ptr_t tmp_chpl;
  chpl____wide__ref_qio_channel_ptr_t chpl_macro_tmp_7306;
  chpl_macro_tmp_7306.locale = (ret_chpl).locale;
  chpl_macro_tmp_7306.addr = &(((ret_chpl).addr)->_channel_internal_chpl);
  chpl_gen_comm_get(((void*)(&tmp_chpl)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_7306).locale), INT64(0), INT32(0)), (chpl_macro_tmp_7306).addr, sizeof(qio_channel_ptr_t), -1, COMMID(26), INT64(2704), INT64(71));
  coerce_tmp_chpl = tmp_chpl;
  qio_channel_release(coerce_tmp_chpl);
  return;
}

/* IO.chpl:2703 */
static void on_fn_chpl22(chpl____wide__ref_channel_T_dynamic_T ret_chpl) {
  qio_channel_ptr_t coerce_tmp_chpl;
  qio_channel_ptr_t tmp_chpl;
  chpl____wide__ref_qio_channel_ptr_t chpl_macro_tmp_7307;
  chpl_macro_tmp_7307.locale = (ret_chpl).locale;
  chpl_macro_tmp_7307.addr = &(((ret_chpl).addr)->_channel_internal_chpl);
  chpl_gen_comm_get(((void*)(&tmp_chpl)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_7307).locale), INT64(0), INT32(0)), (chpl_macro_tmp_7307).addr, sizeof(qio_channel_ptr_t), -1, COMMID(27), INT64(2704), INT64(71));
  coerce_tmp_chpl = tmp_chpl;
  qio_channel_release(coerce_tmp_chpl);
  return;
}

/* IO.chpl:2703 */
static void on_fn_chpl24(chpl____wide__ref_channel_F_dynamic_T ret_chpl) {
  qio_channel_ptr_t coerce_tmp_chpl;
  qio_channel_ptr_t tmp_chpl;
  chpl____wide__ref_qio_channel_ptr_t chpl_macro_tmp_7308;
  chpl_macro_tmp_7308.locale = (ret_chpl).locale;
  chpl_macro_tmp_7308.addr = &(((ret_chpl).addr)->_channel_internal_chpl);
  chpl_gen_comm_get(((void*)(&tmp_chpl)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_7308).locale), INT64(0), INT32(0)), (chpl_macro_tmp_7308).addr, sizeof(qio_channel_ptr_t), -1, COMMID(28), INT64(2704), INT64(71));
  coerce_tmp_chpl = tmp_chpl;
  qio_channel_release(coerce_tmp_chpl);
  return;
}

/* IO.chpl:2703 */
static void wrapon_fn_chpl24(_class_localson_fn_chpl22 c_chpl) {
  chpl____wide__ref_channel_T_dynamic_T _1_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _1_tmp_chpl = (c_chpl)->_1_tmp_chpl;
  on_fn_chpl22(_1_tmp_chpl);
  return;
}

/* IO.chpl:2703 */
static void wrapon_fn_chpl22(_class_localson_fn_chpl23 c_chpl) {
  chpl____wide__ref_channel_F_dynamic_T _1_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _1_tmp_chpl = (c_chpl)->_1_tmp_chpl;
  on_fn_chpl24(_1_tmp_chpl);
  return;
}

/* IO.chpl:2703 */
static void wrapon_fn_chpl23(_class_localson_fn_chpl21 c_chpl) {
  chpl____wide__ref_channel_T_dynamic_F _1_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _1_tmp_chpl = (c_chpl)->_1_tmp_chpl;
  on_fn_chpl23(_1_tmp_chpl);
  return;
}

/* IO.chpl:2703 */
static void wrapon_fn_chpl21(_class_localson_fn_chpl24 c_chpl) {
  chpl____wide__ref_channel_F_dynamic_F _1_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _1_tmp_chpl = (c_chpl)->_1_tmp_chpl;
  on_fn_chpl21(_1_tmp_chpl);
  return;
}

/* IO.chpl:2712 */
static void channel_chpl4(_ref_file f_chpl,
                          chpl____wide__ref_syserr error_chpl,
                          int32_t hints_chpl,
                          int64_t start_chpl,
                          int64_t end_chpl,
                          _ref_iostyle local_style_chpl,
                          _ref_channel_F_dynamic_T _retArg_chpl) {
  qio_channel_ptr_t local_QIO_CHANNEL_PTR_NULL_chpl;
  iostyle _formal_tmp_local_style_chpl;
  syserr _formal_tmp_error_chpl;
  channel_F_dynamic_T_chpl this_chpl6;
  channel_F_dynamic_T_chpl this_chpl7;
  chpl____wide_locale tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_locale tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  locale call_tmp_chpl = NULL;
  chpl____wide_locale tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  qio_channel_ptr_t default_arg_channel_internal_chpl;
  locale call_tmp_chpl2 = NULL;
  chpl____wide_locale tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  channel_F_dynamic_T_chpl ret_tmp_chpl;
  _ref_channel_F_dynamic_T ret_to_arg_ref_tmp__chpl = NULL;
  _ref__wide_locale call_tmp_chpl3 = NULL;
  chpl_localeID_t call_tmp_chpl4;
  chpl____wide_locale tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_channel_F_dynamic_T tmp_chpl6 = NULL;
  _ref_syserr tmp_chpl7 = NULL;
  file_chpl rvfDerefTmp_chpl;
  chpl_bool isdirect_chpl;
  chpl____wide__ref_channel_F_dynamic_T tmp_chpl8 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_syserr tmp_chpl9 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl27 _args_foron_fn_chpl = NULL;
  _ref_channel_F_dynamic_T tmp_chpl10 = NULL;
  chpl____wide__ref_channel_F_dynamic_T tmp_chpl11 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_syserr tmp_chpl12 = NULL;
  chpl____wide__ref_syserr tmp_chpl13 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  chpl____wide__nilType chpl_macro_tmp_7309;
  chpl____wide_locale chpl_macro_tmp_7310;
  chpl____wide__nilType chpl_macro_tmp_7311;
  chpl____wide_locale chpl_macro_tmp_7312;
  chpl____wide_locale chpl_macro_tmp_7313;
  chpl____wide_locale chpl_macro_tmp_7314;
  chpl____wide__ref_channel_F_dynamic_T chpl_macro_tmp_7315;
  chpl____wide__ref_syserr chpl_macro_tmp_7316;
  chpl__class_localson_fn_chpl27_object chpl_macro_tmp_7317;
  chpl____wide__ref_channel_F_dynamic_T chpl_macro_tmp_7318;
  chpl____wide__ref_syserr chpl_macro_tmp_7319;
  local_QIO_CHANNEL_PTR_NULL_chpl = QIO_CHANNEL_PTR_NULL;
  _formal_tmp_local_style_chpl = *(local_style_chpl);
  chpl_macro_tmp_7309.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7309.addr = nil;
  chpl_macro_tmp_7310.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7310.addr = NULL;
  tmp_chpl = chpl_macro_tmp_7310;
  (&this_chpl7)->home_chpl = tmp_chpl;
  chpl_macro_tmp_7311.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7311.addr = nil;
  chpl_macro_tmp_7312.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7312.addr = NULL;
  tmp_chpl2 = chpl_macro_tmp_7312;
  (&this_chpl7)->_readWriteThisFromLocale_chpl = tmp_chpl2;
  call_tmp_chpl = ((locale)(nil));
  chpl_macro_tmp_7313.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7313.addr = call_tmp_chpl;
  tmp_chpl3 = chpl_macro_tmp_7313;
  (&this_chpl7)->home_chpl = tmp_chpl3;
  default_arg_channel_internal_chpl = local_QIO_CHANNEL_PTR_NULL_chpl;
  (&this_chpl7)->_channel_internal_chpl = default_arg_channel_internal_chpl;
  call_tmp_chpl2 = ((locale)(nil));
  chpl_macro_tmp_7314.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7314.addr = call_tmp_chpl2;
  tmp_chpl4 = chpl_macro_tmp_7314;
  (&this_chpl7)->_readWriteThisFromLocale_chpl = tmp_chpl4;
  ret_to_arg_ref_tmp__chpl = &ret_tmp_chpl;
  _construct_channel_chpl2(call_tmp_chpl, default_arg_channel_internal_chpl, call_tmp_chpl2, &this_chpl7, ret_to_arg_ref_tmp__chpl);
  this_chpl6 = ret_tmp_chpl;
  call_tmp_chpl3 = &((f_chpl)->home_chpl);
  tmp_chpl5 = *(call_tmp_chpl3);
  call_tmp_chpl4 = (&tmp_chpl5)->locale;
  tmp_chpl6 = &this_chpl6;
  tmp_chpl7 = &_formal_tmp_error_chpl;
  rvfDerefTmp_chpl = *(f_chpl);
  isdirect_chpl = chpl_doDirectExecuteOn(&call_tmp_chpl4);
  if (isdirect_chpl) {
    chpl_macro_tmp_7315.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7315.addr = tmp_chpl6;
    tmp_chpl8 = chpl_macro_tmp_7315;
    chpl_macro_tmp_7316.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7316.addr = tmp_chpl7;
    tmp_chpl9 = chpl_macro_tmp_7316;
    on_fn_chpl25(&_formal_tmp_local_style_chpl, end_chpl, tmp_chpl8, start_chpl, &rvfDerefTmp_chpl, hints_chpl, tmp_chpl9);
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn_chpl27)(&chpl_macro_tmp_7317));
    (_args_foron_fn_chpl)->_0_rvfDerefTmp_chpl = call_tmp_chpl4;
    (_args_foron_fn_chpl)->_1_rvfDerefTmp_chpl = _formal_tmp_local_style_chpl;
    (_args_foron_fn_chpl)->_2_rvfDerefTmp_chpl = end_chpl;
    tmp_chpl10 = &this_chpl6;
    chpl_macro_tmp_7318.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7318.addr = tmp_chpl10;
    tmp_chpl11 = chpl_macro_tmp_7318;
    (_args_foron_fn_chpl)->_3_tmp_chpl = tmp_chpl11;
    (_args_foron_fn_chpl)->_4_rvfDerefTmp_chpl = start_chpl;
    (_args_foron_fn_chpl)->_5_rvfDerefTmp_chpl = rvfDerefTmp_chpl;
    (_args_foron_fn_chpl)->_6_rvfDerefTmp_chpl = hints_chpl;
    tmp_chpl12 = &_formal_tmp_error_chpl;
    chpl_macro_tmp_7319.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7319.addr = tmp_chpl12;
    tmp_chpl13 = chpl_macro_tmp_7319;
    (_args_foron_fn_chpl)->_7_tmp_chpl = tmp_chpl13;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    /*** wrapon_fn_chpl26 ***/ chpl_executeOn(&call_tmp_chpl4, INT32(282), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), sizeof(chpl__class_localson_fn_chpl27_object), INT64(2713), INT32(71));
  }
  chpl_gen_comm_put(((void*)(&_formal_tmp_error_chpl)), chpl_nodeFromLocaleID(&((error_chpl).locale), INT64(0), INT32(0)), (error_chpl).addr, sizeof(syserr), -1, COMMID(29), INT64(2712), INT64(71));
  *(_retArg_chpl) = this_chpl6;
  return;
}

/* IO.chpl:2712 */
static void channel_chpl2(_ref_file f_chpl,
                          chpl____wide__ref_syserr error_chpl,
                          int32_t hints_chpl,
                          int64_t start_chpl,
                          int64_t end_chpl,
                          _ref_iostyle local_style_chpl,
                          _ref_channel_T_dynamic_T _retArg_chpl) {
  qio_channel_ptr_t local_QIO_CHANNEL_PTR_NULL_chpl;
  iostyle _formal_tmp_local_style_chpl;
  syserr _formal_tmp_error_chpl;
  channel_T_dynamic_T_chpl this_chpl6;
  channel_T_dynamic_T_chpl this_chpl7;
  chpl____wide_locale tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_locale tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  locale call_tmp_chpl = NULL;
  chpl____wide_locale tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  qio_channel_ptr_t default_arg_channel_internal_chpl;
  locale call_tmp_chpl2 = NULL;
  chpl____wide_locale tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  channel_T_dynamic_T_chpl ret_tmp_chpl;
  _ref_channel_T_dynamic_T ret_to_arg_ref_tmp__chpl = NULL;
  _ref__wide_locale call_tmp_chpl3 = NULL;
  chpl_localeID_t call_tmp_chpl4;
  chpl____wide_locale tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_syserr tmp_chpl6 = NULL;
  _ref_channel_T_dynamic_T tmp_chpl7 = NULL;
  file_chpl rvfDerefTmp_chpl;
  chpl_bool isdirect_chpl;
  chpl____wide__ref_syserr tmp_chpl8 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_channel_T_dynamic_T tmp_chpl9 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl26 _args_foron_fn_chpl = NULL;
  _ref_syserr tmp_chpl10 = NULL;
  chpl____wide__ref_syserr tmp_chpl11 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_channel_T_dynamic_T tmp_chpl12 = NULL;
  chpl____wide__ref_channel_T_dynamic_T tmp_chpl13 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  chpl____wide__nilType chpl_macro_tmp_7320;
  chpl____wide_locale chpl_macro_tmp_7321;
  chpl____wide__nilType chpl_macro_tmp_7322;
  chpl____wide_locale chpl_macro_tmp_7323;
  chpl____wide_locale chpl_macro_tmp_7324;
  chpl____wide_locale chpl_macro_tmp_7325;
  chpl____wide__ref_syserr chpl_macro_tmp_7326;
  chpl____wide__ref_channel_T_dynamic_T chpl_macro_tmp_7327;
  chpl__class_localson_fn_chpl26_object chpl_macro_tmp_7328;
  chpl____wide__ref_syserr chpl_macro_tmp_7329;
  chpl____wide__ref_channel_T_dynamic_T chpl_macro_tmp_7330;
  local_QIO_CHANNEL_PTR_NULL_chpl = QIO_CHANNEL_PTR_NULL;
  _formal_tmp_local_style_chpl = *(local_style_chpl);
  chpl_macro_tmp_7320.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7320.addr = nil;
  chpl_macro_tmp_7321.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7321.addr = NULL;
  tmp_chpl = chpl_macro_tmp_7321;
  (&this_chpl7)->home_chpl = tmp_chpl;
  chpl_macro_tmp_7322.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7322.addr = nil;
  chpl_macro_tmp_7323.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7323.addr = NULL;
  tmp_chpl2 = chpl_macro_tmp_7323;
  (&this_chpl7)->_readWriteThisFromLocale_chpl = tmp_chpl2;
  call_tmp_chpl = ((locale)(nil));
  chpl_macro_tmp_7324.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7324.addr = call_tmp_chpl;
  tmp_chpl3 = chpl_macro_tmp_7324;
  (&this_chpl7)->home_chpl = tmp_chpl3;
  default_arg_channel_internal_chpl = local_QIO_CHANNEL_PTR_NULL_chpl;
  (&this_chpl7)->_channel_internal_chpl = default_arg_channel_internal_chpl;
  call_tmp_chpl2 = ((locale)(nil));
  chpl_macro_tmp_7325.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7325.addr = call_tmp_chpl2;
  tmp_chpl4 = chpl_macro_tmp_7325;
  (&this_chpl7)->_readWriteThisFromLocale_chpl = tmp_chpl4;
  ret_to_arg_ref_tmp__chpl = &ret_tmp_chpl;
  _construct_channel_chpl3(call_tmp_chpl, default_arg_channel_internal_chpl, call_tmp_chpl2, &this_chpl7, ret_to_arg_ref_tmp__chpl);
  this_chpl6 = ret_tmp_chpl;
  call_tmp_chpl3 = &((f_chpl)->home_chpl);
  tmp_chpl5 = *(call_tmp_chpl3);
  call_tmp_chpl4 = (&tmp_chpl5)->locale;
  tmp_chpl6 = &_formal_tmp_error_chpl;
  tmp_chpl7 = &this_chpl6;
  rvfDerefTmp_chpl = *(f_chpl);
  isdirect_chpl = chpl_doDirectExecuteOn(&call_tmp_chpl4);
  if (isdirect_chpl) {
    chpl_macro_tmp_7326.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7326.addr = tmp_chpl6;
    tmp_chpl8 = chpl_macro_tmp_7326;
    chpl_macro_tmp_7327.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7327.addr = tmp_chpl7;
    tmp_chpl9 = chpl_macro_tmp_7327;
    on_fn_chpl27(&rvfDerefTmp_chpl, &_formal_tmp_local_style_chpl, tmp_chpl8, hints_chpl, end_chpl, start_chpl, tmp_chpl9);
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn_chpl26)(&chpl_macro_tmp_7328));
    (_args_foron_fn_chpl)->_0_rvfDerefTmp_chpl = call_tmp_chpl4;
    (_args_foron_fn_chpl)->_1_rvfDerefTmp_chpl = rvfDerefTmp_chpl;
    (_args_foron_fn_chpl)->_2_rvfDerefTmp_chpl = _formal_tmp_local_style_chpl;
    tmp_chpl10 = &_formal_tmp_error_chpl;
    chpl_macro_tmp_7329.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7329.addr = tmp_chpl10;
    tmp_chpl11 = chpl_macro_tmp_7329;
    (_args_foron_fn_chpl)->_3_tmp_chpl = tmp_chpl11;
    (_args_foron_fn_chpl)->_4_rvfDerefTmp_chpl = hints_chpl;
    (_args_foron_fn_chpl)->_5_rvfDerefTmp_chpl = end_chpl;
    (_args_foron_fn_chpl)->_6_rvfDerefTmp_chpl = start_chpl;
    tmp_chpl12 = &this_chpl6;
    chpl_macro_tmp_7330.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7330.addr = tmp_chpl12;
    tmp_chpl13 = chpl_macro_tmp_7330;
    (_args_foron_fn_chpl)->_7_tmp_chpl = tmp_chpl13;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    /*** wrapon_fn_chpl27 ***/ chpl_executeOn(&call_tmp_chpl4, INT32(283), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), sizeof(chpl__class_localson_fn_chpl26_object), INT64(2713), INT32(71));
  }
  chpl_gen_comm_put(((void*)(&_formal_tmp_error_chpl)), chpl_nodeFromLocaleID(&((error_chpl).locale), INT64(0), INT32(0)), (error_chpl).addr, sizeof(syserr), -1, COMMID(30), INT64(2712), INT64(71));
  *(_retArg_chpl) = this_chpl6;
  return;
}

/* IO.chpl:2712 */
static void channel_chpl3(_ref_file f_chpl,
                          chpl____wide__ref_syserr error_chpl,
                          int32_t hints_chpl,
                          int64_t start_chpl,
                          int64_t end_chpl,
                          _ref_iostyle local_style_chpl,
                          _ref_channel_T_dynamic_F _retArg_chpl) {
  qio_channel_ptr_t local_QIO_CHANNEL_PTR_NULL_chpl;
  iostyle _formal_tmp_local_style_chpl;
  syserr _formal_tmp_error_chpl;
  channel_T_dynamic_F_chpl this_chpl6;
  channel_T_dynamic_F_chpl this_chpl7;
  chpl____wide_locale tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_locale tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  locale call_tmp_chpl = NULL;
  chpl____wide_locale tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  qio_channel_ptr_t default_arg_channel_internal_chpl;
  locale call_tmp_chpl2 = NULL;
  chpl____wide_locale tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  channel_T_dynamic_F_chpl ret_tmp_chpl;
  _ref_channel_T_dynamic_F ret_to_arg_ref_tmp__chpl = NULL;
  chpl____wide_locale tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_locale tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__wide_locale call_tmp_chpl3 = NULL;
  chpl_localeID_t call_tmp_chpl4;
  chpl____wide_locale tmp_chpl7 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_syserr tmp_chpl8 = NULL;
  _ref_channel_T_dynamic_F tmp_chpl9 = NULL;
  file_chpl rvfDerefTmp_chpl;
  chpl_bool isdirect_chpl;
  chpl____wide__ref_syserr tmp_chpl10 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_channel_T_dynamic_F tmp_chpl11 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl28 _args_foron_fn_chpl = NULL;
  _ref_syserr tmp_chpl12 = NULL;
  chpl____wide__ref_syserr tmp_chpl13 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_channel_T_dynamic_F tmp_chpl14 = NULL;
  chpl____wide__ref_channel_T_dynamic_F tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  chpl____wide__nilType chpl_macro_tmp_7331;
  chpl____wide_locale chpl_macro_tmp_7332;
  chpl____wide__nilType chpl_macro_tmp_7333;
  chpl____wide_locale chpl_macro_tmp_7334;
  chpl____wide_locale chpl_macro_tmp_7335;
  chpl____wide_locale chpl_macro_tmp_7336;
  chpl____wide_locale chpl_macro_tmp_7337;
  chpl____wide_locale chpl_macro_tmp_7338;
  chpl____wide__ref_syserr chpl_macro_tmp_7339;
  chpl____wide__ref_channel_T_dynamic_F chpl_macro_tmp_7340;
  chpl__class_localson_fn_chpl28_object chpl_macro_tmp_7341;
  chpl____wide__ref_syserr chpl_macro_tmp_7342;
  chpl____wide__ref_channel_T_dynamic_F chpl_macro_tmp_7343;
  local_QIO_CHANNEL_PTR_NULL_chpl = QIO_CHANNEL_PTR_NULL;
  _formal_tmp_local_style_chpl = *(local_style_chpl);
  chpl_macro_tmp_7331.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7331.addr = nil;
  chpl_macro_tmp_7332.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7332.addr = NULL;
  tmp_chpl = chpl_macro_tmp_7332;
  (&this_chpl7)->home_chpl = tmp_chpl;
  chpl_macro_tmp_7333.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7333.addr = nil;
  chpl_macro_tmp_7334.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7334.addr = NULL;
  tmp_chpl2 = chpl_macro_tmp_7334;
  (&this_chpl7)->_readWriteThisFromLocale_chpl = tmp_chpl2;
  call_tmp_chpl = ((locale)(nil));
  chpl_macro_tmp_7335.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7335.addr = call_tmp_chpl;
  tmp_chpl3 = chpl_macro_tmp_7335;
  (&this_chpl7)->home_chpl = tmp_chpl3;
  default_arg_channel_internal_chpl = local_QIO_CHANNEL_PTR_NULL_chpl;
  (&this_chpl7)->_channel_internal_chpl = default_arg_channel_internal_chpl;
  call_tmp_chpl2 = ((locale)(nil));
  chpl_macro_tmp_7336.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7336.addr = call_tmp_chpl2;
  tmp_chpl4 = chpl_macro_tmp_7336;
  (&this_chpl7)->_readWriteThisFromLocale_chpl = tmp_chpl4;
  ret_to_arg_ref_tmp__chpl = &ret_tmp_chpl;
  chpl_macro_tmp_7337.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7337.addr = call_tmp_chpl;
  tmp_chpl5 = chpl_macro_tmp_7337;
  chpl_macro_tmp_7338.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7338.addr = call_tmp_chpl2;
  tmp_chpl6 = chpl_macro_tmp_7338;
  _construct_channel_chpl4(tmp_chpl5, default_arg_channel_internal_chpl, tmp_chpl6, &this_chpl7, ret_to_arg_ref_tmp__chpl);
  this_chpl6 = ret_tmp_chpl;
  call_tmp_chpl3 = &((f_chpl)->home_chpl);
  tmp_chpl7 = *(call_tmp_chpl3);
  call_tmp_chpl4 = (&tmp_chpl7)->locale;
  tmp_chpl8 = &_formal_tmp_error_chpl;
  tmp_chpl9 = &this_chpl6;
  rvfDerefTmp_chpl = *(f_chpl);
  isdirect_chpl = chpl_doDirectExecuteOn(&call_tmp_chpl4);
  if (isdirect_chpl) {
    chpl_macro_tmp_7339.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7339.addr = tmp_chpl8;
    tmp_chpl10 = chpl_macro_tmp_7339;
    chpl_macro_tmp_7340.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7340.addr = tmp_chpl9;
    tmp_chpl11 = chpl_macro_tmp_7340;
    on_fn_chpl28(&rvfDerefTmp_chpl, hints_chpl, tmp_chpl10, &_formal_tmp_local_style_chpl, end_chpl, tmp_chpl11, start_chpl);
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn_chpl28)(&chpl_macro_tmp_7341));
    (_args_foron_fn_chpl)->_0_rvfDerefTmp_chpl = call_tmp_chpl4;
    (_args_foron_fn_chpl)->_1_rvfDerefTmp_chpl = rvfDerefTmp_chpl;
    (_args_foron_fn_chpl)->_2_rvfDerefTmp_chpl = hints_chpl;
    tmp_chpl12 = &_formal_tmp_error_chpl;
    chpl_macro_tmp_7342.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7342.addr = tmp_chpl12;
    tmp_chpl13 = chpl_macro_tmp_7342;
    (_args_foron_fn_chpl)->_3_tmp_chpl = tmp_chpl13;
    (_args_foron_fn_chpl)->_4_rvfDerefTmp_chpl = _formal_tmp_local_style_chpl;
    (_args_foron_fn_chpl)->_5_rvfDerefTmp_chpl = end_chpl;
    tmp_chpl14 = &this_chpl6;
    chpl_macro_tmp_7343.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7343.addr = tmp_chpl14;
    tmp_chpl15 = chpl_macro_tmp_7343;
    (_args_foron_fn_chpl)->_6_tmp_chpl = tmp_chpl15;
    (_args_foron_fn_chpl)->_7_rvfDerefTmp_chpl = start_chpl;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    /*** wrapon_fn_chpl28 ***/ chpl_executeOn(&call_tmp_chpl4, INT32(284), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), sizeof(chpl__class_localson_fn_chpl28_object), INT64(2713), INT32(71));
  }
  chpl_gen_comm_put(((void*)(&_formal_tmp_error_chpl)), chpl_nodeFromLocaleID(&((error_chpl).locale), INT64(0), INT32(0)), (error_chpl).addr, sizeof(syserr), -1, COMMID(31), INT64(2712), INT64(71));
  *(_retArg_chpl) = this_chpl6;
  return;
}

/* IO.chpl:2712 */
static void channel_chpl(_ref_file f_chpl,
                         chpl____wide__ref_syserr error_chpl,
                         int32_t hints_chpl,
                         int64_t start_chpl,
                         int64_t end_chpl,
                         _ref_iostyle local_style_chpl,
                         _ref_channel_F_dynamic_F _retArg_chpl) {
  qio_channel_ptr_t local_QIO_CHANNEL_PTR_NULL_chpl;
  iostyle _formal_tmp_local_style_chpl;
  syserr _formal_tmp_error_chpl;
  channel_F_dynamic_F_chpl this_chpl6;
  channel_F_dynamic_F_chpl this_chpl7;
  chpl____wide_locale tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_locale tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  locale call_tmp_chpl = NULL;
  chpl____wide_locale tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  qio_channel_ptr_t default_arg_channel_internal_chpl;
  locale call_tmp_chpl2 = NULL;
  chpl____wide_locale tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  channel_F_dynamic_F_chpl ret_tmp_chpl;
  _ref_channel_F_dynamic_F ret_to_arg_ref_tmp__chpl = NULL;
  _ref__wide_locale call_tmp_chpl3 = NULL;
  chpl_localeID_t call_tmp_chpl4;
  chpl____wide_locale tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_syserr tmp_chpl6 = NULL;
  _ref_channel_F_dynamic_F tmp_chpl7 = NULL;
  file_chpl rvfDerefTmp_chpl;
  chpl_bool isdirect_chpl;
  chpl____wide__ref_syserr tmp_chpl8 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_channel_F_dynamic_F tmp_chpl9 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl25 _args_foron_fn_chpl = NULL;
  _ref_syserr tmp_chpl10 = NULL;
  chpl____wide__ref_syserr tmp_chpl11 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_channel_F_dynamic_F tmp_chpl12 = NULL;
  chpl____wide__ref_channel_F_dynamic_F tmp_chpl13 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  chpl____wide__nilType chpl_macro_tmp_7344;
  chpl____wide_locale chpl_macro_tmp_7345;
  chpl____wide__nilType chpl_macro_tmp_7346;
  chpl____wide_locale chpl_macro_tmp_7347;
  chpl____wide_locale chpl_macro_tmp_7348;
  chpl____wide_locale chpl_macro_tmp_7349;
  chpl____wide__ref_syserr chpl_macro_tmp_7350;
  chpl____wide__ref_channel_F_dynamic_F chpl_macro_tmp_7351;
  chpl__class_localson_fn_chpl25_object chpl_macro_tmp_7352;
  chpl____wide__ref_syserr chpl_macro_tmp_7353;
  chpl____wide__ref_channel_F_dynamic_F chpl_macro_tmp_7354;
  local_QIO_CHANNEL_PTR_NULL_chpl = QIO_CHANNEL_PTR_NULL;
  _formal_tmp_local_style_chpl = *(local_style_chpl);
  chpl_macro_tmp_7344.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7344.addr = nil;
  chpl_macro_tmp_7345.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7345.addr = NULL;
  tmp_chpl = chpl_macro_tmp_7345;
  (&this_chpl7)->home_chpl = tmp_chpl;
  chpl_macro_tmp_7346.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7346.addr = nil;
  chpl_macro_tmp_7347.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7347.addr = NULL;
  tmp_chpl2 = chpl_macro_tmp_7347;
  (&this_chpl7)->_readWriteThisFromLocale_chpl = tmp_chpl2;
  call_tmp_chpl = ((locale)(nil));
  chpl_macro_tmp_7348.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7348.addr = call_tmp_chpl;
  tmp_chpl3 = chpl_macro_tmp_7348;
  (&this_chpl7)->home_chpl = tmp_chpl3;
  default_arg_channel_internal_chpl = local_QIO_CHANNEL_PTR_NULL_chpl;
  (&this_chpl7)->_channel_internal_chpl = default_arg_channel_internal_chpl;
  call_tmp_chpl2 = ((locale)(nil));
  chpl_macro_tmp_7349.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7349.addr = call_tmp_chpl2;
  tmp_chpl4 = chpl_macro_tmp_7349;
  (&this_chpl7)->_readWriteThisFromLocale_chpl = tmp_chpl4;
  ret_to_arg_ref_tmp__chpl = &ret_tmp_chpl;
  _construct_channel_chpl(call_tmp_chpl, default_arg_channel_internal_chpl, call_tmp_chpl2, &this_chpl7, ret_to_arg_ref_tmp__chpl);
  this_chpl6 = ret_tmp_chpl;
  call_tmp_chpl3 = &((f_chpl)->home_chpl);
  tmp_chpl5 = *(call_tmp_chpl3);
  call_tmp_chpl4 = (&tmp_chpl5)->locale;
  tmp_chpl6 = &_formal_tmp_error_chpl;
  tmp_chpl7 = &this_chpl6;
  rvfDerefTmp_chpl = *(f_chpl);
  isdirect_chpl = chpl_doDirectExecuteOn(&call_tmp_chpl4);
  if (isdirect_chpl) {
    chpl_macro_tmp_7350.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7350.addr = tmp_chpl6;
    tmp_chpl8 = chpl_macro_tmp_7350;
    chpl_macro_tmp_7351.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7351.addr = tmp_chpl7;
    tmp_chpl9 = chpl_macro_tmp_7351;
    on_fn_chpl26(start_chpl, &rvfDerefTmp_chpl, hints_chpl, tmp_chpl8, &_formal_tmp_local_style_chpl, end_chpl, tmp_chpl9);
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn_chpl25)(&chpl_macro_tmp_7352));
    (_args_foron_fn_chpl)->_0_rvfDerefTmp_chpl = call_tmp_chpl4;
    (_args_foron_fn_chpl)->_1_rvfDerefTmp_chpl = start_chpl;
    (_args_foron_fn_chpl)->_2_rvfDerefTmp_chpl = rvfDerefTmp_chpl;
    (_args_foron_fn_chpl)->_3_rvfDerefTmp_chpl = hints_chpl;
    tmp_chpl10 = &_formal_tmp_error_chpl;
    chpl_macro_tmp_7353.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7353.addr = tmp_chpl10;
    tmp_chpl11 = chpl_macro_tmp_7353;
    (_args_foron_fn_chpl)->_4_tmp_chpl = tmp_chpl11;
    (_args_foron_fn_chpl)->_5_rvfDerefTmp_chpl = _formal_tmp_local_style_chpl;
    (_args_foron_fn_chpl)->_6_rvfDerefTmp_chpl = end_chpl;
    tmp_chpl12 = &this_chpl6;
    chpl_macro_tmp_7354.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7354.addr = tmp_chpl12;
    tmp_chpl13 = chpl_macro_tmp_7354;
    (_args_foron_fn_chpl)->_7_tmp_chpl = tmp_chpl13;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    /*** wrapon_fn_chpl25 ***/ chpl_executeOn(&call_tmp_chpl4, INT32(281), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), sizeof(chpl__class_localson_fn_chpl25_object), INT64(2713), INT32(71));
  }
  chpl_gen_comm_put(((void*)(&_formal_tmp_error_chpl)), chpl_nodeFromLocaleID(&((error_chpl).locale), INT64(0), INT32(0)), (error_chpl).addr, sizeof(syserr), -1, COMMID(32), INT64(2712), INT64(71));
  *(_retArg_chpl) = this_chpl6;
  return;
}

/* IO.chpl:2713 */
static void wrapon_fn_chpl26(_class_localson_fn_chpl27 c_chpl) {
  iostyle _1_rvfDerefTmp_chpl;
  iostyle tmp_chpl;
  chpl____wide__ref_channel_F_dynamic_T _3_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t _4_rvfDerefTmp_chpl;
  file_chpl _5_rvfDerefTmp_chpl;
  file_chpl tmp_chpl2;
  chpl____wide__ref_syserr _7_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  tmp_chpl = (c_chpl)->_1_rvfDerefTmp_chpl;
  _1_rvfDerefTmp_chpl = tmp_chpl;
  _3_tmp_chpl = (c_chpl)->_3_tmp_chpl;
  _4_rvfDerefTmp_chpl = (c_chpl)->_4_rvfDerefTmp_chpl;
  tmp_chpl2 = (c_chpl)->_5_rvfDerefTmp_chpl;
  _5_rvfDerefTmp_chpl = tmp_chpl2;
  _7_tmp_chpl = (c_chpl)->_7_tmp_chpl;
  on_fn_chpl25(&_1_rvfDerefTmp_chpl, (c_chpl)->_2_rvfDerefTmp_chpl, _3_tmp_chpl, _4_rvfDerefTmp_chpl, &_5_rvfDerefTmp_chpl, (c_chpl)->_6_rvfDerefTmp_chpl, _7_tmp_chpl);
  return;
}

/* IO.chpl:2713 */
static void on_fn_chpl27(_ref_file f_chpl,
                         _ref_iostyle _formal_tmp_local_style_chpl,
                         chpl____wide__ref_syserr _formal_tmp_error_chpl,
                         int32_t hints_chpl,
                         int64_t end_chpl,
                         int64_t start_chpl,
                         chpl____wide__ref_channel_T_dynamic_T this_chpl6) {
  chpl____wide_locale coerce_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_qio_channel_ptr_t call_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  syserr call_tmp_chpl2;
  qio_file_ptr_t coerce_tmp_chpl2;
  qio_file_ptr_t tmp_chpl;
  _ref_qio_channel_ptr_t tmp_chpl2 = NULL;
  chpl____wide__ref__wide_locale chpl_macro_tmp_7355;
  chpl____wide__ref_qio_channel_ptr_t chpl_macro_tmp_7356;
  chpl____wide__ref_qio_channel_ptr_t chpl_macro_tmp_7357;
  coerce_tmp_chpl = (f_chpl)->home_chpl;
  chpl_macro_tmp_7355.locale = (this_chpl6).locale;
  chpl_macro_tmp_7355.addr = &(((this_chpl6).addr)->home_chpl);
  chpl_gen_comm_put(((void*)(&coerce_tmp_chpl)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_7355).locale), INT64(0), INT32(0)), (chpl_macro_tmp_7355).addr, sizeof(chpl____wide_locale), -1, COMMID(33), INT64(2714), INT64(71));
  chpl_macro_tmp_7356.locale = (this_chpl6).locale;
  chpl_macro_tmp_7356.addr = &(((this_chpl6).addr)->_channel_internal_chpl);
  call_tmp_chpl = chpl_macro_tmp_7356;
  tmp_chpl = (f_chpl)->_file_internal_chpl;
  coerce_tmp_chpl2 = tmp_chpl;
  tmp_chpl2 = (&call_tmp_chpl)->addr;
  call_tmp_chpl2 = qio_channel_create(tmp_chpl2, coerce_tmp_chpl2, hints_chpl, ((int32_t)(UINT8(false))), ((int32_t)(UINT8(true))), start_chpl, end_chpl, _formal_tmp_local_style_chpl);
  chpl_macro_tmp_7357.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7357.addr = tmp_chpl2;
  call_tmp_chpl = chpl_macro_tmp_7357;
  chpl_gen_comm_put(((void*)(&call_tmp_chpl2)), chpl_nodeFromLocaleID(&((_formal_tmp_error_chpl).locale), INT64(0), INT32(0)), (_formal_tmp_error_chpl).addr, sizeof(syserr), -1, COMMID(34), INT64(2719), INT64(71));
  return;
}

/* IO.chpl:2713 */
static void on_fn_chpl25(_ref_iostyle _formal_tmp_local_style_chpl,
                         int64_t end_chpl,
                         chpl____wide__ref_channel_F_dynamic_T this_chpl6,
                         int64_t start_chpl,
                         _ref_file f_chpl,
                         int32_t hints_chpl,
                         chpl____wide__ref_syserr _formal_tmp_error_chpl) {
  chpl____wide_locale coerce_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_qio_channel_ptr_t call_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  syserr call_tmp_chpl2;
  qio_file_ptr_t coerce_tmp_chpl2;
  qio_file_ptr_t tmp_chpl;
  _ref_qio_channel_ptr_t tmp_chpl2 = NULL;
  chpl____wide__ref__wide_locale chpl_macro_tmp_7358;
  chpl____wide__ref_qio_channel_ptr_t chpl_macro_tmp_7359;
  chpl____wide__ref_qio_channel_ptr_t chpl_macro_tmp_7360;
  coerce_tmp_chpl = (f_chpl)->home_chpl;
  chpl_macro_tmp_7358.locale = (this_chpl6).locale;
  chpl_macro_tmp_7358.addr = &(((this_chpl6).addr)->home_chpl);
  chpl_gen_comm_put(((void*)(&coerce_tmp_chpl)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_7358).locale), INT64(0), INT32(0)), (chpl_macro_tmp_7358).addr, sizeof(chpl____wide_locale), -1, COMMID(35), INT64(2714), INT64(71));
  chpl_macro_tmp_7359.locale = (this_chpl6).locale;
  chpl_macro_tmp_7359.addr = &(((this_chpl6).addr)->_channel_internal_chpl);
  call_tmp_chpl = chpl_macro_tmp_7359;
  tmp_chpl = (f_chpl)->_file_internal_chpl;
  coerce_tmp_chpl2 = tmp_chpl;
  tmp_chpl2 = (&call_tmp_chpl)->addr;
  call_tmp_chpl2 = qio_channel_create(tmp_chpl2, coerce_tmp_chpl2, hints_chpl, ((int32_t)(UINT8(true))), ((int32_t)(UINT8(false))), start_chpl, end_chpl, _formal_tmp_local_style_chpl);
  chpl_macro_tmp_7360.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7360.addr = tmp_chpl2;
  call_tmp_chpl = chpl_macro_tmp_7360;
  chpl_gen_comm_put(((void*)(&call_tmp_chpl2)), chpl_nodeFromLocaleID(&((_formal_tmp_error_chpl).locale), INT64(0), INT32(0)), (_formal_tmp_error_chpl).addr, sizeof(syserr), -1, COMMID(36), INT64(2719), INT64(71));
  return;
}

/* IO.chpl:2713 */
static void on_fn_chpl28(_ref_file f_chpl,
                         int32_t hints_chpl,
                         chpl____wide__ref_syserr _formal_tmp_error_chpl,
                         _ref_iostyle _formal_tmp_local_style_chpl,
                         int64_t end_chpl,
                         chpl____wide__ref_channel_T_dynamic_F this_chpl6,
                         int64_t start_chpl) {
  chpl____wide_locale coerce_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_qio_channel_ptr_t call_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  syserr call_tmp_chpl2;
  qio_file_ptr_t coerce_tmp_chpl2;
  qio_file_ptr_t tmp_chpl;
  _ref_qio_channel_ptr_t tmp_chpl2 = NULL;
  chpl____wide__ref__wide_locale chpl_macro_tmp_7361;
  chpl____wide__ref_qio_channel_ptr_t chpl_macro_tmp_7362;
  chpl____wide__ref_qio_channel_ptr_t chpl_macro_tmp_7363;
  coerce_tmp_chpl = (f_chpl)->home_chpl;
  chpl_macro_tmp_7361.locale = (this_chpl6).locale;
  chpl_macro_tmp_7361.addr = &(((this_chpl6).addr)->home_chpl);
  chpl_gen_comm_put(((void*)(&coerce_tmp_chpl)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_7361).locale), INT64(0), INT32(0)), (chpl_macro_tmp_7361).addr, sizeof(chpl____wide_locale), -1, COMMID(37), INT64(2714), INT64(71));
  chpl_macro_tmp_7362.locale = (this_chpl6).locale;
  chpl_macro_tmp_7362.addr = &(((this_chpl6).addr)->_channel_internal_chpl);
  call_tmp_chpl = chpl_macro_tmp_7362;
  tmp_chpl = (f_chpl)->_file_internal_chpl;
  coerce_tmp_chpl2 = tmp_chpl;
  tmp_chpl2 = (&call_tmp_chpl)->addr;
  call_tmp_chpl2 = qio_channel_create(tmp_chpl2, coerce_tmp_chpl2, hints_chpl, ((int32_t)(UINT8(false))), ((int32_t)(UINT8(true))), start_chpl, end_chpl, _formal_tmp_local_style_chpl);
  chpl_macro_tmp_7363.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7363.addr = tmp_chpl2;
  call_tmp_chpl = chpl_macro_tmp_7363;
  chpl_gen_comm_put(((void*)(&call_tmp_chpl2)), chpl_nodeFromLocaleID(&((_formal_tmp_error_chpl).locale), INT64(0), INT32(0)), (_formal_tmp_error_chpl).addr, sizeof(syserr), -1, COMMID(38), INT64(2719), INT64(71));
  return;
}

/* IO.chpl:2713 */
static void wrapon_fn_chpl25(_class_localson_fn_chpl25 c_chpl) {
  file_chpl _2_rvfDerefTmp_chpl;
  file_chpl tmp_chpl;
  chpl____wide__ref_syserr _4_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  iostyle _5_rvfDerefTmp_chpl;
  iostyle tmp_chpl2;
  chpl____wide__ref_channel_F_dynamic_F _7_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  tmp_chpl = (c_chpl)->_2_rvfDerefTmp_chpl;
  _2_rvfDerefTmp_chpl = tmp_chpl;
  _4_tmp_chpl = (c_chpl)->_4_tmp_chpl;
  tmp_chpl2 = (c_chpl)->_5_rvfDerefTmp_chpl;
  _5_rvfDerefTmp_chpl = tmp_chpl2;
  _7_tmp_chpl = (c_chpl)->_7_tmp_chpl;
  on_fn_chpl26((c_chpl)->_1_rvfDerefTmp_chpl, &_2_rvfDerefTmp_chpl, (c_chpl)->_3_rvfDerefTmp_chpl, _4_tmp_chpl, &_5_rvfDerefTmp_chpl, (c_chpl)->_6_rvfDerefTmp_chpl, _7_tmp_chpl);
  return;
}

/* IO.chpl:2713 */
static void on_fn_chpl26(int64_t start_chpl,
                         _ref_file f_chpl,
                         int32_t hints_chpl,
                         chpl____wide__ref_syserr _formal_tmp_error_chpl,
                         _ref_iostyle _formal_tmp_local_style_chpl,
                         int64_t end_chpl,
                         chpl____wide__ref_channel_F_dynamic_F this_chpl6) {
  chpl____wide_locale coerce_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_qio_channel_ptr_t call_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  syserr call_tmp_chpl2;
  qio_file_ptr_t coerce_tmp_chpl2;
  qio_file_ptr_t tmp_chpl;
  _ref_qio_channel_ptr_t tmp_chpl2 = NULL;
  chpl____wide__ref__wide_locale chpl_macro_tmp_7364;
  chpl____wide__ref_qio_channel_ptr_t chpl_macro_tmp_7365;
  chpl____wide__ref_qio_channel_ptr_t chpl_macro_tmp_7366;
  coerce_tmp_chpl = (f_chpl)->home_chpl;
  chpl_macro_tmp_7364.locale = (this_chpl6).locale;
  chpl_macro_tmp_7364.addr = &(((this_chpl6).addr)->home_chpl);
  chpl_gen_comm_put(((void*)(&coerce_tmp_chpl)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_7364).locale), INT64(0), INT32(0)), (chpl_macro_tmp_7364).addr, sizeof(chpl____wide_locale), -1, COMMID(39), INT64(2714), INT64(71));
  chpl_macro_tmp_7365.locale = (this_chpl6).locale;
  chpl_macro_tmp_7365.addr = &(((this_chpl6).addr)->_channel_internal_chpl);
  call_tmp_chpl = chpl_macro_tmp_7365;
  tmp_chpl = (f_chpl)->_file_internal_chpl;
  coerce_tmp_chpl2 = tmp_chpl;
  tmp_chpl2 = (&call_tmp_chpl)->addr;
  call_tmp_chpl2 = qio_channel_create(tmp_chpl2, coerce_tmp_chpl2, hints_chpl, ((int32_t)(UINT8(true))), ((int32_t)(UINT8(false))), start_chpl, end_chpl, _formal_tmp_local_style_chpl);
  chpl_macro_tmp_7366.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7366.addr = tmp_chpl2;
  call_tmp_chpl = chpl_macro_tmp_7366;
  chpl_gen_comm_put(((void*)(&call_tmp_chpl2)), chpl_nodeFromLocaleID(&((_formal_tmp_error_chpl).locale), INT64(0), INT32(0)), (_formal_tmp_error_chpl).addr, sizeof(syserr), -1, COMMID(40), INT64(2719), INT64(71));
  return;
}

/* IO.chpl:2713 */
static void wrapon_fn_chpl28(_class_localson_fn_chpl28 c_chpl) {
  file_chpl _1_rvfDerefTmp_chpl;
  file_chpl tmp_chpl;
  int32_t _2_rvfDerefTmp_chpl;
  chpl____wide__ref_syserr _3_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  iostyle _4_rvfDerefTmp_chpl;
  iostyle tmp_chpl2;
  int64_t _5_rvfDerefTmp_chpl;
  chpl____wide__ref_channel_T_dynamic_F _6_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t _7_rvfDerefTmp_chpl;
  tmp_chpl = (c_chpl)->_1_rvfDerefTmp_chpl;
  _1_rvfDerefTmp_chpl = tmp_chpl;
  _2_rvfDerefTmp_chpl = (c_chpl)->_2_rvfDerefTmp_chpl;
  _3_tmp_chpl = (c_chpl)->_3_tmp_chpl;
  tmp_chpl2 = (c_chpl)->_4_rvfDerefTmp_chpl;
  _4_rvfDerefTmp_chpl = tmp_chpl2;
  _5_rvfDerefTmp_chpl = (c_chpl)->_5_rvfDerefTmp_chpl;
  _6_tmp_chpl = (c_chpl)->_6_tmp_chpl;
  _7_rvfDerefTmp_chpl = (c_chpl)->_7_rvfDerefTmp_chpl;
  on_fn_chpl28(&_1_rvfDerefTmp_chpl, _2_rvfDerefTmp_chpl, _3_tmp_chpl, &_4_rvfDerefTmp_chpl, _5_rvfDerefTmp_chpl, _6_tmp_chpl, _7_rvfDerefTmp_chpl);
  return;
}

/* IO.chpl:2713 */
static void wrapon_fn_chpl27(_class_localson_fn_chpl26 c_chpl) {
  file_chpl _1_rvfDerefTmp_chpl;
  file_chpl tmp_chpl;
  iostyle _2_rvfDerefTmp_chpl;
  iostyle tmp_chpl2;
  chpl____wide__ref_syserr _3_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_channel_T_dynamic_T _7_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  tmp_chpl = (c_chpl)->_1_rvfDerefTmp_chpl;
  _1_rvfDerefTmp_chpl = tmp_chpl;
  tmp_chpl2 = (c_chpl)->_2_rvfDerefTmp_chpl;
  _2_rvfDerefTmp_chpl = tmp_chpl2;
  _3_tmp_chpl = (c_chpl)->_3_tmp_chpl;
  _7_tmp_chpl = (c_chpl)->_7_tmp_chpl;
  on_fn_chpl27(&_1_rvfDerefTmp_chpl, &_2_rvfDerefTmp_chpl, _3_tmp_chpl, (c_chpl)->_4_rvfDerefTmp_chpl, (c_chpl)->_5_rvfDerefTmp_chpl, (c_chpl)->_6_rvfDerefTmp_chpl, _7_tmp_chpl);
  return;
}

/* IO.chpl:2726 */
static void deinit_chpl4(_ref_channel_F_dynamic_F this_chpl6) {
  _ref__wide_locale call_tmp_chpl = NULL;
  chpl_localeID_t call_tmp_chpl2;
  chpl____wide_locale tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_channel_F_dynamic_F tmp_chpl2 = NULL;
  chpl_bool isdirect_chpl;
  chpl____wide__ref_channel_F_dynamic_F tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl29 _args_foron_fn_chpl = NULL;
  _ref_channel_F_dynamic_F tmp_chpl4 = NULL;
  chpl____wide__ref_channel_F_dynamic_F tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  chpl____wide__ref_channel_F_dynamic_F chpl_macro_tmp_7367;
  chpl__class_localson_fn_chpl29_object chpl_macro_tmp_7368;
  chpl____wide__ref_channel_F_dynamic_F chpl_macro_tmp_7369;
  call_tmp_chpl = &((this_chpl6)->home_chpl);
  tmp_chpl = *(call_tmp_chpl);
  call_tmp_chpl2 = (&tmp_chpl)->locale;
  tmp_chpl2 = this_chpl6;
  isdirect_chpl = chpl_doDirectExecuteOn(&call_tmp_chpl2);
  if (isdirect_chpl) {
    chpl_macro_tmp_7367.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7367.addr = tmp_chpl2;
    tmp_chpl3 = chpl_macro_tmp_7367;
    on_fn_chpl31(tmp_chpl3);
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn_chpl29)(&chpl_macro_tmp_7368));
    (_args_foron_fn_chpl)->_0_rvfDerefTmp_chpl = call_tmp_chpl2;
    tmp_chpl4 = this_chpl6;
    chpl_macro_tmp_7369.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7369.addr = tmp_chpl4;
    tmp_chpl5 = chpl_macro_tmp_7369;
    (_args_foron_fn_chpl)->_1_tmp_chpl = tmp_chpl5;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    /*** wrapon_fn_chpl31 ***/ chpl_executeOn(&call_tmp_chpl2, INT32(287), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), sizeof(chpl__class_localson_fn_chpl29_object), INT64(2727), INT32(71));
  }
  return;
}

/* IO.chpl:2726 */
static void deinit_chpl5(_ref_channel_T_dynamic_F this_chpl6) {
  _ref__wide_locale call_tmp_chpl = NULL;
  chpl_localeID_t call_tmp_chpl2;
  chpl____wide_locale tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_channel_T_dynamic_F tmp_chpl2 = NULL;
  chpl_bool isdirect_chpl;
  chpl____wide__ref_channel_T_dynamic_F tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl32 _args_foron_fn_chpl = NULL;
  _ref_channel_T_dynamic_F tmp_chpl4 = NULL;
  chpl____wide__ref_channel_T_dynamic_F tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  chpl____wide__ref_channel_T_dynamic_F chpl_macro_tmp_7370;
  chpl__class_localson_fn_chpl32_object chpl_macro_tmp_7371;
  chpl____wide__ref_channel_T_dynamic_F chpl_macro_tmp_7372;
  call_tmp_chpl = &((this_chpl6)->home_chpl);
  tmp_chpl = *(call_tmp_chpl);
  call_tmp_chpl2 = (&tmp_chpl)->locale;
  tmp_chpl2 = this_chpl6;
  isdirect_chpl = chpl_doDirectExecuteOn(&call_tmp_chpl2);
  if (isdirect_chpl) {
    chpl_macro_tmp_7370.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7370.addr = tmp_chpl2;
    tmp_chpl3 = chpl_macro_tmp_7370;
    on_fn_chpl32(tmp_chpl3);
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn_chpl32)(&chpl_macro_tmp_7371));
    (_args_foron_fn_chpl)->_0_rvfDerefTmp_chpl = call_tmp_chpl2;
    tmp_chpl4 = this_chpl6;
    chpl_macro_tmp_7372.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7372.addr = tmp_chpl4;
    tmp_chpl5 = chpl_macro_tmp_7372;
    (_args_foron_fn_chpl)->_1_tmp_chpl = tmp_chpl5;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    /*** wrapon_fn_chpl29 ***/ chpl_executeOn(&call_tmp_chpl2, INT32(285), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), sizeof(chpl__class_localson_fn_chpl32_object), INT64(2727), INT32(71));
  }
  return;
}

/* IO.chpl:2726 */
static void deinit_chpl2(_ref_channel_F_dynamic_T this_chpl6) {
  _ref__wide_locale call_tmp_chpl = NULL;
  chpl_localeID_t call_tmp_chpl2;
  chpl____wide_locale tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_channel_F_dynamic_T tmp_chpl2 = NULL;
  chpl_bool isdirect_chpl;
  chpl____wide__ref_channel_F_dynamic_T tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl31 _args_foron_fn_chpl = NULL;
  _ref_channel_F_dynamic_T tmp_chpl4 = NULL;
  chpl____wide__ref_channel_F_dynamic_T tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  chpl____wide__ref_channel_F_dynamic_T chpl_macro_tmp_7373;
  chpl__class_localson_fn_chpl31_object chpl_macro_tmp_7374;
  chpl____wide__ref_channel_F_dynamic_T chpl_macro_tmp_7375;
  call_tmp_chpl = &((this_chpl6)->home_chpl);
  tmp_chpl = *(call_tmp_chpl);
  call_tmp_chpl2 = (&tmp_chpl)->locale;
  tmp_chpl2 = this_chpl6;
  isdirect_chpl = chpl_doDirectExecuteOn(&call_tmp_chpl2);
  if (isdirect_chpl) {
    chpl_macro_tmp_7373.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7373.addr = tmp_chpl2;
    tmp_chpl3 = chpl_macro_tmp_7373;
    on_fn_chpl29(tmp_chpl3);
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn_chpl31)(&chpl_macro_tmp_7374));
    (_args_foron_fn_chpl)->_0_rvfDerefTmp_chpl = call_tmp_chpl2;
    tmp_chpl4 = this_chpl6;
    chpl_macro_tmp_7375.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7375.addr = tmp_chpl4;
    tmp_chpl5 = chpl_macro_tmp_7375;
    (_args_foron_fn_chpl)->_1_tmp_chpl = tmp_chpl5;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    /*** wrapon_fn_chpl30 ***/ chpl_executeOn(&call_tmp_chpl2, INT32(286), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), sizeof(chpl__class_localson_fn_chpl31_object), INT64(2727), INT32(71));
  }
  return;
}

/* IO.chpl:2726 */
static void deinit_chpl3(_ref_channel_T_dynamic_T this_chpl6) {
  _ref__wide_locale call_tmp_chpl = NULL;
  chpl_localeID_t call_tmp_chpl2;
  chpl____wide_locale tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_channel_T_dynamic_T tmp_chpl2 = NULL;
  chpl_bool isdirect_chpl;
  chpl____wide__ref_channel_T_dynamic_T tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl30 _args_foron_fn_chpl = NULL;
  _ref_channel_T_dynamic_T tmp_chpl4 = NULL;
  chpl____wide__ref_channel_T_dynamic_T tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  chpl____wide__ref_channel_T_dynamic_T chpl_macro_tmp_7376;
  chpl__class_localson_fn_chpl30_object chpl_macro_tmp_7377;
  chpl____wide__ref_channel_T_dynamic_T chpl_macro_tmp_7378;
  call_tmp_chpl = &((this_chpl6)->home_chpl);
  tmp_chpl = *(call_tmp_chpl);
  call_tmp_chpl2 = (&tmp_chpl)->locale;
  tmp_chpl2 = this_chpl6;
  isdirect_chpl = chpl_doDirectExecuteOn(&call_tmp_chpl2);
  if (isdirect_chpl) {
    chpl_macro_tmp_7376.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7376.addr = tmp_chpl2;
    tmp_chpl3 = chpl_macro_tmp_7376;
    on_fn_chpl30(tmp_chpl3);
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn_chpl30)(&chpl_macro_tmp_7377));
    (_args_foron_fn_chpl)->_0_rvfDerefTmp_chpl = call_tmp_chpl2;
    tmp_chpl4 = this_chpl6;
    chpl_macro_tmp_7378.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7378.addr = tmp_chpl4;
    tmp_chpl5 = chpl_macro_tmp_7378;
    (_args_foron_fn_chpl)->_1_tmp_chpl = tmp_chpl5;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    /*** wrapon_fn_chpl32 ***/ chpl_executeOn(&call_tmp_chpl2, INT32(288), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), sizeof(chpl__class_localson_fn_chpl30_object), INT64(2727), INT32(71));
  }
  return;
}

/* IO.chpl:2727 */
static void on_fn_chpl29(chpl____wide__ref_channel_F_dynamic_T this_chpl6) {
  qio_channel_ptr_t local_QIO_CHANNEL_PTR_NULL_chpl;
  qio_channel_ptr_t coerce_tmp_chpl;
  qio_channel_ptr_t tmp_chpl;
  chpl____wide__ref_qio_channel_ptr_t chpl_macro_tmp_7379;
  chpl____wide__ref_qio_channel_ptr_t chpl_macro_tmp_7380;
  local_QIO_CHANNEL_PTR_NULL_chpl = QIO_CHANNEL_PTR_NULL;
  chpl_macro_tmp_7379.locale = (this_chpl6).locale;
  chpl_macro_tmp_7379.addr = &(((this_chpl6).addr)->_channel_internal_chpl);
  chpl_gen_comm_get(((void*)(&tmp_chpl)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_7379).locale), INT64(0), INT32(0)), (chpl_macro_tmp_7379).addr, sizeof(qio_channel_ptr_t), -1, COMMID(41), INT64(2728), INT64(71));
  coerce_tmp_chpl = tmp_chpl;
  qio_channel_release(coerce_tmp_chpl);
  chpl_macro_tmp_7380.locale = (this_chpl6).locale;
  chpl_macro_tmp_7380.addr = &(((this_chpl6).addr)->_channel_internal_chpl);
  chpl_gen_comm_put(((void*)(&local_QIO_CHANNEL_PTR_NULL_chpl)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_7380).locale), INT64(0), INT32(0)), (chpl_macro_tmp_7380).addr, sizeof(qio_channel_ptr_t), -1, COMMID(42), INT64(2729), INT64(71));
  return;
}

/* IO.chpl:2727 */
static void on_fn_chpl30(chpl____wide__ref_channel_T_dynamic_T this_chpl6) {
  qio_channel_ptr_t local_QIO_CHANNEL_PTR_NULL_chpl;
  qio_channel_ptr_t coerce_tmp_chpl;
  qio_channel_ptr_t tmp_chpl;
  chpl____wide__ref_qio_channel_ptr_t chpl_macro_tmp_7381;
  chpl____wide__ref_qio_channel_ptr_t chpl_macro_tmp_7382;
  local_QIO_CHANNEL_PTR_NULL_chpl = QIO_CHANNEL_PTR_NULL;
  chpl_macro_tmp_7381.locale = (this_chpl6).locale;
  chpl_macro_tmp_7381.addr = &(((this_chpl6).addr)->_channel_internal_chpl);
  chpl_gen_comm_get(((void*)(&tmp_chpl)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_7381).locale), INT64(0), INT32(0)), (chpl_macro_tmp_7381).addr, sizeof(qio_channel_ptr_t), -1, COMMID(43), INT64(2728), INT64(71));
  coerce_tmp_chpl = tmp_chpl;
  qio_channel_release(coerce_tmp_chpl);
  chpl_macro_tmp_7382.locale = (this_chpl6).locale;
  chpl_macro_tmp_7382.addr = &(((this_chpl6).addr)->_channel_internal_chpl);
  chpl_gen_comm_put(((void*)(&local_QIO_CHANNEL_PTR_NULL_chpl)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_7382).locale), INT64(0), INT32(0)), (chpl_macro_tmp_7382).addr, sizeof(qio_channel_ptr_t), -1, COMMID(44), INT64(2729), INT64(71));
  return;
}

/* IO.chpl:2727 */
static void on_fn_chpl32(chpl____wide__ref_channel_T_dynamic_F this_chpl6) {
  qio_channel_ptr_t local_QIO_CHANNEL_PTR_NULL_chpl;
  qio_channel_ptr_t coerce_tmp_chpl;
  qio_channel_ptr_t tmp_chpl;
  chpl____wide__ref_qio_channel_ptr_t chpl_macro_tmp_7383;
  chpl____wide__ref_qio_channel_ptr_t chpl_macro_tmp_7384;
  local_QIO_CHANNEL_PTR_NULL_chpl = QIO_CHANNEL_PTR_NULL;
  chpl_macro_tmp_7383.locale = (this_chpl6).locale;
  chpl_macro_tmp_7383.addr = &(((this_chpl6).addr)->_channel_internal_chpl);
  chpl_gen_comm_get(((void*)(&tmp_chpl)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_7383).locale), INT64(0), INT32(0)), (chpl_macro_tmp_7383).addr, sizeof(qio_channel_ptr_t), -1, COMMID(45), INT64(2728), INT64(71));
  coerce_tmp_chpl = tmp_chpl;
  qio_channel_release(coerce_tmp_chpl);
  chpl_macro_tmp_7384.locale = (this_chpl6).locale;
  chpl_macro_tmp_7384.addr = &(((this_chpl6).addr)->_channel_internal_chpl);
  chpl_gen_comm_put(((void*)(&local_QIO_CHANNEL_PTR_NULL_chpl)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_7384).locale), INT64(0), INT32(0)), (chpl_macro_tmp_7384).addr, sizeof(qio_channel_ptr_t), -1, COMMID(46), INT64(2729), INT64(71));
  return;
}

/* IO.chpl:2727 */
static void on_fn_chpl31(chpl____wide__ref_channel_F_dynamic_F this_chpl6) {
  qio_channel_ptr_t local_QIO_CHANNEL_PTR_NULL_chpl;
  qio_channel_ptr_t coerce_tmp_chpl;
  qio_channel_ptr_t tmp_chpl;
  chpl____wide__ref_qio_channel_ptr_t chpl_macro_tmp_7385;
  chpl____wide__ref_qio_channel_ptr_t chpl_macro_tmp_7386;
  local_QIO_CHANNEL_PTR_NULL_chpl = QIO_CHANNEL_PTR_NULL;
  chpl_macro_tmp_7385.locale = (this_chpl6).locale;
  chpl_macro_tmp_7385.addr = &(((this_chpl6).addr)->_channel_internal_chpl);
  chpl_gen_comm_get(((void*)(&tmp_chpl)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_7385).locale), INT64(0), INT32(0)), (chpl_macro_tmp_7385).addr, sizeof(qio_channel_ptr_t), -1, COMMID(47), INT64(2728), INT64(71));
  coerce_tmp_chpl = tmp_chpl;
  qio_channel_release(coerce_tmp_chpl);
  chpl_macro_tmp_7386.locale = (this_chpl6).locale;
  chpl_macro_tmp_7386.addr = &(((this_chpl6).addr)->_channel_internal_chpl);
  chpl_gen_comm_put(((void*)(&local_QIO_CHANNEL_PTR_NULL_chpl)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_7386).locale), INT64(0), INT32(0)), (chpl_macro_tmp_7386).addr, sizeof(qio_channel_ptr_t), -1, COMMID(48), INT64(2729), INT64(71));
  return;
}

/* IO.chpl:2727 */
static void wrapon_fn_chpl31(_class_localson_fn_chpl29 c_chpl) {
  chpl____wide__ref_channel_F_dynamic_F _1_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _1_tmp_chpl = (c_chpl)->_1_tmp_chpl;
  on_fn_chpl31(_1_tmp_chpl);
  return;
}

/* IO.chpl:2727 */
static void wrapon_fn_chpl29(_class_localson_fn_chpl32 c_chpl) {
  chpl____wide__ref_channel_T_dynamic_F _1_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _1_tmp_chpl = (c_chpl)->_1_tmp_chpl;
  on_fn_chpl32(_1_tmp_chpl);
  return;
}

/* IO.chpl:2727 */
static void wrapon_fn_chpl32(_class_localson_fn_chpl30 c_chpl) {
  chpl____wide__ref_channel_T_dynamic_T _1_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _1_tmp_chpl = (c_chpl)->_1_tmp_chpl;
  on_fn_chpl30(_1_tmp_chpl);
  return;
}

/* IO.chpl:2727 */
static void wrapon_fn_chpl30(_class_localson_fn_chpl31 c_chpl) {
  chpl____wide__ref_channel_F_dynamic_T _1_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _1_tmp_chpl = (c_chpl)->_1_tmp_chpl;
  on_fn_chpl29(_1_tmp_chpl);
  return;
}

/* IO.chpl:2770 */
static void _construct_ioNewline_chpl(chpl_bool skipWhitespaceOnly_chpl,
                                      _ref_ioNewline meme_chpl,
                                      _ref_ioNewline _retArg_chpl) {
  ioNewline_chpl this_chpl6;
  this_chpl6 = *(meme_chpl);
  (&this_chpl6)->skipWhitespaceOnly_chpl = skipWhitespaceOnly_chpl;
  *(_retArg_chpl) = this_chpl6;
  return;
}

/* IO.chpl:2800 */
static void chpl___ASSIGN_18(_ref_ioLiteral _arg1_chpl,
                             _ref_ioLiteral _arg2_chpl) {
  _ref_string call_tmp_chpl = NULL;
  _ref_string i_rhs_chpl = NULL;
  chpl____wide__ref_string tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_7387;
  chpl____wide__ref_string chpl_macro_tmp_7388;
  call_tmp_chpl = &((_arg1_chpl)->val_chpl);
  i_rhs_chpl = &((_arg2_chpl)->val_chpl);
  chpl_macro_tmp_7387.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7387.addr = call_tmp_chpl;
  tmp_chpl = chpl_macro_tmp_7387;
  chpl_macro_tmp_7388.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7388.addr = i_rhs_chpl;
  tmp_chpl2 = chpl_macro_tmp_7388;
  chpl___ASSIGN_13(tmp_chpl, tmp_chpl2);
  (_arg1_chpl)->ignoreWhiteSpace_chpl = (_arg2_chpl)->ignoreWhiteSpace_chpl;
  return;
}

/* IO.chpl:2800 */
static void _construct_ioLiteral_chpl(_ref_string val_chpl,
                                      chpl_bool ignoreWhiteSpace_chpl,
                                      _ref_ioLiteral meme_chpl,
                                      _ref_ioLiteral _retArg_chpl) {
  ioLiteral_chpl this_chpl6;
  this_chpl6 = *(meme_chpl);
  (&this_chpl6)->val_chpl = *(val_chpl);
  (&this_chpl6)->ignoreWhiteSpace_chpl = ignoreWhiteSpace_chpl;
  *(_retArg_chpl) = this_chpl6;
  return;
}

/* IO.chpl:2844 */
static void _ch_ioerror_chpl(_ref_channel_F_dynamic_F this_chpl6,
                             syserr error_chpl,
                             _ref_string msg_chpl) {
  string local__str_literal_2408_chpl;
  string path_chpl;
  string type_tmp_chpl;
  string this_chpl7;
  c_ptr_uint8_t call_tmp_chpl = NULL;
  int32_t default_arglocale_id_chpl;
  string ret_tmp_chpl;
  _ref_string ret_to_arg_ref_tmp__chpl = NULL;
  _ref_string _ref_tmp__chpl = NULL;
  chpl____wide__ref_string tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t offset_chpl2;
  _ref__wide_locale call_tmp_chpl2 = NULL;
  chpl_localeID_t call_tmp_chpl3;
  chpl____wide_locale tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string tmp_chpl4 = NULL;
  _ref_int64_t tmp_chpl5 = NULL;
  channel_F_dynamic_F_chpl rvfDerefTmp_chpl;
  chpl_bool isdirect_chpl;
  chpl____wide__ref_string tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_int64_t tmp_chpl7 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl33 _args_foron_fn_chpl = NULL;
  _ref_string tmp_chpl8 = NULL;
  chpl____wide__ref_string tmp_chpl9 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_int64_t tmp_chpl10 = NULL;
  chpl____wide__ref_int64_t tmp_chpl11 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  _ref_string _ref_tmp__chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl12 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_7389;
  chpl____wide__ref_string chpl_macro_tmp_7390;
  chpl____wide__ref_string chpl_macro_tmp_7391;
  chpl____wide__ref_int64_t chpl_macro_tmp_7392;
  chpl__class_localson_fn_chpl33_object chpl_macro_tmp_7393;
  chpl____wide__ref_string chpl_macro_tmp_7394;
  chpl____wide__ref_int64_t chpl_macro_tmp_7395;
  chpl____wide__ref_string chpl_macro_tmp_7396;
  local__str_literal_2408_chpl /* "unknown" */ = _str_literal_2408 /* "unknown" */;
  (&this_chpl7)->len = INT64(0);
  (&this_chpl7)->_size = INT64(0);
  (&this_chpl7)->buff = nil;
  (&this_chpl7)->owned = UINT8(false);
  (&this_chpl7)->locale_id = INT32(0);
  (&this_chpl7)->len = INT64(0);
  (&this_chpl7)->_size = INT64(0);
  call_tmp_chpl = ((c_ptr_uint8_t)(nil));
  (&this_chpl7)->buff = call_tmp_chpl;
  (&this_chpl7)->owned = UINT8(true);
  default_arglocale_id_chpl = chpl_nodeID;
  (&this_chpl7)->locale_id = default_arglocale_id_chpl;
  ret_to_arg_ref_tmp__chpl = &ret_tmp_chpl;
  _construct_string(INT64(0), INT64(0), call_tmp_chpl, UINT8(true), default_arglocale_id_chpl, &this_chpl7, ret_to_arg_ref_tmp__chpl);
  type_tmp_chpl = ret_tmp_chpl;
  _ref_tmp__chpl = &type_tmp_chpl;
  chpl_macro_tmp_7389.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7389.addr = _ref_tmp__chpl;
  tmp_chpl = chpl_macro_tmp_7389;
  chpl_macro_tmp_7390.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7390.addr = &local__str_literal_2408_chpl /* "unknown" */;
  tmp_chpl2 = chpl_macro_tmp_7390;
  chpl___ASSIGN_13(tmp_chpl, tmp_chpl2);
  path_chpl = type_tmp_chpl;
  offset_chpl2 = INT64(-1);
  call_tmp_chpl2 = &((this_chpl6)->home_chpl);
  tmp_chpl3 = *(call_tmp_chpl2);
  call_tmp_chpl3 = (&tmp_chpl3)->locale;
  tmp_chpl4 = &path_chpl;
  tmp_chpl5 = &offset_chpl2;
  rvfDerefTmp_chpl = *(this_chpl6);
  isdirect_chpl = chpl_doDirectExecuteOn(&call_tmp_chpl3);
  if (isdirect_chpl) {
    chpl_macro_tmp_7391.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7391.addr = tmp_chpl4;
    tmp_chpl6 = chpl_macro_tmp_7391;
    chpl_macro_tmp_7392.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7392.addr = tmp_chpl5;
    tmp_chpl7 = chpl_macro_tmp_7392;
    on_fn_chpl33(&rvfDerefTmp_chpl, tmp_chpl6, tmp_chpl7);
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn_chpl33)(&chpl_macro_tmp_7393));
    (_args_foron_fn_chpl)->_0_rvfDerefTmp_chpl = call_tmp_chpl3;
    (_args_foron_fn_chpl)->_1_rvfDerefTmp_chpl = rvfDerefTmp_chpl;
    tmp_chpl8 = &path_chpl;
    chpl_macro_tmp_7394.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7394.addr = tmp_chpl8;
    tmp_chpl9 = chpl_macro_tmp_7394;
    (_args_foron_fn_chpl)->_2_tmp_chpl = tmp_chpl9;
    tmp_chpl10 = &offset_chpl2;
    chpl_macro_tmp_7395.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7395.addr = tmp_chpl10;
    tmp_chpl11 = chpl_macro_tmp_7395;
    (_args_foron_fn_chpl)->_3_tmp_chpl = tmp_chpl11;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    /*** wrapon_fn_chpl34 ***/ chpl_executeOn(&call_tmp_chpl3, INT32(290), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), sizeof(chpl__class_localson_fn_chpl33_object), INT64(2847), INT32(71));
  }
  ioerror_chpl3(error_chpl, msg_chpl, &path_chpl, offset_chpl2);
  _ref_tmp__chpl2 = &path_chpl;
  chpl_macro_tmp_7396.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7396.addr = _ref_tmp__chpl2;
  tmp_chpl12 = chpl_macro_tmp_7396;
  deinit44(tmp_chpl12);
  return;
}

/* IO.chpl:2844 */
static void _ch_ioerror_chpl3(chpl____wide__ref_channel_T_dynamic_F this_chpl6,
                              syserr error_chpl,
                              _ref_string msg_chpl) {
  string local__str_literal_2408_chpl;
  string path_chpl;
  string type_tmp_chpl;
  string this_chpl7;
  c_ptr_uint8_t call_tmp_chpl = NULL;
  int32_t default_arglocale_id_chpl;
  string ret_tmp_chpl;
  _ref_string ret_to_arg_ref_tmp__chpl = NULL;
  _ref_string _ref_tmp__chpl = NULL;
  chpl____wide__ref_string tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t offset_chpl2;
  chpl____wide__ref__wide_locale call_tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp_chpl3;
  chpl____wide_locale tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_channel_T_dynamic_F tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string tmp_chpl5 = NULL;
  _ref_int64_t tmp_chpl6 = NULL;
  chpl_bool isdirect_chpl;
  chpl____wide__ref_string tmp_chpl7 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_int64_t tmp_chpl8 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl35 _args_foron_fn_chpl = NULL;
  chpl____wide__ref_channel_T_dynamic_F tmp_chpl9 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string tmp_chpl10 = NULL;
  chpl____wide__ref_string tmp_chpl11 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_int64_t tmp_chpl12 = NULL;
  chpl____wide__ref_int64_t tmp_chpl13 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  _ref_string _ref_tmp__chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl14 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_7397;
  chpl____wide__ref_string chpl_macro_tmp_7398;
  chpl____wide__ref__wide_locale chpl_macro_tmp_7399;
  chpl____wide__ref_string chpl_macro_tmp_7400;
  chpl____wide__ref_int64_t chpl_macro_tmp_7401;
  chpl__class_localson_fn_chpl35_object chpl_macro_tmp_7402;
  chpl____wide__ref_string chpl_macro_tmp_7403;
  chpl____wide__ref_int64_t chpl_macro_tmp_7404;
  chpl____wide__ref_string chpl_macro_tmp_7405;
  local__str_literal_2408_chpl /* "unknown" */ = _str_literal_2408 /* "unknown" */;
  (&this_chpl7)->len = INT64(0);
  (&this_chpl7)->_size = INT64(0);
  (&this_chpl7)->buff = nil;
  (&this_chpl7)->owned = UINT8(false);
  (&this_chpl7)->locale_id = INT32(0);
  (&this_chpl7)->len = INT64(0);
  (&this_chpl7)->_size = INT64(0);
  call_tmp_chpl = ((c_ptr_uint8_t)(nil));
  (&this_chpl7)->buff = call_tmp_chpl;
  (&this_chpl7)->owned = UINT8(true);
  default_arglocale_id_chpl = chpl_nodeID;
  (&this_chpl7)->locale_id = default_arglocale_id_chpl;
  ret_to_arg_ref_tmp__chpl = &ret_tmp_chpl;
  _construct_string(INT64(0), INT64(0), call_tmp_chpl, UINT8(true), default_arglocale_id_chpl, &this_chpl7, ret_to_arg_ref_tmp__chpl);
  type_tmp_chpl = ret_tmp_chpl;
  _ref_tmp__chpl = &type_tmp_chpl;
  chpl_macro_tmp_7397.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7397.addr = _ref_tmp__chpl;
  tmp_chpl = chpl_macro_tmp_7397;
  chpl_macro_tmp_7398.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7398.addr = &local__str_literal_2408_chpl /* "unknown" */;
  tmp_chpl2 = chpl_macro_tmp_7398;
  chpl___ASSIGN_13(tmp_chpl, tmp_chpl2);
  path_chpl = type_tmp_chpl;
  offset_chpl2 = INT64(-1);
  chpl_macro_tmp_7399.locale = (this_chpl6).locale;
  chpl_macro_tmp_7399.addr = &(((this_chpl6).addr)->home_chpl);
  call_tmp_chpl2 = chpl_macro_tmp_7399;
  chpl_gen_comm_get(((void*)(&tmp_chpl3)), chpl_nodeFromLocaleID(&((call_tmp_chpl2).locale), INT64(0), INT32(0)), (call_tmp_chpl2).addr, sizeof(chpl____wide_locale), -1, COMMID(49), INT64(2847), INT64(71));
  call_tmp_chpl3 = (&tmp_chpl3)->locale;
  tmp_chpl4 = this_chpl6;
  tmp_chpl5 = &path_chpl;
  tmp_chpl6 = &offset_chpl2;
  isdirect_chpl = chpl_doDirectExecuteOn(&call_tmp_chpl3);
  if (isdirect_chpl) {
    chpl_macro_tmp_7400.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7400.addr = tmp_chpl5;
    tmp_chpl7 = chpl_macro_tmp_7400;
    chpl_macro_tmp_7401.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7401.addr = tmp_chpl6;
    tmp_chpl8 = chpl_macro_tmp_7401;
    on_fn_chpl35(tmp_chpl4, tmp_chpl7, tmp_chpl8);
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn_chpl35)(&chpl_macro_tmp_7402));
    (_args_foron_fn_chpl)->_0_rvfDerefTmp_chpl = call_tmp_chpl3;
    tmp_chpl9 = this_chpl6;
    (_args_foron_fn_chpl)->_1_tmp_chpl = tmp_chpl9;
    tmp_chpl10 = &path_chpl;
    chpl_macro_tmp_7403.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7403.addr = tmp_chpl10;
    tmp_chpl11 = chpl_macro_tmp_7403;
    (_args_foron_fn_chpl)->_2_tmp_chpl = tmp_chpl11;
    tmp_chpl12 = &offset_chpl2;
    chpl_macro_tmp_7404.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7404.addr = tmp_chpl12;
    tmp_chpl13 = chpl_macro_tmp_7404;
    (_args_foron_fn_chpl)->_3_tmp_chpl = tmp_chpl13;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    /*** wrapon_fn_chpl35 ***/ chpl_executeOn(&call_tmp_chpl3, INT32(291), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), sizeof(chpl__class_localson_fn_chpl35_object), INT64(2847), INT32(71));
  }
  ioerror_chpl3(error_chpl, msg_chpl, &path_chpl, offset_chpl2);
  _ref_tmp__chpl2 = &path_chpl;
  chpl_macro_tmp_7405.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7405.addr = _ref_tmp__chpl2;
  tmp_chpl14 = chpl_macro_tmp_7405;
  deinit44(tmp_chpl14);
  return;
}

/* IO.chpl:2844 */
static void _ch_ioerror_chpl2(_ref_channel_T_dynamic_T this_chpl6,
                              syserr error_chpl,
                              _ref_string msg_chpl) {
  string local__str_literal_2408_chpl;
  string path_chpl;
  string type_tmp_chpl;
  string this_chpl7;
  c_ptr_uint8_t call_tmp_chpl = NULL;
  int32_t default_arglocale_id_chpl;
  string ret_tmp_chpl;
  _ref_string ret_to_arg_ref_tmp__chpl = NULL;
  _ref_string _ref_tmp__chpl = NULL;
  chpl____wide__ref_string tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t offset_chpl2;
  _ref__wide_locale call_tmp_chpl2 = NULL;
  chpl_localeID_t call_tmp_chpl3;
  chpl____wide_locale tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string tmp_chpl4 = NULL;
  _ref_int64_t tmp_chpl5 = NULL;
  channel_T_dynamic_T_chpl rvfDerefTmp_chpl;
  chpl_bool isdirect_chpl;
  chpl____wide__ref_string tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_int64_t tmp_chpl7 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl34 _args_foron_fn_chpl = NULL;
  _ref_string tmp_chpl8 = NULL;
  chpl____wide__ref_string tmp_chpl9 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_int64_t tmp_chpl10 = NULL;
  chpl____wide__ref_int64_t tmp_chpl11 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  _ref_string _ref_tmp__chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl12 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_7406;
  chpl____wide__ref_string chpl_macro_tmp_7407;
  chpl____wide__ref_string chpl_macro_tmp_7408;
  chpl____wide__ref_int64_t chpl_macro_tmp_7409;
  chpl__class_localson_fn_chpl34_object chpl_macro_tmp_7410;
  chpl____wide__ref_string chpl_macro_tmp_7411;
  chpl____wide__ref_int64_t chpl_macro_tmp_7412;
  chpl____wide__ref_string chpl_macro_tmp_7413;
  local__str_literal_2408_chpl /* "unknown" */ = _str_literal_2408 /* "unknown" */;
  (&this_chpl7)->len = INT64(0);
  (&this_chpl7)->_size = INT64(0);
  (&this_chpl7)->buff = nil;
  (&this_chpl7)->owned = UINT8(false);
  (&this_chpl7)->locale_id = INT32(0);
  (&this_chpl7)->len = INT64(0);
  (&this_chpl7)->_size = INT64(0);
  call_tmp_chpl = ((c_ptr_uint8_t)(nil));
  (&this_chpl7)->buff = call_tmp_chpl;
  (&this_chpl7)->owned = UINT8(true);
  default_arglocale_id_chpl = chpl_nodeID;
  (&this_chpl7)->locale_id = default_arglocale_id_chpl;
  ret_to_arg_ref_tmp__chpl = &ret_tmp_chpl;
  _construct_string(INT64(0), INT64(0), call_tmp_chpl, UINT8(true), default_arglocale_id_chpl, &this_chpl7, ret_to_arg_ref_tmp__chpl);
  type_tmp_chpl = ret_tmp_chpl;
  _ref_tmp__chpl = &type_tmp_chpl;
  chpl_macro_tmp_7406.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7406.addr = _ref_tmp__chpl;
  tmp_chpl = chpl_macro_tmp_7406;
  chpl_macro_tmp_7407.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7407.addr = &local__str_literal_2408_chpl /* "unknown" */;
  tmp_chpl2 = chpl_macro_tmp_7407;
  chpl___ASSIGN_13(tmp_chpl, tmp_chpl2);
  path_chpl = type_tmp_chpl;
  offset_chpl2 = INT64(-1);
  call_tmp_chpl2 = &((this_chpl6)->home_chpl);
  tmp_chpl3 = *(call_tmp_chpl2);
  call_tmp_chpl3 = (&tmp_chpl3)->locale;
  tmp_chpl4 = &path_chpl;
  tmp_chpl5 = &offset_chpl2;
  rvfDerefTmp_chpl = *(this_chpl6);
  isdirect_chpl = chpl_doDirectExecuteOn(&call_tmp_chpl3);
  if (isdirect_chpl) {
    chpl_macro_tmp_7408.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7408.addr = tmp_chpl4;
    tmp_chpl6 = chpl_macro_tmp_7408;
    chpl_macro_tmp_7409.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7409.addr = tmp_chpl5;
    tmp_chpl7 = chpl_macro_tmp_7409;
    on_fn_chpl34(&rvfDerefTmp_chpl, tmp_chpl6, tmp_chpl7);
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn_chpl34)(&chpl_macro_tmp_7410));
    (_args_foron_fn_chpl)->_0_rvfDerefTmp_chpl = call_tmp_chpl3;
    (_args_foron_fn_chpl)->_1_rvfDerefTmp_chpl = rvfDerefTmp_chpl;
    tmp_chpl8 = &path_chpl;
    chpl_macro_tmp_7411.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7411.addr = tmp_chpl8;
    tmp_chpl9 = chpl_macro_tmp_7411;
    (_args_foron_fn_chpl)->_2_tmp_chpl = tmp_chpl9;
    tmp_chpl10 = &offset_chpl2;
    chpl_macro_tmp_7412.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7412.addr = tmp_chpl10;
    tmp_chpl11 = chpl_macro_tmp_7412;
    (_args_foron_fn_chpl)->_3_tmp_chpl = tmp_chpl11;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    /*** wrapon_fn_chpl33 ***/ chpl_executeOn(&call_tmp_chpl3, INT32(289), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), sizeof(chpl__class_localson_fn_chpl34_object), INT64(2847), INT32(71));
  }
  ioerror_chpl3(error_chpl, msg_chpl, &path_chpl, offset_chpl2);
  _ref_tmp__chpl2 = &path_chpl;
  chpl_macro_tmp_7413.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7413.addr = _ref_tmp__chpl2;
  tmp_chpl12 = chpl_macro_tmp_7413;
  deinit44(tmp_chpl12);
  return;
}

/* IO.chpl:2847 */
static void wrapon_fn_chpl34(_class_localson_fn_chpl33 c_chpl) {
  channel_F_dynamic_F_chpl _1_rvfDerefTmp_chpl;
  channel_F_dynamic_F_chpl tmp_chpl;
  chpl____wide__ref_string _2_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_int64_t _3_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  tmp_chpl = (c_chpl)->_1_rvfDerefTmp_chpl;
  _1_rvfDerefTmp_chpl = tmp_chpl;
  _2_tmp_chpl = (c_chpl)->_2_tmp_chpl;
  _3_tmp_chpl = (c_chpl)->_3_tmp_chpl;
  on_fn_chpl33(&_1_rvfDerefTmp_chpl, _2_tmp_chpl, _3_tmp_chpl);
  return;
}

/* IO.chpl:2847 */
static void wrapon_fn_chpl33(_class_localson_fn_chpl34 c_chpl) {
  channel_T_dynamic_T_chpl _1_rvfDerefTmp_chpl;
  channel_T_dynamic_T_chpl tmp_chpl;
  chpl____wide__ref_string _2_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_int64_t _3_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  tmp_chpl = (c_chpl)->_1_rvfDerefTmp_chpl;
  _1_rvfDerefTmp_chpl = tmp_chpl;
  _2_tmp_chpl = (c_chpl)->_2_tmp_chpl;
  _3_tmp_chpl = (c_chpl)->_3_tmp_chpl;
  on_fn_chpl34(&_1_rvfDerefTmp_chpl, _2_tmp_chpl, _3_tmp_chpl);
  return;
}

/* IO.chpl:2847 */
static void wrapon_fn_chpl35(_class_localson_fn_chpl35 c_chpl) {
  chpl____wide__ref_channel_T_dynamic_F _1_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string _2_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_int64_t _3_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _1_tmp_chpl = (c_chpl)->_1_tmp_chpl;
  _2_tmp_chpl = (c_chpl)->_2_tmp_chpl;
  _3_tmp_chpl = (c_chpl)->_3_tmp_chpl;
  on_fn_chpl35(_1_tmp_chpl, _2_tmp_chpl, _3_tmp_chpl);
  return;
}

/* IO.chpl:2847 */
static void on_fn_chpl33(_ref_channel_F_dynamic_F this_chpl6,
                         chpl____wide__ref_string path_chpl,
                         chpl____wide__ref_int64_t offset_chpl2) {
  c_string tmp_path_chpl;
  int64_t tmp_offset_chpl;
  syserr call_tmp_chpl;
  qio_channel_ptr_t coerce_tmp_chpl;
  qio_channel_ptr_t tmp_chpl;
  _ref_c_string _ref_tmp__chpl = NULL;
  _ref_int64_t _ref_tmp__chpl2 = NULL;
  int32_t call_tmp_chpl2;
  chpl_bool call_tmp_chpl3;
  string call_tmp_chpl4;
  string ret_tmp_chpl;
  _ref_string ret_to_arg_ref_tmp__chpl = NULL;
  chpl____wide__ref_string tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp__chpl3 = NULL;
  chpl____wide__ref_string tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_7414;
  chpl____wide__ref_string chpl_macro_tmp_7415;
  tmp_path_chpl = "";
  tmp_offset_chpl = INT64(0);
  qio_int_to_err(INT32(0));
  tmp_chpl = (this_chpl6)->_channel_internal_chpl;
  coerce_tmp_chpl = tmp_chpl;
  _ref_tmp__chpl = &tmp_path_chpl;
  _ref_tmp__chpl2 = &tmp_offset_chpl;
  call_tmp_chpl = qio_channel_path_offset(((int32_t)(UINT8(false))), coerce_tmp_chpl, _ref_tmp__chpl, _ref_tmp__chpl2);
  call_tmp_chpl2 = qio_err_iserr(call_tmp_chpl);
  call_tmp_chpl3 = (call_tmp_chpl2 == INT32(0));
  if (call_tmp_chpl3) {
    ret_to_arg_ref_tmp__chpl = &ret_tmp_chpl;
    string3(tmp_path_chpl, string_length(tmp_path_chpl), UINT8(true), UINT8(false), ret_to_arg_ref_tmp__chpl);
    call_tmp_chpl4 = ret_tmp_chpl;
    chpl_macro_tmp_7414.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7414.addr = &ret_tmp_chpl;
    tmp_chpl2 = chpl_macro_tmp_7414;
    chpl___ASSIGN_13(path_chpl, tmp_chpl2);
    chpl_gen_comm_put(((void*)(&tmp_offset_chpl)), chpl_nodeFromLocaleID(&((offset_chpl2).locale), INT64(0), INT32(0)), (offset_chpl2).addr, sizeof(int64_t), -1, COMMID(50), INT64(2854), INT64(71));
    _ref_tmp__chpl3 = &call_tmp_chpl4;
    chpl_macro_tmp_7415.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7415.addr = _ref_tmp__chpl3;
    tmp_chpl3 = chpl_macro_tmp_7415;
    deinit44(tmp_chpl3);
  }
  return;
}

/* IO.chpl:2847 */
static void on_fn_chpl35(chpl____wide__ref_channel_T_dynamic_F this_chpl6,
                         chpl____wide__ref_string path_chpl,
                         chpl____wide__ref_int64_t offset_chpl2) {
  c_string tmp_path_chpl;
  int64_t tmp_offset_chpl;
  syserr call_tmp_chpl;
  qio_channel_ptr_t coerce_tmp_chpl;
  qio_channel_ptr_t tmp_chpl;
  _ref_c_string _ref_tmp__chpl = NULL;
  _ref_int64_t _ref_tmp__chpl2 = NULL;
  int32_t call_tmp_chpl2;
  chpl_bool call_tmp_chpl3;
  string call_tmp_chpl4;
  string ret_tmp_chpl;
  _ref_string ret_to_arg_ref_tmp__chpl = NULL;
  chpl____wide__ref_string tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp__chpl3 = NULL;
  chpl____wide__ref_string tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_qio_channel_ptr_t chpl_macro_tmp_7416;
  chpl____wide__ref_string chpl_macro_tmp_7417;
  chpl____wide__ref_string chpl_macro_tmp_7418;
  tmp_path_chpl = "";
  tmp_offset_chpl = INT64(0);
  qio_int_to_err(INT32(0));
  chpl_macro_tmp_7416.locale = (this_chpl6).locale;
  chpl_macro_tmp_7416.addr = &(((this_chpl6).addr)->_channel_internal_chpl);
  chpl_gen_comm_get(((void*)(&tmp_chpl)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_7416).locale), INT64(0), INT32(0)), (chpl_macro_tmp_7416).addr, sizeof(qio_channel_ptr_t), -1, COMMID(51), INT64(2851), INT64(71));
  coerce_tmp_chpl = tmp_chpl;
  _ref_tmp__chpl = &tmp_path_chpl;
  _ref_tmp__chpl2 = &tmp_offset_chpl;
  call_tmp_chpl = qio_channel_path_offset(((int32_t)(UINT8(false))), coerce_tmp_chpl, _ref_tmp__chpl, _ref_tmp__chpl2);
  call_tmp_chpl2 = qio_err_iserr(call_tmp_chpl);
  call_tmp_chpl3 = (call_tmp_chpl2 == INT32(0));
  if (call_tmp_chpl3) {
    ret_to_arg_ref_tmp__chpl = &ret_tmp_chpl;
    string3(tmp_path_chpl, string_length(tmp_path_chpl), UINT8(true), UINT8(false), ret_to_arg_ref_tmp__chpl);
    call_tmp_chpl4 = ret_tmp_chpl;
    chpl_macro_tmp_7417.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7417.addr = &ret_tmp_chpl;
    tmp_chpl2 = chpl_macro_tmp_7417;
    chpl___ASSIGN_13(path_chpl, tmp_chpl2);
    chpl_gen_comm_put(((void*)(&tmp_offset_chpl)), chpl_nodeFromLocaleID(&((offset_chpl2).locale), INT64(0), INT32(0)), (offset_chpl2).addr, sizeof(int64_t), -1, COMMID(52), INT64(2854), INT64(71));
    _ref_tmp__chpl3 = &call_tmp_chpl4;
    chpl_macro_tmp_7418.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7418.addr = _ref_tmp__chpl3;
    tmp_chpl3 = chpl_macro_tmp_7418;
    deinit44(tmp_chpl3);
  }
  return;
}

/* IO.chpl:2847 */
static void on_fn_chpl34(_ref_channel_T_dynamic_T this_chpl6,
                         chpl____wide__ref_string path_chpl,
                         chpl____wide__ref_int64_t offset_chpl2) {
  c_string tmp_path_chpl;
  int64_t tmp_offset_chpl;
  syserr call_tmp_chpl;
  qio_channel_ptr_t coerce_tmp_chpl;
  qio_channel_ptr_t tmp_chpl;
  _ref_c_string _ref_tmp__chpl = NULL;
  _ref_int64_t _ref_tmp__chpl2 = NULL;
  int32_t call_tmp_chpl2;
  chpl_bool call_tmp_chpl3;
  string call_tmp_chpl4;
  string ret_tmp_chpl;
  _ref_string ret_to_arg_ref_tmp__chpl = NULL;
  chpl____wide__ref_string tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp__chpl3 = NULL;
  chpl____wide__ref_string tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_7419;
  chpl____wide__ref_string chpl_macro_tmp_7420;
  tmp_path_chpl = "";
  tmp_offset_chpl = INT64(0);
  qio_int_to_err(INT32(0));
  tmp_chpl = (this_chpl6)->_channel_internal_chpl;
  coerce_tmp_chpl = tmp_chpl;
  _ref_tmp__chpl = &tmp_path_chpl;
  _ref_tmp__chpl2 = &tmp_offset_chpl;
  call_tmp_chpl = qio_channel_path_offset(((int32_t)(UINT8(true))), coerce_tmp_chpl, _ref_tmp__chpl, _ref_tmp__chpl2);
  call_tmp_chpl2 = qio_err_iserr(call_tmp_chpl);
  call_tmp_chpl3 = (call_tmp_chpl2 == INT32(0));
  if (call_tmp_chpl3) {
    ret_to_arg_ref_tmp__chpl = &ret_tmp_chpl;
    string3(tmp_path_chpl, string_length(tmp_path_chpl), UINT8(true), UINT8(false), ret_to_arg_ref_tmp__chpl);
    call_tmp_chpl4 = ret_tmp_chpl;
    chpl_macro_tmp_7419.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7419.addr = &ret_tmp_chpl;
    tmp_chpl2 = chpl_macro_tmp_7419;
    chpl___ASSIGN_13(path_chpl, tmp_chpl2);
    chpl_gen_comm_put(((void*)(&tmp_offset_chpl)), chpl_nodeFromLocaleID(&((offset_chpl2).locale), INT64(0), INT32(0)), (offset_chpl2).addr, sizeof(int64_t), -1, COMMID(53), INT64(2854), INT64(71));
    _ref_tmp__chpl3 = &call_tmp_chpl4;
    chpl_macro_tmp_7420.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7420.addr = _ref_tmp__chpl3;
    tmp_chpl3 = chpl_macro_tmp_7420;
    deinit44(tmp_chpl3);
  }
  return;
}

/* IO.chpl:2890 */
static void wrapon_fn_chpl36(_class_localson_fn_chpl36 c_chpl) {
  channel_T_dynamic_T_chpl _1_rvfDerefTmp_chpl;
  channel_T_dynamic_T_chpl tmp_chpl;
  chpl____wide__ref_syserr _2_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  tmp_chpl = (c_chpl)->_1_rvfDerefTmp_chpl;
  _1_rvfDerefTmp_chpl = tmp_chpl;
  _2_tmp_chpl = (c_chpl)->_2_tmp_chpl;
  on_fn_chpl36(&_1_rvfDerefTmp_chpl, _2_tmp_chpl);
  return;
}

/* IO.chpl:2890 */
static void on_fn_chpl36(_ref_channel_T_dynamic_T this_chpl6,
                         chpl____wide__ref_syserr _formal_tmp_error_chpl) {
  syserr call_tmp_chpl;
  qio_channel_ptr_t coerce_tmp_chpl;
  qio_channel_ptr_t tmp_chpl;
  tmp_chpl = (this_chpl6)->_channel_internal_chpl;
  coerce_tmp_chpl = tmp_chpl;
  call_tmp_chpl = qio_channel_lock(coerce_tmp_chpl);
  chpl_gen_comm_put(((void*)(&call_tmp_chpl)), chpl_nodeFromLocaleID(&((_formal_tmp_error_chpl).locale), INT64(0), INT32(0)), (_formal_tmp_error_chpl).addr, sizeof(syserr), -1, COMMID(54), INT64(2891), INT64(71));
  return;
}

/* IO.chpl:2910 */
static void wrapon_fn_chpl37(_class_localson_fn_chpl37 c_chpl) {
  channel_T_dynamic_T_chpl _1_rvfDerefTmp_chpl;
  channel_T_dynamic_T_chpl tmp_chpl;
  tmp_chpl = (c_chpl)->_1_rvfDerefTmp_chpl;
  _1_rvfDerefTmp_chpl = tmp_chpl;
  on_fn_chpl37(&_1_rvfDerefTmp_chpl);
  return;
}

/* IO.chpl:2910 */
static void on_fn_chpl37(_ref_channel_T_dynamic_T this_chpl6) {
  qio_channel_ptr_t coerce_tmp_chpl;
  qio_channel_ptr_t tmp_chpl;
  tmp_chpl = (this_chpl6)->_channel_internal_chpl;
  coerce_tmp_chpl = tmp_chpl;
  qio_channel_unlock(coerce_tmp_chpl);
  return;
}

/* IO.chpl:2925 */
static int64_t offset_chpl(_ref_channel_T_dynamic_F this_chpl6) {
  int64_t ret_chpl;
  _ref__wide_locale call_tmp_chpl = NULL;
  chpl_localeID_t call_tmp_chpl2;
  chpl____wide_locale tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_int64_t tmp_chpl2 = NULL;
  channel_T_dynamic_F_chpl rvfDerefTmp_chpl;
  chpl_bool isdirect_chpl;
  chpl____wide__ref_int64_t tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl38 _args_foron_fn_chpl = NULL;
  _ref_int64_t tmp_chpl4 = NULL;
  chpl____wide__ref_int64_t tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  chpl____wide__ref_int64_t chpl_macro_tmp_7421;
  chpl__class_localson_fn_chpl38_object chpl_macro_tmp_7422;
  chpl____wide__ref_int64_t chpl_macro_tmp_7423;
  ret_chpl = INT64(0);
  call_tmp_chpl = &((this_chpl6)->home_chpl);
  tmp_chpl = *(call_tmp_chpl);
  call_tmp_chpl2 = (&tmp_chpl)->locale;
  tmp_chpl2 = &ret_chpl;
  rvfDerefTmp_chpl = *(this_chpl6);
  isdirect_chpl = chpl_doDirectExecuteOn(&call_tmp_chpl2);
  if (isdirect_chpl) {
    chpl_macro_tmp_7421.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7421.addr = tmp_chpl2;
    tmp_chpl3 = chpl_macro_tmp_7421;
    on_fn_chpl38(&rvfDerefTmp_chpl, tmp_chpl3);
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn_chpl38)(&chpl_macro_tmp_7422));
    (_args_foron_fn_chpl)->_0_rvfDerefTmp_chpl = call_tmp_chpl2;
    (_args_foron_fn_chpl)->_1_rvfDerefTmp_chpl = rvfDerefTmp_chpl;
    tmp_chpl4 = &ret_chpl;
    chpl_macro_tmp_7423.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7423.addr = tmp_chpl4;
    tmp_chpl5 = chpl_macro_tmp_7423;
    (_args_foron_fn_chpl)->_2_tmp_chpl = tmp_chpl5;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    /*** wrapon_fn_chpl38 ***/ chpl_executeOn(&call_tmp_chpl2, INT32(294), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), sizeof(chpl__class_localson_fn_chpl38_object), INT64(2927), INT32(71));
  }
  return ret_chpl;
}

/* IO.chpl:2927 */
static void on_fn_chpl38(_ref_channel_T_dynamic_F this_chpl6,
                         chpl____wide__ref_int64_t ret_chpl) {
  string local__str_literal_2497_chpl;
  _ref_channel_T_dynamic_F rvfRerefTmp_chpl = NULL;
  syserr call_tmp_chpl;
  int32_t call_tmp_chpl2;
  chpl_bool call_tmp_chpl3;
  chpl____wide__ref_channel_T_dynamic_F tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp_chpl4;
  qio_channel_ptr_t coerce_tmp_chpl;
  qio_channel_ptr_t tmp_chpl2;
  chpl____wide__ref_channel_T_dynamic_F chpl_macro_tmp_7424;
  local__str_literal_2497_chpl /* "in lock" */ = _str_literal_2497 /* "in lock" */;
  rvfRerefTmp_chpl = this_chpl6;
  qio_int_to_err(INT32(0));
  call_tmp_chpl = qio_int_to_err(INT32(0));
  call_tmp_chpl2 = qio_err_iserr(call_tmp_chpl);
  call_tmp_chpl3 = (call_tmp_chpl2 != INT32(0));
  if (call_tmp_chpl3) {
    chpl_macro_tmp_7424.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7424.addr = rvfRerefTmp_chpl;
    tmp_chpl = chpl_macro_tmp_7424;
    _ch_ioerror_chpl3(tmp_chpl, call_tmp_chpl, &local__str_literal_2497_chpl /* "in lock" */);
  }
  tmp_chpl2 = (this_chpl6)->_channel_internal_chpl;
  coerce_tmp_chpl = tmp_chpl2;
  call_tmp_chpl4 = qio_channel_offset_unlocked(coerce_tmp_chpl);
  chpl_gen_comm_put(((void*)(&call_tmp_chpl4)), chpl_nodeFromLocaleID(&((ret_chpl).locale), INT64(0), INT32(0)), (ret_chpl).addr, sizeof(int64_t), -1, COMMID(55), INT64(2929), INT64(71));
  return;
}

/* IO.chpl:2927 */
static void wrapon_fn_chpl38(_class_localson_fn_chpl38 c_chpl) {
  channel_T_dynamic_F_chpl _1_rvfDerefTmp_chpl;
  channel_T_dynamic_F_chpl tmp_chpl;
  chpl____wide__ref_int64_t _2_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  tmp_chpl = (c_chpl)->_1_rvfDerefTmp_chpl;
  _1_rvfDerefTmp_chpl = tmp_chpl;
  _2_tmp_chpl = (c_chpl)->_2_tmp_chpl;
  on_fn_chpl38(&_1_rvfDerefTmp_chpl, _2_tmp_chpl);
  return;
}

/* IO.chpl:3283 */
static void reader_chpl(_ref_file this_chpl6,
                        _ref_syserr error_chpl,
                        int64_t start_chpl,
                        int64_t end_chpl,
                        int32_t hints_chpl,
                        _ref_iostyle style_chpl,
                        _ref_channel_F_dynamic_F _retArg_chpl) {
  qio_channel_ptr_t local_QIO_CHANNEL_PTR_NULL_chpl;
  syserr _formal_tmp_error_chpl;
  channel_F_dynamic_F_chpl ret_chpl;
  channel_F_dynamic_F_chpl this_chpl7;
  chpl____wide_locale tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_locale tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  locale call_tmp_chpl = NULL;
  chpl____wide_locale tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  qio_channel_ptr_t default_arg_channel_internal_chpl;
  locale call_tmp_chpl2 = NULL;
  chpl____wide_locale tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  channel_F_dynamic_F_chpl ret_tmp_chpl;
  _ref_channel_F_dynamic_F ret_to_arg_ref_tmp__chpl = NULL;
  _ref__wide_locale call_tmp_chpl3 = NULL;
  chpl_localeID_t call_tmp_chpl4;
  chpl____wide_locale tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_syserr tmp_chpl6 = NULL;
  _ref_channel_F_dynamic_F tmp_chpl7 = NULL;
  iostyle rvfDerefTmp_chpl;
  file_chpl rvfDerefTmp_chpl2;
  chpl_bool isdirect_chpl;
  chpl____wide__ref_syserr tmp_chpl8 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_channel_F_dynamic_F tmp_chpl9 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl39 _args_foron_fn_chpl = NULL;
  _ref_syserr tmp_chpl10 = NULL;
  chpl____wide__ref_syserr tmp_chpl11 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_channel_F_dynamic_F tmp_chpl12 = NULL;
  chpl____wide__ref_channel_F_dynamic_F tmp_chpl13 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  chpl____wide__nilType chpl_macro_tmp_7425;
  chpl____wide_locale chpl_macro_tmp_7426;
  chpl____wide__nilType chpl_macro_tmp_7427;
  chpl____wide_locale chpl_macro_tmp_7428;
  chpl____wide_locale chpl_macro_tmp_7429;
  chpl____wide_locale chpl_macro_tmp_7430;
  chpl____wide__ref_syserr chpl_macro_tmp_7431;
  chpl____wide__ref_channel_F_dynamic_F chpl_macro_tmp_7432;
  chpl__class_localson_fn_chpl39_object chpl_macro_tmp_7433;
  chpl____wide__ref_syserr chpl_macro_tmp_7434;
  chpl____wide__ref_channel_F_dynamic_F chpl_macro_tmp_7435;
  local_QIO_CHANNEL_PTR_NULL_chpl = QIO_CHANNEL_PTR_NULL;
  check_chpl(this_chpl6);
  chpl_macro_tmp_7425.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7425.addr = nil;
  chpl_macro_tmp_7426.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7426.addr = NULL;
  tmp_chpl = chpl_macro_tmp_7426;
  (&this_chpl7)->home_chpl = tmp_chpl;
  chpl_macro_tmp_7427.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7427.addr = nil;
  chpl_macro_tmp_7428.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7428.addr = NULL;
  tmp_chpl2 = chpl_macro_tmp_7428;
  (&this_chpl7)->_readWriteThisFromLocale_chpl = tmp_chpl2;
  call_tmp_chpl = ((locale)(nil));
  chpl_macro_tmp_7429.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7429.addr = call_tmp_chpl;
  tmp_chpl3 = chpl_macro_tmp_7429;
  (&this_chpl7)->home_chpl = tmp_chpl3;
  default_arg_channel_internal_chpl = local_QIO_CHANNEL_PTR_NULL_chpl;
  (&this_chpl7)->_channel_internal_chpl = default_arg_channel_internal_chpl;
  call_tmp_chpl2 = ((locale)(nil));
  chpl_macro_tmp_7430.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7430.addr = call_tmp_chpl2;
  tmp_chpl4 = chpl_macro_tmp_7430;
  (&this_chpl7)->_readWriteThisFromLocale_chpl = tmp_chpl4;
  ret_to_arg_ref_tmp__chpl = &ret_tmp_chpl;
  _construct_channel_chpl(call_tmp_chpl, default_arg_channel_internal_chpl, call_tmp_chpl2, &this_chpl7, ret_to_arg_ref_tmp__chpl);
  ret_chpl = ret_tmp_chpl;
  call_tmp_chpl3 = &((this_chpl6)->home_chpl);
  tmp_chpl5 = *(call_tmp_chpl3);
  call_tmp_chpl4 = (&tmp_chpl5)->locale;
  tmp_chpl6 = &_formal_tmp_error_chpl;
  tmp_chpl7 = &ret_chpl;
  rvfDerefTmp_chpl = *(style_chpl);
  rvfDerefTmp_chpl2 = *(this_chpl6);
  isdirect_chpl = chpl_doDirectExecuteOn(&call_tmp_chpl4);
  if (isdirect_chpl) {
    chpl_macro_tmp_7431.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7431.addr = tmp_chpl6;
    tmp_chpl8 = chpl_macro_tmp_7431;
    chpl_macro_tmp_7432.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7432.addr = tmp_chpl7;
    tmp_chpl9 = chpl_macro_tmp_7432;
    on_fn_chpl40(start_chpl, &rvfDerefTmp_chpl, &rvfDerefTmp_chpl2, tmp_chpl8, hints_chpl, end_chpl, tmp_chpl9);
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn_chpl39)(&chpl_macro_tmp_7433));
    (_args_foron_fn_chpl)->_0_rvfDerefTmp_chpl = call_tmp_chpl4;
    (_args_foron_fn_chpl)->_1_rvfDerefTmp_chpl = start_chpl;
    (_args_foron_fn_chpl)->_2_rvfDerefTmp_chpl = rvfDerefTmp_chpl;
    (_args_foron_fn_chpl)->_3_rvfDerefTmp_chpl = rvfDerefTmp_chpl2;
    tmp_chpl10 = &_formal_tmp_error_chpl;
    chpl_macro_tmp_7434.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7434.addr = tmp_chpl10;
    tmp_chpl11 = chpl_macro_tmp_7434;
    (_args_foron_fn_chpl)->_4_tmp_chpl = tmp_chpl11;
    (_args_foron_fn_chpl)->_5_rvfDerefTmp_chpl = hints_chpl;
    (_args_foron_fn_chpl)->_6_rvfDerefTmp_chpl = end_chpl;
    tmp_chpl12 = &ret_chpl;
    chpl_macro_tmp_7435.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7435.addr = tmp_chpl12;
    tmp_chpl13 = chpl_macro_tmp_7435;
    (_args_foron_fn_chpl)->_7_tmp_chpl = tmp_chpl13;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    /*** wrapon_fn_chpl40 ***/ chpl_executeOn(&call_tmp_chpl4, INT32(296), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), sizeof(chpl__class_localson_fn_chpl39_object), INT64(3287), INT32(71));
  }
  *(error_chpl) = _formal_tmp_error_chpl;
  *(_retArg_chpl) = ret_chpl;
  return;
}

/* IO.chpl:3283 */
static void reader_chpl2(_ref_file this_chpl6,
                         _ref_syserr error_chpl,
                         int64_t start_chpl,
                         int64_t end_chpl,
                         int32_t hints_chpl,
                         _ref_iostyle style_chpl,
                         _ref_channel_F_dynamic_T _retArg_chpl) {
  qio_channel_ptr_t local_QIO_CHANNEL_PTR_NULL_chpl;
  syserr _formal_tmp_error_chpl;
  channel_F_dynamic_T_chpl ret_chpl;
  channel_F_dynamic_T_chpl this_chpl7;
  chpl____wide_locale tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_locale tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  locale call_tmp_chpl = NULL;
  chpl____wide_locale tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  qio_channel_ptr_t default_arg_channel_internal_chpl;
  locale call_tmp_chpl2 = NULL;
  chpl____wide_locale tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  channel_F_dynamic_T_chpl ret_tmp_chpl;
  _ref_channel_F_dynamic_T ret_to_arg_ref_tmp__chpl = NULL;
  _ref__wide_locale call_tmp_chpl3 = NULL;
  chpl_localeID_t call_tmp_chpl4;
  chpl____wide_locale tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_syserr tmp_chpl6 = NULL;
  _ref_channel_F_dynamic_T tmp_chpl7 = NULL;
  iostyle rvfDerefTmp_chpl;
  file_chpl rvfDerefTmp_chpl2;
  chpl_bool isdirect_chpl;
  chpl____wide__ref_syserr tmp_chpl8 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_channel_F_dynamic_T tmp_chpl9 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl40 _args_foron_fn_chpl = NULL;
  _ref_syserr tmp_chpl10 = NULL;
  chpl____wide__ref_syserr tmp_chpl11 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_channel_F_dynamic_T tmp_chpl12 = NULL;
  chpl____wide__ref_channel_F_dynamic_T tmp_chpl13 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  chpl____wide__nilType chpl_macro_tmp_7436;
  chpl____wide_locale chpl_macro_tmp_7437;
  chpl____wide__nilType chpl_macro_tmp_7438;
  chpl____wide_locale chpl_macro_tmp_7439;
  chpl____wide_locale chpl_macro_tmp_7440;
  chpl____wide_locale chpl_macro_tmp_7441;
  chpl____wide__ref_syserr chpl_macro_tmp_7442;
  chpl____wide__ref_channel_F_dynamic_T chpl_macro_tmp_7443;
  chpl__class_localson_fn_chpl40_object chpl_macro_tmp_7444;
  chpl____wide__ref_syserr chpl_macro_tmp_7445;
  chpl____wide__ref_channel_F_dynamic_T chpl_macro_tmp_7446;
  local_QIO_CHANNEL_PTR_NULL_chpl = QIO_CHANNEL_PTR_NULL;
  check_chpl(this_chpl6);
  chpl_macro_tmp_7436.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7436.addr = nil;
  chpl_macro_tmp_7437.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7437.addr = NULL;
  tmp_chpl = chpl_macro_tmp_7437;
  (&this_chpl7)->home_chpl = tmp_chpl;
  chpl_macro_tmp_7438.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7438.addr = nil;
  chpl_macro_tmp_7439.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7439.addr = NULL;
  tmp_chpl2 = chpl_macro_tmp_7439;
  (&this_chpl7)->_readWriteThisFromLocale_chpl = tmp_chpl2;
  call_tmp_chpl = ((locale)(nil));
  chpl_macro_tmp_7440.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7440.addr = call_tmp_chpl;
  tmp_chpl3 = chpl_macro_tmp_7440;
  (&this_chpl7)->home_chpl = tmp_chpl3;
  default_arg_channel_internal_chpl = local_QIO_CHANNEL_PTR_NULL_chpl;
  (&this_chpl7)->_channel_internal_chpl = default_arg_channel_internal_chpl;
  call_tmp_chpl2 = ((locale)(nil));
  chpl_macro_tmp_7441.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7441.addr = call_tmp_chpl2;
  tmp_chpl4 = chpl_macro_tmp_7441;
  (&this_chpl7)->_readWriteThisFromLocale_chpl = tmp_chpl4;
  ret_to_arg_ref_tmp__chpl = &ret_tmp_chpl;
  _construct_channel_chpl2(call_tmp_chpl, default_arg_channel_internal_chpl, call_tmp_chpl2, &this_chpl7, ret_to_arg_ref_tmp__chpl);
  ret_chpl = ret_tmp_chpl;
  call_tmp_chpl3 = &((this_chpl6)->home_chpl);
  tmp_chpl5 = *(call_tmp_chpl3);
  call_tmp_chpl4 = (&tmp_chpl5)->locale;
  tmp_chpl6 = &_formal_tmp_error_chpl;
  tmp_chpl7 = &ret_chpl;
  rvfDerefTmp_chpl = *(style_chpl);
  rvfDerefTmp_chpl2 = *(this_chpl6);
  isdirect_chpl = chpl_doDirectExecuteOn(&call_tmp_chpl4);
  if (isdirect_chpl) {
    chpl_macro_tmp_7442.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7442.addr = tmp_chpl6;
    tmp_chpl8 = chpl_macro_tmp_7442;
    chpl_macro_tmp_7443.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7443.addr = tmp_chpl7;
    tmp_chpl9 = chpl_macro_tmp_7443;
    on_fn_chpl39(&rvfDerefTmp_chpl, start_chpl, tmp_chpl8, &rvfDerefTmp_chpl2, hints_chpl, tmp_chpl9, end_chpl);
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn_chpl40)(&chpl_macro_tmp_7444));
    (_args_foron_fn_chpl)->_0_rvfDerefTmp_chpl = call_tmp_chpl4;
    (_args_foron_fn_chpl)->_1_rvfDerefTmp_chpl = rvfDerefTmp_chpl;
    (_args_foron_fn_chpl)->_2_rvfDerefTmp_chpl = start_chpl;
    tmp_chpl10 = &_formal_tmp_error_chpl;
    chpl_macro_tmp_7445.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7445.addr = tmp_chpl10;
    tmp_chpl11 = chpl_macro_tmp_7445;
    (_args_foron_fn_chpl)->_3_tmp_chpl = tmp_chpl11;
    (_args_foron_fn_chpl)->_4_rvfDerefTmp_chpl = rvfDerefTmp_chpl2;
    (_args_foron_fn_chpl)->_5_rvfDerefTmp_chpl = hints_chpl;
    tmp_chpl12 = &ret_chpl;
    chpl_macro_tmp_7446.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7446.addr = tmp_chpl12;
    tmp_chpl13 = chpl_macro_tmp_7446;
    (_args_foron_fn_chpl)->_6_tmp_chpl = tmp_chpl13;
    (_args_foron_fn_chpl)->_7_rvfDerefTmp_chpl = end_chpl;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    /*** wrapon_fn_chpl39 ***/ chpl_executeOn(&call_tmp_chpl4, INT32(295), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), sizeof(chpl__class_localson_fn_chpl40_object), INT64(3287), INT32(71));
  }
  *(error_chpl) = _formal_tmp_error_chpl;
  *(_retArg_chpl) = ret_chpl;
  return;
}

/* IO.chpl:3287 */
static void on_fn_chpl39(_ref_iostyle style_chpl,
                         int64_t start_chpl,
                         chpl____wide__ref_syserr _formal_tmp_error_chpl,
                         _ref_file this_chpl6,
                         int32_t hints_chpl,
                         chpl____wide__ref_channel_F_dynamic_T ret_chpl,
                         int64_t end_chpl) {
  channel_F_dynamic_T_chpl call_tmp_chpl;
  channel_F_dynamic_T_chpl ret_tmp_chpl;
  _ref_channel_F_dynamic_T ret_to_arg_ref_tmp__chpl = NULL;
  _ref_file i_f_chpl = NULL;
  _ref_iostyle i_local_style_chpl = NULL;
  _ref_channel_F_dynamic_T _ref_tmp__chpl = NULL;
  ret_to_arg_ref_tmp__chpl = &ret_tmp_chpl;
  i_f_chpl = this_chpl6;
  i_local_style_chpl = style_chpl;
  channel_chpl4(i_f_chpl, _formal_tmp_error_chpl, hints_chpl, start_chpl, end_chpl, i_local_style_chpl, ret_to_arg_ref_tmp__chpl);
  call_tmp_chpl = ret_tmp_chpl;
  chpl___ASSIGN_15(ret_chpl, &ret_tmp_chpl);
  _ref_tmp__chpl = &call_tmp_chpl;
  deinit_chpl2(_ref_tmp__chpl);
  return;
}

/* IO.chpl:3287 */
static void wrapon_fn_chpl39(_class_localson_fn_chpl40 c_chpl) {
  iostyle _1_rvfDerefTmp_chpl;
  iostyle tmp_chpl;
  chpl____wide__ref_syserr _3_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  file_chpl _4_rvfDerefTmp_chpl;
  file_chpl tmp_chpl2;
  chpl____wide__ref_channel_F_dynamic_T _6_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t _7_rvfDerefTmp_chpl;
  tmp_chpl = (c_chpl)->_1_rvfDerefTmp_chpl;
  _1_rvfDerefTmp_chpl = tmp_chpl;
  _3_tmp_chpl = (c_chpl)->_3_tmp_chpl;
  tmp_chpl2 = (c_chpl)->_4_rvfDerefTmp_chpl;
  _4_rvfDerefTmp_chpl = tmp_chpl2;
  _6_tmp_chpl = (c_chpl)->_6_tmp_chpl;
  _7_rvfDerefTmp_chpl = (c_chpl)->_7_rvfDerefTmp_chpl;
  on_fn_chpl39(&_1_rvfDerefTmp_chpl, (c_chpl)->_2_rvfDerefTmp_chpl, _3_tmp_chpl, &_4_rvfDerefTmp_chpl, (c_chpl)->_5_rvfDerefTmp_chpl, _6_tmp_chpl, _7_rvfDerefTmp_chpl);
  return;
}

/* IO.chpl:3287 */
static void wrapon_fn_chpl40(_class_localson_fn_chpl39 c_chpl) {
  iostyle _2_rvfDerefTmp_chpl;
  iostyle tmp_chpl;
  file_chpl _3_rvfDerefTmp_chpl;
  file_chpl tmp_chpl2;
  chpl____wide__ref_syserr _4_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_channel_F_dynamic_F _7_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  tmp_chpl = (c_chpl)->_2_rvfDerefTmp_chpl;
  _2_rvfDerefTmp_chpl = tmp_chpl;
  tmp_chpl2 = (c_chpl)->_3_rvfDerefTmp_chpl;
  _3_rvfDerefTmp_chpl = tmp_chpl2;
  _4_tmp_chpl = (c_chpl)->_4_tmp_chpl;
  _7_tmp_chpl = (c_chpl)->_7_tmp_chpl;
  on_fn_chpl40((c_chpl)->_1_rvfDerefTmp_chpl, &_2_rvfDerefTmp_chpl, &_3_rvfDerefTmp_chpl, _4_tmp_chpl, (c_chpl)->_5_rvfDerefTmp_chpl, (c_chpl)->_6_rvfDerefTmp_chpl, _7_tmp_chpl);
  return;
}

/* IO.chpl:3287 */
static void on_fn_chpl40(int64_t start_chpl,
                         _ref_iostyle style_chpl,
                         _ref_file this_chpl6,
                         chpl____wide__ref_syserr _formal_tmp_error_chpl,
                         int32_t hints_chpl,
                         int64_t end_chpl,
                         chpl____wide__ref_channel_F_dynamic_F ret_chpl) {
  channel_F_dynamic_F_chpl call_tmp_chpl;
  channel_F_dynamic_F_chpl ret_tmp_chpl;
  _ref_channel_F_dynamic_F ret_to_arg_ref_tmp__chpl = NULL;
  _ref_file i_f_chpl = NULL;
  _ref_iostyle i_local_style_chpl = NULL;
  _ref_channel_F_dynamic_F _ref_tmp__chpl = NULL;
  ret_to_arg_ref_tmp__chpl = &ret_tmp_chpl;
  i_f_chpl = this_chpl6;
  i_local_style_chpl = style_chpl;
  channel_chpl(i_f_chpl, _formal_tmp_error_chpl, hints_chpl, start_chpl, end_chpl, i_local_style_chpl, ret_to_arg_ref_tmp__chpl);
  call_tmp_chpl = ret_tmp_chpl;
  chpl___ASSIGN_16(ret_chpl, &ret_tmp_chpl);
  _ref_tmp__chpl = &call_tmp_chpl;
  deinit_chpl4(_ref_tmp__chpl);
  return;
}

/* IO.chpl:3295 */
static void reader_chpl3(_ref_file this_chpl6,
                         int64_t start_chpl,
                         int64_t end_chpl,
                         int32_t hints_chpl,
                         _ref_iostyle style_chpl,
                         _ref_channel_F_dynamic_T _retArg_chpl) {
  string local__str_literal_2524_chpl;
  syserr err_chpl;
  syserr call_tmp_chpl;
  channel_F_dynamic_T_chpl ret_tmp_chpl;
  _ref_channel_F_dynamic_T ret_to_arg_ref_tmp__chpl = NULL;
  _ref_syserr _ref_tmp__chpl = NULL;
  int32_t call_tmp_chpl2;
  chpl_bool call_tmp_chpl3;
  string call_tmp_chpl4;
  string ret_tmp_chpl2;
  _ref_string ret_to_arg_ref_tmp__chpl2 = NULL;
  _ref_string _ref_tmp__chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_7447;
  local__str_literal_2524_chpl /* "in file.reader" */ = _str_literal_2524 /* "in file.reader" */;
  call_tmp_chpl = qio_int_to_err(INT32(0));
  err_chpl = call_tmp_chpl;
  ret_to_arg_ref_tmp__chpl = &ret_tmp_chpl;
  _ref_tmp__chpl = &err_chpl;
  reader_chpl2(this_chpl6, _ref_tmp__chpl, start_chpl, end_chpl, hints_chpl, style_chpl, ret_to_arg_ref_tmp__chpl);
  call_tmp_chpl2 = qio_err_iserr(err_chpl);
  call_tmp_chpl3 = (call_tmp_chpl2 != INT32(0));
  if (call_tmp_chpl3) {
    ret_to_arg_ref_tmp__chpl2 = &ret_tmp_chpl2;
    tryGetPath_chpl(this_chpl6, ret_to_arg_ref_tmp__chpl2);
    call_tmp_chpl4 = ret_tmp_chpl2;
    ioerror_chpl2(err_chpl, &local__str_literal_2524_chpl /* "in file.reader" */, &ret_tmp_chpl2);
    _ref_tmp__chpl2 = &call_tmp_chpl4;
    chpl_macro_tmp_7447.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7447.addr = _ref_tmp__chpl2;
    tmp_chpl = chpl_macro_tmp_7447;
    deinit44(tmp_chpl);
  }
  *(_retArg_chpl) = ret_tmp_chpl;
  return;
}

/* IO.chpl:3295 */
static void reader_chpl4(_ref_file this_chpl6,
                         int64_t start_chpl,
                         int64_t end_chpl,
                         int32_t hints_chpl,
                         _ref_iostyle style_chpl,
                         _ref_channel_F_dynamic_F _retArg_chpl) {
  string local__str_literal_2524_chpl;
  syserr err_chpl;
  syserr call_tmp_chpl;
  channel_F_dynamic_F_chpl ret_tmp_chpl;
  _ref_channel_F_dynamic_F ret_to_arg_ref_tmp__chpl = NULL;
  _ref_syserr _ref_tmp__chpl = NULL;
  int32_t call_tmp_chpl2;
  chpl_bool call_tmp_chpl3;
  string call_tmp_chpl4;
  string ret_tmp_chpl2;
  _ref_string ret_to_arg_ref_tmp__chpl2 = NULL;
  _ref_string _ref_tmp__chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_7448;
  local__str_literal_2524_chpl /* "in file.reader" */ = _str_literal_2524 /* "in file.reader" */;
  call_tmp_chpl = qio_int_to_err(INT32(0));
  err_chpl = call_tmp_chpl;
  ret_to_arg_ref_tmp__chpl = &ret_tmp_chpl;
  _ref_tmp__chpl = &err_chpl;
  reader_chpl(this_chpl6, _ref_tmp__chpl, start_chpl, end_chpl, hints_chpl, style_chpl, ret_to_arg_ref_tmp__chpl);
  call_tmp_chpl2 = qio_err_iserr(err_chpl);
  call_tmp_chpl3 = (call_tmp_chpl2 != INT32(0));
  if (call_tmp_chpl3) {
    ret_to_arg_ref_tmp__chpl2 = &ret_tmp_chpl2;
    tryGetPath_chpl(this_chpl6, ret_to_arg_ref_tmp__chpl2);
    call_tmp_chpl4 = ret_tmp_chpl2;
    ioerror_chpl2(err_chpl, &local__str_literal_2524_chpl /* "in file.reader" */, &ret_tmp_chpl2);
    _ref_tmp__chpl2 = &call_tmp_chpl4;
    chpl_macro_tmp_7448.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7448.addr = _ref_tmp__chpl2;
    tmp_chpl = chpl_macro_tmp_7448;
    deinit44(tmp_chpl);
  }
  *(_retArg_chpl) = ret_tmp_chpl;
  return;
}

/* IO.chpl:3383 */
static void writer_chpl(_ref_file this_chpl6,
                        _ref_syserr error_chpl,
                        int64_t start_chpl,
                        int64_t end_chpl,
                        int32_t hints_chpl,
                        _ref_iostyle style_chpl,
                        _ref_channel_T_dynamic_T _retArg_chpl) {
  qio_channel_ptr_t local_QIO_CHANNEL_PTR_NULL_chpl;
  syserr _formal_tmp_error_chpl;
  channel_T_dynamic_T_chpl ret_chpl;
  channel_T_dynamic_T_chpl this_chpl7;
  chpl____wide_locale tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_locale tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  locale call_tmp_chpl = NULL;
  chpl____wide_locale tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  qio_channel_ptr_t default_arg_channel_internal_chpl;
  locale call_tmp_chpl2 = NULL;
  chpl____wide_locale tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  channel_T_dynamic_T_chpl ret_tmp_chpl;
  _ref_channel_T_dynamic_T ret_to_arg_ref_tmp__chpl = NULL;
  _ref__wide_locale call_tmp_chpl3 = NULL;
  chpl_localeID_t call_tmp_chpl4;
  chpl____wide_locale tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_channel_T_dynamic_T tmp_chpl6 = NULL;
  _ref_syserr tmp_chpl7 = NULL;
  iostyle rvfDerefTmp_chpl;
  file_chpl rvfDerefTmp_chpl2;
  chpl_bool isdirect_chpl;
  chpl____wide__ref_channel_T_dynamic_T tmp_chpl8 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_syserr tmp_chpl9 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl41 _args_foron_fn_chpl = NULL;
  _ref_channel_T_dynamic_T tmp_chpl10 = NULL;
  chpl____wide__ref_channel_T_dynamic_T tmp_chpl11 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_syserr tmp_chpl12 = NULL;
  chpl____wide__ref_syserr tmp_chpl13 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  chpl____wide__nilType chpl_macro_tmp_7449;
  chpl____wide_locale chpl_macro_tmp_7450;
  chpl____wide__nilType chpl_macro_tmp_7451;
  chpl____wide_locale chpl_macro_tmp_7452;
  chpl____wide_locale chpl_macro_tmp_7453;
  chpl____wide_locale chpl_macro_tmp_7454;
  chpl____wide__ref_channel_T_dynamic_T chpl_macro_tmp_7455;
  chpl____wide__ref_syserr chpl_macro_tmp_7456;
  chpl__class_localson_fn_chpl41_object chpl_macro_tmp_7457;
  chpl____wide__ref_channel_T_dynamic_T chpl_macro_tmp_7458;
  chpl____wide__ref_syserr chpl_macro_tmp_7459;
  local_QIO_CHANNEL_PTR_NULL_chpl = QIO_CHANNEL_PTR_NULL;
  check_chpl(this_chpl6);
  chpl_macro_tmp_7449.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7449.addr = nil;
  chpl_macro_tmp_7450.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7450.addr = NULL;
  tmp_chpl = chpl_macro_tmp_7450;
  (&this_chpl7)->home_chpl = tmp_chpl;
  chpl_macro_tmp_7451.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7451.addr = nil;
  chpl_macro_tmp_7452.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7452.addr = NULL;
  tmp_chpl2 = chpl_macro_tmp_7452;
  (&this_chpl7)->_readWriteThisFromLocale_chpl = tmp_chpl2;
  call_tmp_chpl = ((locale)(nil));
  chpl_macro_tmp_7453.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7453.addr = call_tmp_chpl;
  tmp_chpl3 = chpl_macro_tmp_7453;
  (&this_chpl7)->home_chpl = tmp_chpl3;
  default_arg_channel_internal_chpl = local_QIO_CHANNEL_PTR_NULL_chpl;
  (&this_chpl7)->_channel_internal_chpl = default_arg_channel_internal_chpl;
  call_tmp_chpl2 = ((locale)(nil));
  chpl_macro_tmp_7454.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7454.addr = call_tmp_chpl2;
  tmp_chpl4 = chpl_macro_tmp_7454;
  (&this_chpl7)->_readWriteThisFromLocale_chpl = tmp_chpl4;
  ret_to_arg_ref_tmp__chpl = &ret_tmp_chpl;
  _construct_channel_chpl3(call_tmp_chpl, default_arg_channel_internal_chpl, call_tmp_chpl2, &this_chpl7, ret_to_arg_ref_tmp__chpl);
  ret_chpl = ret_tmp_chpl;
  call_tmp_chpl3 = &((this_chpl6)->home_chpl);
  tmp_chpl5 = *(call_tmp_chpl3);
  call_tmp_chpl4 = (&tmp_chpl5)->locale;
  tmp_chpl6 = &ret_chpl;
  tmp_chpl7 = &_formal_tmp_error_chpl;
  rvfDerefTmp_chpl = *(style_chpl);
  rvfDerefTmp_chpl2 = *(this_chpl6);
  isdirect_chpl = chpl_doDirectExecuteOn(&call_tmp_chpl4);
  if (isdirect_chpl) {
    chpl_macro_tmp_7455.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7455.addr = tmp_chpl6;
    tmp_chpl8 = chpl_macro_tmp_7455;
    chpl_macro_tmp_7456.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7456.addr = tmp_chpl7;
    tmp_chpl9 = chpl_macro_tmp_7456;
    on_fn_chpl41(tmp_chpl8, start_chpl, &rvfDerefTmp_chpl, &rvfDerefTmp_chpl2, hints_chpl, tmp_chpl9, end_chpl);
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn_chpl41)(&chpl_macro_tmp_7457));
    (_args_foron_fn_chpl)->_0_rvfDerefTmp_chpl = call_tmp_chpl4;
    tmp_chpl10 = &ret_chpl;
    chpl_macro_tmp_7458.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7458.addr = tmp_chpl10;
    tmp_chpl11 = chpl_macro_tmp_7458;
    (_args_foron_fn_chpl)->_1_tmp_chpl = tmp_chpl11;
    (_args_foron_fn_chpl)->_2_rvfDerefTmp_chpl = start_chpl;
    (_args_foron_fn_chpl)->_3_rvfDerefTmp_chpl = rvfDerefTmp_chpl;
    (_args_foron_fn_chpl)->_4_rvfDerefTmp_chpl = rvfDerefTmp_chpl2;
    (_args_foron_fn_chpl)->_5_rvfDerefTmp_chpl = hints_chpl;
    tmp_chpl12 = &_formal_tmp_error_chpl;
    chpl_macro_tmp_7459.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7459.addr = tmp_chpl12;
    tmp_chpl13 = chpl_macro_tmp_7459;
    (_args_foron_fn_chpl)->_6_tmp_chpl = tmp_chpl13;
    (_args_foron_fn_chpl)->_7_rvfDerefTmp_chpl = end_chpl;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    /*** wrapon_fn_chpl41 ***/ chpl_executeOn(&call_tmp_chpl4, INT32(297), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), sizeof(chpl__class_localson_fn_chpl41_object), INT64(3387), INT32(71));
  }
  *(error_chpl) = _formal_tmp_error_chpl;
  *(_retArg_chpl) = ret_chpl;
  return;
}

/* IO.chpl:3383 */
static void writer_chpl2(_ref_file this_chpl6,
                         _ref_syserr error_chpl,
                         int64_t start_chpl,
                         int64_t end_chpl,
                         int32_t hints_chpl,
                         _ref_iostyle style_chpl,
                         _ref_channel_T_dynamic_F _retArg_chpl) {
  qio_channel_ptr_t local_QIO_CHANNEL_PTR_NULL_chpl;
  syserr _formal_tmp_error_chpl;
  channel_T_dynamic_F_chpl ret_chpl;
  channel_T_dynamic_F_chpl this_chpl7;
  chpl____wide_locale tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_locale tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  locale call_tmp_chpl = NULL;
  chpl____wide_locale tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  qio_channel_ptr_t default_arg_channel_internal_chpl;
  locale call_tmp_chpl2 = NULL;
  chpl____wide_locale tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  channel_T_dynamic_F_chpl ret_tmp_chpl;
  _ref_channel_T_dynamic_F ret_to_arg_ref_tmp__chpl = NULL;
  chpl____wide_locale tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_locale tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__wide_locale call_tmp_chpl3 = NULL;
  chpl_localeID_t call_tmp_chpl4;
  chpl____wide_locale tmp_chpl7 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_syserr tmp_chpl8 = NULL;
  _ref_channel_T_dynamic_F tmp_chpl9 = NULL;
  iostyle rvfDerefTmp_chpl;
  file_chpl rvfDerefTmp_chpl2;
  chpl_bool isdirect_chpl;
  chpl____wide__ref_syserr tmp_chpl10 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_channel_T_dynamic_F tmp_chpl11 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl42 _args_foron_fn_chpl = NULL;
  _ref_syserr tmp_chpl12 = NULL;
  chpl____wide__ref_syserr tmp_chpl13 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_channel_T_dynamic_F tmp_chpl14 = NULL;
  chpl____wide__ref_channel_T_dynamic_F tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  chpl____wide__nilType chpl_macro_tmp_7460;
  chpl____wide_locale chpl_macro_tmp_7461;
  chpl____wide__nilType chpl_macro_tmp_7462;
  chpl____wide_locale chpl_macro_tmp_7463;
  chpl____wide_locale chpl_macro_tmp_7464;
  chpl____wide_locale chpl_macro_tmp_7465;
  chpl____wide_locale chpl_macro_tmp_7466;
  chpl____wide_locale chpl_macro_tmp_7467;
  chpl____wide__ref_syserr chpl_macro_tmp_7468;
  chpl____wide__ref_channel_T_dynamic_F chpl_macro_tmp_7469;
  chpl__class_localson_fn_chpl42_object chpl_macro_tmp_7470;
  chpl____wide__ref_syserr chpl_macro_tmp_7471;
  chpl____wide__ref_channel_T_dynamic_F chpl_macro_tmp_7472;
  local_QIO_CHANNEL_PTR_NULL_chpl = QIO_CHANNEL_PTR_NULL;
  check_chpl(this_chpl6);
  chpl_macro_tmp_7460.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7460.addr = nil;
  chpl_macro_tmp_7461.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7461.addr = NULL;
  tmp_chpl = chpl_macro_tmp_7461;
  (&this_chpl7)->home_chpl = tmp_chpl;
  chpl_macro_tmp_7462.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7462.addr = nil;
  chpl_macro_tmp_7463.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7463.addr = NULL;
  tmp_chpl2 = chpl_macro_tmp_7463;
  (&this_chpl7)->_readWriteThisFromLocale_chpl = tmp_chpl2;
  call_tmp_chpl = ((locale)(nil));
  chpl_macro_tmp_7464.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7464.addr = call_tmp_chpl;
  tmp_chpl3 = chpl_macro_tmp_7464;
  (&this_chpl7)->home_chpl = tmp_chpl3;
  default_arg_channel_internal_chpl = local_QIO_CHANNEL_PTR_NULL_chpl;
  (&this_chpl7)->_channel_internal_chpl = default_arg_channel_internal_chpl;
  call_tmp_chpl2 = ((locale)(nil));
  chpl_macro_tmp_7465.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7465.addr = call_tmp_chpl2;
  tmp_chpl4 = chpl_macro_tmp_7465;
  (&this_chpl7)->_readWriteThisFromLocale_chpl = tmp_chpl4;
  ret_to_arg_ref_tmp__chpl = &ret_tmp_chpl;
  chpl_macro_tmp_7466.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7466.addr = call_tmp_chpl;
  tmp_chpl5 = chpl_macro_tmp_7466;
  chpl_macro_tmp_7467.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7467.addr = call_tmp_chpl2;
  tmp_chpl6 = chpl_macro_tmp_7467;
  _construct_channel_chpl4(tmp_chpl5, default_arg_channel_internal_chpl, tmp_chpl6, &this_chpl7, ret_to_arg_ref_tmp__chpl);
  ret_chpl = ret_tmp_chpl;
  call_tmp_chpl3 = &((this_chpl6)->home_chpl);
  tmp_chpl7 = *(call_tmp_chpl3);
  call_tmp_chpl4 = (&tmp_chpl7)->locale;
  tmp_chpl8 = &_formal_tmp_error_chpl;
  tmp_chpl9 = &ret_chpl;
  rvfDerefTmp_chpl = *(style_chpl);
  rvfDerefTmp_chpl2 = *(this_chpl6);
  isdirect_chpl = chpl_doDirectExecuteOn(&call_tmp_chpl4);
  if (isdirect_chpl) {
    chpl_macro_tmp_7468.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7468.addr = tmp_chpl8;
    tmp_chpl10 = chpl_macro_tmp_7468;
    chpl_macro_tmp_7469.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7469.addr = tmp_chpl9;
    tmp_chpl11 = chpl_macro_tmp_7469;
    on_fn_chpl42(hints_chpl, tmp_chpl10, end_chpl, tmp_chpl11, start_chpl, &rvfDerefTmp_chpl, &rvfDerefTmp_chpl2);
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn_chpl42)(&chpl_macro_tmp_7470));
    (_args_foron_fn_chpl)->_0_rvfDerefTmp_chpl = call_tmp_chpl4;
    (_args_foron_fn_chpl)->_1_rvfDerefTmp_chpl = hints_chpl;
    tmp_chpl12 = &_formal_tmp_error_chpl;
    chpl_macro_tmp_7471.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7471.addr = tmp_chpl12;
    tmp_chpl13 = chpl_macro_tmp_7471;
    (_args_foron_fn_chpl)->_2_tmp_chpl = tmp_chpl13;
    (_args_foron_fn_chpl)->_3_rvfDerefTmp_chpl = end_chpl;
    tmp_chpl14 = &ret_chpl;
    chpl_macro_tmp_7472.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7472.addr = tmp_chpl14;
    tmp_chpl15 = chpl_macro_tmp_7472;
    (_args_foron_fn_chpl)->_4_tmp_chpl = tmp_chpl15;
    (_args_foron_fn_chpl)->_5_rvfDerefTmp_chpl = start_chpl;
    (_args_foron_fn_chpl)->_6_rvfDerefTmp_chpl = rvfDerefTmp_chpl;
    (_args_foron_fn_chpl)->_7_rvfDerefTmp_chpl = rvfDerefTmp_chpl2;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    /*** wrapon_fn_chpl42 ***/ chpl_executeOn(&call_tmp_chpl4, INT32(298), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), sizeof(chpl__class_localson_fn_chpl42_object), INT64(3387), INT32(71));
  }
  *(error_chpl) = _formal_tmp_error_chpl;
  *(_retArg_chpl) = ret_chpl;
  return;
}

/* IO.chpl:3387 */
static void on_fn_chpl41(chpl____wide__ref_channel_T_dynamic_T ret_chpl,
                         int64_t start_chpl,
                         _ref_iostyle style_chpl,
                         _ref_file this_chpl6,
                         int32_t hints_chpl,
                         chpl____wide__ref_syserr _formal_tmp_error_chpl,
                         int64_t end_chpl) {
  channel_T_dynamic_T_chpl call_tmp_chpl;
  channel_T_dynamic_T_chpl ret_tmp_chpl;
  _ref_channel_T_dynamic_T ret_to_arg_ref_tmp__chpl = NULL;
  _ref_file i_f_chpl = NULL;
  _ref_iostyle i_local_style_chpl = NULL;
  _ref_channel_T_dynamic_T _ref_tmp__chpl = NULL;
  ret_to_arg_ref_tmp__chpl = &ret_tmp_chpl;
  i_f_chpl = this_chpl6;
  i_local_style_chpl = style_chpl;
  channel_chpl2(i_f_chpl, _formal_tmp_error_chpl, hints_chpl, start_chpl, end_chpl, i_local_style_chpl, ret_to_arg_ref_tmp__chpl);
  call_tmp_chpl = ret_tmp_chpl;
  chpl___ASSIGN_14(ret_chpl, &ret_tmp_chpl);
  _ref_tmp__chpl = &call_tmp_chpl;
  deinit_chpl3(_ref_tmp__chpl);
  return;
}

/* IO.chpl:3387 */
static void on_fn_chpl42(int32_t hints_chpl,
                         chpl____wide__ref_syserr _formal_tmp_error_chpl,
                         int64_t end_chpl,
                         chpl____wide__ref_channel_T_dynamic_F ret_chpl,
                         int64_t start_chpl,
                         _ref_iostyle style_chpl,
                         _ref_file this_chpl6) {
  channel_T_dynamic_F_chpl call_tmp_chpl;
  channel_T_dynamic_F_chpl ret_tmp_chpl;
  _ref_channel_T_dynamic_F ret_to_arg_ref_tmp__chpl = NULL;
  _ref_file i_f_chpl = NULL;
  _ref_iostyle i_local_style_chpl = NULL;
  _ref_channel_T_dynamic_F _ref_tmp__chpl = NULL;
  ret_to_arg_ref_tmp__chpl = &ret_tmp_chpl;
  i_f_chpl = this_chpl6;
  i_local_style_chpl = style_chpl;
  channel_chpl3(i_f_chpl, _formal_tmp_error_chpl, hints_chpl, start_chpl, end_chpl, i_local_style_chpl, ret_to_arg_ref_tmp__chpl);
  call_tmp_chpl = ret_tmp_chpl;
  chpl___ASSIGN_17(ret_chpl, &ret_tmp_chpl);
  _ref_tmp__chpl = &call_tmp_chpl;
  deinit_chpl5(_ref_tmp__chpl);
  return;
}

/* IO.chpl:3387 */
static void wrapon_fn_chpl42(_class_localson_fn_chpl42 c_chpl) {
  int32_t _1_rvfDerefTmp_chpl;
  chpl____wide__ref_syserr _2_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_channel_T_dynamic_F _4_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  iostyle _6_rvfDerefTmp_chpl;
  iostyle tmp_chpl;
  file_chpl _7_rvfDerefTmp_chpl;
  file_chpl tmp_chpl2;
  _1_rvfDerefTmp_chpl = (c_chpl)->_1_rvfDerefTmp_chpl;
  _2_tmp_chpl = (c_chpl)->_2_tmp_chpl;
  _4_tmp_chpl = (c_chpl)->_4_tmp_chpl;
  tmp_chpl = (c_chpl)->_6_rvfDerefTmp_chpl;
  _6_rvfDerefTmp_chpl = tmp_chpl;
  tmp_chpl2 = (c_chpl)->_7_rvfDerefTmp_chpl;
  _7_rvfDerefTmp_chpl = tmp_chpl2;
  on_fn_chpl42(_1_rvfDerefTmp_chpl, _2_tmp_chpl, (c_chpl)->_3_rvfDerefTmp_chpl, _4_tmp_chpl, (c_chpl)->_5_rvfDerefTmp_chpl, &_6_rvfDerefTmp_chpl, &_7_rvfDerefTmp_chpl);
  return;
}

/* IO.chpl:3387 */
static void wrapon_fn_chpl41(_class_localson_fn_chpl41 c_chpl) {
  chpl____wide__ref_channel_T_dynamic_T _1_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t _2_rvfDerefTmp_chpl;
  iostyle _3_rvfDerefTmp_chpl;
  iostyle tmp_chpl;
  file_chpl _4_rvfDerefTmp_chpl;
  file_chpl tmp_chpl2;
  int32_t _5_rvfDerefTmp_chpl;
  chpl____wide__ref_syserr _6_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t _7_rvfDerefTmp_chpl;
  _1_tmp_chpl = (c_chpl)->_1_tmp_chpl;
  _2_rvfDerefTmp_chpl = (c_chpl)->_2_rvfDerefTmp_chpl;
  tmp_chpl = (c_chpl)->_3_rvfDerefTmp_chpl;
  _3_rvfDerefTmp_chpl = tmp_chpl;
  tmp_chpl2 = (c_chpl)->_4_rvfDerefTmp_chpl;
  _4_rvfDerefTmp_chpl = tmp_chpl2;
  _5_rvfDerefTmp_chpl = (c_chpl)->_5_rvfDerefTmp_chpl;
  _6_tmp_chpl = (c_chpl)->_6_tmp_chpl;
  _7_rvfDerefTmp_chpl = (c_chpl)->_7_rvfDerefTmp_chpl;
  on_fn_chpl41(_1_tmp_chpl, _2_rvfDerefTmp_chpl, &_3_rvfDerefTmp_chpl, &_4_rvfDerefTmp_chpl, _5_rvfDerefTmp_chpl, _6_tmp_chpl, _7_rvfDerefTmp_chpl);
  return;
}

/* IO.chpl:3395 */
static void writer_chpl3(_ref_file this_chpl6,
                         int64_t start_chpl,
                         int64_t end_chpl,
                         int32_t hints_chpl,
                         _ref_iostyle style_chpl,
                         _ref_channel_T_dynamic_T _retArg_chpl) {
  string local__str_literal_2531_chpl;
  syserr err_chpl;
  syserr call_tmp_chpl;
  channel_T_dynamic_T_chpl ret_tmp_chpl;
  _ref_channel_T_dynamic_T ret_to_arg_ref_tmp__chpl = NULL;
  _ref_syserr _ref_tmp__chpl = NULL;
  int32_t call_tmp_chpl2;
  chpl_bool call_tmp_chpl3;
  string call_tmp_chpl4;
  string ret_tmp_chpl2;
  _ref_string ret_to_arg_ref_tmp__chpl2 = NULL;
  _ref_string _ref_tmp__chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_7473;
  local__str_literal_2531_chpl /* "in file.writer" */ = _str_literal_2531 /* "in file.writer" */;
  call_tmp_chpl = qio_int_to_err(INT32(0));
  err_chpl = call_tmp_chpl;
  ret_to_arg_ref_tmp__chpl = &ret_tmp_chpl;
  _ref_tmp__chpl = &err_chpl;
  writer_chpl(this_chpl6, _ref_tmp__chpl, start_chpl, end_chpl, hints_chpl, style_chpl, ret_to_arg_ref_tmp__chpl);
  call_tmp_chpl2 = qio_err_iserr(err_chpl);
  call_tmp_chpl3 = (call_tmp_chpl2 != INT32(0));
  if (call_tmp_chpl3) {
    ret_to_arg_ref_tmp__chpl2 = &ret_tmp_chpl2;
    tryGetPath_chpl(this_chpl6, ret_to_arg_ref_tmp__chpl2);
    call_tmp_chpl4 = ret_tmp_chpl2;
    ioerror_chpl2(err_chpl, &local__str_literal_2531_chpl /* "in file.writer" */, &ret_tmp_chpl2);
    _ref_tmp__chpl2 = &call_tmp_chpl4;
    chpl_macro_tmp_7473.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7473.addr = _ref_tmp__chpl2;
    tmp_chpl = chpl_macro_tmp_7473;
    deinit44(tmp_chpl);
  }
  *(_retArg_chpl) = ret_tmp_chpl;
  return;
}

/* IO.chpl:3395 */
static void writer_chpl4(_ref_file this_chpl6,
                         int64_t start_chpl,
                         int64_t end_chpl,
                         int32_t hints_chpl,
                         _ref_iostyle style_chpl,
                         _ref_channel_T_dynamic_F _retArg_chpl) {
  string local__str_literal_2531_chpl;
  syserr err_chpl;
  syserr call_tmp_chpl;
  channel_T_dynamic_F_chpl ret_tmp_chpl;
  _ref_channel_T_dynamic_F ret_to_arg_ref_tmp__chpl = NULL;
  _ref_syserr _ref_tmp__chpl = NULL;
  int32_t call_tmp_chpl2;
  chpl_bool call_tmp_chpl3;
  string call_tmp_chpl4;
  string ret_tmp_chpl2;
  _ref_string ret_to_arg_ref_tmp__chpl2 = NULL;
  _ref_string _ref_tmp__chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_7474;
  local__str_literal_2531_chpl /* "in file.writer" */ = _str_literal_2531 /* "in file.writer" */;
  call_tmp_chpl = qio_int_to_err(INT32(0));
  err_chpl = call_tmp_chpl;
  ret_to_arg_ref_tmp__chpl = &ret_tmp_chpl;
  _ref_tmp__chpl = &err_chpl;
  writer_chpl2(this_chpl6, _ref_tmp__chpl, start_chpl, end_chpl, hints_chpl, style_chpl, ret_to_arg_ref_tmp__chpl);
  call_tmp_chpl2 = qio_err_iserr(err_chpl);
  call_tmp_chpl3 = (call_tmp_chpl2 != INT32(0));
  if (call_tmp_chpl3) {
    ret_to_arg_ref_tmp__chpl2 = &ret_tmp_chpl2;
    tryGetPath_chpl(this_chpl6, ret_to_arg_ref_tmp__chpl2);
    call_tmp_chpl4 = ret_tmp_chpl2;
    ioerror_chpl2(err_chpl, &local__str_literal_2531_chpl /* "in file.writer" */, &ret_tmp_chpl2);
    _ref_tmp__chpl2 = &call_tmp_chpl4;
    chpl_macro_tmp_7474.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7474.addr = _ref_tmp__chpl2;
    tmp_chpl = chpl_macro_tmp_7474;
    deinit44(tmp_chpl);
  }
  *(_retArg_chpl) = ret_tmp_chpl;
  return;
}

/* IO.chpl:3474 */
static syserr _write_text_internal_chpl(qio_channel_ptr_t _channel_internal_chpl,
                                        uint64_t x_chpl) {
  syserr call_tmp_chpl;
  call_tmp_chpl = qio_channel_print_int(((int32_t)(UINT8(false))), _channel_internal_chpl, &x_chpl, ((uint64_t)(INT64(8))), ((int32_t)(UINT8(false))));
  return call_tmp_chpl;
}

/* IO.chpl:3474 */
static syserr _write_text_internal_chpl4(qio_channel_ptr_t _channel_internal_chpl,
                                         int64_t x_chpl) {
  syserr call_tmp_chpl;
  call_tmp_chpl = qio_channel_print_int(((int32_t)(UINT8(false))), _channel_internal_chpl, &x_chpl, ((uint64_t)(INT64(8))), ((int32_t)(UINT8(true))));
  return call_tmp_chpl;
}

/* IO.chpl:3474 */
static syserr _write_text_internal_chpl3(qio_channel_ptr_t _channel_internal_chpl,
                                         chpl____wide__ref_string x_chpl) {
  string local__str_literal_337_chpl;
  string local_x_chpl;
  string ret_chpl;
  int32_t tmp_chpl;
  chpl_bool call_tmp_chpl;
  string ret_tmp_chpl;
  _ref_string ret_to_arg_ref_tmp__chpl = NULL;
  chpl____wide__ref_string i_s_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  string type_tmp_chpl;
  string this_chpl6;
  c_ptr_uint8_t call_tmp_chpl2 = NULL;
  int32_t default_arglocale_id_chpl;
  string ret_tmp_chpl2;
  _ref_string ret_to_arg_ref_tmp__chpl2 = NULL;
  _ref_string _ref_tmp__chpl = NULL;
  chpl____wide__ref_string i_rhs_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp_chpl3;
  c_ptr_uint8_t coerce_tmp_chpl = NULL;
  syserr call_tmp_chpl4;
  _ref_string _ref_tmp__chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_int32_t chpl_macro_tmp_7475;
  chpl____wide__ref_string chpl_macro_tmp_7476;
  chpl____wide__ref_string chpl_macro_tmp_7477;
  local__str_literal_337_chpl /* "Cannot call .c_str() on a remote string" */ = _str_literal_337 /* "Cannot call .c_str() on a remote string" */;
  chpl_macro_tmp_7475.locale = (x_chpl).locale;
  chpl_macro_tmp_7475.addr = &(((x_chpl).addr)->locale_id);
  chpl_gen_comm_get(((void*)(&tmp_chpl)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_7475).locale), INT64(0), INT32(0)), (chpl_macro_tmp_7475).addr, sizeof(int32_t), -1, COMMID(56), INT64(3497), INT64(71));
  call_tmp_chpl = (tmp_chpl == chpl_nodeID);
  if (call_tmp_chpl) {
    ret_to_arg_ref_tmp__chpl = &ret_tmp_chpl;
    i_s_chpl = x_chpl;
    string2(i_s_chpl, UINT8(false), ret_to_arg_ref_tmp__chpl);
    ret_chpl = ret_tmp_chpl;
    goto _end_localize_chpl;
  } else {
    (&this_chpl6)->len = INT64(0);
    (&this_chpl6)->_size = INT64(0);
    (&this_chpl6)->buff = nil;
    (&this_chpl6)->owned = UINT8(false);
    (&this_chpl6)->locale_id = INT32(0);
    (&this_chpl6)->len = INT64(0);
    (&this_chpl6)->_size = INT64(0);
    call_tmp_chpl2 = ((c_ptr_uint8_t)(nil));
    (&this_chpl6)->buff = call_tmp_chpl2;
    (&this_chpl6)->owned = UINT8(true);
    default_arglocale_id_chpl = chpl_nodeID;
    (&this_chpl6)->locale_id = default_arglocale_id_chpl;
    ret_to_arg_ref_tmp__chpl2 = &ret_tmp_chpl2;
    _construct_string(INT64(0), INT64(0), call_tmp_chpl2, UINT8(true), default_arglocale_id_chpl, &this_chpl6, ret_to_arg_ref_tmp__chpl2);
    type_tmp_chpl = ret_tmp_chpl2;
    _ref_tmp__chpl = &type_tmp_chpl;
    i_rhs_chpl = x_chpl;
    chpl_macro_tmp_7476.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7476.addr = _ref_tmp__chpl;
    tmp_chpl2 = chpl_macro_tmp_7476;
    chpl___ASSIGN_13(tmp_chpl2, i_rhs_chpl);
    ret_chpl = type_tmp_chpl;
    goto _end_localize_chpl;
  }
  _end_localize_chpl:;
  local_x_chpl = ret_chpl;
  call_tmp_chpl3 = ((&local_x_chpl)->locale_id != chpl_nodeID);
  if (call_tmp_chpl3) {
    halt(&local__str_literal_337_chpl /* "Cannot call .c_str() on a remote string" */, INT64(3498), INT32(71));
  }
  coerce_tmp_chpl = (&local_x_chpl)->buff;
  call_tmp_chpl4 = qio_channel_print_string(((int32_t)(UINT8(false))), _channel_internal_chpl, ((c_string)(((c_void_ptr)(coerce_tmp_chpl)))), (&local_x_chpl)->len);
  _ref_tmp__chpl2 = &local_x_chpl;
  chpl_macro_tmp_7477.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7477.addr = _ref_tmp__chpl2;
  tmp_chpl3 = chpl_macro_tmp_7477;
  deinit44(tmp_chpl3);
  return call_tmp_chpl4;
}

/* IO.chpl:3474 */
static syserr _write_text_internal_chpl2(qio_channel_ptr_t _channel_internal_chpl,
                                         chpl_bool x_chpl) {
  syserr ret_chpl;
  syserr call_tmp_chpl;
  syserr call_tmp_chpl2;
  if (x_chpl) {
    call_tmp_chpl = qio_channel_print_literal(((int32_t)(UINT8(false))), _channel_internal_chpl, "true", INT64(4));
    ret_chpl = call_tmp_chpl;
    goto _end__write_text_internal_chpl;
  } else {
    call_tmp_chpl2 = qio_channel_print_literal(((int32_t)(UINT8(false))), _channel_internal_chpl, "false", INT64(5));
    ret_chpl = call_tmp_chpl2;
    goto _end__write_text_internal_chpl;
  }
  _end__write_text_internal_chpl:;
  return ret_chpl;
}

/* IO.chpl:3817 */
static void writeIt_chpl3(_ref_channel_T_dynamic_F this_chpl6,
                          chpl_bool x_chpl) {
  chpl____wide_locale ret_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_locale ret_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp_chpl2;
  chpl____wide_object tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t _autoCopy_tmp__chpl;
  chpl____wide_locale call_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__wide_locale call_tmp_chpl4 = NULL;
  chpl_localeID_t call_tmp_chpl5;
  chpl____wide_locale tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_channel_T_dynamic_F tmp_chpl3 = NULL;
  chpl____wide_locale rvfDerefTmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect_chpl;
  chpl____wide__ref_channel_T_dynamic_F tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl46 _args_foron_fn_chpl = NULL;
  _ref_channel_T_dynamic_F tmp_chpl5 = NULL;
  chpl____wide__ref_channel_T_dynamic_F tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  chpl____wide_object chpl_macro_tmp_7478;
  chpl____wide__nilType chpl_macro_tmp_7479;
  chpl____wide_object chpl_macro_tmp_7480;
  chpl____wide__ref_channel_T_dynamic_F chpl_macro_tmp_7481;
  chpl__class_localson_fn_chpl46_object chpl_macro_tmp_7482;
  chpl____wide__ref_channel_T_dynamic_F chpl_macro_tmp_7483;
  ret_chpl2 = (this_chpl6)->_readWriteThisFromLocale_chpl;
  ret_chpl = ret_chpl2;
  chpl_macro_tmp_7478.locale = (&ret_chpl2)->locale;
  chpl_macro_tmp_7478.addr = ((object)((&ret_chpl2)->addr));
  call_tmp_chpl = chpl_macro_tmp_7478;
  chpl_macro_tmp_7479.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7479.addr = nil;
  chpl_macro_tmp_7480.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7480.addr = NULL;
  tmp_chpl = chpl_macro_tmp_7480;
  call_tmp_chpl2 = (! (((&call_tmp_chpl)->addr != (&tmp_chpl)->addr) || ((!(! (&call_tmp_chpl)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp_chpl)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&tmp_chpl)->locale), INT64(0), INT32(0))))));
  if (call_tmp_chpl2) {
    _autoCopy_tmp__chpl = chpl_rt_buildLocaleID(chpl_nodeID, c_sublocid_any);
    call_tmp_chpl3 = chpl_localeID_to_locale(&_autoCopy_tmp__chpl);
    ret_chpl = call_tmp_chpl3;
  }
  call_tmp_chpl4 = &((this_chpl6)->home_chpl);
  tmp_chpl2 = *(call_tmp_chpl4);
  call_tmp_chpl5 = (&tmp_chpl2)->locale;
  tmp_chpl3 = this_chpl6;
  rvfDerefTmp_chpl = ret_chpl;
  isdirect_chpl = chpl_doDirectExecuteOn(&call_tmp_chpl5);
  if (isdirect_chpl) {
    chpl_macro_tmp_7481.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7481.addr = tmp_chpl3;
    tmp_chpl4 = chpl_macro_tmp_7481;
    on_fn_chpl45(tmp_chpl4, x_chpl, rvfDerefTmp_chpl);
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn_chpl46)(&chpl_macro_tmp_7482));
    (_args_foron_fn_chpl)->_0_rvfDerefTmp_chpl = call_tmp_chpl5;
    tmp_chpl5 = this_chpl6;
    chpl_macro_tmp_7483.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7483.addr = tmp_chpl5;
    tmp_chpl6 = chpl_macro_tmp_7483;
    (_args_foron_fn_chpl)->_1_tmp_chpl = tmp_chpl6;
    (_args_foron_fn_chpl)->_2_rvfDerefTmp_chpl = x_chpl;
    (_args_foron_fn_chpl)->_3_rvfDerefTmp_chpl = rvfDerefTmp_chpl;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    /*** wrapon_fn_chpl44 ***/ chpl_executeOn(&call_tmp_chpl5, INT32(300), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), sizeof(chpl__class_localson_fn_chpl46_object), INT64(3820), INT32(71));
  }
  return;
}

/* IO.chpl:3817 */
static void writeIt_chpl(_ref_channel_T_dynamic_F this_chpl6,
                         _ref_ioLiteral x_chpl) {
  chpl____wide_locale ret_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_locale ret_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp_chpl2;
  chpl____wide_object tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t _autoCopy_tmp__chpl;
  chpl____wide_locale call_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__wide_locale call_tmp_chpl4 = NULL;
  chpl_localeID_t call_tmp_chpl5;
  chpl____wide_locale tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_channel_T_dynamic_F tmp_chpl3 = NULL;
  _ref_ioLiteral tmp_chpl4 = NULL;
  chpl____wide_locale rvfDerefTmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect_chpl;
  chpl____wide__ref_channel_T_dynamic_F tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_ioLiteral tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl43 _args_foron_fn_chpl = NULL;
  _ref_channel_T_dynamic_F tmp_chpl7 = NULL;
  chpl____wide__ref_channel_T_dynamic_F tmp_chpl8 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_ioLiteral tmp_chpl9 = NULL;
  chpl____wide__ref_ioLiteral tmp_chpl10 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  chpl____wide_object chpl_macro_tmp_7484;
  chpl____wide__nilType chpl_macro_tmp_7485;
  chpl____wide_object chpl_macro_tmp_7486;
  chpl____wide__ref_channel_T_dynamic_F chpl_macro_tmp_7487;
  chpl____wide__ref_ioLiteral chpl_macro_tmp_7488;
  chpl__class_localson_fn_chpl43_object chpl_macro_tmp_7489;
  chpl____wide__ref_channel_T_dynamic_F chpl_macro_tmp_7490;
  chpl____wide__ref_ioLiteral chpl_macro_tmp_7491;
  ret_chpl2 = (this_chpl6)->_readWriteThisFromLocale_chpl;
  ret_chpl = ret_chpl2;
  chpl_macro_tmp_7484.locale = (&ret_chpl2)->locale;
  chpl_macro_tmp_7484.addr = ((object)((&ret_chpl2)->addr));
  call_tmp_chpl = chpl_macro_tmp_7484;
  chpl_macro_tmp_7485.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7485.addr = nil;
  chpl_macro_tmp_7486.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7486.addr = NULL;
  tmp_chpl = chpl_macro_tmp_7486;
  call_tmp_chpl2 = (! (((&call_tmp_chpl)->addr != (&tmp_chpl)->addr) || ((!(! (&call_tmp_chpl)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp_chpl)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&tmp_chpl)->locale), INT64(0), INT32(0))))));
  if (call_tmp_chpl2) {
    _autoCopy_tmp__chpl = chpl_rt_buildLocaleID(chpl_nodeID, c_sublocid_any);
    call_tmp_chpl3 = chpl_localeID_to_locale(&_autoCopy_tmp__chpl);
    ret_chpl = call_tmp_chpl3;
  }
  call_tmp_chpl4 = &((this_chpl6)->home_chpl);
  tmp_chpl2 = *(call_tmp_chpl4);
  call_tmp_chpl5 = (&tmp_chpl2)->locale;
  tmp_chpl3 = this_chpl6;
  tmp_chpl4 = x_chpl;
  rvfDerefTmp_chpl = ret_chpl;
  isdirect_chpl = chpl_doDirectExecuteOn(&call_tmp_chpl5);
  if (isdirect_chpl) {
    chpl_macro_tmp_7487.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7487.addr = tmp_chpl3;
    tmp_chpl5 = chpl_macro_tmp_7487;
    chpl_macro_tmp_7488.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7488.addr = tmp_chpl4;
    tmp_chpl6 = chpl_macro_tmp_7488;
    on_fn_chpl44(tmp_chpl5, tmp_chpl6, rvfDerefTmp_chpl);
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn_chpl43)(&chpl_macro_tmp_7489));
    (_args_foron_fn_chpl)->_0_rvfDerefTmp_chpl = call_tmp_chpl5;
    tmp_chpl7 = this_chpl6;
    chpl_macro_tmp_7490.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7490.addr = tmp_chpl7;
    tmp_chpl8 = chpl_macro_tmp_7490;
    (_args_foron_fn_chpl)->_1_tmp_chpl = tmp_chpl8;
    tmp_chpl9 = x_chpl;
    chpl_macro_tmp_7491.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7491.addr = tmp_chpl9;
    tmp_chpl10 = chpl_macro_tmp_7491;
    (_args_foron_fn_chpl)->_2_tmp_chpl = tmp_chpl10;
    (_args_foron_fn_chpl)->_3_rvfDerefTmp_chpl = rvfDerefTmp_chpl;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    /*** wrapon_fn_chpl46 ***/ chpl_executeOn(&call_tmp_chpl5, INT32(302), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), sizeof(chpl__class_localson_fn_chpl43_object), INT64(3820), INT32(71));
  }
  return;
}

/* IO.chpl:3817 */
static void writeIt_chpl2(_ref_channel_T_dynamic_F this_chpl6,
                          int64_t x_chpl) {
  chpl____wide_locale ret_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_locale ret_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp_chpl2;
  chpl____wide_object tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t _autoCopy_tmp__chpl;
  chpl____wide_locale call_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__wide_locale call_tmp_chpl4 = NULL;
  chpl_localeID_t call_tmp_chpl5;
  chpl____wide_locale tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_channel_T_dynamic_F tmp_chpl3 = NULL;
  chpl____wide_locale rvfDerefTmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect_chpl;
  chpl____wide__ref_channel_T_dynamic_F tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl45 _args_foron_fn_chpl = NULL;
  _ref_channel_T_dynamic_F tmp_chpl5 = NULL;
  chpl____wide__ref_channel_T_dynamic_F tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  chpl____wide_object chpl_macro_tmp_7492;
  chpl____wide__nilType chpl_macro_tmp_7493;
  chpl____wide_object chpl_macro_tmp_7494;
  chpl____wide__ref_channel_T_dynamic_F chpl_macro_tmp_7495;
  chpl__class_localson_fn_chpl45_object chpl_macro_tmp_7496;
  chpl____wide__ref_channel_T_dynamic_F chpl_macro_tmp_7497;
  ret_chpl2 = (this_chpl6)->_readWriteThisFromLocale_chpl;
  ret_chpl = ret_chpl2;
  chpl_macro_tmp_7492.locale = (&ret_chpl2)->locale;
  chpl_macro_tmp_7492.addr = ((object)((&ret_chpl2)->addr));
  call_tmp_chpl = chpl_macro_tmp_7492;
  chpl_macro_tmp_7493.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7493.addr = nil;
  chpl_macro_tmp_7494.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7494.addr = NULL;
  tmp_chpl = chpl_macro_tmp_7494;
  call_tmp_chpl2 = (! (((&call_tmp_chpl)->addr != (&tmp_chpl)->addr) || ((!(! (&call_tmp_chpl)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp_chpl)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&tmp_chpl)->locale), INT64(0), INT32(0))))));
  if (call_tmp_chpl2) {
    _autoCopy_tmp__chpl = chpl_rt_buildLocaleID(chpl_nodeID, c_sublocid_any);
    call_tmp_chpl3 = chpl_localeID_to_locale(&_autoCopy_tmp__chpl);
    ret_chpl = call_tmp_chpl3;
  }
  call_tmp_chpl4 = &((this_chpl6)->home_chpl);
  tmp_chpl2 = *(call_tmp_chpl4);
  call_tmp_chpl5 = (&tmp_chpl2)->locale;
  tmp_chpl3 = this_chpl6;
  rvfDerefTmp_chpl = ret_chpl;
  isdirect_chpl = chpl_doDirectExecuteOn(&call_tmp_chpl5);
  if (isdirect_chpl) {
    chpl_macro_tmp_7495.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7495.addr = tmp_chpl3;
    tmp_chpl4 = chpl_macro_tmp_7495;
    on_fn_chpl43(tmp_chpl4, x_chpl, rvfDerefTmp_chpl);
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn_chpl45)(&chpl_macro_tmp_7496));
    (_args_foron_fn_chpl)->_0_rvfDerefTmp_chpl = call_tmp_chpl5;
    tmp_chpl5 = this_chpl6;
    chpl_macro_tmp_7497.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7497.addr = tmp_chpl5;
    tmp_chpl6 = chpl_macro_tmp_7497;
    (_args_foron_fn_chpl)->_1_tmp_chpl = tmp_chpl6;
    (_args_foron_fn_chpl)->_2_rvfDerefTmp_chpl = x_chpl;
    (_args_foron_fn_chpl)->_3_rvfDerefTmp_chpl = rvfDerefTmp_chpl;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    /*** wrapon_fn_chpl43 ***/ chpl_executeOn(&call_tmp_chpl5, INT32(299), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), sizeof(chpl__class_localson_fn_chpl45_object), INT64(3820), INT32(71));
  }
  return;
}

/* IO.chpl:3817 */
static void writeIt_chpl4(_ref_channel_T_dynamic_F this_chpl6,
                          uint64_t x_chpl) {
  chpl____wide_locale ret_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_locale ret_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp_chpl2;
  chpl____wide_object tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t _autoCopy_tmp__chpl;
  chpl____wide_locale call_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__wide_locale call_tmp_chpl4 = NULL;
  chpl_localeID_t call_tmp_chpl5;
  chpl____wide_locale tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_channel_T_dynamic_F tmp_chpl3 = NULL;
  chpl____wide_locale rvfDerefTmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect_chpl;
  chpl____wide__ref_channel_T_dynamic_F tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl44 _args_foron_fn_chpl = NULL;
  _ref_channel_T_dynamic_F tmp_chpl5 = NULL;
  chpl____wide__ref_channel_T_dynamic_F tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  chpl____wide_object chpl_macro_tmp_7498;
  chpl____wide__nilType chpl_macro_tmp_7499;
  chpl____wide_object chpl_macro_tmp_7500;
  chpl____wide__ref_channel_T_dynamic_F chpl_macro_tmp_7501;
  chpl__class_localson_fn_chpl44_object chpl_macro_tmp_7502;
  chpl____wide__ref_channel_T_dynamic_F chpl_macro_tmp_7503;
  ret_chpl2 = (this_chpl6)->_readWriteThisFromLocale_chpl;
  ret_chpl = ret_chpl2;
  chpl_macro_tmp_7498.locale = (&ret_chpl2)->locale;
  chpl_macro_tmp_7498.addr = ((object)((&ret_chpl2)->addr));
  call_tmp_chpl = chpl_macro_tmp_7498;
  chpl_macro_tmp_7499.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7499.addr = nil;
  chpl_macro_tmp_7500.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7500.addr = NULL;
  tmp_chpl = chpl_macro_tmp_7500;
  call_tmp_chpl2 = (! (((&call_tmp_chpl)->addr != (&tmp_chpl)->addr) || ((!(! (&call_tmp_chpl)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp_chpl)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&tmp_chpl)->locale), INT64(0), INT32(0))))));
  if (call_tmp_chpl2) {
    _autoCopy_tmp__chpl = chpl_rt_buildLocaleID(chpl_nodeID, c_sublocid_any);
    call_tmp_chpl3 = chpl_localeID_to_locale(&_autoCopy_tmp__chpl);
    ret_chpl = call_tmp_chpl3;
  }
  call_tmp_chpl4 = &((this_chpl6)->home_chpl);
  tmp_chpl2 = *(call_tmp_chpl4);
  call_tmp_chpl5 = (&tmp_chpl2)->locale;
  tmp_chpl3 = this_chpl6;
  rvfDerefTmp_chpl = ret_chpl;
  isdirect_chpl = chpl_doDirectExecuteOn(&call_tmp_chpl5);
  if (isdirect_chpl) {
    chpl_macro_tmp_7501.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7501.addr = tmp_chpl3;
    tmp_chpl4 = chpl_macro_tmp_7501;
    on_fn_chpl46(tmp_chpl4, x_chpl, rvfDerefTmp_chpl);
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn_chpl44)(&chpl_macro_tmp_7502));
    (_args_foron_fn_chpl)->_0_rvfDerefTmp_chpl = call_tmp_chpl5;
    tmp_chpl5 = this_chpl6;
    chpl_macro_tmp_7503.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7503.addr = tmp_chpl5;
    tmp_chpl6 = chpl_macro_tmp_7503;
    (_args_foron_fn_chpl)->_1_tmp_chpl = tmp_chpl6;
    (_args_foron_fn_chpl)->_2_rvfDerefTmp_chpl = x_chpl;
    (_args_foron_fn_chpl)->_3_rvfDerefTmp_chpl = rvfDerefTmp_chpl;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    /*** wrapon_fn_chpl45 ***/ chpl_executeOn(&call_tmp_chpl5, INT32(301), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), sizeof(chpl__class_localson_fn_chpl44_object), INT64(3820), INT32(71));
  }
  return;
}

/* IO.chpl:3820 */
static void wrapon_fn_chpl45(_class_localson_fn_chpl44 c_chpl) {
  chpl____wide__ref_channel_T_dynamic_F _1_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_locale _3_rvfDerefTmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _1_tmp_chpl = (c_chpl)->_1_tmp_chpl;
  _3_rvfDerefTmp_chpl = (c_chpl)->_3_rvfDerefTmp_chpl;
  on_fn_chpl46(_1_tmp_chpl, (c_chpl)->_2_rvfDerefTmp_chpl, _3_rvfDerefTmp_chpl);
  return;
}

/* IO.chpl:3820 */
static void on_fn_chpl43(chpl____wide__ref_channel_T_dynamic_F this_chpl6,
                         int64_t x_chpl,
                         chpl____wide_locale origLocale_chpl) {
  string local__str_literal_2497_chpl;
  syserr call_tmp_chpl;
  int32_t call_tmp_chpl2;
  chpl_bool call_tmp_chpl3;
  syserr call_tmp_chpl4;
  qio_channel_ptr_t coerce_tmp_chpl;
  qio_channel_ptr_t tmp_chpl;
  int32_t call_tmp_chpl5;
  chpl_bool call_tmp_chpl6;
  qio_channel_ptr_t coerce_tmp_chpl2;
  qio_channel_ptr_t tmp_chpl2;
  syserr e_chpl;
  uint8_t call_tmp_chpl7;
  uint8_t call_tmp_chpl8;
  chpl_bool call_tmp_chpl9;
  chpl_bool call_tmp_chpl10;
  syserr call_tmp_chpl11;
  chpl_bool call_tmp_chpl12;
  syserr call_tmp_chpl13;
  syserr call_tmp_chpl14;
  syserr call_tmp_chpl15;
  qio_channel_ptr_t coerce_tmp_chpl3;
  qio_channel_ptr_t tmp_chpl3;
  chpl____wide__ref_qio_channel_ptr_t chpl_macro_tmp_7504;
  chpl____wide__ref_qio_channel_ptr_t chpl_macro_tmp_7505;
  chpl____wide__ref_qio_channel_ptr_t chpl_macro_tmp_7506;
  local__str_literal_2497_chpl /* "in lock" */ = _str_literal_2497 /* "in lock" */;
  qio_int_to_err(INT32(0));
  call_tmp_chpl = qio_int_to_err(INT32(0));
  call_tmp_chpl2 = qio_err_iserr(call_tmp_chpl);
  call_tmp_chpl3 = (call_tmp_chpl2 != INT32(0));
  if (call_tmp_chpl3) {
    _ch_ioerror_chpl3(this_chpl6, call_tmp_chpl, &local__str_literal_2497_chpl /* "in lock" */);
  }
  chpl_macro_tmp_7504.locale = (this_chpl6).locale;
  chpl_macro_tmp_7504.addr = &(((this_chpl6).addr)->_channel_internal_chpl);
  chpl_gen_comm_get(((void*)(&tmp_chpl)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_7504).locale), INT64(0), INT32(0)), (chpl_macro_tmp_7504).addr, sizeof(qio_channel_ptr_t), -1, COMMID(57), INT64(3823), INT64(71));
  coerce_tmp_chpl = tmp_chpl;
  call_tmp_chpl4 = qio_channel_error(coerce_tmp_chpl);
  call_tmp_chpl5 = qio_err_iserr(call_tmp_chpl4);
  call_tmp_chpl6 = (call_tmp_chpl5 == INT32(0));
  if (call_tmp_chpl6) {
    chpl_macro_tmp_7505.locale = (this_chpl6).locale;
    chpl_macro_tmp_7505.addr = &(((this_chpl6).addr)->_channel_internal_chpl);
    chpl_gen_comm_get(((void*)(&tmp_chpl2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_7505).locale), INT64(0), INT32(0)), (chpl_macro_tmp_7505).addr, sizeof(qio_channel_ptr_t), -1, COMMID(58), INT64(3825), INT64(71));
    coerce_tmp_chpl2 = tmp_chpl2;
    qio_int_to_err(INT32(0));
    call_tmp_chpl7 = qio_channel_binary(coerce_tmp_chpl2);
    call_tmp_chpl8 = qio_channel_byteorder(coerce_tmp_chpl2);
    call_tmp_chpl9 = (call_tmp_chpl7 != UINT8(0));
    if (call_tmp_chpl9) {
      call_tmp_chpl10 = (((int16_t)(call_tmp_chpl8)) == ((int16_t)(iokind_chpl_big_chpl)));
      if (call_tmp_chpl10) {
        call_tmp_chpl11 = qio_channel_write_int64(((int32_t)(UINT8(false))), ((int32_t)(iokind_chpl_big_chpl)), coerce_tmp_chpl2, x_chpl);
        e_chpl = call_tmp_chpl11;
      } else {
        call_tmp_chpl12 = (((int16_t)(call_tmp_chpl8)) == ((int16_t)(iokind_chpl_little_chpl)));
        if (call_tmp_chpl12) {
          call_tmp_chpl13 = qio_channel_write_int64(((int32_t)(UINT8(false))), ((int32_t)(iokind_chpl_little_chpl)), coerce_tmp_chpl2, x_chpl);
          e_chpl = call_tmp_chpl13;
        } else {
          call_tmp_chpl14 = qio_channel_write_int64(((int32_t)(UINT8(false))), ((int32_t)(iokind_chpl_native_chpl)), coerce_tmp_chpl2, x_chpl);
          e_chpl = call_tmp_chpl14;
        }
      }
    } else {
      call_tmp_chpl15 = _write_text_internal_chpl4(coerce_tmp_chpl2, x_chpl);
      e_chpl = call_tmp_chpl15;
    }
    chpl_macro_tmp_7506.locale = (this_chpl6).locale;
    chpl_macro_tmp_7506.addr = &(((this_chpl6).addr)->_channel_internal_chpl);
    chpl_gen_comm_get(((void*)(&tmp_chpl3)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_7506).locale), INT64(0), INT32(0)), (chpl_macro_tmp_7506).addr, sizeof(qio_channel_ptr_t), -1, COMMID(59), INT64(3826), INT64(71));
    coerce_tmp_chpl3 = tmp_chpl3;
    _qio_channel_set_error_unlocked(coerce_tmp_chpl3, e_chpl);
  }
  return;
}

/* IO.chpl:3820 */
static void wrapon_fn_chpl44(_class_localson_fn_chpl46 c_chpl) {
  chpl____wide__ref_channel_T_dynamic_F _1_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool _2_rvfDerefTmp_chpl;
  chpl____wide_locale _3_rvfDerefTmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _1_tmp_chpl = (c_chpl)->_1_tmp_chpl;
  _2_rvfDerefTmp_chpl = (c_chpl)->_2_rvfDerefTmp_chpl;
  _3_rvfDerefTmp_chpl = (c_chpl)->_3_rvfDerefTmp_chpl;
  on_fn_chpl45(_1_tmp_chpl, _2_rvfDerefTmp_chpl, _3_rvfDerefTmp_chpl);
  return;
}

/* IO.chpl:3820 */
static void wrapon_fn_chpl43(_class_localson_fn_chpl45 c_chpl) {
  chpl____wide__ref_channel_T_dynamic_F _1_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_locale _3_rvfDerefTmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _1_tmp_chpl = (c_chpl)->_1_tmp_chpl;
  _3_rvfDerefTmp_chpl = (c_chpl)->_3_rvfDerefTmp_chpl;
  on_fn_chpl43(_1_tmp_chpl, (c_chpl)->_2_rvfDerefTmp_chpl, _3_rvfDerefTmp_chpl);
  return;
}

/* IO.chpl:3820 */
static void on_fn_chpl45(chpl____wide__ref_channel_T_dynamic_F this_chpl6,
                         chpl_bool x_chpl,
                         chpl____wide_locale origLocale_chpl) {
  string local__str_literal_2497_chpl;
  syserr call_tmp_chpl;
  int32_t call_tmp_chpl2;
  chpl_bool call_tmp_chpl3;
  syserr call_tmp_chpl4;
  qio_channel_ptr_t coerce_tmp_chpl;
  qio_channel_ptr_t tmp_chpl;
  int32_t call_tmp_chpl5;
  chpl_bool call_tmp_chpl6;
  qio_channel_ptr_t coerce_tmp_chpl2;
  qio_channel_ptr_t tmp_chpl2;
  syserr e_chpl;
  uint8_t call_tmp_chpl7;
  uint8_t call_tmp_chpl8;
  chpl_bool call_tmp_chpl9;
  chpl_bool call_tmp_chpl10;
  uint8_t ret_chpl;
  syserr call_tmp_chpl11;
  chpl_bool call_tmp_chpl12;
  uint8_t ret_chpl2;
  syserr call_tmp_chpl13;
  uint8_t ret_chpl3;
  syserr call_tmp_chpl14;
  syserr call_tmp_chpl15;
  qio_channel_ptr_t coerce_tmp_chpl3;
  qio_channel_ptr_t tmp_chpl3;
  chpl____wide__ref_qio_channel_ptr_t chpl_macro_tmp_7507;
  chpl____wide__ref_qio_channel_ptr_t chpl_macro_tmp_7508;
  chpl____wide__ref_qio_channel_ptr_t chpl_macro_tmp_7509;
  local__str_literal_2497_chpl /* "in lock" */ = _str_literal_2497 /* "in lock" */;
  qio_int_to_err(INT32(0));
  call_tmp_chpl = qio_int_to_err(INT32(0));
  call_tmp_chpl2 = qio_err_iserr(call_tmp_chpl);
  call_tmp_chpl3 = (call_tmp_chpl2 != INT32(0));
  if (call_tmp_chpl3) {
    _ch_ioerror_chpl3(this_chpl6, call_tmp_chpl, &local__str_literal_2497_chpl /* "in lock" */);
  }
  chpl_macro_tmp_7507.locale = (this_chpl6).locale;
  chpl_macro_tmp_7507.addr = &(((this_chpl6).addr)->_channel_internal_chpl);
  chpl_gen_comm_get(((void*)(&tmp_chpl)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_7507).locale), INT64(0), INT32(0)), (chpl_macro_tmp_7507).addr, sizeof(qio_channel_ptr_t), -1, COMMID(60), INT64(3823), INT64(71));
  coerce_tmp_chpl = tmp_chpl;
  call_tmp_chpl4 = qio_channel_error(coerce_tmp_chpl);
  call_tmp_chpl5 = qio_err_iserr(call_tmp_chpl4);
  call_tmp_chpl6 = (call_tmp_chpl5 == INT32(0));
  if (call_tmp_chpl6) {
    chpl_macro_tmp_7508.locale = (this_chpl6).locale;
    chpl_macro_tmp_7508.addr = &(((this_chpl6).addr)->_channel_internal_chpl);
    chpl_gen_comm_get(((void*)(&tmp_chpl2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_7508).locale), INT64(0), INT32(0)), (chpl_macro_tmp_7508).addr, sizeof(qio_channel_ptr_t), -1, COMMID(61), INT64(3825), INT64(71));
    coerce_tmp_chpl2 = tmp_chpl2;
    qio_int_to_err(INT32(0));
    call_tmp_chpl7 = qio_channel_binary(coerce_tmp_chpl2);
    call_tmp_chpl8 = qio_channel_byteorder(coerce_tmp_chpl2);
    call_tmp_chpl9 = (call_tmp_chpl7 != UINT8(0));
    if (call_tmp_chpl9) {
      call_tmp_chpl10 = (((int16_t)(call_tmp_chpl8)) == ((int16_t)(iokind_chpl_big_chpl)));
      if (call_tmp_chpl10) {
        if (x_chpl) {
          ret_chpl = UINT8(1);
          goto _end__if_fn186_chpl;
        } else {
          ret_chpl = UINT8(0);
          goto _end__if_fn186_chpl;
        }
        _end__if_fn186_chpl:;
        call_tmp_chpl11 = qio_channel_write_byte(((int32_t)(UINT8(false))), coerce_tmp_chpl2, ret_chpl);
        e_chpl = call_tmp_chpl11;
      } else {
        call_tmp_chpl12 = (((int16_t)(call_tmp_chpl8)) == ((int16_t)(iokind_chpl_little_chpl)));
        if (call_tmp_chpl12) {
          if (x_chpl) {
            ret_chpl2 = UINT8(1);
            goto _end__if_fn186_chpl2;
          } else {
            ret_chpl2 = UINT8(0);
            goto _end__if_fn186_chpl2;
          }
          _end__if_fn186_chpl2:;
          call_tmp_chpl13 = qio_channel_write_byte(((int32_t)(UINT8(false))), coerce_tmp_chpl2, ret_chpl2);
          e_chpl = call_tmp_chpl13;
        } else {
          if (x_chpl) {
            ret_chpl3 = UINT8(1);
            goto _end__if_fn186_chpl3;
          } else {
            ret_chpl3 = UINT8(0);
            goto _end__if_fn186_chpl3;
          }
          _end__if_fn186_chpl3:;
          call_tmp_chpl14 = qio_channel_write_byte(((int32_t)(UINT8(false))), coerce_tmp_chpl2, ret_chpl3);
          e_chpl = call_tmp_chpl14;
        }
      }
    } else {
      call_tmp_chpl15 = _write_text_internal_chpl2(coerce_tmp_chpl2, x_chpl);
      e_chpl = call_tmp_chpl15;
    }
    chpl_macro_tmp_7509.locale = (this_chpl6).locale;
    chpl_macro_tmp_7509.addr = &(((this_chpl6).addr)->_channel_internal_chpl);
    chpl_gen_comm_get(((void*)(&tmp_chpl3)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_7509).locale), INT64(0), INT32(0)), (chpl_macro_tmp_7509).addr, sizeof(qio_channel_ptr_t), -1, COMMID(62), INT64(3826), INT64(71));
    coerce_tmp_chpl3 = tmp_chpl3;
    _qio_channel_set_error_unlocked(coerce_tmp_chpl3, e_chpl);
  }
  return;
}

/* IO.chpl:3820 */
static void wrapon_fn_chpl46(_class_localson_fn_chpl43 c_chpl) {
  chpl____wide__ref_channel_T_dynamic_F _1_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_ioLiteral _2_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_locale _3_rvfDerefTmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _1_tmp_chpl = (c_chpl)->_1_tmp_chpl;
  _2_tmp_chpl = (c_chpl)->_2_tmp_chpl;
  _3_rvfDerefTmp_chpl = (c_chpl)->_3_rvfDerefTmp_chpl;
  on_fn_chpl44(_1_tmp_chpl, _2_tmp_chpl, _3_rvfDerefTmp_chpl);
  return;
}

/* IO.chpl:3820 */
static void on_fn_chpl46(chpl____wide__ref_channel_T_dynamic_F this_chpl6,
                         uint64_t x_chpl,
                         chpl____wide_locale origLocale_chpl) {
  string local__str_literal_2497_chpl;
  syserr call_tmp_chpl;
  int32_t call_tmp_chpl2;
  chpl_bool call_tmp_chpl3;
  syserr call_tmp_chpl4;
  qio_channel_ptr_t coerce_tmp_chpl;
  qio_channel_ptr_t tmp_chpl;
  int32_t call_tmp_chpl5;
  chpl_bool call_tmp_chpl6;
  qio_channel_ptr_t coerce_tmp_chpl2;
  qio_channel_ptr_t tmp_chpl2;
  syserr e_chpl;
  uint8_t call_tmp_chpl7;
  uint8_t call_tmp_chpl8;
  chpl_bool call_tmp_chpl9;
  chpl_bool call_tmp_chpl10;
  syserr call_tmp_chpl11;
  chpl_bool call_tmp_chpl12;
  syserr call_tmp_chpl13;
  syserr call_tmp_chpl14;
  syserr call_tmp_chpl15;
  qio_channel_ptr_t coerce_tmp_chpl3;
  qio_channel_ptr_t tmp_chpl3;
  chpl____wide__ref_qio_channel_ptr_t chpl_macro_tmp_7510;
  chpl____wide__ref_qio_channel_ptr_t chpl_macro_tmp_7511;
  chpl____wide__ref_qio_channel_ptr_t chpl_macro_tmp_7512;
  local__str_literal_2497_chpl /* "in lock" */ = _str_literal_2497 /* "in lock" */;
  qio_int_to_err(INT32(0));
  call_tmp_chpl = qio_int_to_err(INT32(0));
  call_tmp_chpl2 = qio_err_iserr(call_tmp_chpl);
  call_tmp_chpl3 = (call_tmp_chpl2 != INT32(0));
  if (call_tmp_chpl3) {
    _ch_ioerror_chpl3(this_chpl6, call_tmp_chpl, &local__str_literal_2497_chpl /* "in lock" */);
  }
  chpl_macro_tmp_7510.locale = (this_chpl6).locale;
  chpl_macro_tmp_7510.addr = &(((this_chpl6).addr)->_channel_internal_chpl);
  chpl_gen_comm_get(((void*)(&tmp_chpl)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_7510).locale), INT64(0), INT32(0)), (chpl_macro_tmp_7510).addr, sizeof(qio_channel_ptr_t), -1, COMMID(63), INT64(3823), INT64(71));
  coerce_tmp_chpl = tmp_chpl;
  call_tmp_chpl4 = qio_channel_error(coerce_tmp_chpl);
  call_tmp_chpl5 = qio_err_iserr(call_tmp_chpl4);
  call_tmp_chpl6 = (call_tmp_chpl5 == INT32(0));
  if (call_tmp_chpl6) {
    chpl_macro_tmp_7511.locale = (this_chpl6).locale;
    chpl_macro_tmp_7511.addr = &(((this_chpl6).addr)->_channel_internal_chpl);
    chpl_gen_comm_get(((void*)(&tmp_chpl2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_7511).locale), INT64(0), INT32(0)), (chpl_macro_tmp_7511).addr, sizeof(qio_channel_ptr_t), -1, COMMID(64), INT64(3825), INT64(71));
    coerce_tmp_chpl2 = tmp_chpl2;
    qio_int_to_err(INT32(0));
    call_tmp_chpl7 = qio_channel_binary(coerce_tmp_chpl2);
    call_tmp_chpl8 = qio_channel_byteorder(coerce_tmp_chpl2);
    call_tmp_chpl9 = (call_tmp_chpl7 != UINT8(0));
    if (call_tmp_chpl9) {
      call_tmp_chpl10 = (((int16_t)(call_tmp_chpl8)) == ((int16_t)(iokind_chpl_big_chpl)));
      if (call_tmp_chpl10) {
        call_tmp_chpl11 = qio_channel_write_uint64(((int32_t)(UINT8(false))), ((int32_t)(iokind_chpl_big_chpl)), coerce_tmp_chpl2, x_chpl);
        e_chpl = call_tmp_chpl11;
      } else {
        call_tmp_chpl12 = (((int16_t)(call_tmp_chpl8)) == ((int16_t)(iokind_chpl_little_chpl)));
        if (call_tmp_chpl12) {
          call_tmp_chpl13 = qio_channel_write_uint64(((int32_t)(UINT8(false))), ((int32_t)(iokind_chpl_little_chpl)), coerce_tmp_chpl2, x_chpl);
          e_chpl = call_tmp_chpl13;
        } else {
          call_tmp_chpl14 = qio_channel_write_uint64(((int32_t)(UINT8(false))), ((int32_t)(iokind_chpl_native_chpl)), coerce_tmp_chpl2, x_chpl);
          e_chpl = call_tmp_chpl14;
        }
      }
    } else {
      call_tmp_chpl15 = _write_text_internal_chpl(coerce_tmp_chpl2, x_chpl);
      e_chpl = call_tmp_chpl15;
    }
    chpl_macro_tmp_7512.locale = (this_chpl6).locale;
    chpl_macro_tmp_7512.addr = &(((this_chpl6).addr)->_channel_internal_chpl);
    chpl_gen_comm_get(((void*)(&tmp_chpl3)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_7512).locale), INT64(0), INT32(0)), (chpl_macro_tmp_7512).addr, sizeof(qio_channel_ptr_t), -1, COMMID(65), INT64(3826), INT64(71));
    coerce_tmp_chpl3 = tmp_chpl3;
    _qio_channel_set_error_unlocked(coerce_tmp_chpl3, e_chpl);
  }
  return;
}

/* IO.chpl:3820 */
static void on_fn_chpl44(chpl____wide__ref_channel_T_dynamic_F this_chpl6,
                         chpl____wide__ref_ioLiteral x_chpl,
                         chpl____wide_locale origLocale_chpl) {
  string local__str_literal_337_chpl;
  string local__str_literal_2497_chpl;
  syserr call_tmp_chpl;
  int32_t call_tmp_chpl2;
  chpl_bool call_tmp_chpl3;
  syserr call_tmp_chpl4;
  qio_channel_ptr_t coerce_tmp_chpl;
  qio_channel_ptr_t tmp_chpl;
  int32_t call_tmp_chpl5;
  chpl_bool call_tmp_chpl6;
  qio_channel_ptr_t coerce_tmp_chpl2;
  qio_channel_ptr_t tmp_chpl2;
  chpl____wide__ref_ioLiteral i_x_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string call_tmp_chpl7 = {CHPL_LOCALEID_T_INIT, NULL};
  string call_tmp_chpl8;
  string ret_chpl;
  int32_t tmp_chpl3;
  chpl_bool call_tmp_chpl9;
  string ret_tmp_chpl;
  _ref_string ret_to_arg_ref_tmp__chpl = NULL;
  chpl____wide__ref_string i_s_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  string type_tmp_chpl;
  string this_chpl7;
  c_ptr_uint8_t call_tmp_chpl10 = NULL;
  int32_t default_arglocale_id_chpl;
  string ret_tmp_chpl2;
  _ref_string ret_to_arg_ref_tmp__chpl2 = NULL;
  _ref_string _ref_tmp__chpl = NULL;
  chpl____wide__ref_string i_rhs_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  int32_t coerce_tmp_chpl3;
  chpl_bool call_tmp_chpl11;
  c_ptr_uint8_t coerce_tmp_chpl4 = NULL;
  chpl____wide__ref_string call_tmp_chpl12 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t tmp_chpl5;
  syserr call_tmp_chpl13;
  _ref_string _ref_tmp__chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  qio_channel_ptr_t coerce_tmp_chpl5;
  qio_channel_ptr_t tmp_chpl7;
  chpl____wide__ref_qio_channel_ptr_t chpl_macro_tmp_7513;
  chpl____wide__ref_qio_channel_ptr_t chpl_macro_tmp_7514;
  chpl____wide__ref_string chpl_macro_tmp_7515;
  chpl____wide__ref_int32_t chpl_macro_tmp_7516;
  chpl____wide__ref_string chpl_macro_tmp_7517;
  chpl____wide__ref_string chpl_macro_tmp_7518;
  chpl____wide__ref_int64_t chpl_macro_tmp_7519;
  chpl____wide__ref_string chpl_macro_tmp_7520;
  chpl____wide__ref_qio_channel_ptr_t chpl_macro_tmp_7521;
  local__str_literal_337_chpl /* "Cannot call .c_str() on a remote string" */ = _str_literal_337 /* "Cannot call .c_str() on a remote string" */;
  local__str_literal_2497_chpl /* "in lock" */ = _str_literal_2497 /* "in lock" */;
  qio_int_to_err(INT32(0));
  call_tmp_chpl = qio_int_to_err(INT32(0));
  call_tmp_chpl2 = qio_err_iserr(call_tmp_chpl);
  call_tmp_chpl3 = (call_tmp_chpl2 != INT32(0));
  if (call_tmp_chpl3) {
    _ch_ioerror_chpl3(this_chpl6, call_tmp_chpl, &local__str_literal_2497_chpl /* "in lock" */);
  }
  chpl_macro_tmp_7513.locale = (this_chpl6).locale;
  chpl_macro_tmp_7513.addr = &(((this_chpl6).addr)->_channel_internal_chpl);
  chpl_gen_comm_get(((void*)(&tmp_chpl)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_7513).locale), INT64(0), INT32(0)), (chpl_macro_tmp_7513).addr, sizeof(qio_channel_ptr_t), -1, COMMID(66), INT64(3823), INT64(71));
  coerce_tmp_chpl = tmp_chpl;
  call_tmp_chpl4 = qio_channel_error(coerce_tmp_chpl);
  call_tmp_chpl5 = qio_err_iserr(call_tmp_chpl4);
  call_tmp_chpl6 = (call_tmp_chpl5 == INT32(0));
  if (call_tmp_chpl6) {
    chpl_macro_tmp_7514.locale = (this_chpl6).locale;
    chpl_macro_tmp_7514.addr = &(((this_chpl6).addr)->_channel_internal_chpl);
    chpl_gen_comm_get(((void*)(&tmp_chpl2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_7514).locale), INT64(0), INT32(0)), (chpl_macro_tmp_7514).addr, sizeof(qio_channel_ptr_t), -1, COMMID(67), INT64(3825), INT64(71));
    coerce_tmp_chpl2 = tmp_chpl2;
    i_x_chpl = x_chpl;
    qio_int_to_err(INT32(0));
    chpl_macro_tmp_7515.locale = (i_x_chpl).locale;
    chpl_macro_tmp_7515.addr = &(((i_x_chpl).addr)->val_chpl);
    call_tmp_chpl7 = chpl_macro_tmp_7515;
    chpl_macro_tmp_7516.locale = (call_tmp_chpl7).locale;
    chpl_macro_tmp_7516.addr = &(((call_tmp_chpl7).addr)->locale_id);
    chpl_gen_comm_get(((void*)(&tmp_chpl3)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_7516).locale), INT64(0), INT32(0)), (chpl_macro_tmp_7516).addr, sizeof(int32_t), -1, COMMID(68), INT64(3825), INT64(71));
    call_tmp_chpl9 = (tmp_chpl3 == chpl_nodeID);
    if (call_tmp_chpl9) {
      ret_to_arg_ref_tmp__chpl = &ret_tmp_chpl;
      i_s_chpl = call_tmp_chpl7;
      string2(i_s_chpl, UINT8(false), ret_to_arg_ref_tmp__chpl);
      ret_chpl = ret_tmp_chpl;
      goto _end_localize_chpl;
    } else {
      (&this_chpl7)->len = INT64(0);
      (&this_chpl7)->_size = INT64(0);
      (&this_chpl7)->buff = nil;
      (&this_chpl7)->owned = UINT8(false);
      (&this_chpl7)->locale_id = INT32(0);
      (&this_chpl7)->len = INT64(0);
      (&this_chpl7)->_size = INT64(0);
      call_tmp_chpl10 = ((c_ptr_uint8_t)(nil));
      (&this_chpl7)->buff = call_tmp_chpl10;
      (&this_chpl7)->owned = UINT8(true);
      default_arglocale_id_chpl = chpl_nodeID;
      (&this_chpl7)->locale_id = default_arglocale_id_chpl;
      ret_to_arg_ref_tmp__chpl2 = &ret_tmp_chpl2;
      _construct_string(INT64(0), INT64(0), call_tmp_chpl10, UINT8(true), default_arglocale_id_chpl, &this_chpl7, ret_to_arg_ref_tmp__chpl2);
      type_tmp_chpl = ret_tmp_chpl2;
      _ref_tmp__chpl = &type_tmp_chpl;
      i_rhs_chpl = call_tmp_chpl7;
      chpl_macro_tmp_7517.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_7517.addr = _ref_tmp__chpl;
      tmp_chpl4 = chpl_macro_tmp_7517;
      chpl___ASSIGN_13(tmp_chpl4, i_rhs_chpl);
      ret_chpl = type_tmp_chpl;
      goto _end_localize_chpl;
    }
    _end_localize_chpl:;
    call_tmp_chpl8 = ret_chpl;
    coerce_tmp_chpl3 = (&call_tmp_chpl8)->locale_id;
    call_tmp_chpl11 = (coerce_tmp_chpl3 != chpl_nodeID);
    if (call_tmp_chpl11) {
      halt(&local__str_literal_337_chpl /* "Cannot call .c_str() on a remote string" */, INT64(3825), INT32(71));
    }
    coerce_tmp_chpl4 = (&call_tmp_chpl8)->buff;
    chpl_macro_tmp_7518.locale = (i_x_chpl).locale;
    chpl_macro_tmp_7518.addr = &(((i_x_chpl).addr)->val_chpl);
    call_tmp_chpl12 = chpl_macro_tmp_7518;
    chpl_macro_tmp_7519.locale = (call_tmp_chpl12).locale;
    chpl_macro_tmp_7519.addr = &(((call_tmp_chpl12).addr)->len);
    chpl_gen_comm_get(((void*)(&tmp_chpl5)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_7519).locale), INT64(0), INT32(0)), (chpl_macro_tmp_7519).addr, sizeof(int64_t), -1, COMMID(69), INT64(3825), INT64(71));
    call_tmp_chpl13 = qio_channel_print_literal(((int32_t)(UINT8(false))), coerce_tmp_chpl2, ((c_string)(((c_void_ptr)(coerce_tmp_chpl4)))), tmp_chpl5);
    _ref_tmp__chpl2 = &call_tmp_chpl8;
    chpl_macro_tmp_7520.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7520.addr = _ref_tmp__chpl2;
    tmp_chpl6 = chpl_macro_tmp_7520;
    deinit44(tmp_chpl6);
    chpl_macro_tmp_7521.locale = (this_chpl6).locale;
    chpl_macro_tmp_7521.addr = &(((this_chpl6).addr)->_channel_internal_chpl);
    chpl_gen_comm_get(((void*)(&tmp_chpl7)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_7521).locale), INT64(0), INT32(0)), (chpl_macro_tmp_7521).addr, sizeof(qio_channel_ptr_t), -1, COMMID(70), INT64(3826), INT64(71));
    coerce_tmp_chpl5 = tmp_chpl7;
    _qio_channel_set_error_unlocked(coerce_tmp_chpl5, call_tmp_chpl13);
  }
  return;
}

/* IO.chpl:3930 */
static chpl_bool binary_chpl(_ref_channel_T_dynamic_F this_chpl6) {
  uint8_t ret_chpl;
  _ref__wide_locale call_tmp_chpl = NULL;
  chpl_localeID_t call_tmp_chpl2;
  chpl____wide_locale tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_channel_T_dynamic_F tmp_chpl2 = NULL;
  _ref_uint8_t tmp_chpl3 = NULL;
  chpl_bool isdirect_chpl;
  chpl____wide__ref_channel_T_dynamic_F tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_uint8_t tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl47 _args_foron_fn_chpl = NULL;
  _ref_channel_T_dynamic_F tmp_chpl6 = NULL;
  chpl____wide__ref_channel_T_dynamic_F tmp_chpl7 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_uint8_t tmp_chpl8 = NULL;
  chpl____wide__ref_uint8_t tmp_chpl9 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  chpl_bool call_tmp_chpl3;
  chpl____wide__ref_channel_T_dynamic_F chpl_macro_tmp_7522;
  chpl____wide__ref_uint8_t chpl_macro_tmp_7523;
  chpl__class_localson_fn_chpl47_object chpl_macro_tmp_7524;
  chpl____wide__ref_channel_T_dynamic_F chpl_macro_tmp_7525;
  chpl____wide__ref_uint8_t chpl_macro_tmp_7526;
  ret_chpl = UINT8(0);
  call_tmp_chpl = &((this_chpl6)->home_chpl);
  tmp_chpl = *(call_tmp_chpl);
  call_tmp_chpl2 = (&tmp_chpl)->locale;
  tmp_chpl2 = this_chpl6;
  tmp_chpl3 = &ret_chpl;
  isdirect_chpl = chpl_doDirectExecuteOn(&call_tmp_chpl2);
  if (isdirect_chpl) {
    chpl_macro_tmp_7522.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7522.addr = tmp_chpl2;
    tmp_chpl4 = chpl_macro_tmp_7522;
    chpl_macro_tmp_7523.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7523.addr = tmp_chpl3;
    tmp_chpl5 = chpl_macro_tmp_7523;
    on_fn_chpl47(tmp_chpl4, tmp_chpl5);
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn_chpl47)(&chpl_macro_tmp_7524));
    (_args_foron_fn_chpl)->_0_rvfDerefTmp_chpl = call_tmp_chpl2;
    tmp_chpl6 = this_chpl6;
    chpl_macro_tmp_7525.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7525.addr = tmp_chpl6;
    tmp_chpl7 = chpl_macro_tmp_7525;
    (_args_foron_fn_chpl)->_1_tmp_chpl = tmp_chpl7;
    tmp_chpl8 = &ret_chpl;
    chpl_macro_tmp_7526.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7526.addr = tmp_chpl8;
    tmp_chpl9 = chpl_macro_tmp_7526;
    (_args_foron_fn_chpl)->_2_tmp_chpl = tmp_chpl9;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    /*** wrapon_fn_chpl47 ***/ chpl_executeOn(&call_tmp_chpl2, INT32(303), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), sizeof(chpl__class_localson_fn_chpl47_object), INT64(3932), INT32(71));
  }
  call_tmp_chpl3 = (ret_chpl != ((uint8_t)(INT64(0))));
  return call_tmp_chpl3;
}

/* IO.chpl:3932 */
static void wrapon_fn_chpl47(_class_localson_fn_chpl47 c_chpl) {
  chpl____wide__ref_channel_T_dynamic_F _1_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_uint8_t _2_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _1_tmp_chpl = (c_chpl)->_1_tmp_chpl;
  _2_tmp_chpl = (c_chpl)->_2_tmp_chpl;
  on_fn_chpl47(_1_tmp_chpl, _2_tmp_chpl);
  return;
}

/* IO.chpl:3932 */
static void on_fn_chpl47(chpl____wide__ref_channel_T_dynamic_F this_chpl6,
                         chpl____wide__ref_uint8_t ret_chpl) {
  uint8_t call_tmp_chpl;
  qio_channel_ptr_t coerce_tmp_chpl;
  qio_channel_ptr_t tmp_chpl;
  chpl____wide__ref_qio_channel_ptr_t chpl_macro_tmp_7527;
  chpl_macro_tmp_7527.locale = (this_chpl6).locale;
  chpl_macro_tmp_7527.addr = &(((this_chpl6).addr)->_channel_internal_chpl);
  chpl_gen_comm_get(((void*)(&tmp_chpl)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_7527).locale), INT64(0), INT32(0)), (chpl_macro_tmp_7527).addr, sizeof(qio_channel_ptr_t), -1, COMMID(71), INT64(3933), INT64(71));
  coerce_tmp_chpl = tmp_chpl;
  call_tmp_chpl = qio_channel_binary(coerce_tmp_chpl);
  chpl_gen_comm_put(((void*)(&call_tmp_chpl)), chpl_nodeFromLocaleID(&((ret_chpl).locale), INT64(0), INT32(0)), (ret_chpl).addr, sizeof(uint8_t), -1, COMMID(72), INT64(3933), INT64(71));
  return;
}

/* IO.chpl:3940 */
static int64_t styleElement_chpl(_ref_channel_T_dynamic_F this_chpl6,
                                 int64_t element_chpl) {
  int64_t ret_chpl;
  _ref__wide_locale call_tmp_chpl = NULL;
  chpl_localeID_t call_tmp_chpl2;
  chpl____wide_locale tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_channel_T_dynamic_F tmp_chpl2 = NULL;
  _ref_int64_t tmp_chpl3 = NULL;
  chpl_bool isdirect_chpl;
  chpl____wide__ref_channel_T_dynamic_F tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_int64_t tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl48 _args_foron_fn_chpl = NULL;
  _ref_channel_T_dynamic_F tmp_chpl6 = NULL;
  chpl____wide__ref_channel_T_dynamic_F tmp_chpl7 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_int64_t tmp_chpl8 = NULL;
  chpl____wide__ref_int64_t tmp_chpl9 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  chpl____wide__ref_channel_T_dynamic_F chpl_macro_tmp_7528;
  chpl____wide__ref_int64_t chpl_macro_tmp_7529;
  chpl__class_localson_fn_chpl48_object chpl_macro_tmp_7530;
  chpl____wide__ref_channel_T_dynamic_F chpl_macro_tmp_7531;
  chpl____wide__ref_int64_t chpl_macro_tmp_7532;
  ret_chpl = INT64(0);
  call_tmp_chpl = &((this_chpl6)->home_chpl);
  tmp_chpl = *(call_tmp_chpl);
  call_tmp_chpl2 = (&tmp_chpl)->locale;
  tmp_chpl2 = this_chpl6;
  tmp_chpl3 = &ret_chpl;
  isdirect_chpl = chpl_doDirectExecuteOn(&call_tmp_chpl2);
  if (isdirect_chpl) {
    chpl_macro_tmp_7528.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7528.addr = tmp_chpl2;
    tmp_chpl4 = chpl_macro_tmp_7528;
    chpl_macro_tmp_7529.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7529.addr = tmp_chpl3;
    tmp_chpl5 = chpl_macro_tmp_7529;
    on_fn_chpl48(tmp_chpl4, element_chpl, tmp_chpl5);
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn_chpl48)(&chpl_macro_tmp_7530));
    (_args_foron_fn_chpl)->_0_rvfDerefTmp_chpl = call_tmp_chpl2;
    tmp_chpl6 = this_chpl6;
    chpl_macro_tmp_7531.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7531.addr = tmp_chpl6;
    tmp_chpl7 = chpl_macro_tmp_7531;
    (_args_foron_fn_chpl)->_1_tmp_chpl = tmp_chpl7;
    (_args_foron_fn_chpl)->_2_rvfDerefTmp_chpl = element_chpl;
    tmp_chpl8 = &ret_chpl;
    chpl_macro_tmp_7532.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7532.addr = tmp_chpl8;
    tmp_chpl9 = chpl_macro_tmp_7532;
    (_args_foron_fn_chpl)->_3_tmp_chpl = tmp_chpl9;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    /*** wrapon_fn_chpl48 ***/ chpl_executeOn(&call_tmp_chpl2, INT32(304), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), sizeof(chpl__class_localson_fn_chpl48_object), INT64(3942), INT32(71));
  }
  return ret_chpl;
}

/* IO.chpl:3942 */
static void wrapon_fn_chpl48(_class_localson_fn_chpl48 c_chpl) {
  chpl____wide__ref_channel_T_dynamic_F _1_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_int64_t _3_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _1_tmp_chpl = (c_chpl)->_1_tmp_chpl;
  _3_tmp_chpl = (c_chpl)->_3_tmp_chpl;
  on_fn_chpl48(_1_tmp_chpl, (c_chpl)->_2_rvfDerefTmp_chpl, _3_tmp_chpl);
  return;
}

/* IO.chpl:3942 */
static void on_fn_chpl48(chpl____wide__ref_channel_T_dynamic_F this_chpl6,
                         int64_t element_chpl,
                         chpl____wide__ref_int64_t ret_chpl) {
  int64_t call_tmp_chpl;
  qio_channel_ptr_t coerce_tmp_chpl;
  qio_channel_ptr_t tmp_chpl;
  chpl____wide__ref_qio_channel_ptr_t chpl_macro_tmp_7533;
  chpl_macro_tmp_7533.locale = (this_chpl6).locale;
  chpl_macro_tmp_7533.addr = &(((this_chpl6).addr)->_channel_internal_chpl);
  chpl_gen_comm_get(((void*)(&tmp_chpl)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_7533).locale), INT64(0), INT32(0)), (chpl_macro_tmp_7533).addr, sizeof(qio_channel_ptr_t), -1, COMMID(73), INT64(3943), INT64(71));
  coerce_tmp_chpl = tmp_chpl;
  call_tmp_chpl = qio_channel_style_element(coerce_tmp_chpl, element_chpl);
  chpl_gen_comm_put(((void*)(&call_tmp_chpl)), chpl_nodeFromLocaleID(&((ret_chpl).locale), INT64(0), INT32(0)), (ret_chpl).addr, sizeof(int64_t), -1, COMMID(74), INT64(3943), INT64(71));
  return;
}

/* IO.chpl:3989 */
static void writeBytes_chpl(_ref_channel_T_dynamic_F this_chpl6,
                            chpl____wide__ddata_uint64_t x_chpl,
                            int64_t len_chpl) {
  _ref__wide_locale call_tmp_chpl = NULL;
  chpl_localeID_t call_tmp_chpl2;
  chpl____wide_locale tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_channel_T_dynamic_F tmp_chpl2 = NULL;
  chpl____wide__ddata_uint64_t rvfDerefTmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect_chpl;
  chpl____wide__ref_channel_T_dynamic_F tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl49 _args_foron_fn_chpl = NULL;
  _ref_channel_T_dynamic_F tmp_chpl4 = NULL;
  chpl____wide__ref_channel_T_dynamic_F tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  chpl____wide__ref_channel_T_dynamic_F chpl_macro_tmp_7534;
  chpl__class_localson_fn_chpl49_object chpl_macro_tmp_7535;
  chpl____wide__ref_channel_T_dynamic_F chpl_macro_tmp_7536;
  call_tmp_chpl = &((this_chpl6)->home_chpl);
  tmp_chpl = *(call_tmp_chpl);
  call_tmp_chpl2 = (&tmp_chpl)->locale;
  tmp_chpl2 = this_chpl6;
  rvfDerefTmp_chpl = x_chpl;
  isdirect_chpl = chpl_doDirectExecuteOn(&call_tmp_chpl2);
  if (isdirect_chpl) {
    chpl_macro_tmp_7534.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7534.addr = tmp_chpl2;
    tmp_chpl3 = chpl_macro_tmp_7534;
    on_fn_chpl49(tmp_chpl3, rvfDerefTmp_chpl, len_chpl);
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn_chpl49)(&chpl_macro_tmp_7535));
    (_args_foron_fn_chpl)->_0_rvfDerefTmp_chpl = call_tmp_chpl2;
    tmp_chpl4 = this_chpl6;
    chpl_macro_tmp_7536.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7536.addr = tmp_chpl4;
    tmp_chpl5 = chpl_macro_tmp_7536;
    (_args_foron_fn_chpl)->_1_tmp_chpl = tmp_chpl5;
    (_args_foron_fn_chpl)->_2_rvfDerefTmp_chpl = rvfDerefTmp_chpl;
    (_args_foron_fn_chpl)->_3_rvfDerefTmp_chpl = len_chpl;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    /*** wrapon_fn_chpl49 ***/ chpl_executeOn(&call_tmp_chpl2, INT32(305), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), sizeof(chpl__class_localson_fn_chpl49_object), INT64(3991), INT32(71));
  }
  return;
}

/* IO.chpl:3991 */
static void on_fn_chpl49(chpl____wide__ref_channel_T_dynamic_F this_chpl6,
                         chpl____wide__ddata_uint64_t x_chpl,
                         int64_t len_chpl) {
  string local__str_literal_2497_chpl;
  syserr call_tmp_chpl;
  int32_t call_tmp_chpl2;
  chpl_bool call_tmp_chpl3;
  syserr call_tmp_chpl4;
  qio_channel_ptr_t coerce_tmp_chpl;
  qio_channel_ptr_t tmp_chpl;
  _ddata_uint64_t tmp_chpl2 = NULL;
  qio_channel_ptr_t coerce_tmp_chpl2;
  qio_channel_ptr_t tmp_chpl3;
  chpl____wide__ref_qio_channel_ptr_t chpl_macro_tmp_7537;
  chpl____wide__ddata_uint64_t chpl_macro_tmp_7538;
  chpl____wide__ref_qio_channel_ptr_t chpl_macro_tmp_7539;
  local__str_literal_2497_chpl /* "in lock" */ = _str_literal_2497 /* "in lock" */;
  qio_int_to_err(INT32(0));
  call_tmp_chpl = qio_int_to_err(INT32(0));
  call_tmp_chpl2 = qio_err_iserr(call_tmp_chpl);
  call_tmp_chpl3 = (call_tmp_chpl2 != INT32(0));
  if (call_tmp_chpl3) {
    _ch_ioerror_chpl3(this_chpl6, call_tmp_chpl, &local__str_literal_2497_chpl /* "in lock" */);
  }
  chpl_macro_tmp_7537.locale = (this_chpl6).locale;
  chpl_macro_tmp_7537.addr = &(((this_chpl6).addr)->_channel_internal_chpl);
  chpl_gen_comm_get(((void*)(&tmp_chpl)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_7537).locale), INT64(0), INT32(0)), (chpl_macro_tmp_7537).addr, sizeof(qio_channel_ptr_t), -1, COMMID(75), INT64(3994), INT64(71));
  coerce_tmp_chpl = tmp_chpl;
  tmp_chpl2 = (&x_chpl)->addr;
  call_tmp_chpl4 = qio_channel_write_amt(((int32_t)(UINT8(false))), coerce_tmp_chpl, tmp_chpl2, len_chpl);
  chpl_macro_tmp_7538.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7538.addr = tmp_chpl2;
  x_chpl = chpl_macro_tmp_7538;
  chpl_macro_tmp_7539.locale = (this_chpl6).locale;
  chpl_macro_tmp_7539.addr = &(((this_chpl6).addr)->_channel_internal_chpl);
  chpl_gen_comm_get(((void*)(&tmp_chpl3)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_7539).locale), INT64(0), INT32(0)), (chpl_macro_tmp_7539).addr, sizeof(qio_channel_ptr_t), -1, COMMID(76), INT64(3995), INT64(71));
  coerce_tmp_chpl2 = tmp_chpl3;
  _qio_channel_set_error_unlocked(coerce_tmp_chpl2, call_tmp_chpl4);
  return;
}

/* IO.chpl:3991 */
static void wrapon_fn_chpl49(_class_localson_fn_chpl49 c_chpl) {
  chpl____wide__ref_channel_T_dynamic_F _1_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ddata_uint64_t _2_rvfDerefTmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _1_tmp_chpl = (c_chpl)->_1_tmp_chpl;
  _2_rvfDerefTmp_chpl = (c_chpl)->_2_rvfDerefTmp_chpl;
  on_fn_chpl49(_1_tmp_chpl, _2_rvfDerefTmp_chpl, (c_chpl)->_3_rvfDerefTmp_chpl);
  return;
}

/* IO.chpl:4072 */
static void stringify_chpl2(_ref_string _e1_args_chpl,
                            _ref_string _retArg_chpl) {
  string local__str_literal_2568_chpl;
  _ref_string _ref_tmp__chpl = NULL;
  string str_chpl;
  chpl____wide__ref_string tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp__chpl2 = NULL;
  chpl____wide__ref_string chpl_macro_tmp_7540;
  local__str_literal_2568_chpl /* "" */ = _str_literal_2568 /* "" */;
  _ref_tmp__chpl = _e1_args_chpl;
  chpl_macro_tmp_7540.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7540.addr = &local__str_literal_2568_chpl /* "" */;
  tmp_chpl = chpl_macro_tmp_7540;
  str_chpl = chpl__initCopy13(tmp_chpl);
  _ref_tmp__chpl2 = &str_chpl;
  chpl___PLUS__ASSIGN_(_ref_tmp__chpl2, _ref_tmp__chpl);
  *(_retArg_chpl) = str_chpl;
  return;
}

/* IO.chpl:4072 */
static void stringify_chpl4(_ref_string _e1_args_chpl,
                            int64_t _e2_args_chpl,
                            _ref_string _e3_args_chpl,
                            int64_t _e4_args_chpl,
                            _ref_string _e5_args_chpl,
                            int64_t _e6_args_chpl,
                            _ref_string _e7_args_chpl,
                            _ref_string _retArg_chpl) {
  string local__str_literal_2568_chpl;
  _ref_string _ref_tmp__chpl = NULL;
  _ref_string _ref_tmp__chpl2 = NULL;
  _ref_string _ref_tmp__chpl3 = NULL;
  _ref_string _ref_tmp__chpl4 = NULL;
  string str_chpl;
  chpl____wide__ref_string tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp__chpl5 = NULL;
  string call_tmp_chpl;
  string ret_tmp_chpl;
  _ref_string ret_to_arg_ref_tmp__chpl = NULL;
  _ref_string _ref_tmp__chpl6 = NULL;
  _ref_string _ref_tmp__chpl7 = NULL;
  chpl____wide__ref_string tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp__chpl8 = NULL;
  string call_tmp_chpl2;
  string ret_tmp_chpl2;
  _ref_string ret_to_arg_ref_tmp__chpl2 = NULL;
  _ref_string _ref_tmp__chpl9 = NULL;
  _ref_string _ref_tmp__chpl10 = NULL;
  chpl____wide__ref_string tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp__chpl11 = NULL;
  string call_tmp_chpl3;
  string ret_tmp_chpl3;
  _ref_string ret_to_arg_ref_tmp__chpl3 = NULL;
  _ref_string _ref_tmp__chpl12 = NULL;
  _ref_string _ref_tmp__chpl13 = NULL;
  chpl____wide__ref_string tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp__chpl14 = NULL;
  chpl____wide__ref_string chpl_macro_tmp_7541;
  chpl____wide__ref_string chpl_macro_tmp_7542;
  chpl____wide__ref_string chpl_macro_tmp_7543;
  chpl____wide__ref_string chpl_macro_tmp_7544;
  local__str_literal_2568_chpl /* "" */ = _str_literal_2568 /* "" */;
  _ref_tmp__chpl = _e1_args_chpl;
  _ref_tmp__chpl2 = _e3_args_chpl;
  _ref_tmp__chpl3 = _e5_args_chpl;
  _ref_tmp__chpl4 = _e7_args_chpl;
  chpl_macro_tmp_7541.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7541.addr = &local__str_literal_2568_chpl /* "" */;
  tmp_chpl = chpl_macro_tmp_7541;
  str_chpl = chpl__initCopy13(tmp_chpl);
  _ref_tmp__chpl5 = &str_chpl;
  chpl___PLUS__ASSIGN_(_ref_tmp__chpl5, _ref_tmp__chpl);
  ret_to_arg_ref_tmp__chpl = &ret_tmp_chpl;
  _cast3(_e2_args_chpl, ret_to_arg_ref_tmp__chpl);
  call_tmp_chpl = ret_tmp_chpl;
  _ref_tmp__chpl6 = &str_chpl;
  chpl___PLUS__ASSIGN_(_ref_tmp__chpl6, &call_tmp_chpl);
  _ref_tmp__chpl7 = &call_tmp_chpl;
  chpl_macro_tmp_7542.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7542.addr = _ref_tmp__chpl7;
  tmp_chpl2 = chpl_macro_tmp_7542;
  deinit44(tmp_chpl2);
  _ref_tmp__chpl8 = &str_chpl;
  chpl___PLUS__ASSIGN_(_ref_tmp__chpl8, _ref_tmp__chpl2);
  ret_to_arg_ref_tmp__chpl2 = &ret_tmp_chpl2;
  _cast3(_e4_args_chpl, ret_to_arg_ref_tmp__chpl2);
  call_tmp_chpl2 = ret_tmp_chpl2;
  _ref_tmp__chpl9 = &str_chpl;
  chpl___PLUS__ASSIGN_(_ref_tmp__chpl9, &call_tmp_chpl2);
  _ref_tmp__chpl10 = &call_tmp_chpl2;
  chpl_macro_tmp_7543.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7543.addr = _ref_tmp__chpl10;
  tmp_chpl3 = chpl_macro_tmp_7543;
  deinit44(tmp_chpl3);
  _ref_tmp__chpl11 = &str_chpl;
  chpl___PLUS__ASSIGN_(_ref_tmp__chpl11, _ref_tmp__chpl3);
  ret_to_arg_ref_tmp__chpl3 = &ret_tmp_chpl3;
  _cast3(_e6_args_chpl, ret_to_arg_ref_tmp__chpl3);
  call_tmp_chpl3 = ret_tmp_chpl3;
  _ref_tmp__chpl12 = &str_chpl;
  chpl___PLUS__ASSIGN_(_ref_tmp__chpl12, &call_tmp_chpl3);
  _ref_tmp__chpl13 = &call_tmp_chpl3;
  chpl_macro_tmp_7544.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7544.addr = _ref_tmp__chpl13;
  tmp_chpl4 = chpl_macro_tmp_7544;
  deinit44(tmp_chpl4);
  _ref_tmp__chpl14 = &str_chpl;
  chpl___PLUS__ASSIGN_(_ref_tmp__chpl14, _ref_tmp__chpl4);
  *(_retArg_chpl) = str_chpl;
  return;
}

/* IO.chpl:4072 */
static void stringify_chpl3(c_string _e1_args_chpl,
                            _ref_string _retArg_chpl) {
  string local__str_literal_2568_chpl;
  string str_chpl;
  chpl____wide__ref_string tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  string call_tmp_chpl;
  string ret_tmp_chpl;
  _ref_string ret_to_arg_ref_tmp__chpl = NULL;
  _ref_string _ref_tmp__chpl = NULL;
  _ref_string _ref_tmp__chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_7545;
  chpl____wide__ref_string chpl_macro_tmp_7546;
  local__str_literal_2568_chpl /* "" */ = _str_literal_2568 /* "" */;
  chpl_macro_tmp_7545.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7545.addr = &local__str_literal_2568_chpl /* "" */;
  tmp_chpl = chpl_macro_tmp_7545;
  str_chpl = chpl__initCopy13(tmp_chpl);
  ret_to_arg_ref_tmp__chpl = &ret_tmp_chpl;
  _cast(_e1_args_chpl, ret_to_arg_ref_tmp__chpl);
  call_tmp_chpl = ret_tmp_chpl;
  _ref_tmp__chpl = &str_chpl;
  chpl___PLUS__ASSIGN_(_ref_tmp__chpl, &call_tmp_chpl);
  _ref_tmp__chpl2 = &call_tmp_chpl;
  chpl_macro_tmp_7546.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7546.addr = _ref_tmp__chpl2;
  tmp_chpl2 = chpl_macro_tmp_7546;
  deinit44(tmp_chpl2);
  *(_retArg_chpl) = str_chpl;
  return;
}

/* IO.chpl:4072 */
static void stringify_chpl5(_ref_string _e1_args_chpl,
                            int64_t _e2_args_chpl,
                            _ref_string _retArg_chpl) {
  string local__str_literal_2568_chpl;
  _ref_string _ref_tmp__chpl = NULL;
  string str_chpl;
  chpl____wide__ref_string tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp__chpl2 = NULL;
  string call_tmp_chpl;
  string ret_tmp_chpl;
  _ref_string ret_to_arg_ref_tmp__chpl = NULL;
  _ref_string _ref_tmp__chpl3 = NULL;
  _ref_string _ref_tmp__chpl4 = NULL;
  chpl____wide__ref_string tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_7547;
  chpl____wide__ref_string chpl_macro_tmp_7548;
  local__str_literal_2568_chpl /* "" */ = _str_literal_2568 /* "" */;
  _ref_tmp__chpl = _e1_args_chpl;
  chpl_macro_tmp_7547.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7547.addr = &local__str_literal_2568_chpl /* "" */;
  tmp_chpl = chpl_macro_tmp_7547;
  str_chpl = chpl__initCopy13(tmp_chpl);
  _ref_tmp__chpl2 = &str_chpl;
  chpl___PLUS__ASSIGN_(_ref_tmp__chpl2, _ref_tmp__chpl);
  ret_to_arg_ref_tmp__chpl = &ret_tmp_chpl;
  _cast3(_e2_args_chpl, ret_to_arg_ref_tmp__chpl);
  call_tmp_chpl = ret_tmp_chpl;
  _ref_tmp__chpl3 = &str_chpl;
  chpl___PLUS__ASSIGN_(_ref_tmp__chpl3, &call_tmp_chpl);
  _ref_tmp__chpl4 = &call_tmp_chpl;
  chpl_macro_tmp_7548.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7548.addr = _ref_tmp__chpl4;
  tmp_chpl2 = chpl_macro_tmp_7548;
  deinit44(tmp_chpl2);
  *(_retArg_chpl) = str_chpl;
  return;
}

/* IO.chpl:4072 */
static void stringify_chpl(_ref_string _e1_args_chpl,
                           chpl____wide__ref__wide__array_DefaultRectangularArr_uint64_t_1_int64_t_F_int64_t _e2_args_chpl,
                           _ref_string _retArg_chpl) {
  int32_t local_IOHINT_NONE_chpl;
  int16_t local_CHPL_RT_MD_ARRAY_ELEMENTS_chpl;
  string local__str_literal_411_chpl;
  string local__str_literal_2617_chpl;
  string local__str_literal_2619_chpl;
  int32_t local_c_sublocid_any_chpl;
  _array_DefaultRectangularArr_uint64_t_1_int64_t_F_int64_t this_x2_chpl;
  file_chpl f_chpl;
  iostyle call_tmp_chpl;
  iostyle ret_tmp_chpl;
  _ref_iostyle ret_to_arg_ref_tmp__chpl = NULL;
  file_chpl ret_tmp_chpl2;
  _ref_file ret_to_arg_ref_tmp__chpl2 = NULL;
  _ref_iostyle i_style_chpl = NULL;
  channel_T_dynamic_F_chpl w_chpl;
  _ref_file _ref_tmp__chpl = NULL;
  iostyle call_tmp_chpl2;
  iostyle ret_tmp_chpl3;
  _ref_iostyle ret_to_arg_ref_tmp__chpl3 = NULL;
  channel_T_dynamic_F_chpl ret_tmp_chpl4;
  _ref_channel_T_dynamic_F ret_to_arg_ref_tmp__chpl4 = NULL;
  _ref_iostyle i_style_chpl2 = NULL;
  _ref_channel_T_dynamic_F _ref_tmp__chpl2 = NULL;
  _ref_string i__e1_args_chpl = NULL;
  syserr _formal_tmp_error_chpl;
  _tuple_2__ref_string__ref__array_DefaultRectangularArr_uint64_t_1_int64_t_F_int64_t args_chpl;
  _ref_string _ref_tmp__chpl3 = NULL;
  chpl____wide__ref_string tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  syserr call_tmp_chpl3;
  chpl____wide_locale ret_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_locale ret_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp_chpl5;
  chpl____wide_object tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t _autoCopy_tmp__chpl;
  chpl____wide_locale call_tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__wide_locale call_tmp_chpl7 = NULL;
  chpl_localeID_t call_tmp_chpl8;
  chpl____wide_locale tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_syserr tmp_chpl4 = NULL;
  _ref__tuple_2__ref_string__ref__array_DefaultRectangularArr_uint64_t_1_int64_t_F_int64_t tmp_chpl5 = NULL;
  chpl____wide_locale rvfDerefTmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect_chpl;
  chpl____wide__ref_syserr tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__tuple_2__ref_string__ref__array_DefaultRectangularArr_uint64_t_1_int64_t_F_int64_t tmp_chpl7 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl53 _args_foron_fn_chpl = NULL;
  _ref_syserr tmp_chpl8 = NULL;
  chpl____wide__ref_syserr tmp_chpl9 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__tuple_2__ref_string__ref__array_DefaultRectangularArr_uint64_t_1_int64_t_F_int64_t tmp_chpl10 = NULL;
  chpl____wide__ref__tuple_2__ref_string__ref__array_DefaultRectangularArr_uint64_t_1_int64_t_F_int64_t tmp_chpl11 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  int32_t call_tmp_chpl9;
  chpl_bool call_tmp_chpl10;
  string call_tmp_chpl11;
  string ret_tmp_chpl5;
  _ref_string ret_to_arg_ref_tmp__chpl5 = NULL;
  string call_tmp_chpl12;
  string ret_tmp_chpl6;
  _ref_string ret_to_arg_ref_tmp__chpl6 = NULL;
  string call_tmp_chpl13;
  string ret_tmp_chpl7;
  _ref_string ret_to_arg_ref_tmp__chpl7 = NULL;
  chpl____wide__ref_channel_T_dynamic_F tmp_chpl12 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp__chpl4 = NULL;
  chpl____wide__ref_string tmp_chpl13 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp__chpl5 = NULL;
  chpl____wide__ref_string tmp_chpl14 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp__chpl6 = NULL;
  chpl____wide__ref_string tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp_chpl14;
  c_ptr_uint8_t buf_chpl = NULL;
  uint64_t call_tmp_chpl15;
  uint64_t call_tmp_chpl16;
  c_void_ptr call_tmp_chpl17;
  c_ptr_uint8_t call_tmp_chpl18 = NULL;
  channel_F_dynamic_F_chpl r_chpl;
  _ref_file _ref_tmp__chpl7 = NULL;
  int32_t default_arghints_chpl;
  iostyle call_tmp_chpl19;
  iostyle ret_tmp_chpl8;
  _ref_iostyle ret_to_arg_ref_tmp__chpl8 = NULL;
  channel_F_dynamic_F_chpl ret_tmp_chpl9;
  _ref_channel_F_dynamic_F ret_to_arg_ref_tmp__chpl9 = NULL;
  _ref_iostyle i_style_chpl3 = NULL;
  _ref_uint8_t call_tmp_chpl20 = NULL;
  string ret_tmp_chpl10;
  _ref_string ret_to_arg_ref_tmp__chpl10 = NULL;
  _ref_channel_F_dynamic_F _ref_tmp__chpl8 = NULL;
  _ref_channel_T_dynamic_F _ref_tmp__chpl9 = NULL;
  _ref_file _ref_tmp__chpl10 = NULL;
  chpl____wide__ref_string chpl_macro_tmp_7549;
  chpl____wide_object chpl_macro_tmp_7550;
  chpl____wide__nilType chpl_macro_tmp_7551;
  chpl____wide_object chpl_macro_tmp_7552;
  chpl____wide__ref_syserr chpl_macro_tmp_7553;
  chpl____wide__ref__tuple_2__ref_string__ref__array_DefaultRectangularArr_uint64_t_1_int64_t_F_int64_t chpl_macro_tmp_7554;
  chpl__class_localson_fn_chpl53_object chpl_macro_tmp_7555;
  chpl____wide__ref_syserr chpl_macro_tmp_7556;
  chpl____wide__ref__tuple_2__ref_string__ref__array_DefaultRectangularArr_uint64_t_1_int64_t_F_int64_t chpl_macro_tmp_7557;
  chpl____wide__ref_channel_T_dynamic_F chpl_macro_tmp_7558;
  chpl____wide__ref_string chpl_macro_tmp_7559;
  chpl____wide__ref_string chpl_macro_tmp_7560;
  chpl____wide__ref_string chpl_macro_tmp_7561;
  local_IOHINT_NONE_chpl = IOHINT_NONE_chpl;
  local_CHPL_RT_MD_ARRAY_ELEMENTS_chpl = CHPL_RT_MD_ARRAY_ELEMENTS;
  local__str_literal_411_chpl /* ")" */ = _str_literal_411 /* ")" */;
  local__str_literal_2617_chpl /* "in channel.write(" */ = _str_literal_2617 /* "in channel.write(" */;
  local__str_literal_2619_chpl /* "" */ = _str_literal_2619 /* "" */;
  local_c_sublocid_any_chpl = c_sublocid_any;
  chpl_gen_comm_get(((void*)(&this_x2_chpl)), chpl_nodeFromLocaleID(&((_e2_args_chpl).locale), INT64(0), INT32(0)), (_e2_args_chpl).addr, sizeof(_array_DefaultRectangularArr_uint64_t_1_int64_t_F_int64_t), -1, COMMID(77), INT64(4072), INT64(71));
  ret_to_arg_ref_tmp__chpl = &ret_tmp_chpl;
  defaultIOStyle_chpl(ret_to_arg_ref_tmp__chpl);
  call_tmp_chpl = ret_tmp_chpl;
  ret_to_arg_ref_tmp__chpl2 = &ret_tmp_chpl2;
  i_style_chpl = &call_tmp_chpl;
  openmem_chpl2(i_style_chpl, ret_to_arg_ref_tmp__chpl2);
  f_chpl = ret_tmp_chpl2;
  _ref_tmp__chpl = &f_chpl;
  ret_to_arg_ref_tmp__chpl3 = &ret_tmp_chpl3;
  _style_chpl(_ref_tmp__chpl, ret_to_arg_ref_tmp__chpl3);
  call_tmp_chpl2 = ret_tmp_chpl3;
  ret_to_arg_ref_tmp__chpl4 = &ret_tmp_chpl4;
  i_style_chpl2 = &call_tmp_chpl2;
  writer_chpl4(_ref_tmp__chpl, INT64(0), INT64(9223372036854775807), ((int32_t)(INT64(0))), i_style_chpl2, ret_to_arg_ref_tmp__chpl4);
  w_chpl = ret_tmp_chpl4;
  _ref_tmp__chpl2 = &w_chpl;
  i__e1_args_chpl = _e1_args_chpl;
  qio_int_to_err(INT32(0));
  _ref_tmp__chpl3 = i__e1_args_chpl;
  chpl_macro_tmp_7549.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7549.addr = _ref_tmp__chpl3;
  tmp_chpl = chpl_macro_tmp_7549;
  (&args_chpl)->x1 = tmp_chpl;
  (&args_chpl)->x2 = this_x2_chpl;
  call_tmp_chpl3 = qio_int_to_err(INT32(0));
  _formal_tmp_error_chpl = call_tmp_chpl3;
  ret_chpl2 = (&w_chpl)->_readWriteThisFromLocale_chpl;
  ret_chpl = ret_chpl2;
  chpl_macro_tmp_7550.locale = (&ret_chpl2)->locale;
  chpl_macro_tmp_7550.addr = ((object)((&ret_chpl2)->addr));
  call_tmp_chpl4 = chpl_macro_tmp_7550;
  chpl_macro_tmp_7551.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7551.addr = nil;
  chpl_macro_tmp_7552.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7552.addr = NULL;
  tmp_chpl2 = chpl_macro_tmp_7552;
  call_tmp_chpl5 = (! (((&call_tmp_chpl4)->addr != (&tmp_chpl2)->addr) || ((!(! (&call_tmp_chpl4)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp_chpl4)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&tmp_chpl2)->locale), INT64(0), INT32(0))))));
  if (call_tmp_chpl5) {
    _autoCopy_tmp__chpl = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any_chpl);
    call_tmp_chpl6 = chpl_localeID_to_locale(&_autoCopy_tmp__chpl);
    ret_chpl = call_tmp_chpl6;
  }
  call_tmp_chpl7 = &((&w_chpl)->home_chpl);
  tmp_chpl3 = *(call_tmp_chpl7);
  call_tmp_chpl8 = (&tmp_chpl3)->locale;
  tmp_chpl4 = &_formal_tmp_error_chpl;
  tmp_chpl5 = &args_chpl;
  rvfDerefTmp_chpl = ret_chpl;
  isdirect_chpl = chpl_doDirectExecuteOn(&call_tmp_chpl8);
  if (isdirect_chpl) {
    chpl_macro_tmp_7553.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7553.addr = tmp_chpl4;
    tmp_chpl6 = chpl_macro_tmp_7553;
    chpl_macro_tmp_7554.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7554.addr = tmp_chpl5;
    tmp_chpl7 = chpl_macro_tmp_7554;
    on_fn_chpl53(&w_chpl, tmp_chpl6, tmp_chpl7, rvfDerefTmp_chpl);
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn_chpl53)(&chpl_macro_tmp_7555));
    (_args_foron_fn_chpl)->_0_rvfDerefTmp_chpl = call_tmp_chpl8;
    (_args_foron_fn_chpl)->_1_rvfDerefTmp_chpl = w_chpl;
    tmp_chpl8 = &_formal_tmp_error_chpl;
    chpl_macro_tmp_7556.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7556.addr = tmp_chpl8;
    tmp_chpl9 = chpl_macro_tmp_7556;
    (_args_foron_fn_chpl)->_2_tmp_chpl = tmp_chpl9;
    tmp_chpl10 = &args_chpl;
    chpl_macro_tmp_7557.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7557.addr = tmp_chpl10;
    tmp_chpl11 = chpl_macro_tmp_7557;
    (_args_foron_fn_chpl)->_3_tmp_chpl = tmp_chpl11;
    (_args_foron_fn_chpl)->_4_rvfDerefTmp_chpl = rvfDerefTmp_chpl;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    /*** wrapon_fn_chpl50 ***/ chpl_executeOn(&call_tmp_chpl8, INT32(306), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), sizeof(chpl__class_localson_fn_chpl53_object), INT64(4613), INT32(71));
  }
  qio_err_iserr(_formal_tmp_error_chpl);
  call_tmp_chpl9 = qio_err_iserr(_formal_tmp_error_chpl);
  call_tmp_chpl10 = (call_tmp_chpl9 == INT32(0));
  if (call_tmp_chpl10) {
    goto _end_write_chpl;
  } else {
    ret_to_arg_ref_tmp__chpl5 = &ret_tmp_chpl5;
    _args_to_proto_chpl(i__e1_args_chpl, &this_x2_chpl, &local__str_literal_2619_chpl /* "" */, ret_to_arg_ref_tmp__chpl5);
    call_tmp_chpl11 = ret_tmp_chpl5;
    ret_to_arg_ref_tmp__chpl6 = &ret_tmp_chpl6;
    chpl___PLUS_(&local__str_literal_2617_chpl /* "in channel.write(" */, &ret_tmp_chpl5, ret_to_arg_ref_tmp__chpl6);
    call_tmp_chpl12 = ret_tmp_chpl6;
    ret_to_arg_ref_tmp__chpl7 = &ret_tmp_chpl7;
    chpl___PLUS_(&ret_tmp_chpl6, &local__str_literal_411_chpl /* ")" */, ret_to_arg_ref_tmp__chpl7);
    call_tmp_chpl13 = ret_tmp_chpl7;
    chpl_macro_tmp_7558.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7558.addr = _ref_tmp__chpl2;
    tmp_chpl12 = chpl_macro_tmp_7558;
    _ch_ioerror_chpl3(tmp_chpl12, _formal_tmp_error_chpl, &ret_tmp_chpl7);
    _ref_tmp__chpl4 = &call_tmp_chpl13;
    chpl_macro_tmp_7559.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7559.addr = _ref_tmp__chpl4;
    tmp_chpl13 = chpl_macro_tmp_7559;
    deinit44(tmp_chpl13);
    _ref_tmp__chpl5 = &call_tmp_chpl12;
    chpl_macro_tmp_7560.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7560.addr = _ref_tmp__chpl5;
    tmp_chpl14 = chpl_macro_tmp_7560;
    deinit44(tmp_chpl14);
    _ref_tmp__chpl6 = &call_tmp_chpl11;
    chpl_macro_tmp_7561.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7561.addr = _ref_tmp__chpl6;
    tmp_chpl15 = chpl_macro_tmp_7561;
    deinit44(tmp_chpl15);
    goto _end_write_chpl;
  }
  _end_write_chpl:;
  call_tmp_chpl14 = offset_chpl(&w_chpl);
  call_tmp_chpl15 = ((uint64_t)(((int64_t)((call_tmp_chpl14 + INT64(1))))));
  call_tmp_chpl16 = sizeof(uint8_t);
  call_tmp_chpl17 = chpl_here_alloc2(((uint64_t)((call_tmp_chpl15 * call_tmp_chpl16))), local_CHPL_RT_MD_ARRAY_ELEMENTS_chpl);
  call_tmp_chpl18 = ((c_ptr_uint8_t)(call_tmp_chpl17));
  buf_chpl = call_tmp_chpl18;
  close_chpl6(&w_chpl);
  _ref_tmp__chpl7 = &f_chpl;
  default_arghints_chpl = local_IOHINT_NONE_chpl;
  ret_to_arg_ref_tmp__chpl8 = &ret_tmp_chpl8;
  _style_chpl(_ref_tmp__chpl7, ret_to_arg_ref_tmp__chpl8);
  call_tmp_chpl19 = ret_tmp_chpl8;
  ret_to_arg_ref_tmp__chpl9 = &ret_tmp_chpl9;
  i_style_chpl3 = &call_tmp_chpl19;
  reader_chpl4(_ref_tmp__chpl7, INT64(0), INT64(9223372036854775807), default_arghints_chpl, i_style_chpl3, ret_to_arg_ref_tmp__chpl9);
  r_chpl = ret_tmp_chpl9;
  readBytes_chpl2(&r_chpl, call_tmp_chpl18, call_tmp_chpl14);
  call_tmp_chpl20 = (buf_chpl + call_tmp_chpl14);
  *(call_tmp_chpl20) = ((uint8_t)(INT64(0)));
  close_chpl5(&r_chpl);
  close_chpl2(&f_chpl);
  ret_to_arg_ref_tmp__chpl10 = &ret_tmp_chpl10;
  string4(call_tmp_chpl18, call_tmp_chpl14, ((int64_t)((call_tmp_chpl14 + INT64(1)))), UINT8(true), UINT8(false), ret_to_arg_ref_tmp__chpl10);
  _ref_tmp__chpl8 = &r_chpl;
  deinit_chpl4(_ref_tmp__chpl8);
  _ref_tmp__chpl9 = &w_chpl;
  deinit_chpl5(_ref_tmp__chpl9);
  _ref_tmp__chpl10 = &f_chpl;
  deinit_chpl(_ref_tmp__chpl10);
  *(_retArg_chpl) = ret_tmp_chpl10;
  return;
}

/* IO.chpl:4128 */
static void _args_to_proto_chpl3(_ref_string _e1_args_chpl,
                                 _ref_ioNewline _e2_args_chpl,
                                 _ref_string preArg_chpl,
                                 _ref_string _retArg_chpl) {
  string local__str_literal_3388_chpl;
  string local__str_literal_3384_chpl;
  string local__str_literal_432_chpl;
  string err_args_chpl;
  string this_chpl6;
  c_ptr_uint8_t call_tmp_chpl = NULL;
  int32_t default_arglocale_id_chpl;
  string ret_tmp_chpl;
  _ref_string ret_to_arg_ref_tmp__chpl = NULL;
  string name_chpl;
  string this_chpl7;
  c_ptr_uint8_t call_tmp_chpl2 = NULL;
  int32_t default_arglocale_id_chpl2;
  string ret_tmp_chpl2;
  _ref_string ret_to_arg_ref_tmp__chpl2 = NULL;
  chpl____wide__ref_string call_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__tuple_6_star_string tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp__chpl = NULL;
  chpl____wide__ref_string i_rhs_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  string call_tmp_chpl4;
  string ret_tmp_chpl3;
  _ref_string ret_to_arg_ref_tmp__chpl3 = NULL;
  string call_tmp_chpl5;
  string ret_tmp_chpl4;
  _ref_string ret_to_arg_ref_tmp__chpl4 = NULL;
  string call_tmp_chpl6;
  string ret_tmp_chpl5;
  _ref_string ret_to_arg_ref_tmp__chpl5 = NULL;
  _ref_string _ref_tmp__chpl2 = NULL;
  _ref_string _ref_tmp__chpl3 = NULL;
  _ref_string _ref_tmp__chpl4 = NULL;
  chpl____wide__ref_string tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp__chpl5 = NULL;
  chpl____wide__ref_string tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp__chpl6 = NULL;
  chpl____wide__ref_string tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp__chpl7 = NULL;
  chpl____wide__ref_string tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  string name_chpl2;
  string this_chpl8;
  c_ptr_uint8_t call_tmp_chpl7 = NULL;
  int32_t default_arglocale_id_chpl3;
  string ret_tmp_chpl6;
  _ref_string ret_to_arg_ref_tmp__chpl6 = NULL;
  chpl____wide__ref_string call_tmp_chpl8 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__tuple_6_star_string tmp_chpl7 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp__chpl8 = NULL;
  chpl____wide__ref_string i_rhs_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string tmp_chpl8 = {CHPL_LOCALEID_T_INIT, NULL};
  string call_tmp_chpl9;
  string ret_tmp_chpl7;
  _ref_string ret_to_arg_ref_tmp__chpl7 = NULL;
  string call_tmp_chpl10;
  string ret_tmp_chpl8;
  _ref_string ret_to_arg_ref_tmp__chpl8 = NULL;
  string call_tmp_chpl11;
  string ret_tmp_chpl9;
  _ref_string ret_to_arg_ref_tmp__chpl9 = NULL;
  _ref_string _ref_tmp__chpl9 = NULL;
  _ref_string _ref_tmp__chpl10 = NULL;
  chpl____wide__ref_string tmp_chpl9 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp__chpl11 = NULL;
  chpl____wide__ref_string tmp_chpl10 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp__chpl12 = NULL;
  chpl____wide__ref_string tmp_chpl11 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp__chpl13 = NULL;
  chpl____wide__ref_string tmp_chpl12 = {CHPL_LOCALEID_T_INIT, NULL};
  string ret_chpl;
  chpl____wide__ref_string tmp_chpl13 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp__chpl14 = NULL;
  chpl____wide__ref_string tmp_chpl14 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__tuple_6_star_string chpl_macro_tmp_7562;
  chpl____wide__ref_string chpl_macro_tmp_7563;
  chpl____wide__ref_string chpl_macro_tmp_7564;
  chpl____wide__ref_string chpl_macro_tmp_7565;
  chpl____wide__ref_string chpl_macro_tmp_7566;
  chpl____wide__ref_string chpl_macro_tmp_7567;
  chpl____wide__ref_string chpl_macro_tmp_7568;
  chpl____wide__ref__tuple_6_star_string chpl_macro_tmp_7569;
  chpl____wide__ref_string chpl_macro_tmp_7570;
  chpl____wide__ref_string chpl_macro_tmp_7571;
  chpl____wide__ref_string chpl_macro_tmp_7572;
  chpl____wide__ref_string chpl_macro_tmp_7573;
  chpl____wide__ref_string chpl_macro_tmp_7574;
  chpl____wide__ref_string chpl_macro_tmp_7575;
  chpl____wide__ref_string chpl_macro_tmp_7576;
  chpl____wide__ref_string chpl_macro_tmp_7577;
  local__str_literal_3388_chpl /* "ioNewline" */ = _str_literal_3388 /* "ioNewline" */;
  local__str_literal_3384_chpl /* "string" */ = _str_literal_3384 /* "string" */;
  local__str_literal_432_chpl /* ":" */ = _str_literal_432 /* ":" */;
  (&this_chpl6)->len = INT64(0);
  (&this_chpl6)->_size = INT64(0);
  (&this_chpl6)->buff = nil;
  (&this_chpl6)->owned = UINT8(false);
  (&this_chpl6)->locale_id = INT32(0);
  (&this_chpl6)->len = INT64(0);
  (&this_chpl6)->_size = INT64(0);
  call_tmp_chpl = ((c_ptr_uint8_t)(nil));
  (&this_chpl6)->buff = call_tmp_chpl;
  (&this_chpl6)->owned = UINT8(true);
  default_arglocale_id_chpl = chpl_nodeID;
  (&this_chpl6)->locale_id = default_arglocale_id_chpl;
  ret_to_arg_ref_tmp__chpl = &ret_tmp_chpl;
  _construct_string(INT64(0), INT64(0), call_tmp_chpl, UINT8(true), default_arglocale_id_chpl, &this_chpl6, ret_to_arg_ref_tmp__chpl);
  err_args_chpl = ret_tmp_chpl;
  (&this_chpl7)->len = INT64(0);
  (&this_chpl7)->_size = INT64(0);
  (&this_chpl7)->buff = nil;
  (&this_chpl7)->owned = UINT8(false);
  (&this_chpl7)->locale_id = INT32(0);
  (&this_chpl7)->len = INT64(0);
  (&this_chpl7)->_size = INT64(0);
  call_tmp_chpl2 = ((c_ptr_uint8_t)(nil));
  (&this_chpl7)->buff = call_tmp_chpl2;
  (&this_chpl7)->owned = UINT8(true);
  default_arglocale_id_chpl2 = chpl_nodeID;
  (&this_chpl7)->locale_id = default_arglocale_id_chpl2;
  ret_to_arg_ref_tmp__chpl2 = &ret_tmp_chpl2;
  _construct_string(INT64(0), INT64(0), call_tmp_chpl2, UINT8(true), default_arglocale_id_chpl2, &this_chpl7, ret_to_arg_ref_tmp__chpl2);
  name_chpl = ret_tmp_chpl2;
  chpl_macro_tmp_7562.locale = (&_arg_to_proto_names_chpl)->locale;
  chpl_macro_tmp_7562.addr = &(((&_arg_to_proto_names_chpl)->addr)->value);
  tmp_chpl = chpl_macro_tmp_7562;
  chpl_macro_tmp_7563.locale = (tmp_chpl).locale;
  chpl_macro_tmp_7563.addr = (*((tmp_chpl).addr) + INT64(0));
  call_tmp_chpl3 = chpl_macro_tmp_7563;
  _ref_tmp__chpl = &name_chpl;
  i_rhs_chpl = call_tmp_chpl3;
  chpl_macro_tmp_7564.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7564.addr = _ref_tmp__chpl;
  tmp_chpl2 = chpl_macro_tmp_7564;
  chpl___ASSIGN_13(tmp_chpl2, i_rhs_chpl);
  ret_to_arg_ref_tmp__chpl3 = &ret_tmp_chpl3;
  chpl___PLUS_(preArg_chpl, &name_chpl, ret_to_arg_ref_tmp__chpl3);
  call_tmp_chpl4 = ret_tmp_chpl3;
  ret_to_arg_ref_tmp__chpl4 = &ret_tmp_chpl4;
  chpl___PLUS_(&ret_tmp_chpl3, &local__str_literal_432_chpl /* ":" */, ret_to_arg_ref_tmp__chpl4);
  call_tmp_chpl5 = ret_tmp_chpl4;
  ret_to_arg_ref_tmp__chpl5 = &ret_tmp_chpl5;
  chpl___PLUS_(&ret_tmp_chpl4, &local__str_literal_3384_chpl /* "string" */, ret_to_arg_ref_tmp__chpl5);
  call_tmp_chpl6 = ret_tmp_chpl5;
  _ref_tmp__chpl2 = &err_args_chpl;
  chpl___PLUS__ASSIGN_(_ref_tmp__chpl2, &call_tmp_chpl6);
  _ref_tmp__chpl3 = &err_args_chpl;
  chpl___PLUS__ASSIGN_(_ref_tmp__chpl3, &_str_literal_583 /* ", " */);
  _ref_tmp__chpl4 = &name_chpl;
  chpl_macro_tmp_7565.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7565.addr = _ref_tmp__chpl4;
  tmp_chpl3 = chpl_macro_tmp_7565;
  deinit44(tmp_chpl3);
  _ref_tmp__chpl5 = &call_tmp_chpl4;
  chpl_macro_tmp_7566.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7566.addr = _ref_tmp__chpl5;
  tmp_chpl4 = chpl_macro_tmp_7566;
  deinit44(tmp_chpl4);
  _ref_tmp__chpl6 = &call_tmp_chpl5;
  chpl_macro_tmp_7567.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7567.addr = _ref_tmp__chpl6;
  tmp_chpl5 = chpl_macro_tmp_7567;
  deinit44(tmp_chpl5);
  _ref_tmp__chpl7 = &call_tmp_chpl6;
  chpl_macro_tmp_7568.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7568.addr = _ref_tmp__chpl7;
  tmp_chpl6 = chpl_macro_tmp_7568;
  deinit44(tmp_chpl6);
  (&this_chpl8)->len = INT64(0);
  (&this_chpl8)->_size = INT64(0);
  (&this_chpl8)->buff = nil;
  (&this_chpl8)->owned = UINT8(false);
  (&this_chpl8)->locale_id = INT32(0);
  (&this_chpl8)->len = INT64(0);
  (&this_chpl8)->_size = INT64(0);
  call_tmp_chpl7 = ((c_ptr_uint8_t)(nil));
  (&this_chpl8)->buff = call_tmp_chpl7;
  (&this_chpl8)->owned = UINT8(true);
  default_arglocale_id_chpl3 = chpl_nodeID;
  (&this_chpl8)->locale_id = default_arglocale_id_chpl3;
  ret_to_arg_ref_tmp__chpl6 = &ret_tmp_chpl6;
  _construct_string(INT64(0), INT64(0), call_tmp_chpl7, UINT8(true), default_arglocale_id_chpl3, &this_chpl8, ret_to_arg_ref_tmp__chpl6);
  name_chpl2 = ret_tmp_chpl6;
  chpl_macro_tmp_7569.locale = (&_arg_to_proto_names_chpl)->locale;
  chpl_macro_tmp_7569.addr = &(((&_arg_to_proto_names_chpl)->addr)->value);
  tmp_chpl7 = chpl_macro_tmp_7569;
  chpl_macro_tmp_7570.locale = (tmp_chpl7).locale;
  chpl_macro_tmp_7570.addr = (*((tmp_chpl7).addr) + INT64(1));
  call_tmp_chpl8 = chpl_macro_tmp_7570;
  _ref_tmp__chpl8 = &name_chpl2;
  i_rhs_chpl2 = call_tmp_chpl8;
  chpl_macro_tmp_7571.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7571.addr = _ref_tmp__chpl8;
  tmp_chpl8 = chpl_macro_tmp_7571;
  chpl___ASSIGN_13(tmp_chpl8, i_rhs_chpl2);
  ret_to_arg_ref_tmp__chpl7 = &ret_tmp_chpl7;
  chpl___PLUS_(preArg_chpl, &name_chpl2, ret_to_arg_ref_tmp__chpl7);
  call_tmp_chpl9 = ret_tmp_chpl7;
  ret_to_arg_ref_tmp__chpl8 = &ret_tmp_chpl8;
  chpl___PLUS_(&ret_tmp_chpl7, &local__str_literal_432_chpl /* ":" */, ret_to_arg_ref_tmp__chpl8);
  call_tmp_chpl10 = ret_tmp_chpl8;
  ret_to_arg_ref_tmp__chpl9 = &ret_tmp_chpl9;
  chpl___PLUS_(&ret_tmp_chpl8, &local__str_literal_3388_chpl /* "ioNewline" */, ret_to_arg_ref_tmp__chpl9);
  call_tmp_chpl11 = ret_tmp_chpl9;
  _ref_tmp__chpl9 = &err_args_chpl;
  chpl___PLUS__ASSIGN_(_ref_tmp__chpl9, &call_tmp_chpl11);
  _ref_tmp__chpl10 = &name_chpl2;
  chpl_macro_tmp_7572.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7572.addr = _ref_tmp__chpl10;
  tmp_chpl9 = chpl_macro_tmp_7572;
  deinit44(tmp_chpl9);
  _ref_tmp__chpl11 = &call_tmp_chpl9;
  chpl_macro_tmp_7573.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7573.addr = _ref_tmp__chpl11;
  tmp_chpl10 = chpl_macro_tmp_7573;
  deinit44(tmp_chpl10);
  _ref_tmp__chpl12 = &call_tmp_chpl10;
  chpl_macro_tmp_7574.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7574.addr = _ref_tmp__chpl12;
  tmp_chpl11 = chpl_macro_tmp_7574;
  deinit44(tmp_chpl11);
  _ref_tmp__chpl13 = &call_tmp_chpl11;
  chpl_macro_tmp_7575.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7575.addr = _ref_tmp__chpl13;
  tmp_chpl12 = chpl_macro_tmp_7575;
  deinit44(tmp_chpl12);
  chpl_macro_tmp_7576.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7576.addr = &err_args_chpl;
  tmp_chpl13 = chpl_macro_tmp_7576;
  ret_chpl = chpl__initCopy13(tmp_chpl13);
  *(_retArg_chpl) = ret_chpl;
  _ref_tmp__chpl14 = &err_args_chpl;
  chpl_macro_tmp_7577.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7577.addr = _ref_tmp__chpl14;
  tmp_chpl14 = chpl_macro_tmp_7577;
  deinit44(tmp_chpl14);
  return;
}

/* IO.chpl:4128 */
static void _args_to_proto_chpl4(_ref_string _e1_args_chpl,
                                 int64_t _e2_args_chpl,
                                 _ref_string _e3_args_chpl,
                                 _ref__tuple_2_chpl_bool_int64_t _e4_args_chpl,
                                 _ref_ioNewline _e5_args_chpl,
                                 _ref_string preArg_chpl,
                                 _ref_string _retArg_chpl) {
  string local__str_literal_3388_chpl;
  string local__str_literal_3598_chpl;
  string local__str_literal_3386_chpl;
  string local__str_literal_3384_chpl;
  string local__str_literal_432_chpl;
  string err_args_chpl;
  string this_chpl6;
  c_ptr_uint8_t call_tmp_chpl = NULL;
  int32_t default_arglocale_id_chpl;
  string ret_tmp_chpl;
  _ref_string ret_to_arg_ref_tmp__chpl = NULL;
  string name_chpl;
  string this_chpl7;
  c_ptr_uint8_t call_tmp_chpl2 = NULL;
  int32_t default_arglocale_id_chpl2;
  string ret_tmp_chpl2;
  _ref_string ret_to_arg_ref_tmp__chpl2 = NULL;
  chpl____wide__ref_string call_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__tuple_6_star_string tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp__chpl = NULL;
  chpl____wide__ref_string i_rhs_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  string call_tmp_chpl4;
  string ret_tmp_chpl3;
  _ref_string ret_to_arg_ref_tmp__chpl3 = NULL;
  string call_tmp_chpl5;
  string ret_tmp_chpl4;
  _ref_string ret_to_arg_ref_tmp__chpl4 = NULL;
  string call_tmp_chpl6;
  string ret_tmp_chpl5;
  _ref_string ret_to_arg_ref_tmp__chpl5 = NULL;
  _ref_string _ref_tmp__chpl2 = NULL;
  _ref_string _ref_tmp__chpl3 = NULL;
  _ref_string _ref_tmp__chpl4 = NULL;
  chpl____wide__ref_string tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp__chpl5 = NULL;
  chpl____wide__ref_string tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp__chpl6 = NULL;
  chpl____wide__ref_string tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp__chpl7 = NULL;
  chpl____wide__ref_string tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  string name_chpl2;
  string this_chpl8;
  c_ptr_uint8_t call_tmp_chpl7 = NULL;
  int32_t default_arglocale_id_chpl3;
  string ret_tmp_chpl6;
  _ref_string ret_to_arg_ref_tmp__chpl6 = NULL;
  chpl____wide__ref_string call_tmp_chpl8 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__tuple_6_star_string tmp_chpl7 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp__chpl8 = NULL;
  chpl____wide__ref_string i_rhs_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string tmp_chpl8 = {CHPL_LOCALEID_T_INIT, NULL};
  string call_tmp_chpl9;
  string ret_tmp_chpl7;
  _ref_string ret_to_arg_ref_tmp__chpl7 = NULL;
  string call_tmp_chpl10;
  string ret_tmp_chpl8;
  _ref_string ret_to_arg_ref_tmp__chpl8 = NULL;
  string call_tmp_chpl11;
  string ret_tmp_chpl9;
  _ref_string ret_to_arg_ref_tmp__chpl9 = NULL;
  _ref_string _ref_tmp__chpl9 = NULL;
  _ref_string _ref_tmp__chpl10 = NULL;
  _ref_string _ref_tmp__chpl11 = NULL;
  chpl____wide__ref_string tmp_chpl9 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp__chpl12 = NULL;
  chpl____wide__ref_string tmp_chpl10 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp__chpl13 = NULL;
  chpl____wide__ref_string tmp_chpl11 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp__chpl14 = NULL;
  chpl____wide__ref_string tmp_chpl12 = {CHPL_LOCALEID_T_INIT, NULL};
  string name_chpl3;
  string this_chpl9;
  c_ptr_uint8_t call_tmp_chpl12 = NULL;
  int32_t default_arglocale_id_chpl4;
  string ret_tmp_chpl10;
  _ref_string ret_to_arg_ref_tmp__chpl10 = NULL;
  chpl____wide__ref_string call_tmp_chpl13 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__tuple_6_star_string tmp_chpl13 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp__chpl15 = NULL;
  chpl____wide__ref_string i_rhs_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string tmp_chpl14 = {CHPL_LOCALEID_T_INIT, NULL};
  string call_tmp_chpl14;
  string ret_tmp_chpl11;
  _ref_string ret_to_arg_ref_tmp__chpl11 = NULL;
  string call_tmp_chpl15;
  string ret_tmp_chpl12;
  _ref_string ret_to_arg_ref_tmp__chpl12 = NULL;
  string call_tmp_chpl16;
  string ret_tmp_chpl13;
  _ref_string ret_to_arg_ref_tmp__chpl13 = NULL;
  _ref_string _ref_tmp__chpl16 = NULL;
  _ref_string _ref_tmp__chpl17 = NULL;
  _ref_string _ref_tmp__chpl18 = NULL;
  chpl____wide__ref_string tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp__chpl19 = NULL;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp__chpl20 = NULL;
  chpl____wide__ref_string tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp__chpl21 = NULL;
  chpl____wide__ref_string tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  string name_chpl4;
  string this_chpl10;
  c_ptr_uint8_t call_tmp_chpl17 = NULL;
  int32_t default_arglocale_id_chpl5;
  string ret_tmp_chpl14;
  _ref_string ret_to_arg_ref_tmp__chpl14 = NULL;
  chpl____wide__ref_string call_tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__tuple_6_star_string tmp_chpl19 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp__chpl22 = NULL;
  chpl____wide__ref_string i_rhs_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string tmp_chpl20 = {CHPL_LOCALEID_T_INIT, NULL};
  string call_tmp_chpl19;
  string ret_tmp_chpl15;
  _ref_string ret_to_arg_ref_tmp__chpl15 = NULL;
  string call_tmp_chpl20;
  string ret_tmp_chpl16;
  _ref_string ret_to_arg_ref_tmp__chpl16 = NULL;
  string call_tmp_chpl21;
  string ret_tmp_chpl17;
  _ref_string ret_to_arg_ref_tmp__chpl17 = NULL;
  _ref_string _ref_tmp__chpl23 = NULL;
  _ref_string _ref_tmp__chpl24 = NULL;
  _ref_string _ref_tmp__chpl25 = NULL;
  chpl____wide__ref_string tmp_chpl21 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp__chpl26 = NULL;
  chpl____wide__ref_string tmp_chpl22 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp__chpl27 = NULL;
  chpl____wide__ref_string tmp_chpl23 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp__chpl28 = NULL;
  chpl____wide__ref_string tmp_chpl24 = {CHPL_LOCALEID_T_INIT, NULL};
  string name_chpl5;
  string this_chpl11;
  c_ptr_uint8_t call_tmp_chpl22 = NULL;
  int32_t default_arglocale_id_chpl6;
  string ret_tmp_chpl18;
  _ref_string ret_to_arg_ref_tmp__chpl18 = NULL;
  chpl____wide__ref_string call_tmp_chpl23 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__tuple_6_star_string tmp_chpl25 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp__chpl29 = NULL;
  chpl____wide__ref_string i_rhs_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string tmp_chpl26 = {CHPL_LOCALEID_T_INIT, NULL};
  string call_tmp_chpl24;
  string ret_tmp_chpl19;
  _ref_string ret_to_arg_ref_tmp__chpl19 = NULL;
  string call_tmp_chpl25;
  string ret_tmp_chpl20;
  _ref_string ret_to_arg_ref_tmp__chpl20 = NULL;
  string call_tmp_chpl26;
  string ret_tmp_chpl21;
  _ref_string ret_to_arg_ref_tmp__chpl21 = NULL;
  _ref_string _ref_tmp__chpl30 = NULL;
  _ref_string _ref_tmp__chpl31 = NULL;
  chpl____wide__ref_string tmp_chpl27 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp__chpl32 = NULL;
  chpl____wide__ref_string tmp_chpl28 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp__chpl33 = NULL;
  chpl____wide__ref_string tmp_chpl29 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp__chpl34 = NULL;
  chpl____wide__ref_string tmp_chpl30 = {CHPL_LOCALEID_T_INIT, NULL};
  string ret_chpl;
  chpl____wide__ref_string tmp_chpl31 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp__chpl35 = NULL;
  chpl____wide__ref_string tmp_chpl32 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__tuple_6_star_string chpl_macro_tmp_7578;
  chpl____wide__ref_string chpl_macro_tmp_7579;
  chpl____wide__ref_string chpl_macro_tmp_7580;
  chpl____wide__ref_string chpl_macro_tmp_7581;
  chpl____wide__ref_string chpl_macro_tmp_7582;
  chpl____wide__ref_string chpl_macro_tmp_7583;
  chpl____wide__ref_string chpl_macro_tmp_7584;
  chpl____wide__ref__tuple_6_star_string chpl_macro_tmp_7585;
  chpl____wide__ref_string chpl_macro_tmp_7586;
  chpl____wide__ref_string chpl_macro_tmp_7587;
  chpl____wide__ref_string chpl_macro_tmp_7588;
  chpl____wide__ref_string chpl_macro_tmp_7589;
  chpl____wide__ref_string chpl_macro_tmp_7590;
  chpl____wide__ref_string chpl_macro_tmp_7591;
  chpl____wide__ref__tuple_6_star_string chpl_macro_tmp_7592;
  chpl____wide__ref_string chpl_macro_tmp_7593;
  chpl____wide__ref_string chpl_macro_tmp_7594;
  chpl____wide__ref_string chpl_macro_tmp_7595;
  chpl____wide__ref_string chpl_macro_tmp_7596;
  chpl____wide__ref_string chpl_macro_tmp_7597;
  chpl____wide__ref_string chpl_macro_tmp_7598;
  chpl____wide__ref__tuple_6_star_string chpl_macro_tmp_7599;
  chpl____wide__ref_string chpl_macro_tmp_7600;
  chpl____wide__ref_string chpl_macro_tmp_7601;
  chpl____wide__ref_string chpl_macro_tmp_7602;
  chpl____wide__ref_string chpl_macro_tmp_7603;
  chpl____wide__ref_string chpl_macro_tmp_7604;
  chpl____wide__ref_string chpl_macro_tmp_7605;
  chpl____wide__ref__tuple_6_star_string chpl_macro_tmp_7606;
  chpl____wide__ref_string chpl_macro_tmp_7607;
  chpl____wide__ref_string chpl_macro_tmp_7608;
  chpl____wide__ref_string chpl_macro_tmp_7609;
  chpl____wide__ref_string chpl_macro_tmp_7610;
  chpl____wide__ref_string chpl_macro_tmp_7611;
  chpl____wide__ref_string chpl_macro_tmp_7612;
  chpl____wide__ref_string chpl_macro_tmp_7613;
  chpl____wide__ref_string chpl_macro_tmp_7614;
  local__str_literal_3388_chpl /* "ioNewline" */ = _str_literal_3388 /* "ioNewline" */;
  local__str_literal_3598_chpl /* "(bool,int(64))" */ = _str_literal_3598 /* "(bool,int(64))" */;
  local__str_literal_3386_chpl /* "int(64)" */ = _str_literal_3386 /* "int(64)" */;
  local__str_literal_3384_chpl /* "string" */ = _str_literal_3384 /* "string" */;
  local__str_literal_432_chpl /* ":" */ = _str_literal_432 /* ":" */;
  (&this_chpl6)->len = INT64(0);
  (&this_chpl6)->_size = INT64(0);
  (&this_chpl6)->buff = nil;
  (&this_chpl6)->owned = UINT8(false);
  (&this_chpl6)->locale_id = INT32(0);
  (&this_chpl6)->len = INT64(0);
  (&this_chpl6)->_size = INT64(0);
  call_tmp_chpl = ((c_ptr_uint8_t)(nil));
  (&this_chpl6)->buff = call_tmp_chpl;
  (&this_chpl6)->owned = UINT8(true);
  default_arglocale_id_chpl = chpl_nodeID;
  (&this_chpl6)->locale_id = default_arglocale_id_chpl;
  ret_to_arg_ref_tmp__chpl = &ret_tmp_chpl;
  _construct_string(INT64(0), INT64(0), call_tmp_chpl, UINT8(true), default_arglocale_id_chpl, &this_chpl6, ret_to_arg_ref_tmp__chpl);
  err_args_chpl = ret_tmp_chpl;
  (&this_chpl7)->len = INT64(0);
  (&this_chpl7)->_size = INT64(0);
  (&this_chpl7)->buff = nil;
  (&this_chpl7)->owned = UINT8(false);
  (&this_chpl7)->locale_id = INT32(0);
  (&this_chpl7)->len = INT64(0);
  (&this_chpl7)->_size = INT64(0);
  call_tmp_chpl2 = ((c_ptr_uint8_t)(nil));
  (&this_chpl7)->buff = call_tmp_chpl2;
  (&this_chpl7)->owned = UINT8(true);
  default_arglocale_id_chpl2 = chpl_nodeID;
  (&this_chpl7)->locale_id = default_arglocale_id_chpl2;
  ret_to_arg_ref_tmp__chpl2 = &ret_tmp_chpl2;
  _construct_string(INT64(0), INT64(0), call_tmp_chpl2, UINT8(true), default_arglocale_id_chpl2, &this_chpl7, ret_to_arg_ref_tmp__chpl2);
  name_chpl = ret_tmp_chpl2;
  chpl_macro_tmp_7578.locale = (&_arg_to_proto_names_chpl)->locale;
  chpl_macro_tmp_7578.addr = &(((&_arg_to_proto_names_chpl)->addr)->value);
  tmp_chpl = chpl_macro_tmp_7578;
  chpl_macro_tmp_7579.locale = (tmp_chpl).locale;
  chpl_macro_tmp_7579.addr = (*((tmp_chpl).addr) + INT64(0));
  call_tmp_chpl3 = chpl_macro_tmp_7579;
  _ref_tmp__chpl = &name_chpl;
  i_rhs_chpl = call_tmp_chpl3;
  chpl_macro_tmp_7580.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7580.addr = _ref_tmp__chpl;
  tmp_chpl2 = chpl_macro_tmp_7580;
  chpl___ASSIGN_13(tmp_chpl2, i_rhs_chpl);
  ret_to_arg_ref_tmp__chpl3 = &ret_tmp_chpl3;
  chpl___PLUS_(preArg_chpl, &name_chpl, ret_to_arg_ref_tmp__chpl3);
  call_tmp_chpl4 = ret_tmp_chpl3;
  ret_to_arg_ref_tmp__chpl4 = &ret_tmp_chpl4;
  chpl___PLUS_(&ret_tmp_chpl3, &local__str_literal_432_chpl /* ":" */, ret_to_arg_ref_tmp__chpl4);
  call_tmp_chpl5 = ret_tmp_chpl4;
  ret_to_arg_ref_tmp__chpl5 = &ret_tmp_chpl5;
  chpl___PLUS_(&ret_tmp_chpl4, &local__str_literal_3384_chpl /* "string" */, ret_to_arg_ref_tmp__chpl5);
  call_tmp_chpl6 = ret_tmp_chpl5;
  _ref_tmp__chpl2 = &err_args_chpl;
  chpl___PLUS__ASSIGN_(_ref_tmp__chpl2, &call_tmp_chpl6);
  _ref_tmp__chpl3 = &err_args_chpl;
  chpl___PLUS__ASSIGN_(_ref_tmp__chpl3, &_str_literal_583 /* ", " */);
  _ref_tmp__chpl4 = &name_chpl;
  chpl_macro_tmp_7581.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7581.addr = _ref_tmp__chpl4;
  tmp_chpl3 = chpl_macro_tmp_7581;
  deinit44(tmp_chpl3);
  _ref_tmp__chpl5 = &call_tmp_chpl4;
  chpl_macro_tmp_7582.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7582.addr = _ref_tmp__chpl5;
  tmp_chpl4 = chpl_macro_tmp_7582;
  deinit44(tmp_chpl4);
  _ref_tmp__chpl6 = &call_tmp_chpl5;
  chpl_macro_tmp_7583.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7583.addr = _ref_tmp__chpl6;
  tmp_chpl5 = chpl_macro_tmp_7583;
  deinit44(tmp_chpl5);
  _ref_tmp__chpl7 = &call_tmp_chpl6;
  chpl_macro_tmp_7584.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7584.addr = _ref_tmp__chpl7;
  tmp_chpl6 = chpl_macro_tmp_7584;
  deinit44(tmp_chpl6);
  (&this_chpl8)->len = INT64(0);
  (&this_chpl8)->_size = INT64(0);
  (&this_chpl8)->buff = nil;
  (&this_chpl8)->owned = UINT8(false);
  (&this_chpl8)->locale_id = INT32(0);
  (&this_chpl8)->len = INT64(0);
  (&this_chpl8)->_size = INT64(0);
  call_tmp_chpl7 = ((c_ptr_uint8_t)(nil));
  (&this_chpl8)->buff = call_tmp_chpl7;
  (&this_chpl8)->owned = UINT8(true);
  default_arglocale_id_chpl3 = chpl_nodeID;
  (&this_chpl8)->locale_id = default_arglocale_id_chpl3;
  ret_to_arg_ref_tmp__chpl6 = &ret_tmp_chpl6;
  _construct_string(INT64(0), INT64(0), call_tmp_chpl7, UINT8(true), default_arglocale_id_chpl3, &this_chpl8, ret_to_arg_ref_tmp__chpl6);
  name_chpl2 = ret_tmp_chpl6;
  chpl_macro_tmp_7585.locale = (&_arg_to_proto_names_chpl)->locale;
  chpl_macro_tmp_7585.addr = &(((&_arg_to_proto_names_chpl)->addr)->value);
  tmp_chpl7 = chpl_macro_tmp_7585;
  chpl_macro_tmp_7586.locale = (tmp_chpl7).locale;
  chpl_macro_tmp_7586.addr = (*((tmp_chpl7).addr) + INT64(1));
  call_tmp_chpl8 = chpl_macro_tmp_7586;
  _ref_tmp__chpl8 = &name_chpl2;
  i_rhs_chpl2 = call_tmp_chpl8;
  chpl_macro_tmp_7587.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7587.addr = _ref_tmp__chpl8;
  tmp_chpl8 = chpl_macro_tmp_7587;
  chpl___ASSIGN_13(tmp_chpl8, i_rhs_chpl2);
  ret_to_arg_ref_tmp__chpl7 = &ret_tmp_chpl7;
  chpl___PLUS_(preArg_chpl, &name_chpl2, ret_to_arg_ref_tmp__chpl7);
  call_tmp_chpl9 = ret_tmp_chpl7;
  ret_to_arg_ref_tmp__chpl8 = &ret_tmp_chpl8;
  chpl___PLUS_(&ret_tmp_chpl7, &local__str_literal_432_chpl /* ":" */, ret_to_arg_ref_tmp__chpl8);
  call_tmp_chpl10 = ret_tmp_chpl8;
  ret_to_arg_ref_tmp__chpl9 = &ret_tmp_chpl9;
  chpl___PLUS_(&ret_tmp_chpl8, &local__str_literal_3386_chpl /* "int(64)" */, ret_to_arg_ref_tmp__chpl9);
  call_tmp_chpl11 = ret_tmp_chpl9;
  _ref_tmp__chpl9 = &err_args_chpl;
  chpl___PLUS__ASSIGN_(_ref_tmp__chpl9, &call_tmp_chpl11);
  _ref_tmp__chpl10 = &err_args_chpl;
  chpl___PLUS__ASSIGN_(_ref_tmp__chpl10, &_str_literal_583 /* ", " */);
  _ref_tmp__chpl11 = &name_chpl2;
  chpl_macro_tmp_7588.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7588.addr = _ref_tmp__chpl11;
  tmp_chpl9 = chpl_macro_tmp_7588;
  deinit44(tmp_chpl9);
  _ref_tmp__chpl12 = &call_tmp_chpl9;
  chpl_macro_tmp_7589.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7589.addr = _ref_tmp__chpl12;
  tmp_chpl10 = chpl_macro_tmp_7589;
  deinit44(tmp_chpl10);
  _ref_tmp__chpl13 = &call_tmp_chpl10;
  chpl_macro_tmp_7590.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7590.addr = _ref_tmp__chpl13;
  tmp_chpl11 = chpl_macro_tmp_7590;
  deinit44(tmp_chpl11);
  _ref_tmp__chpl14 = &call_tmp_chpl11;
  chpl_macro_tmp_7591.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7591.addr = _ref_tmp__chpl14;
  tmp_chpl12 = chpl_macro_tmp_7591;
  deinit44(tmp_chpl12);
  (&this_chpl9)->len = INT64(0);
  (&this_chpl9)->_size = INT64(0);
  (&this_chpl9)->buff = nil;
  (&this_chpl9)->owned = UINT8(false);
  (&this_chpl9)->locale_id = INT32(0);
  (&this_chpl9)->len = INT64(0);
  (&this_chpl9)->_size = INT64(0);
  call_tmp_chpl12 = ((c_ptr_uint8_t)(nil));
  (&this_chpl9)->buff = call_tmp_chpl12;
  (&this_chpl9)->owned = UINT8(true);
  default_arglocale_id_chpl4 = chpl_nodeID;
  (&this_chpl9)->locale_id = default_arglocale_id_chpl4;
  ret_to_arg_ref_tmp__chpl10 = &ret_tmp_chpl10;
  _construct_string(INT64(0), INT64(0), call_tmp_chpl12, UINT8(true), default_arglocale_id_chpl4, &this_chpl9, ret_to_arg_ref_tmp__chpl10);
  name_chpl3 = ret_tmp_chpl10;
  chpl_macro_tmp_7592.locale = (&_arg_to_proto_names_chpl)->locale;
  chpl_macro_tmp_7592.addr = &(((&_arg_to_proto_names_chpl)->addr)->value);
  tmp_chpl13 = chpl_macro_tmp_7592;
  chpl_macro_tmp_7593.locale = (tmp_chpl13).locale;
  chpl_macro_tmp_7593.addr = (*((tmp_chpl13).addr) + INT64(2));
  call_tmp_chpl13 = chpl_macro_tmp_7593;
  _ref_tmp__chpl15 = &name_chpl3;
  i_rhs_chpl3 = call_tmp_chpl13;
  chpl_macro_tmp_7594.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7594.addr = _ref_tmp__chpl15;
  tmp_chpl14 = chpl_macro_tmp_7594;
  chpl___ASSIGN_13(tmp_chpl14, i_rhs_chpl3);
  ret_to_arg_ref_tmp__chpl11 = &ret_tmp_chpl11;
  chpl___PLUS_(preArg_chpl, &name_chpl3, ret_to_arg_ref_tmp__chpl11);
  call_tmp_chpl14 = ret_tmp_chpl11;
  ret_to_arg_ref_tmp__chpl12 = &ret_tmp_chpl12;
  chpl___PLUS_(&ret_tmp_chpl11, &local__str_literal_432_chpl /* ":" */, ret_to_arg_ref_tmp__chpl12);
  call_tmp_chpl15 = ret_tmp_chpl12;
  ret_to_arg_ref_tmp__chpl13 = &ret_tmp_chpl13;
  chpl___PLUS_(&ret_tmp_chpl12, &local__str_literal_3384_chpl /* "string" */, ret_to_arg_ref_tmp__chpl13);
  call_tmp_chpl16 = ret_tmp_chpl13;
  _ref_tmp__chpl16 = &err_args_chpl;
  chpl___PLUS__ASSIGN_(_ref_tmp__chpl16, &call_tmp_chpl16);
  _ref_tmp__chpl17 = &err_args_chpl;
  chpl___PLUS__ASSIGN_(_ref_tmp__chpl17, &_str_literal_583 /* ", " */);
  _ref_tmp__chpl18 = &name_chpl3;
  chpl_macro_tmp_7595.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7595.addr = _ref_tmp__chpl18;
  tmp_chpl15 = chpl_macro_tmp_7595;
  deinit44(tmp_chpl15);
  _ref_tmp__chpl19 = &call_tmp_chpl14;
  chpl_macro_tmp_7596.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7596.addr = _ref_tmp__chpl19;
  tmp_chpl16 = chpl_macro_tmp_7596;
  deinit44(tmp_chpl16);
  _ref_tmp__chpl20 = &call_tmp_chpl15;
  chpl_macro_tmp_7597.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7597.addr = _ref_tmp__chpl20;
  tmp_chpl17 = chpl_macro_tmp_7597;
  deinit44(tmp_chpl17);
  _ref_tmp__chpl21 = &call_tmp_chpl16;
  chpl_macro_tmp_7598.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7598.addr = _ref_tmp__chpl21;
  tmp_chpl18 = chpl_macro_tmp_7598;
  deinit44(tmp_chpl18);
  (&this_chpl10)->len = INT64(0);
  (&this_chpl10)->_size = INT64(0);
  (&this_chpl10)->buff = nil;
  (&this_chpl10)->owned = UINT8(false);
  (&this_chpl10)->locale_id = INT32(0);
  (&this_chpl10)->len = INT64(0);
  (&this_chpl10)->_size = INT64(0);
  call_tmp_chpl17 = ((c_ptr_uint8_t)(nil));
  (&this_chpl10)->buff = call_tmp_chpl17;
  (&this_chpl10)->owned = UINT8(true);
  default_arglocale_id_chpl5 = chpl_nodeID;
  (&this_chpl10)->locale_id = default_arglocale_id_chpl5;
  ret_to_arg_ref_tmp__chpl14 = &ret_tmp_chpl14;
  _construct_string(INT64(0), INT64(0), call_tmp_chpl17, UINT8(true), default_arglocale_id_chpl5, &this_chpl10, ret_to_arg_ref_tmp__chpl14);
  name_chpl4 = ret_tmp_chpl14;
  chpl_macro_tmp_7599.locale = (&_arg_to_proto_names_chpl)->locale;
  chpl_macro_tmp_7599.addr = &(((&_arg_to_proto_names_chpl)->addr)->value);
  tmp_chpl19 = chpl_macro_tmp_7599;
  chpl_macro_tmp_7600.locale = (tmp_chpl19).locale;
  chpl_macro_tmp_7600.addr = (*((tmp_chpl19).addr) + INT64(3));
  call_tmp_chpl18 = chpl_macro_tmp_7600;
  _ref_tmp__chpl22 = &name_chpl4;
  i_rhs_chpl4 = call_tmp_chpl18;
  chpl_macro_tmp_7601.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7601.addr = _ref_tmp__chpl22;
  tmp_chpl20 = chpl_macro_tmp_7601;
  chpl___ASSIGN_13(tmp_chpl20, i_rhs_chpl4);
  ret_to_arg_ref_tmp__chpl15 = &ret_tmp_chpl15;
  chpl___PLUS_(preArg_chpl, &name_chpl4, ret_to_arg_ref_tmp__chpl15);
  call_tmp_chpl19 = ret_tmp_chpl15;
  ret_to_arg_ref_tmp__chpl16 = &ret_tmp_chpl16;
  chpl___PLUS_(&ret_tmp_chpl15, &local__str_literal_432_chpl /* ":" */, ret_to_arg_ref_tmp__chpl16);
  call_tmp_chpl20 = ret_tmp_chpl16;
  ret_to_arg_ref_tmp__chpl17 = &ret_tmp_chpl17;
  chpl___PLUS_(&ret_tmp_chpl16, &local__str_literal_3598_chpl /* "(bool,int(64))" */, ret_to_arg_ref_tmp__chpl17);
  call_tmp_chpl21 = ret_tmp_chpl17;
  _ref_tmp__chpl23 = &err_args_chpl;
  chpl___PLUS__ASSIGN_(_ref_tmp__chpl23, &call_tmp_chpl21);
  _ref_tmp__chpl24 = &err_args_chpl;
  chpl___PLUS__ASSIGN_(_ref_tmp__chpl24, &_str_literal_583 /* ", " */);
  _ref_tmp__chpl25 = &name_chpl4;
  chpl_macro_tmp_7602.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7602.addr = _ref_tmp__chpl25;
  tmp_chpl21 = chpl_macro_tmp_7602;
  deinit44(tmp_chpl21);
  _ref_tmp__chpl26 = &call_tmp_chpl19;
  chpl_macro_tmp_7603.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7603.addr = _ref_tmp__chpl26;
  tmp_chpl22 = chpl_macro_tmp_7603;
  deinit44(tmp_chpl22);
  _ref_tmp__chpl27 = &call_tmp_chpl20;
  chpl_macro_tmp_7604.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7604.addr = _ref_tmp__chpl27;
  tmp_chpl23 = chpl_macro_tmp_7604;
  deinit44(tmp_chpl23);
  _ref_tmp__chpl28 = &call_tmp_chpl21;
  chpl_macro_tmp_7605.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7605.addr = _ref_tmp__chpl28;
  tmp_chpl24 = chpl_macro_tmp_7605;
  deinit44(tmp_chpl24);
  (&this_chpl11)->len = INT64(0);
  (&this_chpl11)->_size = INT64(0);
  (&this_chpl11)->buff = nil;
  (&this_chpl11)->owned = UINT8(false);
  (&this_chpl11)->locale_id = INT32(0);
  (&this_chpl11)->len = INT64(0);
  (&this_chpl11)->_size = INT64(0);
  call_tmp_chpl22 = ((c_ptr_uint8_t)(nil));
  (&this_chpl11)->buff = call_tmp_chpl22;
  (&this_chpl11)->owned = UINT8(true);
  default_arglocale_id_chpl6 = chpl_nodeID;
  (&this_chpl11)->locale_id = default_arglocale_id_chpl6;
  ret_to_arg_ref_tmp__chpl18 = &ret_tmp_chpl18;
  _construct_string(INT64(0), INT64(0), call_tmp_chpl22, UINT8(true), default_arglocale_id_chpl6, &this_chpl11, ret_to_arg_ref_tmp__chpl18);
  name_chpl5 = ret_tmp_chpl18;
  chpl_macro_tmp_7606.locale = (&_arg_to_proto_names_chpl)->locale;
  chpl_macro_tmp_7606.addr = &(((&_arg_to_proto_names_chpl)->addr)->value);
  tmp_chpl25 = chpl_macro_tmp_7606;
  chpl_macro_tmp_7607.locale = (tmp_chpl25).locale;
  chpl_macro_tmp_7607.addr = (*((tmp_chpl25).addr) + INT64(4));
  call_tmp_chpl23 = chpl_macro_tmp_7607;
  _ref_tmp__chpl29 = &name_chpl5;
  i_rhs_chpl5 = call_tmp_chpl23;
  chpl_macro_tmp_7608.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7608.addr = _ref_tmp__chpl29;
  tmp_chpl26 = chpl_macro_tmp_7608;
  chpl___ASSIGN_13(tmp_chpl26, i_rhs_chpl5);
  ret_to_arg_ref_tmp__chpl19 = &ret_tmp_chpl19;
  chpl___PLUS_(preArg_chpl, &name_chpl5, ret_to_arg_ref_tmp__chpl19);
  call_tmp_chpl24 = ret_tmp_chpl19;
  ret_to_arg_ref_tmp__chpl20 = &ret_tmp_chpl20;
  chpl___PLUS_(&ret_tmp_chpl19, &local__str_literal_432_chpl /* ":" */, ret_to_arg_ref_tmp__chpl20);
  call_tmp_chpl25 = ret_tmp_chpl20;
  ret_to_arg_ref_tmp__chpl21 = &ret_tmp_chpl21;
  chpl___PLUS_(&ret_tmp_chpl20, &local__str_literal_3388_chpl /* "ioNewline" */, ret_to_arg_ref_tmp__chpl21);
  call_tmp_chpl26 = ret_tmp_chpl21;
  _ref_tmp__chpl30 = &err_args_chpl;
  chpl___PLUS__ASSIGN_(_ref_tmp__chpl30, &call_tmp_chpl26);
  _ref_tmp__chpl31 = &name_chpl5;
  chpl_macro_tmp_7609.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7609.addr = _ref_tmp__chpl31;
  tmp_chpl27 = chpl_macro_tmp_7609;
  deinit44(tmp_chpl27);
  _ref_tmp__chpl32 = &call_tmp_chpl24;
  chpl_macro_tmp_7610.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7610.addr = _ref_tmp__chpl32;
  tmp_chpl28 = chpl_macro_tmp_7610;
  deinit44(tmp_chpl28);
  _ref_tmp__chpl33 = &call_tmp_chpl25;
  chpl_macro_tmp_7611.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7611.addr = _ref_tmp__chpl33;
  tmp_chpl29 = chpl_macro_tmp_7611;
  deinit44(tmp_chpl29);
  _ref_tmp__chpl34 = &call_tmp_chpl26;
  chpl_macro_tmp_7612.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7612.addr = _ref_tmp__chpl34;
  tmp_chpl30 = chpl_macro_tmp_7612;
  deinit44(tmp_chpl30);
  chpl_macro_tmp_7613.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7613.addr = &err_args_chpl;
  tmp_chpl31 = chpl_macro_tmp_7613;
  ret_chpl = chpl__initCopy13(tmp_chpl31);
  *(_retArg_chpl) = ret_chpl;
  _ref_tmp__chpl35 = &err_args_chpl;
  chpl_macro_tmp_7614.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7614.addr = _ref_tmp__chpl35;
  tmp_chpl32 = chpl_macro_tmp_7614;
  deinit44(tmp_chpl32);
  return;
}

/* IO.chpl:4128 */
static void _args_to_proto_chpl(_ref_string _e1_args_chpl,
                                _ref__array_DefaultRectangularArr_uint64_t_1_int64_t_F_int64_t _e2_args_chpl,
                                _ref_string preArg_chpl,
                                _ref_string _retArg_chpl) {
  string local__str_literal_3587_chpl;
  string local__str_literal_3384_chpl;
  string local__str_literal_432_chpl;
  _array_DefaultRectangularArr_uint64_t_1_int64_t_F_int64_t this_x2_chpl;
  string err_args_chpl;
  string this_chpl6;
  c_ptr_uint8_t call_tmp_chpl = NULL;
  int32_t default_arglocale_id_chpl;
  string ret_tmp_chpl;
  _ref_string ret_to_arg_ref_tmp__chpl = NULL;
  string name_chpl;
  string this_chpl7;
  c_ptr_uint8_t call_tmp_chpl2 = NULL;
  int32_t default_arglocale_id_chpl2;
  string ret_tmp_chpl2;
  _ref_string ret_to_arg_ref_tmp__chpl2 = NULL;
  chpl____wide__ref_string call_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__tuple_6_star_string tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp__chpl = NULL;
  chpl____wide__ref_string i_rhs_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  string call_tmp_chpl4;
  string ret_tmp_chpl3;
  _ref_string ret_to_arg_ref_tmp__chpl3 = NULL;
  string call_tmp_chpl5;
  string ret_tmp_chpl4;
  _ref_string ret_to_arg_ref_tmp__chpl4 = NULL;
  string call_tmp_chpl6;
  string ret_tmp_chpl5;
  _ref_string ret_to_arg_ref_tmp__chpl5 = NULL;
  _ref_string _ref_tmp__chpl2 = NULL;
  _ref_string _ref_tmp__chpl3 = NULL;
  _ref_string _ref_tmp__chpl4 = NULL;
  chpl____wide__ref_string tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp__chpl5 = NULL;
  chpl____wide__ref_string tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp__chpl6 = NULL;
  chpl____wide__ref_string tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp__chpl7 = NULL;
  chpl____wide__ref_string tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  string name_chpl2;
  string this_chpl8;
  c_ptr_uint8_t call_tmp_chpl7 = NULL;
  int32_t default_arglocale_id_chpl3;
  string ret_tmp_chpl6;
  _ref_string ret_to_arg_ref_tmp__chpl6 = NULL;
  chpl____wide__ref_string call_tmp_chpl8 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__tuple_6_star_string tmp_chpl7 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp__chpl8 = NULL;
  chpl____wide__ref_string i_rhs_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string tmp_chpl8 = {CHPL_LOCALEID_T_INIT, NULL};
  string call_tmp_chpl9;
  string ret_tmp_chpl7;
  _ref_string ret_to_arg_ref_tmp__chpl7 = NULL;
  string call_tmp_chpl10;
  string ret_tmp_chpl8;
  _ref_string ret_to_arg_ref_tmp__chpl8 = NULL;
  string call_tmp_chpl11;
  string ret_tmp_chpl9;
  _ref_string ret_to_arg_ref_tmp__chpl9 = NULL;
  _ref_string _ref_tmp__chpl9 = NULL;
  _ref_string _ref_tmp__chpl10 = NULL;
  chpl____wide__ref_string tmp_chpl9 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp__chpl11 = NULL;
  chpl____wide__ref_string tmp_chpl10 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp__chpl12 = NULL;
  chpl____wide__ref_string tmp_chpl11 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp__chpl13 = NULL;
  chpl____wide__ref_string tmp_chpl12 = {CHPL_LOCALEID_T_INIT, NULL};
  string ret_chpl;
  chpl____wide__ref_string tmp_chpl13 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp__chpl14 = NULL;
  chpl____wide__ref_string tmp_chpl14 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__tuple_6_star_string chpl_macro_tmp_7615;
  chpl____wide__ref_string chpl_macro_tmp_7616;
  chpl____wide__ref_string chpl_macro_tmp_7617;
  chpl____wide__ref_string chpl_macro_tmp_7618;
  chpl____wide__ref_string chpl_macro_tmp_7619;
  chpl____wide__ref_string chpl_macro_tmp_7620;
  chpl____wide__ref_string chpl_macro_tmp_7621;
  chpl____wide__ref__tuple_6_star_string chpl_macro_tmp_7622;
  chpl____wide__ref_string chpl_macro_tmp_7623;
  chpl____wide__ref_string chpl_macro_tmp_7624;
  chpl____wide__ref_string chpl_macro_tmp_7625;
  chpl____wide__ref_string chpl_macro_tmp_7626;
  chpl____wide__ref_string chpl_macro_tmp_7627;
  chpl____wide__ref_string chpl_macro_tmp_7628;
  chpl____wide__ref_string chpl_macro_tmp_7629;
  chpl____wide__ref_string chpl_macro_tmp_7630;
  local__str_literal_3587_chpl /* "_array(DefaultRectangularArr(uint(64),1,int(64),false,int(64)))" */ = _str_literal_3587 /* "_array(DefaultRectangularArr(uint(64),1,int(64),false,int(64)))" */;
  local__str_literal_3384_chpl /* "string" */ = _str_literal_3384 /* "string" */;
  local__str_literal_432_chpl /* ":" */ = _str_literal_432 /* ":" */;
  this_x2_chpl = *(_e2_args_chpl);
  (&this_chpl6)->len = INT64(0);
  (&this_chpl6)->_size = INT64(0);
  (&this_chpl6)->buff = nil;
  (&this_chpl6)->owned = UINT8(false);
  (&this_chpl6)->locale_id = INT32(0);
  (&this_chpl6)->len = INT64(0);
  (&this_chpl6)->_size = INT64(0);
  call_tmp_chpl = ((c_ptr_uint8_t)(nil));
  (&this_chpl6)->buff = call_tmp_chpl;
  (&this_chpl6)->owned = UINT8(true);
  default_arglocale_id_chpl = chpl_nodeID;
  (&this_chpl6)->locale_id = default_arglocale_id_chpl;
  ret_to_arg_ref_tmp__chpl = &ret_tmp_chpl;
  _construct_string(INT64(0), INT64(0), call_tmp_chpl, UINT8(true), default_arglocale_id_chpl, &this_chpl6, ret_to_arg_ref_tmp__chpl);
  err_args_chpl = ret_tmp_chpl;
  (&this_chpl7)->len = INT64(0);
  (&this_chpl7)->_size = INT64(0);
  (&this_chpl7)->buff = nil;
  (&this_chpl7)->owned = UINT8(false);
  (&this_chpl7)->locale_id = INT32(0);
  (&this_chpl7)->len = INT64(0);
  (&this_chpl7)->_size = INT64(0);
  call_tmp_chpl2 = ((c_ptr_uint8_t)(nil));
  (&this_chpl7)->buff = call_tmp_chpl2;
  (&this_chpl7)->owned = UINT8(true);
  default_arglocale_id_chpl2 = chpl_nodeID;
  (&this_chpl7)->locale_id = default_arglocale_id_chpl2;
  ret_to_arg_ref_tmp__chpl2 = &ret_tmp_chpl2;
  _construct_string(INT64(0), INT64(0), call_tmp_chpl2, UINT8(true), default_arglocale_id_chpl2, &this_chpl7, ret_to_arg_ref_tmp__chpl2);
  name_chpl = ret_tmp_chpl2;
  chpl_macro_tmp_7615.locale = (&_arg_to_proto_names_chpl)->locale;
  chpl_macro_tmp_7615.addr = &(((&_arg_to_proto_names_chpl)->addr)->value);
  tmp_chpl = chpl_macro_tmp_7615;
  chpl_macro_tmp_7616.locale = (tmp_chpl).locale;
  chpl_macro_tmp_7616.addr = (*((tmp_chpl).addr) + INT64(0));
  call_tmp_chpl3 = chpl_macro_tmp_7616;
  _ref_tmp__chpl = &name_chpl;
  i_rhs_chpl = call_tmp_chpl3;
  chpl_macro_tmp_7617.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7617.addr = _ref_tmp__chpl;
  tmp_chpl2 = chpl_macro_tmp_7617;
  chpl___ASSIGN_13(tmp_chpl2, i_rhs_chpl);
  ret_to_arg_ref_tmp__chpl3 = &ret_tmp_chpl3;
  chpl___PLUS_(preArg_chpl, &name_chpl, ret_to_arg_ref_tmp__chpl3);
  call_tmp_chpl4 = ret_tmp_chpl3;
  ret_to_arg_ref_tmp__chpl4 = &ret_tmp_chpl4;
  chpl___PLUS_(&ret_tmp_chpl3, &local__str_literal_432_chpl /* ":" */, ret_to_arg_ref_tmp__chpl4);
  call_tmp_chpl5 = ret_tmp_chpl4;
  ret_to_arg_ref_tmp__chpl5 = &ret_tmp_chpl5;
  chpl___PLUS_(&ret_tmp_chpl4, &local__str_literal_3384_chpl /* "string" */, ret_to_arg_ref_tmp__chpl5);
  call_tmp_chpl6 = ret_tmp_chpl5;
  _ref_tmp__chpl2 = &err_args_chpl;
  chpl___PLUS__ASSIGN_(_ref_tmp__chpl2, &call_tmp_chpl6);
  _ref_tmp__chpl3 = &err_args_chpl;
  chpl___PLUS__ASSIGN_(_ref_tmp__chpl3, &_str_literal_583 /* ", " */);
  _ref_tmp__chpl4 = &name_chpl;
  chpl_macro_tmp_7618.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7618.addr = _ref_tmp__chpl4;
  tmp_chpl3 = chpl_macro_tmp_7618;
  deinit44(tmp_chpl3);
  _ref_tmp__chpl5 = &call_tmp_chpl4;
  chpl_macro_tmp_7619.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7619.addr = _ref_tmp__chpl5;
  tmp_chpl4 = chpl_macro_tmp_7619;
  deinit44(tmp_chpl4);
  _ref_tmp__chpl6 = &call_tmp_chpl5;
  chpl_macro_tmp_7620.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7620.addr = _ref_tmp__chpl6;
  tmp_chpl5 = chpl_macro_tmp_7620;
  deinit44(tmp_chpl5);
  _ref_tmp__chpl7 = &call_tmp_chpl6;
  chpl_macro_tmp_7621.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7621.addr = _ref_tmp__chpl7;
  tmp_chpl6 = chpl_macro_tmp_7621;
  deinit44(tmp_chpl6);
  (&this_chpl8)->len = INT64(0);
  (&this_chpl8)->_size = INT64(0);
  (&this_chpl8)->buff = nil;
  (&this_chpl8)->owned = UINT8(false);
  (&this_chpl8)->locale_id = INT32(0);
  (&this_chpl8)->len = INT64(0);
  (&this_chpl8)->_size = INT64(0);
  call_tmp_chpl7 = ((c_ptr_uint8_t)(nil));
  (&this_chpl8)->buff = call_tmp_chpl7;
  (&this_chpl8)->owned = UINT8(true);
  default_arglocale_id_chpl3 = chpl_nodeID;
  (&this_chpl8)->locale_id = default_arglocale_id_chpl3;
  ret_to_arg_ref_tmp__chpl6 = &ret_tmp_chpl6;
  _construct_string(INT64(0), INT64(0), call_tmp_chpl7, UINT8(true), default_arglocale_id_chpl3, &this_chpl8, ret_to_arg_ref_tmp__chpl6);
  name_chpl2 = ret_tmp_chpl6;
  chpl_macro_tmp_7622.locale = (&_arg_to_proto_names_chpl)->locale;
  chpl_macro_tmp_7622.addr = &(((&_arg_to_proto_names_chpl)->addr)->value);
  tmp_chpl7 = chpl_macro_tmp_7622;
  chpl_macro_tmp_7623.locale = (tmp_chpl7).locale;
  chpl_macro_tmp_7623.addr = (*((tmp_chpl7).addr) + INT64(1));
  call_tmp_chpl8 = chpl_macro_tmp_7623;
  _ref_tmp__chpl8 = &name_chpl2;
  i_rhs_chpl2 = call_tmp_chpl8;
  chpl_macro_tmp_7624.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7624.addr = _ref_tmp__chpl8;
  tmp_chpl8 = chpl_macro_tmp_7624;
  chpl___ASSIGN_13(tmp_chpl8, i_rhs_chpl2);
  ret_to_arg_ref_tmp__chpl7 = &ret_tmp_chpl7;
  chpl___PLUS_(preArg_chpl, &name_chpl2, ret_to_arg_ref_tmp__chpl7);
  call_tmp_chpl9 = ret_tmp_chpl7;
  ret_to_arg_ref_tmp__chpl8 = &ret_tmp_chpl8;
  chpl___PLUS_(&ret_tmp_chpl7, &local__str_literal_432_chpl /* ":" */, ret_to_arg_ref_tmp__chpl8);
  call_tmp_chpl10 = ret_tmp_chpl8;
  chpl__convertValueToRuntimeType6(&this_x2_chpl);
  ret_to_arg_ref_tmp__chpl9 = &ret_tmp_chpl9;
  chpl___PLUS_(&ret_tmp_chpl8, &local__str_literal_3587_chpl /* "_array(DefaultRectangularArr(uint(64),1,int(64),false,int(64)))" */, ret_to_arg_ref_tmp__chpl9);
  call_tmp_chpl11 = ret_tmp_chpl9;
  _ref_tmp__chpl9 = &err_args_chpl;
  chpl___PLUS__ASSIGN_(_ref_tmp__chpl9, &call_tmp_chpl11);
  _ref_tmp__chpl10 = &name_chpl2;
  chpl_macro_tmp_7625.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7625.addr = _ref_tmp__chpl10;
  tmp_chpl9 = chpl_macro_tmp_7625;
  deinit44(tmp_chpl9);
  _ref_tmp__chpl11 = &call_tmp_chpl9;
  chpl_macro_tmp_7626.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7626.addr = _ref_tmp__chpl11;
  tmp_chpl10 = chpl_macro_tmp_7626;
  deinit44(tmp_chpl10);
  _ref_tmp__chpl12 = &call_tmp_chpl10;
  chpl_macro_tmp_7627.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7627.addr = _ref_tmp__chpl12;
  tmp_chpl11 = chpl_macro_tmp_7627;
  deinit44(tmp_chpl11);
  _ref_tmp__chpl13 = &call_tmp_chpl11;
  chpl_macro_tmp_7628.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7628.addr = _ref_tmp__chpl13;
  tmp_chpl12 = chpl_macro_tmp_7628;
  deinit44(tmp_chpl12);
  chpl_macro_tmp_7629.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7629.addr = &err_args_chpl;
  tmp_chpl13 = chpl_macro_tmp_7629;
  ret_chpl = chpl__initCopy13(tmp_chpl13);
  *(_retArg_chpl) = ret_chpl;
  _ref_tmp__chpl14 = &err_args_chpl;
  chpl_macro_tmp_7630.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7630.addr = _ref_tmp__chpl14;
  tmp_chpl14 = chpl_macro_tmp_7630;
  deinit44(tmp_chpl14);
  return;
}

/* IO.chpl:4128 */
static void _args_to_proto_chpl2(_ref_string _e1_args_chpl,
                                 int64_t _e2_args_chpl,
                                 _ref_ioNewline _e3_args_chpl,
                                 _ref_string preArg_chpl,
                                 _ref_string _retArg_chpl) {
  string local__str_literal_3388_chpl;
  string local__str_literal_3386_chpl;
  string local__str_literal_3384_chpl;
  string local__str_literal_432_chpl;
  string err_args_chpl;
  string this_chpl6;
  c_ptr_uint8_t call_tmp_chpl = NULL;
  int32_t default_arglocale_id_chpl;
  string ret_tmp_chpl;
  _ref_string ret_to_arg_ref_tmp__chpl = NULL;
  string name_chpl;
  string this_chpl7;
  c_ptr_uint8_t call_tmp_chpl2 = NULL;
  int32_t default_arglocale_id_chpl2;
  string ret_tmp_chpl2;
  _ref_string ret_to_arg_ref_tmp__chpl2 = NULL;
  chpl____wide__ref_string call_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__tuple_6_star_string tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp__chpl = NULL;
  chpl____wide__ref_string i_rhs_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  string call_tmp_chpl4;
  string ret_tmp_chpl3;
  _ref_string ret_to_arg_ref_tmp__chpl3 = NULL;
  string call_tmp_chpl5;
  string ret_tmp_chpl4;
  _ref_string ret_to_arg_ref_tmp__chpl4 = NULL;
  string call_tmp_chpl6;
  string ret_tmp_chpl5;
  _ref_string ret_to_arg_ref_tmp__chpl5 = NULL;
  _ref_string _ref_tmp__chpl2 = NULL;
  _ref_string _ref_tmp__chpl3 = NULL;
  _ref_string _ref_tmp__chpl4 = NULL;
  chpl____wide__ref_string tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp__chpl5 = NULL;
  chpl____wide__ref_string tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp__chpl6 = NULL;
  chpl____wide__ref_string tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp__chpl7 = NULL;
  chpl____wide__ref_string tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  string name_chpl2;
  string this_chpl8;
  c_ptr_uint8_t call_tmp_chpl7 = NULL;
  int32_t default_arglocale_id_chpl3;
  string ret_tmp_chpl6;
  _ref_string ret_to_arg_ref_tmp__chpl6 = NULL;
  chpl____wide__ref_string call_tmp_chpl8 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__tuple_6_star_string tmp_chpl7 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp__chpl8 = NULL;
  chpl____wide__ref_string i_rhs_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string tmp_chpl8 = {CHPL_LOCALEID_T_INIT, NULL};
  string call_tmp_chpl9;
  string ret_tmp_chpl7;
  _ref_string ret_to_arg_ref_tmp__chpl7 = NULL;
  string call_tmp_chpl10;
  string ret_tmp_chpl8;
  _ref_string ret_to_arg_ref_tmp__chpl8 = NULL;
  string call_tmp_chpl11;
  string ret_tmp_chpl9;
  _ref_string ret_to_arg_ref_tmp__chpl9 = NULL;
  _ref_string _ref_tmp__chpl9 = NULL;
  _ref_string _ref_tmp__chpl10 = NULL;
  _ref_string _ref_tmp__chpl11 = NULL;
  chpl____wide__ref_string tmp_chpl9 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp__chpl12 = NULL;
  chpl____wide__ref_string tmp_chpl10 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp__chpl13 = NULL;
  chpl____wide__ref_string tmp_chpl11 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp__chpl14 = NULL;
  chpl____wide__ref_string tmp_chpl12 = {CHPL_LOCALEID_T_INIT, NULL};
  string name_chpl3;
  string this_chpl9;
  c_ptr_uint8_t call_tmp_chpl12 = NULL;
  int32_t default_arglocale_id_chpl4;
  string ret_tmp_chpl10;
  _ref_string ret_to_arg_ref_tmp__chpl10 = NULL;
  chpl____wide__ref_string call_tmp_chpl13 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__tuple_6_star_string tmp_chpl13 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp__chpl15 = NULL;
  chpl____wide__ref_string i_rhs_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string tmp_chpl14 = {CHPL_LOCALEID_T_INIT, NULL};
  string call_tmp_chpl14;
  string ret_tmp_chpl11;
  _ref_string ret_to_arg_ref_tmp__chpl11 = NULL;
  string call_tmp_chpl15;
  string ret_tmp_chpl12;
  _ref_string ret_to_arg_ref_tmp__chpl12 = NULL;
  string call_tmp_chpl16;
  string ret_tmp_chpl13;
  _ref_string ret_to_arg_ref_tmp__chpl13 = NULL;
  _ref_string _ref_tmp__chpl16 = NULL;
  _ref_string _ref_tmp__chpl17 = NULL;
  chpl____wide__ref_string tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp__chpl18 = NULL;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp__chpl19 = NULL;
  chpl____wide__ref_string tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp__chpl20 = NULL;
  chpl____wide__ref_string tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  string ret_chpl;
  chpl____wide__ref_string tmp_chpl19 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp__chpl21 = NULL;
  chpl____wide__ref_string tmp_chpl20 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__tuple_6_star_string chpl_macro_tmp_7631;
  chpl____wide__ref_string chpl_macro_tmp_7632;
  chpl____wide__ref_string chpl_macro_tmp_7633;
  chpl____wide__ref_string chpl_macro_tmp_7634;
  chpl____wide__ref_string chpl_macro_tmp_7635;
  chpl____wide__ref_string chpl_macro_tmp_7636;
  chpl____wide__ref_string chpl_macro_tmp_7637;
  chpl____wide__ref__tuple_6_star_string chpl_macro_tmp_7638;
  chpl____wide__ref_string chpl_macro_tmp_7639;
  chpl____wide__ref_string chpl_macro_tmp_7640;
  chpl____wide__ref_string chpl_macro_tmp_7641;
  chpl____wide__ref_string chpl_macro_tmp_7642;
  chpl____wide__ref_string chpl_macro_tmp_7643;
  chpl____wide__ref_string chpl_macro_tmp_7644;
  chpl____wide__ref__tuple_6_star_string chpl_macro_tmp_7645;
  chpl____wide__ref_string chpl_macro_tmp_7646;
  chpl____wide__ref_string chpl_macro_tmp_7647;
  chpl____wide__ref_string chpl_macro_tmp_7648;
  chpl____wide__ref_string chpl_macro_tmp_7649;
  chpl____wide__ref_string chpl_macro_tmp_7650;
  chpl____wide__ref_string chpl_macro_tmp_7651;
  chpl____wide__ref_string chpl_macro_tmp_7652;
  chpl____wide__ref_string chpl_macro_tmp_7653;
  local__str_literal_3388_chpl /* "ioNewline" */ = _str_literal_3388 /* "ioNewline" */;
  local__str_literal_3386_chpl /* "int(64)" */ = _str_literal_3386 /* "int(64)" */;
  local__str_literal_3384_chpl /* "string" */ = _str_literal_3384 /* "string" */;
  local__str_literal_432_chpl /* ":" */ = _str_literal_432 /* ":" */;
  (&this_chpl6)->len = INT64(0);
  (&this_chpl6)->_size = INT64(0);
  (&this_chpl6)->buff = nil;
  (&this_chpl6)->owned = UINT8(false);
  (&this_chpl6)->locale_id = INT32(0);
  (&this_chpl6)->len = INT64(0);
  (&this_chpl6)->_size = INT64(0);
  call_tmp_chpl = ((c_ptr_uint8_t)(nil));
  (&this_chpl6)->buff = call_tmp_chpl;
  (&this_chpl6)->owned = UINT8(true);
  default_arglocale_id_chpl = chpl_nodeID;
  (&this_chpl6)->locale_id = default_arglocale_id_chpl;
  ret_to_arg_ref_tmp__chpl = &ret_tmp_chpl;
  _construct_string(INT64(0), INT64(0), call_tmp_chpl, UINT8(true), default_arglocale_id_chpl, &this_chpl6, ret_to_arg_ref_tmp__chpl);
  err_args_chpl = ret_tmp_chpl;
  (&this_chpl7)->len = INT64(0);
  (&this_chpl7)->_size = INT64(0);
  (&this_chpl7)->buff = nil;
  (&this_chpl7)->owned = UINT8(false);
  (&this_chpl7)->locale_id = INT32(0);
  (&this_chpl7)->len = INT64(0);
  (&this_chpl7)->_size = INT64(0);
  call_tmp_chpl2 = ((c_ptr_uint8_t)(nil));
  (&this_chpl7)->buff = call_tmp_chpl2;
  (&this_chpl7)->owned = UINT8(true);
  default_arglocale_id_chpl2 = chpl_nodeID;
  (&this_chpl7)->locale_id = default_arglocale_id_chpl2;
  ret_to_arg_ref_tmp__chpl2 = &ret_tmp_chpl2;
  _construct_string(INT64(0), INT64(0), call_tmp_chpl2, UINT8(true), default_arglocale_id_chpl2, &this_chpl7, ret_to_arg_ref_tmp__chpl2);
  name_chpl = ret_tmp_chpl2;
  chpl_macro_tmp_7631.locale = (&_arg_to_proto_names_chpl)->locale;
  chpl_macro_tmp_7631.addr = &(((&_arg_to_proto_names_chpl)->addr)->value);
  tmp_chpl = chpl_macro_tmp_7631;
  chpl_macro_tmp_7632.locale = (tmp_chpl).locale;
  chpl_macro_tmp_7632.addr = (*((tmp_chpl).addr) + INT64(0));
  call_tmp_chpl3 = chpl_macro_tmp_7632;
  _ref_tmp__chpl = &name_chpl;
  i_rhs_chpl = call_tmp_chpl3;
  chpl_macro_tmp_7633.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7633.addr = _ref_tmp__chpl;
  tmp_chpl2 = chpl_macro_tmp_7633;
  chpl___ASSIGN_13(tmp_chpl2, i_rhs_chpl);
  ret_to_arg_ref_tmp__chpl3 = &ret_tmp_chpl3;
  chpl___PLUS_(preArg_chpl, &name_chpl, ret_to_arg_ref_tmp__chpl3);
  call_tmp_chpl4 = ret_tmp_chpl3;
  ret_to_arg_ref_tmp__chpl4 = &ret_tmp_chpl4;
  chpl___PLUS_(&ret_tmp_chpl3, &local__str_literal_432_chpl /* ":" */, ret_to_arg_ref_tmp__chpl4);
  call_tmp_chpl5 = ret_tmp_chpl4;
  ret_to_arg_ref_tmp__chpl5 = &ret_tmp_chpl5;
  chpl___PLUS_(&ret_tmp_chpl4, &local__str_literal_3384_chpl /* "string" */, ret_to_arg_ref_tmp__chpl5);
  call_tmp_chpl6 = ret_tmp_chpl5;
  _ref_tmp__chpl2 = &err_args_chpl;
  chpl___PLUS__ASSIGN_(_ref_tmp__chpl2, &call_tmp_chpl6);
  _ref_tmp__chpl3 = &err_args_chpl;
  chpl___PLUS__ASSIGN_(_ref_tmp__chpl3, &_str_literal_583 /* ", " */);
  _ref_tmp__chpl4 = &name_chpl;
  chpl_macro_tmp_7634.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7634.addr = _ref_tmp__chpl4;
  tmp_chpl3 = chpl_macro_tmp_7634;
  deinit44(tmp_chpl3);
  _ref_tmp__chpl5 = &call_tmp_chpl4;
  chpl_macro_tmp_7635.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7635.addr = _ref_tmp__chpl5;
  tmp_chpl4 = chpl_macro_tmp_7635;
  deinit44(tmp_chpl4);
  _ref_tmp__chpl6 = &call_tmp_chpl5;
  chpl_macro_tmp_7636.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7636.addr = _ref_tmp__chpl6;
  tmp_chpl5 = chpl_macro_tmp_7636;
  deinit44(tmp_chpl5);
  _ref_tmp__chpl7 = &call_tmp_chpl6;
  chpl_macro_tmp_7637.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7637.addr = _ref_tmp__chpl7;
  tmp_chpl6 = chpl_macro_tmp_7637;
  deinit44(tmp_chpl6);
  (&this_chpl8)->len = INT64(0);
  (&this_chpl8)->_size = INT64(0);
  (&this_chpl8)->buff = nil;
  (&this_chpl8)->owned = UINT8(false);
  (&this_chpl8)->locale_id = INT32(0);
  (&this_chpl8)->len = INT64(0);
  (&this_chpl8)->_size = INT64(0);
  call_tmp_chpl7 = ((c_ptr_uint8_t)(nil));
  (&this_chpl8)->buff = call_tmp_chpl7;
  (&this_chpl8)->owned = UINT8(true);
  default_arglocale_id_chpl3 = chpl_nodeID;
  (&this_chpl8)->locale_id = default_arglocale_id_chpl3;
  ret_to_arg_ref_tmp__chpl6 = &ret_tmp_chpl6;
  _construct_string(INT64(0), INT64(0), call_tmp_chpl7, UINT8(true), default_arglocale_id_chpl3, &this_chpl8, ret_to_arg_ref_tmp__chpl6);
  name_chpl2 = ret_tmp_chpl6;
  chpl_macro_tmp_7638.locale = (&_arg_to_proto_names_chpl)->locale;
  chpl_macro_tmp_7638.addr = &(((&_arg_to_proto_names_chpl)->addr)->value);
  tmp_chpl7 = chpl_macro_tmp_7638;
  chpl_macro_tmp_7639.locale = (tmp_chpl7).locale;
  chpl_macro_tmp_7639.addr = (*((tmp_chpl7).addr) + INT64(1));
  call_tmp_chpl8 = chpl_macro_tmp_7639;
  _ref_tmp__chpl8 = &name_chpl2;
  i_rhs_chpl2 = call_tmp_chpl8;
  chpl_macro_tmp_7640.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7640.addr = _ref_tmp__chpl8;
  tmp_chpl8 = chpl_macro_tmp_7640;
  chpl___ASSIGN_13(tmp_chpl8, i_rhs_chpl2);
  ret_to_arg_ref_tmp__chpl7 = &ret_tmp_chpl7;
  chpl___PLUS_(preArg_chpl, &name_chpl2, ret_to_arg_ref_tmp__chpl7);
  call_tmp_chpl9 = ret_tmp_chpl7;
  ret_to_arg_ref_tmp__chpl8 = &ret_tmp_chpl8;
  chpl___PLUS_(&ret_tmp_chpl7, &local__str_literal_432_chpl /* ":" */, ret_to_arg_ref_tmp__chpl8);
  call_tmp_chpl10 = ret_tmp_chpl8;
  ret_to_arg_ref_tmp__chpl9 = &ret_tmp_chpl9;
  chpl___PLUS_(&ret_tmp_chpl8, &local__str_literal_3386_chpl /* "int(64)" */, ret_to_arg_ref_tmp__chpl9);
  call_tmp_chpl11 = ret_tmp_chpl9;
  _ref_tmp__chpl9 = &err_args_chpl;
  chpl___PLUS__ASSIGN_(_ref_tmp__chpl9, &call_tmp_chpl11);
  _ref_tmp__chpl10 = &err_args_chpl;
  chpl___PLUS__ASSIGN_(_ref_tmp__chpl10, &_str_literal_583 /* ", " */);
  _ref_tmp__chpl11 = &name_chpl2;
  chpl_macro_tmp_7641.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7641.addr = _ref_tmp__chpl11;
  tmp_chpl9 = chpl_macro_tmp_7641;
  deinit44(tmp_chpl9);
  _ref_tmp__chpl12 = &call_tmp_chpl9;
  chpl_macro_tmp_7642.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7642.addr = _ref_tmp__chpl12;
  tmp_chpl10 = chpl_macro_tmp_7642;
  deinit44(tmp_chpl10);
  _ref_tmp__chpl13 = &call_tmp_chpl10;
  chpl_macro_tmp_7643.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7643.addr = _ref_tmp__chpl13;
  tmp_chpl11 = chpl_macro_tmp_7643;
  deinit44(tmp_chpl11);
  _ref_tmp__chpl14 = &call_tmp_chpl11;
  chpl_macro_tmp_7644.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7644.addr = _ref_tmp__chpl14;
  tmp_chpl12 = chpl_macro_tmp_7644;
  deinit44(tmp_chpl12);
  (&this_chpl9)->len = INT64(0);
  (&this_chpl9)->_size = INT64(0);
  (&this_chpl9)->buff = nil;
  (&this_chpl9)->owned = UINT8(false);
  (&this_chpl9)->locale_id = INT32(0);
  (&this_chpl9)->len = INT64(0);
  (&this_chpl9)->_size = INT64(0);
  call_tmp_chpl12 = ((c_ptr_uint8_t)(nil));
  (&this_chpl9)->buff = call_tmp_chpl12;
  (&this_chpl9)->owned = UINT8(true);
  default_arglocale_id_chpl4 = chpl_nodeID;
  (&this_chpl9)->locale_id = default_arglocale_id_chpl4;
  ret_to_arg_ref_tmp__chpl10 = &ret_tmp_chpl10;
  _construct_string(INT64(0), INT64(0), call_tmp_chpl12, UINT8(true), default_arglocale_id_chpl4, &this_chpl9, ret_to_arg_ref_tmp__chpl10);
  name_chpl3 = ret_tmp_chpl10;
  chpl_macro_tmp_7645.locale = (&_arg_to_proto_names_chpl)->locale;
  chpl_macro_tmp_7645.addr = &(((&_arg_to_proto_names_chpl)->addr)->value);
  tmp_chpl13 = chpl_macro_tmp_7645;
  chpl_macro_tmp_7646.locale = (tmp_chpl13).locale;
  chpl_macro_tmp_7646.addr = (*((tmp_chpl13).addr) + INT64(2));
  call_tmp_chpl13 = chpl_macro_tmp_7646;
  _ref_tmp__chpl15 = &name_chpl3;
  i_rhs_chpl3 = call_tmp_chpl13;
  chpl_macro_tmp_7647.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7647.addr = _ref_tmp__chpl15;
  tmp_chpl14 = chpl_macro_tmp_7647;
  chpl___ASSIGN_13(tmp_chpl14, i_rhs_chpl3);
  ret_to_arg_ref_tmp__chpl11 = &ret_tmp_chpl11;
  chpl___PLUS_(preArg_chpl, &name_chpl3, ret_to_arg_ref_tmp__chpl11);
  call_tmp_chpl14 = ret_tmp_chpl11;
  ret_to_arg_ref_tmp__chpl12 = &ret_tmp_chpl12;
  chpl___PLUS_(&ret_tmp_chpl11, &local__str_literal_432_chpl /* ":" */, ret_to_arg_ref_tmp__chpl12);
  call_tmp_chpl15 = ret_tmp_chpl12;
  ret_to_arg_ref_tmp__chpl13 = &ret_tmp_chpl13;
  chpl___PLUS_(&ret_tmp_chpl12, &local__str_literal_3388_chpl /* "ioNewline" */, ret_to_arg_ref_tmp__chpl13);
  call_tmp_chpl16 = ret_tmp_chpl13;
  _ref_tmp__chpl16 = &err_args_chpl;
  chpl___PLUS__ASSIGN_(_ref_tmp__chpl16, &call_tmp_chpl16);
  _ref_tmp__chpl17 = &name_chpl3;
  chpl_macro_tmp_7648.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7648.addr = _ref_tmp__chpl17;
  tmp_chpl15 = chpl_macro_tmp_7648;
  deinit44(tmp_chpl15);
  _ref_tmp__chpl18 = &call_tmp_chpl14;
  chpl_macro_tmp_7649.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7649.addr = _ref_tmp__chpl18;
  tmp_chpl16 = chpl_macro_tmp_7649;
  deinit44(tmp_chpl16);
  _ref_tmp__chpl19 = &call_tmp_chpl15;
  chpl_macro_tmp_7650.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7650.addr = _ref_tmp__chpl19;
  tmp_chpl17 = chpl_macro_tmp_7650;
  deinit44(tmp_chpl17);
  _ref_tmp__chpl20 = &call_tmp_chpl16;
  chpl_macro_tmp_7651.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7651.addr = _ref_tmp__chpl20;
  tmp_chpl18 = chpl_macro_tmp_7651;
  deinit44(tmp_chpl18);
  chpl_macro_tmp_7652.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7652.addr = &err_args_chpl;
  tmp_chpl19 = chpl_macro_tmp_7652;
  ret_chpl = chpl__initCopy13(tmp_chpl19);
  *(_retArg_chpl) = ret_chpl;
  _ref_tmp__chpl21 = &err_args_chpl;
  chpl_macro_tmp_7653.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7653.addr = _ref_tmp__chpl21;
  tmp_chpl20 = chpl_macro_tmp_7653;
  deinit44(tmp_chpl20);
  return;
}

/* IO.chpl:4613 */
static void wrapon_fn_chpl52(_class_localson_fn_chpl51 c_chpl) {
  channel_T_dynamic_T_chpl _1_rvfDerefTmp_chpl;
  channel_T_dynamic_T_chpl tmp_chpl;
  chpl____wide__ref_syserr _2_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__tuple_2__ref_string__ref_ioNewline _3_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_locale _4_rvfDerefTmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  tmp_chpl = (c_chpl)->_1_rvfDerefTmp_chpl;
  _1_rvfDerefTmp_chpl = tmp_chpl;
  _2_tmp_chpl = (c_chpl)->_2_tmp_chpl;
  _3_tmp_chpl = (c_chpl)->_3_tmp_chpl;
  _4_rvfDerefTmp_chpl = (c_chpl)->_4_rvfDerefTmp_chpl;
  on_fn_chpl52(&_1_rvfDerefTmp_chpl, _2_tmp_chpl, _3_tmp_chpl, _4_rvfDerefTmp_chpl);
  return;
}

/* IO.chpl:4613 */
static void wrapon_fn_chpl53(_class_localson_fn_chpl52 c_chpl) {
  channel_T_dynamic_T_chpl _1_rvfDerefTmp_chpl;
  channel_T_dynamic_T_chpl tmp_chpl;
  chpl____wide__ref_syserr _2_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__tuple_5__ref_string_int64_t__ref_string__ref__tuple_2_chpl_bool_int64_t__ref_ioNewline _3_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_locale _4_rvfDerefTmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  tmp_chpl = (c_chpl)->_1_rvfDerefTmp_chpl;
  _1_rvfDerefTmp_chpl = tmp_chpl;
  _2_tmp_chpl = (c_chpl)->_2_tmp_chpl;
  _3_tmp_chpl = (c_chpl)->_3_tmp_chpl;
  _4_rvfDerefTmp_chpl = (c_chpl)->_4_rvfDerefTmp_chpl;
  on_fn_chpl51(&_1_rvfDerefTmp_chpl, _2_tmp_chpl, _3_tmp_chpl, _4_rvfDerefTmp_chpl);
  return;
}

/* IO.chpl:4613 */
static void wrapon_fn_chpl50(_class_localson_fn_chpl53 c_chpl) {
  channel_T_dynamic_F_chpl _1_rvfDerefTmp_chpl;
  channel_T_dynamic_F_chpl tmp_chpl;
  chpl____wide__ref_syserr _2_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__tuple_2__ref_string__ref__array_DefaultRectangularArr_uint64_t_1_int64_t_F_int64_t _3_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_locale _4_rvfDerefTmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  tmp_chpl = (c_chpl)->_1_rvfDerefTmp_chpl;
  _1_rvfDerefTmp_chpl = tmp_chpl;
  _2_tmp_chpl = (c_chpl)->_2_tmp_chpl;
  _3_tmp_chpl = (c_chpl)->_3_tmp_chpl;
  _4_rvfDerefTmp_chpl = (c_chpl)->_4_rvfDerefTmp_chpl;
  on_fn_chpl53(&_1_rvfDerefTmp_chpl, _2_tmp_chpl, _3_tmp_chpl, _4_rvfDerefTmp_chpl);
  return;
}

/* IO.chpl:4613 */
static void on_fn_chpl52(_ref_channel_T_dynamic_T this_chpl6,
                         chpl____wide__ref_syserr _formal_tmp_error_chpl,
                         chpl____wide__ref__tuple_2__ref_string__ref_ioNewline args_chpl,
                         chpl____wide_locale origLocale_chpl) {
  string local__str_literal_337_chpl;
  string local__str_literal_2497_chpl;
  _ref_channel_T_dynamic_T rvfRerefTmp_chpl = NULL;
  syserr _formal_tmp_error_chpl2;
  syserr call_tmp_chpl;
  _ref__wide_locale call_tmp_chpl2 = NULL;
  chpl_localeID_t call_tmp_chpl3;
  chpl____wide_locale tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_syserr tmp_chpl2 = NULL;
  channel_T_dynamic_T_chpl rvfDerefTmp_chpl;
  chpl_bool isdirect_chpl;
  chpl____wide__ref_syserr tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl36 _args_foron_fn_chpl = NULL;
  _ref_syserr tmp_chpl4 = NULL;
  chpl____wide__ref_syserr tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  int32_t call_tmp_chpl4;
  chpl_bool call_tmp_chpl5;
  syserr tmp_chpl6;
  int32_t call_tmp_chpl6;
  chpl_bool call_tmp_chpl7;
  chpl____wide__ref_string call_tmp_chpl8 = {CHPL_LOCALEID_T_INIT, NULL};
  qio_channel_ptr_t coerce_tmp_chpl;
  qio_channel_ptr_t tmp_chpl7;
  chpl____wide__ref_string i_x_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  syserr e_chpl;
  uint8_t call_tmp_chpl9;
  uint8_t call_tmp_chpl10;
  chpl_bool call_tmp_chpl11;
  chpl_bool call_tmp_chpl12;
  string local_x_chpl;
  string ret_chpl;
  int32_t tmp_chpl8;
  chpl_bool call_tmp_chpl13;
  string ret_tmp_chpl;
  _ref_string ret_to_arg_ref_tmp__chpl = NULL;
  chpl____wide__ref_string i_s_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  string type_tmp_chpl;
  string this_chpl7;
  c_ptr_uint8_t call_tmp_chpl14 = NULL;
  int32_t default_arglocale_id_chpl;
  string ret_tmp_chpl2;
  _ref_string ret_to_arg_ref_tmp__chpl2 = NULL;
  _ref_string _ref_tmp__chpl = NULL;
  chpl____wide__ref_string i_rhs_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string tmp_chpl9 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp_chpl15;
  chpl_bool call_tmp_chpl16;
  syserr call_tmp_chpl17;
  _ref_string _ref_tmp__chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl10 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp_chpl18;
  string local_x_chpl2;
  string ret_chpl2;
  int32_t tmp_chpl11;
  chpl_bool call_tmp_chpl19;
  string ret_tmp_chpl3;
  _ref_string ret_to_arg_ref_tmp__chpl3 = NULL;
  chpl____wide__ref_string i_s_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  string type_tmp_chpl2;
  string this_chpl8;
  c_ptr_uint8_t call_tmp_chpl20 = NULL;
  int32_t default_arglocale_id_chpl2;
  string ret_tmp_chpl4;
  _ref_string ret_to_arg_ref_tmp__chpl4 = NULL;
  _ref_string _ref_tmp__chpl3 = NULL;
  chpl____wide__ref_string i_rhs_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string tmp_chpl12 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp_chpl21;
  int32_t coerce_tmp_chpl2;
  chpl_bool call_tmp_chpl22;
  c_ptr_uint8_t coerce_tmp_chpl3 = NULL;
  int64_t ret_chpl3;
  syserr call_tmp_chpl23;
  _ref_string _ref_tmp__chpl4 = NULL;
  chpl____wide__ref_string tmp_chpl13 = {CHPL_LOCALEID_T_INIT, NULL};
  string local_x_chpl3;
  string ret_chpl4;
  int32_t tmp_chpl14;
  chpl_bool call_tmp_chpl24;
  string ret_tmp_chpl5;
  _ref_string ret_to_arg_ref_tmp__chpl5 = NULL;
  chpl____wide__ref_string i_s_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  string type_tmp_chpl3;
  string this_chpl9;
  c_ptr_uint8_t call_tmp_chpl25 = NULL;
  int32_t default_arglocale_id_chpl3;
  string ret_tmp_chpl6;
  _ref_string ret_to_arg_ref_tmp__chpl6 = NULL;
  _ref_string _ref_tmp__chpl5 = NULL;
  chpl____wide__ref_string i_rhs_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp_chpl26;
  int32_t coerce_tmp_chpl4;
  chpl_bool call_tmp_chpl27;
  c_ptr_uint8_t coerce_tmp_chpl5 = NULL;
  int64_t ret_chpl5;
  syserr call_tmp_chpl28;
  _ref_string _ref_tmp__chpl6 = NULL;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  syserr call_tmp_chpl29;
  syserr tmp_chpl17;
  int32_t call_tmp_chpl30;
  chpl_bool call_tmp_chpl31;
  qio_channel_ptr_t coerce_tmp_chpl6;
  qio_channel_ptr_t tmp_chpl18;
  syserr call_tmp_chpl32;
  _ref__wide_locale call_tmp_chpl33 = NULL;
  chpl_localeID_t call_tmp_chpl34;
  chpl____wide_locale tmp_chpl19 = {CHPL_LOCALEID_T_INIT, NULL};
  channel_T_dynamic_T_chpl rvfDerefTmp_chpl2;
  chpl_bool isdirect_chpl2;
  _class_localson_fn_chpl37 _args_foron_fn_chpl2 = NULL;
  c_void_ptr _args_vforon_fn_chpl2;
  chpl____wide__ref_syserr chpl_macro_tmp_7654;
  chpl__class_localson_fn_chpl36_object chpl_macro_tmp_7655;
  chpl____wide__ref_syserr chpl_macro_tmp_7656;
  chpl____wide__ref_chpl____wide__ref_string chpl_macro_tmp_7657;
  chpl____wide__ref_int32_t chpl_macro_tmp_7658;
  chpl____wide__ref_string chpl_macro_tmp_7659;
  chpl____wide__ref_string chpl_macro_tmp_7660;
  chpl____wide__ref_int32_t chpl_macro_tmp_7661;
  chpl____wide__ref_string chpl_macro_tmp_7662;
  chpl____wide__ref_string chpl_macro_tmp_7663;
  chpl____wide__ref_int32_t chpl_macro_tmp_7664;
  chpl____wide__ref_string chpl_macro_tmp_7665;
  chpl____wide__ref_string chpl_macro_tmp_7666;
  chpl__class_localson_fn_chpl37_object chpl_macro_tmp_7667;
  local__str_literal_337_chpl /* "Cannot call .c_str() on a remote string" */ = _str_literal_337 /* "Cannot call .c_str() on a remote string" */;
  local__str_literal_2497_chpl /* "in lock" */ = _str_literal_2497 /* "in lock" */;
  rvfRerefTmp_chpl = this_chpl6;
  qio_int_to_err(INT32(0));
  call_tmp_chpl = qio_int_to_err(INT32(0));
  _formal_tmp_error_chpl2 = call_tmp_chpl;
  call_tmp_chpl2 = &((this_chpl6)->home_chpl);
  tmp_chpl = *(call_tmp_chpl2);
  call_tmp_chpl3 = (&tmp_chpl)->locale;
  tmp_chpl2 = &_formal_tmp_error_chpl2;
  rvfDerefTmp_chpl = *(this_chpl6);
  isdirect_chpl = chpl_doDirectExecuteOn(&call_tmp_chpl3);
  if (isdirect_chpl) {
    chpl_macro_tmp_7654.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7654.addr = tmp_chpl2;
    tmp_chpl3 = chpl_macro_tmp_7654;
    on_fn_chpl36(&rvfDerefTmp_chpl, tmp_chpl3);
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn_chpl36)(&chpl_macro_tmp_7655));
    (_args_foron_fn_chpl)->_0_rvfDerefTmp_chpl = call_tmp_chpl3;
    (_args_foron_fn_chpl)->_1_rvfDerefTmp_chpl = rvfDerefTmp_chpl;
    tmp_chpl4 = &_formal_tmp_error_chpl2;
    chpl_macro_tmp_7656.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7656.addr = tmp_chpl4;
    tmp_chpl5 = chpl_macro_tmp_7656;
    (_args_foron_fn_chpl)->_2_tmp_chpl = tmp_chpl5;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    /*** wrapon_fn_chpl36 ***/ chpl_executeOn(&call_tmp_chpl3, INT32(292), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), sizeof(chpl__class_localson_fn_chpl36_object), INT64(2890), INT32(71));
  }
  call_tmp_chpl4 = qio_err_iserr(_formal_tmp_error_chpl2);
  call_tmp_chpl5 = (call_tmp_chpl4 != INT32(0));
  if (call_tmp_chpl5) {
    _ch_ioerror_chpl2(rvfRerefTmp_chpl, _formal_tmp_error_chpl2, &local__str_literal_2497_chpl /* "in lock" */);
  }
  chpl_gen_comm_get(((void*)(&tmp_chpl6)), chpl_nodeFromLocaleID(&((_formal_tmp_error_chpl).locale), INT64(0), INT32(0)), (_formal_tmp_error_chpl).addr, sizeof(syserr), -1, COMMID(78), INT64(4616), INT64(71));
  call_tmp_chpl6 = qio_err_iserr(tmp_chpl6);
  call_tmp_chpl7 = (call_tmp_chpl6 == INT32(0));
  if (call_tmp_chpl7) {
    chpl_macro_tmp_7657.locale = (args_chpl).locale;
    chpl_macro_tmp_7657.addr = &(((args_chpl).addr)->x1);
    chpl_gen_comm_get(((void*)(&call_tmp_chpl8)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_7657).locale), INT64(0), INT32(0)), (chpl_macro_tmp_7657).addr, sizeof(chpl____wide__ref_string), -1, COMMID(79), INT64(4617), INT64(71));
    tmp_chpl7 = (this_chpl6)->_channel_internal_chpl;
    coerce_tmp_chpl = tmp_chpl7;
    i_x_chpl = call_tmp_chpl8;
    qio_int_to_err(INT32(0));
    call_tmp_chpl9 = qio_channel_binary(coerce_tmp_chpl);
    call_tmp_chpl10 = qio_channel_byteorder(coerce_tmp_chpl);
    call_tmp_chpl11 = (call_tmp_chpl9 != UINT8(0));
    if (call_tmp_chpl11) {
      call_tmp_chpl12 = (((int16_t)(call_tmp_chpl10)) == ((int16_t)(iokind_chpl_big_chpl)));
      if (call_tmp_chpl12) {
        chpl_macro_tmp_7658.locale = (i_x_chpl).locale;
        chpl_macro_tmp_7658.addr = &(((i_x_chpl).addr)->locale_id);
        chpl_gen_comm_get(((void*)(&tmp_chpl8)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_7658).locale), INT64(0), INT32(0)), (chpl_macro_tmp_7658).addr, sizeof(int32_t), -1, COMMID(80), INT64(4617), INT64(71));
        call_tmp_chpl13 = (tmp_chpl8 == chpl_nodeID);
        if (call_tmp_chpl13) {
          ret_to_arg_ref_tmp__chpl = &ret_tmp_chpl;
          i_s_chpl = i_x_chpl;
          string2(i_s_chpl, UINT8(false), ret_to_arg_ref_tmp__chpl);
          ret_chpl = ret_tmp_chpl;
          goto _end_localize_chpl;
        } else {
          (&this_chpl7)->len = INT64(0);
          (&this_chpl7)->_size = INT64(0);
          (&this_chpl7)->buff = nil;
          (&this_chpl7)->owned = UINT8(false);
          (&this_chpl7)->locale_id = INT32(0);
          (&this_chpl7)->len = INT64(0);
          (&this_chpl7)->_size = INT64(0);
          call_tmp_chpl14 = ((c_ptr_uint8_t)(nil));
          (&this_chpl7)->buff = call_tmp_chpl14;
          (&this_chpl7)->owned = UINT8(true);
          default_arglocale_id_chpl = chpl_nodeID;
          (&this_chpl7)->locale_id = default_arglocale_id_chpl;
          ret_to_arg_ref_tmp__chpl2 = &ret_tmp_chpl2;
          _construct_string(INT64(0), INT64(0), call_tmp_chpl14, UINT8(true), default_arglocale_id_chpl, &this_chpl7, ret_to_arg_ref_tmp__chpl2);
          type_tmp_chpl = ret_tmp_chpl2;
          _ref_tmp__chpl = &type_tmp_chpl;
          i_rhs_chpl = i_x_chpl;
          chpl_macro_tmp_7659.locale = chpl_gen_getLocaleID();
          chpl_macro_tmp_7659.addr = _ref_tmp__chpl;
          tmp_chpl9 = chpl_macro_tmp_7659;
          chpl___ASSIGN_13(tmp_chpl9, i_rhs_chpl);
          ret_chpl = type_tmp_chpl;
          goto _end_localize_chpl;
        }
        _end_localize_chpl:;
        local_x_chpl = ret_chpl;
        call_tmp_chpl15 = qio_channel_str_style(coerce_tmp_chpl);
        call_tmp_chpl16 = ((&local_x_chpl)->locale_id != chpl_nodeID);
        if (call_tmp_chpl16) {
          halt(&local__str_literal_337_chpl /* "Cannot call .c_str() on a remote string" */, INT64(4617), INT32(71));
        }
        call_tmp_chpl17 = qio_channel_write_string(((int32_t)(UINT8(false))), ((int32_t)(iokind_chpl_big_chpl)), call_tmp_chpl15, coerce_tmp_chpl, ((c_string)(((c_void_ptr)((&local_x_chpl)->buff)))), (&local_x_chpl)->len);
        _ref_tmp__chpl2 = &local_x_chpl;
        chpl_macro_tmp_7660.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_7660.addr = _ref_tmp__chpl2;
        tmp_chpl10 = chpl_macro_tmp_7660;
        deinit44(tmp_chpl10);
        e_chpl = call_tmp_chpl17;
      } else {
        call_tmp_chpl18 = (((int16_t)(call_tmp_chpl10)) == ((int16_t)(iokind_chpl_little_chpl)));
        if (call_tmp_chpl18) {
          chpl_macro_tmp_7661.locale = (i_x_chpl).locale;
          chpl_macro_tmp_7661.addr = &(((i_x_chpl).addr)->locale_id);
          chpl_gen_comm_get(((void*)(&tmp_chpl11)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_7661).locale), INT64(0), INT32(0)), (chpl_macro_tmp_7661).addr, sizeof(int32_t), -1, COMMID(81), INT64(4617), INT64(71));
          call_tmp_chpl19 = (tmp_chpl11 == chpl_nodeID);
          if (call_tmp_chpl19) {
            ret_to_arg_ref_tmp__chpl3 = &ret_tmp_chpl3;
            i_s_chpl2 = i_x_chpl;
            string2(i_s_chpl2, UINT8(false), ret_to_arg_ref_tmp__chpl3);
            ret_chpl2 = ret_tmp_chpl3;
            goto _end_localize_chpl2;
          } else {
            (&this_chpl8)->len = INT64(0);
            (&this_chpl8)->_size = INT64(0);
            (&this_chpl8)->buff = nil;
            (&this_chpl8)->owned = UINT8(false);
            (&this_chpl8)->locale_id = INT32(0);
            (&this_chpl8)->len = INT64(0);
            (&this_chpl8)->_size = INT64(0);
            call_tmp_chpl20 = ((c_ptr_uint8_t)(nil));
            (&this_chpl8)->buff = call_tmp_chpl20;
            (&this_chpl8)->owned = UINT8(true);
            default_arglocale_id_chpl2 = chpl_nodeID;
            (&this_chpl8)->locale_id = default_arglocale_id_chpl2;
            ret_to_arg_ref_tmp__chpl4 = &ret_tmp_chpl4;
            _construct_string(INT64(0), INT64(0), call_tmp_chpl20, UINT8(true), default_arglocale_id_chpl2, &this_chpl8, ret_to_arg_ref_tmp__chpl4);
            type_tmp_chpl2 = ret_tmp_chpl4;
            _ref_tmp__chpl3 = &type_tmp_chpl2;
            i_rhs_chpl2 = i_x_chpl;
            chpl_macro_tmp_7662.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_7662.addr = _ref_tmp__chpl3;
            tmp_chpl12 = chpl_macro_tmp_7662;
            chpl___ASSIGN_13(tmp_chpl12, i_rhs_chpl2);
            ret_chpl2 = type_tmp_chpl2;
            goto _end_localize_chpl2;
          }
          _end_localize_chpl2:;
          local_x_chpl2 = ret_chpl2;
          call_tmp_chpl21 = qio_channel_str_style(coerce_tmp_chpl);
          coerce_tmp_chpl2 = (&local_x_chpl2)->locale_id;
          call_tmp_chpl22 = (coerce_tmp_chpl2 != chpl_nodeID);
          if (call_tmp_chpl22) {
            halt(&local__str_literal_337_chpl /* "Cannot call .c_str() on a remote string" */, INT64(4617), INT32(71));
          }
          coerce_tmp_chpl3 = (&local_x_chpl2)->buff;
          ret_chpl3 = (&local_x_chpl2)->len;
          call_tmp_chpl23 = qio_channel_write_string(((int32_t)(UINT8(false))), ((int32_t)(iokind_chpl_little_chpl)), call_tmp_chpl21, coerce_tmp_chpl, ((c_string)(((c_void_ptr)(coerce_tmp_chpl3)))), ret_chpl3);
          _ref_tmp__chpl4 = &local_x_chpl2;
          chpl_macro_tmp_7663.locale = chpl_gen_getLocaleID();
          chpl_macro_tmp_7663.addr = _ref_tmp__chpl4;
          tmp_chpl13 = chpl_macro_tmp_7663;
          deinit44(tmp_chpl13);
          e_chpl = call_tmp_chpl23;
        } else {
          chpl_macro_tmp_7664.locale = (i_x_chpl).locale;
          chpl_macro_tmp_7664.addr = &(((i_x_chpl).addr)->locale_id);
          chpl_gen_comm_get(((void*)(&tmp_chpl14)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_7664).locale), INT64(0), INT32(0)), (chpl_macro_tmp_7664).addr, sizeof(int32_t), -1, COMMID(82), INT64(4617), INT64(71));
          call_tmp_chpl24 = (tmp_chpl14 == chpl_nodeID);
          if (call_tmp_chpl24) {
            ret_to_arg_ref_tmp__chpl5 = &ret_tmp_chpl5;
            i_s_chpl3 = i_x_chpl;
            string2(i_s_chpl3, UINT8(false), ret_to_arg_ref_tmp__chpl5);
            ret_chpl4 = ret_tmp_chpl5;
            goto _end_localize_chpl3;
          } else {
            (&this_chpl9)->len = INT64(0);
            (&this_chpl9)->_size = INT64(0);
            (&this_chpl9)->buff = nil;
            (&this_chpl9)->owned = UINT8(false);
            (&this_chpl9)->locale_id = INT32(0);
            (&this_chpl9)->len = INT64(0);
            (&this_chpl9)->_size = INT64(0);
            call_tmp_chpl25 = ((c_ptr_uint8_t)(nil));
            (&this_chpl9)->buff = call_tmp_chpl25;
            (&this_chpl9)->owned = UINT8(true);
            default_arglocale_id_chpl3 = chpl_nodeID;
            (&this_chpl9)->locale_id = default_arglocale_id_chpl3;
            ret_to_arg_ref_tmp__chpl6 = &ret_tmp_chpl6;
            _construct_string(INT64(0), INT64(0), call_tmp_chpl25, UINT8(true), default_arglocale_id_chpl3, &this_chpl9, ret_to_arg_ref_tmp__chpl6);
            type_tmp_chpl3 = ret_tmp_chpl6;
            _ref_tmp__chpl5 = &type_tmp_chpl3;
            i_rhs_chpl3 = i_x_chpl;
            chpl_macro_tmp_7665.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_7665.addr = _ref_tmp__chpl5;
            tmp_chpl15 = chpl_macro_tmp_7665;
            chpl___ASSIGN_13(tmp_chpl15, i_rhs_chpl3);
            ret_chpl4 = type_tmp_chpl3;
            goto _end_localize_chpl3;
          }
          _end_localize_chpl3:;
          local_x_chpl3 = ret_chpl4;
          call_tmp_chpl26 = qio_channel_str_style(coerce_tmp_chpl);
          coerce_tmp_chpl4 = (&local_x_chpl3)->locale_id;
          call_tmp_chpl27 = (coerce_tmp_chpl4 != chpl_nodeID);
          if (call_tmp_chpl27) {
            halt(&local__str_literal_337_chpl /* "Cannot call .c_str() on a remote string" */, INT64(4617), INT32(71));
          }
          coerce_tmp_chpl5 = (&local_x_chpl3)->buff;
          ret_chpl5 = (&local_x_chpl3)->len;
          call_tmp_chpl28 = qio_channel_write_string(((int32_t)(UINT8(false))), ((int32_t)(iokind_chpl_native_chpl)), call_tmp_chpl26, coerce_tmp_chpl, ((c_string)(((c_void_ptr)(coerce_tmp_chpl5)))), ret_chpl5);
          _ref_tmp__chpl6 = &local_x_chpl3;
          chpl_macro_tmp_7666.locale = chpl_gen_getLocaleID();
          chpl_macro_tmp_7666.addr = _ref_tmp__chpl6;
          tmp_chpl16 = chpl_macro_tmp_7666;
          deinit44(tmp_chpl16);
          e_chpl = call_tmp_chpl28;
        }
      }
    } else {
      call_tmp_chpl29 = _write_text_internal_chpl3(coerce_tmp_chpl, i_x_chpl);
      e_chpl = call_tmp_chpl29;
    }
    chpl_gen_comm_put(((void*)(&e_chpl)), chpl_nodeFromLocaleID(&((_formal_tmp_error_chpl).locale), INT64(0), INT32(0)), (_formal_tmp_error_chpl).addr, sizeof(syserr), -1, COMMID(83), INT64(4617), INT64(71));
  }
  chpl_gen_comm_get(((void*)(&tmp_chpl17)), chpl_nodeFromLocaleID(&((_formal_tmp_error_chpl).locale), INT64(0), INT32(0)), (_formal_tmp_error_chpl).addr, sizeof(syserr), -1, COMMID(84), INT64(4616), INT64(71));
  call_tmp_chpl30 = qio_err_iserr(tmp_chpl17);
  call_tmp_chpl31 = (call_tmp_chpl30 == INT32(0));
  if (call_tmp_chpl31) {
    tmp_chpl18 = (this_chpl6)->_channel_internal_chpl;
    coerce_tmp_chpl6 = tmp_chpl18;
    qio_int_to_err(INT32(0));
    call_tmp_chpl32 = qio_channel_write_newline(((int32_t)(UINT8(false))), coerce_tmp_chpl6);
    chpl_gen_comm_put(((void*)(&call_tmp_chpl32)), chpl_nodeFromLocaleID(&((_formal_tmp_error_chpl).locale), INT64(0), INT32(0)), (_formal_tmp_error_chpl).addr, sizeof(syserr), -1, COMMID(85), INT64(4617), INT64(71));
  }
  call_tmp_chpl33 = &((this_chpl6)->home_chpl);
  tmp_chpl19 = *(call_tmp_chpl33);
  call_tmp_chpl34 = (&tmp_chpl19)->locale;
  rvfDerefTmp_chpl2 = *(this_chpl6);
  isdirect_chpl2 = chpl_doDirectExecuteOn(&call_tmp_chpl34);
  if (isdirect_chpl2) {
    on_fn_chpl37(&rvfDerefTmp_chpl2);
  } else {
    _args_foron_fn_chpl2 = ((_class_localson_fn_chpl37)(&chpl_macro_tmp_7667));
    (_args_foron_fn_chpl2)->_0_rvfDerefTmp_chpl = call_tmp_chpl34;
    (_args_foron_fn_chpl2)->_1_rvfDerefTmp_chpl = rvfDerefTmp_chpl2;
    _args_vforon_fn_chpl2 = ((void*)(_args_foron_fn_chpl2));
    /*** wrapon_fn_chpl37 ***/ chpl_executeOn(&call_tmp_chpl34, INT32(293), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl2)), sizeof(chpl__class_localson_fn_chpl37_object), INT64(2910), INT32(71));
  }
  return;
}

/* IO.chpl:4613 */
static void on_fn_chpl51(_ref_channel_T_dynamic_T this_chpl6,
                         chpl____wide__ref_syserr _formal_tmp_error_chpl,
                         chpl____wide__ref__tuple_5__ref_string_int64_t__ref_string__ref__tuple_2_chpl_bool_int64_t__ref_ioNewline args_chpl,
                         chpl____wide_locale origLocale_chpl) {
  qio_channel_ptr_t local_QIO_CHANNEL_PTR_NULL_chpl;
  int32_t local_c_sublocid_any_chpl;
  string local__str_literal_337_chpl;
  string local__str_literal_2497_chpl;
  _ref_channel_T_dynamic_T rvfRerefTmp_chpl = NULL;
  syserr _formal_tmp_error_chpl2;
  syserr call_tmp_chpl;
  _ref__wide_locale call_tmp_chpl2 = NULL;
  chpl_localeID_t call_tmp_chpl3;
  chpl____wide_locale tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_syserr tmp_chpl2 = NULL;
  channel_T_dynamic_T_chpl rvfDerefTmp_chpl;
  chpl_bool isdirect_chpl;
  chpl____wide__ref_syserr tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl36 _args_foron_fn_chpl = NULL;
  _ref_syserr tmp_chpl4 = NULL;
  chpl____wide__ref_syserr tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  int32_t call_tmp_chpl4;
  chpl_bool call_tmp_chpl5;
  syserr tmp_chpl6;
  int32_t call_tmp_chpl6;
  chpl_bool call_tmp_chpl7;
  chpl____wide__ref_string call_tmp_chpl8 = {CHPL_LOCALEID_T_INIT, NULL};
  qio_channel_ptr_t coerce_tmp_chpl;
  qio_channel_ptr_t tmp_chpl7;
  chpl____wide__ref_string i_x_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  syserr e_chpl;
  uint8_t call_tmp_chpl9;
  uint8_t call_tmp_chpl10;
  chpl_bool call_tmp_chpl11;
  chpl_bool call_tmp_chpl12;
  string local_x_chpl;
  string ret_chpl;
  int32_t tmp_chpl8;
  chpl_bool call_tmp_chpl13;
  string ret_tmp_chpl;
  _ref_string ret_to_arg_ref_tmp__chpl = NULL;
  chpl____wide__ref_string i_s_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  string type_tmp_chpl;
  string this_chpl7;
  c_ptr_uint8_t call_tmp_chpl14 = NULL;
  int32_t default_arglocale_id_chpl;
  string ret_tmp_chpl2;
  _ref_string ret_to_arg_ref_tmp__chpl2 = NULL;
  _ref_string _ref_tmp__chpl = NULL;
  chpl____wide__ref_string i_rhs_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string tmp_chpl9 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp_chpl15;
  chpl_bool call_tmp_chpl16;
  syserr call_tmp_chpl17;
  _ref_string _ref_tmp__chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl10 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp_chpl18;
  string local_x_chpl2;
  string ret_chpl2;
  int32_t tmp_chpl11;
  chpl_bool call_tmp_chpl19;
  string ret_tmp_chpl3;
  _ref_string ret_to_arg_ref_tmp__chpl3 = NULL;
  chpl____wide__ref_string i_s_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  string type_tmp_chpl2;
  string this_chpl8;
  c_ptr_uint8_t call_tmp_chpl20 = NULL;
  int32_t default_arglocale_id_chpl2;
  string ret_tmp_chpl4;
  _ref_string ret_to_arg_ref_tmp__chpl4 = NULL;
  _ref_string _ref_tmp__chpl3 = NULL;
  chpl____wide__ref_string i_rhs_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string tmp_chpl12 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp_chpl21;
  int32_t coerce_tmp_chpl2;
  chpl_bool call_tmp_chpl22;
  syserr call_tmp_chpl23;
  _ref_string _ref_tmp__chpl4 = NULL;
  chpl____wide__ref_string tmp_chpl13 = {CHPL_LOCALEID_T_INIT, NULL};
  string local_x_chpl3;
  string ret_chpl3;
  int32_t tmp_chpl14;
  chpl_bool call_tmp_chpl24;
  string ret_tmp_chpl5;
  _ref_string ret_to_arg_ref_tmp__chpl5 = NULL;
  chpl____wide__ref_string i_s_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  string type_tmp_chpl3;
  string this_chpl9;
  c_ptr_uint8_t call_tmp_chpl25 = NULL;
  int32_t default_arglocale_id_chpl3;
  string ret_tmp_chpl6;
  _ref_string ret_to_arg_ref_tmp__chpl6 = NULL;
  _ref_string _ref_tmp__chpl5 = NULL;
  chpl____wide__ref_string i_rhs_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp_chpl26;
  int32_t coerce_tmp_chpl3;
  chpl_bool call_tmp_chpl27;
  syserr call_tmp_chpl28;
  _ref_string _ref_tmp__chpl6 = NULL;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  syserr call_tmp_chpl29;
  syserr tmp_chpl17;
  int32_t call_tmp_chpl30;
  chpl_bool call_tmp_chpl31;
  qio_channel_ptr_t coerce_tmp_chpl4;
  qio_channel_ptr_t tmp_chpl18;
  int64_t coerce_tmp_chpl5;
  int64_t tmp_chpl19;
  syserr e_chpl2;
  uint8_t call_tmp_chpl32;
  uint8_t call_tmp_chpl33;
  chpl_bool call_tmp_chpl34;
  chpl_bool call_tmp_chpl35;
  syserr call_tmp_chpl36;
  chpl_bool call_tmp_chpl37;
  syserr call_tmp_chpl38;
  syserr call_tmp_chpl39;
  syserr call_tmp_chpl40;
  syserr tmp_chpl20;
  int32_t call_tmp_chpl41;
  chpl_bool call_tmp_chpl42;
  chpl____wide__ref_string call_tmp_chpl43 = {CHPL_LOCALEID_T_INIT, NULL};
  qio_channel_ptr_t coerce_tmp_chpl6;
  qio_channel_ptr_t tmp_chpl21;
  chpl____wide__ref_string i_x_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  syserr e_chpl3;
  uint8_t call_tmp_chpl44;
  uint8_t call_tmp_chpl45;
  chpl_bool call_tmp_chpl46;
  chpl_bool call_tmp_chpl47;
  string local_x_chpl4;
  string ret_chpl4;
  int32_t tmp_chpl22;
  chpl_bool call_tmp_chpl48;
  string ret_tmp_chpl7;
  _ref_string ret_to_arg_ref_tmp__chpl7 = NULL;
  chpl____wide__ref_string i_s_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  string type_tmp_chpl4;
  string this_chpl10;
  c_ptr_uint8_t call_tmp_chpl49 = NULL;
  int32_t default_arglocale_id_chpl4;
  string ret_tmp_chpl8;
  _ref_string ret_to_arg_ref_tmp__chpl8 = NULL;
  _ref_string _ref_tmp__chpl7 = NULL;
  chpl____wide__ref_string i_rhs_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string tmp_chpl23 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp_chpl50;
  chpl_bool call_tmp_chpl51;
  int64_t ret_chpl5;
  syserr call_tmp_chpl52;
  _ref_string _ref_tmp__chpl8 = NULL;
  chpl____wide__ref_string tmp_chpl24 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp_chpl53;
  string local_x_chpl5;
  string ret_chpl6;
  int32_t tmp_chpl25;
  chpl_bool call_tmp_chpl54;
  string ret_tmp_chpl9;
  _ref_string ret_to_arg_ref_tmp__chpl9 = NULL;
  chpl____wide__ref_string i_s_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  string type_tmp_chpl5;
  string this_chpl11;
  c_ptr_uint8_t call_tmp_chpl55 = NULL;
  int32_t default_arglocale_id_chpl5;
  string ret_tmp_chpl10;
  _ref_string ret_to_arg_ref_tmp__chpl10 = NULL;
  _ref_string _ref_tmp__chpl9 = NULL;
  chpl____wide__ref_string i_rhs_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string tmp_chpl26 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp_chpl56;
  chpl_bool call_tmp_chpl57;
  syserr call_tmp_chpl58;
  _ref_string _ref_tmp__chpl10 = NULL;
  chpl____wide__ref_string tmp_chpl27 = {CHPL_LOCALEID_T_INIT, NULL};
  string local_x_chpl6;
  string ret_chpl7;
  int32_t tmp_chpl28;
  chpl_bool call_tmp_chpl59;
  string ret_tmp_chpl11;
  _ref_string ret_to_arg_ref_tmp__chpl11 = NULL;
  chpl____wide__ref_string i_s_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  string type_tmp_chpl6;
  string this_chpl12;
  c_ptr_uint8_t call_tmp_chpl60 = NULL;
  int32_t default_arglocale_id_chpl6;
  string ret_tmp_chpl12;
  _ref_string ret_to_arg_ref_tmp__chpl12 = NULL;
  _ref_string _ref_tmp__chpl11 = NULL;
  chpl____wide__ref_string i_rhs_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string tmp_chpl29 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp_chpl61;
  chpl_bool call_tmp_chpl62;
  syserr call_tmp_chpl63;
  _ref_string _ref_tmp__chpl12 = NULL;
  chpl____wide__ref_string tmp_chpl30 = {CHPL_LOCALEID_T_INIT, NULL};
  syserr call_tmp_chpl64;
  syserr tmp_chpl31;
  int32_t call_tmp_chpl65;
  chpl_bool call_tmp_chpl66;
  chpl____wide__ref__tuple_2_chpl_bool_int64_t call_tmp_chpl67 = {CHPL_LOCALEID_T_INIT, NULL};
  qio_channel_ptr_t coerce_tmp_chpl7;
  qio_channel_ptr_t tmp_chpl32;
  chpl____wide__ref__tuple_2_chpl_bool_int64_t i_x_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  channel_T_dynamic_F_chpl writer_chpl5;
  chpl_localeID_t _autoCopy_tmp__chpl;
  chpl____wide_locale call_tmp_chpl68 = {CHPL_LOCALEID_T_INIT, NULL};
  channel_T_dynamic_F_chpl this_chpl13;
  chpl____wide_locale tmp_chpl33 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_locale tmp_chpl34 = {CHPL_LOCALEID_T_INIT, NULL};
  channel_T_dynamic_F_chpl ret_tmp_chpl13;
  _ref_channel_T_dynamic_F ret_to_arg_ref_tmp__chpl13 = NULL;
  chpl____wide__ref__tuple_2_chpl_bool_int64_t _ref_tmp__chpl13 = {CHPL_LOCALEID_T_INIT, NULL};
  syserr call_tmp_chpl69;
  _ref_channel_T_dynamic_F _ref_tmp__chpl14 = NULL;
  syserr tmp_chpl35;
  int32_t call_tmp_chpl70;
  chpl_bool call_tmp_chpl71;
  qio_channel_ptr_t coerce_tmp_chpl8;
  qio_channel_ptr_t tmp_chpl36;
  syserr call_tmp_chpl72;
  _ref__wide_locale call_tmp_chpl73 = NULL;
  chpl_localeID_t call_tmp_chpl74;
  chpl____wide_locale tmp_chpl37 = {CHPL_LOCALEID_T_INIT, NULL};
  channel_T_dynamic_T_chpl rvfDerefTmp_chpl2;
  chpl_bool isdirect_chpl2;
  _class_localson_fn_chpl37 _args_foron_fn_chpl2 = NULL;
  c_void_ptr _args_vforon_fn_chpl2;
  chpl____wide__ref_syserr chpl_macro_tmp_7668;
  chpl__class_localson_fn_chpl36_object chpl_macro_tmp_7669;
  chpl____wide__ref_syserr chpl_macro_tmp_7670;
  chpl____wide__ref_chpl____wide__ref_string chpl_macro_tmp_7671;
  chpl____wide__ref_int32_t chpl_macro_tmp_7672;
  chpl____wide__ref_string chpl_macro_tmp_7673;
  chpl____wide__ref_string chpl_macro_tmp_7674;
  chpl____wide__ref_int32_t chpl_macro_tmp_7675;
  chpl____wide__ref_string chpl_macro_tmp_7676;
  chpl____wide__ref_string chpl_macro_tmp_7677;
  chpl____wide__ref_int32_t chpl_macro_tmp_7678;
  chpl____wide__ref_string chpl_macro_tmp_7679;
  chpl____wide__ref_string chpl_macro_tmp_7680;
  chpl____wide__ref_int64_t chpl_macro_tmp_7681;
  chpl____wide__ref_chpl____wide__ref_string chpl_macro_tmp_7682;
  chpl____wide__ref_int32_t chpl_macro_tmp_7683;
  chpl____wide__ref_string chpl_macro_tmp_7684;
  chpl____wide__ref_string chpl_macro_tmp_7685;
  chpl____wide__ref_int32_t chpl_macro_tmp_7686;
  chpl____wide__ref_string chpl_macro_tmp_7687;
  chpl____wide__ref_string chpl_macro_tmp_7688;
  chpl____wide__ref_int32_t chpl_macro_tmp_7689;
  chpl____wide__ref_string chpl_macro_tmp_7690;
  chpl____wide__ref_string chpl_macro_tmp_7691;
  chpl____wide__ref_chpl____wide__ref__tuple_2_chpl_bool_int64_t chpl_macro_tmp_7692;
  chpl____wide__nilType chpl_macro_tmp_7693;
  chpl____wide_locale chpl_macro_tmp_7694;
  chpl____wide__nilType chpl_macro_tmp_7695;
  chpl____wide_locale chpl_macro_tmp_7696;
  chpl__class_localson_fn_chpl37_object chpl_macro_tmp_7697;
  local_QIO_CHANNEL_PTR_NULL_chpl = QIO_CHANNEL_PTR_NULL;
  local_c_sublocid_any_chpl = c_sublocid_any;
  local__str_literal_337_chpl /* "Cannot call .c_str() on a remote string" */ = _str_literal_337 /* "Cannot call .c_str() on a remote string" */;
  local__str_literal_2497_chpl /* "in lock" */ = _str_literal_2497 /* "in lock" */;
  rvfRerefTmp_chpl = this_chpl6;
  qio_int_to_err(INT32(0));
  call_tmp_chpl = qio_int_to_err(INT32(0));
  _formal_tmp_error_chpl2 = call_tmp_chpl;
  call_tmp_chpl2 = &((this_chpl6)->home_chpl);
  tmp_chpl = *(call_tmp_chpl2);
  call_tmp_chpl3 = (&tmp_chpl)->locale;
  tmp_chpl2 = &_formal_tmp_error_chpl2;
  rvfDerefTmp_chpl = *(this_chpl6);
  isdirect_chpl = chpl_doDirectExecuteOn(&call_tmp_chpl3);
  if (isdirect_chpl) {
    chpl_macro_tmp_7668.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7668.addr = tmp_chpl2;
    tmp_chpl3 = chpl_macro_tmp_7668;
    on_fn_chpl36(&rvfDerefTmp_chpl, tmp_chpl3);
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn_chpl36)(&chpl_macro_tmp_7669));
    (_args_foron_fn_chpl)->_0_rvfDerefTmp_chpl = call_tmp_chpl3;
    (_args_foron_fn_chpl)->_1_rvfDerefTmp_chpl = rvfDerefTmp_chpl;
    tmp_chpl4 = &_formal_tmp_error_chpl2;
    chpl_macro_tmp_7670.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7670.addr = tmp_chpl4;
    tmp_chpl5 = chpl_macro_tmp_7670;
    (_args_foron_fn_chpl)->_2_tmp_chpl = tmp_chpl5;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    /*** wrapon_fn_chpl36 ***/ chpl_executeOn(&call_tmp_chpl3, INT32(292), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), sizeof(chpl__class_localson_fn_chpl36_object), INT64(2890), INT32(71));
  }
  call_tmp_chpl4 = qio_err_iserr(_formal_tmp_error_chpl2);
  call_tmp_chpl5 = (call_tmp_chpl4 != INT32(0));
  if (call_tmp_chpl5) {
    _ch_ioerror_chpl2(rvfRerefTmp_chpl, _formal_tmp_error_chpl2, &local__str_literal_2497_chpl /* "in lock" */);
  }
  chpl_gen_comm_get(((void*)(&tmp_chpl6)), chpl_nodeFromLocaleID(&((_formal_tmp_error_chpl).locale), INT64(0), INT32(0)), (_formal_tmp_error_chpl).addr, sizeof(syserr), -1, COMMID(86), INT64(4616), INT64(71));
  call_tmp_chpl6 = qio_err_iserr(tmp_chpl6);
  call_tmp_chpl7 = (call_tmp_chpl6 == INT32(0));
  if (call_tmp_chpl7) {
    chpl_macro_tmp_7671.locale = (args_chpl).locale;
    chpl_macro_tmp_7671.addr = &(((args_chpl).addr)->x1);
    chpl_gen_comm_get(((void*)(&call_tmp_chpl8)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_7671).locale), INT64(0), INT32(0)), (chpl_macro_tmp_7671).addr, sizeof(chpl____wide__ref_string), -1, COMMID(87), INT64(4617), INT64(71));
    tmp_chpl7 = (this_chpl6)->_channel_internal_chpl;
    coerce_tmp_chpl = tmp_chpl7;
    i_x_chpl = call_tmp_chpl8;
    qio_int_to_err(INT32(0));
    call_tmp_chpl9 = qio_channel_binary(coerce_tmp_chpl);
    call_tmp_chpl10 = qio_channel_byteorder(coerce_tmp_chpl);
    call_tmp_chpl11 = (call_tmp_chpl9 != UINT8(0));
    if (call_tmp_chpl11) {
      call_tmp_chpl12 = (((int16_t)(call_tmp_chpl10)) == ((int16_t)(iokind_chpl_big_chpl)));
      if (call_tmp_chpl12) {
        chpl_macro_tmp_7672.locale = (i_x_chpl).locale;
        chpl_macro_tmp_7672.addr = &(((i_x_chpl).addr)->locale_id);
        chpl_gen_comm_get(((void*)(&tmp_chpl8)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_7672).locale), INT64(0), INT32(0)), (chpl_macro_tmp_7672).addr, sizeof(int32_t), -1, COMMID(88), INT64(4617), INT64(71));
        call_tmp_chpl13 = (tmp_chpl8 == chpl_nodeID);
        if (call_tmp_chpl13) {
          ret_to_arg_ref_tmp__chpl = &ret_tmp_chpl;
          i_s_chpl = i_x_chpl;
          string2(i_s_chpl, UINT8(false), ret_to_arg_ref_tmp__chpl);
          ret_chpl = ret_tmp_chpl;
          goto _end_localize_chpl;
        } else {
          (&this_chpl7)->len = INT64(0);
          (&this_chpl7)->_size = INT64(0);
          (&this_chpl7)->buff = nil;
          (&this_chpl7)->owned = UINT8(false);
          (&this_chpl7)->locale_id = INT32(0);
          (&this_chpl7)->len = INT64(0);
          (&this_chpl7)->_size = INT64(0);
          call_tmp_chpl14 = ((c_ptr_uint8_t)(nil));
          (&this_chpl7)->buff = call_tmp_chpl14;
          (&this_chpl7)->owned = UINT8(true);
          default_arglocale_id_chpl = chpl_nodeID;
          (&this_chpl7)->locale_id = default_arglocale_id_chpl;
          ret_to_arg_ref_tmp__chpl2 = &ret_tmp_chpl2;
          _construct_string(INT64(0), INT64(0), call_tmp_chpl14, UINT8(true), default_arglocale_id_chpl, &this_chpl7, ret_to_arg_ref_tmp__chpl2);
          type_tmp_chpl = ret_tmp_chpl2;
          _ref_tmp__chpl = &type_tmp_chpl;
          i_rhs_chpl = i_x_chpl;
          chpl_macro_tmp_7673.locale = chpl_gen_getLocaleID();
          chpl_macro_tmp_7673.addr = _ref_tmp__chpl;
          tmp_chpl9 = chpl_macro_tmp_7673;
          chpl___ASSIGN_13(tmp_chpl9, i_rhs_chpl);
          ret_chpl = type_tmp_chpl;
          goto _end_localize_chpl;
        }
        _end_localize_chpl:;
        local_x_chpl = ret_chpl;
        call_tmp_chpl15 = qio_channel_str_style(coerce_tmp_chpl);
        call_tmp_chpl16 = ((&local_x_chpl)->locale_id != chpl_nodeID);
        if (call_tmp_chpl16) {
          halt(&local__str_literal_337_chpl /* "Cannot call .c_str() on a remote string" */, INT64(4617), INT32(71));
        }
        call_tmp_chpl17 = qio_channel_write_string(((int32_t)(UINT8(false))), ((int32_t)(iokind_chpl_big_chpl)), call_tmp_chpl15, coerce_tmp_chpl, ((c_string)(((c_void_ptr)((&local_x_chpl)->buff)))), (&local_x_chpl)->len);
        _ref_tmp__chpl2 = &local_x_chpl;
        chpl_macro_tmp_7674.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_7674.addr = _ref_tmp__chpl2;
        tmp_chpl10 = chpl_macro_tmp_7674;
        deinit44(tmp_chpl10);
        e_chpl = call_tmp_chpl17;
      } else {
        call_tmp_chpl18 = (((int16_t)(call_tmp_chpl10)) == ((int16_t)(iokind_chpl_little_chpl)));
        if (call_tmp_chpl18) {
          chpl_macro_tmp_7675.locale = (i_x_chpl).locale;
          chpl_macro_tmp_7675.addr = &(((i_x_chpl).addr)->locale_id);
          chpl_gen_comm_get(((void*)(&tmp_chpl11)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_7675).locale), INT64(0), INT32(0)), (chpl_macro_tmp_7675).addr, sizeof(int32_t), -1, COMMID(89), INT64(4617), INT64(71));
          call_tmp_chpl19 = (tmp_chpl11 == chpl_nodeID);
          if (call_tmp_chpl19) {
            ret_to_arg_ref_tmp__chpl3 = &ret_tmp_chpl3;
            i_s_chpl2 = i_x_chpl;
            string2(i_s_chpl2, UINT8(false), ret_to_arg_ref_tmp__chpl3);
            ret_chpl2 = ret_tmp_chpl3;
            goto _end_localize_chpl2;
          } else {
            (&this_chpl8)->len = INT64(0);
            (&this_chpl8)->_size = INT64(0);
            (&this_chpl8)->buff = nil;
            (&this_chpl8)->owned = UINT8(false);
            (&this_chpl8)->locale_id = INT32(0);
            (&this_chpl8)->len = INT64(0);
            (&this_chpl8)->_size = INT64(0);
            call_tmp_chpl20 = ((c_ptr_uint8_t)(nil));
            (&this_chpl8)->buff = call_tmp_chpl20;
            (&this_chpl8)->owned = UINT8(true);
            default_arglocale_id_chpl2 = chpl_nodeID;
            (&this_chpl8)->locale_id = default_arglocale_id_chpl2;
            ret_to_arg_ref_tmp__chpl4 = &ret_tmp_chpl4;
            _construct_string(INT64(0), INT64(0), call_tmp_chpl20, UINT8(true), default_arglocale_id_chpl2, &this_chpl8, ret_to_arg_ref_tmp__chpl4);
            type_tmp_chpl2 = ret_tmp_chpl4;
            _ref_tmp__chpl3 = &type_tmp_chpl2;
            i_rhs_chpl2 = i_x_chpl;
            chpl_macro_tmp_7676.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_7676.addr = _ref_tmp__chpl3;
            tmp_chpl12 = chpl_macro_tmp_7676;
            chpl___ASSIGN_13(tmp_chpl12, i_rhs_chpl2);
            ret_chpl2 = type_tmp_chpl2;
            goto _end_localize_chpl2;
          }
          _end_localize_chpl2:;
          local_x_chpl2 = ret_chpl2;
          call_tmp_chpl21 = qio_channel_str_style(coerce_tmp_chpl);
          coerce_tmp_chpl2 = (&local_x_chpl2)->locale_id;
          call_tmp_chpl22 = (coerce_tmp_chpl2 != chpl_nodeID);
          if (call_tmp_chpl22) {
            halt(&local__str_literal_337_chpl /* "Cannot call .c_str() on a remote string" */, INT64(4617), INT32(71));
          }
          call_tmp_chpl23 = qio_channel_write_string(((int32_t)(UINT8(false))), ((int32_t)(iokind_chpl_little_chpl)), call_tmp_chpl21, coerce_tmp_chpl, ((c_string)(((c_void_ptr)((&local_x_chpl2)->buff)))), (&local_x_chpl2)->len);
          _ref_tmp__chpl4 = &local_x_chpl2;
          chpl_macro_tmp_7677.locale = chpl_gen_getLocaleID();
          chpl_macro_tmp_7677.addr = _ref_tmp__chpl4;
          tmp_chpl13 = chpl_macro_tmp_7677;
          deinit44(tmp_chpl13);
          e_chpl = call_tmp_chpl23;
        } else {
          chpl_macro_tmp_7678.locale = (i_x_chpl).locale;
          chpl_macro_tmp_7678.addr = &(((i_x_chpl).addr)->locale_id);
          chpl_gen_comm_get(((void*)(&tmp_chpl14)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_7678).locale), INT64(0), INT32(0)), (chpl_macro_tmp_7678).addr, sizeof(int32_t), -1, COMMID(90), INT64(4617), INT64(71));
          call_tmp_chpl24 = (tmp_chpl14 == chpl_nodeID);
          if (call_tmp_chpl24) {
            ret_to_arg_ref_tmp__chpl5 = &ret_tmp_chpl5;
            i_s_chpl3 = i_x_chpl;
            string2(i_s_chpl3, UINT8(false), ret_to_arg_ref_tmp__chpl5);
            ret_chpl3 = ret_tmp_chpl5;
            goto _end_localize_chpl3;
          } else {
            (&this_chpl9)->len = INT64(0);
            (&this_chpl9)->_size = INT64(0);
            (&this_chpl9)->buff = nil;
            (&this_chpl9)->owned = UINT8(false);
            (&this_chpl9)->locale_id = INT32(0);
            (&this_chpl9)->len = INT64(0);
            (&this_chpl9)->_size = INT64(0);
            call_tmp_chpl25 = ((c_ptr_uint8_t)(nil));
            (&this_chpl9)->buff = call_tmp_chpl25;
            (&this_chpl9)->owned = UINT8(true);
            default_arglocale_id_chpl3 = chpl_nodeID;
            (&this_chpl9)->locale_id = default_arglocale_id_chpl3;
            ret_to_arg_ref_tmp__chpl6 = &ret_tmp_chpl6;
            _construct_string(INT64(0), INT64(0), call_tmp_chpl25, UINT8(true), default_arglocale_id_chpl3, &this_chpl9, ret_to_arg_ref_tmp__chpl6);
            type_tmp_chpl3 = ret_tmp_chpl6;
            _ref_tmp__chpl5 = &type_tmp_chpl3;
            i_rhs_chpl3 = i_x_chpl;
            chpl_macro_tmp_7679.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_7679.addr = _ref_tmp__chpl5;
            tmp_chpl15 = chpl_macro_tmp_7679;
            chpl___ASSIGN_13(tmp_chpl15, i_rhs_chpl3);
            ret_chpl3 = type_tmp_chpl3;
            goto _end_localize_chpl3;
          }
          _end_localize_chpl3:;
          local_x_chpl3 = ret_chpl3;
          call_tmp_chpl26 = qio_channel_str_style(coerce_tmp_chpl);
          coerce_tmp_chpl3 = (&local_x_chpl3)->locale_id;
          call_tmp_chpl27 = (coerce_tmp_chpl3 != chpl_nodeID);
          if (call_tmp_chpl27) {
            halt(&local__str_literal_337_chpl /* "Cannot call .c_str() on a remote string" */, INT64(4617), INT32(71));
          }
          call_tmp_chpl28 = qio_channel_write_string(((int32_t)(UINT8(false))), ((int32_t)(iokind_chpl_native_chpl)), call_tmp_chpl26, coerce_tmp_chpl, ((c_string)(((c_void_ptr)((&local_x_chpl3)->buff)))), (&local_x_chpl3)->len);
          _ref_tmp__chpl6 = &local_x_chpl3;
          chpl_macro_tmp_7680.locale = chpl_gen_getLocaleID();
          chpl_macro_tmp_7680.addr = _ref_tmp__chpl6;
          tmp_chpl16 = chpl_macro_tmp_7680;
          deinit44(tmp_chpl16);
          e_chpl = call_tmp_chpl28;
        }
      }
    } else {
      call_tmp_chpl29 = _write_text_internal_chpl3(coerce_tmp_chpl, i_x_chpl);
      e_chpl = call_tmp_chpl29;
    }
    chpl_gen_comm_put(((void*)(&e_chpl)), chpl_nodeFromLocaleID(&((_formal_tmp_error_chpl).locale), INT64(0), INT32(0)), (_formal_tmp_error_chpl).addr, sizeof(syserr), -1, COMMID(91), INT64(4617), INT64(71));
  }
  chpl_gen_comm_get(((void*)(&tmp_chpl17)), chpl_nodeFromLocaleID(&((_formal_tmp_error_chpl).locale), INT64(0), INT32(0)), (_formal_tmp_error_chpl).addr, sizeof(syserr), -1, COMMID(92), INT64(4616), INT64(71));
  call_tmp_chpl30 = qio_err_iserr(tmp_chpl17);
  call_tmp_chpl31 = (call_tmp_chpl30 == INT32(0));
  if (call_tmp_chpl31) {
    tmp_chpl18 = (this_chpl6)->_channel_internal_chpl;
    coerce_tmp_chpl4 = tmp_chpl18;
    chpl_macro_tmp_7681.locale = (args_chpl).locale;
    chpl_macro_tmp_7681.addr = &(((args_chpl).addr)->x2);
    chpl_gen_comm_get(((void*)(&tmp_chpl19)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_7681).locale), INT64(0), INT32(0)), (chpl_macro_tmp_7681).addr, sizeof(int64_t), -1, COMMID(93), INT64(4617), INT64(71));
    coerce_tmp_chpl5 = tmp_chpl19;
    qio_int_to_err(INT32(0));
    call_tmp_chpl32 = qio_channel_binary(coerce_tmp_chpl4);
    call_tmp_chpl33 = qio_channel_byteorder(coerce_tmp_chpl4);
    call_tmp_chpl34 = (call_tmp_chpl32 != UINT8(0));
    if (call_tmp_chpl34) {
      call_tmp_chpl35 = (((int16_t)(call_tmp_chpl33)) == ((int16_t)(iokind_chpl_big_chpl)));
      if (call_tmp_chpl35) {
        call_tmp_chpl36 = qio_channel_write_int64(((int32_t)(UINT8(false))), ((int32_t)(iokind_chpl_big_chpl)), coerce_tmp_chpl4, coerce_tmp_chpl5);
        e_chpl2 = call_tmp_chpl36;
      } else {
        call_tmp_chpl37 = (((int16_t)(call_tmp_chpl33)) == ((int16_t)(iokind_chpl_little_chpl)));
        if (call_tmp_chpl37) {
          call_tmp_chpl38 = qio_channel_write_int64(((int32_t)(UINT8(false))), ((int32_t)(iokind_chpl_little_chpl)), coerce_tmp_chpl4, coerce_tmp_chpl5);
          e_chpl2 = call_tmp_chpl38;
        } else {
          call_tmp_chpl39 = qio_channel_write_int64(((int32_t)(UINT8(false))), ((int32_t)(iokind_chpl_native_chpl)), coerce_tmp_chpl4, coerce_tmp_chpl5);
          e_chpl2 = call_tmp_chpl39;
        }
      }
    } else {
      call_tmp_chpl40 = _write_text_internal_chpl4(coerce_tmp_chpl4, coerce_tmp_chpl5);
      e_chpl2 = call_tmp_chpl40;
    }
    chpl_gen_comm_put(((void*)(&e_chpl2)), chpl_nodeFromLocaleID(&((_formal_tmp_error_chpl).locale), INT64(0), INT32(0)), (_formal_tmp_error_chpl).addr, sizeof(syserr), -1, COMMID(94), INT64(4617), INT64(71));
  }
  chpl_gen_comm_get(((void*)(&tmp_chpl20)), chpl_nodeFromLocaleID(&((_formal_tmp_error_chpl).locale), INT64(0), INT32(0)), (_formal_tmp_error_chpl).addr, sizeof(syserr), -1, COMMID(95), INT64(4616), INT64(71));
  call_tmp_chpl41 = qio_err_iserr(tmp_chpl20);
  call_tmp_chpl42 = (call_tmp_chpl41 == INT32(0));
  if (call_tmp_chpl42) {
    chpl_macro_tmp_7682.locale = (args_chpl).locale;
    chpl_macro_tmp_7682.addr = &(((args_chpl).addr)->x3);
    chpl_gen_comm_get(((void*)(&call_tmp_chpl43)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_7682).locale), INT64(0), INT32(0)), (chpl_macro_tmp_7682).addr, sizeof(chpl____wide__ref_string), -1, COMMID(96), INT64(4617), INT64(71));
    tmp_chpl21 = (this_chpl6)->_channel_internal_chpl;
    coerce_tmp_chpl6 = tmp_chpl21;
    i_x_chpl2 = call_tmp_chpl43;
    qio_int_to_err(INT32(0));
    call_tmp_chpl44 = qio_channel_binary(coerce_tmp_chpl6);
    call_tmp_chpl45 = qio_channel_byteorder(coerce_tmp_chpl6);
    call_tmp_chpl46 = (call_tmp_chpl44 != UINT8(0));
    if (call_tmp_chpl46) {
      call_tmp_chpl47 = (((int16_t)(call_tmp_chpl45)) == ((int16_t)(iokind_chpl_big_chpl)));
      if (call_tmp_chpl47) {
        chpl_macro_tmp_7683.locale = (i_x_chpl2).locale;
        chpl_macro_tmp_7683.addr = &(((i_x_chpl2).addr)->locale_id);
        chpl_gen_comm_get(((void*)(&tmp_chpl22)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_7683).locale), INT64(0), INT32(0)), (chpl_macro_tmp_7683).addr, sizeof(int32_t), -1, COMMID(97), INT64(4617), INT64(71));
        call_tmp_chpl48 = (tmp_chpl22 == chpl_nodeID);
        if (call_tmp_chpl48) {
          ret_to_arg_ref_tmp__chpl7 = &ret_tmp_chpl7;
          i_s_chpl4 = i_x_chpl2;
          string2(i_s_chpl4, UINT8(false), ret_to_arg_ref_tmp__chpl7);
          ret_chpl4 = ret_tmp_chpl7;
          goto _end_localize_chpl4;
        } else {
          (&this_chpl10)->len = INT64(0);
          (&this_chpl10)->_size = INT64(0);
          (&this_chpl10)->buff = nil;
          (&this_chpl10)->owned = UINT8(false);
          (&this_chpl10)->locale_id = INT32(0);
          (&this_chpl10)->len = INT64(0);
          (&this_chpl10)->_size = INT64(0);
          call_tmp_chpl49 = ((c_ptr_uint8_t)(nil));
          (&this_chpl10)->buff = call_tmp_chpl49;
          (&this_chpl10)->owned = UINT8(true);
          default_arglocale_id_chpl4 = chpl_nodeID;
          (&this_chpl10)->locale_id = default_arglocale_id_chpl4;
          ret_to_arg_ref_tmp__chpl8 = &ret_tmp_chpl8;
          _construct_string(INT64(0), INT64(0), call_tmp_chpl49, UINT8(true), default_arglocale_id_chpl4, &this_chpl10, ret_to_arg_ref_tmp__chpl8);
          type_tmp_chpl4 = ret_tmp_chpl8;
          _ref_tmp__chpl7 = &type_tmp_chpl4;
          i_rhs_chpl4 = i_x_chpl2;
          chpl_macro_tmp_7684.locale = chpl_gen_getLocaleID();
          chpl_macro_tmp_7684.addr = _ref_tmp__chpl7;
          tmp_chpl23 = chpl_macro_tmp_7684;
          chpl___ASSIGN_13(tmp_chpl23, i_rhs_chpl4);
          ret_chpl4 = type_tmp_chpl4;
          goto _end_localize_chpl4;
        }
        _end_localize_chpl4:;
        local_x_chpl4 = ret_chpl4;
        call_tmp_chpl50 = qio_channel_str_style(coerce_tmp_chpl6);
        call_tmp_chpl51 = ((&local_x_chpl4)->locale_id != chpl_nodeID);
        if (call_tmp_chpl51) {
          halt(&local__str_literal_337_chpl /* "Cannot call .c_str() on a remote string" */, INT64(4617), INT32(71));
        }
        ret_chpl5 = (&local_x_chpl4)->len;
        call_tmp_chpl52 = qio_channel_write_string(((int32_t)(UINT8(false))), ((int32_t)(iokind_chpl_big_chpl)), call_tmp_chpl50, coerce_tmp_chpl6, ((c_string)(((c_void_ptr)((&local_x_chpl4)->buff)))), ret_chpl5);
        _ref_tmp__chpl8 = &local_x_chpl4;
        chpl_macro_tmp_7685.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_7685.addr = _ref_tmp__chpl8;
        tmp_chpl24 = chpl_macro_tmp_7685;
        deinit44(tmp_chpl24);
        e_chpl3 = call_tmp_chpl52;
      } else {
        call_tmp_chpl53 = (((int16_t)(call_tmp_chpl45)) == ((int16_t)(iokind_chpl_little_chpl)));
        if (call_tmp_chpl53) {
          chpl_macro_tmp_7686.locale = (i_x_chpl2).locale;
          chpl_macro_tmp_7686.addr = &(((i_x_chpl2).addr)->locale_id);
          chpl_gen_comm_get(((void*)(&tmp_chpl25)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_7686).locale), INT64(0), INT32(0)), (chpl_macro_tmp_7686).addr, sizeof(int32_t), -1, COMMID(98), INT64(4617), INT64(71));
          call_tmp_chpl54 = (tmp_chpl25 == chpl_nodeID);
          if (call_tmp_chpl54) {
            ret_to_arg_ref_tmp__chpl9 = &ret_tmp_chpl9;
            i_s_chpl5 = i_x_chpl2;
            string2(i_s_chpl5, UINT8(false), ret_to_arg_ref_tmp__chpl9);
            ret_chpl6 = ret_tmp_chpl9;
            goto _end_localize_chpl5;
          } else {
            (&this_chpl11)->len = INT64(0);
            (&this_chpl11)->_size = INT64(0);
            (&this_chpl11)->buff = nil;
            (&this_chpl11)->owned = UINT8(false);
            (&this_chpl11)->locale_id = INT32(0);
            (&this_chpl11)->len = INT64(0);
            (&this_chpl11)->_size = INT64(0);
            call_tmp_chpl55 = ((c_ptr_uint8_t)(nil));
            (&this_chpl11)->buff = call_tmp_chpl55;
            (&this_chpl11)->owned = UINT8(true);
            default_arglocale_id_chpl5 = chpl_nodeID;
            (&this_chpl11)->locale_id = default_arglocale_id_chpl5;
            ret_to_arg_ref_tmp__chpl10 = &ret_tmp_chpl10;
            _construct_string(INT64(0), INT64(0), call_tmp_chpl55, UINT8(true), default_arglocale_id_chpl5, &this_chpl11, ret_to_arg_ref_tmp__chpl10);
            type_tmp_chpl5 = ret_tmp_chpl10;
            _ref_tmp__chpl9 = &type_tmp_chpl5;
            i_rhs_chpl5 = i_x_chpl2;
            chpl_macro_tmp_7687.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_7687.addr = _ref_tmp__chpl9;
            tmp_chpl26 = chpl_macro_tmp_7687;
            chpl___ASSIGN_13(tmp_chpl26, i_rhs_chpl5);
            ret_chpl6 = type_tmp_chpl5;
            goto _end_localize_chpl5;
          }
          _end_localize_chpl5:;
          local_x_chpl5 = ret_chpl6;
          call_tmp_chpl56 = qio_channel_str_style(coerce_tmp_chpl6);
          call_tmp_chpl57 = ((&local_x_chpl5)->locale_id != chpl_nodeID);
          if (call_tmp_chpl57) {
            halt(&local__str_literal_337_chpl /* "Cannot call .c_str() on a remote string" */, INT64(4617), INT32(71));
          }
          call_tmp_chpl58 = qio_channel_write_string(((int32_t)(UINT8(false))), ((int32_t)(iokind_chpl_little_chpl)), call_tmp_chpl56, coerce_tmp_chpl6, ((c_string)(((c_void_ptr)((&local_x_chpl5)->buff)))), (&local_x_chpl5)->len);
          _ref_tmp__chpl10 = &local_x_chpl5;
          chpl_macro_tmp_7688.locale = chpl_gen_getLocaleID();
          chpl_macro_tmp_7688.addr = _ref_tmp__chpl10;
          tmp_chpl27 = chpl_macro_tmp_7688;
          deinit44(tmp_chpl27);
          e_chpl3 = call_tmp_chpl58;
        } else {
          chpl_macro_tmp_7689.locale = (i_x_chpl2).locale;
          chpl_macro_tmp_7689.addr = &(((i_x_chpl2).addr)->locale_id);
          chpl_gen_comm_get(((void*)(&tmp_chpl28)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_7689).locale), INT64(0), INT32(0)), (chpl_macro_tmp_7689).addr, sizeof(int32_t), -1, COMMID(99), INT64(4617), INT64(71));
          call_tmp_chpl59 = (tmp_chpl28 == chpl_nodeID);
          if (call_tmp_chpl59) {
            ret_to_arg_ref_tmp__chpl11 = &ret_tmp_chpl11;
            i_s_chpl6 = i_x_chpl2;
            string2(i_s_chpl6, UINT8(false), ret_to_arg_ref_tmp__chpl11);
            ret_chpl7 = ret_tmp_chpl11;
            goto _end_localize_chpl6;
          } else {
            (&this_chpl12)->len = INT64(0);
            (&this_chpl12)->_size = INT64(0);
            (&this_chpl12)->buff = nil;
            (&this_chpl12)->owned = UINT8(false);
            (&this_chpl12)->locale_id = INT32(0);
            (&this_chpl12)->len = INT64(0);
            (&this_chpl12)->_size = INT64(0);
            call_tmp_chpl60 = ((c_ptr_uint8_t)(nil));
            (&this_chpl12)->buff = call_tmp_chpl60;
            (&this_chpl12)->owned = UINT8(true);
            default_arglocale_id_chpl6 = chpl_nodeID;
            (&this_chpl12)->locale_id = default_arglocale_id_chpl6;
            ret_to_arg_ref_tmp__chpl12 = &ret_tmp_chpl12;
            _construct_string(INT64(0), INT64(0), call_tmp_chpl60, UINT8(true), default_arglocale_id_chpl6, &this_chpl12, ret_to_arg_ref_tmp__chpl12);
            type_tmp_chpl6 = ret_tmp_chpl12;
            _ref_tmp__chpl11 = &type_tmp_chpl6;
            i_rhs_chpl6 = i_x_chpl2;
            chpl_macro_tmp_7690.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_7690.addr = _ref_tmp__chpl11;
            tmp_chpl29 = chpl_macro_tmp_7690;
            chpl___ASSIGN_13(tmp_chpl29, i_rhs_chpl6);
            ret_chpl7 = type_tmp_chpl6;
            goto _end_localize_chpl6;
          }
          _end_localize_chpl6:;
          local_x_chpl6 = ret_chpl7;
          call_tmp_chpl61 = qio_channel_str_style(coerce_tmp_chpl6);
          call_tmp_chpl62 = ((&local_x_chpl6)->locale_id != chpl_nodeID);
          if (call_tmp_chpl62) {
            halt(&local__str_literal_337_chpl /* "Cannot call .c_str() on a remote string" */, INT64(4617), INT32(71));
          }
          call_tmp_chpl63 = qio_channel_write_string(((int32_t)(UINT8(false))), ((int32_t)(iokind_chpl_native_chpl)), call_tmp_chpl61, coerce_tmp_chpl6, ((c_string)(((c_void_ptr)((&local_x_chpl6)->buff)))), (&local_x_chpl6)->len);
          _ref_tmp__chpl12 = &local_x_chpl6;
          chpl_macro_tmp_7691.locale = chpl_gen_getLocaleID();
          chpl_macro_tmp_7691.addr = _ref_tmp__chpl12;
          tmp_chpl30 = chpl_macro_tmp_7691;
          deinit44(tmp_chpl30);
          e_chpl3 = call_tmp_chpl63;
        }
      }
    } else {
      call_tmp_chpl64 = _write_text_internal_chpl3(coerce_tmp_chpl6, i_x_chpl2);
      e_chpl3 = call_tmp_chpl64;
    }
    chpl_gen_comm_put(((void*)(&e_chpl3)), chpl_nodeFromLocaleID(&((_formal_tmp_error_chpl).locale), INT64(0), INT32(0)), (_formal_tmp_error_chpl).addr, sizeof(syserr), -1, COMMID(100), INT64(4617), INT64(71));
  }
  chpl_gen_comm_get(((void*)(&tmp_chpl31)), chpl_nodeFromLocaleID(&((_formal_tmp_error_chpl).locale), INT64(0), INT32(0)), (_formal_tmp_error_chpl).addr, sizeof(syserr), -1, COMMID(101), INT64(4616), INT64(71));
  call_tmp_chpl65 = qio_err_iserr(tmp_chpl31);
  call_tmp_chpl66 = (call_tmp_chpl65 == INT32(0));
  if (call_tmp_chpl66) {
    chpl_macro_tmp_7692.locale = (args_chpl).locale;
    chpl_macro_tmp_7692.addr = &(((args_chpl).addr)->x4);
    chpl_gen_comm_get(((void*)(&call_tmp_chpl67)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_7692).locale), INT64(0), INT32(0)), (chpl_macro_tmp_7692).addr, sizeof(chpl____wide__ref__tuple_2_chpl_bool_int64_t), -1, COMMID(102), INT64(4617), INT64(71));
    tmp_chpl32 = (this_chpl6)->_channel_internal_chpl;
    coerce_tmp_chpl7 = tmp_chpl32;
    i_x_chpl3 = call_tmp_chpl67;
    _autoCopy_tmp__chpl = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any_chpl);
    call_tmp_chpl68 = chpl_localeID_to_locale(&_autoCopy_tmp__chpl);
    chpl_macro_tmp_7693.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7693.addr = nil;
    chpl_macro_tmp_7694.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7694.addr = NULL;
    tmp_chpl33 = chpl_macro_tmp_7694;
    (&this_chpl13)->home_chpl = tmp_chpl33;
    chpl_macro_tmp_7695.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7695.addr = nil;
    chpl_macro_tmp_7696.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7696.addr = NULL;
    tmp_chpl34 = chpl_macro_tmp_7696;
    (&this_chpl13)->_readWriteThisFromLocale_chpl = tmp_chpl34;
    (&this_chpl13)->home_chpl = call_tmp_chpl68;
    (&this_chpl13)->_channel_internal_chpl = coerce_tmp_chpl7;
    (&this_chpl13)->_readWriteThisFromLocale_chpl = origLocale_chpl;
    ret_to_arg_ref_tmp__chpl13 = &ret_tmp_chpl13;
    _construct_channel_chpl4(call_tmp_chpl68, coerce_tmp_chpl7, origLocale_chpl, &this_chpl13, ret_to_arg_ref_tmp__chpl13);
    writer_chpl5 = ret_tmp_chpl13;
    qio_int_to_err(INT32(0));
    qio_channel_clear_error(coerce_tmp_chpl7);
    _ref_tmp__chpl13 = i_x_chpl3;
    readWriteThis(_ref_tmp__chpl13, &ret_tmp_chpl13);
    (&writer_chpl5)->_channel_internal_chpl = local_QIO_CHANNEL_PTR_NULL_chpl;
    call_tmp_chpl69 = qio_channel_error(coerce_tmp_chpl7);
    _ref_tmp__chpl14 = &writer_chpl5;
    deinit_chpl5(_ref_tmp__chpl14);
    chpl_gen_comm_put(((void*)(&call_tmp_chpl69)), chpl_nodeFromLocaleID(&((_formal_tmp_error_chpl).locale), INT64(0), INT32(0)), (_formal_tmp_error_chpl).addr, sizeof(syserr), -1, COMMID(103), INT64(4617), INT64(71));
  }
  chpl_gen_comm_get(((void*)(&tmp_chpl35)), chpl_nodeFromLocaleID(&((_formal_tmp_error_chpl).locale), INT64(0), INT32(0)), (_formal_tmp_error_chpl).addr, sizeof(syserr), -1, COMMID(104), INT64(4616), INT64(71));
  call_tmp_chpl70 = qio_err_iserr(tmp_chpl35);
  call_tmp_chpl71 = (call_tmp_chpl70 == INT32(0));
  if (call_tmp_chpl71) {
    tmp_chpl36 = (this_chpl6)->_channel_internal_chpl;
    coerce_tmp_chpl8 = tmp_chpl36;
    qio_int_to_err(INT32(0));
    call_tmp_chpl72 = qio_channel_write_newline(((int32_t)(UINT8(false))), coerce_tmp_chpl8);
    chpl_gen_comm_put(((void*)(&call_tmp_chpl72)), chpl_nodeFromLocaleID(&((_formal_tmp_error_chpl).locale), INT64(0), INT32(0)), (_formal_tmp_error_chpl).addr, sizeof(syserr), -1, COMMID(105), INT64(4617), INT64(71));
  }
  call_tmp_chpl73 = &((this_chpl6)->home_chpl);
  tmp_chpl37 = *(call_tmp_chpl73);
  call_tmp_chpl74 = (&tmp_chpl37)->locale;
  rvfDerefTmp_chpl2 = *(this_chpl6);
  isdirect_chpl2 = chpl_doDirectExecuteOn(&call_tmp_chpl74);
  if (isdirect_chpl2) {
    on_fn_chpl37(&rvfDerefTmp_chpl2);
  } else {
    _args_foron_fn_chpl2 = ((_class_localson_fn_chpl37)(&chpl_macro_tmp_7697));
    (_args_foron_fn_chpl2)->_0_rvfDerefTmp_chpl = call_tmp_chpl74;
    (_args_foron_fn_chpl2)->_1_rvfDerefTmp_chpl = rvfDerefTmp_chpl2;
    _args_vforon_fn_chpl2 = ((void*)(_args_foron_fn_chpl2));
    /*** wrapon_fn_chpl37 ***/ chpl_executeOn(&call_tmp_chpl74, INT32(293), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl2)), sizeof(chpl__class_localson_fn_chpl37_object), INT64(2910), INT32(71));
  }
  return;
}

/* IO.chpl:4613 */
static void wrapon_fn_chpl51(_class_localson_fn_chpl50 c_chpl) {
  channel_T_dynamic_T_chpl _1_rvfDerefTmp_chpl;
  channel_T_dynamic_T_chpl tmp_chpl;
  chpl____wide__ref_syserr _2_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__tuple_3__ref_string_int64_t__ref_ioNewline _3_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_locale _4_rvfDerefTmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  tmp_chpl = (c_chpl)->_1_rvfDerefTmp_chpl;
  _1_rvfDerefTmp_chpl = tmp_chpl;
  _2_tmp_chpl = (c_chpl)->_2_tmp_chpl;
  _3_tmp_chpl = (c_chpl)->_3_tmp_chpl;
  _4_rvfDerefTmp_chpl = (c_chpl)->_4_rvfDerefTmp_chpl;
  on_fn_chpl50(&_1_rvfDerefTmp_chpl, _2_tmp_chpl, _3_tmp_chpl, _4_rvfDerefTmp_chpl);
  return;
}

/* IO.chpl:4613 */
static void on_fn_chpl53(_ref_channel_T_dynamic_F this_chpl6,
                         chpl____wide__ref_syserr _formal_tmp_error_chpl,
                         chpl____wide__ref__tuple_2__ref_string__ref__array_DefaultRectangularArr_uint64_t_1_int64_t_F_int64_t args_chpl,
                         chpl____wide_locale origLocale_chpl) {
  qio_channel_ptr_t local_QIO_CHANNEL_PTR_NULL_chpl;
  int32_t local_c_sublocid_any_chpl;
  string local__str_literal_337_chpl;
  string local__str_literal_2497_chpl;
  _ref_channel_T_dynamic_F rvfRerefTmp_chpl = NULL;
  syserr call_tmp_chpl;
  int32_t call_tmp_chpl2;
  chpl_bool call_tmp_chpl3;
  chpl____wide__ref_channel_T_dynamic_F tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  syserr tmp_chpl2;
  int32_t call_tmp_chpl4;
  chpl_bool call_tmp_chpl5;
  chpl____wide__ref_string call_tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  qio_channel_ptr_t coerce_tmp_chpl;
  qio_channel_ptr_t tmp_chpl3;
  chpl____wide__ref_string i_x_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  syserr e_chpl;
  uint8_t call_tmp_chpl7;
  uint8_t call_tmp_chpl8;
  chpl_bool call_tmp_chpl9;
  chpl_bool call_tmp_chpl10;
  string local_x_chpl;
  string ret_chpl;
  int32_t tmp_chpl4;
  chpl_bool call_tmp_chpl11;
  string ret_tmp_chpl;
  _ref_string ret_to_arg_ref_tmp__chpl = NULL;
  chpl____wide__ref_string i_s_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  string type_tmp_chpl;
  string this_chpl7;
  c_ptr_uint8_t call_tmp_chpl12 = NULL;
  int32_t default_arglocale_id_chpl;
  string ret_tmp_chpl2;
  _ref_string ret_to_arg_ref_tmp__chpl2 = NULL;
  _ref_string _ref_tmp__chpl = NULL;
  chpl____wide__ref_string i_rhs_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp_chpl13;
  chpl_bool call_tmp_chpl14;
  syserr call_tmp_chpl15;
  _ref_string _ref_tmp__chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp_chpl16;
  string local_x_chpl2;
  string ret_chpl2;
  int32_t tmp_chpl7;
  chpl_bool call_tmp_chpl17;
  string ret_tmp_chpl3;
  _ref_string ret_to_arg_ref_tmp__chpl3 = NULL;
  chpl____wide__ref_string i_s_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  string type_tmp_chpl2;
  string this_chpl8;
  c_ptr_uint8_t call_tmp_chpl18 = NULL;
  int32_t default_arglocale_id_chpl2;
  string ret_tmp_chpl4;
  _ref_string ret_to_arg_ref_tmp__chpl4 = NULL;
  _ref_string _ref_tmp__chpl3 = NULL;
  chpl____wide__ref_string i_rhs_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string tmp_chpl8 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp_chpl19;
  chpl_bool call_tmp_chpl20;
  syserr call_tmp_chpl21;
  _ref_string _ref_tmp__chpl4 = NULL;
  chpl____wide__ref_string tmp_chpl9 = {CHPL_LOCALEID_T_INIT, NULL};
  string local_x_chpl3;
  string ret_chpl3;
  int32_t tmp_chpl10;
  chpl_bool call_tmp_chpl22;
  string ret_tmp_chpl5;
  _ref_string ret_to_arg_ref_tmp__chpl5 = NULL;
  chpl____wide__ref_string i_s_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  string type_tmp_chpl3;
  string this_chpl9;
  c_ptr_uint8_t call_tmp_chpl23 = NULL;
  int32_t default_arglocale_id_chpl3;
  string ret_tmp_chpl6;
  _ref_string ret_to_arg_ref_tmp__chpl6 = NULL;
  _ref_string _ref_tmp__chpl5 = NULL;
  chpl____wide__ref_string i_rhs_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string tmp_chpl11 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp_chpl24;
  chpl_bool call_tmp_chpl25;
  syserr call_tmp_chpl26;
  _ref_string _ref_tmp__chpl6 = NULL;
  chpl____wide__ref_string tmp_chpl12 = {CHPL_LOCALEID_T_INIT, NULL};
  syserr call_tmp_chpl27;
  syserr tmp_chpl13;
  int32_t call_tmp_chpl28;
  chpl_bool call_tmp_chpl29;
  _array_DefaultRectangularArr_uint64_t_1_int64_t_F_int64_t call_tmp_chpl30;
  _array_DefaultRectangularArr_uint64_t_1_int64_t_F_int64_t tmp_chpl14;
  qio_channel_ptr_t coerce_tmp_chpl2;
  qio_channel_ptr_t tmp_chpl15;
  channel_T_dynamic_F_chpl writer_chpl5;
  chpl_localeID_t _autoCopy_tmp__chpl;
  chpl____wide_locale call_tmp_chpl31 = {CHPL_LOCALEID_T_INIT, NULL};
  channel_T_dynamic_F_chpl this_chpl10;
  chpl____wide_locale tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_locale tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  channel_T_dynamic_F_chpl ret_tmp_chpl7;
  _ref_channel_T_dynamic_F ret_to_arg_ref_tmp__chpl7 = NULL;
  _ref__wide__array_DefaultRectangularArr_uint64_t_1_int64_t_F_int64_t _ref_tmp__chpl7 = NULL;
  syserr call_tmp_chpl32;
  _ref_channel_T_dynamic_F _ref_tmp__chpl8 = NULL;
  chpl____wide__ref_channel_T_dynamic_F chpl_macro_tmp_7698;
  chpl____wide__ref_chpl____wide__ref_string chpl_macro_tmp_7699;
  chpl____wide__ref_int32_t chpl_macro_tmp_7700;
  chpl____wide__ref_string chpl_macro_tmp_7701;
  chpl____wide__ref_string chpl_macro_tmp_7702;
  chpl____wide__ref_int32_t chpl_macro_tmp_7703;
  chpl____wide__ref_string chpl_macro_tmp_7704;
  chpl____wide__ref_string chpl_macro_tmp_7705;
  chpl____wide__ref_int32_t chpl_macro_tmp_7706;
  chpl____wide__ref_string chpl_macro_tmp_7707;
  chpl____wide__ref_string chpl_macro_tmp_7708;
  chpl____wide__ref__wide__array_DefaultRectangularArr_uint64_t_1_int64_t_F_int64_t chpl_macro_tmp_7709;
  chpl____wide__nilType chpl_macro_tmp_7710;
  chpl____wide_locale chpl_macro_tmp_7711;
  chpl____wide__nilType chpl_macro_tmp_7712;
  chpl____wide_locale chpl_macro_tmp_7713;
  local_QIO_CHANNEL_PTR_NULL_chpl = QIO_CHANNEL_PTR_NULL;
  local_c_sublocid_any_chpl = c_sublocid_any;
  local__str_literal_337_chpl /* "Cannot call .c_str() on a remote string" */ = _str_literal_337 /* "Cannot call .c_str() on a remote string" */;
  local__str_literal_2497_chpl /* "in lock" */ = _str_literal_2497 /* "in lock" */;
  rvfRerefTmp_chpl = this_chpl6;
  qio_int_to_err(INT32(0));
  call_tmp_chpl = qio_int_to_err(INT32(0));
  call_tmp_chpl2 = qio_err_iserr(call_tmp_chpl);
  call_tmp_chpl3 = (call_tmp_chpl2 != INT32(0));
  if (call_tmp_chpl3) {
    chpl_macro_tmp_7698.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7698.addr = rvfRerefTmp_chpl;
    tmp_chpl = chpl_macro_tmp_7698;
    _ch_ioerror_chpl3(tmp_chpl, call_tmp_chpl, &local__str_literal_2497_chpl /* "in lock" */);
  }
  chpl_gen_comm_get(((void*)(&tmp_chpl2)), chpl_nodeFromLocaleID(&((_formal_tmp_error_chpl).locale), INT64(0), INT32(0)), (_formal_tmp_error_chpl).addr, sizeof(syserr), -1, COMMID(106), INT64(4616), INT64(71));
  call_tmp_chpl4 = qio_err_iserr(tmp_chpl2);
  call_tmp_chpl5 = (call_tmp_chpl4 == INT32(0));
  if (call_tmp_chpl5) {
    chpl_macro_tmp_7699.locale = (args_chpl).locale;
    chpl_macro_tmp_7699.addr = &(((args_chpl).addr)->x1);
    chpl_gen_comm_get(((void*)(&call_tmp_chpl6)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_7699).locale), INT64(0), INT32(0)), (chpl_macro_tmp_7699).addr, sizeof(chpl____wide__ref_string), -1, COMMID(107), INT64(4617), INT64(71));
    tmp_chpl3 = (this_chpl6)->_channel_internal_chpl;
    coerce_tmp_chpl = tmp_chpl3;
    i_x_chpl = call_tmp_chpl6;
    qio_int_to_err(INT32(0));
    call_tmp_chpl7 = qio_channel_binary(coerce_tmp_chpl);
    call_tmp_chpl8 = qio_channel_byteorder(coerce_tmp_chpl);
    call_tmp_chpl9 = (call_tmp_chpl7 != UINT8(0));
    if (call_tmp_chpl9) {
      call_tmp_chpl10 = (((int16_t)(call_tmp_chpl8)) == ((int16_t)(iokind_chpl_big_chpl)));
      if (call_tmp_chpl10) {
        chpl_macro_tmp_7700.locale = (i_x_chpl).locale;
        chpl_macro_tmp_7700.addr = &(((i_x_chpl).addr)->locale_id);
        chpl_gen_comm_get(((void*)(&tmp_chpl4)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_7700).locale), INT64(0), INT32(0)), (chpl_macro_tmp_7700).addr, sizeof(int32_t), -1, COMMID(108), INT64(4617), INT64(71));
        call_tmp_chpl11 = (tmp_chpl4 == chpl_nodeID);
        if (call_tmp_chpl11) {
          ret_to_arg_ref_tmp__chpl = &ret_tmp_chpl;
          i_s_chpl = i_x_chpl;
          string2(i_s_chpl, UINT8(false), ret_to_arg_ref_tmp__chpl);
          ret_chpl = ret_tmp_chpl;
          goto _end_localize_chpl;
        } else {
          (&this_chpl7)->len = INT64(0);
          (&this_chpl7)->_size = INT64(0);
          (&this_chpl7)->buff = nil;
          (&this_chpl7)->owned = UINT8(false);
          (&this_chpl7)->locale_id = INT32(0);
          (&this_chpl7)->len = INT64(0);
          (&this_chpl7)->_size = INT64(0);
          call_tmp_chpl12 = ((c_ptr_uint8_t)(nil));
          (&this_chpl7)->buff = call_tmp_chpl12;
          (&this_chpl7)->owned = UINT8(true);
          default_arglocale_id_chpl = chpl_nodeID;
          (&this_chpl7)->locale_id = default_arglocale_id_chpl;
          ret_to_arg_ref_tmp__chpl2 = &ret_tmp_chpl2;
          _construct_string(INT64(0), INT64(0), call_tmp_chpl12, UINT8(true), default_arglocale_id_chpl, &this_chpl7, ret_to_arg_ref_tmp__chpl2);
          type_tmp_chpl = ret_tmp_chpl2;
          _ref_tmp__chpl = &type_tmp_chpl;
          i_rhs_chpl = i_x_chpl;
          chpl_macro_tmp_7701.locale = chpl_gen_getLocaleID();
          chpl_macro_tmp_7701.addr = _ref_tmp__chpl;
          tmp_chpl5 = chpl_macro_tmp_7701;
          chpl___ASSIGN_13(tmp_chpl5, i_rhs_chpl);
          ret_chpl = type_tmp_chpl;
          goto _end_localize_chpl;
        }
        _end_localize_chpl:;
        local_x_chpl = ret_chpl;
        call_tmp_chpl13 = qio_channel_str_style(coerce_tmp_chpl);
        call_tmp_chpl14 = ((&local_x_chpl)->locale_id != chpl_nodeID);
        if (call_tmp_chpl14) {
          halt(&local__str_literal_337_chpl /* "Cannot call .c_str() on a remote string" */, INT64(4617), INT32(71));
        }
        call_tmp_chpl15 = qio_channel_write_string(((int32_t)(UINT8(false))), ((int32_t)(iokind_chpl_big_chpl)), call_tmp_chpl13, coerce_tmp_chpl, ((c_string)(((c_void_ptr)((&local_x_chpl)->buff)))), (&local_x_chpl)->len);
        _ref_tmp__chpl2 = &local_x_chpl;
        chpl_macro_tmp_7702.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_7702.addr = _ref_tmp__chpl2;
        tmp_chpl6 = chpl_macro_tmp_7702;
        deinit44(tmp_chpl6);
        e_chpl = call_tmp_chpl15;
      } else {
        call_tmp_chpl16 = (((int16_t)(call_tmp_chpl8)) == ((int16_t)(iokind_chpl_little_chpl)));
        if (call_tmp_chpl16) {
          chpl_macro_tmp_7703.locale = (i_x_chpl).locale;
          chpl_macro_tmp_7703.addr = &(((i_x_chpl).addr)->locale_id);
          chpl_gen_comm_get(((void*)(&tmp_chpl7)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_7703).locale), INT64(0), INT32(0)), (chpl_macro_tmp_7703).addr, sizeof(int32_t), -1, COMMID(109), INT64(4617), INT64(71));
          call_tmp_chpl17 = (tmp_chpl7 == chpl_nodeID);
          if (call_tmp_chpl17) {
            ret_to_arg_ref_tmp__chpl3 = &ret_tmp_chpl3;
            i_s_chpl2 = i_x_chpl;
            string2(i_s_chpl2, UINT8(false), ret_to_arg_ref_tmp__chpl3);
            ret_chpl2 = ret_tmp_chpl3;
            goto _end_localize_chpl2;
          } else {
            (&this_chpl8)->len = INT64(0);
            (&this_chpl8)->_size = INT64(0);
            (&this_chpl8)->buff = nil;
            (&this_chpl8)->owned = UINT8(false);
            (&this_chpl8)->locale_id = INT32(0);
            (&this_chpl8)->len = INT64(0);
            (&this_chpl8)->_size = INT64(0);
            call_tmp_chpl18 = ((c_ptr_uint8_t)(nil));
            (&this_chpl8)->buff = call_tmp_chpl18;
            (&this_chpl8)->owned = UINT8(true);
            default_arglocale_id_chpl2 = chpl_nodeID;
            (&this_chpl8)->locale_id = default_arglocale_id_chpl2;
            ret_to_arg_ref_tmp__chpl4 = &ret_tmp_chpl4;
            _construct_string(INT64(0), INT64(0), call_tmp_chpl18, UINT8(true), default_arglocale_id_chpl2, &this_chpl8, ret_to_arg_ref_tmp__chpl4);
            type_tmp_chpl2 = ret_tmp_chpl4;
            _ref_tmp__chpl3 = &type_tmp_chpl2;
            i_rhs_chpl2 = i_x_chpl;
            chpl_macro_tmp_7704.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_7704.addr = _ref_tmp__chpl3;
            tmp_chpl8 = chpl_macro_tmp_7704;
            chpl___ASSIGN_13(tmp_chpl8, i_rhs_chpl2);
            ret_chpl2 = type_tmp_chpl2;
            goto _end_localize_chpl2;
          }
          _end_localize_chpl2:;
          local_x_chpl2 = ret_chpl2;
          call_tmp_chpl19 = qio_channel_str_style(coerce_tmp_chpl);
          call_tmp_chpl20 = ((&local_x_chpl2)->locale_id != chpl_nodeID);
          if (call_tmp_chpl20) {
            halt(&local__str_literal_337_chpl /* "Cannot call .c_str() on a remote string" */, INT64(4617), INT32(71));
          }
          call_tmp_chpl21 = qio_channel_write_string(((int32_t)(UINT8(false))), ((int32_t)(iokind_chpl_little_chpl)), call_tmp_chpl19, coerce_tmp_chpl, ((c_string)(((c_void_ptr)((&local_x_chpl2)->buff)))), (&local_x_chpl2)->len);
          _ref_tmp__chpl4 = &local_x_chpl2;
          chpl_macro_tmp_7705.locale = chpl_gen_getLocaleID();
          chpl_macro_tmp_7705.addr = _ref_tmp__chpl4;
          tmp_chpl9 = chpl_macro_tmp_7705;
          deinit44(tmp_chpl9);
          e_chpl = call_tmp_chpl21;
        } else {
          chpl_macro_tmp_7706.locale = (i_x_chpl).locale;
          chpl_macro_tmp_7706.addr = &(((i_x_chpl).addr)->locale_id);
          chpl_gen_comm_get(((void*)(&tmp_chpl10)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_7706).locale), INT64(0), INT32(0)), (chpl_macro_tmp_7706).addr, sizeof(int32_t), -1, COMMID(110), INT64(4617), INT64(71));
          call_tmp_chpl22 = (tmp_chpl10 == chpl_nodeID);
          if (call_tmp_chpl22) {
            ret_to_arg_ref_tmp__chpl5 = &ret_tmp_chpl5;
            i_s_chpl3 = i_x_chpl;
            string2(i_s_chpl3, UINT8(false), ret_to_arg_ref_tmp__chpl5);
            ret_chpl3 = ret_tmp_chpl5;
            goto _end_localize_chpl3;
          } else {
            (&this_chpl9)->len = INT64(0);
            (&this_chpl9)->_size = INT64(0);
            (&this_chpl9)->buff = nil;
            (&this_chpl9)->owned = UINT8(false);
            (&this_chpl9)->locale_id = INT32(0);
            (&this_chpl9)->len = INT64(0);
            (&this_chpl9)->_size = INT64(0);
            call_tmp_chpl23 = ((c_ptr_uint8_t)(nil));
            (&this_chpl9)->buff = call_tmp_chpl23;
            (&this_chpl9)->owned = UINT8(true);
            default_arglocale_id_chpl3 = chpl_nodeID;
            (&this_chpl9)->locale_id = default_arglocale_id_chpl3;
            ret_to_arg_ref_tmp__chpl6 = &ret_tmp_chpl6;
            _construct_string(INT64(0), INT64(0), call_tmp_chpl23, UINT8(true), default_arglocale_id_chpl3, &this_chpl9, ret_to_arg_ref_tmp__chpl6);
            type_tmp_chpl3 = ret_tmp_chpl6;
            _ref_tmp__chpl5 = &type_tmp_chpl3;
            i_rhs_chpl3 = i_x_chpl;
            chpl_macro_tmp_7707.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_7707.addr = _ref_tmp__chpl5;
            tmp_chpl11 = chpl_macro_tmp_7707;
            chpl___ASSIGN_13(tmp_chpl11, i_rhs_chpl3);
            ret_chpl3 = type_tmp_chpl3;
            goto _end_localize_chpl3;
          }
          _end_localize_chpl3:;
          local_x_chpl3 = ret_chpl3;
          call_tmp_chpl24 = qio_channel_str_style(coerce_tmp_chpl);
          call_tmp_chpl25 = ((&local_x_chpl3)->locale_id != chpl_nodeID);
          if (call_tmp_chpl25) {
            halt(&local__str_literal_337_chpl /* "Cannot call .c_str() on a remote string" */, INT64(4617), INT32(71));
          }
          call_tmp_chpl26 = qio_channel_write_string(((int32_t)(UINT8(false))), ((int32_t)(iokind_chpl_native_chpl)), call_tmp_chpl24, coerce_tmp_chpl, ((c_string)(((c_void_ptr)((&local_x_chpl3)->buff)))), (&local_x_chpl3)->len);
          _ref_tmp__chpl6 = &local_x_chpl3;
          chpl_macro_tmp_7708.locale = chpl_gen_getLocaleID();
          chpl_macro_tmp_7708.addr = _ref_tmp__chpl6;
          tmp_chpl12 = chpl_macro_tmp_7708;
          deinit44(tmp_chpl12);
          e_chpl = call_tmp_chpl26;
        }
      }
    } else {
      call_tmp_chpl27 = _write_text_internal_chpl3(coerce_tmp_chpl, i_x_chpl);
      e_chpl = call_tmp_chpl27;
    }
    chpl_gen_comm_put(((void*)(&e_chpl)), chpl_nodeFromLocaleID(&((_formal_tmp_error_chpl).locale), INT64(0), INT32(0)), (_formal_tmp_error_chpl).addr, sizeof(syserr), -1, COMMID(111), INT64(4617), INT64(71));
  }
  chpl_gen_comm_get(((void*)(&tmp_chpl13)), chpl_nodeFromLocaleID(&((_formal_tmp_error_chpl).locale), INT64(0), INT32(0)), (_formal_tmp_error_chpl).addr, sizeof(syserr), -1, COMMID(112), INT64(4616), INT64(71));
  call_tmp_chpl28 = qio_err_iserr(tmp_chpl13);
  call_tmp_chpl29 = (call_tmp_chpl28 == INT32(0));
  if (call_tmp_chpl29) {
    chpl_macro_tmp_7709.locale = (args_chpl).locale;
    chpl_macro_tmp_7709.addr = &(((args_chpl).addr)->x2);
    chpl_gen_comm_get(((void*)(&tmp_chpl14)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_7709).locale), INT64(0), INT32(0)), (chpl_macro_tmp_7709).addr, sizeof(_array_DefaultRectangularArr_uint64_t_1_int64_t_F_int64_t), -1, COMMID(113), INT64(4617), INT64(71));
    call_tmp_chpl30 = tmp_chpl14;
    tmp_chpl15 = (this_chpl6)->_channel_internal_chpl;
    coerce_tmp_chpl2 = tmp_chpl15;
    _autoCopy_tmp__chpl = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any_chpl);
    call_tmp_chpl31 = chpl_localeID_to_locale(&_autoCopy_tmp__chpl);
    chpl_macro_tmp_7710.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7710.addr = nil;
    chpl_macro_tmp_7711.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7711.addr = NULL;
    tmp_chpl16 = chpl_macro_tmp_7711;
    (&this_chpl10)->home_chpl = tmp_chpl16;
    chpl_macro_tmp_7712.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7712.addr = nil;
    chpl_macro_tmp_7713.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7713.addr = NULL;
    tmp_chpl17 = chpl_macro_tmp_7713;
    (&this_chpl10)->_readWriteThisFromLocale_chpl = tmp_chpl17;
    (&this_chpl10)->home_chpl = call_tmp_chpl31;
    (&this_chpl10)->_channel_internal_chpl = coerce_tmp_chpl2;
    (&this_chpl10)->_readWriteThisFromLocale_chpl = origLocale_chpl;
    ret_to_arg_ref_tmp__chpl7 = &ret_tmp_chpl7;
    _construct_channel_chpl4(call_tmp_chpl31, coerce_tmp_chpl2, origLocale_chpl, &this_chpl10, ret_to_arg_ref_tmp__chpl7);
    writer_chpl5 = ret_tmp_chpl7;
    qio_int_to_err(INT32(0));
    qio_channel_clear_error(coerce_tmp_chpl2);
    _ref_tmp__chpl7 = &call_tmp_chpl30;
    writeThis(_ref_tmp__chpl7, &ret_tmp_chpl7);
    (&writer_chpl5)->_channel_internal_chpl = local_QIO_CHANNEL_PTR_NULL_chpl;
    call_tmp_chpl32 = qio_channel_error(coerce_tmp_chpl2);
    _ref_tmp__chpl8 = &writer_chpl5;
    deinit_chpl5(_ref_tmp__chpl8);
    chpl_gen_comm_put(((void*)(&call_tmp_chpl32)), chpl_nodeFromLocaleID(&((_formal_tmp_error_chpl).locale), INT64(0), INT32(0)), (_formal_tmp_error_chpl).addr, sizeof(syserr), -1, COMMID(114), INT64(4617), INT64(71));
  }
  return;
}

/* IO.chpl:4613 */
static void on_fn_chpl50(_ref_channel_T_dynamic_T this_chpl6,
                         chpl____wide__ref_syserr _formal_tmp_error_chpl,
                         chpl____wide__ref__tuple_3__ref_string_int64_t__ref_ioNewline args_chpl,
                         chpl____wide_locale origLocale_chpl) {
  string local__str_literal_337_chpl;
  string local__str_literal_2497_chpl;
  _ref_channel_T_dynamic_T rvfRerefTmp_chpl = NULL;
  syserr _formal_tmp_error_chpl2;
  syserr call_tmp_chpl;
  _ref__wide_locale call_tmp_chpl2 = NULL;
  chpl_localeID_t call_tmp_chpl3;
  chpl____wide_locale tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_syserr tmp_chpl2 = NULL;
  channel_T_dynamic_T_chpl rvfDerefTmp_chpl;
  chpl_bool isdirect_chpl;
  chpl____wide__ref_syserr tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl36 _args_foron_fn_chpl = NULL;
  _ref_syserr tmp_chpl4 = NULL;
  chpl____wide__ref_syserr tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  int32_t call_tmp_chpl4;
  chpl_bool call_tmp_chpl5;
  syserr tmp_chpl6;
  int32_t call_tmp_chpl6;
  chpl_bool call_tmp_chpl7;
  chpl____wide__ref_string call_tmp_chpl8 = {CHPL_LOCALEID_T_INIT, NULL};
  qio_channel_ptr_t coerce_tmp_chpl;
  qio_channel_ptr_t tmp_chpl7;
  chpl____wide__ref_string i_x_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  syserr e_chpl;
  uint8_t call_tmp_chpl9;
  uint8_t call_tmp_chpl10;
  chpl_bool call_tmp_chpl11;
  chpl_bool call_tmp_chpl12;
  string local_x_chpl;
  string ret_chpl;
  int32_t tmp_chpl8;
  chpl_bool call_tmp_chpl13;
  string ret_tmp_chpl;
  _ref_string ret_to_arg_ref_tmp__chpl = NULL;
  chpl____wide__ref_string i_s_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  string type_tmp_chpl;
  string this_chpl7;
  c_ptr_uint8_t call_tmp_chpl14 = NULL;
  int32_t default_arglocale_id_chpl;
  string ret_tmp_chpl2;
  _ref_string ret_to_arg_ref_tmp__chpl2 = NULL;
  _ref_string _ref_tmp__chpl = NULL;
  chpl____wide__ref_string i_rhs_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string tmp_chpl9 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp_chpl15;
  chpl_bool call_tmp_chpl16;
  int64_t ret_chpl2;
  syserr call_tmp_chpl17;
  _ref_string _ref_tmp__chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl10 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp_chpl18;
  string local_x_chpl2;
  string ret_chpl3;
  int32_t tmp_chpl11;
  chpl_bool call_tmp_chpl19;
  string ret_tmp_chpl3;
  _ref_string ret_to_arg_ref_tmp__chpl3 = NULL;
  chpl____wide__ref_string i_s_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  string type_tmp_chpl2;
  string this_chpl8;
  c_ptr_uint8_t call_tmp_chpl20 = NULL;
  int32_t default_arglocale_id_chpl2;
  string ret_tmp_chpl4;
  _ref_string ret_to_arg_ref_tmp__chpl4 = NULL;
  _ref_string _ref_tmp__chpl3 = NULL;
  chpl____wide__ref_string i_rhs_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string tmp_chpl12 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp_chpl21;
  chpl_bool call_tmp_chpl22;
  syserr call_tmp_chpl23;
  _ref_string _ref_tmp__chpl4 = NULL;
  chpl____wide__ref_string tmp_chpl13 = {CHPL_LOCALEID_T_INIT, NULL};
  string local_x_chpl3;
  string ret_chpl4;
  int32_t tmp_chpl14;
  chpl_bool call_tmp_chpl24;
  string ret_tmp_chpl5;
  _ref_string ret_to_arg_ref_tmp__chpl5 = NULL;
  chpl____wide__ref_string i_s_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  string type_tmp_chpl3;
  string this_chpl9;
  c_ptr_uint8_t call_tmp_chpl25 = NULL;
  int32_t default_arglocale_id_chpl3;
  string ret_tmp_chpl6;
  _ref_string ret_to_arg_ref_tmp__chpl6 = NULL;
  _ref_string _ref_tmp__chpl5 = NULL;
  chpl____wide__ref_string i_rhs_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp_chpl26;
  chpl_bool call_tmp_chpl27;
  syserr call_tmp_chpl28;
  _ref_string _ref_tmp__chpl6 = NULL;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  syserr call_tmp_chpl29;
  syserr tmp_chpl17;
  int32_t call_tmp_chpl30;
  chpl_bool call_tmp_chpl31;
  qio_channel_ptr_t coerce_tmp_chpl2;
  qio_channel_ptr_t tmp_chpl18;
  int64_t coerce_tmp_chpl3;
  int64_t tmp_chpl19;
  syserr e_chpl2;
  uint8_t call_tmp_chpl32;
  uint8_t call_tmp_chpl33;
  chpl_bool call_tmp_chpl34;
  chpl_bool call_tmp_chpl35;
  syserr call_tmp_chpl36;
  chpl_bool call_tmp_chpl37;
  syserr call_tmp_chpl38;
  syserr call_tmp_chpl39;
  syserr call_tmp_chpl40;
  syserr tmp_chpl20;
  int32_t call_tmp_chpl41;
  chpl_bool call_tmp_chpl42;
  qio_channel_ptr_t coerce_tmp_chpl4;
  qio_channel_ptr_t tmp_chpl21;
  syserr call_tmp_chpl43;
  _ref__wide_locale call_tmp_chpl44 = NULL;
  chpl_localeID_t call_tmp_chpl45;
  chpl____wide_locale tmp_chpl22 = {CHPL_LOCALEID_T_INIT, NULL};
  channel_T_dynamic_T_chpl rvfDerefTmp_chpl2;
  chpl_bool isdirect_chpl2;
  _class_localson_fn_chpl37 _args_foron_fn_chpl2 = NULL;
  c_void_ptr _args_vforon_fn_chpl2;
  chpl____wide__ref_syserr chpl_macro_tmp_7714;
  chpl__class_localson_fn_chpl36_object chpl_macro_tmp_7715;
  chpl____wide__ref_syserr chpl_macro_tmp_7716;
  chpl____wide__ref_chpl____wide__ref_string chpl_macro_tmp_7717;
  chpl____wide__ref_int32_t chpl_macro_tmp_7718;
  chpl____wide__ref_string chpl_macro_tmp_7719;
  chpl____wide__ref_string chpl_macro_tmp_7720;
  chpl____wide__ref_int32_t chpl_macro_tmp_7721;
  chpl____wide__ref_string chpl_macro_tmp_7722;
  chpl____wide__ref_string chpl_macro_tmp_7723;
  chpl____wide__ref_int32_t chpl_macro_tmp_7724;
  chpl____wide__ref_string chpl_macro_tmp_7725;
  chpl____wide__ref_string chpl_macro_tmp_7726;
  chpl____wide__ref_int64_t chpl_macro_tmp_7727;
  chpl__class_localson_fn_chpl37_object chpl_macro_tmp_7728;
  local__str_literal_337_chpl /* "Cannot call .c_str() on a remote string" */ = _str_literal_337 /* "Cannot call .c_str() on a remote string" */;
  local__str_literal_2497_chpl /* "in lock" */ = _str_literal_2497 /* "in lock" */;
  rvfRerefTmp_chpl = this_chpl6;
  qio_int_to_err(INT32(0));
  call_tmp_chpl = qio_int_to_err(INT32(0));
  _formal_tmp_error_chpl2 = call_tmp_chpl;
  call_tmp_chpl2 = &((this_chpl6)->home_chpl);
  tmp_chpl = *(call_tmp_chpl2);
  call_tmp_chpl3 = (&tmp_chpl)->locale;
  tmp_chpl2 = &_formal_tmp_error_chpl2;
  rvfDerefTmp_chpl = *(this_chpl6);
  isdirect_chpl = chpl_doDirectExecuteOn(&call_tmp_chpl3);
  if (isdirect_chpl) {
    chpl_macro_tmp_7714.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7714.addr = tmp_chpl2;
    tmp_chpl3 = chpl_macro_tmp_7714;
    on_fn_chpl36(&rvfDerefTmp_chpl, tmp_chpl3);
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn_chpl36)(&chpl_macro_tmp_7715));
    (_args_foron_fn_chpl)->_0_rvfDerefTmp_chpl = call_tmp_chpl3;
    (_args_foron_fn_chpl)->_1_rvfDerefTmp_chpl = rvfDerefTmp_chpl;
    tmp_chpl4 = &_formal_tmp_error_chpl2;
    chpl_macro_tmp_7716.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7716.addr = tmp_chpl4;
    tmp_chpl5 = chpl_macro_tmp_7716;
    (_args_foron_fn_chpl)->_2_tmp_chpl = tmp_chpl5;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    /*** wrapon_fn_chpl36 ***/ chpl_executeOn(&call_tmp_chpl3, INT32(292), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), sizeof(chpl__class_localson_fn_chpl36_object), INT64(2890), INT32(71));
  }
  call_tmp_chpl4 = qio_err_iserr(_formal_tmp_error_chpl2);
  call_tmp_chpl5 = (call_tmp_chpl4 != INT32(0));
  if (call_tmp_chpl5) {
    _ch_ioerror_chpl2(rvfRerefTmp_chpl, _formal_tmp_error_chpl2, &local__str_literal_2497_chpl /* "in lock" */);
  }
  chpl_gen_comm_get(((void*)(&tmp_chpl6)), chpl_nodeFromLocaleID(&((_formal_tmp_error_chpl).locale), INT64(0), INT32(0)), (_formal_tmp_error_chpl).addr, sizeof(syserr), -1, COMMID(115), INT64(4616), INT64(71));
  call_tmp_chpl6 = qio_err_iserr(tmp_chpl6);
  call_tmp_chpl7 = (call_tmp_chpl6 == INT32(0));
  if (call_tmp_chpl7) {
    chpl_macro_tmp_7717.locale = (args_chpl).locale;
    chpl_macro_tmp_7717.addr = &(((args_chpl).addr)->x1);
    chpl_gen_comm_get(((void*)(&call_tmp_chpl8)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_7717).locale), INT64(0), INT32(0)), (chpl_macro_tmp_7717).addr, sizeof(chpl____wide__ref_string), -1, COMMID(116), INT64(4617), INT64(71));
    tmp_chpl7 = (this_chpl6)->_channel_internal_chpl;
    coerce_tmp_chpl = tmp_chpl7;
    i_x_chpl = call_tmp_chpl8;
    qio_int_to_err(INT32(0));
    call_tmp_chpl9 = qio_channel_binary(coerce_tmp_chpl);
    call_tmp_chpl10 = qio_channel_byteorder(coerce_tmp_chpl);
    call_tmp_chpl11 = (call_tmp_chpl9 != UINT8(0));
    if (call_tmp_chpl11) {
      call_tmp_chpl12 = (((int16_t)(call_tmp_chpl10)) == ((int16_t)(iokind_chpl_big_chpl)));
      if (call_tmp_chpl12) {
        chpl_macro_tmp_7718.locale = (i_x_chpl).locale;
        chpl_macro_tmp_7718.addr = &(((i_x_chpl).addr)->locale_id);
        chpl_gen_comm_get(((void*)(&tmp_chpl8)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_7718).locale), INT64(0), INT32(0)), (chpl_macro_tmp_7718).addr, sizeof(int32_t), -1, COMMID(117), INT64(4617), INT64(71));
        call_tmp_chpl13 = (tmp_chpl8 == chpl_nodeID);
        if (call_tmp_chpl13) {
          ret_to_arg_ref_tmp__chpl = &ret_tmp_chpl;
          i_s_chpl = i_x_chpl;
          string2(i_s_chpl, UINT8(false), ret_to_arg_ref_tmp__chpl);
          ret_chpl = ret_tmp_chpl;
          goto _end_localize_chpl;
        } else {
          (&this_chpl7)->len = INT64(0);
          (&this_chpl7)->_size = INT64(0);
          (&this_chpl7)->buff = nil;
          (&this_chpl7)->owned = UINT8(false);
          (&this_chpl7)->locale_id = INT32(0);
          (&this_chpl7)->len = INT64(0);
          (&this_chpl7)->_size = INT64(0);
          call_tmp_chpl14 = ((c_ptr_uint8_t)(nil));
          (&this_chpl7)->buff = call_tmp_chpl14;
          (&this_chpl7)->owned = UINT8(true);
          default_arglocale_id_chpl = chpl_nodeID;
          (&this_chpl7)->locale_id = default_arglocale_id_chpl;
          ret_to_arg_ref_tmp__chpl2 = &ret_tmp_chpl2;
          _construct_string(INT64(0), INT64(0), call_tmp_chpl14, UINT8(true), default_arglocale_id_chpl, &this_chpl7, ret_to_arg_ref_tmp__chpl2);
          type_tmp_chpl = ret_tmp_chpl2;
          _ref_tmp__chpl = &type_tmp_chpl;
          i_rhs_chpl = i_x_chpl;
          chpl_macro_tmp_7719.locale = chpl_gen_getLocaleID();
          chpl_macro_tmp_7719.addr = _ref_tmp__chpl;
          tmp_chpl9 = chpl_macro_tmp_7719;
          chpl___ASSIGN_13(tmp_chpl9, i_rhs_chpl);
          ret_chpl = type_tmp_chpl;
          goto _end_localize_chpl;
        }
        _end_localize_chpl:;
        local_x_chpl = ret_chpl;
        call_tmp_chpl15 = qio_channel_str_style(coerce_tmp_chpl);
        call_tmp_chpl16 = ((&local_x_chpl)->locale_id != chpl_nodeID);
        if (call_tmp_chpl16) {
          halt(&local__str_literal_337_chpl /* "Cannot call .c_str() on a remote string" */, INT64(4617), INT32(71));
        }
        ret_chpl2 = (&local_x_chpl)->len;
        call_tmp_chpl17 = qio_channel_write_string(((int32_t)(UINT8(false))), ((int32_t)(iokind_chpl_big_chpl)), call_tmp_chpl15, coerce_tmp_chpl, ((c_string)(((c_void_ptr)((&local_x_chpl)->buff)))), ret_chpl2);
        _ref_tmp__chpl2 = &local_x_chpl;
        chpl_macro_tmp_7720.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_7720.addr = _ref_tmp__chpl2;
        tmp_chpl10 = chpl_macro_tmp_7720;
        deinit44(tmp_chpl10);
        e_chpl = call_tmp_chpl17;
      } else {
        call_tmp_chpl18 = (((int16_t)(call_tmp_chpl10)) == ((int16_t)(iokind_chpl_little_chpl)));
        if (call_tmp_chpl18) {
          chpl_macro_tmp_7721.locale = (i_x_chpl).locale;
          chpl_macro_tmp_7721.addr = &(((i_x_chpl).addr)->locale_id);
          chpl_gen_comm_get(((void*)(&tmp_chpl11)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_7721).locale), INT64(0), INT32(0)), (chpl_macro_tmp_7721).addr, sizeof(int32_t), -1, COMMID(118), INT64(4617), INT64(71));
          call_tmp_chpl19 = (tmp_chpl11 == chpl_nodeID);
          if (call_tmp_chpl19) {
            ret_to_arg_ref_tmp__chpl3 = &ret_tmp_chpl3;
            i_s_chpl2 = i_x_chpl;
            string2(i_s_chpl2, UINT8(false), ret_to_arg_ref_tmp__chpl3);
            ret_chpl3 = ret_tmp_chpl3;
            goto _end_localize_chpl2;
          } else {
            (&this_chpl8)->len = INT64(0);
            (&this_chpl8)->_size = INT64(0);
            (&this_chpl8)->buff = nil;
            (&this_chpl8)->owned = UINT8(false);
            (&this_chpl8)->locale_id = INT32(0);
            (&this_chpl8)->len = INT64(0);
            (&this_chpl8)->_size = INT64(0);
            call_tmp_chpl20 = ((c_ptr_uint8_t)(nil));
            (&this_chpl8)->buff = call_tmp_chpl20;
            (&this_chpl8)->owned = UINT8(true);
            default_arglocale_id_chpl2 = chpl_nodeID;
            (&this_chpl8)->locale_id = default_arglocale_id_chpl2;
            ret_to_arg_ref_tmp__chpl4 = &ret_tmp_chpl4;
            _construct_string(INT64(0), INT64(0), call_tmp_chpl20, UINT8(true), default_arglocale_id_chpl2, &this_chpl8, ret_to_arg_ref_tmp__chpl4);
            type_tmp_chpl2 = ret_tmp_chpl4;
            _ref_tmp__chpl3 = &type_tmp_chpl2;
            i_rhs_chpl2 = i_x_chpl;
            chpl_macro_tmp_7722.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_7722.addr = _ref_tmp__chpl3;
            tmp_chpl12 = chpl_macro_tmp_7722;
            chpl___ASSIGN_13(tmp_chpl12, i_rhs_chpl2);
            ret_chpl3 = type_tmp_chpl2;
            goto _end_localize_chpl2;
          }
          _end_localize_chpl2:;
          local_x_chpl2 = ret_chpl3;
          call_tmp_chpl21 = qio_channel_str_style(coerce_tmp_chpl);
          call_tmp_chpl22 = ((&local_x_chpl2)->locale_id != chpl_nodeID);
          if (call_tmp_chpl22) {
            halt(&local__str_literal_337_chpl /* "Cannot call .c_str() on a remote string" */, INT64(4617), INT32(71));
          }
          call_tmp_chpl23 = qio_channel_write_string(((int32_t)(UINT8(false))), ((int32_t)(iokind_chpl_little_chpl)), call_tmp_chpl21, coerce_tmp_chpl, ((c_string)(((c_void_ptr)((&local_x_chpl2)->buff)))), (&local_x_chpl2)->len);
          _ref_tmp__chpl4 = &local_x_chpl2;
          chpl_macro_tmp_7723.locale = chpl_gen_getLocaleID();
          chpl_macro_tmp_7723.addr = _ref_tmp__chpl4;
          tmp_chpl13 = chpl_macro_tmp_7723;
          deinit44(tmp_chpl13);
          e_chpl = call_tmp_chpl23;
        } else {
          chpl_macro_tmp_7724.locale = (i_x_chpl).locale;
          chpl_macro_tmp_7724.addr = &(((i_x_chpl).addr)->locale_id);
          chpl_gen_comm_get(((void*)(&tmp_chpl14)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_7724).locale), INT64(0), INT32(0)), (chpl_macro_tmp_7724).addr, sizeof(int32_t), -1, COMMID(119), INT64(4617), INT64(71));
          call_tmp_chpl24 = (tmp_chpl14 == chpl_nodeID);
          if (call_tmp_chpl24) {
            ret_to_arg_ref_tmp__chpl5 = &ret_tmp_chpl5;
            i_s_chpl3 = i_x_chpl;
            string2(i_s_chpl3, UINT8(false), ret_to_arg_ref_tmp__chpl5);
            ret_chpl4 = ret_tmp_chpl5;
            goto _end_localize_chpl3;
          } else {
            (&this_chpl9)->len = INT64(0);
            (&this_chpl9)->_size = INT64(0);
            (&this_chpl9)->buff = nil;
            (&this_chpl9)->owned = UINT8(false);
            (&this_chpl9)->locale_id = INT32(0);
            (&this_chpl9)->len = INT64(0);
            (&this_chpl9)->_size = INT64(0);
            call_tmp_chpl25 = ((c_ptr_uint8_t)(nil));
            (&this_chpl9)->buff = call_tmp_chpl25;
            (&this_chpl9)->owned = UINT8(true);
            default_arglocale_id_chpl3 = chpl_nodeID;
            (&this_chpl9)->locale_id = default_arglocale_id_chpl3;
            ret_to_arg_ref_tmp__chpl6 = &ret_tmp_chpl6;
            _construct_string(INT64(0), INT64(0), call_tmp_chpl25, UINT8(true), default_arglocale_id_chpl3, &this_chpl9, ret_to_arg_ref_tmp__chpl6);
            type_tmp_chpl3 = ret_tmp_chpl6;
            _ref_tmp__chpl5 = &type_tmp_chpl3;
            i_rhs_chpl3 = i_x_chpl;
            chpl_macro_tmp_7725.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_7725.addr = _ref_tmp__chpl5;
            tmp_chpl15 = chpl_macro_tmp_7725;
            chpl___ASSIGN_13(tmp_chpl15, i_rhs_chpl3);
            ret_chpl4 = type_tmp_chpl3;
            goto _end_localize_chpl3;
          }
          _end_localize_chpl3:;
          local_x_chpl3 = ret_chpl4;
          call_tmp_chpl26 = qio_channel_str_style(coerce_tmp_chpl);
          call_tmp_chpl27 = ((&local_x_chpl3)->locale_id != chpl_nodeID);
          if (call_tmp_chpl27) {
            halt(&local__str_literal_337_chpl /* "Cannot call .c_str() on a remote string" */, INT64(4617), INT32(71));
          }
          call_tmp_chpl28 = qio_channel_write_string(((int32_t)(UINT8(false))), ((int32_t)(iokind_chpl_native_chpl)), call_tmp_chpl26, coerce_tmp_chpl, ((c_string)(((c_void_ptr)((&local_x_chpl3)->buff)))), (&local_x_chpl3)->len);
          _ref_tmp__chpl6 = &local_x_chpl3;
          chpl_macro_tmp_7726.locale = chpl_gen_getLocaleID();
          chpl_macro_tmp_7726.addr = _ref_tmp__chpl6;
          tmp_chpl16 = chpl_macro_tmp_7726;
          deinit44(tmp_chpl16);
          e_chpl = call_tmp_chpl28;
        }
      }
    } else {
      call_tmp_chpl29 = _write_text_internal_chpl3(coerce_tmp_chpl, i_x_chpl);
      e_chpl = call_tmp_chpl29;
    }
    chpl_gen_comm_put(((void*)(&e_chpl)), chpl_nodeFromLocaleID(&((_formal_tmp_error_chpl).locale), INT64(0), INT32(0)), (_formal_tmp_error_chpl).addr, sizeof(syserr), -1, COMMID(120), INT64(4617), INT64(71));
  }
  chpl_gen_comm_get(((void*)(&tmp_chpl17)), chpl_nodeFromLocaleID(&((_formal_tmp_error_chpl).locale), INT64(0), INT32(0)), (_formal_tmp_error_chpl).addr, sizeof(syserr), -1, COMMID(121), INT64(4616), INT64(71));
  call_tmp_chpl30 = qio_err_iserr(tmp_chpl17);
  call_tmp_chpl31 = (call_tmp_chpl30 == INT32(0));
  if (call_tmp_chpl31) {
    tmp_chpl18 = (this_chpl6)->_channel_internal_chpl;
    coerce_tmp_chpl2 = tmp_chpl18;
    chpl_macro_tmp_7727.locale = (args_chpl).locale;
    chpl_macro_tmp_7727.addr = &(((args_chpl).addr)->x2);
    chpl_gen_comm_get(((void*)(&tmp_chpl19)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_7727).locale), INT64(0), INT32(0)), (chpl_macro_tmp_7727).addr, sizeof(int64_t), -1, COMMID(122), INT64(4617), INT64(71));
    coerce_tmp_chpl3 = tmp_chpl19;
    qio_int_to_err(INT32(0));
    call_tmp_chpl32 = qio_channel_binary(coerce_tmp_chpl2);
    call_tmp_chpl33 = qio_channel_byteorder(coerce_tmp_chpl2);
    call_tmp_chpl34 = (call_tmp_chpl32 != UINT8(0));
    if (call_tmp_chpl34) {
      call_tmp_chpl35 = (((int16_t)(call_tmp_chpl33)) == ((int16_t)(iokind_chpl_big_chpl)));
      if (call_tmp_chpl35) {
        call_tmp_chpl36 = qio_channel_write_int64(((int32_t)(UINT8(false))), ((int32_t)(iokind_chpl_big_chpl)), coerce_tmp_chpl2, coerce_tmp_chpl3);
        e_chpl2 = call_tmp_chpl36;
      } else {
        call_tmp_chpl37 = (((int16_t)(call_tmp_chpl33)) == ((int16_t)(iokind_chpl_little_chpl)));
        if (call_tmp_chpl37) {
          call_tmp_chpl38 = qio_channel_write_int64(((int32_t)(UINT8(false))), ((int32_t)(iokind_chpl_little_chpl)), coerce_tmp_chpl2, coerce_tmp_chpl3);
          e_chpl2 = call_tmp_chpl38;
        } else {
          call_tmp_chpl39 = qio_channel_write_int64(((int32_t)(UINT8(false))), ((int32_t)(iokind_chpl_native_chpl)), coerce_tmp_chpl2, coerce_tmp_chpl3);
          e_chpl2 = call_tmp_chpl39;
        }
      }
    } else {
      call_tmp_chpl40 = _write_text_internal_chpl4(coerce_tmp_chpl2, coerce_tmp_chpl3);
      e_chpl2 = call_tmp_chpl40;
    }
    chpl_gen_comm_put(((void*)(&e_chpl2)), chpl_nodeFromLocaleID(&((_formal_tmp_error_chpl).locale), INT64(0), INT32(0)), (_formal_tmp_error_chpl).addr, sizeof(syserr), -1, COMMID(123), INT64(4617), INT64(71));
  }
  chpl_gen_comm_get(((void*)(&tmp_chpl20)), chpl_nodeFromLocaleID(&((_formal_tmp_error_chpl).locale), INT64(0), INT32(0)), (_formal_tmp_error_chpl).addr, sizeof(syserr), -1, COMMID(124), INT64(4616), INT64(71));
  call_tmp_chpl41 = qio_err_iserr(tmp_chpl20);
  call_tmp_chpl42 = (call_tmp_chpl41 == INT32(0));
  if (call_tmp_chpl42) {
    tmp_chpl21 = (this_chpl6)->_channel_internal_chpl;
    coerce_tmp_chpl4 = tmp_chpl21;
    qio_int_to_err(INT32(0));
    call_tmp_chpl43 = qio_channel_write_newline(((int32_t)(UINT8(false))), coerce_tmp_chpl4);
    chpl_gen_comm_put(((void*)(&call_tmp_chpl43)), chpl_nodeFromLocaleID(&((_formal_tmp_error_chpl).locale), INT64(0), INT32(0)), (_formal_tmp_error_chpl).addr, sizeof(syserr), -1, COMMID(125), INT64(4617), INT64(71));
  }
  call_tmp_chpl44 = &((this_chpl6)->home_chpl);
  tmp_chpl22 = *(call_tmp_chpl44);
  call_tmp_chpl45 = (&tmp_chpl22)->locale;
  rvfDerefTmp_chpl2 = *(this_chpl6);
  isdirect_chpl2 = chpl_doDirectExecuteOn(&call_tmp_chpl45);
  if (isdirect_chpl2) {
    on_fn_chpl37(&rvfDerefTmp_chpl2);
  } else {
    _args_foron_fn_chpl2 = ((_class_localson_fn_chpl37)(&chpl_macro_tmp_7728));
    (_args_foron_fn_chpl2)->_0_rvfDerefTmp_chpl = call_tmp_chpl45;
    (_args_foron_fn_chpl2)->_1_rvfDerefTmp_chpl = rvfDerefTmp_chpl2;
    _args_vforon_fn_chpl2 = ((void*)(_args_foron_fn_chpl2));
    /*** wrapon_fn_chpl37 ***/ chpl_executeOn(&call_tmp_chpl45, INT32(293), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl2)), sizeof(chpl__class_localson_fn_chpl37_object), INT64(2910), INT32(71));
  }
  return;
}

/* IO.chpl:4712 */
static chpl_bool writeln_chpl3(_ref_channel_T_dynamic_T this_chpl6,
                               _ref_string _e1_args_chpl) {
  string local__str_literal_411_chpl;
  string local__str_literal_2617_chpl;
  string local__str_literal_2619_chpl;
  int32_t local_c_sublocid_any_chpl;
  ioNewline_chpl call_tmp_chpl;
  ioNewline_chpl this_chpl7;
  ioNewline_chpl ret_tmp_chpl;
  _ref_ioNewline ret_to_arg_ref_tmp__chpl = NULL;
  chpl_bool ret_chpl;
  syserr _formal_tmp_error_chpl;
  _tuple_2__ref_string__ref_ioNewline args_chpl;
  _ref_string _ref_tmp__chpl = NULL;
  _ref_ioNewline _ref_tmp__chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  syserr call_tmp_chpl2;
  chpl____wide_locale ret_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_locale ret_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp_chpl4;
  chpl____wide_object tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t _autoCopy_tmp__chpl;
  chpl____wide_locale call_tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__wide_locale call_tmp_chpl6 = NULL;
  chpl_localeID_t call_tmp_chpl7;
  chpl____wide_locale tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_syserr tmp_chpl4 = NULL;
  _ref__tuple_2__ref_string__ref_ioNewline tmp_chpl5 = NULL;
  channel_T_dynamic_T_chpl rvfDerefTmp_chpl;
  chpl____wide_locale rvfDerefTmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect_chpl;
  chpl____wide__ref_syserr tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__tuple_2__ref_string__ref_ioNewline tmp_chpl7 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl51 _args_foron_fn_chpl = NULL;
  _ref_syserr tmp_chpl8 = NULL;
  chpl____wide__ref_syserr tmp_chpl9 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__tuple_2__ref_string__ref_ioNewline tmp_chpl10 = NULL;
  chpl____wide__ref__tuple_2__ref_string__ref_ioNewline tmp_chpl11 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  int32_t call_tmp_chpl8;
  chpl_bool call_tmp_chpl9;
  string call_tmp_chpl10;
  string ret_tmp_chpl2;
  _ref_string ret_to_arg_ref_tmp__chpl2 = NULL;
  string call_tmp_chpl11;
  string ret_tmp_chpl3;
  _ref_string ret_to_arg_ref_tmp__chpl3 = NULL;
  string call_tmp_chpl12;
  string ret_tmp_chpl4;
  _ref_string ret_to_arg_ref_tmp__chpl4 = NULL;
  _ref_string _ref_tmp__chpl3 = NULL;
  chpl____wide__ref_string tmp_chpl12 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp__chpl4 = NULL;
  chpl____wide__ref_string tmp_chpl13 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp__chpl5 = NULL;
  chpl____wide__ref_string tmp_chpl14 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_7729;
  chpl____wide_object chpl_macro_tmp_7730;
  chpl____wide__nilType chpl_macro_tmp_7731;
  chpl____wide_object chpl_macro_tmp_7732;
  chpl____wide__ref_syserr chpl_macro_tmp_7733;
  chpl____wide__ref__tuple_2__ref_string__ref_ioNewline chpl_macro_tmp_7734;
  chpl__class_localson_fn_chpl51_object chpl_macro_tmp_7735;
  chpl____wide__ref_syserr chpl_macro_tmp_7736;
  chpl____wide__ref__tuple_2__ref_string__ref_ioNewline chpl_macro_tmp_7737;
  chpl____wide__ref_string chpl_macro_tmp_7738;
  chpl____wide__ref_string chpl_macro_tmp_7739;
  chpl____wide__ref_string chpl_macro_tmp_7740;
  local__str_literal_411_chpl /* ")" */ = _str_literal_411 /* ")" */;
  local__str_literal_2617_chpl /* "in channel.write(" */ = _str_literal_2617 /* "in channel.write(" */;
  local__str_literal_2619_chpl /* "" */ = _str_literal_2619 /* "" */;
  local_c_sublocid_any_chpl = c_sublocid_any;
  (&this_chpl7)->skipWhitespaceOnly_chpl = UINT8(false);
  (&this_chpl7)->skipWhitespaceOnly_chpl = UINT8(false);
  ret_to_arg_ref_tmp__chpl = &ret_tmp_chpl;
  _construct_ioNewline_chpl(UINT8(false), &this_chpl7, ret_to_arg_ref_tmp__chpl);
  call_tmp_chpl = ret_tmp_chpl;
  qio_int_to_err(INT32(0));
  _ref_tmp__chpl = _e1_args_chpl;
  _ref_tmp__chpl2 = &call_tmp_chpl;
  chpl_macro_tmp_7729.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7729.addr = _ref_tmp__chpl;
  tmp_chpl = chpl_macro_tmp_7729;
  (&args_chpl)->x1 = tmp_chpl;
  (&args_chpl)->x2 = _ref_tmp__chpl2;
  call_tmp_chpl2 = qio_int_to_err(INT32(0));
  _formal_tmp_error_chpl = call_tmp_chpl2;
  ret_chpl3 = (this_chpl6)->_readWriteThisFromLocale_chpl;
  ret_chpl2 = ret_chpl3;
  chpl_macro_tmp_7730.locale = (&ret_chpl3)->locale;
  chpl_macro_tmp_7730.addr = ((object)((&ret_chpl3)->addr));
  call_tmp_chpl3 = chpl_macro_tmp_7730;
  chpl_macro_tmp_7731.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7731.addr = nil;
  chpl_macro_tmp_7732.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7732.addr = NULL;
  tmp_chpl2 = chpl_macro_tmp_7732;
  call_tmp_chpl4 = (! (((&call_tmp_chpl3)->addr != (&tmp_chpl2)->addr) || ((!(! (&call_tmp_chpl3)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp_chpl3)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&tmp_chpl2)->locale), INT64(0), INT32(0))))));
  if (call_tmp_chpl4) {
    _autoCopy_tmp__chpl = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any_chpl);
    call_tmp_chpl5 = chpl_localeID_to_locale(&_autoCopy_tmp__chpl);
    ret_chpl2 = call_tmp_chpl5;
  }
  call_tmp_chpl6 = &((this_chpl6)->home_chpl);
  tmp_chpl3 = *(call_tmp_chpl6);
  call_tmp_chpl7 = (&tmp_chpl3)->locale;
  tmp_chpl4 = &_formal_tmp_error_chpl;
  tmp_chpl5 = &args_chpl;
  rvfDerefTmp_chpl = *(this_chpl6);
  rvfDerefTmp_chpl2 = ret_chpl2;
  isdirect_chpl = chpl_doDirectExecuteOn(&call_tmp_chpl7);
  if (isdirect_chpl) {
    chpl_macro_tmp_7733.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7733.addr = tmp_chpl4;
    tmp_chpl6 = chpl_macro_tmp_7733;
    chpl_macro_tmp_7734.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7734.addr = tmp_chpl5;
    tmp_chpl7 = chpl_macro_tmp_7734;
    on_fn_chpl52(&rvfDerefTmp_chpl, tmp_chpl6, tmp_chpl7, rvfDerefTmp_chpl2);
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn_chpl51)(&chpl_macro_tmp_7735));
    (_args_foron_fn_chpl)->_0_rvfDerefTmp_chpl = call_tmp_chpl7;
    (_args_foron_fn_chpl)->_1_rvfDerefTmp_chpl = rvfDerefTmp_chpl;
    tmp_chpl8 = &_formal_tmp_error_chpl;
    chpl_macro_tmp_7736.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7736.addr = tmp_chpl8;
    tmp_chpl9 = chpl_macro_tmp_7736;
    (_args_foron_fn_chpl)->_2_tmp_chpl = tmp_chpl9;
    tmp_chpl10 = &args_chpl;
    chpl_macro_tmp_7737.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7737.addr = tmp_chpl10;
    tmp_chpl11 = chpl_macro_tmp_7737;
    (_args_foron_fn_chpl)->_3_tmp_chpl = tmp_chpl11;
    (_args_foron_fn_chpl)->_4_rvfDerefTmp_chpl = rvfDerefTmp_chpl2;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    /*** wrapon_fn_chpl52 ***/ chpl_executeOn(&call_tmp_chpl7, INT32(308), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), sizeof(chpl__class_localson_fn_chpl51_object), INT64(4613), INT32(71));
  }
  qio_err_iserr(_formal_tmp_error_chpl);
  call_tmp_chpl8 = qio_err_iserr(_formal_tmp_error_chpl);
  call_tmp_chpl9 = (call_tmp_chpl8 == INT32(0));
  if (call_tmp_chpl9) {
    ret_chpl = UINT8(true);
    goto _end_write_chpl;
  } else {
    ret_to_arg_ref_tmp__chpl2 = &ret_tmp_chpl2;
    _args_to_proto_chpl3(_e1_args_chpl, &call_tmp_chpl, &local__str_literal_2619_chpl /* "" */, ret_to_arg_ref_tmp__chpl2);
    call_tmp_chpl10 = ret_tmp_chpl2;
    ret_to_arg_ref_tmp__chpl3 = &ret_tmp_chpl3;
    chpl___PLUS_(&local__str_literal_2617_chpl /* "in channel.write(" */, &ret_tmp_chpl2, ret_to_arg_ref_tmp__chpl3);
    call_tmp_chpl11 = ret_tmp_chpl3;
    ret_to_arg_ref_tmp__chpl4 = &ret_tmp_chpl4;
    chpl___PLUS_(&ret_tmp_chpl3, &local__str_literal_411_chpl /* ")" */, ret_to_arg_ref_tmp__chpl4);
    call_tmp_chpl12 = ret_tmp_chpl4;
    _ch_ioerror_chpl2(this_chpl6, _formal_tmp_error_chpl, &ret_tmp_chpl4);
    ret_chpl = UINT8(false);
    _ref_tmp__chpl3 = &call_tmp_chpl12;
    chpl_macro_tmp_7738.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7738.addr = _ref_tmp__chpl3;
    tmp_chpl12 = chpl_macro_tmp_7738;
    deinit44(tmp_chpl12);
    _ref_tmp__chpl4 = &call_tmp_chpl11;
    chpl_macro_tmp_7739.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7739.addr = _ref_tmp__chpl4;
    tmp_chpl13 = chpl_macro_tmp_7739;
    deinit44(tmp_chpl13);
    _ref_tmp__chpl5 = &call_tmp_chpl10;
    chpl_macro_tmp_7740.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7740.addr = _ref_tmp__chpl5;
    tmp_chpl14 = chpl_macro_tmp_7740;
    deinit44(tmp_chpl14);
    goto _end_write_chpl;
  }
  _end_write_chpl:;
  return ret_chpl;
}

/* IO.chpl:4712 */
static chpl_bool writeln_chpl2(_ref_channel_T_dynamic_T this_chpl6,
                               _ref_string _e1_args_chpl,
                               int64_t _e2_args_chpl,
                               _ref_string _e3_args_chpl,
                               _ref__tuple_2_chpl_bool_int64_t _e4_args_chpl) {
  string local__str_literal_411_chpl;
  string local__str_literal_2617_chpl;
  string local__str_literal_2619_chpl;
  int32_t local_c_sublocid_any_chpl;
  ioNewline_chpl call_tmp_chpl;
  ioNewline_chpl this_chpl7;
  ioNewline_chpl ret_tmp_chpl;
  _ref_ioNewline ret_to_arg_ref_tmp__chpl = NULL;
  chpl_bool ret_chpl;
  syserr _formal_tmp_error_chpl;
  _tuple_5__ref_string_int64_t__ref_string__ref__tuple_2_chpl_bool_int64_t__ref_ioNewline args_chpl;
  _ref_string _ref_tmp__chpl = NULL;
  _ref_string _ref_tmp__chpl2 = NULL;
  _ref_ioNewline _ref_tmp__chpl3 = NULL;
  _ref__tuple_2_chpl_bool_int64_t this_x4_chpl = NULL;
  chpl____wide__ref_string tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__tuple_2_chpl_bool_int64_t tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  syserr call_tmp_chpl2;
  chpl____wide_locale ret_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_locale ret_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp_chpl4;
  chpl____wide_object tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t _autoCopy_tmp__chpl;
  chpl____wide_locale call_tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__wide_locale call_tmp_chpl6 = NULL;
  chpl_localeID_t call_tmp_chpl7;
  chpl____wide_locale tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_syserr tmp_chpl6 = NULL;
  _ref__tuple_5__ref_string_int64_t__ref_string__ref__tuple_2_chpl_bool_int64_t__ref_ioNewline tmp_chpl7 = NULL;
  channel_T_dynamic_T_chpl rvfDerefTmp_chpl;
  chpl____wide_locale rvfDerefTmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect_chpl;
  chpl____wide__ref_syserr tmp_chpl8 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__tuple_5__ref_string_int64_t__ref_string__ref__tuple_2_chpl_bool_int64_t__ref_ioNewline tmp_chpl9 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl52 _args_foron_fn_chpl = NULL;
  _ref_syserr tmp_chpl10 = NULL;
  chpl____wide__ref_syserr tmp_chpl11 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__tuple_5__ref_string_int64_t__ref_string__ref__tuple_2_chpl_bool_int64_t__ref_ioNewline tmp_chpl12 = NULL;
  chpl____wide__ref__tuple_5__ref_string_int64_t__ref_string__ref__tuple_2_chpl_bool_int64_t__ref_ioNewline tmp_chpl13 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  int32_t call_tmp_chpl8;
  chpl_bool call_tmp_chpl9;
  string call_tmp_chpl10;
  string ret_tmp_chpl2;
  _ref_string ret_to_arg_ref_tmp__chpl2 = NULL;
  string call_tmp_chpl11;
  string ret_tmp_chpl3;
  _ref_string ret_to_arg_ref_tmp__chpl3 = NULL;
  string call_tmp_chpl12;
  string ret_tmp_chpl4;
  _ref_string ret_to_arg_ref_tmp__chpl4 = NULL;
  _ref_string _ref_tmp__chpl4 = NULL;
  chpl____wide__ref_string tmp_chpl14 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp__chpl5 = NULL;
  chpl____wide__ref_string tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp__chpl6 = NULL;
  chpl____wide__ref_string tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_7741;
  chpl____wide__ref_string chpl_macro_tmp_7742;
  chpl____wide__ref__tuple_2_chpl_bool_int64_t chpl_macro_tmp_7743;
  chpl____wide_object chpl_macro_tmp_7744;
  chpl____wide__nilType chpl_macro_tmp_7745;
  chpl____wide_object chpl_macro_tmp_7746;
  chpl____wide__ref_syserr chpl_macro_tmp_7747;
  chpl____wide__ref__tuple_5__ref_string_int64_t__ref_string__ref__tuple_2_chpl_bool_int64_t__ref_ioNewline chpl_macro_tmp_7748;
  chpl__class_localson_fn_chpl52_object chpl_macro_tmp_7749;
  chpl____wide__ref_syserr chpl_macro_tmp_7750;
  chpl____wide__ref__tuple_5__ref_string_int64_t__ref_string__ref__tuple_2_chpl_bool_int64_t__ref_ioNewline chpl_macro_tmp_7751;
  chpl____wide__ref_string chpl_macro_tmp_7752;
  chpl____wide__ref_string chpl_macro_tmp_7753;
  chpl____wide__ref_string chpl_macro_tmp_7754;
  local__str_literal_411_chpl /* ")" */ = _str_literal_411 /* ")" */;
  local__str_literal_2617_chpl /* "in channel.write(" */ = _str_literal_2617 /* "in channel.write(" */;
  local__str_literal_2619_chpl /* "" */ = _str_literal_2619 /* "" */;
  local_c_sublocid_any_chpl = c_sublocid_any;
  (&this_chpl7)->skipWhitespaceOnly_chpl = UINT8(false);
  (&this_chpl7)->skipWhitespaceOnly_chpl = UINT8(false);
  ret_to_arg_ref_tmp__chpl = &ret_tmp_chpl;
  _construct_ioNewline_chpl(UINT8(false), &this_chpl7, ret_to_arg_ref_tmp__chpl);
  call_tmp_chpl = ret_tmp_chpl;
  qio_int_to_err(INT32(0));
  _ref_tmp__chpl = _e1_args_chpl;
  _ref_tmp__chpl2 = _e3_args_chpl;
  _ref_tmp__chpl3 = &call_tmp_chpl;
  this_x4_chpl = _e4_args_chpl;
  chpl_macro_tmp_7741.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7741.addr = _ref_tmp__chpl;
  tmp_chpl = chpl_macro_tmp_7741;
  (&args_chpl)->x1 = tmp_chpl;
  (&args_chpl)->x2 = _e2_args_chpl;
  chpl_macro_tmp_7742.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7742.addr = _ref_tmp__chpl2;
  tmp_chpl2 = chpl_macro_tmp_7742;
  (&args_chpl)->x3 = tmp_chpl2;
  chpl_macro_tmp_7743.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7743.addr = this_x4_chpl;
  tmp_chpl3 = chpl_macro_tmp_7743;
  (&args_chpl)->x4 = tmp_chpl3;
  (&args_chpl)->x5 = _ref_tmp__chpl3;
  call_tmp_chpl2 = qio_int_to_err(INT32(0));
  _formal_tmp_error_chpl = call_tmp_chpl2;
  ret_chpl3 = (this_chpl6)->_readWriteThisFromLocale_chpl;
  ret_chpl2 = ret_chpl3;
  chpl_macro_tmp_7744.locale = (&ret_chpl3)->locale;
  chpl_macro_tmp_7744.addr = ((object)((&ret_chpl3)->addr));
  call_tmp_chpl3 = chpl_macro_tmp_7744;
  chpl_macro_tmp_7745.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7745.addr = nil;
  chpl_macro_tmp_7746.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7746.addr = NULL;
  tmp_chpl4 = chpl_macro_tmp_7746;
  call_tmp_chpl4 = (! (((&call_tmp_chpl3)->addr != (&tmp_chpl4)->addr) || ((!(! (&call_tmp_chpl3)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp_chpl3)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&tmp_chpl4)->locale), INT64(0), INT32(0))))));
  if (call_tmp_chpl4) {
    _autoCopy_tmp__chpl = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any_chpl);
    call_tmp_chpl5 = chpl_localeID_to_locale(&_autoCopy_tmp__chpl);
    ret_chpl2 = call_tmp_chpl5;
  }
  call_tmp_chpl6 = &((this_chpl6)->home_chpl);
  tmp_chpl5 = *(call_tmp_chpl6);
  call_tmp_chpl7 = (&tmp_chpl5)->locale;
  tmp_chpl6 = &_formal_tmp_error_chpl;
  tmp_chpl7 = &args_chpl;
  rvfDerefTmp_chpl = *(this_chpl6);
  rvfDerefTmp_chpl2 = ret_chpl2;
  isdirect_chpl = chpl_doDirectExecuteOn(&call_tmp_chpl7);
  if (isdirect_chpl) {
    chpl_macro_tmp_7747.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7747.addr = tmp_chpl6;
    tmp_chpl8 = chpl_macro_tmp_7747;
    chpl_macro_tmp_7748.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7748.addr = tmp_chpl7;
    tmp_chpl9 = chpl_macro_tmp_7748;
    on_fn_chpl51(&rvfDerefTmp_chpl, tmp_chpl8, tmp_chpl9, rvfDerefTmp_chpl2);
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn_chpl52)(&chpl_macro_tmp_7749));
    (_args_foron_fn_chpl)->_0_rvfDerefTmp_chpl = call_tmp_chpl7;
    (_args_foron_fn_chpl)->_1_rvfDerefTmp_chpl = rvfDerefTmp_chpl;
    tmp_chpl10 = &_formal_tmp_error_chpl;
    chpl_macro_tmp_7750.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7750.addr = tmp_chpl10;
    tmp_chpl11 = chpl_macro_tmp_7750;
    (_args_foron_fn_chpl)->_2_tmp_chpl = tmp_chpl11;
    tmp_chpl12 = &args_chpl;
    chpl_macro_tmp_7751.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7751.addr = tmp_chpl12;
    tmp_chpl13 = chpl_macro_tmp_7751;
    (_args_foron_fn_chpl)->_3_tmp_chpl = tmp_chpl13;
    (_args_foron_fn_chpl)->_4_rvfDerefTmp_chpl = rvfDerefTmp_chpl2;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    /*** wrapon_fn_chpl53 ***/ chpl_executeOn(&call_tmp_chpl7, INT32(309), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), sizeof(chpl__class_localson_fn_chpl52_object), INT64(4613), INT32(71));
  }
  qio_err_iserr(_formal_tmp_error_chpl);
  call_tmp_chpl8 = qio_err_iserr(_formal_tmp_error_chpl);
  call_tmp_chpl9 = (call_tmp_chpl8 == INT32(0));
  if (call_tmp_chpl9) {
    ret_chpl = UINT8(true);
    goto _end_write_chpl;
  } else {
    ret_to_arg_ref_tmp__chpl2 = &ret_tmp_chpl2;
    _args_to_proto_chpl4(_e1_args_chpl, _e2_args_chpl, _e3_args_chpl, _e4_args_chpl, &call_tmp_chpl, &local__str_literal_2619_chpl /* "" */, ret_to_arg_ref_tmp__chpl2);
    call_tmp_chpl10 = ret_tmp_chpl2;
    ret_to_arg_ref_tmp__chpl3 = &ret_tmp_chpl3;
    chpl___PLUS_(&local__str_literal_2617_chpl /* "in channel.write(" */, &ret_tmp_chpl2, ret_to_arg_ref_tmp__chpl3);
    call_tmp_chpl11 = ret_tmp_chpl3;
    ret_to_arg_ref_tmp__chpl4 = &ret_tmp_chpl4;
    chpl___PLUS_(&ret_tmp_chpl3, &local__str_literal_411_chpl /* ")" */, ret_to_arg_ref_tmp__chpl4);
    call_tmp_chpl12 = ret_tmp_chpl4;
    _ch_ioerror_chpl2(this_chpl6, _formal_tmp_error_chpl, &ret_tmp_chpl4);
    ret_chpl = UINT8(false);
    _ref_tmp__chpl4 = &call_tmp_chpl12;
    chpl_macro_tmp_7752.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7752.addr = _ref_tmp__chpl4;
    tmp_chpl14 = chpl_macro_tmp_7752;
    deinit44(tmp_chpl14);
    _ref_tmp__chpl5 = &call_tmp_chpl11;
    chpl_macro_tmp_7753.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7753.addr = _ref_tmp__chpl5;
    tmp_chpl15 = chpl_macro_tmp_7753;
    deinit44(tmp_chpl15);
    _ref_tmp__chpl6 = &call_tmp_chpl10;
    chpl_macro_tmp_7754.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7754.addr = _ref_tmp__chpl6;
    tmp_chpl16 = chpl_macro_tmp_7754;
    deinit44(tmp_chpl16);
    goto _end_write_chpl;
  }
  _end_write_chpl:;
  return ret_chpl;
}

/* IO.chpl:4712 */
static chpl_bool writeln_chpl(_ref_channel_T_dynamic_T this_chpl6,
                              _ref_string _e1_args_chpl,
                              int64_t _e2_args_chpl) {
  string local__str_literal_411_chpl;
  string local__str_literal_2617_chpl;
  string local__str_literal_2619_chpl;
  int32_t local_c_sublocid_any_chpl;
  ioNewline_chpl call_tmp_chpl;
  ioNewline_chpl this_chpl7;
  ioNewline_chpl ret_tmp_chpl;
  _ref_ioNewline ret_to_arg_ref_tmp__chpl = NULL;
  chpl_bool ret_chpl;
  syserr _formal_tmp_error_chpl;
  _tuple_3__ref_string_int64_t__ref_ioNewline args_chpl;
  _ref_string _ref_tmp__chpl = NULL;
  _ref_ioNewline _ref_tmp__chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  syserr call_tmp_chpl2;
  chpl____wide_locale ret_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_locale ret_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp_chpl4;
  chpl____wide_object tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t _autoCopy_tmp__chpl;
  chpl____wide_locale call_tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__wide_locale call_tmp_chpl6 = NULL;
  chpl_localeID_t call_tmp_chpl7;
  chpl____wide_locale tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_syserr tmp_chpl4 = NULL;
  _ref__tuple_3__ref_string_int64_t__ref_ioNewline tmp_chpl5 = NULL;
  channel_T_dynamic_T_chpl rvfDerefTmp_chpl;
  chpl____wide_locale rvfDerefTmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect_chpl;
  chpl____wide__ref_syserr tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__tuple_3__ref_string_int64_t__ref_ioNewline tmp_chpl7 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl50 _args_foron_fn_chpl = NULL;
  _ref_syserr tmp_chpl8 = NULL;
  chpl____wide__ref_syserr tmp_chpl9 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__tuple_3__ref_string_int64_t__ref_ioNewline tmp_chpl10 = NULL;
  chpl____wide__ref__tuple_3__ref_string_int64_t__ref_ioNewline tmp_chpl11 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  int32_t call_tmp_chpl8;
  chpl_bool call_tmp_chpl9;
  string call_tmp_chpl10;
  string ret_tmp_chpl2;
  _ref_string ret_to_arg_ref_tmp__chpl2 = NULL;
  string call_tmp_chpl11;
  string ret_tmp_chpl3;
  _ref_string ret_to_arg_ref_tmp__chpl3 = NULL;
  string call_tmp_chpl12;
  string ret_tmp_chpl4;
  _ref_string ret_to_arg_ref_tmp__chpl4 = NULL;
  _ref_string _ref_tmp__chpl3 = NULL;
  chpl____wide__ref_string tmp_chpl12 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp__chpl4 = NULL;
  chpl____wide__ref_string tmp_chpl13 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp__chpl5 = NULL;
  chpl____wide__ref_string tmp_chpl14 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_7755;
  chpl____wide_object chpl_macro_tmp_7756;
  chpl____wide__nilType chpl_macro_tmp_7757;
  chpl____wide_object chpl_macro_tmp_7758;
  chpl____wide__ref_syserr chpl_macro_tmp_7759;
  chpl____wide__ref__tuple_3__ref_string_int64_t__ref_ioNewline chpl_macro_tmp_7760;
  chpl__class_localson_fn_chpl50_object chpl_macro_tmp_7761;
  chpl____wide__ref_syserr chpl_macro_tmp_7762;
  chpl____wide__ref__tuple_3__ref_string_int64_t__ref_ioNewline chpl_macro_tmp_7763;
  chpl____wide__ref_string chpl_macro_tmp_7764;
  chpl____wide__ref_string chpl_macro_tmp_7765;
  chpl____wide__ref_string chpl_macro_tmp_7766;
  local__str_literal_411_chpl /* ")" */ = _str_literal_411 /* ")" */;
  local__str_literal_2617_chpl /* "in channel.write(" */ = _str_literal_2617 /* "in channel.write(" */;
  local__str_literal_2619_chpl /* "" */ = _str_literal_2619 /* "" */;
  local_c_sublocid_any_chpl = c_sublocid_any;
  (&this_chpl7)->skipWhitespaceOnly_chpl = UINT8(false);
  (&this_chpl7)->skipWhitespaceOnly_chpl = UINT8(false);
  ret_to_arg_ref_tmp__chpl = &ret_tmp_chpl;
  _construct_ioNewline_chpl(UINT8(false), &this_chpl7, ret_to_arg_ref_tmp__chpl);
  call_tmp_chpl = ret_tmp_chpl;
  qio_int_to_err(INT32(0));
  _ref_tmp__chpl = _e1_args_chpl;
  _ref_tmp__chpl2 = &call_tmp_chpl;
  chpl_macro_tmp_7755.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7755.addr = _ref_tmp__chpl;
  tmp_chpl = chpl_macro_tmp_7755;
  (&args_chpl)->x1 = tmp_chpl;
  (&args_chpl)->x2 = _e2_args_chpl;
  (&args_chpl)->x3 = _ref_tmp__chpl2;
  call_tmp_chpl2 = qio_int_to_err(INT32(0));
  _formal_tmp_error_chpl = call_tmp_chpl2;
  ret_chpl3 = (this_chpl6)->_readWriteThisFromLocale_chpl;
  ret_chpl2 = ret_chpl3;
  chpl_macro_tmp_7756.locale = (&ret_chpl3)->locale;
  chpl_macro_tmp_7756.addr = ((object)((&ret_chpl3)->addr));
  call_tmp_chpl3 = chpl_macro_tmp_7756;
  chpl_macro_tmp_7757.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7757.addr = nil;
  chpl_macro_tmp_7758.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_7758.addr = NULL;
  tmp_chpl2 = chpl_macro_tmp_7758;
  call_tmp_chpl4 = (! (((&call_tmp_chpl3)->addr != (&tmp_chpl2)->addr) || ((!(! (&call_tmp_chpl3)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp_chpl3)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&tmp_chpl2)->locale), INT64(0), INT32(0))))));
  if (call_tmp_chpl4) {
    _autoCopy_tmp__chpl = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any_chpl);
    call_tmp_chpl5 = chpl_localeID_to_locale(&_autoCopy_tmp__chpl);
    ret_chpl2 = call_tmp_chpl5;
  }
  call_tmp_chpl6 = &((this_chpl6)->home_chpl);
  tmp_chpl3 = *(call_tmp_chpl6);
  call_tmp_chpl7 = (&tmp_chpl3)->locale;
  tmp_chpl4 = &_formal_tmp_error_chpl;
  tmp_chpl5 = &args_chpl;
  rvfDerefTmp_chpl = *(this_chpl6);
  rvfDerefTmp_chpl2 = ret_chpl2;
  isdirect_chpl = chpl_doDirectExecuteOn(&call_tmp_chpl7);
  if (isdirect_chpl) {
    chpl_macro_tmp_7759.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7759.addr = tmp_chpl4;
    tmp_chpl6 = chpl_macro_tmp_7759;
    chpl_macro_tmp_7760.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7760.addr = tmp_chpl5;
    tmp_chpl7 = chpl_macro_tmp_7760;
    on_fn_chpl50(&rvfDerefTmp_chpl, tmp_chpl6, tmp_chpl7, rvfDerefTmp_chpl2);
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn_chpl50)(&chpl_macro_tmp_7761));
    (_args_foron_fn_chpl)->_0_rvfDerefTmp_chpl = call_tmp_chpl7;
    (_args_foron_fn_chpl)->_1_rvfDerefTmp_chpl = rvfDerefTmp_chpl;
    tmp_chpl8 = &_formal_tmp_error_chpl;
    chpl_macro_tmp_7762.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7762.addr = tmp_chpl8;
    tmp_chpl9 = chpl_macro_tmp_7762;
    (_args_foron_fn_chpl)->_2_tmp_chpl = tmp_chpl9;
    tmp_chpl10 = &args_chpl;
    chpl_macro_tmp_7763.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7763.addr = tmp_chpl10;
    tmp_chpl11 = chpl_macro_tmp_7763;
    (_args_foron_fn_chpl)->_3_tmp_chpl = tmp_chpl11;
    (_args_foron_fn_chpl)->_4_rvfDerefTmp_chpl = rvfDerefTmp_chpl2;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    /*** wrapon_fn_chpl51 ***/ chpl_executeOn(&call_tmp_chpl7, INT32(307), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), sizeof(chpl__class_localson_fn_chpl50_object), INT64(4613), INT32(71));
  }
  qio_err_iserr(_formal_tmp_error_chpl);
  call_tmp_chpl8 = qio_err_iserr(_formal_tmp_error_chpl);
  call_tmp_chpl9 = (call_tmp_chpl8 == INT32(0));
  if (call_tmp_chpl9) {
    ret_chpl = UINT8(true);
    goto _end_write_chpl;
  } else {
    ret_to_arg_ref_tmp__chpl2 = &ret_tmp_chpl2;
    _args_to_proto_chpl2(_e1_args_chpl, _e2_args_chpl, &call_tmp_chpl, &local__str_literal_2619_chpl /* "" */, ret_to_arg_ref_tmp__chpl2);
    call_tmp_chpl10 = ret_tmp_chpl2;
    ret_to_arg_ref_tmp__chpl3 = &ret_tmp_chpl3;
    chpl___PLUS_(&local__str_literal_2617_chpl /* "in channel.write(" */, &ret_tmp_chpl2, ret_to_arg_ref_tmp__chpl3);
    call_tmp_chpl11 = ret_tmp_chpl3;
    ret_to_arg_ref_tmp__chpl4 = &ret_tmp_chpl4;
    chpl___PLUS_(&ret_tmp_chpl3, &local__str_literal_411_chpl /* ")" */, ret_to_arg_ref_tmp__chpl4);
    call_tmp_chpl12 = ret_tmp_chpl4;
    _ch_ioerror_chpl2(this_chpl6, _formal_tmp_error_chpl, &ret_tmp_chpl4);
    ret_chpl = UINT8(false);
    _ref_tmp__chpl3 = &call_tmp_chpl12;
    chpl_macro_tmp_7764.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7764.addr = _ref_tmp__chpl3;
    tmp_chpl12 = chpl_macro_tmp_7764;
    deinit44(tmp_chpl12);
    _ref_tmp__chpl4 = &call_tmp_chpl11;
    chpl_macro_tmp_7765.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7765.addr = _ref_tmp__chpl4;
    tmp_chpl13 = chpl_macro_tmp_7765;
    deinit44(tmp_chpl13);
    _ref_tmp__chpl5 = &call_tmp_chpl10;
    chpl_macro_tmp_7766.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7766.addr = _ref_tmp__chpl5;
    tmp_chpl14 = chpl_macro_tmp_7766;
    deinit44(tmp_chpl14);
    goto _end_write_chpl;
  }
  _end_write_chpl:;
  return ret_chpl;
}

/* IO.chpl:4810 */
static void close_chpl4(_ref_channel_T_dynamic_F this_chpl6,
                        _ref_syserr error_chpl) {
  syserr _formal_tmp_error_chpl;
  syserr call_tmp_chpl;
  _ref__wide_locale call_tmp_chpl2 = NULL;
  chpl_localeID_t call_tmp_chpl3;
  chpl____wide_locale tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_syserr tmp_chpl2 = NULL;
  channel_T_dynamic_F_chpl rvfDerefTmp_chpl;
  chpl_bool isdirect_chpl;
  chpl____wide__ref_syserr tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl54 _args_foron_fn_chpl = NULL;
  _ref_syserr tmp_chpl4 = NULL;
  chpl____wide__ref_syserr tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  chpl____wide__ref_syserr chpl_macro_tmp_7767;
  chpl__class_localson_fn_chpl54_object chpl_macro_tmp_7768;
  chpl____wide__ref_syserr chpl_macro_tmp_7769;
  call_tmp_chpl = qio_int_to_err(INT32(0));
  _formal_tmp_error_chpl = call_tmp_chpl;
  call_tmp_chpl2 = &((this_chpl6)->home_chpl);
  tmp_chpl = *(call_tmp_chpl2);
  call_tmp_chpl3 = (&tmp_chpl)->locale;
  tmp_chpl2 = &_formal_tmp_error_chpl;
  rvfDerefTmp_chpl = *(this_chpl6);
  isdirect_chpl = chpl_doDirectExecuteOn(&call_tmp_chpl3);
  if (isdirect_chpl) {
    chpl_macro_tmp_7767.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7767.addr = tmp_chpl2;
    tmp_chpl3 = chpl_macro_tmp_7767;
    on_fn_chpl55(&rvfDerefTmp_chpl, tmp_chpl3);
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn_chpl54)(&chpl_macro_tmp_7768));
    (_args_foron_fn_chpl)->_0_rvfDerefTmp_chpl = call_tmp_chpl3;
    (_args_foron_fn_chpl)->_1_rvfDerefTmp_chpl = rvfDerefTmp_chpl;
    tmp_chpl4 = &_formal_tmp_error_chpl;
    chpl_macro_tmp_7769.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7769.addr = tmp_chpl4;
    tmp_chpl5 = chpl_macro_tmp_7769;
    (_args_foron_fn_chpl)->_2_tmp_chpl = tmp_chpl5;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    /*** wrapon_fn_chpl55 ***/ chpl_executeOn(&call_tmp_chpl3, INT32(311), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), sizeof(chpl__class_localson_fn_chpl54_object), INT64(4812), INT32(71));
  }
  *(error_chpl) = _formal_tmp_error_chpl;
  return;
}

/* IO.chpl:4810 */
static void close_chpl3(_ref_channel_F_dynamic_F this_chpl6,
                        _ref_syserr error_chpl) {
  syserr _formal_tmp_error_chpl;
  syserr call_tmp_chpl;
  _ref__wide_locale call_tmp_chpl2 = NULL;
  chpl_localeID_t call_tmp_chpl3;
  chpl____wide_locale tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_syserr tmp_chpl2 = NULL;
  channel_F_dynamic_F_chpl rvfDerefTmp_chpl;
  chpl_bool isdirect_chpl;
  chpl____wide__ref_syserr tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn_chpl55 _args_foron_fn_chpl = NULL;
  _ref_syserr tmp_chpl4 = NULL;
  chpl____wide__ref_syserr tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  chpl____wide__ref_syserr chpl_macro_tmp_7770;
  chpl__class_localson_fn_chpl55_object chpl_macro_tmp_7771;
  chpl____wide__ref_syserr chpl_macro_tmp_7772;
  call_tmp_chpl = qio_int_to_err(INT32(0));
  _formal_tmp_error_chpl = call_tmp_chpl;
  call_tmp_chpl2 = &((this_chpl6)->home_chpl);
  tmp_chpl = *(call_tmp_chpl2);
  call_tmp_chpl3 = (&tmp_chpl)->locale;
  tmp_chpl2 = &_formal_tmp_error_chpl;
  rvfDerefTmp_chpl = *(this_chpl6);
  isdirect_chpl = chpl_doDirectExecuteOn(&call_tmp_chpl3);
  if (isdirect_chpl) {
    chpl_macro_tmp_7770.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7770.addr = tmp_chpl2;
    tmp_chpl3 = chpl_macro_tmp_7770;
    on_fn_chpl54(&rvfDerefTmp_chpl, tmp_chpl3);
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn_chpl55)(&chpl_macro_tmp_7771));
    (_args_foron_fn_chpl)->_0_rvfDerefTmp_chpl = call_tmp_chpl3;
    (_args_foron_fn_chpl)->_1_rvfDerefTmp_chpl = rvfDerefTmp_chpl;
    tmp_chpl4 = &_formal_tmp_error_chpl;
    chpl_macro_tmp_7772.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7772.addr = tmp_chpl4;
    tmp_chpl5 = chpl_macro_tmp_7772;
    (_args_foron_fn_chpl)->_2_tmp_chpl = tmp_chpl5;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    /*** wrapon_fn_chpl54 ***/ chpl_executeOn(&call_tmp_chpl3, INT32(310), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), sizeof(chpl__class_localson_fn_chpl55_object), INT64(4812), INT32(71));
  }
  *(error_chpl) = _formal_tmp_error_chpl;
  return;
}

/* IO.chpl:4812 */
static void on_fn_chpl55(_ref_channel_T_dynamic_F this_chpl6,
                         chpl____wide__ref_syserr _formal_tmp_error_chpl) {
  syserr call_tmp_chpl;
  qio_channel_ptr_t coerce_tmp_chpl;
  qio_channel_ptr_t tmp_chpl;
  tmp_chpl = (this_chpl6)->_channel_internal_chpl;
  coerce_tmp_chpl = tmp_chpl;
  call_tmp_chpl = qio_channel_close(((int32_t)(UINT8(false))), coerce_tmp_chpl);
  chpl_gen_comm_put(((void*)(&call_tmp_chpl)), chpl_nodeFromLocaleID(&((_formal_tmp_error_chpl).locale), INT64(0), INT32(0)), (_formal_tmp_error_chpl).addr, sizeof(syserr), -1, COMMID(126), INT64(4813), INT64(71));
  return;
}

/* IO.chpl:4812 */
static void wrapon_fn_chpl55(_class_localson_fn_chpl54 c_chpl) {
  channel_T_dynamic_F_chpl _1_rvfDerefTmp_chpl;
  channel_T_dynamic_F_chpl tmp_chpl;
  chpl____wide__ref_syserr _2_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  tmp_chpl = (c_chpl)->_1_rvfDerefTmp_chpl;
  _1_rvfDerefTmp_chpl = tmp_chpl;
  _2_tmp_chpl = (c_chpl)->_2_tmp_chpl;
  on_fn_chpl55(&_1_rvfDerefTmp_chpl, _2_tmp_chpl);
  return;
}

/* IO.chpl:4812 */
static void on_fn_chpl54(_ref_channel_F_dynamic_F this_chpl6,
                         chpl____wide__ref_syserr _formal_tmp_error_chpl) {
  syserr call_tmp_chpl;
  qio_channel_ptr_t coerce_tmp_chpl;
  qio_channel_ptr_t tmp_chpl;
  tmp_chpl = (this_chpl6)->_channel_internal_chpl;
  coerce_tmp_chpl = tmp_chpl;
  call_tmp_chpl = qio_channel_close(((int32_t)(UINT8(false))), coerce_tmp_chpl);
  chpl_gen_comm_put(((void*)(&call_tmp_chpl)), chpl_nodeFromLocaleID(&((_formal_tmp_error_chpl).locale), INT64(0), INT32(0)), (_formal_tmp_error_chpl).addr, sizeof(syserr), -1, COMMID(127), INT64(4813), INT64(71));
  return;
}

/* IO.chpl:4812 */
static void wrapon_fn_chpl54(_class_localson_fn_chpl55 c_chpl) {
  channel_F_dynamic_F_chpl _1_rvfDerefTmp_chpl;
  channel_F_dynamic_F_chpl tmp_chpl;
  chpl____wide__ref_syserr _2_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  tmp_chpl = (c_chpl)->_1_rvfDerefTmp_chpl;
  _1_rvfDerefTmp_chpl = tmp_chpl;
  _2_tmp_chpl = (c_chpl)->_2_tmp_chpl;
  on_fn_chpl54(&_1_rvfDerefTmp_chpl, _2_tmp_chpl);
  return;
}

/* IO.chpl:4818 */
static void close_chpl6(_ref_channel_T_dynamic_F this_chpl6) {
  string local__str_literal_2631_chpl;
  syserr e_chpl;
  syserr call_tmp_chpl;
  _ref_syserr _ref_tmp__chpl = NULL;
  int32_t call_tmp_chpl2;
  chpl_bool call_tmp_chpl3;
  chpl____wide__ref_channel_T_dynamic_F tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_channel_T_dynamic_F chpl_macro_tmp_7773;
  local__str_literal_2631_chpl /* "in channel.close" */ = _str_literal_2631 /* "in channel.close" */;
  call_tmp_chpl = qio_int_to_err(INT32(0));
  e_chpl = call_tmp_chpl;
  _ref_tmp__chpl = &e_chpl;
  close_chpl4(this_chpl6, _ref_tmp__chpl);
  call_tmp_chpl2 = qio_err_iserr(e_chpl);
  call_tmp_chpl3 = (call_tmp_chpl2 != INT32(0));
  if (call_tmp_chpl3) {
    chpl_macro_tmp_7773.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7773.addr = this_chpl6;
    tmp_chpl = chpl_macro_tmp_7773;
    _ch_ioerror_chpl3(tmp_chpl, e_chpl, &local__str_literal_2631_chpl /* "in channel.close" */);
  }
  return;
}

/* IO.chpl:4818 */
static void close_chpl5(_ref_channel_F_dynamic_F this_chpl6) {
  string local__str_literal_2631_chpl;
  syserr e_chpl;
  syserr call_tmp_chpl;
  _ref_syserr _ref_tmp__chpl = NULL;
  int32_t call_tmp_chpl2;
  chpl_bool call_tmp_chpl3;
  local__str_literal_2631_chpl /* "in channel.close" */ = _str_literal_2631 /* "in channel.close" */;
  call_tmp_chpl = qio_int_to_err(INT32(0));
  e_chpl = call_tmp_chpl;
  _ref_tmp__chpl = &e_chpl;
  close_chpl3(this_chpl6, _ref_tmp__chpl);
  call_tmp_chpl2 = qio_err_iserr(e_chpl);
  call_tmp_chpl3 = (call_tmp_chpl2 != INT32(0));
  if (call_tmp_chpl3) {
    _ch_ioerror_chpl(this_chpl6, e_chpl, &local__str_literal_2631_chpl /* "in channel.close" */);
  }
  return;
}

/* IO.chpl:4840 */
static void readBytes_chpl(_ref_channel_F_dynamic_F this_chpl6,
                           c_ptr_uint8_t x_chpl,
                           int64_t len_chpl,
                           _ref_syserr error_chpl) {
  string local__str_literal_2633_chpl;
  int32_t local_c_sublocid_any_chpl;
  chpl_localeID_t _autoCopy_tmp__chpl;
  chpl____wide_locale call_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_locale coerce_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp_chpl4;
  syserr call_tmp_chpl5;
  qio_channel_ptr_t coerce_tmp_chpl2;
  qio_channel_ptr_t tmp_chpl;
  chpl____wide_object chpl_macro_tmp_7774;
  chpl____wide_object chpl_macro_tmp_7775;
  local__str_literal_2633_chpl /* "bad remote channel.readBytes" */ = _str_literal_2633 /* "bad remote channel.readBytes" */;
  local_c_sublocid_any_chpl = c_sublocid_any;
  qio_int_to_err(INT32(0));
  _autoCopy_tmp__chpl = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any_chpl);
  call_tmp_chpl = chpl_localeID_to_locale(&_autoCopy_tmp__chpl);
  chpl_macro_tmp_7774.locale = (&call_tmp_chpl)->locale;
  chpl_macro_tmp_7774.addr = ((object)((&call_tmp_chpl)->addr));
  call_tmp_chpl2 = chpl_macro_tmp_7774;
  coerce_tmp_chpl = (this_chpl6)->home_chpl;
  chpl_macro_tmp_7775.locale = (&coerce_tmp_chpl)->locale;
  chpl_macro_tmp_7775.addr = ((object)((&coerce_tmp_chpl)->addr));
  call_tmp_chpl3 = chpl_macro_tmp_7775;
  call_tmp_chpl4 = (((&call_tmp_chpl2)->addr != (&call_tmp_chpl3)->addr) || ((!(! (&call_tmp_chpl2)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp_chpl2)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&call_tmp_chpl3)->locale), INT64(0), INT32(0)))));
  if (call_tmp_chpl4) {
    halt(&local__str_literal_2633_chpl /* "bad remote channel.readBytes" */, INT64(4842), INT32(71));
  }
  tmp_chpl = (this_chpl6)->_channel_internal_chpl;
  coerce_tmp_chpl2 = tmp_chpl;
  call_tmp_chpl5 = qio_channel_read_amt(((int32_t)(UINT8(false))), coerce_tmp_chpl2, x_chpl, len_chpl);
  *(error_chpl) = call_tmp_chpl5;
  return;
}

/* IO.chpl:4847 */
static void readBytes_chpl2(_ref_channel_F_dynamic_F this_chpl6,
                            c_ptr_uint8_t x_chpl,
                            int64_t len_chpl) {
  string local__str_literal_2635_chpl;
  syserr e_chpl;
  syserr call_tmp_chpl;
  _ref_syserr _ref_tmp__chpl = NULL;
  int32_t call_tmp_chpl2;
  chpl_bool call_tmp_chpl3;
  local__str_literal_2635_chpl /* "in channel.readBytes" */ = _str_literal_2635 /* "in channel.readBytes" */;
  call_tmp_chpl = qio_int_to_err(INT32(0));
  e_chpl = call_tmp_chpl;
  _ref_tmp__chpl = &e_chpl;
  readBytes_chpl(this_chpl6, x_chpl, len_chpl, _ref_tmp__chpl);
  call_tmp_chpl2 = qio_err_iserr(e_chpl);
  call_tmp_chpl3 = (call_tmp_chpl2 != INT32(0));
  if (call_tmp_chpl3) {
    _ch_ioerror_chpl(this_chpl6, e_chpl, &local__str_literal_2635_chpl /* "in channel.readBytes" */);
  }
  return;
}

/* IO.chpl:4961 */
static void writeln_chpl4(_ref_string _e1_args_chpl) {
  writeln_chpl3(&stdout_chpl, _e1_args_chpl);
  return;
}

/* IO.chpl:4961 */
static void writeln_chpl6(_ref_string _e1_args_chpl,
                          int64_t _e2_args_chpl,
                          _ref_string _e3_args_chpl,
                          _ref__tuple_2_chpl_bool_int64_t _e4_args_chpl) {
  writeln_chpl2(&stdout_chpl, _e1_args_chpl, _e2_args_chpl, _e3_args_chpl, _e4_args_chpl);
  return;
}

/* IO.chpl:4961 */
static void writeln_chpl5(_ref_string _e1_args_chpl,
                          int64_t _e2_args_chpl) {
  writeln_chpl(&stdout_chpl, _e1_args_chpl, _e2_args_chpl);
  return;
}

