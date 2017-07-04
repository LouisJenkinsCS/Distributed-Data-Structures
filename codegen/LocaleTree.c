/* LocaleTree.chpl:25 */
static void chpl__init_LocaleTree(int64_t _ln,
                                  int32_t _fn) {
  _ref_int32_t refIndentLevel = NULL;
  chpl_localeTreeRecord this12;
  chpl____wide_locale T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_locale T2 = {CHPL_LOCALEID_T_INIT, NULL};
  locale call_tmp2 = NULL;
  chpl____wide_locale T3 = {CHPL_LOCALEID_T_INIT, NULL};
  locale call_tmp3 = NULL;
  chpl____wide_locale T4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeTreeRecord ret_tmp;
  _ref_chpl_localeTreeRecord ret_to_arg_ref_tmp_ = NULL;
  chpl____wide__nilType chpl_macro_tmp_4506;
  chpl____wide_locale chpl_macro_tmp_4507;
  chpl____wide__nilType chpl_macro_tmp_4508;
  chpl____wide_locale chpl_macro_tmp_4509;
  chpl____wide_locale chpl_macro_tmp_4510;
  chpl____wide_locale chpl_macro_tmp_4511;
  if (chpl__init_LocaleTree_p) {
    goto _exit_chpl__init_LocaleTree;
  }
  printModuleInit("%*s\n", "LocaleTree", INT64(10));
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_LocaleTree_p = UINT8(true);
  {
    chpl__init_ChapelLocale(INT64(25), INT32(31));
  }
  chpl_addModule("LocaleTree", ((c_fn_ptr)(chpl__deinit_LocaleTree)));
  chpl_macro_tmp_4506.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_4506.addr = nil;
  chpl_macro_tmp_4507.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_4507.addr = NULL;
  T = chpl_macro_tmp_4507;
  (&this12)->left = T;
  chpl_macro_tmp_4508.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_4508.addr = nil;
  chpl_macro_tmp_4509.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_4509.addr = NULL;
  T2 = chpl_macro_tmp_4509;
  (&this12)->right = T2;
  call_tmp2 = ((locale)(nil));
  chpl_macro_tmp_4510.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_4510.addr = call_tmp2;
  T3 = chpl_macro_tmp_4510;
  (&this12)->left = T3;
  call_tmp3 = ((locale)(nil));
  chpl_macro_tmp_4511.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_4511.addr = call_tmp3;
  T4 = chpl_macro_tmp_4511;
  (&this12)->right = T4;
  ret_to_arg_ref_tmp_ = &ret_tmp;
  _construct_chpl_localeTreeRecord(call_tmp2, call_tmp3, &this12, ret_to_arg_ref_tmp_);
  chpl_localeTree = ret_tmp;
  chpl_initLocaleTree();
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_LocaleTree:;
  return;
}

/* LocaleTree.chpl:25 */
static void chpl__deinit_LocaleTree(void) {
  return;
}

/* LocaleTree.chpl:29 */
static void _construct_chpl_localeTreeRecord(locale left,
                                             locale right,
                                             _ref_chpl_localeTreeRecord meme,
                                             _ref_chpl_localeTreeRecord _retArg) {
  chpl_localeTreeRecord this12;
  chpl____wide_locale T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_locale T2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_locale chpl_macro_tmp_4512;
  chpl____wide_locale chpl_macro_tmp_4513;
  this12 = *(meme);
  chpl_macro_tmp_4512.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_4512.addr = left;
  T = chpl_macro_tmp_4512;
  (&this12)->left = T;
  chpl_macro_tmp_4513.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_4513.addr = right;
  T2 = chpl_macro_tmp_4513;
  (&this12)->right = T2;
  *(_retArg) = this12;
  return;
}

