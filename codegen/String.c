/* String.chpl:65 */
static void chpl__init_String(int64_t _ln,
                              int32_t _fn) {
  _ref_int32_t refIndentLevel = NULL;
  if (chpl__init_String_p) {
    goto _exit_chpl__init_String;
  }
  printModuleInit("%*s\n", "String", INT64(6));
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_String_p = UINT8(true);
  {
    chpl__init_BaseStringType(INT64(65), INT32(8));
    chpl__init_CString(INT64(65), INT32(8));
    chpl__init_SysCTypes(INT64(65), INT32(8));
    chpl__init_StringCasts(INT64(65), INT32(8));
  }
  uint_A = UINT8(65);
  chpl_comm_broadcast_private(INT64(4), sizeof(uint8_t), -1);
  uint_Z = UINT8(90);
  chpl_comm_broadcast_private(INT64(5), sizeof(uint8_t), -1);
  uint_a = UINT8(97);
  chpl_comm_broadcast_private(INT64(6), sizeof(uint8_t), -1);
  uint_z = UINT8(122);
  chpl_comm_broadcast_private(INT64(7), sizeof(uint8_t), -1);
  uint_0 = UINT8(48);
  chpl_comm_broadcast_private(INT64(8), sizeof(uint8_t), -1);
  uint_9 = UINT8(57);
  chpl_comm_broadcast_private(INT64(9), sizeof(uint8_t), -1);
  uint_space = UINT8(32);
  chpl_comm_broadcast_private(INT64(10), sizeof(uint8_t), -1);
  uint_tab = UINT8(9);
  chpl_comm_broadcast_private(INT64(11), sizeof(uint8_t), -1);
  uint_newline = UINT8(10);
  chpl_comm_broadcast_private(INT64(12), sizeof(uint8_t), -1);
  uint_return = UINT8(13);
  chpl_comm_broadcast_private(INT64(13), sizeof(uint8_t), -1);
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_String:;
  return;
}

/* String.chpl:95 */
static c_ptr_uint8_t copyRemoteBuffer(int64_t src_loc_id,
                                      c_ptr_uint8_t src_addr,
                                      int64_t len) {
  c_ptr_uint8_t dest = NULL;
  c_void_ptr cast_tmp;
  c_ptr_uint8_t call_tmp2 = NULL;
  _ref_uint8_t call_tmp3 = NULL;
  cast_tmp = chpl_here_alloc(((int64_t)((len + INT64(1)))), CHPL_RT_MD_STR_COPY_REMOTE);
  call_tmp2 = ((c_ptr_uint8_t)(cast_tmp));
  dest = call_tmp2;
  chpl_gen_comm_get(((void*)(dest)), src_loc_id, src_addr, ((uint64_t)(len)), -1, COMMID(0), INT64(97), INT32(8));
  call_tmp3 = (dest + len);
  *(call_tmp3) = ((uint8_t)(INT64(0)));
  return call_tmp2;
}

/* String.chpl:112 */
static void _construct_string(int64_t len,
                              int64_t _size,
                              c_ptr_uint8_t buff,
                              chpl_bool owned,
                              int32_t locale_id,
                              _ref_string meme,
                              _ref_string _retArg) {
  string this12;
  this12 = *(meme);
  (&this12)->len = len;
  (&this12)->_size = _size;
  (&this12)->buff = buff;
  (&this12)->owned = owned;
  (&this12)->locale_id = locale_id;
  *(_retArg) = this12;
  return;
}

/* String.chpl:134 */
static void string2(chpl____wide__ref_string s,
                    chpl_bool owned,
                    _ref_string _retArg) {
  int16_t local_CHPL_RT_MD_STR_COPY_DATA;
  string this12;
  string this13;
  c_ptr_uint8_t call_tmp2 = NULL;
  int32_t default_arglocale_id;
  string ret_tmp;
  _ref_string ret_to_arg_ref_tmp_ = NULL;
  int32_t T;
  chpl_bool call_tmp3;
  int64_t coerce_tmp;
  int64_t T2;
  chpl_bool call_tmp4;
  c_ptr_uint8_t call_tmp5 = NULL;
  int32_t T3;
  c_ptr_uint8_t T4 = NULL;
  chpl_bool coerce_tmp2;
  int64_t call_tmp6;
  c_void_ptr cast_tmp;
  c_ptr_uint8_t coerce_tmp3 = NULL;
  c_ptr_uint8_t T5 = NULL;
  int64_t T6;
  c_ptr_uint8_t coerce_tmp4 = NULL;
  _ref_uint8_t call_tmp7 = NULL;
  c_ptr_uint8_t T7 = NULL;
  int64_t T8;
  chpl____wide__ref_int32_t chpl_macro_tmp_425;
  chpl____wide__ref_int64_t chpl_macro_tmp_426;
  chpl____wide__ref_int32_t chpl_macro_tmp_427;
  chpl____wide__ref_c_ptr_uint8_t chpl_macro_tmp_428;
  chpl____wide__ref_c_ptr_uint8_t chpl_macro_tmp_429;
  chpl____wide__ref_int64_t chpl_macro_tmp_430;
  chpl____wide__ref_c_ptr_uint8_t chpl_macro_tmp_431;
  chpl____wide__ref_int64_t chpl_macro_tmp_432;
  local_CHPL_RT_MD_STR_COPY_DATA = CHPL_RT_MD_STR_COPY_DATA;
  (&this13)->len = INT64(0);
  (&this13)->_size = INT64(0);
  (&this13)->buff = nil;
  (&this13)->owned = UINT8(false);
  (&this13)->locale_id = INT32(0);
  (&this13)->len = INT64(0);
  (&this13)->_size = INT64(0);
  call_tmp2 = ((c_ptr_uint8_t)(nil));
  (&this13)->buff = call_tmp2;
  (&this13)->owned = UINT8(true);
  default_arglocale_id = chpl_nodeID;
  (&this13)->locale_id = default_arglocale_id;
  ret_to_arg_ref_tmp_ = &ret_tmp;
  _construct_string(INT64(0), INT64(0), call_tmp2, UINT8(true), default_arglocale_id, &this13, ret_to_arg_ref_tmp_);
  this12 = ret_tmp;
  chpl_macro_tmp_425.locale = (s).locale;
  chpl_macro_tmp_425.addr = &(((s).addr)->locale_id);
  chpl_gen_comm_get(((void*)(&T)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_425).locale), INT64(0), INT32(0)), (chpl_macro_tmp_425).addr, sizeof(int32_t), -1, COMMID(1), INT64(135), INT64(8));
  call_tmp3 = (T != chpl_nodeID);
  chpl_macro_tmp_426.locale = (s).locale;
  chpl_macro_tmp_426.addr = &(((s).addr)->len);
  chpl_gen_comm_get(((void*)(&T2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_426).locale), INT64(0), INT32(0)), (chpl_macro_tmp_426).addr, sizeof(int64_t), -1, COMMID(2), INT64(136), INT64(8));
  coerce_tmp = T2;
  (&this12)->owned = owned;
  call_tmp4 = (coerce_tmp != INT64(0));
  if (call_tmp4) {
    (&this12)->len = coerce_tmp;
    if (call_tmp3) {
      (&this12)->owned = UINT8(true);
      chpl_macro_tmp_427.locale = (s).locale;
      chpl_macro_tmp_427.addr = &(((s).addr)->locale_id);
      chpl_gen_comm_get(((void*)(&T3)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_427).locale), INT64(0), INT32(0)), (chpl_macro_tmp_427).addr, sizeof(int32_t), -1, COMMID(3), INT64(144), INT64(8));
      chpl_macro_tmp_428.locale = (s).locale;
      chpl_macro_tmp_428.addr = &(((s).addr)->buff);
      chpl_gen_comm_get(((void*)(&T4)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_428).locale), INT64(0), INT32(0)), (chpl_macro_tmp_428).addr, sizeof(c_ptr_uint8_t), -1, COMMID(4), INT64(144), INT64(8));
      call_tmp5 = copyRemoteBuffer(((int64_t)(T3)), T4, coerce_tmp);
      (&this12)->buff = call_tmp5;
      (&this12)->_size = ((int64_t)((coerce_tmp + INT64(1))));
    } else {
      coerce_tmp2 = (&this12)->owned;
      if (coerce_tmp2) {
        call_tmp6 = chpl_here_good_alloc_size(((int64_t)((coerce_tmp + INT64(1)))));
        cast_tmp = chpl_here_alloc(call_tmp6, local_CHPL_RT_MD_STR_COPY_DATA);
        (&this12)->buff = ((c_ptr_uint8_t)(cast_tmp));
        coerce_tmp3 = (&this12)->buff;
        chpl_macro_tmp_429.locale = (s).locale;
        chpl_macro_tmp_429.addr = &(((s).addr)->buff);
        chpl_gen_comm_get(((void*)(&T5)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_429).locale), INT64(0), INT32(0)), (chpl_macro_tmp_429).addr, sizeof(c_ptr_uint8_t), -1, COMMID(5), INT64(151), INT64(8));
        chpl_macro_tmp_430.locale = (s).locale;
        chpl_macro_tmp_430.addr = &(((s).addr)->len);
        chpl_gen_comm_get(((void*)(&T6)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_430).locale), INT64(0), INT32(0)), (chpl_macro_tmp_430).addr, sizeof(int64_t), -1, COMMID(6), INT64(151), INT64(8));
        memcpy(((c_void_ptr)(coerce_tmp3)), ((c_void_ptr)(T5)), ((uint64_t)(T6)));
        coerce_tmp4 = (&this12)->buff;
        call_tmp7 = (coerce_tmp4 + coerce_tmp);
        *(call_tmp7) = ((uint8_t)(INT64(0)));
        (&this12)->_size = call_tmp6;
      } else {
        chpl_macro_tmp_431.locale = (s).locale;
        chpl_macro_tmp_431.addr = &(((s).addr)->buff);
        chpl_gen_comm_get(((void*)(&T7)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_431).locale), INT64(0), INT32(0)), (chpl_macro_tmp_431).addr, sizeof(c_ptr_uint8_t), -1, COMMID(7), INT64(155), INT64(8));
        (&this12)->buff = T7;
        chpl_macro_tmp_432.locale = (s).locale;
        chpl_macro_tmp_432.addr = &(((s).addr)->_size);
        chpl_gen_comm_get(((void*)(&T8)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_432).locale), INT64(0), INT32(0)), (chpl_macro_tmp_432).addr, sizeof(int64_t), -1, COMMID(8), INT64(156), INT64(8));
        (&this12)->_size = T8;
      }
    }
  }
  *(_retArg) = this12;
  return;
}

/* String.chpl:170 */
static void string3(c_string cs,
                    int64_t length3,
                    chpl_bool owned,
                    chpl_bool needToCopy,
                    _ref_string _retArg) {
  string this12;
  string this13;
  c_ptr_uint8_t call_tmp2 = NULL;
  int32_t default_arglocale_id;
  string ret_tmp;
  _ref_string ret_to_arg_ref_tmp_ = NULL;
  _ref_string _ref_tmp_ = NULL;
  chpl____wide__ref_string T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_433;
  (&this13)->len = INT64(0);
  (&this13)->_size = INT64(0);
  (&this13)->buff = nil;
  (&this13)->owned = UINT8(false);
  (&this13)->locale_id = INT32(0);
  (&this13)->len = INT64(0);
  (&this13)->_size = INT64(0);
  call_tmp2 = ((c_ptr_uint8_t)(nil));
  (&this13)->buff = call_tmp2;
  (&this13)->owned = UINT8(true);
  default_arglocale_id = chpl_nodeID;
  (&this13)->locale_id = default_arglocale_id;
  ret_to_arg_ref_tmp_ = &ret_tmp;
  _construct_string(INT64(0), INT64(0), call_tmp2, UINT8(true), default_arglocale_id, &this13, ret_to_arg_ref_tmp_);
  this12 = ret_tmp;
  (&this12)->owned = owned;
  _ref_tmp_ = &this12;
  chpl_macro_tmp_433.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_433.addr = _ref_tmp_;
  T = chpl_macro_tmp_433;
  reinitString(T, ((c_ptr_uint8_t)(cs)), length3, ((int64_t)((length3 + INT64(1)))), needToCopy);
  *(_retArg) = this12;
  return;
}

/* String.chpl:188 */
static void string4(c_ptr_uint8_t buff,
                    int64_t length3,
                    int64_t size18,
                    chpl_bool owned,
                    chpl_bool needToCopy,
                    _ref_string _retArg) {
  string this12;
  string this13;
  c_ptr_uint8_t call_tmp2 = NULL;
  int32_t default_arglocale_id;
  string ret_tmp;
  _ref_string ret_to_arg_ref_tmp_ = NULL;
  _ref_string _ref_tmp_ = NULL;
  chpl____wide__ref_string T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_434;
  (&this13)->len = INT64(0);
  (&this13)->_size = INT64(0);
  (&this13)->buff = nil;
  (&this13)->owned = UINT8(false);
  (&this13)->locale_id = INT32(0);
  (&this13)->len = INT64(0);
  (&this13)->_size = INT64(0);
  call_tmp2 = ((c_ptr_uint8_t)(nil));
  (&this13)->buff = call_tmp2;
  (&this13)->owned = UINT8(true);
  default_arglocale_id = chpl_nodeID;
  (&this13)->locale_id = default_arglocale_id;
  ret_to_arg_ref_tmp_ = &ret_tmp;
  _construct_string(INT64(0), INT64(0), call_tmp2, UINT8(true), default_arglocale_id, &this13, ret_to_arg_ref_tmp_);
  this12 = ret_tmp;
  (&this12)->owned = owned;
  _ref_tmp_ = &this12;
  chpl_macro_tmp_434.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_434.addr = _ref_tmp_;
  T = chpl_macro_tmp_434;
  reinitString(T, buff, length3, size18, needToCopy);
  *(_retArg) = this12;
  return;
}

