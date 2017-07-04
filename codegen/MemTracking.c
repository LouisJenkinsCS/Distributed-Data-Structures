/* MemTracking.chpl:22 */
static void chpl__init_MemTracking(int64_t _ln,
                                   int32_t _fn) {
  _ref_int32_t refIndentLevel = NULL;
  chpl_bool T;
  chpl_bool call_tmp2;
  chpl_bool call_tmp3;
  c_string call_tmp4;
  chpl_bool T2;
  chpl_bool call_tmp5;
  chpl_bool call_tmp6;
  c_string call_tmp7;
  chpl_bool T3;
  chpl_bool call_tmp8;
  chpl_bool call_tmp9;
  c_string call_tmp10;
  chpl_bool T4;
  chpl_bool call_tmp11;
  chpl_bool call_tmp12;
  c_string call_tmp13;
  uint64_t T5;
  chpl_bool call_tmp14;
  chpl_bool call_tmp15;
  c_string call_tmp16;
  uint64_t T6;
  chpl_bool call_tmp17;
  chpl_bool call_tmp18;
  c_string call_tmp19;
  string T7;
  chpl_bool call_tmp20;
  chpl_bool call_tmp21;
  string this12;
  c_ptr_uint8_t call_tmp22 = NULL;
  int32_t default_arglocale_id;
  string ret_tmp;
  _ref_string ret_to_arg_ref_tmp_ = NULL;
  c_string call_tmp23;
  string ret_tmp2;
  _ref_string ret_to_arg_ref_tmp_2 = NULL;
  string T8;
  chpl_bool call_tmp24;
  chpl_bool call_tmp25;
  string this13;
  c_ptr_uint8_t call_tmp26 = NULL;
  int32_t default_arglocale_id2;
  string ret_tmp3;
  _ref_string ret_to_arg_ref_tmp_3 = NULL;
  c_string call_tmp27;
  string ret_tmp4;
  _ref_string ret_to_arg_ref_tmp_4 = NULL;
  string T9;
  chpl_bool call_tmp28;
  chpl_bool call_tmp29;
  string this14;
  c_ptr_uint8_t call_tmp30 = NULL;
  int32_t default_arglocale_id3;
  string ret_tmp5;
  _ref_string ret_to_arg_ref_tmp_5 = NULL;
  c_string call_tmp31;
  string ret_tmp6;
  _ref_string ret_to_arg_ref_tmp_6 = NULL;
  chpl____wide__ref_string chpl_macro_tmp_5316;
  chpl____wide__ref_string chpl_macro_tmp_5317;
  chpl____wide__ref_string chpl_macro_tmp_5318;
  if (chpl__init_MemTracking_p) {
    goto _exit_chpl__init_MemTracking;
  }
  printModuleInit("%*s\n", "MemTracking", INT64(11));
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_MemTracking_p = UINT8(true);
  chpl_addModule("MemTracking", ((c_fn_ptr)(chpl__deinit_MemTracking)));
  call_tmp2 = chpl_config_has_value("memTrack", "Built-in");
  call_tmp3 = (! call_tmp2);
  if (call_tmp3) {
    T = UINT8(false);
  } else {
    call_tmp4 = chpl_config_get_value("memTrack", "Built-in");
    T = _command_line_cast16(call_tmp4);
  }
  memTrack = T;
  chpl_comm_broadcast_private(INT64(23), sizeof(chpl_bool), -1);
  call_tmp5 = chpl_config_has_value("memStats", "Built-in");
  call_tmp6 = (! call_tmp5);
  if (call_tmp6) {
    T2 = UINT8(false);
  } else {
    call_tmp7 = chpl_config_get_value("memStats", "Built-in");
    T2 = _command_line_cast14(call_tmp7);
  }
  memStats = T2;
  chpl_comm_broadcast_private(INT64(24), sizeof(chpl_bool), -1);
  call_tmp8 = chpl_config_has_value("memLeaksByType", "Built-in");
  call_tmp9 = (! call_tmp8);
  if (call_tmp9) {
    T3 = UINT8(false);
  } else {
    call_tmp10 = chpl_config_get_value("memLeaksByType", "Built-in");
    T3 = _command_line_cast7(call_tmp10);
  }
  memLeaksByType = T3;
  chpl_comm_broadcast_private(INT64(25), sizeof(chpl_bool), -1);
  call_tmp11 = chpl_config_has_value("memLeaks", "Built-in");
  call_tmp12 = (! call_tmp11);
  if (call_tmp12) {
    T4 = UINT8(false);
  } else {
    call_tmp13 = chpl_config_get_value("memLeaks", "Built-in");
    T4 = _command_line_cast13(call_tmp13);
  }
  memLeaks = T4;
  chpl_comm_broadcast_private(INT64(26), sizeof(chpl_bool), -1);
  call_tmp14 = chpl_config_has_value("memMax", "Built-in");
  call_tmp15 = (! call_tmp14);
  if (call_tmp15) {
    T5 = ((uint64_t)(INT64(0)));
  } else {
    call_tmp16 = chpl_config_get_value("memMax", "Built-in");
    T5 = _command_line_cast11(call_tmp16);
  }
  memMax = T5;
  chpl_comm_broadcast_private(INT64(27), sizeof(uint64_t), -1);
  call_tmp17 = chpl_config_has_value("memThreshold", "Built-in");
  call_tmp18 = (! call_tmp17);
  if (call_tmp18) {
    T6 = ((uint64_t)(INT64(0)));
  } else {
    call_tmp19 = chpl_config_get_value("memThreshold", "Built-in");
    T6 = _command_line_cast8(call_tmp19);
  }
  memThreshold = T6;
  chpl_comm_broadcast_private(INT64(28), sizeof(uint64_t), -1);
  call_tmp20 = chpl_config_has_value("memLog", "Built-in");
  call_tmp21 = (! call_tmp20);
  if (call_tmp21) {
    (&this12)->len = INT64(0);
    (&this12)->_size = INT64(0);
    (&this12)->buff = nil;
    (&this12)->owned = UINT8(false);
    (&this12)->locale_id = INT32(0);
    (&this12)->len = INT64(0);
    (&this12)->_size = INT64(0);
    call_tmp22 = ((c_ptr_uint8_t)(nil));
    (&this12)->buff = call_tmp22;
    (&this12)->owned = UINT8(true);
    default_arglocale_id = chpl_nodeID;
    (&this12)->locale_id = default_arglocale_id;
    ret_to_arg_ref_tmp_ = &ret_tmp;
    _construct_string(INT64(0), INT64(0), call_tmp22, UINT8(true), default_arglocale_id, &this12, ret_to_arg_ref_tmp_);
    T7 = ret_tmp;
  } else {
    call_tmp23 = chpl_config_get_value("memLog", "Built-in");
    ret_to_arg_ref_tmp_2 = &ret_tmp2;
    _command_line_cast9(call_tmp23, ret_to_arg_ref_tmp_2);
    T7 = ret_tmp2;
  }
  chpl_macro_tmp_5316.locale = (&memLog)->locale;
  chpl_macro_tmp_5316.addr = &(((&memLog)->addr)->value);
  chpl_gen_comm_put(((void*)(&T7)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5316).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5316).addr, sizeof(string), -1, COMMID(0), INT64(33), INT64(37));
  call_tmp24 = chpl_config_has_value("memLeaksLog", "Built-in");
  call_tmp25 = (! call_tmp24);
  if (call_tmp25) {
    (&this13)->len = INT64(0);
    (&this13)->_size = INT64(0);
    (&this13)->buff = nil;
    (&this13)->owned = UINT8(false);
    (&this13)->locale_id = INT32(0);
    (&this13)->len = INT64(0);
    (&this13)->_size = INT64(0);
    call_tmp26 = ((c_ptr_uint8_t)(nil));
    (&this13)->buff = call_tmp26;
    (&this13)->owned = UINT8(true);
    default_arglocale_id2 = chpl_nodeID;
    (&this13)->locale_id = default_arglocale_id2;
    ret_to_arg_ref_tmp_3 = &ret_tmp3;
    _construct_string(INT64(0), INT64(0), call_tmp26, UINT8(true), default_arglocale_id2, &this13, ret_to_arg_ref_tmp_3);
    T8 = ret_tmp3;
  } else {
    call_tmp27 = chpl_config_get_value("memLeaksLog", "Built-in");
    ret_to_arg_ref_tmp_4 = &ret_tmp4;
    _command_line_cast10(call_tmp27, ret_to_arg_ref_tmp_4);
    T8 = ret_tmp4;
  }
  chpl_macro_tmp_5317.locale = (&memLeaksLog)->locale;
  chpl_macro_tmp_5317.addr = &(((&memLeaksLog)->addr)->value);
  chpl_gen_comm_put(((void*)(&T8)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5317).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5317).addr, sizeof(string), -1, COMMID(1), INT64(37), INT64(37));
  call_tmp28 = chpl_config_has_value("memLeaksByDesc", "Built-in");
  call_tmp29 = (! call_tmp28);
  if (call_tmp29) {
    (&this14)->len = INT64(0);
    (&this14)->_size = INT64(0);
    (&this14)->buff = nil;
    (&this14)->owned = UINT8(false);
    (&this14)->locale_id = INT32(0);
    (&this14)->len = INT64(0);
    (&this14)->_size = INT64(0);
    call_tmp30 = ((c_ptr_uint8_t)(nil));
    (&this14)->buff = call_tmp30;
    (&this14)->owned = UINT8(true);
    default_arglocale_id3 = chpl_nodeID;
    (&this14)->locale_id = default_arglocale_id3;
    ret_to_arg_ref_tmp_5 = &ret_tmp5;
    _construct_string(INT64(0), INT64(0), call_tmp30, UINT8(true), default_arglocale_id3, &this14, ret_to_arg_ref_tmp_5);
    T9 = ret_tmp5;
  } else {
    call_tmp31 = chpl_config_get_value("memLeaksByDesc", "Built-in");
    ret_to_arg_ref_tmp_6 = &ret_tmp6;
    _command_line_cast12(call_tmp31, ret_to_arg_ref_tmp_6);
    T9 = ret_tmp6;
  }
  chpl_macro_tmp_5318.locale = (&memLeaksByDesc)->locale;
  chpl_macro_tmp_5318.addr = &(((&memLeaksByDesc)->addr)->value);
  chpl_gen_comm_put(((void*)(&T9)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5318).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5318).addr, sizeof(string), -1, COMMID(2), INT64(54), INT64(37));
  cMemMax = memMax;
  chpl_comm_broadcast_private(INT64(29), sizeof(uint64_t), -1);
  cMemThreshold = memThreshold;
  chpl_comm_broadcast_private(INT64(30), sizeof(uint64_t), -1);
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_MemTracking:;
  return;
}

