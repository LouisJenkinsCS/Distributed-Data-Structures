/* ChapelIO.chpl:199 */
static void chpl__init_ChapelIO(int64_t _ln,
                                int32_t _fn) {
  _ref_int32_t refIndentLevel = NULL;
  if (chpl__init_ChapelIO_p) {
    goto _exit_chpl__init_ChapelIO;
  }
  printModuleInit("%*s\n", "ChapelIO", INT64(8));
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_ChapelIO_p = UINT8(true);
  {
    chpl__init_ChapelBase(INT64(199), INT32(30));
    chpl__init_SysBasic(INT64(199), INT32(30));
    chpl__init_IO(INT64(199), INT32(30));
  }
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_ChapelIO:;
  return;
}

/* ChapelIO.chpl:672 */
static void halt(_ref_string s,
                 int64_t _ln,
                 int32_t _fn) {
  string local__str_literal_337;
  string call_tmp2;
  string ret;
  int32_t coerce_tmp;
  chpl_bool call_tmp3;
  string ret_tmp;
  _ref_string ret_to_arg_ref_tmp_ = NULL;
  _ref_string i_s = NULL;
  chpl____wide__ref_string T = {CHPL_LOCALEID_T_INIT, NULL};
  string type_tmp;
  string this12;
  c_ptr_uint8_t call_tmp4 = NULL;
  int32_t default_arglocale_id;
  string ret_tmp2;
  _ref_string ret_to_arg_ref_tmp_2 = NULL;
  _ref_string _ref_tmp_ = NULL;
  _ref_string i_rhs = NULL;
  chpl____wide__ref_string T2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string T3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp5;
  c_ptr_uint8_t coerce_tmp2 = NULL;
  _ref_string _ref_tmp_2 = NULL;
  chpl____wide__ref_string T4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_4496;
  chpl____wide__ref_string chpl_macro_tmp_4497;
  chpl____wide__ref_string chpl_macro_tmp_4498;
  chpl____wide__ref_string chpl_macro_tmp_4499;
  local__str_literal_337 /* "Cannot call .c_str() on a remote string" */ = _str_literal_337 /* "Cannot call .c_str() on a remote string" */;
  coerce_tmp = (s)->locale_id;
  call_tmp3 = (coerce_tmp == chpl_nodeID);
  if (call_tmp3) {
    ret_to_arg_ref_tmp_ = &ret_tmp;
    i_s = s;
    chpl_macro_tmp_4496.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_4496.addr = i_s;
    T = chpl_macro_tmp_4496;
    string2(T, UINT8(false), ret_to_arg_ref_tmp_);
    ret = ret_tmp;
    goto _end_localize;
  } else {
    (&this12)->len = INT64(0);
    (&this12)->_size = INT64(0);
    (&this12)->buff = nil;
    (&this12)->owned = UINT8(false);
    (&this12)->locale_id = INT32(0);
    (&this12)->len = INT64(0);
    (&this12)->_size = INT64(0);
    call_tmp4 = ((c_ptr_uint8_t)(nil));
    (&this12)->buff = call_tmp4;
    (&this12)->owned = UINT8(true);
    default_arglocale_id = chpl_nodeID;
    (&this12)->locale_id = default_arglocale_id;
    ret_to_arg_ref_tmp_2 = &ret_tmp2;
    _construct_string(INT64(0), INT64(0), call_tmp4, UINT8(true), default_arglocale_id, &this12, ret_to_arg_ref_tmp_2);
    type_tmp = ret_tmp2;
    _ref_tmp_ = &type_tmp;
    i_rhs = s;
    chpl_macro_tmp_4497.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_4497.addr = _ref_tmp_;
    T2 = chpl_macro_tmp_4497;
    chpl_macro_tmp_4498.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_4498.addr = i_rhs;
    T3 = chpl_macro_tmp_4498;
    chpl___ASSIGN_13(T2, T3);
    ret = type_tmp;
    goto _end_localize;
  }
  _end_localize:;
  call_tmp2 = ret;
  call_tmp5 = ((&call_tmp2)->locale_id != chpl_nodeID);
  if (call_tmp5) {
    halt(&local__str_literal_337 /* "Cannot call .c_str() on a remote string" */, _ln, _fn);
  }
  coerce_tmp2 = (&call_tmp2)->buff;
  halt5(((c_string)(((c_void_ptr)(coerce_tmp2)))), _ln, _fn);
  _ref_tmp_2 = &call_tmp2;
  chpl_macro_tmp_4499.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_4499.addr = _ref_tmp_2;
  T4 = chpl_macro_tmp_4499;
  deinit44(T4);
  return;
}

