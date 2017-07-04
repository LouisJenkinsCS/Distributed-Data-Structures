/* Assert.chpl:31 */
static void chpl__init_Assert(int64_t _ln_chpl,
                              int32_t _fn_chpl) {
  _ref_int32_t refIndentLevel_chpl = NULL;
  if (chpl__init_Assert_p) {
    goto _exit_chpl__init_Assert_chpl;
  }
  printModuleInit("%*s\n", "Assert", INT64(6));
  refIndentLevel_chpl = &moduleInitLevel;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_Assert_p = UINT8(true);
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_Assert_chpl:;
  return;
}

/* Assert.chpl:41 */
static void assert_chpl(chpl_bool test_chpl) {
  chpl_bool call_tmp_chpl;
  call_tmp_chpl = (! test_chpl);
  if (call_tmp_chpl) {
    chpl_error("assert failed", INT64(43), INT32(63));
  }
  return;
}

/* Assert.chpl:57 */
static void assert_chpl2(chpl_bool test_chpl,
                         _ref_string _e1_args_chpl) {
  string local__str_literal_337_chpl;
  string local__str_literal_47_chpl;
  chpl_bool call_tmp_chpl;
  string tmpstring_chpl;
  string call_tmp_chpl2;
  string ret_tmp_chpl;
  _ref_string ret_to_arg_ref_tmp__chpl = NULL;
  string ret_tmp_chpl2;
  _ref_string ret_to_arg_ref_tmp__chpl2 = NULL;
  int32_t coerce_tmp_chpl;
  chpl_bool call_tmp_chpl3;
  _ref_string _ref_tmp__chpl = NULL;
  chpl____wide__ref_string tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp__chpl2 = NULL;
  chpl____wide__ref_string tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_7202;
  chpl____wide__ref_string chpl_macro_tmp_7203;
  local__str_literal_337_chpl /* "Cannot call .c_str() on a remote string" */ = _str_literal_337 /* "Cannot call .c_str() on a remote string" */;
  local__str_literal_47_chpl /* "assert failed - " */ = _str_literal_47 /* "assert failed - " */;
  call_tmp_chpl = (! test_chpl);
  if (call_tmp_chpl) {
    ret_to_arg_ref_tmp__chpl = &ret_tmp_chpl;
    stringify_chpl2(_e1_args_chpl, ret_to_arg_ref_tmp__chpl);
    call_tmp_chpl2 = ret_tmp_chpl;
    ret_to_arg_ref_tmp__chpl2 = &ret_tmp_chpl2;
    chpl___PLUS_(&local__str_literal_47_chpl /* "assert failed - " */, &ret_tmp_chpl, ret_to_arg_ref_tmp__chpl2);
    tmpstring_chpl = ret_tmp_chpl2;
    coerce_tmp_chpl = (&tmpstring_chpl)->locale_id;
    call_tmp_chpl3 = (coerce_tmp_chpl != chpl_nodeID);
    if (call_tmp_chpl3) {
      halt(&local__str_literal_337_chpl /* "Cannot call .c_str() on a remote string" */, INT64(60), INT32(63));
    }
    chpl_error(((c_string)(((c_void_ptr)((&tmpstring_chpl)->buff)))), INT64(60), INT32(63));
    _ref_tmp__chpl = &tmpstring_chpl;
    chpl_macro_tmp_7202.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7202.addr = _ref_tmp__chpl;
    tmp_chpl = chpl_macro_tmp_7202;
    deinit44(tmp_chpl);
    _ref_tmp__chpl2 = &call_tmp_chpl2;
    chpl_macro_tmp_7203.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7203.addr = _ref_tmp__chpl2;
    tmp_chpl2 = chpl_macro_tmp_7203;
    deinit44(tmp_chpl2);
  }
  return;
}