/* String.chpl:195 */
static void deinit44(chpl____wide__ref_string this12) {
  chpl_bool ret;
  chpl_bool coerce_tmp;
  chpl_bool T;
  int64_t T2;
  int32_t T3;
  chpl_localeID_t ret_tmp;
  _ref_chpl_localeID_t ret_to_arg_ref_tmp_ = NULL;
  chpl_localeID_t call_tmp2;
  chpl____wide__ref_string T4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect;
  _class_localson_fn189 _args_foron_fn = NULL;
  chpl____wide__ref_string T5 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_435;
  chpl____wide__ref_int64_t chpl_macro_tmp_436;
  chpl____wide__ref_int32_t chpl_macro_tmp_437;
  chpl__class_localson_fn189_object chpl_macro_tmp_438;
  chpl_macro_tmp_435.locale = (this12).locale;
  chpl_macro_tmp_435.addr = &(((this12).addr)->owned);
  chpl_gen_comm_get(((void*)(&T)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_435).locale), INT64(0), INT32(0)), (chpl_macro_tmp_435).addr, sizeof(chpl_bool), -1, COMMID(9), INT64(196), INT64(8));
  coerce_tmp = T;
  if (coerce_tmp) {
    chpl_macro_tmp_436.locale = (this12).locale;
    chpl_macro_tmp_436.addr = &(((this12).addr)->len);
    chpl_gen_comm_get(((void*)(&T2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_436).locale), INT64(0), INT32(0)), (chpl_macro_tmp_436).addr, sizeof(int64_t), -1, COMMID(10), INT64(196), INT64(8));
    ret = (! (T2 == INT64(0)));
    goto _end__if_fn256;
  } else {
    ret = UINT8(false);
    goto _end__if_fn256;
  }
  _end__if_fn256:;
  if (ret) {
    chpl_macro_tmp_437.locale = (this12).locale;
    chpl_macro_tmp_437.addr = &(((this12).addr)->locale_id);
    chpl_gen_comm_get(((void*)(&T3)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_437).locale), INT64(0), INT32(0)), (chpl_macro_tmp_437).addr, sizeof(int32_t), -1, COMMID(11), INT64(198), INT64(8));
    ret_to_arg_ref_tmp_ = &ret_tmp;
    chpl_buildLocaleID(T3, c_sublocid_any, ret_to_arg_ref_tmp_, INT64(198), INT32(8));
    call_tmp2 = ret_tmp;
    T4 = this12;
    isdirect = chpl_doDirectExecuteOn(&call_tmp2);
    if (isdirect) {
      on_fn189(T4);
    } else {
      _args_foron_fn = ((_class_localson_fn189)(&chpl_macro_tmp_438));
      (_args_foron_fn)->_0_rvfDerefTmp = call_tmp2;
      T5 = this12;
      (_args_foron_fn)->_1_tmp = T5;
      _args_vforon_fn = ((void*)(_args_foron_fn));
      /*** wrapon_fn189 ***/ chpl_executeOn(&call_tmp2, INT32(254), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn189_object), INT64(197), INT32(8));
    }
  }
  return;
}

/* String.chpl:197 */
static void wrapon_fn189(_class_localson_fn189 c) {
  chpl____wide__ref_string _1_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  _1_tmp = (c)->_1_tmp;
  on_fn189(_1_tmp);
  return;
}

/* String.chpl:197 */
static void on_fn189(chpl____wide__ref_string this12) {
  c_ptr_uint8_t T = NULL;
  chpl____wide__ref_c_ptr_uint8_t chpl_macro_tmp_439;
  chpl_macro_tmp_439.locale = (this12).locale;
  chpl_macro_tmp_439.addr = &(((this12).addr)->buff);
  chpl_gen_comm_get(((void*)(&T)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_439).locale), INT64(0), INT32(0)), (chpl_macro_tmp_439).addr, sizeof(c_ptr_uint8_t), -1, COMMID(12), INT64(199), INT64(8));
  chpl_here_free(((c_void_ptr)(T)));
  return;
}

/* String.chpl:206 */
static void reinitString(chpl____wide__ref_string this12,
                         c_ptr_uint8_t buf,
                         int64_t s_len,
                         int64_t size18,
                         chpl_bool needToCopy) {
  int16_t local_CHPL_RT_MD_STR_COPY_DATA;
  c_void_ptr local_c_nil;
  int64_t T;
  chpl_bool call_tmp2;
  chpl_bool ret;
  chpl_bool call_tmp3;
  chpl_bool call_tmp4;
  chpl_bool ret2;
  chpl_bool T2;
  chpl_bool call_tmp5;
  int64_t T3;
  chpl_bool ret3;
  chpl_bool coerce_tmp;
  chpl_bool T4;
  int64_t T5;
  c_ptr_uint8_t T6 = NULL;
  int64_t call_tmp6;
  c_void_ptr cast_tmp;
  c_ptr_uint8_t coerce_tmp2 = NULL;
  c_ptr_uint8_t T7 = NULL;
  _ref_uint8_t call_tmp7 = NULL;
  c_ptr_uint8_t T8 = NULL;
  chpl_bool ret4;
  chpl_bool coerce_tmp3;
  chpl_bool T9;
  int64_t T10;
  c_ptr_uint8_t T11 = NULL;
  chpl_bool ret5;
  chpl_bool coerce_tmp4;
  chpl_bool T12;
  int64_t T13;
  c_ptr_uint8_t T14 = NULL;
  chpl____wide__ref_int64_t chpl_macro_tmp_440;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_441;
  chpl____wide__ref_int64_t chpl_macro_tmp_442;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_443;
  chpl____wide__ref_int64_t chpl_macro_tmp_444;
  chpl____wide__ref_c_ptr_uint8_t chpl_macro_tmp_445;
  chpl____wide__ref_c_ptr_uint8_t chpl_macro_tmp_446;
  c_ptr_uint8_t chpl_macro_tmp_447;
  chpl____wide__ref_c_ptr_uint8_t chpl_macro_tmp_448;
  chpl____wide__ref_int64_t chpl_macro_tmp_449;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_450;
  chpl_bool chpl_macro_tmp_451;
  chpl____wide__ref_c_ptr_uint8_t chpl_macro_tmp_452;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_453;
  chpl____wide__ref_int64_t chpl_macro_tmp_454;
  chpl____wide__ref_c_ptr_uint8_t chpl_macro_tmp_455;
  chpl____wide__ref_c_ptr_uint8_t chpl_macro_tmp_456;
  chpl____wide__ref_int64_t chpl_macro_tmp_457;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_458;
  chpl____wide__ref_int64_t chpl_macro_tmp_459;
  chpl____wide__ref_c_ptr_uint8_t chpl_macro_tmp_460;
  chpl____wide__ref_c_ptr_uint8_t chpl_macro_tmp_461;
  chpl____wide__ref_int64_t chpl_macro_tmp_462;
  int64_t chpl_macro_tmp_463;
  chpl____wide__ref_int64_t chpl_macro_tmp_464;
  local_CHPL_RT_MD_STR_COPY_DATA = CHPL_RT_MD_STR_COPY_DATA;
  local_c_nil = c_nil;
  chpl_macro_tmp_440.locale = (this12).locale;
  chpl_macro_tmp_440.addr = &(((this12).addr)->len);
  chpl_gen_comm_get(((void*)(&T)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_440).locale), INT64(0), INT32(0)), (chpl_macro_tmp_440).addr, sizeof(int64_t), -1, COMMID(13), INT64(208), INT64(8));
  call_tmp2 = (T == INT64(0));
  if (call_tmp2) {
    call_tmp3 = (s_len == INT64(0));
    if (call_tmp3) {
      ret = UINT8(true);
      goto _end__if_fn257;
    } else {
      ret = (buf == local_c_nil);
      goto _end__if_fn257;
    }
    _end__if_fn257:;
    if (ret) {
      goto _end_reinitString;
    }
  }
  call_tmp4 = (s_len != INT64(0));
  if (call_tmp4) {
    if (needToCopy) {
      chpl_macro_tmp_441.locale = (this12).locale;
      chpl_macro_tmp_441.addr = &(((this12).addr)->owned);
      chpl_gen_comm_get(((void*)(&T2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_441).locale), INT64(0), INT32(0)), (chpl_macro_tmp_441).addr, sizeof(chpl_bool), -1, COMMID(14), INT64(216), INT64(8));
      call_tmp5 = (! T2);
      if (call_tmp5) {
        ret2 = UINT8(true);
        goto _end__if_fn259;
      } else {
        chpl_macro_tmp_442.locale = (this12).locale;
        chpl_macro_tmp_442.addr = &(((this12).addr)->_size);
        chpl_gen_comm_get(((void*)(&T3)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_442).locale), INT64(0), INT32(0)), (chpl_macro_tmp_442).addr, sizeof(int64_t), -1, COMMID(15), INT64(216), INT64(8));
        ret2 = (((int64_t)((s_len + INT64(1)))) > T3);
        goto _end__if_fn259;
      }
      _end__if_fn259:;
      if (ret2) {
        chpl_macro_tmp_443.locale = (this12).locale;
        chpl_macro_tmp_443.addr = &(((this12).addr)->owned);
        chpl_gen_comm_get(((void*)(&T4)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_443).locale), INT64(0), INT32(0)), (chpl_macro_tmp_443).addr, sizeof(chpl_bool), -1, COMMID(16), INT64(219), INT64(8));
        coerce_tmp = T4;
        if (coerce_tmp) {
          chpl_macro_tmp_444.locale = (this12).locale;
          chpl_macro_tmp_444.addr = &(((this12).addr)->len);
          chpl_gen_comm_get(((void*)(&T5)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_444).locale), INT64(0), INT32(0)), (chpl_macro_tmp_444).addr, sizeof(int64_t), -1, COMMID(17), INT64(219), INT64(8));
          ret3 = (! (T5 == INT64(0)));
          goto _end__if_fn258;
        } else {
          ret3 = UINT8(false);
          goto _end__if_fn258;
        }
        _end__if_fn258:;
        if (ret3) {
          chpl_macro_tmp_445.locale = (this12).locale;
          chpl_macro_tmp_445.addr = &(((this12).addr)->buff);
          chpl_gen_comm_get(((void*)(&T6)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_445).locale), INT64(0), INT32(0)), (chpl_macro_tmp_445).addr, sizeof(c_ptr_uint8_t), -1, COMMID(18), INT64(220), INT64(8));
          chpl_here_free(((c_void_ptr)(T6)));
        }
        call_tmp6 = chpl_here_good_alloc_size(((int64_t)((s_len + INT64(1)))));
        cast_tmp = chpl_here_alloc(call_tmp6, local_CHPL_RT_MD_STR_COPY_DATA);
        chpl_macro_tmp_446.locale = (this12).locale;
        chpl_macro_tmp_446.addr = &(((this12).addr)->buff);
        chpl_macro_tmp_447 = ((c_ptr_uint8_t)(cast_tmp));
        chpl_gen_comm_put(((void*)(&chpl_macro_tmp_447)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_446).locale), INT64(0), INT32(0)), (chpl_macro_tmp_446).addr, sizeof(c_ptr_uint8_t), -1, COMMID(19), INT64(223), INT64(8));
        chpl_macro_tmp_448.locale = (this12).locale;
        chpl_macro_tmp_448.addr = &(((this12).addr)->buff);
        chpl_gen_comm_get(((void*)(&T7)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_448).locale), INT64(0), INT32(0)), (chpl_macro_tmp_448).addr, sizeof(c_ptr_uint8_t), -1, COMMID(20), INT64(225), INT64(8));
        coerce_tmp2 = T7;
        call_tmp7 = (coerce_tmp2 + s_len);
        *(call_tmp7) = ((uint8_t)(INT64(0)));
        chpl_macro_tmp_449.locale = (this12).locale;
        chpl_macro_tmp_449.addr = &(((this12).addr)->_size);
        chpl_gen_comm_put(((void*)(&call_tmp6)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_449).locale), INT64(0), INT32(0)), (chpl_macro_tmp_449).addr, sizeof(int64_t), -1, COMMID(21), INT64(226), INT64(8));
        chpl_macro_tmp_450.locale = (this12).locale;
        chpl_macro_tmp_450.addr = &(((this12).addr)->owned);
        chpl_macro_tmp_451 = UINT8(true);
        chpl_gen_comm_put(((void*)(&chpl_macro_tmp_451)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_450).locale), INT64(0), INT32(0)), (chpl_macro_tmp_450).addr, sizeof(chpl_bool), -1, COMMID(22), INT64(228), INT64(8));
      }
      chpl_macro_tmp_452.locale = (this12).locale;
      chpl_macro_tmp_452.addr = &(((this12).addr)->buff);
      chpl_gen_comm_get(((void*)(&T8)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_452).locale), INT64(0), INT32(0)), (chpl_macro_tmp_452).addr, sizeof(c_ptr_uint8_t), -1, COMMID(23), INT64(230), INT64(8));
      memmove(((c_void_ptr)(T8)), ((c_void_ptr)(buf)), ((uint64_t)(s_len)));
    } else {
      chpl_macro_tmp_453.locale = (this12).locale;
      chpl_macro_tmp_453.addr = &(((this12).addr)->owned);
      chpl_gen_comm_get(((void*)(&T9)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_453).locale), INT64(0), INT32(0)), (chpl_macro_tmp_453).addr, sizeof(chpl_bool), -1, COMMID(24), INT64(232), INT64(8));
      coerce_tmp3 = T9;
      if (coerce_tmp3) {
        chpl_macro_tmp_454.locale = (this12).locale;
        chpl_macro_tmp_454.addr = &(((this12).addr)->len);
        chpl_gen_comm_get(((void*)(&T10)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_454).locale), INT64(0), INT32(0)), (chpl_macro_tmp_454).addr, sizeof(int64_t), -1, COMMID(25), INT64(232), INT64(8));
        ret4 = (! (T10 == INT64(0)));
        goto _end__if_fn260;
      } else {
        ret4 = UINT8(false);
        goto _end__if_fn260;
      }
      _end__if_fn260:;
      if (ret4) {
        chpl_macro_tmp_455.locale = (this12).locale;
        chpl_macro_tmp_455.addr = &(((this12).addr)->buff);
        chpl_gen_comm_get(((void*)(&T11)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_455).locale), INT64(0), INT32(0)), (chpl_macro_tmp_455).addr, sizeof(c_ptr_uint8_t), -1, COMMID(26), INT64(233), INT64(8));
        chpl_here_free(((c_void_ptr)(T11)));
      }
      chpl_macro_tmp_456.locale = (this12).locale;
      chpl_macro_tmp_456.addr = &(((this12).addr)->buff);
      chpl_gen_comm_put(((void*)(&buf)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_456).locale), INT64(0), INT32(0)), (chpl_macro_tmp_456).addr, sizeof(c_ptr_uint8_t), -1, COMMID(27), INT64(234), INT64(8));
      chpl_macro_tmp_457.locale = (this12).locale;
      chpl_macro_tmp_457.addr = &(((this12).addr)->_size);
      chpl_gen_comm_put(((void*)(&size18)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_457).locale), INT64(0), INT32(0)), (chpl_macro_tmp_457).addr, sizeof(int64_t), -1, COMMID(28), INT64(235), INT64(8));
    }
  } else {
    chpl_macro_tmp_458.locale = (this12).locale;
    chpl_macro_tmp_458.addr = &(((this12).addr)->owned);
    chpl_gen_comm_get(((void*)(&T12)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_458).locale), INT64(0), INT32(0)), (chpl_macro_tmp_458).addr, sizeof(chpl_bool), -1, COMMID(29), INT64(239), INT64(8));
    coerce_tmp4 = T12;
    if (coerce_tmp4) {
      chpl_macro_tmp_459.locale = (this12).locale;
      chpl_macro_tmp_459.addr = &(((this12).addr)->len);
      chpl_gen_comm_get(((void*)(&T13)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_459).locale), INT64(0), INT32(0)), (chpl_macro_tmp_459).addr, sizeof(int64_t), -1, COMMID(30), INT64(239), INT64(8));
      ret5 = (! (T13 == INT64(0)));
      goto _end__if_fn261;
    } else {
      ret5 = UINT8(false);
      goto _end__if_fn261;
    }
    _end__if_fn261:;
    if (ret5) {
      chpl_macro_tmp_460.locale = (this12).locale;
      chpl_macro_tmp_460.addr = &(((this12).addr)->buff);
      chpl_gen_comm_get(((void*)(&T14)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_460).locale), INT64(0), INT32(0)), (chpl_macro_tmp_460).addr, sizeof(c_ptr_uint8_t), -1, COMMID(31), INT64(239), INT64(8));
      chpl_here_free(((c_void_ptr)(T14)));
    }
    chpl_macro_tmp_461.locale = (this12).locale;
    chpl_macro_tmp_461.addr = &(((this12).addr)->buff);
    chpl_gen_comm_put(((void*)(&local_c_nil)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_461).locale), INT64(0), INT32(0)), (chpl_macro_tmp_461).addr, sizeof(c_void_ptr), -1, COMMID(32), INT64(240), INT64(8));
    chpl_macro_tmp_462.locale = (this12).locale;
    chpl_macro_tmp_462.addr = &(((this12).addr)->_size);
    chpl_macro_tmp_463 = INT64(0);
    chpl_gen_comm_put(((void*)(&chpl_macro_tmp_463)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_462).locale), INT64(0), INT32(0)), (chpl_macro_tmp_462).addr, sizeof(int64_t), -1, COMMID(33), INT64(241), INT64(8));
  }
  chpl_macro_tmp_464.locale = (this12).locale;
  chpl_macro_tmp_464.addr = &(((this12).addr)->len);
  chpl_gen_comm_put(((void*)(&s_len)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_464).locale), INT64(0), INT32(0)), (chpl_macro_tmp_464).addr, sizeof(int64_t), -1, COMMID(34), INT64(244), INT64(8));
  _end_reinitString:;
  return;
}