/* ChapelIO.chpl:682 */
static void halt5(c_string _e1_args,
                  int64_t _ln,
                  int32_t _fn) {
  string local__str_literal_337;
  string local__str_literal_1675;
  string tmpstring;
  string call_tmp2;
  string ret_tmp;
  _ref_string ret_to_arg_ref_tmp_ = NULL;
  string ret_tmp2;
  _ref_string ret_to_arg_ref_tmp_2 = NULL;
  int32_t coerce_tmp;
  chpl_bool call_tmp3;
  _ref_string _ref_tmp_ = NULL;
  chpl____wide__ref_string T = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp_2 = NULL;
  chpl____wide__ref_string T2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_4500;
  chpl____wide__ref_string chpl_macro_tmp_4501;
  local__str_literal_337 /* "Cannot call .c_str() on a remote string" */ = _str_literal_337 /* "Cannot call .c_str() on a remote string" */;
  local__str_literal_1675 /* "halt reached - " */ = _str_literal_1675 /* "halt reached - " */;
  ret_to_arg_ref_tmp_ = &ret_tmp;
  stringify_chpl3(_e1_args, ret_to_arg_ref_tmp_);
  call_tmp2 = ret_tmp;
  ret_to_arg_ref_tmp_2 = &ret_tmp2;
  chpl___PLUS_(&local__str_literal_1675 /* "halt reached - " */, &ret_tmp, ret_to_arg_ref_tmp_2);
  tmpstring = ret_tmp2;
  coerce_tmp = (&tmpstring)->locale_id;
  call_tmp3 = (coerce_tmp != chpl_nodeID);
  if (call_tmp3) {
    halt(&local__str_literal_337 /* "Cannot call .c_str() on a remote string" */, _ln, _fn);
  }
  chpl_error(((c_string)(((c_void_ptr)((&tmpstring)->buff)))), _ln, _fn);
  _ref_tmp_ = &call_tmp2;
  chpl_macro_tmp_4500.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_4500.addr = _ref_tmp_;
  T = chpl_macro_tmp_4500;
  deinit44(T);
  _ref_tmp_2 = &tmpstring;
  chpl_macro_tmp_4501.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_4501.addr = _ref_tmp_2;
  T2 = chpl_macro_tmp_4501;
  deinit44(T2);
  return;
}

/* ChapelIO.chpl:682 */
static void halt3(_ref_string _e1_args,
                  int64_t _e2_args,
                  _ref_string _e3_args,
                  int64_t _e4_args,
                  _ref_string _e5_args,
                  int64_t _e6_args,
                  _ref_string _e7_args,
                  int64_t _ln,
                  int32_t _fn) {
  string local__str_literal_337;
  string local__str_literal_1675;
  string tmpstring;
  string call_tmp2;
  string ret_tmp;
  _ref_string ret_to_arg_ref_tmp_ = NULL;
  string ret_tmp2;
  _ref_string ret_to_arg_ref_tmp_2 = NULL;
  int32_t coerce_tmp;
  chpl_bool call_tmp3;
  c_ptr_uint8_t coerce_tmp2 = NULL;
  _ref_string _ref_tmp_ = NULL;
  chpl____wide__ref_string T = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp_2 = NULL;
  chpl____wide__ref_string T2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_4502;
  chpl____wide__ref_string chpl_macro_tmp_4503;
  local__str_literal_337 /* "Cannot call .c_str() on a remote string" */ = _str_literal_337 /* "Cannot call .c_str() on a remote string" */;
  local__str_literal_1675 /* "halt reached - " */ = _str_literal_1675 /* "halt reached - " */;
  ret_to_arg_ref_tmp_ = &ret_tmp;
  stringify_chpl4(_e1_args, _e2_args, _e3_args, _e4_args, _e5_args, _e6_args, _e7_args, ret_to_arg_ref_tmp_);
  call_tmp2 = ret_tmp;
  ret_to_arg_ref_tmp_2 = &ret_tmp2;
  chpl___PLUS_(&local__str_literal_1675 /* "halt reached - " */, &ret_tmp, ret_to_arg_ref_tmp_2);
  tmpstring = ret_tmp2;
  coerce_tmp = (&tmpstring)->locale_id;
  call_tmp3 = (coerce_tmp != chpl_nodeID);
  if (call_tmp3) {
    halt(&local__str_literal_337 /* "Cannot call .c_str() on a remote string" */, _ln, _fn);
  }
  coerce_tmp2 = (&tmpstring)->buff;
  chpl_error(((c_string)(((c_void_ptr)(coerce_tmp2)))), _ln, _fn);
  _ref_tmp_ = &call_tmp2;
  chpl_macro_tmp_4502.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_4502.addr = _ref_tmp_;
  T = chpl_macro_tmp_4502;
  deinit44(T);
  _ref_tmp_2 = &tmpstring;
  chpl_macro_tmp_4503.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_4503.addr = _ref_tmp_2;
  T2 = chpl_macro_tmp_4503;
  deinit44(T2);
  return;
}