/* MemTracking.chpl:22 */
static void chpl__deinit_MemTracking(void) {
  chpl____wide_heap_string local_memLog = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string _ref_tmp_ = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_5319;
  local_memLog = memLog;
  chpl_macro_tmp_5319.locale = (&local_memLog)->locale;
  chpl_macro_tmp_5319.addr = &(((&local_memLog)->addr)->value);
  T = chpl_macro_tmp_5319;
  _ref_tmp_ = T;
  deinit44(_ref_tmp_);
  return;
}

/* MemTracking.chpl:73 */
void chpl_memTracking_returnConfigVals(_ref_chpl_bool ret_memTrack,
                                       _ref_chpl_bool ret_memStats,
                                       _ref_chpl_bool ret_memLeaksByType,
                                       _ref_c_string ret_memLeaksByDesc,
                                       _ref_chpl_bool ret_memLeaks,
                                       _ref_uint64_t ret_memMax,
                                       _ref_uint64_t ret_memThreshold,
                                       _ref_c_string ret_memLog,
                                       _ref_c_string ret_memLeaksLog) {
  chpl____wide_heap_string local_memLeaksLog = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_heap_string local_memLog = {CHPL_LOCALEID_T_INIT, NULL};
  string local__str_literal_337;
  chpl____wide_heap_string local_memLeaksByDesc = {CHPL_LOCALEID_T_INIT, NULL};
  int32_t local_c_sublocid_any;
  uint64_t local_cMemThreshold;
  uint64_t local_cMemMax;
  chpl_bool local_memLeaks;
  chpl_bool local_memLeaksByType;
  chpl_bool local_memStats;
  chpl_localeID_t _autoCopy_tmp_;
  chpl____wide_locale call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp3;
  chpl_bool call_tmp4;
  chpl____wide__ref_string _ref_tmp_ = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t T;
  chpl_bool call_tmp5;
  string local_memLeaksByDesc2;
  chpl____wide__ref_string T2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp6;
  c_ptr_uint8_t coerce_tmp = NULL;
  _ref_string _ref_tmp_2 = NULL;
  chpl____wide__ref_string T3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string _ref_tmp_3 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t T4;
  chpl_bool call_tmp7;
  string local_memLog2;
  chpl____wide__ref_string T5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp8;
  _ref_string _ref_tmp_4 = NULL;
  chpl____wide__ref_string T6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string _ref_tmp_5 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t T7;
  chpl_bool call_tmp9;
  string local_memLeaksLog2;
  chpl____wide__ref_string T8 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp10;
  _ref_string _ref_tmp_6 = NULL;
  chpl____wide__ref_string T9 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string _ref_tmp_7 = {CHPL_LOCALEID_T_INIT, NULL};
  int32_t T10;
  chpl_bool call_tmp11;
  c_ptr_uint8_t T11 = NULL;
  chpl____wide__ref_string _ref_tmp_8 = {CHPL_LOCALEID_T_INIT, NULL};
  int32_t T12;
  chpl_bool call_tmp12;
  c_ptr_uint8_t T13 = NULL;
  chpl____wide__ref_string _ref_tmp_9 = {CHPL_LOCALEID_T_INIT, NULL};
  int32_t T14;
  chpl_bool call_tmp13;
  c_ptr_uint8_t T15 = NULL;
  chpl____wide__ref_string chpl_macro_tmp_5320;
  chpl____wide__ref_int64_t chpl_macro_tmp_5321;
  chpl____wide__ref_string chpl_macro_tmp_5322;
  chpl____wide__ref_string chpl_macro_tmp_5323;
  chpl____wide__ref_string chpl_macro_tmp_5324;
  chpl____wide__ref_int64_t chpl_macro_tmp_5325;
  chpl____wide__ref_string chpl_macro_tmp_5326;
  chpl____wide__ref_string chpl_macro_tmp_5327;
  chpl____wide__ref_string chpl_macro_tmp_5328;
  chpl____wide__ref_int64_t chpl_macro_tmp_5329;
  chpl____wide__ref_string chpl_macro_tmp_5330;
  chpl____wide__ref_string chpl_macro_tmp_5331;
  chpl____wide__ref_string chpl_macro_tmp_5332;
  chpl____wide__ref_int32_t chpl_macro_tmp_5333;
  chpl____wide__ref_c_ptr_uint8_t chpl_macro_tmp_5334;
  chpl____wide__ref_string chpl_macro_tmp_5335;
  chpl____wide__ref_int32_t chpl_macro_tmp_5336;
  chpl____wide__ref_c_ptr_uint8_t chpl_macro_tmp_5337;
  chpl____wide__ref_string chpl_macro_tmp_5338;
  chpl____wide__ref_int32_t chpl_macro_tmp_5339;
  chpl____wide__ref_c_ptr_uint8_t chpl_macro_tmp_5340;
  local_memLeaksLog = memLeaksLog;
  local_memLog = memLog;
  local__str_literal_337 /* "Cannot call .c_str() on a remote string" */ = _str_literal_337 /* "Cannot call .c_str() on a remote string" */;
  local_memLeaksByDesc = memLeaksByDesc;
  local_c_sublocid_any = c_sublocid_any;
  local_cMemThreshold = cMemThreshold;
  local_cMemMax = cMemMax;
  local_memLeaks = memLeaks;
  local_memLeaksByType = memLeaksByType;
  local_memStats = memStats;
  *(ret_memTrack) = memTrack;
  *(ret_memStats) = local_memStats;
  *(ret_memLeaksByType) = local_memLeaksByType;
  *(ret_memLeaks) = local_memLeaks;
  *(ret_memMax) = local_cMemMax;
  *(ret_memThreshold) = local_cMemThreshold;
  _autoCopy_tmp_ = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any);
  call_tmp2 = chpl_localeID_to_locale(&_autoCopy_tmp_);
  call_tmp3 = id(call_tmp2);
  call_tmp4 = (call_tmp3 != INT64(0));
  if (call_tmp4) {
    chpl_macro_tmp_5320.locale = (&local_memLeaksByDesc)->locale;
    chpl_macro_tmp_5320.addr = &(((&local_memLeaksByDesc)->addr)->value);
    _ref_tmp_ = chpl_macro_tmp_5320;
    chpl_macro_tmp_5321.locale = (_ref_tmp_).locale;
    chpl_macro_tmp_5321.addr = &(((_ref_tmp_).addr)->len);
    chpl_gen_comm_get(((void*)(&T)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5321).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5321).addr, sizeof(int64_t), -1, COMMID(3), INT64(90), INT64(37));
    call_tmp5 = (T != INT64(0));
    if (call_tmp5) {
      chpl_macro_tmp_5322.locale = (&local_memLeaksByDesc)->locale;
      chpl_macro_tmp_5322.addr = &(((&local_memLeaksByDesc)->addr)->value);
      T2 = chpl_macro_tmp_5322;
      local_memLeaksByDesc2 = chpl__initCopy13(T2);
      (&local_memLeaksByDesc2)->owned = UINT8(false);
      call_tmp6 = ((&local_memLeaksByDesc2)->locale_id != chpl_nodeID);
      if (call_tmp6) {
        halt(&local__str_literal_337 /* "Cannot call .c_str() on a remote string" */, INT64(94), INT32(37));
      }
      coerce_tmp = (&local_memLeaksByDesc2)->buff;
      *(ret_memLeaksByDesc) = ((c_string)(((c_void_ptr)(coerce_tmp))));
      _ref_tmp_2 = &local_memLeaksByDesc2;
      chpl_macro_tmp_5323.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_5323.addr = _ref_tmp_2;
      T3 = chpl_macro_tmp_5323;
      deinit44(T3);
    } else {
      *(ret_memLeaksByDesc) = ((c_string)(NULL));
    }
    chpl_macro_tmp_5324.locale = (&local_memLog)->locale;
    chpl_macro_tmp_5324.addr = &(((&local_memLog)->addr)->value);
    _ref_tmp_3 = chpl_macro_tmp_5324;
    chpl_macro_tmp_5325.locale = (_ref_tmp_3).locale;
    chpl_macro_tmp_5325.addr = &(((_ref_tmp_3).addr)->len);
    chpl_gen_comm_get(((void*)(&T4)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5325).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5325).addr, sizeof(int64_t), -1, COMMID(4), INT64(99), INT64(37));
    call_tmp7 = (T4 != INT64(0));
    if (call_tmp7) {
      chpl_macro_tmp_5326.locale = (&local_memLog)->locale;
      chpl_macro_tmp_5326.addr = &(((&local_memLog)->addr)->value);
      T5 = chpl_macro_tmp_5326;
      local_memLog2 = chpl__initCopy13(T5);
      (&local_memLog2)->owned = UINT8(false);
      call_tmp8 = ((&local_memLog2)->locale_id != chpl_nodeID);
      if (call_tmp8) {
        halt(&local__str_literal_337 /* "Cannot call .c_str() on a remote string" */, INT64(103), INT32(37));
      }
      *(ret_memLog) = ((c_string)(((c_void_ptr)((&local_memLog2)->buff))));
      _ref_tmp_4 = &local_memLog2;
      chpl_macro_tmp_5327.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_5327.addr = _ref_tmp_4;
      T6 = chpl_macro_tmp_5327;
      deinit44(T6);
    } else {
      *(ret_memLog) = ((c_string)(NULL));
    }
    chpl_macro_tmp_5328.locale = (&local_memLeaksLog)->locale;
    chpl_macro_tmp_5328.addr = &(((&local_memLeaksLog)->addr)->value);
    _ref_tmp_5 = chpl_macro_tmp_5328;
    chpl_macro_tmp_5329.locale = (_ref_tmp_5).locale;
    chpl_macro_tmp_5329.addr = &(((_ref_tmp_5).addr)->len);
    chpl_gen_comm_get(((void*)(&T7)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5329).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5329).addr, sizeof(int64_t), -1, COMMID(5), INT64(108), INT64(37));
    call_tmp9 = (T7 != INT64(0));
    if (call_tmp9) {
      chpl_macro_tmp_5330.locale = (&local_memLeaksLog)->locale;
      chpl_macro_tmp_5330.addr = &(((&local_memLeaksLog)->addr)->value);
      T8 = chpl_macro_tmp_5330;
      local_memLeaksLog2 = chpl__initCopy13(T8);
      (&local_memLeaksLog2)->owned = UINT8(false);
      call_tmp10 = ((&local_memLeaksLog2)->locale_id != chpl_nodeID);
      if (call_tmp10) {
        halt(&local__str_literal_337 /* "Cannot call .c_str() on a remote string" */, INT64(112), INT32(37));
      }
      *(ret_memLeaksLog) = ((c_string)(((c_void_ptr)((&local_memLeaksLog2)->buff))));
      _ref_tmp_6 = &local_memLeaksLog2;
      chpl_macro_tmp_5331.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_5331.addr = _ref_tmp_6;
      T9 = chpl_macro_tmp_5331;
      deinit44(T9);
    } else {
      *(ret_memLeaksLog) = ((c_string)(NULL));
    }
  } else {
    chpl_macro_tmp_5332.locale = (&local_memLeaksByDesc)->locale;
    chpl_macro_tmp_5332.addr = &(((&local_memLeaksByDesc)->addr)->value);
    _ref_tmp_7 = chpl_macro_tmp_5332;
    chpl_macro_tmp_5333.locale = (_ref_tmp_7).locale;
    chpl_macro_tmp_5333.addr = &(((_ref_tmp_7).addr)->locale_id);
    chpl_gen_comm_get(((void*)(&T10)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5333).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5333).addr, sizeof(int32_t), -1, COMMID(6), INT64(118), INT64(37));
    call_tmp11 = (T10 != chpl_nodeID);
    if (call_tmp11) {
      halt(&local__str_literal_337 /* "Cannot call .c_str() on a remote string" */, INT64(118), INT32(37));
    }
    chpl_macro_tmp_5334.locale = (_ref_tmp_7).locale;
    chpl_macro_tmp_5334.addr = &(((_ref_tmp_7).addr)->buff);
    chpl_gen_comm_get(((void*)(&T11)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5334).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5334).addr, sizeof(c_ptr_uint8_t), -1, COMMID(7), INT64(118), INT64(37));
    *(ret_memLeaksByDesc) = ((c_string)(((c_void_ptr)(T11))));
    chpl_macro_tmp_5335.locale = (&local_memLog)->locale;
    chpl_macro_tmp_5335.addr = &(((&local_memLog)->addr)->value);
    _ref_tmp_8 = chpl_macro_tmp_5335;
    chpl_macro_tmp_5336.locale = (_ref_tmp_8).locale;
    chpl_macro_tmp_5336.addr = &(((_ref_tmp_8).addr)->locale_id);
    chpl_gen_comm_get(((void*)(&T12)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5336).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5336).addr, sizeof(int32_t), -1, COMMID(8), INT64(119), INT64(37));
    call_tmp12 = (T12 != chpl_nodeID);
    if (call_tmp12) {
      halt(&local__str_literal_337 /* "Cannot call .c_str() on a remote string" */, INT64(119), INT32(37));
    }
    chpl_macro_tmp_5337.locale = (_ref_tmp_8).locale;
    chpl_macro_tmp_5337.addr = &(((_ref_tmp_8).addr)->buff);
    chpl_gen_comm_get(((void*)(&T13)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5337).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5337).addr, sizeof(c_ptr_uint8_t), -1, COMMID(9), INT64(119), INT64(37));
    *(ret_memLog) = ((c_string)(((c_void_ptr)(T13))));
    chpl_macro_tmp_5338.locale = (&local_memLeaksLog)->locale;
    chpl_macro_tmp_5338.addr = &(((&local_memLeaksLog)->addr)->value);
    _ref_tmp_9 = chpl_macro_tmp_5338;
    chpl_macro_tmp_5339.locale = (_ref_tmp_9).locale;
    chpl_macro_tmp_5339.addr = &(((_ref_tmp_9).addr)->locale_id);
    chpl_gen_comm_get(((void*)(&T14)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5339).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5339).addr, sizeof(int32_t), -1, COMMID(10), INT64(120), INT64(37));
    call_tmp13 = (T14 != chpl_nodeID);
    if (call_tmp13) {
      halt(&local__str_literal_337 /* "Cannot call .c_str() on a remote string" */, INT64(120), INT32(37));
    }
    chpl_macro_tmp_5340.locale = (_ref_tmp_9).locale;
    chpl_macro_tmp_5340.addr = &(((_ref_tmp_9).addr)->buff);
    chpl_gen_comm_get(((void*)(&T15)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5340).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5340).addr, sizeof(c_ptr_uint8_t), -1, COMMID(11), INT64(120), INT64(37));
    *(ret_memLeaksLog) = ((c_string)(((c_void_ptr)(T15))));
  }
  return;
}