/* String.chpl:371 */
static void _getView(_ref_string this12,
                     _ref_range_int64_t_bounded_F r,
                     _ref_range_int64_t_bounded_F _retArg) {
  range_int64_t_boundedLow_F ret_tmp;
  _ref_range_int64_t_boundedLow_F ret_to_arg_ref_tmp_ = NULL;
  int64_t coerce_tmp;
  range_int64_t_bounded_F ret_tmp2;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_2 = NULL;
  range_int64_t_bounded_F ret_tmp3;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_3 = NULL;
  ret_to_arg_ref_tmp_ = &ret_tmp;
  chpl_build_low_bounded_range(INT64(1), ret_to_arg_ref_tmp_);
  coerce_tmp = (this12)->len;
  ret_to_arg_ref_tmp_2 = &ret_tmp2;
  chpl___POUND_(&ret_tmp, coerce_tmp, ret_to_arg_ref_tmp_2);
  ret_to_arg_ref_tmp_3 = &ret_tmp3;
  this7(r, &ret_tmp2, ret_to_arg_ref_tmp_3);
  *(_retArg) = ret_tmp3;
  return;
}

/* String.chpl:399 */
static void this11(_ref_string this12,
                   _ref_range_int64_t_bounded_F r,
                   _ref_string _retArg) {
  int16_t local_CHPL_RT_MD_STR_COPY_DATA;
  string local__str_literal_349;
  string ret;
  string ret2;
  string this13;
  c_ptr_uint8_t call_tmp2 = NULL;
  int32_t default_arglocale_id;
  string ret_tmp;
  _ref_string ret_to_arg_ref_tmp_ = NULL;
  chpl_bool call_tmp3;
  range_int64_t_bounded_F r2;
  range_int64_t_bounded_F ret_tmp2;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_2 = NULL;
  _ref_range_int64_t_bounded_F _ref_tmp_ = NULL;
  int64_t call_tmp4;
  chpl____wide__ref_range_int64_t_bounded_F T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp5;
  _ref_string _ref_tmp_2 = NULL;
  chpl____wide__ref_string T2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string T3 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_range_int64_t_bounded_F _ref_tmp_3 = NULL;
  int64_t call_tmp6;
  chpl____wide__ref_range_int64_t_bounded_F T4 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t coerce_tmp;
  int64_t call_tmp7;
  int64_t ret3;
  chpl_bool call_tmp8;
  c_void_ptr cast_tmp;
  c_ptr_uint8_t thisBuff = NULL;
  chpl_bool remoteThis;
  chpl_bool call_tmp9;
  c_ptr_uint8_t call_tmp10 = NULL;
  c_ptr_uint8_t coerce_tmp2 = NULL;
  range_int64_t_bounded_F _ic__F0_this;
  int64_t _ic__value;
  range_int64_t_boundedLow_F ret_tmp3;
  _ref_range_int64_t_boundedLow_F ret_to_arg_ref_tmp_3 = NULL;
  range_int64_t_boundedLow_F _ic__F0_this2;
  int64_t _ic__value2;
  int64_t ret4;
  int64_t ret5;
  int64_t ret6;
  c_ptr_uint8_t coerce_tmp3 = NULL;
  _ref_uint8_t call_tmp11 = NULL;
  int64_t call_tmp12;
  _ref_uint8_t call_tmp13 = NULL;
  int64_t T5;
  int64_t T6;
  int64_t T7;
  c_ptr_uint8_t coerce_tmp4 = NULL;
  int64_t coerce_tmp5;
  _ref_uint8_t call_tmp14 = NULL;
  chpl____wide__ref_range_int64_t_bounded_F chpl_macro_tmp_465;
  chpl____wide__ref_string chpl_macro_tmp_466;
  chpl____wide__ref_string chpl_macro_tmp_467;
  chpl____wide__ref_range_int64_t_bounded_F chpl_macro_tmp_468;
  local_CHPL_RT_MD_STR_COPY_DATA = CHPL_RT_MD_STR_COPY_DATA;
  local__str_literal_349 /* "" */ = _str_literal_349 /* "" */;
  (&this13)->len = INT64(0);
  (&this13)->_size = INT64(0);
  (&this13)->buff = nil;
  (&this13)->owned = UINT8(false);
  (&this13)->locale_id = INT32(0);
  (&this13)->len = INT64(0);
  (&this13)->_size = INT64(0);
  call_tmp2 = ((c_ptr_uint8_t)(nil));
  (&this13)->buff = call_tmp2;
  (&this13)->owned = UINT8(true);
  default_arglocale_id = chpl_nodeID;
  (&this13)->locale_id = default_arglocale_id;
  ret_to_arg_ref_tmp_ = &ret_tmp;
  _construct_string(INT64(0), INT64(0), call_tmp2, UINT8(true), default_arglocale_id, &this13, ret_to_arg_ref_tmp_);
  ret2 = ret_tmp;
  call_tmp3 = ((this12)->len == INT64(0));
  if (call_tmp3) {
    ret = ret_tmp;
    goto _end_this;
  }
  ret_to_arg_ref_tmp_2 = &ret_tmp2;
  _getView(this12, r, ret_to_arg_ref_tmp_2);
  r2 = ret_tmp2;
  _ref_tmp_ = &r2;
  chpl_macro_tmp_465.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_465.addr = _ref_tmp_;
  T = chpl_macro_tmp_465;
  call_tmp4 = length2(T);
  call_tmp5 = (call_tmp4 <= INT64(0));
  if (call_tmp5) {
    _ref_tmp_2 = &ret2;
    chpl_macro_tmp_466.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_466.addr = _ref_tmp_2;
    T2 = chpl_macro_tmp_466;
    chpl_macro_tmp_467.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_467.addr = &local__str_literal_349 /* "" */;
    T3 = chpl_macro_tmp_467;
    chpl___ASSIGN_13(T2, T3);
  } else {
    _ref_tmp_3 = &r2;
    chpl_macro_tmp_468.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_468.addr = _ref_tmp_3;
    T4 = chpl_macro_tmp_468;
    call_tmp6 = length2(T4);
    (&ret2)->len = call_tmp6;
    coerce_tmp = (&ret2)->len;
    call_tmp7 = chpl_here_good_alloc_size(((int64_t)((coerce_tmp + INT64(1)))));
    call_tmp8 = (INT64(16) > call_tmp7);
    if (call_tmp8) {
      ret3 = INT64(16);
      goto _end__if_fn3;
    } else {
      ret3 = call_tmp7;
      goto _end__if_fn3;
    }
    _end__if_fn3:;
    (&ret2)->_size = ret3;
    cast_tmp = chpl_here_alloc((&ret2)->_size, local_CHPL_RT_MD_STR_COPY_DATA);
    (&ret2)->buff = ((c_ptr_uint8_t)(cast_tmp));
    call_tmp9 = ((this12)->locale_id != chpl_nodeID);
    remoteThis = call_tmp9;
    if (call_tmp9) {
      call_tmp10 = copyRemoteBuffer(((int64_t)((this12)->locale_id)), (this12)->buff, (this12)->len);
      thisBuff = call_tmp10;
    } else {
      coerce_tmp2 = (this12)->buff;
      thisBuff = coerce_tmp2;
    }
    _ic__F0_this = r2;
    ret_to_arg_ref_tmp_3 = &ret_tmp3;
    chpl_build_low_bounded_range(INT64(0), ret_to_arg_ref_tmp_3);
    _ic__F0_this2 = ret_tmp3;
    ret4 = (&_ic__F0_this)->_low;
    ret5 = (&_ic__F0_this)->_high;
    ret6 = (&_ic__F0_this2)->_low;
    coerce_tmp3 = (&ret2)->buff;
    for (_ic__value = ret4,_ic__value2 = ret6; (T5 = (_ic__value <= ret5),T5); T6 = _ic__value,T6 += INT64(1),_ic__value = T6,T7 = _ic__value2,T7 += INT64(1),_ic__value2 = T7) {
      call_tmp11 = (coerce_tmp3 + _ic__value2);
      call_tmp12 = (_ic__value - INT64(1));
      call_tmp13 = (thisBuff + call_tmp12);
      *(call_tmp11) = *(call_tmp13);
    }
    coerce_tmp4 = (&ret2)->buff;
    coerce_tmp5 = (&ret2)->len;
    call_tmp14 = (coerce_tmp4 + coerce_tmp5);
    *(call_tmp14) = ((uint8_t)(INT64(0)));
    if (remoteThis) {
      chpl_here_free(((c_void_ptr)(thisBuff)));
    }
  }
  ret = ret2;
  _end_this:;
  *(_retArg) = ret;
  return;
}

