/* StringCasts.chpl:20 */
static void chpl__init_StringCasts(int64_t _ln,
                                   int32_t _fn) {
  _ref_int32_t refIndentLevel = NULL;
  if (chpl__init_StringCasts_p) {
    goto _exit_chpl__init_StringCasts;
  }
  printModuleInit("%*s\n", "StringCasts", INT64(11));
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_StringCasts_p = UINT8(true);
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_StringCasts:;
  return;
}

/* StringCasts.chpl:46 */
static chpl_bool _cast2(_ref_string x) {
  string local__str_literal_854;
  string local__str_literal_1869;
  string local__str_literal_1867;
  string local__str_literal_563;
  chpl_bool ret;
  string str;
  string ret_tmp;
  _ref_string ret_to_arg_ref_tmp_ = NULL;
  _ref_string i_chars = NULL;
  chpl_bool call_tmp2;
  _ref_string _ref_tmp_ = NULL;
  chpl____wide__ref_string T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp3;
  _ref_string _ref_tmp_2 = NULL;
  chpl____wide__ref_string T2 = {CHPL_LOCALEID_T_INIT, NULL};
  string call_tmp4;
  string ret_tmp2;
  _ref_string ret_to_arg_ref_tmp_2 = NULL;
  string call_tmp5;
  string ret_tmp3;
  _ref_string ret_to_arg_ref_tmp_3 = NULL;
  _ref_string _ref_tmp_3 = NULL;
  chpl____wide__ref_string T3 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp_4 = NULL;
  chpl____wide__ref_string T4 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp_5 = NULL;
  chpl____wide__ref_string T5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_5366;
  chpl____wide__ref_string chpl_macro_tmp_5367;
  chpl____wide__ref_string chpl_macro_tmp_5368;
  chpl____wide__ref_string chpl_macro_tmp_5369;
  chpl____wide__ref_string chpl_macro_tmp_5370;
  local__str_literal_854 /* "'" */ = _str_literal_854 /* "'" */;
  local__str_literal_1869 /* "Unexpected value when converting from string to bool: '" */ = _str_literal_1869 /* "Unexpected value when converting from string to bool: '" */;
  local__str_literal_1867 /* "false" */ = _str_literal_1867 /* "false" */;
  local__str_literal_563 /* "true" */ = _str_literal_563 /* "true" */;
  ret_to_arg_ref_tmp_ = &ret_tmp;
  i_chars = &_str_literal_370 /* " \t\r\n" */;
  strip(x, i_chars, UINT8(true), UINT8(true), ret_to_arg_ref_tmp_);
  str = ret_tmp;
  call_tmp2 = chpl___EQUALS__(&ret_tmp, &local__str_literal_563 /* "true" */);
  if (call_tmp2) {
    ret = UINT8(true);
    _ref_tmp_ = &str;
    chpl_macro_tmp_5366.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5366.addr = _ref_tmp_;
    T = chpl_macro_tmp_5366;
    deinit44(T);
    goto _end__cast;
  } else {
    call_tmp3 = chpl___EQUALS__(&ret_tmp, &local__str_literal_1867 /* "false" */);
    if (call_tmp3) {
      ret = UINT8(false);
      _ref_tmp_2 = &str;
      chpl_macro_tmp_5367.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_5367.addr = _ref_tmp_2;
      T2 = chpl_macro_tmp_5367;
      deinit44(T2);
      goto _end__cast;
    } else {
      ret_to_arg_ref_tmp_2 = &ret_tmp2;
      chpl___PLUS_(&local__str_literal_1869 /* "Unexpected value when converting from string to bool: '" */, x, ret_to_arg_ref_tmp_2);
      call_tmp4 = ret_tmp2;
      ret_to_arg_ref_tmp_3 = &ret_tmp3;
      chpl___PLUS_(&ret_tmp2, &local__str_literal_854 /* "'" */, ret_to_arg_ref_tmp_3);
      call_tmp5 = ret_tmp3;
      halt(&ret_tmp3, INT64(53), INT32(42));
      _ref_tmp_3 = &call_tmp4;
      chpl_macro_tmp_5368.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_5368.addr = _ref_tmp_3;
      T3 = chpl_macro_tmp_5368;
      deinit44(T3);
      _ref_tmp_4 = &call_tmp5;
      chpl_macro_tmp_5369.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_5369.addr = _ref_tmp_4;
      T4 = chpl_macro_tmp_5369;
      deinit44(T4);
    }
  }
  _ref_tmp_5 = &str;
  chpl_macro_tmp_5370.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5370.addr = _ref_tmp_5;
  T5 = chpl_macro_tmp_5370;
  deinit44(T5);
  _end__cast:;
  return ret;
}

/* StringCasts.chpl:60 */
static void _cast3(int64_t x,
                   _ref_string _retArg) {
  c_string_copy call_tmp2;
  string ret;
  string this12;
  c_ptr_uint8_t call_tmp3 = NULL;
  int32_t default_arglocale_id;
  string ret_tmp;
  _ref_string ret_to_arg_ref_tmp_ = NULL;
  uint64_t call_tmp4;
  int64_t coerce_tmp;
  call_tmp2 = integral_to_c_string_copy(x, ((uint32_t)(INT64(8))), UINT8(true));
  (&this12)->len = INT64(0);
  (&this12)->_size = INT64(0);
  (&this12)->buff = nil;
  (&this12)->owned = UINT8(false);
  (&this12)->locale_id = INT32(0);
  (&this12)->len = INT64(0);
  (&this12)->_size = INT64(0);
  call_tmp3 = ((c_ptr_uint8_t)(nil));
  (&this12)->buff = call_tmp3;
  (&this12)->owned = UINT8(true);
  default_arglocale_id = chpl_nodeID;
  (&this12)->locale_id = default_arglocale_id;
  ret_to_arg_ref_tmp_ = &ret_tmp;
  _construct_string(INT64(0), INT64(0), call_tmp3, UINT8(true), default_arglocale_id, &this12, ret_to_arg_ref_tmp_);
  ret = ret_tmp;
  (&ret)->buff = ((c_ptr_uint8_t)(call_tmp2));
  call_tmp4 = strlen(call_tmp2);
  (&ret)->len = ((int64_t)(call_tmp4));
  coerce_tmp = (&ret)->len;
  (&ret)->_size = ((int64_t)((coerce_tmp + INT64(1))));
  *(_retArg) = ret;
  return;
}

