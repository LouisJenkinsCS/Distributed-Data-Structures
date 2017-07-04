/* LocalesArray.chpl:40 */
static void chpl__init_LocalesArray(int64_t _ln,
                                    int32_t _fn) {
  _ref_int32_t refIndentLevel = NULL;
  RootLocale _formal_type_tmp_ = NULL;
  chpl____wide_RootLocale ret = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp3;
  chpl____wide_object T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_RootLocale call_tmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  RootLocale call_tmp5 = NULL;
  chpl____wide__ref__wide__array_DefaultRectangularArr_locale_1_int64_t_F_int64_t T2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide__array_DefaultRectangularArr_locale_1_int64_t_F_int64_t T3 = {CHPL_LOCALEID_T_INIT, NULL};
  _domain_DefaultRectangularDom_1_int64_t_F ret_tmp;
  _ref__domain_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
  _ref__domain_DefaultRectangularDom_1_int64_t_F i_x = NULL;
  _domain_DefaultRectangularDom_1_int64_t_F ret2;
  chpl_bool coerce_tmp;
  _domain_DefaultRectangularDom_1_int64_t_F ret3;
  _ref__domain_DefaultRectangularDom_1_int64_t_F _ref_tmp_ = NULL;
  chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_F T4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object chpl_macro_tmp_2128;
  chpl____wide__nilType chpl_macro_tmp_2129;
  chpl____wide_object chpl_macro_tmp_2130;
  chpl____wide__ref_int32_t chpl_macro_tmp_2131;
  int32_t chpl_macro_tmp_2132;
  int32_t chpl_macro_tmp_2133;
  chpl____wide_RootLocale chpl_macro_tmp_2134;
  chpl____wide_RootLocale chpl_macro_tmp_2135;
  chpl____wide__ref_chpl____wide__ref__wide__array_DefaultRectangularArr_locale_1_int64_t_F_int64_t chpl_macro_tmp_2136;
  chpl____wide__ref_chpl____wide__ref__wide__array_DefaultRectangularArr_locale_1_int64_t_F_int64_t chpl_macro_tmp_2137;
  chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_2138;
  if (chpl__init_LocalesArray_p) {
    goto _exit_chpl__init_LocalesArray;
  }
  printModuleInit("%*s\n", "LocalesArray", INT64(12));
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_LocalesArray_p = UINT8(true);
  chpl_addModule("LocalesArray", ((c_fn_ptr)(chpl__deinit_LocalesArray)));
  chpl_init_rootLocale();
  chpl_macro_tmp_2128.locale = (&rootLocale)->locale;
  chpl_macro_tmp_2128.addr = ((object)((&rootLocale)->addr));
  call_tmp2 = chpl_macro_tmp_2128;
  chpl_macro_tmp_2129.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2129.addr = nil;
  chpl_macro_tmp_2130.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_2130.addr = NULL;
  T = chpl_macro_tmp_2130;
  call_tmp3 = (((&call_tmp2)->addr != (&T)->addr) || ((!(! (&call_tmp2)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp2)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&T)->locale), INT64(0), INT32(0)))));
  if (call_tmp3) {
    chpl_macro_tmp_2131.locale = (rootLocale).locale;
    chpl_macro_tmp_2131.addr = &(((object)((rootLocale).addr))->chpl__cid);
    chpl_gen_comm_get(((void*)(&chpl_macro_tmp_2132)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_2131).locale), INT64(0), INT32(0)), (chpl_macro_tmp_2131).addr, sizeof(int32_t), -1, COMMID(0), INT64(53), INT64(27));
    chpl_macro_tmp_2133 = chpl_macro_tmp_2132;
    chpl_macro_tmp_2134.locale = (rootLocale).locale;
    chpl_macro_tmp_2134.addr = ( (((chpl__cid_RootLocale <= chpl_macro_tmp_2133) && (chpl_macro_tmp_2133 <= chpl_subclass_max_id[chpl__cid_RootLocale])))?(((RootLocale)((rootLocale).addr))):(((RootLocale)(NULL))) );
    call_tmp4 = chpl_macro_tmp_2134;
    ret = call_tmp4;
    goto _end__if_fn18;
  } else {
    call_tmp5 = ((RootLocale)(nil));
    chpl_macro_tmp_2135.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2135.addr = call_tmp5;
    ret = chpl_macro_tmp_2135;
    goto _end__if_fn18;
  }
  _end__if_fn18:;
  T2 = getDefaultLocaleArray(ret);
  chpl_macro_tmp_2136.locale = (&call_tmp)->locale;
  chpl_macro_tmp_2136.addr = &(((&call_tmp)->addr)->value);
  chpl_gen_comm_put(((void*)(&T2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_2136).locale), INT64(0), INT32(0)), (chpl_macro_tmp_2136).addr, sizeof(chpl____wide__ref__wide__array_DefaultRectangularArr_locale_1_int64_t_F_int64_t), -1, COMMID(1), INT64(53), INT64(27));
  chpl_macro_tmp_2137.locale = (&call_tmp)->locale;
  chpl_macro_tmp_2137.addr = &(((&call_tmp)->addr)->value);
  chpl_gen_comm_get(((void*)(&T3)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_2137).locale), INT64(0), INT32(0)), (chpl_macro_tmp_2137).addr, sizeof(chpl____wide__ref__wide__array_DefaultRectangularArr_locale_1_int64_t_F_int64_t), -1, COMMID(2), INT64(53), INT64(27));
  Locales = T3;
  ret_to_arg_ref_tmp_ = &ret_tmp;
  _dom6(Locales, ret_to_arg_ref_tmp_);
  i_x = &ret_tmp;
  coerce_tmp = (i_x)->_unowned;
  if (coerce_tmp) {
    _ref_tmp_ = i_x;
    chpl_macro_tmp_2138.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2138.addr = _ref_tmp_;
    T4 = chpl_macro_tmp_2138;
    ret3 = chpl__initCopy2(T4);
    ret2 = ret3;
    goto _end_chpl__unalias;
  } else {
    ret2 = ret_tmp;
    goto _end_chpl__unalias;
  }
  _end_chpl__unalias:;
  LocaleSpace = ret2;
  chpl_comm_broadcast_private(INT64(20), sizeof(_domain_DefaultRectangularDom_1_int64_t_F), -1);
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_LocalesArray:;
  return;
}

/* LocalesArray.chpl:40 */
static void chpl__deinit_LocalesArray(void) {
  _domain_DefaultRectangularDom_1_int64_t_F local_LocaleSpace;
  local_LocaleSpace = LocaleSpace;
  chpl__autoDestroy5(&local_LocaleSpace);
  return;
}