/* String.chpl:895 */
static void strip(_ref_string this12,
                  _ref_string chars,
                  chpl_bool leading,
                  chpl_bool trailing,
                  _ref_string _retArg) {
  string local__str_literal_372;
  string ret;
  int64_t coerce_tmp;
  chpl_bool call_tmp2;
  chpl____wide__ref_string T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp3;
  string localThis;
  string type_tmp;
  string this13;
  c_ptr_uint8_t call_tmp4 = NULL;
  int32_t default_arglocale_id;
  string ret_tmp;
  _ref_string ret_to_arg_ref_tmp_ = NULL;
  string call_tmp5;
  string ret2;
  chpl_bool call_tmp6;
  string ret_tmp2;
  _ref_string ret_to_arg_ref_tmp_2 = NULL;
  _ref_string i_s = NULL;
  chpl____wide__ref_string T2 = {CHPL_LOCALEID_T_INIT, NULL};
  string type_tmp2;
  string this14;
  c_ptr_uint8_t call_tmp7 = NULL;
  int32_t default_arglocale_id2;
  string ret_tmp3;
  _ref_string ret_to_arg_ref_tmp_3 = NULL;
  _ref_string _ref_tmp_ = NULL;
  _ref_string i_rhs = NULL;
  chpl____wide__ref_string T3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string T4 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp_2 = NULL;
  chpl____wide__ref_string T5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string T6 = {CHPL_LOCALEID_T_INIT, NULL};
  string localChars;
  string type_tmp3;
  string this15;
  c_ptr_uint8_t call_tmp8 = NULL;
  int32_t default_arglocale_id3;
  string ret_tmp4;
  _ref_string ret_to_arg_ref_tmp_4 = NULL;
  string call_tmp9;
  string ret3;
  chpl_bool call_tmp10;
  string ret_tmp5;
  _ref_string ret_to_arg_ref_tmp_5 = NULL;
  _ref_string i_s2 = NULL;
  chpl____wide__ref_string T7 = {CHPL_LOCALEID_T_INIT, NULL};
  string type_tmp4;
  string this16;
  c_ptr_uint8_t call_tmp11 = NULL;
  int32_t default_arglocale_id4;
  string ret_tmp6;
  _ref_string ret_to_arg_ref_tmp_6 = NULL;
  _ref_string _ref_tmp_3 = NULL;
  _ref_string i_rhs2 = NULL;
  chpl____wide__ref_string T8 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string T9 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp_4 = NULL;
  chpl____wide__ref_string T10 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string T11 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t start;
  int64_t end;
  int64_t coerce_tmp2;
  int64_t coerce_tmp3;
  int64_t _ic__F1_high;
  int64_t i;
  int64_t i2;
  int64_t coerce_tmp4;
  int64_t _ic__F1_high2;
  int64_t i3;
  c_ptr_uint8_t coerce_tmp5 = NULL;
  _ref_uint8_t call_tmp12 = NULL;
  c_ptr_uint8_t coerce_tmp6 = NULL;
  _ref_uint8_t call_tmp13 = NULL;
  chpl_bool call_tmp14;
  _ref_int64_t _ref_tmp_5 = NULL;
  range_int64_t_boundedLow_F ret_tmp7;
  _ref_range_int64_t_boundedLow_F ret_to_arg_ref_tmp_7 = NULL;
  range_int64_t_bounded_F ret_tmp8;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_8 = NULL;
  range_int64_t_bounded_T ret_tmp9;
  _ref_range_int64_t_bounded_T ret_to_arg_ref_tmp_9 = NULL;
  range_int64_t_bounded_T _ic__F0_this;
  chpl_bool call_tmp15;
  _ref_range_int64_t_bounded_T this17 = NULL;
  chpl____wide__ref_range_int64_t_bounded_T T12 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t i4;
  int64_t ret4;
  int64_t coerce_tmp7;
  chpl_bool call_tmp16;
  int64_t ret5;
  int64_t call_tmp17;
  int64_t coerce_tmp8;
  int64_t coerce_tmp9;
  int64_t coerce_tmp10;
  int64_t ret6;
  int64_t call_tmp18;
  int64_t coerce_tmp11;
  int64_t coerce_tmp12;
  int64_t coerce_tmp13;
  int64_t end2;
  int64_t ret7;
  chpl_bool call_tmp19;
  int64_t ret8;
  int64_t ret9;
  chpl_bool call_tmp20;
  int64_t ret10;
  int64_t call_tmp21;
  int64_t coerce_tmp14;
  int64_t coerce_tmp15;
  int64_t coerce_tmp16;
  int64_t call_tmp22;
  int64_t ret11;
  int64_t i5;
  int64_t _ic__F1_high3;
  int64_t i6;
  c_ptr_uint8_t coerce_tmp17 = NULL;
  _ref_uint8_t call_tmp23 = NULL;
  c_ptr_uint8_t coerce_tmp18 = NULL;
  _ref_uint8_t call_tmp24 = NULL;
  chpl_bool call_tmp25;
  _ref_int64_t _ref_tmp_6 = NULL;
  range_int64_t_bounded_F ret_tmp10;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_10 = NULL;
  string ret_tmp11;
  _ref_string ret_to_arg_ref_tmp_11 = NULL;
  _ref_string _ref_tmp_7 = NULL;
  chpl____wide__ref_string T13 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp_8 = NULL;
  chpl____wide__ref_string T14 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp_9 = NULL;
  chpl____wide__ref_string T15 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp_10 = NULL;
  chpl____wide__ref_string T16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_469;
  chpl____wide__ref_string chpl_macro_tmp_470;
  chpl____wide__ref_string chpl_macro_tmp_471;
  chpl____wide__ref_string chpl_macro_tmp_472;
  chpl____wide__ref_string chpl_macro_tmp_473;
  chpl____wide__ref_string chpl_macro_tmp_474;
  chpl____wide__ref_string chpl_macro_tmp_475;
  chpl____wide__ref_string chpl_macro_tmp_476;
  chpl____wide__ref_string chpl_macro_tmp_477;
  chpl____wide__ref_string chpl_macro_tmp_478;
  chpl____wide__ref_string chpl_macro_tmp_479;
  chpl____wide__ref_range_int64_t_bounded_T chpl_macro_tmp_480;
  chpl____wide__ref_string chpl_macro_tmp_481;
  chpl____wide__ref_string chpl_macro_tmp_482;
  chpl____wide__ref_string chpl_macro_tmp_483;
  chpl____wide__ref_string chpl_macro_tmp_484;
  local__str_literal_372 /* "" */ = _str_literal_372 /* "" */;
  coerce_tmp = (this12)->len;
  call_tmp2 = (coerce_tmp == INT64(0));
  if (call_tmp2) {
    chpl_macro_tmp_469.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_469.addr = &local__str_literal_372 /* "" */;
    T = chpl_macro_tmp_469;
    ret = chpl__initCopy13(T);
    goto _end_strip;
  }
  call_tmp3 = ((chars)->len == INT64(0));
  if (call_tmp3) {
    ret = *(this12);
    goto _end_strip;
  }
  (&this13)->len = INT64(0);
  (&this13)->_size = INT64(0);
  (&this13)->buff = nil;
  (&this13)->owned = UINT8(false);
  (&this13)->locale_id = INT32(0);
  (&this13)->len = INT64(0);
  (&this13)->_size = INT64(0);
  call_tmp4 = ((c_ptr_uint8_t)(nil));
  (&this13)->buff = call_tmp4;
  (&this13)->owned = UINT8(true);
  default_arglocale_id = chpl_nodeID;
  (&this13)->locale_id = default_arglocale_id;
  ret_to_arg_ref_tmp_ = &ret_tmp;
  _construct_string(INT64(0), INT64(0), call_tmp4, UINT8(true), default_arglocale_id, &this13, ret_to_arg_ref_tmp_);
  type_tmp = ret_tmp;
  call_tmp6 = ((this12)->locale_id == chpl_nodeID);
  if (call_tmp6) {
    ret_to_arg_ref_tmp_2 = &ret_tmp2;
    i_s = this12;
    chpl_macro_tmp_470.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_470.addr = i_s;
    T2 = chpl_macro_tmp_470;
    string2(T2, UINT8(false), ret_to_arg_ref_tmp_2);
    ret2 = ret_tmp2;
    goto _end_localize;
  } else {
    (&this14)->len = INT64(0);
    (&this14)->_size = INT64(0);
    (&this14)->buff = nil;
    (&this14)->owned = UINT8(false);
    (&this14)->locale_id = INT32(0);
    (&this14)->len = INT64(0);
    (&this14)->_size = INT64(0);
    call_tmp7 = ((c_ptr_uint8_t)(nil));
    (&this14)->buff = call_tmp7;
    (&this14)->owned = UINT8(true);
    default_arglocale_id2 = chpl_nodeID;
    (&this14)->locale_id = default_arglocale_id2;
    ret_to_arg_ref_tmp_3 = &ret_tmp3;
    _construct_string(INT64(0), INT64(0), call_tmp7, UINT8(true), default_arglocale_id2, &this14, ret_to_arg_ref_tmp_3);
    type_tmp2 = ret_tmp3;
    _ref_tmp_ = &type_tmp2;
    i_rhs = this12;
    chpl_macro_tmp_471.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_471.addr = _ref_tmp_;
    T3 = chpl_macro_tmp_471;
    chpl_macro_tmp_472.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_472.addr = i_rhs;
    T4 = chpl_macro_tmp_472;
    chpl___ASSIGN_13(T3, T4);
    ret2 = type_tmp2;
    goto _end_localize;
  }
  _end_localize:;
  call_tmp5 = ret2;
  _ref_tmp_2 = &type_tmp;
  chpl_macro_tmp_473.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_473.addr = _ref_tmp_2;
  T5 = chpl_macro_tmp_473;
  chpl_macro_tmp_474.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_474.addr = &ret2;
  T6 = chpl_macro_tmp_474;
  chpl___ASSIGN_13(T5, T6);
  localThis = type_tmp;
  (&this15)->len = INT64(0);
  (&this15)->_size = INT64(0);
  (&this15)->buff = nil;
  (&this15)->owned = UINT8(false);
  (&this15)->locale_id = INT32(0);
  (&this15)->len = INT64(0);
  (&this15)->_size = INT64(0);
  call_tmp8 = ((c_ptr_uint8_t)(nil));
  (&this15)->buff = call_tmp8;
  (&this15)->owned = UINT8(true);
  default_arglocale_id3 = chpl_nodeID;
  (&this15)->locale_id = default_arglocale_id3;
  ret_to_arg_ref_tmp_4 = &ret_tmp4;
  _construct_string(INT64(0), INT64(0), call_tmp8, UINT8(true), default_arglocale_id3, &this15, ret_to_arg_ref_tmp_4);
  type_tmp3 = ret_tmp4;
  call_tmp10 = ((chars)->locale_id == chpl_nodeID);
  if (call_tmp10) {
    ret_to_arg_ref_tmp_5 = &ret_tmp5;
    i_s2 = chars;
    chpl_macro_tmp_475.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_475.addr = i_s2;
    T7 = chpl_macro_tmp_475;
    string2(T7, UINT8(false), ret_to_arg_ref_tmp_5);
    ret3 = ret_tmp5;
    goto _end_localize2;
  } else {
    (&this16)->len = INT64(0);
    (&this16)->_size = INT64(0);
    (&this16)->buff = nil;
    (&this16)->owned = UINT8(false);
    (&this16)->locale_id = INT32(0);
    (&this16)->len = INT64(0);
    (&this16)->_size = INT64(0);
    call_tmp11 = ((c_ptr_uint8_t)(nil));
    (&this16)->buff = call_tmp11;
    (&this16)->owned = UINT8(true);
    default_arglocale_id4 = chpl_nodeID;
    (&this16)->locale_id = default_arglocale_id4;
    ret_to_arg_ref_tmp_6 = &ret_tmp6;
    _construct_string(INT64(0), INT64(0), call_tmp11, UINT8(true), default_arglocale_id4, &this16, ret_to_arg_ref_tmp_6);
    type_tmp4 = ret_tmp6;
    _ref_tmp_3 = &type_tmp4;
    i_rhs2 = chars;
    chpl_macro_tmp_476.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_476.addr = _ref_tmp_3;
    T8 = chpl_macro_tmp_476;
    chpl_macro_tmp_477.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_477.addr = i_rhs2;
    T9 = chpl_macro_tmp_477;
    chpl___ASSIGN_13(T8, T9);
    ret3 = type_tmp4;
    goto _end_localize2;
  }
  _end_localize2:;
  call_tmp9 = ret3;
  _ref_tmp_4 = &type_tmp3;
  chpl_macro_tmp_478.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_478.addr = _ref_tmp_4;
  T10 = chpl_macro_tmp_478;
  chpl_macro_tmp_479.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_479.addr = &ret3;
  T11 = chpl_macro_tmp_479;
  chpl___ASSIGN_13(T10, T11);
  localChars = type_tmp3;
  start = INT64(1);
  coerce_tmp2 = (&localThis)->len;
  end = coerce_tmp2;
  if (leading) {
    coerce_tmp3 = (&localThis)->len;
    _ic__F1_high = ((int64_t)((((int64_t)((INT64(0) + coerce_tmp3))) - INT64(1))));
    coerce_tmp4 = (&localChars)->len;
    _ic__F1_high2 = ((int64_t)((((int64_t)((INT64(0) + coerce_tmp4))) - INT64(1))));
    for (i = INT64(0); ((i <= _ic__F1_high)); i += INT64(1)) {
      i2 = i;
      coerce_tmp5 = (&localThis)->buff;
      coerce_tmp6 = (&localChars)->buff;
      for (i3 = INT64(0); ((i3 <= _ic__F1_high2)); i3 += INT64(1)) {
        call_tmp12 = (coerce_tmp5 + i2);
        call_tmp13 = (coerce_tmp6 + i3);
        call_tmp14 = (*(call_tmp12) == *(call_tmp13));
        if (call_tmp14) {
          _ref_tmp_5 = &start;
          *(_ref_tmp_5) += INT64(1);
          goto _continueLabel;
        }
      }
      goto _breakLabel;
      _continueLabel:;
    }
    _breakLabel:;
  }
  if (trailing) {
    ret_to_arg_ref_tmp_7 = &ret_tmp7;
    chpl_build_low_bounded_range(INT64(0), ret_to_arg_ref_tmp_7);
    ret_to_arg_ref_tmp_8 = &ret_tmp8;
    chpl___POUND_(&ret_tmp7, (&localThis)->len, ret_to_arg_ref_tmp_8);
    ret_to_arg_ref_tmp_9 = &ret_tmp9;
    chpl_by_help(&ret_tmp8, INT64(-1), ret_to_arg_ref_tmp_9);
    _ic__F0_this = ret_tmp9;
    this17 = &_ic__F0_this;
    chpl_macro_tmp_480.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_480.addr = this17;
    T12 = chpl_macro_tmp_480;
    call_tmp15 = isAmbiguous(T12);
    if (call_tmp15) {
      chpl_error("these -- Attempt to iterate over a range with ambiguous alignment.", INT64(918), INT32(8));
    }
    coerce_tmp7 = (&_ic__F0_this)->_stride;
    call_tmp16 = (coerce_tmp7 > INT64(0));
    if (call_tmp16) {
      ret5 = (&_ic__F0_this)->_stride;
      coerce_tmp8 = (&_ic__F0_this)->_alignment;
      coerce_tmp9 = (&_ic__F0_this)->_low;
      call_tmp17 = chpl__diffMod(coerce_tmp8, coerce_tmp9, ret5);
      coerce_tmp10 = (&_ic__F0_this)->_low;
      ret4 = ((int64_t)((coerce_tmp10 + call_tmp17)));
      goto _end__if_fn29;
    } else {
      ret6 = (&_ic__F0_this)->_stride;
      coerce_tmp11 = (&_ic__F0_this)->_high;
      coerce_tmp12 = (&_ic__F0_this)->_alignment;
      call_tmp18 = chpl__diffMod(coerce_tmp11, coerce_tmp12, ret6);
      coerce_tmp13 = (&_ic__F0_this)->_high;
      ret4 = ((int64_t)((coerce_tmp13 - call_tmp18)));
      goto _end__if_fn29;
    }
    _end__if_fn29:;
    call_tmp19 = ((&_ic__F0_this)->_low > (&_ic__F0_this)->_high);
    if (call_tmp19) {
      ret7 = ret4;
      goto _end__if_fn48;
    } else {
      ret9 = (&_ic__F0_this)->_stride;
      call_tmp20 = (ret9 > INT64(0));
      if (call_tmp20) {
        ret10 = (&_ic__F0_this)->_stride;
        coerce_tmp14 = (&_ic__F0_this)->_high;
        coerce_tmp15 = (&_ic__F0_this)->_alignment;
        call_tmp21 = chpl__diffMod(coerce_tmp14, coerce_tmp15, ret10);
        coerce_tmp16 = (&_ic__F0_this)->_high;
        ret8 = ((int64_t)((coerce_tmp16 - call_tmp21)));
        goto _end__if_fn30;
      } else {
        call_tmp22 = chpl__diffMod((&_ic__F0_this)->_alignment, (&_ic__F0_this)->_low, (&_ic__F0_this)->_stride);
        ret8 = ((int64_t)(((&_ic__F0_this)->_low + call_tmp22)));
        goto _end__if_fn30;
      }
      _end__if_fn30:;
      ret11 = (&_ic__F0_this)->_stride;
      ret7 = ((int64_t)((ret8 + ret11)));
      goto _end__if_fn48;
    }
    _end__if_fn48:;
    end2 = ret7;
    _ic__F1_high3 = ((int64_t)((((int64_t)((INT64(0) + (&localChars)->len))) - INT64(1))));
    for (i4 = ret4; ((i4 != end2)); i4 += (&_ic__F0_this)->_stride) {
      i5 = i4;
      coerce_tmp17 = (&localThis)->buff;
      coerce_tmp18 = (&localChars)->buff;
      for (i6 = INT64(0); ((i6 <= _ic__F1_high3)); i6 += INT64(1)) {
        call_tmp23 = (coerce_tmp17 + i5);
        call_tmp24 = (coerce_tmp18 + i6);
        call_tmp25 = (*(call_tmp23) == *(call_tmp24));
        if (call_tmp25) {
          _ref_tmp_6 = &end;
          *(_ref_tmp_6) -= INT64(1);
          goto _continueLabel2;
        }
      }
      goto _breakLabel2;
      _continueLabel2:;
    }
    _breakLabel2:;
  }
  ret_to_arg_ref_tmp_10 = &ret_tmp10;
  chpl_build_bounded_range(start, end, ret_to_arg_ref_tmp_10);
  ret_to_arg_ref_tmp_11 = &ret_tmp11;
  this11(&localThis, &ret_tmp10, ret_to_arg_ref_tmp_11);
  ret = ret_tmp11;
  _ref_tmp_7 = &call_tmp9;
  chpl_macro_tmp_481.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_481.addr = _ref_tmp_7;
  T13 = chpl_macro_tmp_481;
  deinit44(T13);
  _ref_tmp_8 = &localChars;
  chpl_macro_tmp_482.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_482.addr = _ref_tmp_8;
  T14 = chpl_macro_tmp_482;
  deinit44(T14);
  _ref_tmp_9 = &call_tmp5;
  chpl_macro_tmp_483.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_483.addr = _ref_tmp_9;
  T15 = chpl_macro_tmp_483;
  deinit44(T15);
  _ref_tmp_10 = &localThis;
  chpl_macro_tmp_484.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_484.addr = _ref_tmp_10;
  T16 = chpl_macro_tmp_484;
  deinit44(T16);
  _end_strip:;
  *(_retArg) = ret;
  return;
}