/* ChapelIO.chpl:682 */
static void halt4(_ref_string _e1_args,
                  int64_t _e2_args,
                  int64_t _ln,
                  int32_t _fn) {
  string local__str_literal_337;
  string local__str_literal_1675;
  string tmpstring;
  string call_tmp2;
  string ret_tmp;
  _ref_string ret_to_arg_ref_tmp_ = NULL;
  string ret_tmp2;
  _ref_string ret_to_arg_ref_tmp_2 = NULL;
  int32_t coerce_tmp;
  chpl_bool call_tmp3;
  c_ptr_uint8_t coerce_tmp2 = NULL;
  _ref_string _ref_tmp_ = NULL;
  chpl____wide__ref_string T = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp_2 = NULL;
  chpl____wide__ref_string T2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_4504;
  chpl____wide__ref_string chpl_macro_tmp_4505;
  local__str_literal_337 /* "Cannot call .c_str() on a remote string" */ = _str_literal_337 /* "Cannot call .c_str() on a remote string" */;
  local__str_literal_1675 /* "halt reached - " */ = _str_literal_1675 /* "halt reached - " */;
  ret_to_arg_ref_tmp_ = &ret_tmp;
  stringify_chpl5(_e1_args, _e2_args, ret_to_arg_ref_tmp_);
  call_tmp2 = ret_tmp;
  ret_to_arg_ref_tmp_2 = &ret_tmp2;
  chpl___PLUS_(&local__str_literal_1675 /* "halt reached - " */, &ret_tmp, ret_to_arg_ref_tmp_2);
  tmpstring = ret_tmp2;
  coerce_tmp = (&tmpstring)->locale_id;
  call_tmp3 = (coerce_tmp != chpl_nodeID);
  if (call_tmp3) {
    halt(&local__str_literal_337 /* "Cannot call .c_str() on a remote string" */, _ln, _fn);
  }
  coerce_tmp2 = (&tmpstring)->buff;
  chpl_error(((c_string)(((c_void_ptr)(coerce_tmp2)))), _ln, _fn);
  _ref_tmp_ = &call_tmp2;
  chpl_macro_tmp_4504.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_4504.addr = _ref_tmp_;
  T = chpl_macro_tmp_4504;
  deinit44(T);
  _ref_tmp_2 = &tmpstring;
  chpl_macro_tmp_4505.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_4505.addr = _ref_tmp_2;
  T2 = chpl_macro_tmp_4505;
  deinit44(T2);
  return;
}

/* ChapelIO.chpl:682 */
static void halt2(_ref_string _e1_args,
                  chpl____wide__ref__wide__array_DefaultRectangularArr_uint64_t_1_int64_t_F_int64_t _e2_args,
                  int64_t _ln,
                  int32_t _fn) {
  string local__str_literal_337;
  string local__str_literal_1675;
  string tmpstring;
  string call_tmp2;
  string ret_tmp;
  _ref_string ret_to_arg_ref_tmp_ = NULL;
  string ret_tmp2;
  _ref_string ret_to_arg_ref_tmp_2 = NULL;
  int32_t coerce_tmp;
  chpl_bool call_tmp3;
  _ref_string _ref_tmp_ = NULL;
  chpl____wide__ref_string T = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp_2 = NULL;
  chpl____wide__ref_string T2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_4506;
  chpl____wide__ref_string chpl_macro_tmp_4507;
  local__str_literal_337 /* "Cannot call .c_str() on a remote string" */ = _str_literal_337 /* "Cannot call .c_str() on a remote string" */;
  local__str_literal_1675 /* "halt reached - " */ = _str_literal_1675 /* "halt reached - " */;
  ret_to_arg_ref_tmp_ = &ret_tmp;
  stringify_chpl(_e1_args, _e2_args, ret_to_arg_ref_tmp_);
  call_tmp2 = ret_tmp;
  ret_to_arg_ref_tmp_2 = &ret_tmp2;
  chpl___PLUS_(&local__str_literal_1675 /* "halt reached - " */, &ret_tmp, ret_to_arg_ref_tmp_2);
  tmpstring = ret_tmp2;
  coerce_tmp = (&tmpstring)->locale_id;
  call_tmp3 = (coerce_tmp != chpl_nodeID);
  if (call_tmp3) {
    halt(&local__str_literal_337 /* "Cannot call .c_str() on a remote string" */, _ln, _fn);
  }
  chpl_error(((c_string)(((c_void_ptr)((&tmpstring)->buff)))), _ln, _fn);
  _ref_tmp_ = &call_tmp2;
  chpl_macro_tmp_4506.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_4506.addr = _ref_tmp_;
  T = chpl_macro_tmp_4506;
  deinit44(T);
  _ref_tmp_2 = &tmpstring;
  chpl_macro_tmp_4507.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_4507.addr = _ref_tmp_2;
  T2 = chpl_macro_tmp_4507;
  deinit44(T2);
  return;
}