/* LocaleTree.chpl:35 */
static void chpl_initLocaleTree(void) {
  int64_t local_numLocales;
  _domain_DefaultRectangularDom_1_int64_t_F local_LocaleSpace;
  chpl____wide_DefaultRectangularDom_1_int64_t_F ret = {CHPL_LOCALEID_T_INIT, NULL};
  _tuple_1_star_int64_t ret_tmp;
  _ref__tuple_1_star_int64_t ret_to_arg_ref_tmp_ = NULL;
  chpl____wide__ref_range_int64_t_bounded_F call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F _this_tmp_ = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularDom_1_int64_t_F this12 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_range_int64_t_bounded_F i_x = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F T;
  range_int64_t_bounded_F _ic__F0_this;
  int64_t i;
  int64_t ret2;
  int64_t end;
  int64_t ret3;
  locale T2 = NULL;
  chpl____wide_locale left = {CHPL_LOCALEID_T_INIT, NULL};
  locale T3 = NULL;
  chpl____wide_locale right = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t child;
  int64_t call_tmp3;
  chpl_bool call_tmp4;
  chpl____wide_locale call_tmp5 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_int64_t _ref_tmp_ = NULL;
  chpl_bool call_tmp6;
  chpl____wide_locale call_tmp7 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_locale call_tmp8 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp9;
  chpl____wide_locale rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_locale rvfDerefTmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect;
  _class_localson_fn188 _args_foron_fn = NULL;
  c_void_ptr _args_vforon_fn;
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F chpl_macro_tmp_4514;
  chpl____wide__ref_range_int64_t_bounded_F chpl_macro_tmp_4515;
  chpl____wide_locale chpl_macro_tmp_4516;
  chpl____wide_locale chpl_macro_tmp_4517;
  chpl____wide__ref_int32_t chpl_macro_tmp_4518;
  int32_t chpl_macro_tmp_4519;
  chpl____wide__ref_int32_t chpl_macro_tmp_4520;
  int32_t chpl_macro_tmp_4521;
  chpl____wide__ref_int32_t chpl_macro_tmp_4522;
  int32_t chpl_macro_tmp_4523;
  chpl__class_localson_fn188_object chpl_macro_tmp_4524;
  local_numLocales = numLocales;
  local_LocaleSpace = LocaleSpace;
  ret = (&local_LocaleSpace)->_instance;
  ret_to_arg_ref_tmp_ = &ret_tmp;
  createTuple_chpl(INT64(0), ret_to_arg_ref_tmp_);
  this12 = ret;
  chpl_macro_tmp_4514.locale = (&this12)->locale;
  chpl_macro_tmp_4514.addr = &(((&this12)->addr)->ranges);
  _this_tmp_ = chpl_macro_tmp_4514;
  chpl_macro_tmp_4515.locale = (_this_tmp_).locale;
  chpl_macro_tmp_4515.addr = (*((_this_tmp_).addr) + INT64(0));
  call_tmp2 = chpl_macro_tmp_4515;
  i_x = call_tmp2;
  chpl_gen_comm_get(((void*)(&T)), chpl_nodeFromLocaleID(&((i_x).locale), INT64(0), INT32(0)), (i_x).addr, sizeof(range_int64_t_bounded_F), -1, COMMID(0), INT64(36), INT64(31));
  _ic__F0_this = T;
  ret2 = (&_ic__F0_this)->_low;
  ret3 = (&_ic__F0_this)->_high;
  end = ret3;
  for (i = ret2; ((i <= end)); i += INT64(1)) {
    T2 = nil;
    chpl_macro_tmp_4516.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_4516.addr = T2;
    left = chpl_macro_tmp_4516;
    T3 = nil;
    chpl_macro_tmp_4517.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_4517.addr = T3;
    right = chpl_macro_tmp_4517;
    call_tmp3 = (((int64_t)((((int64_t)((i + INT64(1)))) * INT64(2)))) - INT64(1));
    child = call_tmp3;
    call_tmp4 = (call_tmp3 < local_numLocales);
    if (call_tmp4) {
      chpl_macro_tmp_4518.locale = (&rootLocale)->locale;
      chpl_macro_tmp_4518.addr = &(((object)((&rootLocale)->addr))->chpl__cid);
      chpl_gen_comm_get(((void*)(&chpl_macro_tmp_4519)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4518).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4518).addr, sizeof(int32_t), -1, COMMID(1), INT64(41), INT64(31));
      call_tmp5 = ((chpl____wide_locale(*)(chpl____wide_locale,
                     int64_t))chpl_vmtable[((INT64(9) * chpl_macro_tmp_4519) + INT64(2))])(rootLocale, call_tmp3);
      left = call_tmp5;
      _ref_tmp_ = &child;
      *(_ref_tmp_) += INT64(1);
      call_tmp6 = (child < local_numLocales);
      if (call_tmp6) {
        chpl_macro_tmp_4520.locale = (&rootLocale)->locale;
        chpl_macro_tmp_4520.addr = &(((object)((&rootLocale)->addr))->chpl__cid);
        chpl_gen_comm_get(((void*)(&chpl_macro_tmp_4521)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4520).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4520).addr, sizeof(int32_t), -1, COMMID(2), INT64(44), INT64(31));
        call_tmp7 = ((chpl____wide_locale(*)(chpl____wide_locale,
                       int64_t))chpl_vmtable[((INT64(9) * chpl_macro_tmp_4521) + INT64(2))])(rootLocale, child);
        right = call_tmp7;
      }
    }
    chpl_macro_tmp_4522.locale = (&rootLocale)->locale;
    chpl_macro_tmp_4522.addr = &(((object)((&rootLocale)->addr))->chpl__cid);
    chpl_gen_comm_get(((void*)(&chpl_macro_tmp_4523)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4522).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4522).addr, sizeof(int32_t), -1, COMMID(3), INT64(46), INT64(31));
    call_tmp8 = ((chpl____wide_locale(*)(chpl____wide_locale,
                   int64_t))chpl_vmtable[((INT64(9) * chpl_macro_tmp_4523) + INT64(2))])(rootLocale, i);
    call_tmp9 = (&call_tmp8)->locale;
    rvfDerefTmp = left;
    rvfDerefTmp2 = right;
    isdirect = chpl_doDirectExecuteOn(&call_tmp9);
    if (isdirect) {
      on_fn188(&rvfDerefTmp, &rvfDerefTmp2);
    } else {
      _args_foron_fn = ((_class_localson_fn188)(&chpl_macro_tmp_4524));
      (_args_foron_fn)->_0_rvfDerefTmp = call_tmp9;
      (_args_foron_fn)->_1_rvfDerefTmp = rvfDerefTmp;
      (_args_foron_fn)->_2_rvfDerefTmp = rvfDerefTmp2;
      _args_vforon_fn = ((void*)(_args_foron_fn));
      /*** wrapon_fn188 ***/ chpl_executeOnFast(&call_tmp9, INT32(253), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn188_object), INT64(46), INT32(31));
    }
  }
  return;
}

/* LocaleTree.chpl:46 */
static void on_fn188(_ref__wide_locale left,
                     _ref__wide_locale right) {
  chpl____wide_locale T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_locale T2 = {CHPL_LOCALEID_T_INIT, NULL};
  T = *(left);
  (&chpl_localeTree)->left = T;
  T2 = *(right);
  (&chpl_localeTree)->right = T2;
  return;
}

/* LocaleTree.chpl:46 */
static void wrapon_fn188(_class_localson_fn188 c) {
  chpl____wide_locale _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_locale _2_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  _2_rvfDerefTmp = (c)->_2_rvfDerefTmp;
  on_fn188(&_1_rvfDerefTmp, &_2_rvfDerefTmp);
  return;
}