/* String.chpl:1257 */
static string chpl__autoCopy6(_ref_string s) {
  int16_t local_CHPL_RT_MD_STR_COPY_DATA;
  string ret;
  string this12;
  c_ptr_uint8_t call_tmp2 = NULL;
  int32_t default_arglocale_id;
  string ret_tmp;
  _ref_string ret_to_arg_ref_tmp_ = NULL;
  int64_t coerce_tmp;
  chpl_bool call_tmp3;
  chpl_bool call_tmp4;
  chpl_bool coerce_tmp2;
  c_void_ptr cast_tmp;
  c_ptr_uint8_t coerce_tmp3 = NULL;
  int64_t coerce_tmp4;
  _ref_uint8_t call_tmp5 = NULL;
  c_ptr_uint8_t coerce_tmp5 = NULL;
  c_ptr_uint8_t call_tmp6 = NULL;
  int32_t coerce_tmp6;
  local_CHPL_RT_MD_STR_COPY_DATA = CHPL_RT_MD_STR_COPY_DATA;
  (&this12)->len = INT64(0);
  (&this12)->_size = INT64(0);
  (&this12)->buff = nil;
  (&this12)->owned = UINT8(false);
  (&this12)->locale_id = INT32(0);
  (&this12)->len = INT64(0);
  (&this12)->_size = INT64(0);
  call_tmp2 = ((c_ptr_uint8_t)(nil));
  (&this12)->buff = call_tmp2;
  (&this12)->owned = UINT8(true);
  default_arglocale_id = chpl_nodeID;
  (&this12)->locale_id = default_arglocale_id;
  ret_to_arg_ref_tmp_ = &ret_tmp;
  _construct_string(INT64(0), INT64(0), call_tmp2, UINT8(true), default_arglocale_id, &this12, ret_to_arg_ref_tmp_);
  ret = ret_tmp;
  coerce_tmp = (s)->len;
  call_tmp3 = (coerce_tmp != INT64(0));
  if (call_tmp3) {
    call_tmp4 = ((s)->locale_id == chpl_nodeID);
    if (call_tmp4) {
      coerce_tmp2 = (s)->owned;
      if (coerce_tmp2) {
        cast_tmp = chpl_here_alloc((s)->_size, local_CHPL_RT_MD_STR_COPY_DATA);
        (&ret)->buff = ((c_ptr_uint8_t)(cast_tmp));
        memcpy(((c_void_ptr)((&ret)->buff)), ((c_void_ptr)((s)->buff)), ((uint64_t)((s)->len)));
        coerce_tmp3 = (&ret)->buff;
        coerce_tmp4 = (s)->len;
        call_tmp5 = (coerce_tmp3 + coerce_tmp4);
        *(call_tmp5) = ((uint8_t)(INT64(0)));
      } else {
        coerce_tmp5 = (s)->buff;
        (&ret)->buff = coerce_tmp5;
      }
      (&ret)->owned = (s)->owned;
    } else {
      coerce_tmp6 = (s)->locale_id;
      call_tmp6 = copyRemoteBuffer(((int64_t)(coerce_tmp6)), (s)->buff, coerce_tmp);
      (&ret)->buff = call_tmp6;
      (&ret)->owned = UINT8(true);
    }
    (&ret)->len = coerce_tmp;
    (&ret)->_size = ((int64_t)((coerce_tmp + INT64(1))));
  }
  return ret;
}

/* String.chpl:1297 */
static string chpl__initCopy13(chpl____wide__ref_string s) {
  int16_t local_CHPL_RT_MD_STR_COPY_DATA;
  string ret;
  string this12;
  c_ptr_uint8_t call_tmp2 = NULL;
  int32_t default_arglocale_id;
  string ret_tmp;
  _ref_string ret_to_arg_ref_tmp_ = NULL;
  int64_t coerce_tmp;
  int64_t T;
  chpl_bool call_tmp3;
  int32_t T2;
  chpl_bool call_tmp4;
  chpl_bool coerce_tmp2;
  chpl_bool T3;
  int64_t T4;
  c_void_ptr cast_tmp;
  c_ptr_uint8_t T5 = NULL;
  int64_t T6;
  c_ptr_uint8_t coerce_tmp3 = NULL;
  int64_t coerce_tmp4;
  int64_t T7;
  _ref_uint8_t call_tmp5 = NULL;
  c_ptr_uint8_t T8 = NULL;
  chpl_bool T9;
  c_ptr_uint8_t call_tmp6 = NULL;
  int32_t T10;
  c_ptr_uint8_t T11 = NULL;
  chpl____wide__ref_int64_t chpl_macro_tmp_485;
  chpl____wide__ref_int32_t chpl_macro_tmp_486;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_487;
  chpl____wide__ref_int64_t chpl_macro_tmp_488;
  chpl____wide__ref_c_ptr_uint8_t chpl_macro_tmp_489;
  chpl____wide__ref_int64_t chpl_macro_tmp_490;
  chpl____wide__ref_int64_t chpl_macro_tmp_491;
  chpl____wide__ref_c_ptr_uint8_t chpl_macro_tmp_492;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_493;
  chpl____wide__ref_int32_t chpl_macro_tmp_494;
  chpl____wide__ref_c_ptr_uint8_t chpl_macro_tmp_495;
  local_CHPL_RT_MD_STR_COPY_DATA = CHPL_RT_MD_STR_COPY_DATA;
  (&this12)->len = INT64(0);
  (&this12)->_size = INT64(0);
  (&this12)->buff = nil;
  (&this12)->owned = UINT8(false);
  (&this12)->locale_id = INT32(0);
  (&this12)->len = INT64(0);
  (&this12)->_size = INT64(0);
  call_tmp2 = ((c_ptr_uint8_t)(nil));
  (&this12)->buff = call_tmp2;
  (&this12)->owned = UINT8(true);
  default_arglocale_id = chpl_nodeID;
  (&this12)->locale_id = default_arglocale_id;
  ret_to_arg_ref_tmp_ = &ret_tmp;
  _construct_string(INT64(0), INT64(0), call_tmp2, UINT8(true), default_arglocale_id, &this12, ret_to_arg_ref_tmp_);
  ret = ret_tmp;
  chpl_macro_tmp_485.locale = (s).locale;
  chpl_macro_tmp_485.addr = &(((s).addr)->len);
  chpl_gen_comm_get(((void*)(&T)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_485).locale), INT64(0), INT32(0)), (chpl_macro_tmp_485).addr, sizeof(int64_t), -1, COMMID(35), INT64(1301), INT64(8));
  coerce_tmp = T;
  call_tmp3 = (coerce_tmp != INT64(0));
  if (call_tmp3) {
    chpl_macro_tmp_486.locale = (s).locale;
    chpl_macro_tmp_486.addr = &(((s).addr)->locale_id);
    chpl_gen_comm_get(((void*)(&T2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_486).locale), INT64(0), INT32(0)), (chpl_macro_tmp_486).addr, sizeof(int32_t), -1, COMMID(36), INT64(1303), INT64(8));
    call_tmp4 = (T2 == chpl_nodeID);
    if (call_tmp4) {
      chpl_macro_tmp_487.locale = (s).locale;
      chpl_macro_tmp_487.addr = &(((s).addr)->owned);
      chpl_gen_comm_get(((void*)(&T3)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_487).locale), INT64(0), INT32(0)), (chpl_macro_tmp_487).addr, sizeof(chpl_bool), -1, COMMID(37), INT64(1304), INT64(8));
      coerce_tmp2 = T3;
      if (coerce_tmp2) {
        chpl_macro_tmp_488.locale = (s).locale;
        chpl_macro_tmp_488.addr = &(((s).addr)->_size);
        chpl_gen_comm_get(((void*)(&T4)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_488).locale), INT64(0), INT32(0)), (chpl_macro_tmp_488).addr, sizeof(int64_t), -1, COMMID(38), INT64(1305), INT64(8));
        cast_tmp = chpl_here_alloc(T4, local_CHPL_RT_MD_STR_COPY_DATA);
        (&ret)->buff = ((c_ptr_uint8_t)(cast_tmp));
        chpl_macro_tmp_489.locale = (s).locale;
        chpl_macro_tmp_489.addr = &(((s).addr)->buff);
        chpl_gen_comm_get(((void*)(&T5)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_489).locale), INT64(0), INT32(0)), (chpl_macro_tmp_489).addr, sizeof(c_ptr_uint8_t), -1, COMMID(39), INT64(1307), INT64(8));
        chpl_macro_tmp_490.locale = (s).locale;
        chpl_macro_tmp_490.addr = &(((s).addr)->len);
        chpl_gen_comm_get(((void*)(&T6)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_490).locale), INT64(0), INT32(0)), (chpl_macro_tmp_490).addr, sizeof(int64_t), -1, COMMID(40), INT64(1307), INT64(8));
        memcpy(((c_void_ptr)((&ret)->buff)), ((c_void_ptr)(T5)), ((uint64_t)(T6)));
        coerce_tmp3 = (&ret)->buff;
        chpl_macro_tmp_491.locale = (s).locale;
        chpl_macro_tmp_491.addr = &(((s).addr)->len);
        chpl_gen_comm_get(((void*)(&T7)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_491).locale), INT64(0), INT32(0)), (chpl_macro_tmp_491).addr, sizeof(int64_t), -1, COMMID(41), INT64(1308), INT64(8));
        coerce_tmp4 = T7;
        call_tmp5 = (coerce_tmp3 + coerce_tmp4);
        *(call_tmp5) = ((uint8_t)(INT64(0)));
      } else {
        chpl_macro_tmp_492.locale = (s).locale;
        chpl_macro_tmp_492.addr = &(((s).addr)->buff);
        chpl_gen_comm_get(((void*)(&T8)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_492).locale), INT64(0), INT32(0)), (chpl_macro_tmp_492).addr, sizeof(c_ptr_uint8_t), -1, COMMID(42), INT64(1310), INT64(8));
        (&ret)->buff = T8;
      }
      chpl_macro_tmp_493.locale = (s).locale;
      chpl_macro_tmp_493.addr = &(((s).addr)->owned);
      chpl_gen_comm_get(((void*)(&T9)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_493).locale), INT64(0), INT32(0)), (chpl_macro_tmp_493).addr, sizeof(chpl_bool), -1, COMMID(43), INT64(1312), INT64(8));
      (&ret)->owned = T9;
    } else {
      chpl_macro_tmp_494.locale = (s).locale;
      chpl_macro_tmp_494.addr = &(((s).addr)->locale_id);
      chpl_gen_comm_get(((void*)(&T10)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_494).locale), INT64(0), INT32(0)), (chpl_macro_tmp_494).addr, sizeof(int32_t), -1, COMMID(44), INT64(1314), INT64(8));
      chpl_macro_tmp_495.locale = (s).locale;
      chpl_macro_tmp_495.addr = &(((s).addr)->buff);
      chpl_gen_comm_get(((void*)(&T11)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_495).locale), INT64(0), INT32(0)), (chpl_macro_tmp_495).addr, sizeof(c_ptr_uint8_t), -1, COMMID(45), INT64(1314), INT64(8));
      call_tmp6 = copyRemoteBuffer(((int64_t)(T10)), T11, coerce_tmp);
      (&ret)->buff = call_tmp6;
      (&ret)->owned = UINT8(true);
    }
    (&ret)->len = coerce_tmp;
    (&ret)->_size = ((int64_t)((coerce_tmp + INT64(1))));
  }
  return ret;
}

/* String.chpl:1329 */
static void chpl___ASSIGN_13(chpl____wide__ref_string lhs,
                             chpl____wide__ref_string rhs) {
  int32_t local_c_sublocid_any;
  c_void_ptr local_c_nil;
  int32_t T;
  chpl_bool call_tmp2;
  int32_t T2;
  chpl_bool call_tmp3;
  c_ptr_uint8_t T3 = NULL;
  int64_t T4;
  int64_t T5;
  int64_t coerce_tmp;
  int64_t T6;
  c_ptr_uint8_t remote_buf = NULL;
  c_ptr_uint8_t type_tmp = NULL;
  chpl_bool call_tmp4;
  c_ptr_uint8_t call_tmp5 = NULL;
  int32_t T7;
  c_ptr_uint8_t T8 = NULL;
  int32_t T9;
  chpl_localeID_t ret_tmp;
  _ref_chpl_localeID_t ret_to_arg_ref_tmp_ = NULL;
  chpl_localeID_t call_tmp6;
  chpl____wide__ref_string T10 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string T11 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect;
  _class_localson_fn190 _args_foron_fn = NULL;
  chpl____wide__ref_string T12 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string T13 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn;
  chpl____wide__ref_int32_t chpl_macro_tmp_496;
  chpl____wide__ref_int32_t chpl_macro_tmp_497;
  chpl____wide__ref_c_ptr_uint8_t chpl_macro_tmp_498;
  chpl____wide__ref_int64_t chpl_macro_tmp_499;
  chpl____wide__ref_int64_t chpl_macro_tmp_500;
  chpl____wide__ref_int64_t chpl_macro_tmp_501;
  chpl____wide__ref_int32_t chpl_macro_tmp_502;
  chpl____wide__ref_c_ptr_uint8_t chpl_macro_tmp_503;
  chpl____wide__ref_int32_t chpl_macro_tmp_504;
  chpl__class_localson_fn190_object chpl_macro_tmp_505;
  local_c_sublocid_any = c_sublocid_any;
  local_c_nil = c_nil;
  chpl_macro_tmp_496.locale = (lhs).locale;
  chpl_macro_tmp_496.addr = &(((lhs).addr)->locale_id);
  chpl_gen_comm_get(((void*)(&T)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_496).locale), INT64(0), INT32(0)), (chpl_macro_tmp_496).addr, sizeof(int32_t), -1, COMMID(46), INT64(1342), INT64(8));
  call_tmp2 = (T == chpl_nodeID);
  if (call_tmp2) {
    chpl_macro_tmp_497.locale = (rhs).locale;
    chpl_macro_tmp_497.addr = &(((rhs).addr)->locale_id);
    chpl_gen_comm_get(((void*)(&T2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_497).locale), INT64(0), INT32(0)), (chpl_macro_tmp_497).addr, sizeof(int32_t), -1, COMMID(47), INT64(1343), INT64(8));
    call_tmp3 = (T2 == chpl_nodeID);
    if (call_tmp3) {
      chpl_macro_tmp_498.locale = (rhs).locale;
      chpl_macro_tmp_498.addr = &(((rhs).addr)->buff);
      chpl_gen_comm_get(((void*)(&T3)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_498).locale), INT64(0), INT32(0)), (chpl_macro_tmp_498).addr, sizeof(c_ptr_uint8_t), -1, COMMID(48), INT64(1343), INT64(8));
      chpl_macro_tmp_499.locale = (rhs).locale;
      chpl_macro_tmp_499.addr = &(((rhs).addr)->len);
      chpl_gen_comm_get(((void*)(&T4)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_499).locale), INT64(0), INT32(0)), (chpl_macro_tmp_499).addr, sizeof(int64_t), -1, COMMID(49), INT64(1343), INT64(8));
      chpl_macro_tmp_500.locale = (rhs).locale;
      chpl_macro_tmp_500.addr = &(((rhs).addr)->_size);
      chpl_gen_comm_get(((void*)(&T5)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_500).locale), INT64(0), INT32(0)), (chpl_macro_tmp_500).addr, sizeof(int64_t), -1, COMMID(50), INT64(1343), INT64(8));
      reinitString(lhs, T3, T4, T5, UINT8(true));
    } else {
      chpl_macro_tmp_501.locale = (rhs).locale;
      chpl_macro_tmp_501.addr = &(((rhs).addr)->len);
      chpl_gen_comm_get(((void*)(&T6)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_501).locale), INT64(0), INT32(0)), (chpl_macro_tmp_501).addr, sizeof(int64_t), -1, COMMID(51), INT64(1343), INT64(8));
      coerce_tmp = T6;
      type_tmp = local_c_nil;
      remote_buf = type_tmp;
      call_tmp4 = (coerce_tmp != INT64(0));
      if (call_tmp4) {
        chpl_macro_tmp_502.locale = (rhs).locale;
        chpl_macro_tmp_502.addr = &(((rhs).addr)->locale_id);
        chpl_gen_comm_get(((void*)(&T7)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_502).locale), INT64(0), INT32(0)), (chpl_macro_tmp_502).addr, sizeof(int32_t), -1, COMMID(52), INT64(1343), INT64(8));
        chpl_macro_tmp_503.locale = (rhs).locale;
        chpl_macro_tmp_503.addr = &(((rhs).addr)->buff);
        chpl_gen_comm_get(((void*)(&T8)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_503).locale), INT64(0), INT32(0)), (chpl_macro_tmp_503).addr, sizeof(c_ptr_uint8_t), -1, COMMID(53), INT64(1343), INT64(8));
        call_tmp5 = copyRemoteBuffer(((int64_t)(T7)), T8, coerce_tmp);
        remote_buf = call_tmp5;
      }
      reinitString(lhs, remote_buf, coerce_tmp, ((int64_t)((coerce_tmp + INT64(1)))), UINT8(false));
    }
  } else {
    chpl_macro_tmp_504.locale = (lhs).locale;
    chpl_macro_tmp_504.addr = &(((lhs).addr)->locale_id);
    chpl_gen_comm_get(((void*)(&T9)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_504).locale), INT64(0), INT32(0)), (chpl_macro_tmp_504).addr, sizeof(int32_t), -1, COMMID(54), INT64(1347), INT64(8));
    ret_to_arg_ref_tmp_ = &ret_tmp;
    chpl_buildLocaleID(T9, local_c_sublocid_any, ret_to_arg_ref_tmp_, INT64(1347), INT32(8));
    call_tmp6 = ret_tmp;
    T10 = lhs;
    T11 = rhs;
    isdirect = chpl_doDirectExecuteOn(&call_tmp6);
    if (isdirect) {
      on_fn190(T10, T11);
    } else {
      _args_foron_fn = ((_class_localson_fn190)(&chpl_macro_tmp_505));
      (_args_foron_fn)->_0_rvfDerefTmp = call_tmp6;
      T12 = lhs;
      (_args_foron_fn)->_1_tmp = T12;
      T13 = rhs;
      (_args_foron_fn)->_2_tmp = T13;
      _args_vforon_fn = ((void*)(_args_foron_fn));
      /*** wrapon_fn190 ***/ chpl_executeOn(&call_tmp6, INT32(255), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn190_object), INT64(1346), INT32(8));
    }
  }
  return;
}

/* String.chpl:1346 */
static void on_fn190(chpl____wide__ref_string lhs,
                     chpl____wide__ref_string rhs) {
  c_void_ptr local_c_nil;
  chpl____wide__ref_string i_rhs = {CHPL_LOCALEID_T_INIT, NULL};
  int32_t T;
  chpl_bool call_tmp2;
  c_ptr_uint8_t T2 = NULL;
  int64_t T3;
  int64_t T4;
  int64_t coerce_tmp;
  int64_t T5;
  c_ptr_uint8_t remote_buf = NULL;
  c_ptr_uint8_t type_tmp = NULL;
  chpl_bool call_tmp3;
  c_ptr_uint8_t call_tmp4 = NULL;
  int32_t T6;
  c_ptr_uint8_t T7 = NULL;
  chpl____wide__ref_int32_t chpl_macro_tmp_506;
  chpl____wide__ref_c_ptr_uint8_t chpl_macro_tmp_507;
  chpl____wide__ref_int64_t chpl_macro_tmp_508;
  chpl____wide__ref_int64_t chpl_macro_tmp_509;
  chpl____wide__ref_int64_t chpl_macro_tmp_510;
  chpl____wide__ref_int32_t chpl_macro_tmp_511;
  chpl____wide__ref_c_ptr_uint8_t chpl_macro_tmp_512;
  local_c_nil = c_nil;
  i_rhs = rhs;
  chpl_macro_tmp_506.locale = (i_rhs).locale;
  chpl_macro_tmp_506.addr = &(((i_rhs).addr)->locale_id);
  chpl_gen_comm_get(((void*)(&T)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_506).locale), INT64(0), INT32(0)), (chpl_macro_tmp_506).addr, sizeof(int32_t), -1, COMMID(55), INT64(1348), INT64(8));
  call_tmp2 = (T == chpl_nodeID);
  if (call_tmp2) {
    chpl_macro_tmp_507.locale = (i_rhs).locale;
    chpl_macro_tmp_507.addr = &(((i_rhs).addr)->buff);
    chpl_gen_comm_get(((void*)(&T2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_507).locale), INT64(0), INT32(0)), (chpl_macro_tmp_507).addr, sizeof(c_ptr_uint8_t), -1, COMMID(56), INT64(1348), INT64(8));
    chpl_macro_tmp_508.locale = (i_rhs).locale;
    chpl_macro_tmp_508.addr = &(((i_rhs).addr)->len);
    chpl_gen_comm_get(((void*)(&T3)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_508).locale), INT64(0), INT32(0)), (chpl_macro_tmp_508).addr, sizeof(int64_t), -1, COMMID(57), INT64(1348), INT64(8));
    chpl_macro_tmp_509.locale = (i_rhs).locale;
    chpl_macro_tmp_509.addr = &(((i_rhs).addr)->_size);
    chpl_gen_comm_get(((void*)(&T4)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_509).locale), INT64(0), INT32(0)), (chpl_macro_tmp_509).addr, sizeof(int64_t), -1, COMMID(58), INT64(1348), INT64(8));
    reinitString(lhs, T2, T3, T4, UINT8(true));
  } else {
    chpl_macro_tmp_510.locale = (i_rhs).locale;
    chpl_macro_tmp_510.addr = &(((i_rhs).addr)->len);
    chpl_gen_comm_get(((void*)(&T5)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_510).locale), INT64(0), INT32(0)), (chpl_macro_tmp_510).addr, sizeof(int64_t), -1, COMMID(59), INT64(1348), INT64(8));
    coerce_tmp = T5;
    type_tmp = local_c_nil;
    remote_buf = type_tmp;
    call_tmp3 = (coerce_tmp != INT64(0));
    if (call_tmp3) {
      chpl_macro_tmp_511.locale = (i_rhs).locale;
      chpl_macro_tmp_511.addr = &(((i_rhs).addr)->locale_id);
      chpl_gen_comm_get(((void*)(&T6)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_511).locale), INT64(0), INT32(0)), (chpl_macro_tmp_511).addr, sizeof(int32_t), -1, COMMID(60), INT64(1348), INT64(8));
      chpl_macro_tmp_512.locale = (i_rhs).locale;
      chpl_macro_tmp_512.addr = &(((i_rhs).addr)->buff);
      chpl_gen_comm_get(((void*)(&T7)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_512).locale), INT64(0), INT32(0)), (chpl_macro_tmp_512).addr, sizeof(c_ptr_uint8_t), -1, COMMID(61), INT64(1348), INT64(8));
      call_tmp4 = copyRemoteBuffer(((int64_t)(T6)), T7, coerce_tmp);
      remote_buf = call_tmp4;
    }
    reinitString(lhs, remote_buf, coerce_tmp, ((int64_t)((coerce_tmp + INT64(1)))), UINT8(false));
  }
  return;
}

/* String.chpl:1346 */
static void wrapon_fn190(_class_localson_fn190 c) {
  chpl____wide__ref_string _1_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string _2_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  _1_tmp = (c)->_1_tmp;
  _2_tmp = (c)->_2_tmp;
  on_fn190(_1_tmp, _2_tmp);
  return;
}

/* String.chpl:1374 */
static void chpl___PLUS_(_ref_string s0,
                         _ref_string s1,
                         _ref_string _retArg) {
  int16_t local_CHPL_RT_MD_STR_COPY_DATA;
  string ret;
  int64_t coerce_tmp;
  chpl_bool call_tmp2;
  chpl____wide__ref_string T = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t coerce_tmp2;
  chpl_bool call_tmp3;
  chpl____wide__ref_string T2 = {CHPL_LOCALEID_T_INIT, NULL};
  string ret2;
  string this12;
  c_ptr_uint8_t call_tmp4 = NULL;
  int32_t default_arglocale_id;
  string ret_tmp;
  _ref_string ret_to_arg_ref_tmp_ = NULL;
  int64_t coerce_tmp3;
  int64_t call_tmp5;
  c_void_ptr cast_tmp;
  int32_t coerce_tmp4;
  chpl_bool call_tmp6;
  c_ptr_uint8_t coerce_tmp5 = NULL;
  int32_t coerce_tmp6;
  c_ptr_uint8_t coerce_tmp7 = NULL;
  chpl_bool call_tmp7;
  c_ptr_uint8_t call_tmp8 = NULL;
  int32_t coerce_tmp8;
  c_ptr_uint8_t coerce_tmp9 = NULL;
  c_ptr_uint8_t coerce_tmp10 = NULL;
  int64_t coerce_tmp11;
  _ref_uint8_t call_tmp9 = NULL;
  chpl____wide__ref_string chpl_macro_tmp_513;
  chpl____wide__ref_string chpl_macro_tmp_514;
  local_CHPL_RT_MD_STR_COPY_DATA = CHPL_RT_MD_STR_COPY_DATA;
  coerce_tmp = (s0)->len;
  call_tmp2 = (coerce_tmp == INT64(0));
  if (call_tmp2) {
    chpl_macro_tmp_513.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_513.addr = s1;
    T = chpl_macro_tmp_513;
    ret = chpl__initCopy13(T);
    goto _end__PLUS_;
  }
  coerce_tmp2 = (s1)->len;
  call_tmp3 = (coerce_tmp2 == INT64(0));
  if (call_tmp3) {
    chpl_macro_tmp_514.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_514.addr = s0;
    T2 = chpl_macro_tmp_514;
    ret = chpl__initCopy13(T2);
    goto _end__PLUS_;
  }
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
  ret_to_arg_ref_tmp_ = &ret_tmp;
  _construct_string(INT64(0), INT64(0), call_tmp4, UINT8(true), default_arglocale_id, &this12, ret_to_arg_ref_tmp_);
  ret2 = ret_tmp;
  (&ret2)->len = ((int64_t)((coerce_tmp + coerce_tmp2)));
  coerce_tmp3 = (&ret2)->len;
  call_tmp5 = chpl_here_good_alloc_size(((int64_t)((coerce_tmp3 + INT64(1)))));
  (&ret2)->_size = call_tmp5;
  cast_tmp = chpl_here_alloc(call_tmp5, local_CHPL_RT_MD_STR_COPY_DATA);
  (&ret2)->buff = ((c_ptr_uint8_t)(cast_tmp));
  (&ret2)->owned = UINT8(true);
  coerce_tmp4 = (s0)->locale_id;
  call_tmp6 = (coerce_tmp4 != chpl_nodeID);
  if (call_tmp6) {
    coerce_tmp5 = (&ret2)->buff;
    coerce_tmp6 = (s0)->locale_id;
    coerce_tmp7 = (s0)->buff;
    chpl_gen_comm_get(((void*)(coerce_tmp5)), ((int64_t)(coerce_tmp6)), coerce_tmp7, ((uint64_t)(coerce_tmp)), -1, COMMID(62), INT64(1391), INT32(8));
  } else {
    memcpy(((c_void_ptr)((&ret2)->buff)), ((c_void_ptr)((s0)->buff)), ((uint64_t)(coerce_tmp)));
  }
  call_tmp7 = ((s1)->locale_id != chpl_nodeID);
  if (call_tmp7) {
    call_tmp8 = ((&ret2)->buff + coerce_tmp);
    coerce_tmp8 = (s1)->locale_id;
    coerce_tmp9 = (s1)->buff;
    chpl_gen_comm_get(((void*)(call_tmp8)), ((int64_t)(coerce_tmp8)), coerce_tmp9, ((uint64_t)(coerce_tmp2)), -1, COMMID(63), INT64(1398), INT32(8));
  } else {
    memcpy(((c_void_ptr)(((&ret2)->buff + coerce_tmp))), ((c_void_ptr)((s1)->buff)), ((uint64_t)(coerce_tmp2)));
  }
  coerce_tmp10 = (&ret2)->buff;
  coerce_tmp11 = (&ret2)->len;
  call_tmp9 = (coerce_tmp10 + coerce_tmp11);
  *(call_tmp9) = ((uint8_t)(INT64(0)));
  ret = ret2;
  _end__PLUS_:;
  *(_retArg) = ret;
  return;
}

/* String.chpl:1558 */
static void chpl___PLUS__ASSIGN_(_ref_string lhs,
                                 _ref_string rhs) {
  chpl_bool call_tmp2;
  chpl_localeID_t ret_tmp;
  _ref_chpl_localeID_t ret_to_arg_ref_tmp_ = NULL;
  chpl_localeID_t call_tmp3;
  _ref_string T = NULL;
  _ref_string T2 = NULL;
  chpl_bool isdirect;
  chpl____wide__ref_string T3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string T4 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn191 _args_foron_fn = NULL;
  _ref_string T5 = NULL;
  chpl____wide__ref_string T6 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string T7 = NULL;
  chpl____wide__ref_string T8 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn;
  chpl____wide__ref_string chpl_macro_tmp_515;
  chpl____wide__ref_string chpl_macro_tmp_516;
  chpl__class_localson_fn191_object chpl_macro_tmp_517;
  chpl____wide__ref_string chpl_macro_tmp_518;
  chpl____wide__ref_string chpl_macro_tmp_519;
  call_tmp2 = ((rhs)->len == INT64(0));
  if (call_tmp2) {
    goto _end__PLUS__ASSIGN_;
  }
  ret_to_arg_ref_tmp_ = &ret_tmp;
  chpl_buildLocaleID((lhs)->locale_id, c_sublocid_any, ret_to_arg_ref_tmp_, INT64(1563), INT32(8));
  call_tmp3 = ret_tmp;
  T = rhs;
  T2 = lhs;
  isdirect = chpl_doDirectExecuteOn(&call_tmp3);
  if (isdirect) {
    chpl_macro_tmp_515.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_515.addr = T;
    T3 = chpl_macro_tmp_515;
    chpl_macro_tmp_516.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_516.addr = T2;
    T4 = chpl_macro_tmp_516;
    on_fn191(T3, T4);
  } else {
    _args_foron_fn = ((_class_localson_fn191)(&chpl_macro_tmp_517));
    (_args_foron_fn)->_0_rvfDerefTmp = call_tmp3;
    T5 = rhs;
    chpl_macro_tmp_518.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_518.addr = T5;
    T6 = chpl_macro_tmp_518;
    (_args_foron_fn)->_1_tmp = T6;
    T7 = lhs;
    chpl_macro_tmp_519.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_519.addr = T7;
    T8 = chpl_macro_tmp_519;
    (_args_foron_fn)->_2_tmp = T8;
    _args_vforon_fn = ((void*)(_args_foron_fn));
    /*** wrapon_fn191 ***/ chpl_executeOn(&call_tmp3, INT32(256), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn191_object), INT64(1562), INT32(8));
  }
  _end__PLUS__ASSIGN_:;
  return;
}

/* String.chpl:1562 */
static void on_fn191(chpl____wide__ref_string rhs,
                     chpl____wide__ref_string lhs) {
  int16_t local_CHPL_RT_MD_STR_COPY_DATA;
  int64_t coerce_tmp;
  int64_t T;
  int64_t T2;
  int64_t call_tmp2;
  int64_t T3;
  chpl_bool call_tmp3;
  int64_t T4;
  _real64 call_tmp4;
  _real64 call_tmp5;
  _real64 ret;
  chpl_bool call_tmp6;
  int64_t call_tmp7;
  chpl_bool coerce_tmp2;
  chpl_bool T5;
  c_void_ptr call_tmp8;
  c_ptr_uint8_t T6 = NULL;
  c_void_ptr cast_tmp;
  c_ptr_uint8_t call_tmp9 = NULL;
  c_ptr_uint8_t T7 = NULL;
  int64_t T8;
  int32_t T9;
  chpl_bool call_tmp10;
  c_ptr_uint8_t call_tmp11 = NULL;
  c_ptr_uint8_t T10 = NULL;
  int64_t T11;
  int32_t T12;
  c_ptr_uint8_t T13 = NULL;
  c_ptr_uint8_t T14 = NULL;
  int64_t T15;
  c_ptr_uint8_t T16 = NULL;
  c_ptr_uint8_t coerce_tmp3 = NULL;
  c_ptr_uint8_t T17 = NULL;
  _ref_uint8_t call_tmp12 = NULL;
  chpl____wide__ref_int64_t chpl_macro_tmp_520;
  chpl____wide__ref_int64_t chpl_macro_tmp_521;
  chpl____wide__ref_int64_t chpl_macro_tmp_522;
  chpl____wide__ref_int64_t chpl_macro_tmp_523;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_524;
  chpl____wide__ref_c_ptr_uint8_t chpl_macro_tmp_525;
  chpl____wide__ref_c_ptr_uint8_t chpl_macro_tmp_526;
  c_ptr_uint8_t chpl_macro_tmp_527;
  chpl____wide__ref_c_ptr_uint8_t chpl_macro_tmp_528;
  chpl____wide__ref_int64_t chpl_macro_tmp_529;
  chpl____wide__ref_c_ptr_uint8_t chpl_macro_tmp_530;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_531;
  chpl_bool chpl_macro_tmp_532;
  chpl____wide__ref_int64_t chpl_macro_tmp_533;
  chpl____wide__ref_int32_t chpl_macro_tmp_534;
  chpl____wide__ref_c_ptr_uint8_t chpl_macro_tmp_535;
  chpl____wide__ref_int64_t chpl_macro_tmp_536;
  chpl____wide__ref_int32_t chpl_macro_tmp_537;
  chpl____wide__ref_c_ptr_uint8_t chpl_macro_tmp_538;
  chpl____wide__ref_c_ptr_uint8_t chpl_macro_tmp_539;
  chpl____wide__ref_int64_t chpl_macro_tmp_540;
  chpl____wide__ref_c_ptr_uint8_t chpl_macro_tmp_541;
  chpl____wide__ref_int64_t chpl_macro_tmp_542;
  chpl____wide__ref_c_ptr_uint8_t chpl_macro_tmp_543;
  local_CHPL_RT_MD_STR_COPY_DATA = CHPL_RT_MD_STR_COPY_DATA;
  chpl_macro_tmp_520.locale = (rhs).locale;
  chpl_macro_tmp_520.addr = &(((rhs).addr)->len);
  chpl_gen_comm_get(((void*)(&T)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_520).locale), INT64(0), INT32(0)), (chpl_macro_tmp_520).addr, sizeof(int64_t), -1, COMMID(64), INT64(1564), INT64(8));
  coerce_tmp = T;
  chpl_macro_tmp_521.locale = (lhs).locale;
  chpl_macro_tmp_521.addr = &(((lhs).addr)->len);
  chpl_gen_comm_get(((void*)(&T2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_521).locale), INT64(0), INT32(0)), (chpl_macro_tmp_521).addr, sizeof(int64_t), -1, COMMID(65), INT64(1565), INT64(8));
  call_tmp2 = (T2 + coerce_tmp);
  chpl_macro_tmp_522.locale = (lhs).locale;
  chpl_macro_tmp_522.addr = &(((lhs).addr)->_size);
  chpl_gen_comm_get(((void*)(&T3)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_522).locale), INT64(0), INT32(0)), (chpl_macro_tmp_522).addr, sizeof(int64_t), -1, COMMID(66), INT64(1566), INT64(8));
  call_tmp3 = (T3 <= call_tmp2);
  if (call_tmp3) {
    chpl_macro_tmp_523.locale = (lhs).locale;
    chpl_macro_tmp_523.addr = &(((lhs).addr)->len);
    chpl_gen_comm_get(((void*)(&T4)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_523).locale), INT64(0), INT32(0)), (chpl_macro_tmp_523).addr, sizeof(int64_t), -1, COMMID(67), INT64(1568), INT64(8));
    call_tmp4 = (((_real64)(T4)) * 1.5);
    call_tmp5 = ((_real64)(((int64_t)((call_tmp2 + INT64(1))))));
    call_tmp6 = (call_tmp5 > call_tmp4);
    if (call_tmp6) {
      ret = call_tmp5;
      goto _end__if_fn7;
    } else {
      ret = call_tmp4;
      goto _end__if_fn7;
    }
    _end__if_fn7:;
    call_tmp7 = chpl_here_good_alloc_size(((int64_t)(ret)));
    chpl_macro_tmp_524.locale = (lhs).locale;
    chpl_macro_tmp_524.addr = &(((lhs).addr)->owned);
    chpl_gen_comm_get(((void*)(&T5)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_524).locale), INT64(0), INT32(0)), (chpl_macro_tmp_524).addr, sizeof(chpl_bool), -1, COMMID(68), INT64(1570), INT64(8));
    coerce_tmp2 = T5;
    if (coerce_tmp2) {
      chpl_macro_tmp_525.locale = (lhs).locale;
      chpl_macro_tmp_525.addr = &(((lhs).addr)->buff);
      chpl_gen_comm_get(((void*)(&T6)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_525).locale), INT64(0), INT32(0)), (chpl_macro_tmp_525).addr, sizeof(c_ptr_uint8_t), -1, COMMID(69), INT64(1571), INT64(8));
      call_tmp8 = chpl_here_realloc(((c_void_ptr)(T6)), call_tmp7, local_CHPL_RT_MD_STR_COPY_DATA);
      chpl_macro_tmp_526.locale = (lhs).locale;
      chpl_macro_tmp_526.addr = &(((lhs).addr)->buff);
      chpl_macro_tmp_527 = ((c_ptr_uint8_t)(call_tmp8));
      chpl_gen_comm_put(((void*)(&chpl_macro_tmp_527)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_526).locale), INT64(0), INT32(0)), (chpl_macro_tmp_526).addr, sizeof(c_ptr_uint8_t), -1, COMMID(70), INT64(1571), INT64(8));
    } else {
      cast_tmp = chpl_here_alloc(call_tmp7, local_CHPL_RT_MD_STR_COPY_DATA);
      call_tmp9 = ((c_ptr_uint8_t)(cast_tmp));
      chpl_macro_tmp_528.locale = (lhs).locale;
      chpl_macro_tmp_528.addr = &(((lhs).addr)->buff);
      chpl_gen_comm_get(((void*)(&T7)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_528).locale), INT64(0), INT32(0)), (chpl_macro_tmp_528).addr, sizeof(c_ptr_uint8_t), -1, COMMID(71), INT64(1576), INT64(8));
      chpl_macro_tmp_529.locale = (lhs).locale;
      chpl_macro_tmp_529.addr = &(((lhs).addr)->len);
      chpl_gen_comm_get(((void*)(&T8)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_529).locale), INT64(0), INT32(0)), (chpl_macro_tmp_529).addr, sizeof(int64_t), -1, COMMID(72), INT64(1576), INT64(8));
      memcpy(((c_void_ptr)(call_tmp9)), ((c_void_ptr)(T7)), ((uint64_t)(T8)));
      chpl_macro_tmp_530.locale = (lhs).locale;
      chpl_macro_tmp_530.addr = &(((lhs).addr)->buff);
      chpl_gen_comm_put(((void*)(&call_tmp9)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_530).locale), INT64(0), INT32(0)), (chpl_macro_tmp_530).addr, sizeof(c_ptr_uint8_t), -1, COMMID(73), INT64(1577), INT64(8));
      chpl_macro_tmp_531.locale = (lhs).locale;
      chpl_macro_tmp_531.addr = &(((lhs).addr)->owned);
      chpl_macro_tmp_532 = UINT8(true);
      chpl_gen_comm_put(((void*)(&chpl_macro_tmp_532)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_531).locale), INT64(0), INT32(0)), (chpl_macro_tmp_531).addr, sizeof(chpl_bool), -1, COMMID(74), INT64(1578), INT64(8));
    }
    chpl_macro_tmp_533.locale = (lhs).locale;
    chpl_macro_tmp_533.addr = &(((lhs).addr)->_size);
    chpl_gen_comm_put(((void*)(&call_tmp7)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_533).locale), INT64(0), INT32(0)), (chpl_macro_tmp_533).addr, sizeof(int64_t), -1, COMMID(75), INT64(1581), INT64(8));
  }
  chpl_macro_tmp_534.locale = (rhs).locale;
  chpl_macro_tmp_534.addr = &(((rhs).addr)->locale_id);
  chpl_gen_comm_get(((void*)(&T9)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_534).locale), INT64(0), INT32(0)), (chpl_macro_tmp_534).addr, sizeof(int32_t), -1, COMMID(76), INT64(1583), INT64(8));
  call_tmp10 = (T9 != chpl_nodeID);
  if (call_tmp10) {
    chpl_macro_tmp_535.locale = (lhs).locale;
    chpl_macro_tmp_535.addr = &(((lhs).addr)->buff);
    chpl_gen_comm_get(((void*)(&T10)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_535).locale), INT64(0), INT32(0)), (chpl_macro_tmp_535).addr, sizeof(c_ptr_uint8_t), -1, COMMID(77), INT64(1585), INT64(8));
    chpl_macro_tmp_536.locale = (lhs).locale;
    chpl_macro_tmp_536.addr = &(((lhs).addr)->len);
    chpl_gen_comm_get(((void*)(&T11)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_536).locale), INT64(0), INT32(0)), (chpl_macro_tmp_536).addr, sizeof(int64_t), -1, COMMID(78), INT64(1585), INT64(8));
    call_tmp11 = (T10 + T11);
    chpl_macro_tmp_537.locale = (rhs).locale;
    chpl_macro_tmp_537.addr = &(((rhs).addr)->locale_id);
    chpl_gen_comm_get(((void*)(&T12)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_537).locale), INT64(0), INT32(0)), (chpl_macro_tmp_537).addr, sizeof(int32_t), -1, COMMID(79), INT64(1585), INT64(8));
    chpl_macro_tmp_538.locale = (rhs).locale;
    chpl_macro_tmp_538.addr = &(((rhs).addr)->buff);
    chpl_gen_comm_get(((void*)(&T13)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_538).locale), INT64(0), INT32(0)), (chpl_macro_tmp_538).addr, sizeof(c_ptr_uint8_t), -1, COMMID(80), INT64(1585), INT64(8));
    chpl_gen_comm_get(((void*)(call_tmp11)), ((int64_t)(T12)), T13, ((uint64_t)(coerce_tmp)), -1, COMMID(81), INT64(1585), INT32(8));
  } else {
    chpl_macro_tmp_539.locale = (lhs).locale;
    chpl_macro_tmp_539.addr = &(((lhs).addr)->buff);
    chpl_gen_comm_get(((void*)(&T14)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_539).locale), INT64(0), INT32(0)), (chpl_macro_tmp_539).addr, sizeof(c_ptr_uint8_t), -1, COMMID(82), INT64(1587), INT64(8));
    chpl_macro_tmp_540.locale = (lhs).locale;
    chpl_macro_tmp_540.addr = &(((lhs).addr)->len);
    chpl_gen_comm_get(((void*)(&T15)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_540).locale), INT64(0), INT32(0)), (chpl_macro_tmp_540).addr, sizeof(int64_t), -1, COMMID(83), INT64(1587), INT64(8));
    chpl_macro_tmp_541.locale = (rhs).locale;
    chpl_macro_tmp_541.addr = &(((rhs).addr)->buff);
    chpl_gen_comm_get(((void*)(&T16)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_541).locale), INT64(0), INT32(0)), (chpl_macro_tmp_541).addr, sizeof(c_ptr_uint8_t), -1, COMMID(84), INT64(1587), INT64(8));
    memcpy(((c_void_ptr)((T14 + T15))), ((c_void_ptr)(T16)), ((uint64_t)(coerce_tmp)));
  }
  chpl_macro_tmp_542.locale = (lhs).locale;
  chpl_macro_tmp_542.addr = &(((lhs).addr)->len);
  chpl_gen_comm_put(((void*)(&call_tmp2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_542).locale), INT64(0), INT32(0)), (chpl_macro_tmp_542).addr, sizeof(int64_t), -1, COMMID(85), INT64(1589), INT64(8));
  chpl_macro_tmp_543.locale = (lhs).locale;
  chpl_macro_tmp_543.addr = &(((lhs).addr)->buff);
  chpl_gen_comm_get(((void*)(&T17)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_543).locale), INT64(0), INT32(0)), (chpl_macro_tmp_543).addr, sizeof(c_ptr_uint8_t), -1, COMMID(86), INT64(1590), INT64(8));
  coerce_tmp3 = T17;
  call_tmp12 = (coerce_tmp3 + call_tmp2);
  *(call_tmp12) = ((uint8_t)(INT64(0)));
  return;
}

/* String.chpl:1562 */
static void wrapon_fn191(_class_localson_fn191 c) {
  chpl____wide__ref_string _1_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string _2_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  _1_tmp = (c)->_1_tmp;
  _2_tmp = (c)->_2_tmp;
  on_fn191(_1_tmp, _2_tmp);
  return;
}

/* String.chpl:1624 */
static chpl_bool chpl___EQUALS__(_ref_string a,
                                 _ref_string b) {
  string localA;
  string type_tmp;
  string this12;
  c_ptr_uint8_t call_tmp2 = NULL;
  int32_t default_arglocale_id;
  string ret_tmp;
  _ref_string ret_to_arg_ref_tmp_ = NULL;
  string call_tmp3;
  string ret;
  int32_t coerce_tmp;
  chpl_bool call_tmp4;
  string ret_tmp2;
  _ref_string ret_to_arg_ref_tmp_2 = NULL;
  _ref_string i_s = NULL;
  chpl____wide__ref_string T = {CHPL_LOCALEID_T_INIT, NULL};
  string type_tmp2;
  string this13;
  c_ptr_uint8_t call_tmp5 = NULL;
  int32_t default_arglocale_id2;
  string ret_tmp3;
  _ref_string ret_to_arg_ref_tmp_3 = NULL;
  _ref_string _ref_tmp_ = NULL;
  _ref_string i_rhs = NULL;
  chpl____wide__ref_string T2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string T3 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp_2 = NULL;
  chpl____wide__ref_string T4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string T5 = {CHPL_LOCALEID_T_INIT, NULL};
  string localB;
  string type_tmp3;
  string this14;
  c_ptr_uint8_t call_tmp6 = NULL;
  int32_t default_arglocale_id3;
  string ret_tmp4;
  _ref_string ret_to_arg_ref_tmp_4 = NULL;
  string call_tmp7;
  string ret2;
  int32_t coerce_tmp2;
  chpl_bool call_tmp8;
  string ret_tmp5;
  _ref_string ret_to_arg_ref_tmp_5 = NULL;
  _ref_string i_s2 = NULL;
  chpl____wide__ref_string T6 = {CHPL_LOCALEID_T_INIT, NULL};
  string type_tmp4;
  string this15;
  c_ptr_uint8_t call_tmp9 = NULL;
  int32_t default_arglocale_id4;
  string ret_tmp6;
  _ref_string ret_to_arg_ref_tmp_6 = NULL;
  _ref_string _ref_tmp_3 = NULL;
  _ref_string i_rhs2 = NULL;
  chpl____wide__ref_string T7 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string T8 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp_4 = NULL;
  chpl____wide__ref_string T9 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string T10 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool ret3;
  int64_t coerce_tmp3;
  chpl_bool call_tmp10;
  int64_t ret4;
  int64_t coerce_tmp4;
  int64_t coerce_tmp5;
  int64_t ret5;
  chpl_bool call_tmp11;
  c_ptr_uint8_t coerce_tmp6 = NULL;
  int32_t call_tmp12;
  int64_t call_tmp13;
  chpl_bool call_tmp14;
  chpl_bool call_tmp15;
  chpl_bool call_tmp16;
  _ref_string _ref_tmp_5 = NULL;
  chpl____wide__ref_string T11 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp_6 = NULL;
  chpl____wide__ref_string T12 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp_7 = NULL;
  chpl____wide__ref_string T13 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp_8 = NULL;
  chpl____wide__ref_string T14 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_544;
  chpl____wide__ref_string chpl_macro_tmp_545;
  chpl____wide__ref_string chpl_macro_tmp_546;
  chpl____wide__ref_string chpl_macro_tmp_547;
  chpl____wide__ref_string chpl_macro_tmp_548;
  chpl____wide__ref_string chpl_macro_tmp_549;
  chpl____wide__ref_string chpl_macro_tmp_550;
  chpl____wide__ref_string chpl_macro_tmp_551;
  chpl____wide__ref_string chpl_macro_tmp_552;
  chpl____wide__ref_string chpl_macro_tmp_553;
  chpl____wide__ref_string chpl_macro_tmp_554;
  chpl____wide__ref_string chpl_macro_tmp_555;
  chpl____wide__ref_string chpl_macro_tmp_556;
  chpl____wide__ref_string chpl_macro_tmp_557;
  (&this12)->len = INT64(0);
  (&this12)->_size = INT64(0);
  (&this12)->buff = nil;
  (&this12)->owned = UINT8(false);
  (&this12)->locale_id = INT32(0);
  (&this12)->len = INT64(0);
  (&this12)->_size = INT64(0);
  call_tmp2 = ((c_ptr_uint8_t)(nil));
  (&this12)->buff = call_tmp2;
  (&this12)->owned = UINT8(true);
  default_arglocale_id = chpl_nodeID;
  (&this12)->locale_id = default_arglocale_id;
  ret_to_arg_ref_tmp_ = &ret_tmp;
  _construct_string(INT64(0), INT64(0), call_tmp2, UINT8(true), default_arglocale_id, &this12, ret_to_arg_ref_tmp_);
  type_tmp = ret_tmp;
  coerce_tmp = (a)->locale_id;
  call_tmp4 = (coerce_tmp == chpl_nodeID);
  if (call_tmp4) {
    ret_to_arg_ref_tmp_2 = &ret_tmp2;
    i_s = a;
    chpl_macro_tmp_544.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_544.addr = i_s;
    T = chpl_macro_tmp_544;
    string2(T, UINT8(false), ret_to_arg_ref_tmp_2);
    ret = ret_tmp2;
    goto _end_localize;
  } else {
    (&this13)->len = INT64(0);
    (&this13)->_size = INT64(0);
    (&this13)->buff = nil;
    (&this13)->owned = UINT8(false);
    (&this13)->locale_id = INT32(0);
    (&this13)->len = INT64(0);
    (&this13)->_size = INT64(0);
    call_tmp5 = ((c_ptr_uint8_t)(nil));
    (&this13)->buff = call_tmp5;
    (&this13)->owned = UINT8(true);
    default_arglocale_id2 = chpl_nodeID;
    (&this13)->locale_id = default_arglocale_id2;
    ret_to_arg_ref_tmp_3 = &ret_tmp3;
    _construct_string(INT64(0), INT64(0), call_tmp5, UINT8(true), default_arglocale_id2, &this13, ret_to_arg_ref_tmp_3);
    type_tmp2 = ret_tmp3;
    _ref_tmp_ = &type_tmp2;
    i_rhs = a;
    chpl_macro_tmp_545.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_545.addr = _ref_tmp_;
    T2 = chpl_macro_tmp_545;
    chpl_macro_tmp_546.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_546.addr = i_rhs;
    T3 = chpl_macro_tmp_546;
    chpl___ASSIGN_13(T2, T3);
    ret = type_tmp2;
    goto _end_localize;
  }
  _end_localize:;
  call_tmp3 = ret;
  _ref_tmp_2 = &type_tmp;
  chpl_macro_tmp_547.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_547.addr = _ref_tmp_2;
  T4 = chpl_macro_tmp_547;
  chpl_macro_tmp_548.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_548.addr = &ret;
  T5 = chpl_macro_tmp_548;
  chpl___ASSIGN_13(T4, T5);
  localA = type_tmp;
  (&this14)->len = INT64(0);
  (&this14)->_size = INT64(0);
  (&this14)->buff = nil;
  (&this14)->owned = UINT8(false);
  (&this14)->locale_id = INT32(0);
  (&this14)->len = INT64(0);
  (&this14)->_size = INT64(0);
  call_tmp6 = ((c_ptr_uint8_t)(nil));
  (&this14)->buff = call_tmp6;
  (&this14)->owned = UINT8(true);
  default_arglocale_id3 = chpl_nodeID;
  (&this14)->locale_id = default_arglocale_id3;
  ret_to_arg_ref_tmp_4 = &ret_tmp4;
  _construct_string(INT64(0), INT64(0), call_tmp6, UINT8(true), default_arglocale_id3, &this14, ret_to_arg_ref_tmp_4);
  type_tmp3 = ret_tmp4;
  coerce_tmp2 = (b)->locale_id;
  call_tmp8 = (coerce_tmp2 == chpl_nodeID);
  if (call_tmp8) {
    ret_to_arg_ref_tmp_5 = &ret_tmp5;
    i_s2 = b;
    chpl_macro_tmp_549.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_549.addr = i_s2;
    T6 = chpl_macro_tmp_549;
    string2(T6, UINT8(false), ret_to_arg_ref_tmp_5);
    ret2 = ret_tmp5;
    goto _end_localize2;
  } else {
    (&this15)->len = INT64(0);
    (&this15)->_size = INT64(0);
    (&this15)->buff = nil;
    (&this15)->owned = UINT8(false);
    (&this15)->locale_id = INT32(0);
    (&this15)->len = INT64(0);
    (&this15)->_size = INT64(0);
    call_tmp9 = ((c_ptr_uint8_t)(nil));
    (&this15)->buff = call_tmp9;
    (&this15)->owned = UINT8(true);
    default_arglocale_id4 = chpl_nodeID;
    (&this15)->locale_id = default_arglocale_id4;
    ret_to_arg_ref_tmp_6 = &ret_tmp6;
    _construct_string(INT64(0), INT64(0), call_tmp9, UINT8(true), default_arglocale_id4, &this15, ret_to_arg_ref_tmp_6);
    type_tmp4 = ret_tmp6;
    _ref_tmp_3 = &type_tmp4;
    i_rhs2 = b;
    chpl_macro_tmp_550.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_550.addr = _ref_tmp_3;
    T7 = chpl_macro_tmp_550;
    chpl_macro_tmp_551.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_551.addr = i_rhs2;
    T8 = chpl_macro_tmp_551;
    chpl___ASSIGN_13(T7, T8);
    ret2 = type_tmp4;
    goto _end_localize2;
  }
  _end_localize2:;
  call_tmp7 = ret2;
  _ref_tmp_4 = &type_tmp3;
  chpl_macro_tmp_552.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_552.addr = _ref_tmp_4;
  T9 = chpl_macro_tmp_552;
  chpl_macro_tmp_553.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_553.addr = &ret2;
  T10 = chpl_macro_tmp_553;
  chpl___ASSIGN_13(T9, T10);
  localB = type_tmp3;
  coerce_tmp3 = (&localB)->len;
  call_tmp10 = ((&localA)->len != coerce_tmp3);
  if (call_tmp10) {
    ret3 = UINT8(false);
    goto _end_doEq;
  }
  coerce_tmp4 = (&localA)->len;
  coerce_tmp5 = (&localB)->len;
  call_tmp11 = (coerce_tmp4 < coerce_tmp5);
  if (call_tmp11) {
    ret5 = coerce_tmp4;
    goto _end__if_fn2;
  } else {
    ret5 = coerce_tmp5;
    goto _end__if_fn2;
  }
  _end__if_fn2:;
  coerce_tmp6 = (&localA)->buff;
  call_tmp12 = memcmp(((c_void_ptr)(coerce_tmp6)), (&localB)->buff, ((uint64_t)(ret5)));
  call_tmp13 = ((int64_t)(call_tmp12));
  call_tmp14 = (call_tmp13 == INT64(0));
  if (call_tmp14) {
    call_tmp15 = (ret5 < (&localA)->len);
    if (call_tmp15) {
      ret4 = INT64(1);
      goto _end__strcmp;
    }
    call_tmp16 = (ret5 < (&localB)->len);
    if (call_tmp16) {
      ret4 = INT64(-1);
      goto _end__strcmp;
    }
  }
  ret4 = call_tmp13;
  _end__strcmp:;
  ret3 = (ret4 == INT64(0));
  _end_doEq:;
  _ref_tmp_5 = &call_tmp7;
  chpl_macro_tmp_554.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_554.addr = _ref_tmp_5;
  T11 = chpl_macro_tmp_554;
  deinit44(T11);
  _ref_tmp_6 = &localB;
  chpl_macro_tmp_555.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_555.addr = _ref_tmp_6;
  T12 = chpl_macro_tmp_555;
  deinit44(T12);
  _ref_tmp_7 = &call_tmp3;
  chpl_macro_tmp_556.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_556.addr = _ref_tmp_7;
  T13 = chpl_macro_tmp_556;
  deinit44(T13);
  _ref_tmp_8 = &localA;
  chpl_macro_tmp_557.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_557.addr = _ref_tmp_8;
  T14 = chpl_macro_tmp_557;
  deinit44(T14);
  return ret3;
}

/* String.chpl:1776 */
static void _cast(c_string cs,
                  _ref_string _retArg) {
  string ret;
  string this12;
  c_ptr_uint8_t call_tmp2 = NULL;
  int32_t default_arglocale_id;
  string ret_tmp;
  _ref_string ret_to_arg_ref_tmp_ = NULL;
  int64_t coerce_tmp;
  c_ptr_uint8_t ret2 = NULL;
  chpl_bool call_tmp3;
  (&this12)->len = INT64(0);
  (&this12)->_size = INT64(0);
  (&this12)->buff = nil;
  (&this12)->owned = UINT8(false);
  (&this12)->locale_id = INT32(0);
  (&this12)->len = INT64(0);
  (&this12)->_size = INT64(0);
  call_tmp2 = ((c_ptr_uint8_t)(nil));
  (&this12)->buff = call_tmp2;
  (&this12)->owned = UINT8(true);
  default_arglocale_id = chpl_nodeID;
  (&this12)->locale_id = default_arglocale_id;
  ret_to_arg_ref_tmp_ = &ret_tmp;
  _construct_string(INT64(0), INT64(0), call_tmp2, UINT8(true), default_arglocale_id, &this12, ret_to_arg_ref_tmp_);
  ret = ret_tmp;
  (&ret)->len = string_length(cs);
  coerce_tmp = (&ret)->len;
  (&ret)->_size = ((int64_t)((coerce_tmp + INT64(1))));
  call_tmp3 = ((&ret)->len > INT64(0));
  if (call_tmp3) {
    ret2 = ((c_ptr_uint8_t)(string_copy(cs, INT64(1780), INT32(8))));
    goto _end__if_fn25;
  } else {
    ret2 = ((c_ptr_uint8_t)(nil));
    goto _end__if_fn25;
  }
  _end__if_fn25:;
  (&ret)->buff = ret2;
  (&ret)->owned = UINT8(true);
  *(_retArg) = ret;
  return;
}

