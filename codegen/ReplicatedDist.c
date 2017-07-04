/* ReplicatedDist.chpl:1 */
static void chpl__init_ReplicatedDist(int64_t _ln_chpl,
                                      int32_t _fn_chpl) {
  _ref_int32_t refIndentLevel_chpl = NULL;
  if (chpl__init_ReplicatedDist_p) {
    goto _exit_chpl__init_ReplicatedDist_chpl;
  }
  printModuleInit("%*s\n", "ReplicatedDist", INT64(14));
  refIndentLevel_chpl = &moduleInitLevel;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_ReplicatedDist_p = UINT8(true);
  {
    chpl__init_OldReplicatedDist(INT64(1), INT32(58));
  }
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_ReplicatedDist_chpl:;
  return;
}

/* ReplicatedDist.chpl:106 */
static Replicated_chpl _construct_Replicated_chpl(_ref_list_BaseDom _doms_chpl,
                                                  _ref_atomicbool _domsLock_chpl,
                                                  chpl_bool _free_when_no_doms_chpl,
                                                  int64_t pid_chpl,
                                                  _ref__domain_DefaultAssociativeDom_int64_t_T targetLocDom_chpl,
                                                  _ref__array_DefaultAssociativeArr_locale_int64_t_T targetLocales_chpl,
                                                  Replicated_chpl meme_chpl) {
  Replicated_chpl this_chpl6 = NULL;
  this_chpl6 = meme_chpl;
  _construct_BaseDist(_doms_chpl, _domsLock_chpl, _free_when_no_doms_chpl, pid_chpl, &((this_chpl6)->super_chpl));
  (this_chpl6)->targetLocDom_chpl = *(targetLocDom_chpl);
  (this_chpl6)->targetLocales_chpl = *(targetLocales_chpl);
  return this_chpl6;
}

/* ReplicatedDist.chpl:106 */
static void chpl__auto_destroy_Replicated(chpl____wide_Replicated this_chpl6) {
  _array_DefaultAssociativeArr_locale_int64_t_T _field_destructor_tmp__chpl;
  _array_DefaultAssociativeArr_locale_int64_t_T tmp_chpl;
  _domain_DefaultAssociativeDom_int64_t_T _field_destructor_tmp__chpl2;
  _domain_DefaultAssociativeDom_int64_t_T tmp_chpl2;
  chpl____wide_BaseDist _parent_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide__array_DefaultAssociativeArr_locale_int64_t_T chpl_macro_tmp_5949;
  chpl____wide__ref__domain_DefaultAssociativeDom_int64_t_T chpl_macro_tmp_5950;
  chpl____wide_BaseDist chpl_macro_tmp_5951;
  chpl_macro_tmp_5949.locale = (&this_chpl6)->locale;
  chpl_macro_tmp_5949.addr = &(((&this_chpl6)->addr)->targetLocales_chpl);
  chpl_gen_comm_get(((void*)(&tmp_chpl)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5949).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5949).addr, sizeof(_array_DefaultAssociativeArr_locale_int64_t_T), -1, COMMID(0), INT64(110), INT64(58));
  _field_destructor_tmp__chpl = tmp_chpl;
  chpl__autoDestroy26(&_field_destructor_tmp__chpl);
  chpl_macro_tmp_5950.locale = (&this_chpl6)->locale;
  chpl_macro_tmp_5950.addr = &(((&this_chpl6)->addr)->targetLocDom_chpl);
  chpl_gen_comm_get(((void*)(&tmp_chpl2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5950).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5950).addr, sizeof(_domain_DefaultAssociativeDom_int64_t_T), -1, COMMID(1), INT64(107), INT64(58));
  _field_destructor_tmp__chpl2 = tmp_chpl2;
  chpl__autoDestroy8(&_field_destructor_tmp__chpl2);
  chpl_macro_tmp_5951.locale = (&this_chpl6)->locale;
  chpl_macro_tmp_5951.addr = ((BaseDist)((&this_chpl6)->addr));
  _parent_destructor_tmp__chpl = chpl_macro_tmp_5951;
  deinit35(_parent_destructor_tmp__chpl);
  return;
}

/* ReplicatedDist.chpl:116 */
static Replicated_chpl Replicated_chpl3(chpl____wide__ref__wide__array_DefaultRectangularArr_locale_1_int64_t_F_int64_t targetLocales_chpl,
                                        _ref_string purposeMessage_chpl) {
  int32_t local_c_sublocid_any_chpl;
  Replicated_chpl this_chpl6 = NULL;
  Replicated_chpl this_chpl7 = NULL;
  c_void_ptr cast_tmp_chpl;
  _domain_DefaultAssociativeDom_int64_t_T _init_class_tmp__chpl;
  chpl____wide_DefaultAssociativeDom_int64_t_T tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _array_DefaultAssociativeArr_locale_int64_t_T _init_class_tmp__chpl2;
  chpl____wide_DefaultAssociativeArr_locale_int64_t_T tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  list_BaseDom_chpl this_chpl8;
  chpl____wide_listNode_BaseDom tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseDom tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  listNode_BaseDom_chpl call_tmp_chpl = NULL;
  chpl____wide_listNode_BaseDom tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  listNode_BaseDom_chpl call_tmp_chpl2 = NULL;
  chpl____wide_listNode_BaseDom tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  list_BaseDom_chpl ret_tmp_chpl;
  _ref_list_BaseDom ret_to_arg_ref_tmp__chpl = NULL;
  atomicbool this_chpl9;
  atomic_bool ret_chpl;
  atomic_bool type_tmp_chpl;
  _ref_atomic_bool _ref_tmp__chpl = NULL;
  atomicbool ret_tmp_chpl2;
  _ref_atomicbool ret_to_arg_ref_tmp__chpl2 = NULL;
  _domain_DefaultAssociativeDom_int64_t_T default_argtargetLocDom_chpl;
  chpl_localeID_t _autoCopy_tmp__chpl;
  chpl____wide_locale call_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl___RuntimeTypeInfo5 call_tmp_chpl4;
  chpl___RuntimeTypeInfo5 wrap_call_tmp_chpl;
  _distribution_DefaultDist _runtime_type_tmp__chpl;
  _distribution_DefaultDist tmp_chpl7;
  _domain_DefaultAssociativeDom_int64_t_T ret_tmp_chpl3;
  _ref__domain_DefaultAssociativeDom_int64_t_T ret_to_arg_ref_tmp__chpl3 = NULL;
  _ref__domain_DefaultAssociativeDom_int64_t_T call_tmp_chpl5 = NULL;
  chpl___RuntimeTypeInfo26 call_tmp_chpl6;
  _ref__domain_DefaultAssociativeDom_int64_t_T i_dom_chpl = NULL;
  _domain_DefaultAssociativeDom_int64_t_T _runtime_type_tmp__chpl2;
  _domain_DefaultAssociativeDom_int64_t_T tmp_chpl8;
  _array_DefaultAssociativeArr_locale_int64_t_T ret_tmp_chpl4;
  _ref__array_DefaultAssociativeArr_locale_int64_t_T ret_to_arg_ref_tmp__chpl4 = NULL;
  _array_DefaultAssociativeArr_locale_int64_t_T retarg_tmp_chpl;
  Replicated_chpl wrap_call_tmp_chpl2 = NULL;
  chpl____wide_DefaultRectangularArr_locale_1_int64_t_F_int64_t ret_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_locale_1_int64_t_F_int64_t this_chpl10 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularDom_1_int64_t_F coerce_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularDom_1_int64_t_F _ic__F1_viewDom_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_locale_1_int64_t_F_int64_t info_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp_chpl7;
  int64_t call_tmp_chpl8;
  int64_t call_tmp_chpl9;
  int64_t call_tmp_chpl10;
  int64_t _ic__F1_high_chpl;
  int64_t _ic__F2_stride_chpl;
  int64_t i_chpl;
  chpl____wide__ddata_locale coerce_tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide_locale call_tmp_chpl11 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__domain_DefaultAssociativeDom_int64_t_T call_tmp_chpl12 = NULL;
  int64_t call_tmp_chpl13;
  chpl____wide_locale coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp_chpl14;
  chpl____wide_locale coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__wide__array_DefaultAssociativeArr_locale_int64_t_T call_tmp_chpl15 = NULL;
  chpl____wide_DefaultAssociativeArr_locale_int64_t_T ret_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide_locale wrap_call_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_locale coerce_tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__nilType chpl_macro_tmp_5952;
  chpl____wide_DefaultAssociativeDom_int64_t_T chpl_macro_tmp_5953;
  chpl____wide__nilType chpl_macro_tmp_5954;
  chpl____wide_DefaultAssociativeArr_locale_int64_t_T chpl_macro_tmp_5955;
  chpl____wide__nilType chpl_macro_tmp_5956;
  chpl____wide_listNode_BaseDom chpl_macro_tmp_5957;
  chpl____wide__nilType chpl_macro_tmp_5958;
  chpl____wide_listNode_BaseDom chpl_macro_tmp_5959;
  chpl____wide_listNode_BaseDom chpl_macro_tmp_5960;
  chpl____wide_listNode_BaseDom chpl_macro_tmp_5961;
  chpl____wide__ref__wide_DefaultRectangularArr_locale_1_int64_t_F_int64_t chpl_macro_tmp_5962;
  chpl____wide__ref__wide_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_5963;
  chpl____wide__ref__wide__ddata_locale chpl_macro_tmp_5964;
  chpl____wide__ref__wide_locale chpl_macro_tmp_5965;
  local_c_sublocid_any_chpl = c_sublocid_any;
  cast_tmp_chpl = chpl_here_alloc(sizeof(chpl_Replicated_chpl_object), INT16(116));
  this_chpl7 = ((Replicated_chpl)(cast_tmp_chpl));
  ((object)(this_chpl7))->chpl__cid = chpl__cid_Replicated_chpl;
  (&_init_class_tmp__chpl)->_pid = INT64(0);
  chpl_macro_tmp_5952.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5952.addr = nil;
  chpl_macro_tmp_5953.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5953.addr = NULL;
  tmp_chpl = chpl_macro_tmp_5953;
  (&_init_class_tmp__chpl)->_instance = tmp_chpl;
  (&_init_class_tmp__chpl)->_unowned = UINT8(false);
  (this_chpl7)->targetLocDom_chpl = _init_class_tmp__chpl;
  (&_init_class_tmp__chpl2)->_pid = INT64(0);
  chpl_macro_tmp_5954.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5954.addr = nil;
  chpl_macro_tmp_5955.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5955.addr = NULL;
  tmp_chpl2 = chpl_macro_tmp_5955;
  (&_init_class_tmp__chpl2)->_instance = tmp_chpl2;
  (&_init_class_tmp__chpl2)->_unowned = UINT8(false);
  (this_chpl7)->targetLocales_chpl = _init_class_tmp__chpl2;
  chpl_macro_tmp_5956.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5956.addr = nil;
  chpl_macro_tmp_5957.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5957.addr = NULL;
  tmp_chpl3 = chpl_macro_tmp_5957;
  (&this_chpl8)->first_chpl = tmp_chpl3;
  chpl_macro_tmp_5958.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5958.addr = nil;
  chpl_macro_tmp_5959.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5959.addr = NULL;
  tmp_chpl4 = chpl_macro_tmp_5959;
  (&this_chpl8)->last_chpl = tmp_chpl4;
  (&this_chpl8)->length_chpl = INT64(0);
  call_tmp_chpl = ((listNode_BaseDom_chpl)(nil));
  chpl_macro_tmp_5960.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5960.addr = call_tmp_chpl;
  tmp_chpl5 = chpl_macro_tmp_5960;
  (&this_chpl8)->first_chpl = tmp_chpl5;
  call_tmp_chpl2 = ((listNode_BaseDom_chpl)(nil));
  chpl_macro_tmp_5961.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5961.addr = call_tmp_chpl2;
  tmp_chpl6 = chpl_macro_tmp_5961;
  (&this_chpl8)->last_chpl = tmp_chpl6;
  (&this_chpl8)->length_chpl = INT64(0);
  ret_to_arg_ref_tmp__chpl = &ret_tmp_chpl;
  _construct_list_chpl3(call_tmp_chpl, call_tmp_chpl2, INT64(0), &this_chpl8, ret_to_arg_ref_tmp__chpl);
  ret_chpl = type_tmp_chpl;
  _ref_tmp__chpl = &ret_chpl;
  atomic_init_bool(_ref_tmp__chpl, UINT8(false));
  (&this_chpl9)->_v = ret_chpl;
  ret_to_arg_ref_tmp__chpl2 = &ret_tmp_chpl2;
  _construct_atomicbool(ret_chpl, &this_chpl9, ret_to_arg_ref_tmp__chpl2);
  _autoCopy_tmp__chpl = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any_chpl);
  call_tmp_chpl3 = chpl_localeID_to_locale(&_autoCopy_tmp__chpl);
  id(call_tmp_chpl3);
  wrap_call_tmp_chpl = chpl__buildDomainRuntimeType5(&defaultDist);
  call_tmp_chpl4 = wrap_call_tmp_chpl;
  tmp_chpl7 = (&call_tmp_chpl4)->d;
  _runtime_type_tmp__chpl = tmp_chpl7;
  ret_to_arg_ref_tmp__chpl3 = &ret_tmp_chpl3;
  chpl__convertRuntimeTypeToValue5(&_runtime_type_tmp__chpl, ret_to_arg_ref_tmp__chpl3);
  default_argtargetLocDom_chpl = ret_tmp_chpl3;
  (this_chpl7)->targetLocDom_chpl = ret_tmp_chpl3;
  call_tmp_chpl5 = chpl__ensureDomainExpr4(&default_argtargetLocDom_chpl);
  i_dom_chpl = call_tmp_chpl5;
  call_tmp_chpl6 = chpl__buildArrayRuntimeType22(i_dom_chpl);
  tmp_chpl8 = (&call_tmp_chpl6)->dom;
  _runtime_type_tmp__chpl2 = tmp_chpl8;
  ret_to_arg_ref_tmp__chpl4 = &retarg_tmp_chpl;
  chpl__convertRuntimeTypeToValue23(&_runtime_type_tmp__chpl2, ret_to_arg_ref_tmp__chpl4);
  ret_tmp_chpl4 = retarg_tmp_chpl;
  (this_chpl7)->targetLocales_chpl = ret_tmp_chpl4;
  wrap_call_tmp_chpl2 = _construct_Replicated_chpl(&ret_tmp_chpl, &ret_tmp_chpl2, UINT8(false), INT64(-1), &default_argtargetLocDom_chpl, &ret_tmp_chpl4, this_chpl7);
  this_chpl6 = wrap_call_tmp_chpl2;
  chpl_macro_tmp_5962.locale = (targetLocales_chpl).locale;
  chpl_macro_tmp_5962.addr = &(((targetLocales_chpl).addr)->_instance);
  chpl_gen_comm_get(((void*)(&ret_chpl2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5962).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5962).addr, sizeof(chpl____wide_DefaultRectangularArr_locale_1_int64_t_F_int64_t), -1, COMMID(2), INT64(119), INT64(58));
  this_chpl10 = ret_chpl2;
  chpl_macro_tmp_5963.locale = (&this_chpl10)->locale;
  chpl_macro_tmp_5963.addr = &(((&this_chpl10)->addr)->dom);
  chpl_gen_comm_get(((void*)(&coerce_tmp_chpl)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5963).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5963).addr, sizeof(chpl____wide_DefaultRectangularDom_1_int64_t_F), -1, COMMID(3), INT64(119), INT64(58));
  _ic__F1_viewDom_chpl = coerce_tmp_chpl;
  info_chpl = ret_chpl2;
  call_tmp_chpl7 = dsiLow(coerce_tmp_chpl);
  call_tmp_chpl8 = dsiLow(_ic__F1_viewDom_chpl);
  call_tmp_chpl9 = (((int64_t)((call_tmp_chpl8 + INT64(1)))) - call_tmp_chpl7);
  call_tmp_chpl10 = dsiNumIndices(_ic__F1_viewDom_chpl);
  _ic__F1_high_chpl = ((int64_t)((call_tmp_chpl7 + ((int64_t)((((int64_t)((call_tmp_chpl10 - INT64(1)))) * call_tmp_chpl9))))));
  _ic__F2_stride_chpl = call_tmp_chpl9;
  for (i_chpl = call_tmp_chpl7; ((i_chpl <= _ic__F1_high_chpl)); i_chpl += _ic__F2_stride_chpl) {
    chpl_macro_tmp_5964.locale = (&info_chpl)->locale;
    chpl_macro_tmp_5964.addr = &(((&info_chpl)->addr)->shiftedData);
    chpl_gen_comm_get(((void*)(&coerce_tmp_chpl2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5964).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5964).addr, sizeof(chpl____wide__ddata_locale), -1, COMMID(4), INT64(119), INT64(58));
    chpl_macro_tmp_5965.locale = (&coerce_tmp_chpl2)->locale;
    chpl_macro_tmp_5965.addr = ((&coerce_tmp_chpl2)->addr + i_chpl);
    call_tmp_chpl11 = chpl_macro_tmp_5965;
    call_tmp_chpl12 = &((this_chpl6)->targetLocDom_chpl);
    chpl_gen_comm_get(((void*)(&coerce_tmp_chpl3)), chpl_nodeFromLocaleID(&((call_tmp_chpl11).locale), INT64(0), INT32(0)), (call_tmp_chpl11).addr, sizeof(chpl____wide_locale), -1, COMMID(5), INT64(120), INT64(58));
    call_tmp_chpl13 = id(coerce_tmp_chpl3);
    add(call_tmp_chpl12, call_tmp_chpl13);
    chpl_gen_comm_get(((void*)(&coerce_tmp_chpl4)), chpl_nodeFromLocaleID(&((call_tmp_chpl11).locale), INT64(0), INT32(0)), (call_tmp_chpl11).addr, sizeof(chpl____wide_locale), -1, COMMID(6), INT64(121), INT64(58));
    call_tmp_chpl14 = id(coerce_tmp_chpl4);
    call_tmp_chpl15 = &((this_chpl6)->targetLocales_chpl);
    ret_chpl3 = (call_tmp_chpl15)->_instance;
    wrap_call_tmp_chpl3 = dsiAccess2(ret_chpl3, call_tmp_chpl14, UINT8(false));
    chpl_gen_comm_get(((void*)(&coerce_tmp_chpl5)), chpl_nodeFromLocaleID(&((call_tmp_chpl11).locale), INT64(0), INT32(0)), (call_tmp_chpl11).addr, sizeof(chpl____wide_locale), -1, COMMID(7), INT64(121), INT64(58));
    chpl_gen_comm_put(((void*)(&coerce_tmp_chpl5)), chpl_nodeFromLocaleID(&((wrap_call_tmp_chpl3).locale), INT64(0), INT32(0)), (wrap_call_tmp_chpl3).addr, sizeof(chpl____wide_locale), -1, COMMID(8), INT64(121), INT64(58));
  }
  return this_chpl6;
}

/* ReplicatedDist.chpl:116 */
static Replicated_chpl Replicated_chpl2(_ref__array_DefaultAssociativeArr_locale_int64_t_T targetLocales_chpl,
                                        _ref_string purposeMessage_chpl) {
  int32_t local_c_sublocid_any_chpl;
  Replicated_chpl this_chpl6 = NULL;
  Replicated_chpl this_chpl7 = NULL;
  c_void_ptr cast_tmp_chpl;
  _domain_DefaultAssociativeDom_int64_t_T _init_class_tmp__chpl;
  chpl____wide_DefaultAssociativeDom_int64_t_T tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _array_DefaultAssociativeArr_locale_int64_t_T _init_class_tmp__chpl2;
  chpl____wide_DefaultAssociativeArr_locale_int64_t_T tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  list_BaseDom_chpl this_chpl8;
  chpl____wide_listNode_BaseDom tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseDom tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  listNode_BaseDom_chpl call_tmp_chpl = NULL;
  chpl____wide_listNode_BaseDom tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  listNode_BaseDom_chpl call_tmp_chpl2 = NULL;
  chpl____wide_listNode_BaseDom tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  list_BaseDom_chpl ret_tmp_chpl;
  _ref_list_BaseDom ret_to_arg_ref_tmp__chpl = NULL;
  atomicbool this_chpl9;
  atomic_bool ret_chpl;
  atomic_bool type_tmp_chpl;
  _ref_atomic_bool _ref_tmp__chpl = NULL;
  atomicbool ret_tmp_chpl2;
  _ref_atomicbool ret_to_arg_ref_tmp__chpl2 = NULL;
  _domain_DefaultAssociativeDom_int64_t_T default_argtargetLocDom_chpl;
  chpl_localeID_t _autoCopy_tmp__chpl;
  chpl____wide_locale call_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl___RuntimeTypeInfo5 call_tmp_chpl4;
  chpl___RuntimeTypeInfo5 wrap_call_tmp_chpl;
  _distribution_DefaultDist _runtime_type_tmp__chpl;
  _distribution_DefaultDist tmp_chpl7;
  _domain_DefaultAssociativeDom_int64_t_T ret_tmp_chpl3;
  _ref__domain_DefaultAssociativeDom_int64_t_T ret_to_arg_ref_tmp__chpl3 = NULL;
  _ref__domain_DefaultAssociativeDom_int64_t_T call_tmp_chpl5 = NULL;
  chpl___RuntimeTypeInfo26 call_tmp_chpl6;
  _ref__domain_DefaultAssociativeDom_int64_t_T i_dom_chpl = NULL;
  _domain_DefaultAssociativeDom_int64_t_T _runtime_type_tmp__chpl2;
  _domain_DefaultAssociativeDom_int64_t_T tmp_chpl8;
  _array_DefaultAssociativeArr_locale_int64_t_T ret_tmp_chpl4;
  _ref__array_DefaultAssociativeArr_locale_int64_t_T ret_to_arg_ref_tmp__chpl4 = NULL;
  _array_DefaultAssociativeArr_locale_int64_t_T retarg_tmp_chpl;
  Replicated_chpl wrap_call_tmp_chpl2 = NULL;
  DefaultAssociativeArr_locale_int64_t_T ret_chpl2 = NULL;
  chpl____wide_DefaultAssociativeArr_locale_int64_t_T tmp_chpl9 = {CHPL_LOCALEID_T_INIT, NULL};
  DefaultAssociativeArr_locale_int64_t_T _ic__F0_this_chpl = NULL;
  DefaultAssociativeArr_locale_int64_t_T this_chpl10 = NULL;
  chpl____wide_DefaultAssociativeDom_int64_t_T coerce_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultAssociativeDom_int64_t_T _ic__F0_this_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultAssociativeDom_int64_t_T this_chpl11 = {CHPL_LOCALEID_T_INIT, NULL};
  _array_DefaultRectangularArr_chpl_TableEntry_int64_t_1_int64_t_F_int64_t _ir_F1_tab_chpl;
  _array_DefaultRectangularArr_chpl_TableEntry_int64_t_1_int64_t_F_int64_t tmp_chpl10;
  _array_DefaultRectangularArr_chpl_TableEntry_int64_t_1_int64_t_F_int64_t _ic__F1_tab_chpl;
  _domain_DefaultRectangularDom_1_int64_t_F call_tmp_chpl7;
  _domain_DefaultRectangularDom_1_int64_t_F ret_tmp_chpl5;
  _ref__domain_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp__chpl5 = NULL;
  chpl____wide__ref__wide__array_DefaultRectangularArr_chpl_TableEntry_int64_t_1_int64_t_F_int64_t tmp_chpl11 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularDom_1_int64_t_F ret_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  _tuple_1_star_int64_t ret_tmp_chpl6;
  _ref__tuple_1_star_int64_t ret_to_arg_ref_tmp__chpl6 = NULL;
  chpl____wide__ref_range_int64_t_bounded_F call_tmp_chpl8 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F _this_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularDom_1_int64_t_F this_chpl12 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_range_int64_t_bounded_F i_x_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F tmp_chpl12;
  range_int64_t_bounded_F _ic__F0_this_chpl3;
  int64_t i_chpl;
  int64_t ret_chpl4;
  int64_t end_chpl;
  int64_t ret_chpl5;
  chpl_TableEntry_int64_t tmp_chpl13;
  _array_DefaultRectangularArr_chpl_TableEntry_int64_t_1_int64_t_F_int64_t tab_chpl;
  chpl____wide_DefaultRectangularArr_chpl_TableEntry_int64_t_1_int64_t_F_int64_t call_tmp_chpl9 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_chpl_TableEntry_int64_t_1_int64_t_F_int64_t ret_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_TableEntry_int64_t ret_chpl7;
  chpl____wide__ddata_chpl_TableEntry_int64_t coerce_tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_chpl_TableEntry_int64_t call_tmp_chpl10 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl__hash_status coerce_tmp_chpl3;
  chpl_bool call_tmp_chpl11;
  chpl____wide_DefaultAssociativeDom_int64_t_T this_chpl13 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide__array_DefaultRectangularArr_chpl_TableEntry_int64_t_1_int64_t_F_int64_t call_tmp_chpl12 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_TableEntry_int64_t tmp_chpl14;
  chpl____wide_DefaultRectangularArr_chpl_TableEntry_int64_t_1_int64_t_F_int64_t call_tmp_chpl13 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_chpl_TableEntry_int64_t_1_int64_t_F_int64_t ret_chpl8 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_TableEntry_int64_t ret_chpl9;
  chpl____wide__ddata_chpl_TableEntry_int64_t coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_chpl_TableEntry_int64_t call_tmp_chpl14 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t _yieldedIndex_chpl;
  chpl____wide__ref__wide_locale wrap_call_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultAssociativeArr_locale_int64_t_T tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__domain_DefaultAssociativeDom_int64_t_T call_tmp_chpl15 = NULL;
  int64_t call_tmp_chpl16;
  chpl____wide_locale coerce_tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp_chpl17;
  chpl____wide_locale coerce_tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__wide__array_DefaultAssociativeArr_locale_int64_t_T call_tmp_chpl18 = NULL;
  chpl____wide_DefaultAssociativeArr_locale_int64_t_T ret_chpl10 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide_locale wrap_call_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_locale coerce_tmp_chpl7 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__nilType chpl_macro_tmp_5966;
  chpl____wide_DefaultAssociativeDom_int64_t_T chpl_macro_tmp_5967;
  chpl____wide__nilType chpl_macro_tmp_5968;
  chpl____wide_DefaultAssociativeArr_locale_int64_t_T chpl_macro_tmp_5969;
  chpl____wide__nilType chpl_macro_tmp_5970;
  chpl____wide_listNode_BaseDom chpl_macro_tmp_5971;
  chpl____wide__nilType chpl_macro_tmp_5972;
  chpl____wide_listNode_BaseDom chpl_macro_tmp_5973;
  chpl____wide_listNode_BaseDom chpl_macro_tmp_5974;
  chpl____wide_listNode_BaseDom chpl_macro_tmp_5975;
  chpl____wide__ref__wide__array_DefaultRectangularArr_chpl_TableEntry_int64_t_1_int64_t_F_int64_t chpl_macro_tmp_5976;
  chpl____wide__ref__wide__array_DefaultRectangularArr_chpl_TableEntry_int64_t_1_int64_t_F_int64_t chpl_macro_tmp_5977;
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F chpl_macro_tmp_5978;
  chpl____wide__ref_range_int64_t_bounded_F chpl_macro_tmp_5979;
  chpl____wide__ref__wide__ddata_chpl_TableEntry_int64_t chpl_macro_tmp_5980;
  chpl____wide__ref_chpl_TableEntry_int64_t chpl_macro_tmp_5981;
  chpl____wide__ref__wide__array_DefaultRectangularArr_chpl_TableEntry_int64_t_1_int64_t_F_int64_t chpl_macro_tmp_5982;
  chpl____wide__ref__wide_DefaultRectangularArr_chpl_TableEntry_int64_t_1_int64_t_F_int64_t chpl_macro_tmp_5983;
  chpl____wide__ref__wide__ddata_chpl_TableEntry_int64_t chpl_macro_tmp_5984;
  chpl____wide__ref_chpl_TableEntry_int64_t chpl_macro_tmp_5985;
  chpl____wide_DefaultAssociativeArr_locale_int64_t_T chpl_macro_tmp_5986;
  local_c_sublocid_any_chpl = c_sublocid_any;
  cast_tmp_chpl = chpl_here_alloc(sizeof(chpl_Replicated_chpl_object), INT16(116));
  this_chpl7 = ((Replicated_chpl)(cast_tmp_chpl));
  ((object)(this_chpl7))->chpl__cid = chpl__cid_Replicated_chpl;
  (&_init_class_tmp__chpl)->_pid = INT64(0);
  chpl_macro_tmp_5966.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5966.addr = nil;
  chpl_macro_tmp_5967.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5967.addr = NULL;
  tmp_chpl = chpl_macro_tmp_5967;
  (&_init_class_tmp__chpl)->_instance = tmp_chpl;
  (&_init_class_tmp__chpl)->_unowned = UINT8(false);
  (this_chpl7)->targetLocDom_chpl = _init_class_tmp__chpl;
  (&_init_class_tmp__chpl2)->_pid = INT64(0);
  chpl_macro_tmp_5968.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5968.addr = nil;
  chpl_macro_tmp_5969.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5969.addr = NULL;
  tmp_chpl2 = chpl_macro_tmp_5969;
  (&_init_class_tmp__chpl2)->_instance = tmp_chpl2;
  (&_init_class_tmp__chpl2)->_unowned = UINT8(false);
  (this_chpl7)->targetLocales_chpl = _init_class_tmp__chpl2;
  chpl_macro_tmp_5970.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5970.addr = nil;
  chpl_macro_tmp_5971.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5971.addr = NULL;
  tmp_chpl3 = chpl_macro_tmp_5971;
  (&this_chpl8)->first_chpl = tmp_chpl3;
  chpl_macro_tmp_5972.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5972.addr = nil;
  chpl_macro_tmp_5973.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5973.addr = NULL;
  tmp_chpl4 = chpl_macro_tmp_5973;
  (&this_chpl8)->last_chpl = tmp_chpl4;
  (&this_chpl8)->length_chpl = INT64(0);
  call_tmp_chpl = ((listNode_BaseDom_chpl)(nil));
  chpl_macro_tmp_5974.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5974.addr = call_tmp_chpl;
  tmp_chpl5 = chpl_macro_tmp_5974;
  (&this_chpl8)->first_chpl = tmp_chpl5;
  call_tmp_chpl2 = ((listNode_BaseDom_chpl)(nil));
  chpl_macro_tmp_5975.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5975.addr = call_tmp_chpl2;
  tmp_chpl6 = chpl_macro_tmp_5975;
  (&this_chpl8)->last_chpl = tmp_chpl6;
  (&this_chpl8)->length_chpl = INT64(0);
  ret_to_arg_ref_tmp__chpl = &ret_tmp_chpl;
  _construct_list_chpl3(call_tmp_chpl, call_tmp_chpl2, INT64(0), &this_chpl8, ret_to_arg_ref_tmp__chpl);
  ret_chpl = type_tmp_chpl;
  _ref_tmp__chpl = &ret_chpl;
  atomic_init_bool(_ref_tmp__chpl, UINT8(false));
  (&this_chpl9)->_v = ret_chpl;
  ret_to_arg_ref_tmp__chpl2 = &ret_tmp_chpl2;
  _construct_atomicbool(ret_chpl, &this_chpl9, ret_to_arg_ref_tmp__chpl2);
  _autoCopy_tmp__chpl = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any_chpl);
  call_tmp_chpl3 = chpl_localeID_to_locale(&_autoCopy_tmp__chpl);
  id(call_tmp_chpl3);
  wrap_call_tmp_chpl = chpl__buildDomainRuntimeType5(&defaultDist);
  call_tmp_chpl4 = wrap_call_tmp_chpl;
  tmp_chpl7 = (&call_tmp_chpl4)->d;
  _runtime_type_tmp__chpl = tmp_chpl7;
  ret_to_arg_ref_tmp__chpl3 = &ret_tmp_chpl3;
  chpl__convertRuntimeTypeToValue5(&_runtime_type_tmp__chpl, ret_to_arg_ref_tmp__chpl3);
  default_argtargetLocDom_chpl = ret_tmp_chpl3;
  (this_chpl7)->targetLocDom_chpl = ret_tmp_chpl3;
  call_tmp_chpl5 = chpl__ensureDomainExpr4(&default_argtargetLocDom_chpl);
  i_dom_chpl = call_tmp_chpl5;
  call_tmp_chpl6 = chpl__buildArrayRuntimeType22(i_dom_chpl);
  tmp_chpl8 = (&call_tmp_chpl6)->dom;
  _runtime_type_tmp__chpl2 = tmp_chpl8;
  ret_to_arg_ref_tmp__chpl4 = &retarg_tmp_chpl;
  chpl__convertRuntimeTypeToValue23(&_runtime_type_tmp__chpl2, ret_to_arg_ref_tmp__chpl4);
  ret_tmp_chpl4 = retarg_tmp_chpl;
  (this_chpl7)->targetLocales_chpl = ret_tmp_chpl4;
  wrap_call_tmp_chpl2 = _construct_Replicated_chpl(&ret_tmp_chpl, &ret_tmp_chpl2, UINT8(false), INT64(-1), &default_argtargetLocDom_chpl, &ret_tmp_chpl4, this_chpl7);
  this_chpl6 = wrap_call_tmp_chpl2;
  tmp_chpl9 = (targetLocales_chpl)->_instance;
  ret_chpl2 = (&tmp_chpl9)->addr;
  _ic__F0_this_chpl = ret_chpl2;
  this_chpl10 = ret_chpl2;
  coerce_tmp_chpl = (this_chpl10)->dom;
  _ic__F0_this_chpl2 = coerce_tmp_chpl;
  this_chpl11 = coerce_tmp_chpl;
  chpl_macro_tmp_5976.locale = (&this_chpl11)->locale;
  chpl_macro_tmp_5976.addr = &(((&this_chpl11)->addr)->table);
  chpl_gen_comm_get(((void*)(&tmp_chpl10)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5976).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5976).addr, sizeof(_array_DefaultRectangularArr_chpl_TableEntry_int64_t_1_int64_t_F_int64_t), -1, COMMID(9), INT64(119), INT64(58));
  _ir_F1_tab_chpl = tmp_chpl10;
  _ic__F1_tab_chpl = _ir_F1_tab_chpl;
  ret_to_arg_ref_tmp__chpl5 = &ret_tmp_chpl5;
  chpl_macro_tmp_5977.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5977.addr = &_ir_F1_tab_chpl;
  tmp_chpl11 = chpl_macro_tmp_5977;
  _dom4(tmp_chpl11, ret_to_arg_ref_tmp__chpl5);
  call_tmp_chpl7 = ret_tmp_chpl5;
  ret_chpl3 = (&ret_tmp_chpl5)->_instance;
  ret_to_arg_ref_tmp__chpl6 = &ret_tmp_chpl6;
  createTuple_chpl(INT64(0), ret_to_arg_ref_tmp__chpl6);
  this_chpl12 = ret_chpl3;
  chpl_macro_tmp_5978.locale = (&this_chpl12)->locale;
  chpl_macro_tmp_5978.addr = &(((&this_chpl12)->addr)->ranges);
  _this_tmp__chpl = chpl_macro_tmp_5978;
  chpl_macro_tmp_5979.locale = (_this_tmp__chpl).locale;
  chpl_macro_tmp_5979.addr = (*((_this_tmp__chpl).addr) + INT64(0));
  call_tmp_chpl8 = chpl_macro_tmp_5979;
  i_x_chpl = call_tmp_chpl8;
  chpl_gen_comm_get(((void*)(&tmp_chpl12)), chpl_nodeFromLocaleID(&((i_x_chpl).locale), INT64(0), INT32(0)), (i_x_chpl).addr, sizeof(range_int64_t_bounded_F), -1, COMMID(10), INT64(119), INT64(58));
  _ic__F0_this_chpl3 = tmp_chpl12;
  ret_chpl4 = (&_ic__F0_this_chpl3)->_low;
  ret_chpl5 = (&_ic__F0_this_chpl3)->_high;
  end_chpl = ret_chpl5;
  for (i_chpl = ret_chpl4; ((i_chpl <= end_chpl)); i_chpl += INT64(1)) {
    tab_chpl = _ic__F1_tab_chpl;
    ret_chpl6 = (&tab_chpl)->_instance;
    call_tmp_chpl9 = ret_chpl6;
    chpl_macro_tmp_5980.locale = (&call_tmp_chpl9)->locale;
    chpl_macro_tmp_5980.addr = &(((&call_tmp_chpl9)->addr)->shiftedData);
    chpl_gen_comm_get(((void*)(&coerce_tmp_chpl2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5980).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5980).addr, sizeof(chpl____wide__ddata_chpl_TableEntry_int64_t), -1, COMMID(11), INT64(119), INT64(58));
    chpl_macro_tmp_5981.locale = (&coerce_tmp_chpl2)->locale;
    chpl_macro_tmp_5981.addr = ((&coerce_tmp_chpl2)->addr + i_chpl);
    call_tmp_chpl10 = chpl_macro_tmp_5981;
    chpl_gen_comm_get(((void*)(&ret_chpl7)), chpl_nodeFromLocaleID(&((call_tmp_chpl10).locale), INT64(0), INT32(0)), (call_tmp_chpl10).addr, sizeof(chpl_TableEntry_int64_t), -1, COMMID(12), INT64(119), INT64(58));
    tmp_chpl13 = ret_chpl7;
    coerce_tmp_chpl3 = (&tmp_chpl13)->status;
    call_tmp_chpl11 = (((int64_t)(coerce_tmp_chpl3)) == ((int64_t)(chpl__hash_status_full)));
    if (call_tmp_chpl11) {
      this_chpl13 = _ic__F0_this_chpl2;
      chpl_macro_tmp_5982.locale = (&this_chpl13)->locale;
      chpl_macro_tmp_5982.addr = &(((&this_chpl13)->addr)->table);
      call_tmp_chpl12 = chpl_macro_tmp_5982;
      chpl_macro_tmp_5983.locale = (call_tmp_chpl12).locale;
      chpl_macro_tmp_5983.addr = &(((call_tmp_chpl12).addr)->_instance);
      chpl_gen_comm_get(((void*)(&ret_chpl8)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5983).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5983).addr, sizeof(chpl____wide_DefaultRectangularArr_chpl_TableEntry_int64_t_1_int64_t_F_int64_t), -1, COMMID(13), INT64(119), INT64(58));
      call_tmp_chpl13 = ret_chpl8;
      chpl_macro_tmp_5984.locale = (&call_tmp_chpl13)->locale;
      chpl_macro_tmp_5984.addr = &(((&call_tmp_chpl13)->addr)->shiftedData);
      chpl_gen_comm_get(((void*)(&coerce_tmp_chpl4)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5984).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5984).addr, sizeof(chpl____wide__ddata_chpl_TableEntry_int64_t), -1, COMMID(14), INT64(119), INT64(58));
      chpl_macro_tmp_5985.locale = (&coerce_tmp_chpl4)->locale;
      chpl_macro_tmp_5985.addr = ((&coerce_tmp_chpl4)->addr + i_chpl);
      call_tmp_chpl14 = chpl_macro_tmp_5985;
      chpl_gen_comm_get(((void*)(&ret_chpl9)), chpl_nodeFromLocaleID(&((call_tmp_chpl14).locale), INT64(0), INT32(0)), (call_tmp_chpl14).addr, sizeof(chpl_TableEntry_int64_t), -1, COMMID(15), INT64(119), INT64(58));
      tmp_chpl14 = ret_chpl9;
      _yieldedIndex_chpl = (&tmp_chpl14)->idx;
      chpl_macro_tmp_5986.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_5986.addr = _ic__F0_this_chpl;
      tmp_chpl15 = chpl_macro_tmp_5986;
      wrap_call_tmp_chpl3 = dsiAccess2(tmp_chpl15, _yieldedIndex_chpl, UINT8(false));
      call_tmp_chpl15 = &((this_chpl6)->targetLocDom_chpl);
      chpl_gen_comm_get(((void*)(&coerce_tmp_chpl5)), chpl_nodeFromLocaleID(&((wrap_call_tmp_chpl3).locale), INT64(0), INT32(0)), (wrap_call_tmp_chpl3).addr, sizeof(chpl____wide_locale), -1, COMMID(16), INT64(120), INT64(58));
      call_tmp_chpl16 = id(coerce_tmp_chpl5);
      add(call_tmp_chpl15, call_tmp_chpl16);
      chpl_gen_comm_get(((void*)(&coerce_tmp_chpl6)), chpl_nodeFromLocaleID(&((wrap_call_tmp_chpl3).locale), INT64(0), INT32(0)), (wrap_call_tmp_chpl3).addr, sizeof(chpl____wide_locale), -1, COMMID(17), INT64(121), INT64(58));
      call_tmp_chpl17 = id(coerce_tmp_chpl6);
      call_tmp_chpl18 = &((this_chpl6)->targetLocales_chpl);
      ret_chpl10 = (call_tmp_chpl18)->_instance;
      wrap_call_tmp_chpl4 = dsiAccess2(ret_chpl10, call_tmp_chpl17, UINT8(false));
      chpl_gen_comm_get(((void*)(&coerce_tmp_chpl7)), chpl_nodeFromLocaleID(&((wrap_call_tmp_chpl3).locale), INT64(0), INT32(0)), (wrap_call_tmp_chpl3).addr, sizeof(chpl____wide_locale), -1, COMMID(18), INT64(121), INT64(58));
      chpl_gen_comm_put(((void*)(&coerce_tmp_chpl7)), chpl_nodeFromLocaleID(&((wrap_call_tmp_chpl4).locale), INT64(0), INT32(0)), (wrap_call_tmp_chpl4).addr, sizeof(chpl____wide_locale), -1, COMMID(19), INT64(121), INT64(58));
    }
  }
  chpl__autoDestroy5(&call_tmp_chpl7);
  return this_chpl6;
}

/* ReplicatedDist.chpl:136 */
static void dsiDestroyDist_chpl3(chpl____wide_Replicated this_chpl6) {
  return;
}

/* ReplicatedDist.chpl:144 */
static int64_t dsiGetPrivatizeData_chpl5(Replicated_chpl this_chpl6) {
  return INT64(0);
}

/* ReplicatedDist.chpl:152 */
static Replicated_chpl dsiPrivatize_chpl5(chpl____wide_Replicated this_chpl6,
                                          int64_t privatizeData_chpl) {
  string local__str_literal_2024_chpl;
  int64_t local_dataParMinGranularity_chpl;
  chpl_bool local_dataParIgnoreRunningTasks_chpl;
  int32_t local_c_sublocid_any_chpl;
  int64_t local_dataParTasksPerLocale_chpl;
  _array_DefaultAssociativeArr_locale_int64_t_T otherTargetLocales_chpl;
  chpl____wide__ref__wide__array_DefaultAssociativeArr_locale_int64_t_T call_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _domain_DefaultAssociativeDom_int64_t_T privDom_chpl;
  _domain_DefaultAssociativeDom_int64_t_T ret_tmp_chpl;
  _ref__domain_DefaultAssociativeDom_int64_t_T ret_to_arg_ref_tmp__chpl = NULL;
  _ref__array_DefaultAssociativeArr_locale_int64_t_T _ref_tmp__chpl = NULL;
  chpl____wide__ref__wide__array_DefaultAssociativeArr_locale_int64_t_T tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__domain_DefaultAssociativeDom_int64_t_T i_x_chpl = NULL;
  _domain_DefaultAssociativeDom_int64_t_T ret_chpl;
  chpl_bool coerce_tmp_chpl;
  _domain_DefaultAssociativeDom_int64_t_T ret_chpl2;
  _array_DefaultAssociativeArr_locale_int64_t_T privTargetLocales_chpl;
  _array_DefaultAssociativeArr_locale_int64_t_T type_tmp_chpl;
  _ref__domain_DefaultAssociativeDom_int64_t_T call_tmp_chpl2 = NULL;
  chpl___RuntimeTypeInfo26 call_tmp_chpl3;
  _ref__domain_DefaultAssociativeDom_int64_t_T i_dom_chpl = NULL;
  _domain_DefaultAssociativeDom_int64_t_T _runtime_type_tmp__chpl;
  _domain_DefaultAssociativeDom_int64_t_T tmp_chpl2;
  _array_DefaultAssociativeArr_locale_int64_t_T ret_tmp_chpl2;
  _ref__array_DefaultAssociativeArr_locale_int64_t_T ret_to_arg_ref_tmp__chpl2 = NULL;
  _array_DefaultAssociativeArr_locale_int64_t_T retarg_tmp_chpl;
  _ref__array_DefaultAssociativeArr_locale_int64_t_T _ref_tmp__chpl2 = NULL;
  DefaultAssociativeArr_locale_int64_t_T ret_chpl3 = NULL;
  chpl____wide_DefaultAssociativeArr_locale_int64_t_T tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp_chpl4;
  DefaultAssociativeArr_locale_int64_t_T ret_chpl4 = NULL;
  chpl____wide_DefaultAssociativeArr_locale_int64_t_T tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  DefaultAssociativeArr_locale_int64_t_T ret_chpl5 = NULL;
  chpl____wide_DefaultAssociativeArr_locale_int64_t_T tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp_chpl5;
  _ref__array_DefaultAssociativeArr_locale_int64_t_T tmp_chpl6 = NULL;
  chpl_bool ret_chpl6;
  int64_t call_tmp_chpl6;
  chpl_bool call_tmp_chpl7;
  int64_t call_tmp_chpl8;
  _tuple_2_star__ref__array_DefaultAssociativeArr_locale_int64_t_T chpl__iterLF;
  _array_DefaultAssociativeArr_locale_int64_t_T call_tmp_chpl9;
  DefaultAssociativeArr_locale_int64_t_T ret_chpl7 = NULL;
  chpl____wide_DefaultAssociativeArr_locale_int64_t_T tmp_chpl7 = {CHPL_LOCALEID_T_INIT, NULL};
  DefaultAssociativeArr_locale_int64_t_T this_chpl7 = NULL;
  chpl____wide_DefaultAssociativeDom_int64_t_T coerce_tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultAssociativeDom_int64_t_T _ic__F0_this_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t ret_chpl8;
  chpl_bool call_tmp_chpl10;
  chpl____wide_locale call_tmp_chpl11 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t _autoCopy_tmp__chpl;
  chpl____wide_locale call_tmp_chpl12 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t tmp_chpl8;
  int64_t numIndices_chpl;
  chpl____wide_DefaultAssociativeDom_int64_t_T this_chpl8 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t coerce_tmp_chpl3;
  int64_t tmp_chpl9;
  int64_t call_tmp_chpl13;
  chpl_bool call_tmp_chpl14;
  range_int64_t_bounded_F ret_tmp_chpl3;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp__chpl3 = NULL;
  _array_DefaultAssociativeArr_locale_int64_t_T call_tmp_chpl15;
  DefaultAssociativeArr_locale_int64_t_T ret_chpl9 = NULL;
  chpl____wide_DefaultAssociativeArr_locale_int64_t_T tmp_chpl10 = {CHPL_LOCALEID_T_INIT, NULL};
  _array_DefaultAssociativeArr_locale_int64_t_T call_tmp_chpl16;
  chpl____wide_DefaultAssociativeArr_locale_int64_t_T ret_chpl10 = {CHPL_LOCALEID_T_INIT, NULL};
  _ic_these_DefaultAssociativeArr_locale_int64_t_T2 _ic__chpl = NULL;
  c_void_ptr cast_tmp_chpl;
  chpl____wide_DefaultAssociativeArr_locale_int64_t_T tmp_chpl11 = {CHPL_LOCALEID_T_INIT, NULL};
  _tuple_2_range_int64_t_bounded_F_DefaultAssociativeDom_int64_t_T tmp_chpl12;
  _ic_these_DefaultAssociativeArr_locale_int64_t_T2 _ic__chpl2 = NULL;
  c_void_ptr cast_tmp_chpl2;
  _tuple_2_range_int64_t_bounded_F_DefaultAssociativeDom_int64_t_T tmp_chpl13;
  chpl____wide__ref__wide_locale tmp_chpl14 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide_locale tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_locale coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t tmp_chpl16;
  c_void_ptr call_tmp_chpl17;
  c_void_ptr call_tmp_chpl18;
  range_int64_t_bounded_F tmpIter_chpl;
  range_int64_t_boundedLow_F ret_tmp_chpl4;
  _ref_range_int64_t_boundedLow_F ret_to_arg_ref_tmp__chpl4 = NULL;
  range_int64_t_bounded_F ret_tmp_chpl5;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp__chpl5 = NULL;
  chpl___EndCount_atomic_int64_int64_t _coforallCount_chpl = NULL;
  chpl___EndCount_atomic_int64_int64_t this_chpl9 = NULL;
  c_void_ptr cast_tmp_chpl3;
  atomic_int64 _init_class_tmp__chpl;
  atomic_int64 this_chpl10;
  atomic_int_least64_t ret_chpl11;
  atomic_int_least64_t type_tmp_chpl2;
  _ref_atomic_int_least64_t _ref_tmp__chpl3 = NULL;
  atomic_int64 ret_tmp_chpl6;
  _ref_atomic_int64 ret_to_arg_ref_tmp__chpl6 = NULL;
  c_void_ptr call_tmp_chpl19;
  chpl___EndCount_atomic_int64_int64_t wrap_call_tmp_chpl = NULL;
  int64_t numTasks_chpl;
  _ref_range_int64_t_bounded_F _ref_tmp__chpl4 = NULL;
  int64_t call_tmp_chpl20;
  chpl____wide__ref_range_int64_t_bounded_F tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F _ic__F0_this_chpl2;
  int64_t numChunks_captemp_chpl;
  int64_t i_chpl;
  int64_t ret_chpl12;
  int64_t end_chpl;
  int64_t ret_chpl13;
  chpl____wide_DefaultAssociativeDom_int64_t_T this_chpl11 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localscoforall_fn _args_forcoforall_fn_chpl = NULL;
  _ref__tuple_2_star__ref__array_DefaultAssociativeArr_locale_int64_t_T tmp_chpl18 = NULL;
  c_void_ptr _args_vforcoforall_fn_chpl;
  int64_t _taskListNodecoforall_fn_chpl;
  _ref_atomic_int64 _field_destructor_tmp__chpl = NULL;
  _ref_atomic_int_least64_t call_tmp_chpl21 = NULL;
  chpl_localeID_t call_tmp_chpl22;
  chpl___EndCount_atomic_int64_int64_t rvfDerefTmp_chpl = NULL;
  chpl_bool isdirect_chpl;
  chpl____wide__EndCount_atomic_int64_int64_t tmp_chpl19 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn104 _args_foron_fn_chpl = NULL;
  chpl____wide__EndCount_atomic_int64_int64_t tmp_chpl20 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  Replicated_chpl call_tmp_chpl23 = NULL;
  chpl____wide__ref__wide__array_DefaultAssociativeArr_locale_int64_t_T chpl_macro_tmp_5987;
  chpl____wide__ref__wide__array_DefaultAssociativeArr_locale_int64_t_T chpl_macro_tmp_5988;
  chpl____wide__ref_int64_t chpl_macro_tmp_5989;
  chpl____wide__ref_int64_t chpl_macro_tmp_5990;
  chpl____wide_DefaultAssociativeArr_locale_int64_t_T chpl_macro_tmp_5991;
  chpl____wide__ref_range_int64_t_bounded_F chpl_macro_tmp_5992;
  chpl__class_localscoforall_fn_object chpl_macro_tmp_5993;
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_5994;
  chpl__class_localson_fn104_object chpl_macro_tmp_5995;
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_5996;
  local__str_literal_2024_chpl /* "used during privatization" */ = _str_literal_2024 /* "used during privatization" */;
  local_dataParMinGranularity_chpl = dataParMinGranularity;
  local_dataParIgnoreRunningTasks_chpl = dataParIgnoreRunningTasks;
  local_c_sublocid_any_chpl = c_sublocid_any;
  local_dataParTasksPerLocale_chpl = dataParTasksPerLocale;
  chpl_macro_tmp_5987.locale = (&this_chpl6)->locale;
  chpl_macro_tmp_5987.addr = &(((&this_chpl6)->addr)->targetLocales_chpl);
  call_tmp_chpl = chpl_macro_tmp_5987;
  otherTargetLocales_chpl = chpl__initCopy9(call_tmp_chpl);
  ret_to_arg_ref_tmp__chpl = &ret_tmp_chpl;
  _ref_tmp__chpl = &otherTargetLocales_chpl;
  chpl_macro_tmp_5988.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5988.addr = _ref_tmp__chpl;
  tmp_chpl = chpl_macro_tmp_5988;
  _dom8(tmp_chpl, ret_to_arg_ref_tmp__chpl);
  i_x_chpl = &ret_tmp_chpl;
  coerce_tmp_chpl = (i_x_chpl)->_unowned;
  if (coerce_tmp_chpl) {
    ret_chpl2 = chpl__initCopy6(i_x_chpl);
    ret_chpl = ret_chpl2;
    goto _end_chpl__unalias_chpl;
  } else {
    ret_chpl = ret_tmp_chpl;
    goto _end_chpl__unalias_chpl;
  }
  _end_chpl__unalias_chpl:;
  privDom_chpl = ret_chpl;
  call_tmp_chpl2 = chpl__ensureDomainExpr4(&privDom_chpl);
  i_dom_chpl = call_tmp_chpl2;
  call_tmp_chpl3 = chpl__buildArrayRuntimeType22(i_dom_chpl);
  tmp_chpl2 = (&call_tmp_chpl3)->dom;
  _runtime_type_tmp__chpl = tmp_chpl2;
  ret_to_arg_ref_tmp__chpl2 = &retarg_tmp_chpl;
  chpl__convertRuntimeTypeToValue23(&_runtime_type_tmp__chpl, ret_to_arg_ref_tmp__chpl2);
  ret_tmp_chpl2 = retarg_tmp_chpl;
  type_tmp_chpl = ret_tmp_chpl2;
  _ref_tmp__chpl2 = &type_tmp_chpl;
  tmp_chpl3 = (&otherTargetLocales_chpl)->_instance;
  ret_chpl3 = (&tmp_chpl3)->addr;
  call_tmp_chpl4 = (((object)(ret_chpl3)) == nil);
  if (call_tmp_chpl4) {
    goto _end__ASSIGN__chpl;
  }
  tmp_chpl4 = (&type_tmp_chpl)->_instance;
  ret_chpl4 = (&tmp_chpl4)->addr;
  tmp_chpl5 = (&otherTargetLocales_chpl)->_instance;
  ret_chpl5 = (&tmp_chpl5)->addr;
  call_tmp_chpl5 = (((object)(ret_chpl4)) == ((object)(ret_chpl5)));
  if (call_tmp_chpl5) {
    goto _end__ASSIGN__chpl;
  }
  tmp_chpl6 = &otherTargetLocales_chpl;
  call_tmp_chpl6 = size7(_ref_tmp__chpl2);
  call_tmp_chpl7 = (call_tmp_chpl6 == INT64(0));
  if (call_tmp_chpl7) {
    call_tmp_chpl8 = size7(tmp_chpl6);
    ret_chpl6 = (call_tmp_chpl8 == INT64(0));
    goto _end__if_fn713_chpl;
  } else {
    ret_chpl6 = UINT8(false);
    goto _end__if_fn713_chpl;
  }
  _end__if_fn713_chpl:;
  if (ret_chpl6) {
    goto _end__ASSIGN__chpl;
  }
  *(chpl__iterLF + INT64(0)) = type_tmp_chpl;
  *(chpl__iterLF + INT64(1)) = otherTargetLocales_chpl;
  call_tmp_chpl9 = *(chpl__iterLF + INT64(0));
  tmp_chpl7 = (&call_tmp_chpl9)->_instance;
  ret_chpl7 = (&tmp_chpl7)->addr;
  this_chpl7 = ret_chpl7;
  coerce_tmp_chpl2 = (this_chpl7)->dom;
  _ic__F0_this_chpl = coerce_tmp_chpl2;
  call_tmp_chpl10 = (local_dataParTasksPerLocale_chpl == INT64(0));
  if (call_tmp_chpl10) {
    _autoCopy_tmp__chpl = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any_chpl);
    call_tmp_chpl12 = chpl_localeID_to_locale(&_autoCopy_tmp__chpl);
    call_tmp_chpl11 = call_tmp_chpl12;
    chpl_macro_tmp_5989.locale = (&call_tmp_chpl11)->locale;
    chpl_macro_tmp_5989.addr = &(((&call_tmp_chpl11)->addr)->maxTaskPar);
    chpl_gen_comm_get(((void*)(&tmp_chpl8)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5989).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5989).addr, sizeof(int64_t), -1, COMMID(20), INT64(160), INT64(58));
    ret_chpl8 = tmp_chpl8;
    goto _end__if_fn137_chpl;
  } else {
    ret_chpl8 = local_dataParTasksPerLocale_chpl;
    goto _end__if_fn137_chpl;
  }
  _end__if_fn137_chpl:;
  this_chpl8 = coerce_tmp_chpl2;
  chpl_macro_tmp_5990.locale = (&this_chpl8)->locale;
  chpl_macro_tmp_5990.addr = &(((&this_chpl8)->addr)->tableSize);
  chpl_gen_comm_get(((void*)(&tmp_chpl9)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5990).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5990).addr, sizeof(int64_t), -1, COMMID(21), INT64(160), INT64(58));
  coerce_tmp_chpl3 = tmp_chpl9;
  numIndices_chpl = coerce_tmp_chpl3;
  call_tmp_chpl13 = _computeNumChunks_chpl(ret_chpl8, local_dataParIgnoreRunningTasks_chpl, local_dataParMinGranularity_chpl, coerce_tmp_chpl3);
  call_tmp_chpl14 = (call_tmp_chpl13 == INT64(1));
  if (call_tmp_chpl14) {
    ret_to_arg_ref_tmp__chpl3 = &ret_tmp_chpl3;
    chpl_build_bounded_range(INT64(0), ((int64_t)((coerce_tmp_chpl3 - INT64(1)))), ret_to_arg_ref_tmp__chpl3);
    call_tmp_chpl15 = *(chpl__iterLF + INT64(0));
    tmp_chpl10 = (&call_tmp_chpl15)->_instance;
    ret_chpl9 = (&tmp_chpl10)->addr;
    call_tmp_chpl16 = *(chpl__iterLF + INT64(1));
    ret_chpl10 = (&call_tmp_chpl16)->_instance;
    cast_tmp_chpl = chpl_here_alloc(sizeof(chpl__ic_these_DefaultAssociativeArr_locale_int64_t_T2_object), INT16(131));
    _ic__chpl = ((_ic_these_DefaultAssociativeArr_locale_int64_t_T2)(cast_tmp_chpl));
    ((object)(_ic__chpl))->chpl__cid = chpl__cid__ic_these_DefaultAssociativeArr_locale_int64_t_T2;
    (_ic__chpl)->more = INT64(1);
    chpl_macro_tmp_5991.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5991.addr = ret_chpl9;
    tmp_chpl11 = chpl_macro_tmp_5991;
    (_ic__chpl)->F0_this = tmp_chpl11;
    (&tmp_chpl12)->x1 = ret_tmp_chpl3;
    (&tmp_chpl12)->x2 = coerce_tmp_chpl2;
    (_ic__chpl)->F1_followThis = tmp_chpl12;
    cast_tmp_chpl2 = chpl_here_alloc(sizeof(chpl__ic_these_DefaultAssociativeArr_locale_int64_t_T2_object), INT16(131));
    _ic__chpl2 = ((_ic_these_DefaultAssociativeArr_locale_int64_t_T2)(cast_tmp_chpl2));
    ((object)(_ic__chpl2))->chpl__cid = chpl__cid__ic_these_DefaultAssociativeArr_locale_int64_t_T2;
    (_ic__chpl2)->more = INT64(1);
    (_ic__chpl2)->F0_this = ret_chpl10;
    (&tmp_chpl13)->x1 = ret_tmp_chpl3;
    (&tmp_chpl13)->x2 = coerce_tmp_chpl2;
    (_ic__chpl2)->F1_followThis = tmp_chpl13;
    advance8(_ic__chpl);
    advance8(_ic__chpl2);
    for (; (tmp_chpl16 = (_ic__chpl)->more,tmp_chpl16); ) {
      tmp_chpl14 = (_ic__chpl2)->value;
      tmp_chpl15 = (_ic__chpl)->value;
      chpl_gen_comm_get(((void*)(&coerce_tmp_chpl4)), chpl_nodeFromLocaleID(&((tmp_chpl14).locale), INT64(0), INT32(0)), (tmp_chpl14).addr, sizeof(chpl____wide_locale), -1, COMMID(22), INT64(160), INT64(58));
      chpl_gen_comm_put(((void*)(&coerce_tmp_chpl4)), chpl_nodeFromLocaleID(&((tmp_chpl15).locale), INT64(0), INT32(0)), (tmp_chpl15).addr, sizeof(chpl____wide_locale), -1, COMMID(23), INT64(160), INT64(58));
      advance8(_ic__chpl);
      advance8(_ic__chpl2);
    }
    call_tmp_chpl17 = ((void*)(_ic__chpl));
    chpl_here_free(call_tmp_chpl17);
    call_tmp_chpl18 = ((void*)(_ic__chpl2));
    chpl_here_free(call_tmp_chpl18);
  } else {
    ret_to_arg_ref_tmp__chpl4 = &ret_tmp_chpl4;
    chpl_build_low_bounded_range(INT64(0), ret_to_arg_ref_tmp__chpl4);
    ret_to_arg_ref_tmp__chpl5 = &ret_tmp_chpl5;
    chpl___POUND_(&ret_tmp_chpl4, call_tmp_chpl13, ret_to_arg_ref_tmp__chpl5);
    tmpIter_chpl = ret_tmp_chpl5;
    cast_tmp_chpl3 = chpl_here_alloc(sizeof(chpl_chpl___EndCount_atomic_int64_int64_t_object), INT16(2));
    this_chpl9 = ((chpl___EndCount_atomic_int64_int64_t)(cast_tmp_chpl3));
    ((object)(this_chpl9))->chpl__cid = chpl__cid_chpl___EndCount_atomic_int64_int64_t;
    (this_chpl9)->i = _init_class_tmp__chpl;
    (this_chpl9)->taskCnt = INT64(0);
    (this_chpl9)->taskList = NULL;
    ret_chpl11 = type_tmp_chpl2;
    _ref_tmp__chpl3 = &ret_chpl11;
    atomic_init_int_least64_t(_ref_tmp__chpl3, INT64(0));
    (&this_chpl10)->_v = ret_chpl11;
    ret_to_arg_ref_tmp__chpl6 = &ret_tmp_chpl6;
    _construct_atomic_int64(ret_chpl11, &this_chpl10, ret_to_arg_ref_tmp__chpl6);
    (this_chpl9)->i = ret_tmp_chpl6;
    (this_chpl9)->taskCnt = INT64(0);
    call_tmp_chpl19 = ((c_void_ptr)(nil));
    (this_chpl9)->taskList = call_tmp_chpl19;
    wrap_call_tmp_chpl = _construct__EndCount(&ret_tmp_chpl6, INT64(0), call_tmp_chpl19, this_chpl9);
    _coforallCount_chpl = wrap_call_tmp_chpl;
    _ref_tmp__chpl4 = &tmpIter_chpl;
    chpl_macro_tmp_5992.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5992.addr = _ref_tmp__chpl4;
    tmp_chpl17 = chpl_macro_tmp_5992;
    call_tmp_chpl20 = length2(tmp_chpl17);
    numTasks_chpl = call_tmp_chpl20;
    _upEndCount3(_coforallCount_chpl, call_tmp_chpl20);
    _ic__F0_this_chpl2 = tmpIter_chpl;
    numChunks_captemp_chpl = call_tmp_chpl13;
    ret_chpl12 = (&_ic__F0_this_chpl2)->_low;
    ret_chpl13 = (&_ic__F0_this_chpl2)->_high;
    end_chpl = ret_chpl13;
    for (i_chpl = ret_chpl12; ((i_chpl <= end_chpl)); i_chpl += INT64(1)) {
      this_chpl11 = _ic__F0_this_chpl;
      _args_forcoforall_fn_chpl = ((_class_localscoforall_fn)(&chpl_macro_tmp_5993));
      (_args_forcoforall_fn_chpl)->_0_numChunks_captemp = numChunks_captemp_chpl;
      (_args_forcoforall_fn_chpl)->_1_numIndices = numIndices_chpl;
      (_args_forcoforall_fn_chpl)->_2__yieldedIndex = i_chpl;
      (_args_forcoforall_fn_chpl)->_3_this = this_chpl11;
      (_args_forcoforall_fn_chpl)->_4__coforallCount = _coforallCount_chpl;
      tmp_chpl18 = &chpl__iterLF;
      (_args_forcoforall_fn_chpl)->_5_tmp = tmp_chpl18;
      _args_vforcoforall_fn_chpl = ((void*)(_args_forcoforall_fn_chpl));
      _taskListNodecoforall_fn_chpl = chpl_nodeID;
      /*** wrapcoforall_fn13 ***/ chpl_taskListAddCoStmt(INT32(-2), INT64(142), ((chpl_task_bundle_p)(_args_vforcoforall_fn_chpl)), sizeof(chpl__class_localscoforall_fn_object), &((_coforallCount_chpl)->taskList), _taskListNodecoforall_fn_chpl, INT64(3493), INT32(28));
    }
    _waitEndCount3(_coforallCount_chpl, numTasks_chpl);
    _field_destructor_tmp__chpl = &((_coforallCount_chpl)->i);
    call_tmp_chpl21 = &((_field_destructor_tmp__chpl)->_v);
    atomic_destroy_int_least64_t(call_tmp_chpl21);
    call_tmp_chpl22 = chpl_gen_getLocaleID();
    rvfDerefTmp_chpl = _coforallCount_chpl;
    isdirect_chpl = chpl_doDirectExecuteOn(&call_tmp_chpl22);
    if (isdirect_chpl) {
      chpl_macro_tmp_5994.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_5994.addr = rvfDerefTmp_chpl;
      tmp_chpl19 = chpl_macro_tmp_5994;
      on_fn123(tmp_chpl19);
    } else {
      _args_foron_fn_chpl = ((_class_localson_fn104)(&chpl_macro_tmp_5995));
      (_args_foron_fn_chpl)->_0_rvfDerefTmp = call_tmp_chpl22;
      chpl_macro_tmp_5996.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_5996.addr = rvfDerefTmp_chpl;
      tmp_chpl20 = chpl_macro_tmp_5996;
      (_args_foron_fn_chpl)->_1_rvfDerefTmp = tmp_chpl20;
      _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
      /*** wrapon_fn131 ***/ chpl_executeOn(&call_tmp_chpl22, INT32(196), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), sizeof(chpl__class_localson_fn104_object), INT64(1227), INT32(2));
    }
  }
  _end__ASSIGN__chpl:;
  privTargetLocales_chpl = type_tmp_chpl;
  call_tmp_chpl23 = Replicated_chpl2(&type_tmp_chpl, &local__str_literal_2024_chpl /* "used during privatization" */);
  chpl__autoDestroy26(&privTargetLocales_chpl);
  chpl__autoDestroy8(&privDom_chpl);
  chpl__autoDestroy26(&otherTargetLocales_chpl);
  return call_tmp_chpl23;
}

/* ReplicatedDist.chpl:172 */
static ReplicatedDom_1_int64_t_F_chpl _construct_ReplicatedDom_chpl(_ref_list_BaseArr _arrs_chpl,
                                                                    int64_t _arrs_containing_dom_chpl,
                                                                    _ref_atomicbool _arrsLock_chpl,
                                                                    chpl_bool _free_when_no_arrs_chpl,
                                                                    int64_t pid_chpl,
                                                                    Replicated_chpl dist_chpl,
                                                                    _ref__domain_DefaultRectangularDom_1_int64_t_F domRep_chpl,
                                                                    _ref__array_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T localDoms_chpl,
                                                                    ReplicatedDom_1_int64_t_F_chpl meme_chpl) {
  ReplicatedDom_1_int64_t_F_chpl this_chpl6 = NULL;
  chpl____wide_Replicated tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Replicated chpl_macro_tmp_5997;
  this_chpl6 = meme_chpl;
  _construct_BaseRectangularDom(_arrs_chpl, _arrs_containing_dom_chpl, _arrsLock_chpl, _free_when_no_arrs_chpl, pid_chpl, &((this_chpl6)->super_chpl));
  chpl_macro_tmp_5997.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5997.addr = dist_chpl;
  tmp_chpl = chpl_macro_tmp_5997;
  (this_chpl6)->dist_chpl = tmp_chpl;
  (this_chpl6)->domRep_chpl = *(domRep_chpl);
  (this_chpl6)->localDoms_chpl = *(localDoms_chpl);
  return this_chpl6;
}

/* ReplicatedDist.chpl:172 */
static void chpl__auto_destroy_ReplicatedDom(chpl____wide_ReplicatedDom_1_int64_t_F this_chpl6) {
  _array_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T _field_destructor_tmp__chpl;
  _array_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T tmp_chpl;
  _domain_DefaultRectangularDom_1_int64_t_F _field_destructor_tmp__chpl2;
  _domain_DefaultRectangularDom_1_int64_t_F tmp_chpl2;
  chpl____wide_BaseRectangularDom _parent_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide__array_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T chpl_macro_tmp_5998;
  chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_5999;
  chpl____wide_BaseRectangularDom chpl_macro_tmp_6000;
  chpl_macro_tmp_5998.locale = (&this_chpl6)->locale;
  chpl_macro_tmp_5998.addr = &(((&this_chpl6)->addr)->localDoms_chpl);
  chpl_gen_comm_get(((void*)(&tmp_chpl)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5998).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5998).addr, sizeof(_array_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T), -1, COMMID(24), INT64(189), INT64(58));
  _field_destructor_tmp__chpl = tmp_chpl;
  chpl__autoDestroy24(&_field_destructor_tmp__chpl);
  chpl_macro_tmp_5999.locale = (&this_chpl6)->locale;
  chpl_macro_tmp_5999.addr = &(((&this_chpl6)->addr)->domRep_chpl);
  chpl_gen_comm_get(((void*)(&tmp_chpl2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5999).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5999).addr, sizeof(_domain_DefaultRectangularDom_1_int64_t_F), -1, COMMID(25), INT64(183), INT64(58));
  _field_destructor_tmp__chpl2 = tmp_chpl2;
  chpl__autoDestroy5(&_field_destructor_tmp__chpl2);
  chpl_macro_tmp_6000.locale = (&this_chpl6)->locale;
  chpl_macro_tmp_6000.addr = ((BaseRectangularDom)((&this_chpl6)->addr));
  _parent_destructor_tmp__chpl = chpl_macro_tmp_6000;
  deinit37(_parent_destructor_tmp__chpl);
  return;
}

/* ReplicatedDist.chpl:209 */
static LocReplicatedDom_1_int64_t_F_chpl _construct_LocReplicatedDom_chpl(_ref__domain_DefaultRectangularDom_1_int64_t_F domLocalRep_chpl,
                                                                          LocReplicatedDom_1_int64_t_F_chpl meme_chpl) {
  LocReplicatedDom_1_int64_t_F_chpl this_chpl6 = NULL;
  object tmp_chpl = NULL;
  this_chpl6 = meme_chpl;
  tmp_chpl = &((this_chpl6)->super_chpl);
  _construct_object(tmp_chpl);
  (this_chpl6)->domLocalRep_chpl = *(domLocalRep_chpl);
  return this_chpl6;
}

/* ReplicatedDist.chpl:209 */
static void chpl__auto_destroy_LocReplicatedDom(chpl____wide_LocReplicatedDom_1_int64_t_F this_chpl6) {
  _domain_DefaultRectangularDom_1_int64_t_F _field_destructor_tmp__chpl;
  _domain_DefaultRectangularDom_1_int64_t_F tmp_chpl;
  chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_6001;
  chpl_macro_tmp_6001.locale = (&this_chpl6)->locale;
  chpl_macro_tmp_6001.addr = &(((&this_chpl6)->addr)->domLocalRep_chpl);
  chpl_gen_comm_get(((void*)(&tmp_chpl)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_6001).locale), INT64(0), INT32(0)), (chpl_macro_tmp_6001).addr, sizeof(_domain_DefaultRectangularDom_1_int64_t_F), -1, COMMID(26), INT64(216), INT64(58));
  _field_destructor_tmp__chpl = tmp_chpl;
  chpl__autoDestroy5(&_field_destructor_tmp__chpl);
  return;
}

/* ReplicatedDist.chpl:230 */
static void redirectee_chpl(ReplicatedDom_1_int64_t_F_chpl this_chpl6,
                            _ref__domain_DefaultRectangularDom_1_int64_t_F _retArg_chpl) {
  _domain_DefaultRectangularDom_1_int64_t_F ret_chpl;
  _domain_DefaultRectangularDom_1_int64_t_F tmp_chpl;
  chpl__buildDomainRuntimeType4(&defaultDist);
  tmp_chpl = (this_chpl6)->domRep_chpl;
  ret_chpl = tmp_chpl;
  ret_chpl = chpl__autoCopy(&ret_chpl);
  *(_retArg_chpl) = ret_chpl;
  return;
}

/* ReplicatedDist.chpl:234 */
static chpl____wide_Replicated dsiMyDist_chpl2(chpl____wide_ReplicatedDom_1_int64_t_F this_chpl6) {
  chpl____wide_Replicated ret_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide_Replicated chpl_macro_tmp_6002;
  chpl_macro_tmp_6002.locale = (&this_chpl6)->locale;
  chpl_macro_tmp_6002.addr = &(((&this_chpl6)->addr)->dist_chpl);
  chpl_gen_comm_get(((void*)(&ret_chpl)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_6002).locale), INT64(0), INT32(0)), (chpl_macro_tmp_6002).addr, sizeof(chpl____wide_Replicated), -1, COMMID(27), INT64(234), INT64(58));
  return ret_chpl;
}

/* ReplicatedDist.chpl:241 */
static void dsiGetPrivatizeData_chpl6(ReplicatedDom_1_int64_t_F_chpl this_chpl6,
                                      _ref__tuple_3_int64_t__domain_DefaultRectangularDom_1_int64_t_F__array_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T _retArg_chpl) {
  Replicated_chpl coerce_tmp_chpl = NULL;
  chpl____wide_Replicated tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  BaseDist coerce_tmp_chpl2 = NULL;
  _ref__wide__array_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T call_tmp_chpl = NULL;
  int64_t coerce_tmp_chpl3;
  _ref__domain_DefaultRectangularDom_1_int64_t_F i__e2_x_chpl = NULL;
  _ref__array_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T i__e3_x_chpl = NULL;
  _domain_DefaultRectangularDom_1_int64_t_F this_x2_chpl;
  _array_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T this_x3_chpl;
  _domain_DefaultRectangularDom_1_int64_t_F elt_x2_chpl;
  _array_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T elt_x3_chpl;
  tmp_chpl = (this_chpl6)->dist_chpl;
  coerce_tmp_chpl = (&tmp_chpl)->addr;
  coerce_tmp_chpl2 = ((BaseDist)(coerce_tmp_chpl));
  call_tmp_chpl = &((this_chpl6)->localDoms_chpl);
  coerce_tmp_chpl3 = (coerce_tmp_chpl2)->pid;
  i__e2_x_chpl = &((this_chpl6)->domRep_chpl);
  i__e3_x_chpl = call_tmp_chpl;
  this_x2_chpl = *(i__e2_x_chpl);
  this_x3_chpl = *(i__e3_x_chpl);
  elt_x2_chpl = chpl__autoCopy(&this_x2_chpl);
  elt_x3_chpl = chpl__autoCopy5(&this_x3_chpl);
  (_retArg_chpl)->x1 = coerce_tmp_chpl3;
  (_retArg_chpl)->x2 = elt_x2_chpl;
  (_retArg_chpl)->x3 = elt_x3_chpl;
  return;
}

/* ReplicatedDist.chpl:249 */
static ReplicatedDom_1_int64_t_F_chpl dsiPrivatize_chpl6(chpl____wide_ReplicatedDom_1_int64_t_F this_chpl6,
                                                         _ref__tuple_3_int64_t__ref__domain_DefaultRectangularDom_1_int64_t_F__ref__array_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T privatizeData_chpl) {
  int64_t local_dataParMinGranularity_chpl;
  chpl_bool local_dataParIgnoreRunningTasks_chpl;
  int32_t local_c_sublocid_any_chpl;
  int64_t local_dataParTasksPerLocale_chpl;
  Replicated_chpl call_tmp_chpl = NULL;
  int64_t coerce_tmp_chpl;
  _domain_DefaultRectangularDom_1_int64_t_F call_tmp_chpl2;
  _domain_DefaultRectangularDom_1_int64_t_F tmp_chpl;
  _array_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T call_tmp_chpl3;
  _array_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T tmp_chpl2;
  ReplicatedDom_1_int64_t_F_chpl this_chpl7 = NULL;
  c_void_ptr cast_tmp_chpl;
  chpl____wide_Replicated tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  _domain_DefaultRectangularDom_1_int64_t_F _init_class_tmp__chpl;
  chpl____wide_DefaultRectangularDom_1_int64_t_F tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  _array_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T _init_class_tmp__chpl2;
  chpl____wide_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  list_BaseArr_chpl default_arg_arrs_chpl;
  list_BaseArr_chpl this_chpl8;
  chpl____wide_listNode_BaseArr tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseArr tmp_chpl7 = {CHPL_LOCALEID_T_INIT, NULL};
  listNode_BaseArr_chpl call_tmp_chpl4 = NULL;
  chpl____wide_listNode_BaseArr tmp_chpl8 = {CHPL_LOCALEID_T_INIT, NULL};
  listNode_BaseArr_chpl call_tmp_chpl5 = NULL;
  chpl____wide_listNode_BaseArr tmp_chpl9 = {CHPL_LOCALEID_T_INIT, NULL};
  list_BaseArr_chpl ret_tmp_chpl;
  _ref_list_BaseArr ret_to_arg_ref_tmp__chpl = NULL;
  atomicbool default_arg_arrsLock_chpl;
  atomicbool this_chpl9;
  atomic_bool ret_chpl;
  atomic_bool type_tmp_chpl;
  _ref_atomic_bool _ref_tmp__chpl = NULL;
  atomicbool ret_tmp_chpl2;
  _ref_atomicbool ret_to_arg_ref_tmp__chpl2 = NULL;
  int64_t default_argpid_chpl;
  Replicated_chpl wrap_arg_chpl = NULL;
  chpl____wide_Replicated tmp_chpl10 = {CHPL_LOCALEID_T_INIT, NULL};
  _domain_DefaultRectangularDom_1_int64_t_F wrap_type_arg_chpl;
  chpl___RuntimeTypeInfo4 call_tmp_chpl6;
  _distribution_DefaultDist _runtime_type_tmp__chpl;
  _distribution_DefaultDist tmp_chpl11;
  _domain_DefaultRectangularDom_1_int64_t_F ret_tmp_chpl3;
  _ref__domain_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp__chpl3 = NULL;
  _ref__domain_DefaultRectangularDom_1_int64_t_F _ref_tmp__chpl2 = NULL;
  chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_F tmp_chpl12 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_F tmp_chpl13 = {CHPL_LOCALEID_T_INIT, NULL};
  _domain_DefaultRectangularDom_1_int64_t_F wrap_arg_chpl2;
  _array_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T wrap_type_arg_chpl2;
  _ref__domain_DefaultAssociativeDom_int64_t_T call_tmp_chpl7 = NULL;
  chpl___RuntimeTypeInfo25 call_tmp_chpl8;
  _ref__domain_DefaultAssociativeDom_int64_t_T i_dom_chpl = NULL;
  _domain_DefaultAssociativeDom_int64_t_T _runtime_type_tmp__chpl2;
  _domain_DefaultAssociativeDom_int64_t_T tmp_chpl14;
  _array_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T ret_tmp_chpl4;
  _ref__array_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T ret_to_arg_ref_tmp__chpl4 = NULL;
  _array_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T retarg_tmp_chpl;
  _ref__array_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T _ref_tmp__chpl3 = NULL;
  chpl____wide_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T ret_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp_chpl9 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp_chpl10;
  chpl____wide_object tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T ret_chpl3 = NULL;
  chpl____wide_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T ret_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  object call_tmp_chpl11 = NULL;
  chpl____wide_object call_tmp_chpl12 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp_chpl13;
  chpl____wide_object tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__wide__array_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T tmp_chpl18 = NULL;
  chpl_bool ret_chpl5;
  int64_t call_tmp_chpl14;
  chpl_bool call_tmp_chpl15;
  int64_t call_tmp_chpl16;
  _tuple_2_star__ref__array_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T chpl__iterLF;
  _array_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T call_tmp_chpl17;
  DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T ret_chpl6 = NULL;
  chpl____wide_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T tmp_chpl19 = {CHPL_LOCALEID_T_INIT, NULL};
  DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T this_chpl10 = NULL;
  chpl____wide_DefaultAssociativeDom_int64_t_T coerce_tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultAssociativeDom_int64_t_T _ic__F0_this_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t ret_chpl7;
  chpl_bool call_tmp_chpl18;
  chpl____wide_locale call_tmp_chpl19 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t _autoCopy_tmp__chpl;
  chpl____wide_locale call_tmp_chpl20 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t tmp_chpl20;
  int64_t numIndices_chpl;
  chpl____wide_DefaultAssociativeDom_int64_t_T this_chpl11 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t coerce_tmp_chpl3;
  int64_t tmp_chpl21;
  int64_t call_tmp_chpl21;
  chpl_bool call_tmp_chpl22;
  range_int64_t_bounded_F ret_tmp_chpl5;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp__chpl5 = NULL;
  _array_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T call_tmp_chpl23;
  DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T ret_chpl8 = NULL;
  chpl____wide_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T tmp_chpl22 = {CHPL_LOCALEID_T_INIT, NULL};
  _array_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T call_tmp_chpl24;
  chpl____wide_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T ret_chpl9 = {CHPL_LOCALEID_T_INIT, NULL};
  _ic_these_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T2 _ic__chpl = NULL;
  c_void_ptr cast_tmp_chpl2;
  chpl____wide_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T tmp_chpl23 = {CHPL_LOCALEID_T_INIT, NULL};
  _tuple_2_range_int64_t_bounded_F_DefaultAssociativeDom_int64_t_T tmp_chpl24;
  _ic_these_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T2 _ic__chpl2 = NULL;
  c_void_ptr cast_tmp_chpl3;
  _tuple_2_range_int64_t_bounded_F_DefaultAssociativeDom_int64_t_T tmp_chpl25;
  chpl____wide__ref__wide_LocReplicatedDom_1_int64_t_F tmp_chpl26 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide_LocReplicatedDom_1_int64_t_F tmp_chpl27 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_LocReplicatedDom_1_int64_t_F coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t tmp_chpl28;
  c_void_ptr call_tmp_chpl25;
  c_void_ptr call_tmp_chpl26;
  range_int64_t_bounded_F tmpIter_chpl;
  range_int64_t_boundedLow_F ret_tmp_chpl6;
  _ref_range_int64_t_boundedLow_F ret_to_arg_ref_tmp__chpl6 = NULL;
  range_int64_t_bounded_F ret_tmp_chpl7;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp__chpl7 = NULL;
  chpl___EndCount_atomic_int64_int64_t _coforallCount_chpl = NULL;
  chpl___EndCount_atomic_int64_int64_t this_chpl12 = NULL;
  c_void_ptr cast_tmp_chpl4;
  atomic_int64 _init_class_tmp__chpl3;
  atomic_int64 this_chpl13;
  atomic_int_least64_t ret_chpl10;
  atomic_int_least64_t type_tmp_chpl2;
  _ref_atomic_int_least64_t _ref_tmp__chpl4 = NULL;
  atomic_int64 ret_tmp_chpl8;
  _ref_atomic_int64 ret_to_arg_ref_tmp__chpl8 = NULL;
  c_void_ptr call_tmp_chpl27;
  chpl___EndCount_atomic_int64_int64_t wrap_call_tmp_chpl = NULL;
  int64_t numTasks_chpl;
  _ref_range_int64_t_bounded_F _ref_tmp__chpl5 = NULL;
  int64_t call_tmp_chpl28;
  chpl____wide__ref_range_int64_t_bounded_F tmp_chpl29 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F _ic__F0_this_chpl2;
  int64_t numChunks_captemp_chpl;
  int64_t i_chpl;
  int64_t ret_chpl11;
  int64_t end_chpl;
  int64_t ret_chpl12;
  chpl____wide_DefaultAssociativeDom_int64_t_T this_chpl14 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localscoforall_fn9 _args_forcoforall_fn_chpl = NULL;
  _ref__tuple_2_star__ref__array_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T tmp_chpl30 = NULL;
  c_void_ptr _args_vforcoforall_fn_chpl;
  int64_t _taskListNodecoforall_fn_chpl;
  _ref_atomic_int64 _field_destructor_tmp__chpl = NULL;
  _ref_atomic_int_least64_t call_tmp_chpl29 = NULL;
  chpl_localeID_t call_tmp_chpl30;
  chpl___EndCount_atomic_int64_int64_t rvfDerefTmp_chpl = NULL;
  chpl_bool isdirect_chpl;
  chpl____wide__EndCount_atomic_int64_int64_t tmp_chpl31 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn104 _args_foron_fn_chpl = NULL;
  chpl____wide__EndCount_atomic_int64_int64_t tmp_chpl32 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  _array_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T wrap_arg_chpl3;
  ReplicatedDom_1_int64_t_F_chpl wrap_call_tmp_chpl2 = NULL;
  chpl____wide__nilType chpl_macro_tmp_6003;
  chpl____wide_Replicated chpl_macro_tmp_6004;
  chpl____wide__nilType chpl_macro_tmp_6005;
  chpl____wide_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_6006;
  chpl____wide__nilType chpl_macro_tmp_6007;
  chpl____wide_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T chpl_macro_tmp_6008;
  chpl____wide__nilType chpl_macro_tmp_6009;
  chpl____wide_listNode_BaseArr chpl_macro_tmp_6010;
  chpl____wide__nilType chpl_macro_tmp_6011;
  chpl____wide_listNode_BaseArr chpl_macro_tmp_6012;
  chpl____wide_listNode_BaseArr chpl_macro_tmp_6013;
  chpl____wide_listNode_BaseArr chpl_macro_tmp_6014;
  chpl____wide_Replicated chpl_macro_tmp_6015;
  chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_6016;
  chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_6017;
  chpl____wide_object chpl_macro_tmp_6018;
  chpl____wide__nilType chpl_macro_tmp_6019;
  chpl____wide_object chpl_macro_tmp_6020;
  chpl____wide_object chpl_macro_tmp_6021;
  chpl____wide_object chpl_macro_tmp_6022;
  chpl____wide__ref_int64_t chpl_macro_tmp_6023;
  chpl____wide__ref_int64_t chpl_macro_tmp_6024;
  chpl____wide_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T chpl_macro_tmp_6025;
  chpl____wide__ref_range_int64_t_bounded_F chpl_macro_tmp_6026;
  chpl__class_localscoforall_fn9_object chpl_macro_tmp_6027;
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_6028;
  chpl__class_localson_fn104_object chpl_macro_tmp_6029;
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_6030;
  local_dataParMinGranularity_chpl = dataParMinGranularity;
  local_dataParIgnoreRunningTasks_chpl = dataParIgnoreRunningTasks;
  local_c_sublocid_any_chpl = c_sublocid_any;
  local_dataParTasksPerLocale_chpl = dataParTasksPerLocale;
  coerce_tmp_chpl = (privatizeData_chpl)->x1;
  call_tmp_chpl = chpl_getPrivatizedCopy2(coerce_tmp_chpl);
  tmp_chpl = (privatizeData_chpl)->x2;
  call_tmp_chpl2 = tmp_chpl;
  tmp_chpl2 = (privatizeData_chpl)->x3;
  call_tmp_chpl3 = tmp_chpl2;
  cast_tmp_chpl = chpl_here_alloc(sizeof(chpl_ReplicatedDom_1_int64_t_F_chpl_object), INT16(138));
  this_chpl7 = ((ReplicatedDom_1_int64_t_F_chpl)(cast_tmp_chpl));
  ((object)(this_chpl7))->chpl__cid = chpl__cid_ReplicatedDom_1_int64_t_F_chpl;
  chpl_macro_tmp_6003.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_6003.addr = nil;
  chpl_macro_tmp_6004.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_6004.addr = NULL;
  tmp_chpl3 = chpl_macro_tmp_6004;
  (this_chpl7)->dist_chpl = tmp_chpl3;
  (&_init_class_tmp__chpl)->_pid = INT64(0);
  chpl_macro_tmp_6005.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_6005.addr = nil;
  chpl_macro_tmp_6006.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_6006.addr = NULL;
  tmp_chpl4 = chpl_macro_tmp_6006;
  (&_init_class_tmp__chpl)->_instance = tmp_chpl4;
  (&_init_class_tmp__chpl)->_unowned = UINT8(false);
  (this_chpl7)->domRep_chpl = _init_class_tmp__chpl;
  (&_init_class_tmp__chpl2)->_pid = INT64(0);
  chpl_macro_tmp_6007.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_6007.addr = nil;
  chpl_macro_tmp_6008.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_6008.addr = NULL;
  tmp_chpl5 = chpl_macro_tmp_6008;
  (&_init_class_tmp__chpl2)->_instance = tmp_chpl5;
  (&_init_class_tmp__chpl2)->_unowned = UINT8(false);
  (this_chpl7)->localDoms_chpl = _init_class_tmp__chpl2;
  chpl_macro_tmp_6009.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_6009.addr = nil;
  chpl_macro_tmp_6010.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_6010.addr = NULL;
  tmp_chpl6 = chpl_macro_tmp_6010;
  (&this_chpl8)->first_chpl = tmp_chpl6;
  chpl_macro_tmp_6011.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_6011.addr = nil;
  chpl_macro_tmp_6012.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_6012.addr = NULL;
  tmp_chpl7 = chpl_macro_tmp_6012;
  (&this_chpl8)->last_chpl = tmp_chpl7;
  (&this_chpl8)->length_chpl = INT64(0);
  call_tmp_chpl4 = ((listNode_BaseArr_chpl)(nil));
  chpl_macro_tmp_6013.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_6013.addr = call_tmp_chpl4;
  tmp_chpl8 = chpl_macro_tmp_6013;
  (&this_chpl8)->first_chpl = tmp_chpl8;
  call_tmp_chpl5 = ((listNode_BaseArr_chpl)(nil));
  chpl_macro_tmp_6014.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_6014.addr = call_tmp_chpl5;
  tmp_chpl9 = chpl_macro_tmp_6014;
  (&this_chpl8)->last_chpl = tmp_chpl9;
  (&this_chpl8)->length_chpl = INT64(0);
  ret_to_arg_ref_tmp__chpl = &ret_tmp_chpl;
  _construct_list_chpl2(call_tmp_chpl4, call_tmp_chpl5, INT64(0), &this_chpl8, ret_to_arg_ref_tmp__chpl);
  default_arg_arrs_chpl = ret_tmp_chpl;
  ret_chpl = type_tmp_chpl;
  _ref_tmp__chpl = &ret_chpl;
  atomic_init_bool(_ref_tmp__chpl, UINT8(false));
  (&this_chpl9)->_v = ret_chpl;
  ret_to_arg_ref_tmp__chpl2 = &ret_tmp_chpl2;
  _construct_atomicbool(ret_chpl, &this_chpl9, ret_to_arg_ref_tmp__chpl2);
  default_arg_arrsLock_chpl = ret_tmp_chpl2;
  default_argpid_chpl = INT64(-1);
  wrap_arg_chpl = call_tmp_chpl;
  chpl_macro_tmp_6015.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_6015.addr = call_tmp_chpl;
  tmp_chpl10 = chpl_macro_tmp_6015;
  (this_chpl7)->dist_chpl = tmp_chpl10;
  call_tmp_chpl6 = chpl__buildDomainRuntimeType4(&defaultDist);
  tmp_chpl11 = (&call_tmp_chpl6)->d;
  _runtime_type_tmp__chpl = tmp_chpl11;
  ret_to_arg_ref_tmp__chpl3 = &ret_tmp_chpl3;
  chpl__convertRuntimeTypeToValue3(&_runtime_type_tmp__chpl, ret_to_arg_ref_tmp__chpl3);
  wrap_type_arg_chpl = ret_tmp_chpl3;
  _ref_tmp__chpl2 = &wrap_type_arg_chpl;
  chpl_macro_tmp_6016.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_6016.addr = _ref_tmp__chpl2;
  tmp_chpl12 = chpl_macro_tmp_6016;
  chpl_macro_tmp_6017.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_6017.addr = &call_tmp_chpl2;
  tmp_chpl13 = chpl_macro_tmp_6017;
  chpl___ASSIGN_3(tmp_chpl12, tmp_chpl13);
  wrap_arg_chpl2 = chpl__autoCopy(&wrap_type_arg_chpl);
  (this_chpl7)->domRep_chpl = wrap_arg_chpl2;
  call_tmp_chpl7 = chpl__ensureDomainExpr4(&((wrap_arg_chpl)->targetLocDom_chpl));
  i_dom_chpl = call_tmp_chpl7;
  call_tmp_chpl8 = chpl__buildArrayRuntimeType21(i_dom_chpl);
  tmp_chpl14 = (&call_tmp_chpl8)->dom;
  _runtime_type_tmp__chpl2 = tmp_chpl14;
  ret_to_arg_ref_tmp__chpl4 = &retarg_tmp_chpl;
  chpl__convertRuntimeTypeToValue20(&_runtime_type_tmp__chpl2, ret_to_arg_ref_tmp__chpl4);
  ret_tmp_chpl4 = retarg_tmp_chpl;
  wrap_type_arg_chpl2 = ret_tmp_chpl4;
  _ref_tmp__chpl3 = &wrap_type_arg_chpl2;
  ret_chpl2 = (&call_tmp_chpl3)->_instance;
  chpl_macro_tmp_6018.locale = (&ret_chpl2)->locale;
  chpl_macro_tmp_6018.addr = ((object)((&ret_chpl2)->addr));
  call_tmp_chpl9 = chpl_macro_tmp_6018;
  chpl_macro_tmp_6019.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_6019.addr = nil;
  chpl_macro_tmp_6020.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_6020.addr = NULL;
  tmp_chpl15 = chpl_macro_tmp_6020;
  call_tmp_chpl10 = (! (((&call_tmp_chpl9)->addr != (&tmp_chpl15)->addr) || ((!(! (&call_tmp_chpl9)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp_chpl9)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&tmp_chpl15)->locale), INT64(0), INT32(0))))));
  if (call_tmp_chpl10) {
    goto _end__ASSIGN__chpl;
  }
  tmp_chpl16 = (&wrap_type_arg_chpl2)->_instance;
  ret_chpl3 = (&tmp_chpl16)->addr;
  ret_chpl4 = (&call_tmp_chpl3)->_instance;
  call_tmp_chpl11 = ((object)(ret_chpl3));
  chpl_macro_tmp_6021.locale = (&ret_chpl4)->locale;
  chpl_macro_tmp_6021.addr = ((object)((&ret_chpl4)->addr));
  call_tmp_chpl12 = chpl_macro_tmp_6021;
  chpl_macro_tmp_6022.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_6022.addr = call_tmp_chpl11;
  tmp_chpl17 = chpl_macro_tmp_6022;
  call_tmp_chpl13 = (! (((&tmp_chpl17)->addr != (&call_tmp_chpl12)->addr) || ((!(! (&tmp_chpl17)->addr)) && (chpl_nodeFromLocaleID(&((&tmp_chpl17)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&call_tmp_chpl12)->locale), INT64(0), INT32(0))))));
  if (call_tmp_chpl13) {
    goto _end__ASSIGN__chpl;
  }
  tmp_chpl18 = &call_tmp_chpl3;
  call_tmp_chpl14 = size13(_ref_tmp__chpl3);
  call_tmp_chpl15 = (call_tmp_chpl14 == INT64(0));
  if (call_tmp_chpl15) {
    call_tmp_chpl16 = size13(tmp_chpl18);
    ret_chpl5 = (call_tmp_chpl16 == INT64(0));
    goto _end__if_fn713_chpl;
  } else {
    ret_chpl5 = UINT8(false);
    goto _end__if_fn713_chpl;
  }
  _end__if_fn713_chpl:;
  if (ret_chpl5) {
    goto _end__ASSIGN__chpl;
  }
  *(chpl__iterLF + INT64(0)) = wrap_type_arg_chpl2;
  *(chpl__iterLF + INT64(1)) = call_tmp_chpl3;
  call_tmp_chpl17 = *(chpl__iterLF + INT64(0));
  tmp_chpl19 = (&call_tmp_chpl17)->_instance;
  ret_chpl6 = (&tmp_chpl19)->addr;
  this_chpl10 = ret_chpl6;
  coerce_tmp_chpl2 = (this_chpl10)->dom;
  _ic__F0_this_chpl = coerce_tmp_chpl2;
  call_tmp_chpl18 = (local_dataParTasksPerLocale_chpl == INT64(0));
  if (call_tmp_chpl18) {
    _autoCopy_tmp__chpl = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any_chpl);
    call_tmp_chpl20 = chpl_localeID_to_locale(&_autoCopy_tmp__chpl);
    call_tmp_chpl19 = call_tmp_chpl20;
    chpl_macro_tmp_6023.locale = (&call_tmp_chpl19)->locale;
    chpl_macro_tmp_6023.addr = &(((&call_tmp_chpl19)->addr)->maxTaskPar);
    chpl_gen_comm_get(((void*)(&tmp_chpl20)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_6023).locale), INT64(0), INT32(0)), (chpl_macro_tmp_6023).addr, sizeof(int64_t), -1, COMMID(28), INT64(253), INT64(58));
    ret_chpl7 = tmp_chpl20;
    goto _end__if_fn137_chpl;
  } else {
    ret_chpl7 = local_dataParTasksPerLocale_chpl;
    goto _end__if_fn137_chpl;
  }
  _end__if_fn137_chpl:;
  this_chpl11 = coerce_tmp_chpl2;
  chpl_macro_tmp_6024.locale = (&this_chpl11)->locale;
  chpl_macro_tmp_6024.addr = &(((&this_chpl11)->addr)->tableSize);
  chpl_gen_comm_get(((void*)(&tmp_chpl21)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_6024).locale), INT64(0), INT32(0)), (chpl_macro_tmp_6024).addr, sizeof(int64_t), -1, COMMID(29), INT64(253), INT64(58));
  coerce_tmp_chpl3 = tmp_chpl21;
  numIndices_chpl = coerce_tmp_chpl3;
  call_tmp_chpl21 = _computeNumChunks_chpl(ret_chpl7, local_dataParIgnoreRunningTasks_chpl, local_dataParMinGranularity_chpl, coerce_tmp_chpl3);
  call_tmp_chpl22 = (call_tmp_chpl21 == INT64(1));
  if (call_tmp_chpl22) {
    ret_to_arg_ref_tmp__chpl5 = &ret_tmp_chpl5;
    chpl_build_bounded_range(INT64(0), ((int64_t)((coerce_tmp_chpl3 - INT64(1)))), ret_to_arg_ref_tmp__chpl5);
    call_tmp_chpl23 = *(chpl__iterLF + INT64(0));
    tmp_chpl22 = (&call_tmp_chpl23)->_instance;
    ret_chpl8 = (&tmp_chpl22)->addr;
    call_tmp_chpl24 = *(chpl__iterLF + INT64(1));
    ret_chpl9 = (&call_tmp_chpl24)->_instance;
    cast_tmp_chpl2 = chpl_here_alloc(sizeof(chpl__ic_these_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T2_object), INT16(141));
    _ic__chpl = ((_ic_these_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T2)(cast_tmp_chpl2));
    ((object)(_ic__chpl))->chpl__cid = chpl__cid__ic_these_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T2;
    (_ic__chpl)->more = INT64(1);
    chpl_macro_tmp_6025.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_6025.addr = ret_chpl8;
    tmp_chpl23 = chpl_macro_tmp_6025;
    (_ic__chpl)->F0_this = tmp_chpl23;
    (&tmp_chpl24)->x1 = ret_tmp_chpl5;
    (&tmp_chpl24)->x2 = coerce_tmp_chpl2;
    (_ic__chpl)->F1_followThis = tmp_chpl24;
    cast_tmp_chpl3 = chpl_here_alloc(sizeof(chpl__ic_these_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T2_object), INT16(141));
    _ic__chpl2 = ((_ic_these_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T2)(cast_tmp_chpl3));
    ((object)(_ic__chpl2))->chpl__cid = chpl__cid__ic_these_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T2;
    (_ic__chpl2)->more = INT64(1);
    (_ic__chpl2)->F0_this = ret_chpl9;
    (&tmp_chpl25)->x1 = ret_tmp_chpl5;
    (&tmp_chpl25)->x2 = coerce_tmp_chpl2;
    (_ic__chpl2)->F1_followThis = tmp_chpl25;
    advance7(_ic__chpl);
    advance7(_ic__chpl2);
    for (; (tmp_chpl28 = (_ic__chpl)->more,tmp_chpl28); ) {
      tmp_chpl26 = (_ic__chpl2)->value;
      tmp_chpl27 = (_ic__chpl)->value;
      chpl_gen_comm_get(((void*)(&coerce_tmp_chpl4)), chpl_nodeFromLocaleID(&((tmp_chpl26).locale), INT64(0), INT32(0)), (tmp_chpl26).addr, sizeof(chpl____wide_LocReplicatedDom_1_int64_t_F), -1, COMMID(30), INT64(253), INT64(58));
      chpl_gen_comm_put(((void*)(&coerce_tmp_chpl4)), chpl_nodeFromLocaleID(&((tmp_chpl27).locale), INT64(0), INT32(0)), (tmp_chpl27).addr, sizeof(chpl____wide_LocReplicatedDom_1_int64_t_F), -1, COMMID(31), INT64(253), INT64(58));
      advance7(_ic__chpl);
      advance7(_ic__chpl2);
    }
    call_tmp_chpl25 = ((void*)(_ic__chpl));
    chpl_here_free(call_tmp_chpl25);
    call_tmp_chpl26 = ((void*)(_ic__chpl2));
    chpl_here_free(call_tmp_chpl26);
  } else {
    ret_to_arg_ref_tmp__chpl6 = &ret_tmp_chpl6;
    chpl_build_low_bounded_range(INT64(0), ret_to_arg_ref_tmp__chpl6);
    ret_to_arg_ref_tmp__chpl7 = &ret_tmp_chpl7;
    chpl___POUND_(&ret_tmp_chpl6, call_tmp_chpl21, ret_to_arg_ref_tmp__chpl7);
    tmpIter_chpl = ret_tmp_chpl7;
    cast_tmp_chpl4 = chpl_here_alloc(sizeof(chpl_chpl___EndCount_atomic_int64_int64_t_object), INT16(2));
    this_chpl12 = ((chpl___EndCount_atomic_int64_int64_t)(cast_tmp_chpl4));
    ((object)(this_chpl12))->chpl__cid = chpl__cid_chpl___EndCount_atomic_int64_int64_t;
    (this_chpl12)->i = _init_class_tmp__chpl3;
    (this_chpl12)->taskCnt = INT64(0);
    (this_chpl12)->taskList = NULL;
    ret_chpl10 = type_tmp_chpl2;
    _ref_tmp__chpl4 = &ret_chpl10;
    atomic_init_int_least64_t(_ref_tmp__chpl4, INT64(0));
    (&this_chpl13)->_v = ret_chpl10;
    ret_to_arg_ref_tmp__chpl8 = &ret_tmp_chpl8;
    _construct_atomic_int64(ret_chpl10, &this_chpl13, ret_to_arg_ref_tmp__chpl8);
    (this_chpl12)->i = ret_tmp_chpl8;
    (this_chpl12)->taskCnt = INT64(0);
    call_tmp_chpl27 = ((c_void_ptr)(nil));
    (this_chpl12)->taskList = call_tmp_chpl27;
    wrap_call_tmp_chpl = _construct__EndCount(&ret_tmp_chpl8, INT64(0), call_tmp_chpl27, this_chpl12);
    _coforallCount_chpl = wrap_call_tmp_chpl;
    _ref_tmp__chpl5 = &tmpIter_chpl;
    chpl_macro_tmp_6026.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_6026.addr = _ref_tmp__chpl5;
    tmp_chpl29 = chpl_macro_tmp_6026;
    call_tmp_chpl28 = length2(tmp_chpl29);
    numTasks_chpl = call_tmp_chpl28;
    _upEndCount3(_coforallCount_chpl, call_tmp_chpl28);
    _ic__F0_this_chpl2 = tmpIter_chpl;
    numChunks_captemp_chpl = call_tmp_chpl21;
    ret_chpl11 = (&_ic__F0_this_chpl2)->_low;
    ret_chpl12 = (&_ic__F0_this_chpl2)->_high;
    end_chpl = ret_chpl12;
    for (i_chpl = ret_chpl11; ((i_chpl <= end_chpl)); i_chpl += INT64(1)) {
      this_chpl14 = _ic__F0_this_chpl;
      _args_forcoforall_fn_chpl = ((_class_localscoforall_fn9)(&chpl_macro_tmp_6027));
      (_args_forcoforall_fn_chpl)->_0_numChunks_captemp = numChunks_captemp_chpl;
      (_args_forcoforall_fn_chpl)->_1_numIndices = numIndices_chpl;
      (_args_forcoforall_fn_chpl)->_2__yieldedIndex = i_chpl;
      (_args_forcoforall_fn_chpl)->_3_this = this_chpl14;
      (_args_forcoforall_fn_chpl)->_4__coforallCount = _coforallCount_chpl;
      tmp_chpl30 = &chpl__iterLF;
      (_args_forcoforall_fn_chpl)->_5_tmp = tmp_chpl30;
      _args_vforcoforall_fn_chpl = ((void*)(_args_forcoforall_fn_chpl));
      _taskListNodecoforall_fn_chpl = chpl_nodeID;
      /*** wrapcoforall_fn6 ***/ chpl_taskListAddCoStmt(INT32(-2), INT64(135), ((chpl_task_bundle_p)(_args_vforcoforall_fn_chpl)), sizeof(chpl__class_localscoforall_fn9_object), &((_coforallCount_chpl)->taskList), _taskListNodecoforall_fn_chpl, INT64(3493), INT32(28));
    }
    _waitEndCount3(_coforallCount_chpl, numTasks_chpl);
    _field_destructor_tmp__chpl = &((_coforallCount_chpl)->i);
    call_tmp_chpl29 = &((_field_destructor_tmp__chpl)->_v);
    atomic_destroy_int_least64_t(call_tmp_chpl29);
    call_tmp_chpl30 = chpl_gen_getLocaleID();
    rvfDerefTmp_chpl = _coforallCount_chpl;
    isdirect_chpl = chpl_doDirectExecuteOn(&call_tmp_chpl30);
    if (isdirect_chpl) {
      chpl_macro_tmp_6028.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_6028.addr = rvfDerefTmp_chpl;
      tmp_chpl31 = chpl_macro_tmp_6028;
      on_fn123(tmp_chpl31);
    } else {
      _args_foron_fn_chpl = ((_class_localson_fn104)(&chpl_macro_tmp_6029));
      (_args_foron_fn_chpl)->_0_rvfDerefTmp = call_tmp_chpl30;
      chpl_macro_tmp_6030.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_6030.addr = rvfDerefTmp_chpl;
      tmp_chpl32 = chpl_macro_tmp_6030;
      (_args_foron_fn_chpl)->_1_rvfDerefTmp = tmp_chpl32;
      _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
      /*** wrapon_fn131 ***/ chpl_executeOn(&call_tmp_chpl30, INT32(196), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), sizeof(chpl__class_localson_fn104_object), INT64(1227), INT32(2));
    }
  }
  _end__ASSIGN__chpl:;
  wrap_arg_chpl3 = chpl__autoCopy5(&wrap_type_arg_chpl2);
  (this_chpl7)->localDoms_chpl = wrap_arg_chpl3;
  wrap_call_tmp_chpl2 = _construct_ReplicatedDom_chpl(&default_arg_arrs_chpl, INT64(0), &default_arg_arrsLock_chpl, UINT8(false), default_argpid_chpl, wrap_arg_chpl, &wrap_arg_chpl2, &wrap_arg_chpl3, this_chpl7);
  chpl__autoDestroy24(&wrap_type_arg_chpl2);
  chpl__autoDestroy5(&wrap_type_arg_chpl);
  return wrap_call_tmp_chpl2;
}

/* ReplicatedDist.chpl:259 */
static void dsiGetReprivatizeData_chpl2(ReplicatedDom_1_int64_t_F_chpl this_chpl6,
                                        _ref__tuple_1_star__domain_DefaultRectangularDom_1_int64_t_F _retArg_chpl) {
  _ref__domain_DefaultRectangularDom_1_int64_t_F i__e1_x_chpl = NULL;
  _domain_DefaultRectangularDom_1_int64_t_F this_x1_chpl;
  _domain_DefaultRectangularDom_1_int64_t_F elt_x1_chpl;
  i__e1_x_chpl = &((this_chpl6)->domRep_chpl);
  this_x1_chpl = *(i__e1_x_chpl);
  elt_x1_chpl = chpl__autoCopy(&this_x1_chpl);
  *(*(_retArg_chpl) + INT64(0)) = elt_x1_chpl;
  return;
}

/* ReplicatedDist.chpl:263 */
static void dsiReprivatize_chpl2(ReplicatedDom_1_int64_t_F_chpl this_chpl6,
                                 chpl____wide_ReplicatedDom_1_int64_t_F other_chpl,
                                 _ref__tuple_1_star__ref__domain_DefaultRectangularDom_1_int64_t_F reprivatizeData_chpl) {
  _ref__domain_DefaultRectangularDom_1_int64_t_F call_tmp_chpl = NULL;
  _domain_DefaultRectangularDom_1_int64_t_F call_tmp_chpl2;
  chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_F tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_F tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_6031;
  chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_6032;
  assert_chpl(UINT8(true));
  call_tmp_chpl = &((this_chpl6)->domRep_chpl);
  call_tmp_chpl2 = *(*(reprivatizeData_chpl) + INT64(0));
  chpl_macro_tmp_6031.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_6031.addr = call_tmp_chpl;
  tmp_chpl = chpl_macro_tmp_6031;
  chpl_macro_tmp_6032.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_6032.addr = &call_tmp_chpl2;
  tmp_chpl2 = chpl_macro_tmp_6032;
  chpl___ASSIGN_3(tmp_chpl, tmp_chpl2);
  return;
}

/* ReplicatedDist.chpl:278 */
static ReplicatedDom_1_int64_t_F_chpl dsiNewRectangularDom_chpl2(Replicated_chpl this_chpl6,
                                                                 _ref__tuple_1_star_range_int64_t_bounded_F inds_chpl) {
  ReplicatedDom_1_int64_t_F_chpl result_chpl = NULL;
  ReplicatedDom_1_int64_t_F_chpl this_chpl7 = NULL;
  c_void_ptr cast_tmp_chpl;
  chpl____wide_Replicated tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _domain_DefaultRectangularDom_1_int64_t_F _init_class_tmp__chpl;
  chpl____wide_DefaultRectangularDom_1_int64_t_F tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  _array_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T _init_class_tmp__chpl2;
  chpl____wide_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  list_BaseArr_chpl this_chpl8;
  chpl____wide_listNode_BaseArr tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseArr tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  listNode_BaseArr_chpl call_tmp_chpl = NULL;
  chpl____wide_listNode_BaseArr tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  listNode_BaseArr_chpl call_tmp_chpl2 = NULL;
  chpl____wide_listNode_BaseArr tmp_chpl7 = {CHPL_LOCALEID_T_INIT, NULL};
  list_BaseArr_chpl ret_tmp_chpl;
  _ref_list_BaseArr ret_to_arg_ref_tmp__chpl = NULL;
  atomicbool this_chpl9;
  atomic_bool ret_chpl;
  atomic_bool type_tmp_chpl;
  _ref_atomic_bool _ref_tmp__chpl = NULL;
  atomicbool ret_tmp_chpl2;
  _ref_atomicbool ret_to_arg_ref_tmp__chpl2 = NULL;
  Replicated_chpl wrap_arg_chpl = NULL;
  chpl____wide_Replicated tmp_chpl8 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl___RuntimeTypeInfo4 call_tmp_chpl3;
  _distribution_DefaultDist _runtime_type_tmp__chpl;
  _distribution_DefaultDist tmp_chpl9;
  _domain_DefaultRectangularDom_1_int64_t_F ret_tmp_chpl3;
  _ref__domain_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp__chpl3 = NULL;
  _ref__domain_DefaultAssociativeDom_int64_t_T call_tmp_chpl4 = NULL;
  chpl___RuntimeTypeInfo25 call_tmp_chpl5;
  _ref__domain_DefaultAssociativeDom_int64_t_T i_dom_chpl = NULL;
  _domain_DefaultAssociativeDom_int64_t_T _runtime_type_tmp__chpl2;
  _domain_DefaultAssociativeDom_int64_t_T tmp_chpl10;
  _array_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T ret_tmp_chpl4;
  _ref__array_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T ret_to_arg_ref_tmp__chpl4 = NULL;
  _array_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T retarg_tmp_chpl;
  ReplicatedDom_1_int64_t_F_chpl wrap_call_tmp_chpl = NULL;
  _ref__wide__array_DefaultAssociativeArr_locale_int64_t_T call_tmp_chpl6 = NULL;
  _ref__wide__array_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T call_tmp_chpl7 = NULL;
  _ref__array_DefaultAssociativeArr_locale_int64_t_T i__e1_x_chpl = NULL;
  _ref__array_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T i__e2_x_chpl = NULL;
  _array_DefaultAssociativeArr_locale_int64_t_T this_x1_chpl;
  _array_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T this_x2_chpl;
  chpl___EndCount_atomic_int64_int64_t _coforallCount_chpl = NULL;
  chpl___EndCount_atomic_int64_int64_t this_chpl10 = NULL;
  c_void_ptr cast_tmp_chpl2;
  atomic_int64 _init_class_tmp__chpl3;
  atomic_int64 this_chpl11;
  atomic_int_least64_t ret_chpl2;
  atomic_int_least64_t type_tmp_chpl2;
  _ref_atomic_int_least64_t _ref_tmp__chpl2 = NULL;
  atomic_int64 ret_tmp_chpl5;
  _ref_atomic_int64 ret_to_arg_ref_tmp__chpl5 = NULL;
  c_void_ptr call_tmp_chpl8;
  chpl___EndCount_atomic_int64_int64_t wrap_call_tmp_chpl2 = NULL;
  _array_DefaultAssociativeArr_locale_int64_t_T call_tmp_chpl9;
  chpl____wide_DefaultAssociativeArr_locale_int64_t_T ret_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  _ic_these_DefaultAssociativeArr_locale_int64_t_T _ic__chpl = NULL;
  c_void_ptr cast_tmp_chpl3;
  _array_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T call_tmp_chpl10;
  chpl____wide_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T ret_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  _ic_these_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T _ic__chpl2 = NULL;
  c_void_ptr cast_tmp_chpl4;
  chpl____wide__ref__wide_LocReplicatedDom_1_int64_t_F tmp_chpl11 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide_locale tmp_chpl12 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp_chpl11;
  chpl____wide_locale tmp_chpl13 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl___EndCount_atomic_int64_int64_t rvfDerefTmp_chpl = NULL;
  _class_localson_fn_chpl56 _args_foron_fn_chpl = NULL;
  chpl____wide__ref__wide_LocReplicatedDom_1_int64_t_F tmp_chpl14 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__EndCount_atomic_int64_int64_t tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  int64_t tmp_chpl16;
  c_void_ptr call_tmp_chpl12;
  c_void_ptr call_tmp_chpl13;
  _ref_atomic_int64 _field_destructor_tmp__chpl = NULL;
  _ref_atomic_int_least64_t call_tmp_chpl14 = NULL;
  chpl_localeID_t call_tmp_chpl15;
  chpl___EndCount_atomic_int64_int64_t rvfDerefTmp_chpl2 = NULL;
  chpl_bool isdirect_chpl;
  chpl____wide__EndCount_atomic_int64_int64_t tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn104 _args_foron_fn_chpl2 = NULL;
  chpl____wide__EndCount_atomic_int64_int64_t tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl2;
  chpl____wide__nilType chpl_macro_tmp_6033;
  chpl____wide_Replicated chpl_macro_tmp_6034;
  chpl____wide__nilType chpl_macro_tmp_6035;
  chpl____wide_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_6036;
  chpl____wide__nilType chpl_macro_tmp_6037;
  chpl____wide_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T chpl_macro_tmp_6038;
  chpl____wide__nilType chpl_macro_tmp_6039;
  chpl____wide_listNode_BaseArr chpl_macro_tmp_6040;
  chpl____wide__nilType chpl_macro_tmp_6041;
  chpl____wide_listNode_BaseArr chpl_macro_tmp_6042;
  chpl____wide_listNode_BaseArr chpl_macro_tmp_6043;
  chpl____wide_listNode_BaseArr chpl_macro_tmp_6044;
  chpl____wide_Replicated chpl_macro_tmp_6045;
  chpl__class_localson_fn_chpl56_object chpl_macro_tmp_6046;
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_6047;
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_6048;
  chpl__class_localson_fn104_object chpl_macro_tmp_6049;
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_6050;
  cast_tmp_chpl = chpl_here_alloc(sizeof(chpl_ReplicatedDom_1_int64_t_F_chpl_object), INT16(138));
  this_chpl7 = ((ReplicatedDom_1_int64_t_F_chpl)(cast_tmp_chpl));
  ((object)(this_chpl7))->chpl__cid = chpl__cid_ReplicatedDom_1_int64_t_F_chpl;
  chpl_macro_tmp_6033.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_6033.addr = nil;
  chpl_macro_tmp_6034.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_6034.addr = NULL;
  tmp_chpl = chpl_macro_tmp_6034;
  (this_chpl7)->dist_chpl = tmp_chpl;
  (&_init_class_tmp__chpl)->_pid = INT64(0);
  chpl_macro_tmp_6035.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_6035.addr = nil;
  chpl_macro_tmp_6036.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_6036.addr = NULL;
  tmp_chpl2 = chpl_macro_tmp_6036;
  (&_init_class_tmp__chpl)->_instance = tmp_chpl2;
  (&_init_class_tmp__chpl)->_unowned = UINT8(false);
  (this_chpl7)->domRep_chpl = _init_class_tmp__chpl;
  (&_init_class_tmp__chpl2)->_pid = INT64(0);
  chpl_macro_tmp_6037.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_6037.addr = nil;
  chpl_macro_tmp_6038.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_6038.addr = NULL;
  tmp_chpl3 = chpl_macro_tmp_6038;
  (&_init_class_tmp__chpl2)->_instance = tmp_chpl3;
  (&_init_class_tmp__chpl2)->_unowned = UINT8(false);
  (this_chpl7)->localDoms_chpl = _init_class_tmp__chpl2;
  chpl_macro_tmp_6039.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_6039.addr = nil;
  chpl_macro_tmp_6040.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_6040.addr = NULL;
  tmp_chpl4 = chpl_macro_tmp_6040;
  (&this_chpl8)->first_chpl = tmp_chpl4;
  chpl_macro_tmp_6041.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_6041.addr = nil;
  chpl_macro_tmp_6042.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_6042.addr = NULL;
  tmp_chpl5 = chpl_macro_tmp_6042;
  (&this_chpl8)->last_chpl = tmp_chpl5;
  (&this_chpl8)->length_chpl = INT64(0);
  call_tmp_chpl = ((listNode_BaseArr_chpl)(nil));
  chpl_macro_tmp_6043.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_6043.addr = call_tmp_chpl;
  tmp_chpl6 = chpl_macro_tmp_6043;
  (&this_chpl8)->first_chpl = tmp_chpl6;
  call_tmp_chpl2 = ((listNode_BaseArr_chpl)(nil));
  chpl_macro_tmp_6044.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_6044.addr = call_tmp_chpl2;
  tmp_chpl7 = chpl_macro_tmp_6044;
  (&this_chpl8)->last_chpl = tmp_chpl7;
  (&this_chpl8)->length_chpl = INT64(0);
  ret_to_arg_ref_tmp__chpl = &ret_tmp_chpl;
  _construct_list_chpl2(call_tmp_chpl, call_tmp_chpl2, INT64(0), &this_chpl8, ret_to_arg_ref_tmp__chpl);
  ret_chpl = type_tmp_chpl;
  _ref_tmp__chpl = &ret_chpl;
  atomic_init_bool(_ref_tmp__chpl, UINT8(false));
  (&this_chpl9)->_v = ret_chpl;
  ret_to_arg_ref_tmp__chpl2 = &ret_tmp_chpl2;
  _construct_atomicbool(ret_chpl, &this_chpl9, ret_to_arg_ref_tmp__chpl2);
  wrap_arg_chpl = this_chpl6;
  chpl_macro_tmp_6045.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_6045.addr = this_chpl6;
  tmp_chpl8 = chpl_macro_tmp_6045;
  (this_chpl7)->dist_chpl = tmp_chpl8;
  call_tmp_chpl3 = chpl__buildDomainRuntimeType4(&defaultDist);
  tmp_chpl9 = (&call_tmp_chpl3)->d;
  _runtime_type_tmp__chpl = tmp_chpl9;
  ret_to_arg_ref_tmp__chpl3 = &ret_tmp_chpl3;
  chpl__convertRuntimeTypeToValue3(&_runtime_type_tmp__chpl, ret_to_arg_ref_tmp__chpl3);
  (this_chpl7)->domRep_chpl = ret_tmp_chpl3;
  call_tmp_chpl4 = chpl__ensureDomainExpr4(&((wrap_arg_chpl)->targetLocDom_chpl));
  i_dom_chpl = call_tmp_chpl4;
  call_tmp_chpl5 = chpl__buildArrayRuntimeType21(i_dom_chpl);
  tmp_chpl10 = (&call_tmp_chpl5)->dom;
  _runtime_type_tmp__chpl2 = tmp_chpl10;
  ret_to_arg_ref_tmp__chpl4 = &retarg_tmp_chpl;
  chpl__convertRuntimeTypeToValue20(&_runtime_type_tmp__chpl2, ret_to_arg_ref_tmp__chpl4);
  ret_tmp_chpl4 = retarg_tmp_chpl;
  (this_chpl7)->localDoms_chpl = ret_tmp_chpl4;
  wrap_call_tmp_chpl = _construct_ReplicatedDom_chpl(&ret_tmp_chpl, INT64(0), &ret_tmp_chpl2, UINT8(false), INT64(-1), wrap_arg_chpl, &ret_tmp_chpl3, &ret_tmp_chpl4, this_chpl7);
  result_chpl = wrap_call_tmp_chpl;
  call_tmp_chpl6 = &((this_chpl6)->targetLocales_chpl);
  call_tmp_chpl7 = &((result_chpl)->localDoms_chpl);
  i__e1_x_chpl = call_tmp_chpl6;
  i__e2_x_chpl = call_tmp_chpl7;
  this_x1_chpl = *(i__e1_x_chpl);
  this_x2_chpl = *(i__e2_x_chpl);
  cast_tmp_chpl2 = chpl_here_alloc(sizeof(chpl_chpl___EndCount_atomic_int64_int64_t_object), INT16(2));
  this_chpl10 = ((chpl___EndCount_atomic_int64_int64_t)(cast_tmp_chpl2));
  ((object)(this_chpl10))->chpl__cid = chpl__cid_chpl___EndCount_atomic_int64_int64_t;
  (this_chpl10)->i = _init_class_tmp__chpl3;
  (this_chpl10)->taskCnt = INT64(0);
  (this_chpl10)->taskList = NULL;
  ret_chpl2 = type_tmp_chpl2;
  _ref_tmp__chpl2 = &ret_chpl2;
  atomic_init_int_least64_t(_ref_tmp__chpl2, INT64(0));
  (&this_chpl11)->_v = ret_chpl2;
  ret_to_arg_ref_tmp__chpl5 = &ret_tmp_chpl5;
  _construct_atomic_int64(ret_chpl2, &this_chpl11, ret_to_arg_ref_tmp__chpl5);
  (this_chpl10)->i = ret_tmp_chpl5;
  (this_chpl10)->taskCnt = INT64(0);
  call_tmp_chpl8 = ((c_void_ptr)(nil));
  (this_chpl10)->taskList = call_tmp_chpl8;
  wrap_call_tmp_chpl2 = _construct__EndCount(&ret_tmp_chpl5, INT64(0), call_tmp_chpl8, this_chpl10);
  _coforallCount_chpl = wrap_call_tmp_chpl2;
  call_tmp_chpl9 = this_x1_chpl;
  ret_chpl3 = (&call_tmp_chpl9)->_instance;
  cast_tmp_chpl3 = chpl_here_alloc(sizeof(chpl__ic_these_DefaultAssociativeArr_locale_int64_t_T_object), INT16(128));
  _ic__chpl = ((_ic_these_DefaultAssociativeArr_locale_int64_t_T)(cast_tmp_chpl3));
  ((object)(_ic__chpl))->chpl__cid = chpl__cid__ic_these_DefaultAssociativeArr_locale_int64_t_T;
  (_ic__chpl)->more = INT64(1);
  (_ic__chpl)->F0_this = ret_chpl3;
  call_tmp_chpl10 = this_x2_chpl;
  ret_chpl4 = (&call_tmp_chpl10)->_instance;
  cast_tmp_chpl4 = chpl_here_alloc(sizeof(chpl__ic_these_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T_object), INT16(139));
  _ic__chpl2 = ((_ic_these_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T)(cast_tmp_chpl4));
  ((object)(_ic__chpl2))->chpl__cid = chpl__cid__ic_these_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T;
  (_ic__chpl2)->more = INT64(1);
  (_ic__chpl2)->F0_this = ret_chpl4;
  advance(_ic__chpl);
  advance3(_ic__chpl2);
  for (; (tmp_chpl16 = (_ic__chpl)->more,tmp_chpl16); ) {
    tmp_chpl11 = (_ic__chpl2)->value;
    tmp_chpl12 = (_ic__chpl)->value;
    _upEndCount2(_coforallCount_chpl);
    chpl_gen_comm_get(((void*)(&tmp_chpl13)), chpl_nodeFromLocaleID(&((tmp_chpl12).locale), INT64(0), INT32(0)), (tmp_chpl12).addr, sizeof(chpl____wide_locale), -1, COMMID(32), INT64(293), INT64(58));
    call_tmp_chpl11 = (&tmp_chpl13)->locale;
    rvfDerefTmp_chpl = _coforallCount_chpl;
    _args_foron_fn_chpl = ((_class_localson_fn_chpl56)(&chpl_macro_tmp_6046));
    (_args_foron_fn_chpl)->_0_rvfDerefTmp_chpl = call_tmp_chpl11;
    tmp_chpl14 = tmp_chpl11;
    (_args_foron_fn_chpl)->_1_tmp_chpl = tmp_chpl14;
    chpl_macro_tmp_6047.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_6047.addr = rvfDerefTmp_chpl;
    tmp_chpl15 = chpl_macro_tmp_6047;
    (_args_foron_fn_chpl)->_2_rvfDerefTmp_chpl = tmp_chpl15;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    /*** wrapon_fn_chpl56 ***/ chpl_executeOnNB(&call_tmp_chpl11, INT32(312), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), sizeof(chpl__class_localson_fn_chpl56_object), INT64(293), INT32(58));
    advance(_ic__chpl);
    advance3(_ic__chpl2);
  }
  call_tmp_chpl12 = ((void*)(_ic__chpl));
  chpl_here_free(call_tmp_chpl12);
  call_tmp_chpl13 = ((void*)(_ic__chpl2));
  chpl_here_free(call_tmp_chpl13);
  _waitEndCount2(_coforallCount_chpl);
  _field_destructor_tmp__chpl = &((_coforallCount_chpl)->i);
  call_tmp_chpl14 = &((_field_destructor_tmp__chpl)->_v);
  atomic_destroy_int_least64_t(call_tmp_chpl14);
  call_tmp_chpl15 = chpl_gen_getLocaleID();
  rvfDerefTmp_chpl2 = _coforallCount_chpl;
  isdirect_chpl = chpl_doDirectExecuteOn(&call_tmp_chpl15);
  if (isdirect_chpl) {
    chpl_macro_tmp_6048.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_6048.addr = rvfDerefTmp_chpl2;
    tmp_chpl17 = chpl_macro_tmp_6048;
    on_fn123(tmp_chpl17);
  } else {
    _args_foron_fn_chpl2 = ((_class_localson_fn104)(&chpl_macro_tmp_6049));
    (_args_foron_fn_chpl2)->_0_rvfDerefTmp = call_tmp_chpl15;
    chpl_macro_tmp_6050.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_6050.addr = rvfDerefTmp_chpl2;
    tmp_chpl18 = chpl_macro_tmp_6050;
    (_args_foron_fn_chpl2)->_1_rvfDerefTmp = tmp_chpl18;
    _args_vforon_fn_chpl2 = ((void*)(_args_foron_fn_chpl2));
    /*** wrapon_fn131 ***/ chpl_executeOn(&call_tmp_chpl15, INT32(196), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl2)), sizeof(chpl__class_localson_fn104_object), INT64(1227), INT32(2));
  }
  dsiSetIndices_chpl2(result_chpl, inds_chpl);
  return result_chpl;
}

/* ReplicatedDist.chpl:293 */
static void on_fn_chpl56(chpl____wide__ref__wide_LocReplicatedDom_1_int64_t_F locDom_chpl,
                         chpl____wide__EndCount_atomic_int64_int64_t _coforallCount_chpl) {
  LocReplicatedDom_1_int64_t_F_chpl this_chpl6 = NULL;
  c_void_ptr cast_tmp_chpl;
  _domain_DefaultRectangularDom_1_int64_t_F _init_class_tmp__chpl;
  chpl____wide_DefaultRectangularDom_1_int64_t_F tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl___RuntimeTypeInfo4 call_tmp_chpl;
  _distribution_DefaultDist _runtime_type_tmp__chpl;
  _distribution_DefaultDist tmp_chpl2;
  _domain_DefaultRectangularDom_1_int64_t_F ret_tmp_chpl;
  _ref__domain_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp__chpl = NULL;
  LocReplicatedDom_1_int64_t_F_chpl wrap_call_tmp_chpl = NULL;
  chpl____wide_LocReplicatedDom_1_int64_t_F tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__nilType chpl_macro_tmp_6051;
  chpl____wide_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_6052;
  chpl____wide_LocReplicatedDom_1_int64_t_F chpl_macro_tmp_6053;
  cast_tmp_chpl = chpl_here_alloc(sizeof(chpl_LocReplicatedDom_1_int64_t_F_chpl_object), INT16(132));
  this_chpl6 = ((LocReplicatedDom_1_int64_t_F_chpl)(cast_tmp_chpl));
  ((object)(this_chpl6))->chpl__cid = chpl__cid_LocReplicatedDom_1_int64_t_F_chpl;
  (&_init_class_tmp__chpl)->_pid = INT64(0);
  chpl_macro_tmp_6051.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_6051.addr = nil;
  chpl_macro_tmp_6052.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_6052.addr = NULL;
  tmp_chpl = chpl_macro_tmp_6052;
  (&_init_class_tmp__chpl)->_instance = tmp_chpl;
  (&_init_class_tmp__chpl)->_unowned = UINT8(false);
  (this_chpl6)->domLocalRep_chpl = _init_class_tmp__chpl;
  call_tmp_chpl = chpl__buildDomainRuntimeType4(&defaultDist);
  tmp_chpl2 = (&call_tmp_chpl)->d;
  _runtime_type_tmp__chpl = tmp_chpl2;
  ret_to_arg_ref_tmp__chpl = &ret_tmp_chpl;
  chpl__convertRuntimeTypeToValue3(&_runtime_type_tmp__chpl, ret_to_arg_ref_tmp__chpl);
  (this_chpl6)->domLocalRep_chpl = ret_tmp_chpl;
  wrap_call_tmp_chpl = _construct_LocReplicatedDom_chpl(&ret_tmp_chpl, this_chpl6);
  chpl_macro_tmp_6053.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_6053.addr = wrap_call_tmp_chpl;
  tmp_chpl3 = chpl_macro_tmp_6053;
  chpl_gen_comm_put(((void*)(&tmp_chpl3)), chpl_nodeFromLocaleID(&((locDom_chpl).locale), INT64(0), INT32(0)), (locDom_chpl).addr, sizeof(chpl____wide_LocReplicatedDom_1_int64_t_F), -1, COMMID(33), INT64(294), INT64(58));
  return;
}

/* ReplicatedDist.chpl:293 */
static void wrapon_fn_chpl56(_class_localson_fn_chpl56 c_chpl) {
  chpl____wide__ref__wide_LocReplicatedDom_1_int64_t_F _1_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__EndCount_atomic_int64_int64_t _2_rvfDerefTmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__EndCount_atomic_int64_int64_t endcount_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _1_tmp_chpl = (c_chpl)->_1_tmp_chpl;
  _2_rvfDerefTmp_chpl = (c_chpl)->_2_rvfDerefTmp_chpl;
  on_fn_chpl56(_1_tmp_chpl, _2_rvfDerefTmp_chpl);
  endcount_chpl = (c_chpl)->_2_rvfDerefTmp_chpl;
  _downEndCount(endcount_chpl);
  return;
}

/* ReplicatedDist.chpl:312 */
static void dsiSetIndices_chpl2(ReplicatedDom_1_int64_t_F_chpl this_chpl6,
                                _ref__tuple_1_star_range_int64_t_bounded_F rangesArg_chpl) {
  _domain_DefaultRectangularDom_1_int64_t_F call_tmp_chpl;
  _domain_DefaultRectangularDom_1_int64_t_F ret_tmp_chpl;
  _ref__domain_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp__chpl = NULL;
  _ref_range_int64_t_bounded_F i__e1_ranges_chpl = NULL;
  ret_to_arg_ref_tmp__chpl = &ret_tmp_chpl;
  i__e1_ranges_chpl = (*(rangesArg_chpl) + INT64(0));
  chpl__buildDomainExpr2(i__e1_ranges_chpl, ret_to_arg_ref_tmp__chpl);
  call_tmp_chpl = ret_tmp_chpl;
  dsiSetIndices_chpl3(this_chpl6, &ret_tmp_chpl);
  chpl__autoDestroy5(&call_tmp_chpl);
  return;
}

/* ReplicatedDist.chpl:320 */
static void dsiSetIndices_chpl3(ReplicatedDom_1_int64_t_F_chpl this_chpl6,
                                _ref__domain_DefaultRectangularDom_1_int64_t_F domArg_chpl) {
  _ref__domain_DefaultRectangularDom_1_int64_t_F call_tmp_chpl = NULL;
  chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_F tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_F tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__wide__array_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T call_tmp_chpl2 = NULL;
  chpl___EndCount_atomic_int64_int64_t _coforallCount_chpl = NULL;
  chpl___EndCount_atomic_int64_int64_t this_chpl7 = NULL;
  c_void_ptr cast_tmp_chpl;
  atomic_int64 _init_class_tmp__chpl;
  atomic_int64 this_chpl8;
  atomic_int_least64_t ret_chpl;
  atomic_int_least64_t type_tmp_chpl;
  _ref_atomic_int_least64_t _ref_tmp__chpl = NULL;
  atomic_int64 ret_tmp_chpl;
  _ref_atomic_int64 ret_to_arg_ref_tmp__chpl = NULL;
  c_void_ptr call_tmp_chpl3;
  chpl___EndCount_atomic_int64_int64_t wrap_call_tmp_chpl = NULL;
  int64_t numTasks_chpl;
  _ref__array_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T i_x_chpl = NULL;
  chpl____wide_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T ret_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T _ic__F0_this_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T this_chpl9 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultAssociativeDom_int64_t_T coerce_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultAssociativeDom_int64_t_T _ic__F0_this_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultAssociativeDom_int64_t_T this_chpl10 = {CHPL_LOCALEID_T_INIT, NULL};
  _array_DefaultRectangularArr_chpl_TableEntry_int64_t_1_int64_t_F_int64_t _ir_F1_tab_chpl;
  _array_DefaultRectangularArr_chpl_TableEntry_int64_t_1_int64_t_F_int64_t tmp_chpl3;
  _array_DefaultRectangularArr_chpl_TableEntry_int64_t_1_int64_t_F_int64_t _ic__F1_tab_chpl;
  _domain_DefaultRectangularDom_1_int64_t_F call_tmp_chpl4;
  _domain_DefaultRectangularDom_1_int64_t_F ret_tmp_chpl2;
  _ref__domain_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp__chpl2 = NULL;
  chpl____wide__ref__wide__array_DefaultRectangularArr_chpl_TableEntry_int64_t_1_int64_t_F_int64_t tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularDom_1_int64_t_F ret_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  _tuple_1_star_int64_t ret_tmp_chpl3;
  _ref__tuple_1_star_int64_t ret_to_arg_ref_tmp__chpl3 = NULL;
  chpl____wide__ref_range_int64_t_bounded_F call_tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F _this_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularDom_1_int64_t_F this_chpl11 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_range_int64_t_bounded_F i_x_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F tmp_chpl5;
  range_int64_t_bounded_F _ic__F0_this_chpl3;
  int64_t i_chpl;
  int64_t end_chpl;
  chpl_TableEntry_int64_t tmp_chpl6;
  _array_DefaultRectangularArr_chpl_TableEntry_int64_t_1_int64_t_F_int64_t tab_chpl;
  chpl____wide_DefaultRectangularArr_chpl_TableEntry_int64_t_1_int64_t_F_int64_t call_tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_chpl_TableEntry_int64_t_1_int64_t_F_int64_t ret_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_TableEntry_int64_t ret_chpl5;
  chpl____wide__ddata_chpl_TableEntry_int64_t coerce_tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_chpl_TableEntry_int64_t call_tmp_chpl7 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl__hash_status coerce_tmp_chpl3;
  chpl_bool call_tmp_chpl8;
  chpl____wide_DefaultAssociativeDom_int64_t_T this_chpl12 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide__array_DefaultRectangularArr_chpl_TableEntry_int64_t_1_int64_t_F_int64_t call_tmp_chpl9 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_TableEntry_int64_t tmp_chpl7;
  chpl____wide_DefaultRectangularArr_chpl_TableEntry_int64_t_1_int64_t_F_int64_t call_tmp_chpl10 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_chpl_TableEntry_int64_t_1_int64_t_F_int64_t ret_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_TableEntry_int64_t ret_chpl7;
  chpl____wide__ddata_chpl_TableEntry_int64_t coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_chpl_TableEntry_int64_t call_tmp_chpl11 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t _yieldedIndex_chpl;
  chpl____wide__ref__wide_LocReplicatedDom_1_int64_t_F wrap_call_tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp_chpl12;
  chpl____wide_LocReplicatedDom_1_int64_t_F tmp_chpl8 = {CHPL_LOCALEID_T_INIT, NULL};
  _domain_DefaultRectangularDom_1_int64_t_F rvfDerefTmp_chpl;
  chpl____wide_LocReplicatedDom_1_int64_t_F rvfDerefTmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl___EndCount_atomic_int64_int64_t rvfDerefTmp_chpl3 = NULL;
  _class_localson_fn_chpl57 _args_foron_fn_chpl = NULL;
  chpl____wide__EndCount_atomic_int64_int64_t tmp_chpl9 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  _ref_atomic_int64 _field_destructor_tmp__chpl = NULL;
  _ref_atomic_int_least64_t call_tmp_chpl13 = NULL;
  chpl_localeID_t call_tmp_chpl14;
  chpl___EndCount_atomic_int64_int64_t rvfDerefTmp_chpl4 = NULL;
  chpl_bool isdirect_chpl;
  chpl____wide__EndCount_atomic_int64_int64_t tmp_chpl10 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn104 _args_foron_fn_chpl2 = NULL;
  chpl____wide__EndCount_atomic_int64_int64_t tmp_chpl11 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl2;
  chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_6054;
  chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_6055;
  chpl____wide__ref__wide_DefaultAssociativeDom_int64_t_T chpl_macro_tmp_6056;
  chpl____wide__ref__wide__array_DefaultRectangularArr_chpl_TableEntry_int64_t_1_int64_t_F_int64_t chpl_macro_tmp_6057;
  chpl____wide__ref__wide__array_DefaultRectangularArr_chpl_TableEntry_int64_t_1_int64_t_F_int64_t chpl_macro_tmp_6058;
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F chpl_macro_tmp_6059;
  chpl____wide__ref_range_int64_t_bounded_F chpl_macro_tmp_6060;
  chpl____wide__ref__wide__ddata_chpl_TableEntry_int64_t chpl_macro_tmp_6061;
  chpl____wide__ref_chpl_TableEntry_int64_t chpl_macro_tmp_6062;
  chpl____wide__ref__wide__array_DefaultRectangularArr_chpl_TableEntry_int64_t_1_int64_t_F_int64_t chpl_macro_tmp_6063;
  chpl____wide__ref__wide_DefaultRectangularArr_chpl_TableEntry_int64_t_1_int64_t_F_int64_t chpl_macro_tmp_6064;
  chpl____wide__ref__wide__ddata_chpl_TableEntry_int64_t chpl_macro_tmp_6065;
  chpl____wide__ref_chpl_TableEntry_int64_t chpl_macro_tmp_6066;
  chpl__class_localson_fn_chpl57_object chpl_macro_tmp_6067;
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_6068;
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_6069;
  chpl__class_localson_fn104_object chpl_macro_tmp_6070;
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_6071;
  call_tmp_chpl = &((this_chpl6)->domRep_chpl);
  chpl_macro_tmp_6054.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_6054.addr = call_tmp_chpl;
  tmp_chpl = chpl_macro_tmp_6054;
  chpl_macro_tmp_6055.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_6055.addr = domArg_chpl;
  tmp_chpl2 = chpl_macro_tmp_6055;
  chpl___ASSIGN_3(tmp_chpl, tmp_chpl2);
  call_tmp_chpl2 = &((this_chpl6)->localDoms_chpl);
  cast_tmp_chpl = chpl_here_alloc(sizeof(chpl_chpl___EndCount_atomic_int64_int64_t_object), INT16(2));
  this_chpl7 = ((chpl___EndCount_atomic_int64_int64_t)(cast_tmp_chpl));
  ((object)(this_chpl7))->chpl__cid = chpl__cid_chpl___EndCount_atomic_int64_int64_t;
  (this_chpl7)->i = _init_class_tmp__chpl;
  (this_chpl7)->taskCnt = INT64(0);
  (this_chpl7)->taskList = NULL;
  ret_chpl = type_tmp_chpl;
  _ref_tmp__chpl = &ret_chpl;
  atomic_init_int_least64_t(_ref_tmp__chpl, INT64(0));
  (&this_chpl8)->_v = ret_chpl;
  ret_to_arg_ref_tmp__chpl = &ret_tmp_chpl;
  _construct_atomic_int64(ret_chpl, &this_chpl8, ret_to_arg_ref_tmp__chpl);
  (this_chpl7)->i = ret_tmp_chpl;
  (this_chpl7)->taskCnt = INT64(0);
  call_tmp_chpl3 = ((c_void_ptr)(nil));
  (this_chpl7)->taskList = call_tmp_chpl3;
  wrap_call_tmp_chpl = _construct__EndCount(&ret_tmp_chpl, INT64(0), call_tmp_chpl3, this_chpl7);
  _coforallCount_chpl = wrap_call_tmp_chpl;
  numTasks_chpl = size13(call_tmp_chpl2);
  _upEndCount4(wrap_call_tmp_chpl, numTasks_chpl);
  i_x_chpl = call_tmp_chpl2;
  ret_chpl2 = (i_x_chpl)->_instance;
  _ic__F0_this_chpl = ret_chpl2;
  this_chpl9 = ret_chpl2;
  chpl_macro_tmp_6056.locale = (&this_chpl9)->locale;
  chpl_macro_tmp_6056.addr = &(((&this_chpl9)->addr)->dom);
  chpl_gen_comm_get(((void*)(&coerce_tmp_chpl)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_6056).locale), INT64(0), INT32(0)), (chpl_macro_tmp_6056).addr, sizeof(chpl____wide_DefaultAssociativeDom_int64_t_T), -1, COMMID(34), INT64(324), INT64(58));
  _ic__F0_this_chpl2 = coerce_tmp_chpl;
  this_chpl10 = coerce_tmp_chpl;
  chpl_macro_tmp_6057.locale = (&this_chpl10)->locale;
  chpl_macro_tmp_6057.addr = &(((&this_chpl10)->addr)->table);
  chpl_gen_comm_get(((void*)(&tmp_chpl3)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_6057).locale), INT64(0), INT32(0)), (chpl_macro_tmp_6057).addr, sizeof(_array_DefaultRectangularArr_chpl_TableEntry_int64_t_1_int64_t_F_int64_t), -1, COMMID(35), INT64(324), INT64(58));
  _ir_F1_tab_chpl = tmp_chpl3;
  _ic__F1_tab_chpl = _ir_F1_tab_chpl;
  ret_to_arg_ref_tmp__chpl2 = &ret_tmp_chpl2;
  chpl_macro_tmp_6058.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_6058.addr = &_ir_F1_tab_chpl;
  tmp_chpl4 = chpl_macro_tmp_6058;
  _dom4(tmp_chpl4, ret_to_arg_ref_tmp__chpl2);
  call_tmp_chpl4 = ret_tmp_chpl2;
  ret_chpl3 = (&ret_tmp_chpl2)->_instance;
  ret_to_arg_ref_tmp__chpl3 = &ret_tmp_chpl3;
  createTuple_chpl(INT64(0), ret_to_arg_ref_tmp__chpl3);
  this_chpl11 = ret_chpl3;
  chpl_macro_tmp_6059.locale = (&this_chpl11)->locale;
  chpl_macro_tmp_6059.addr = &(((&this_chpl11)->addr)->ranges);
  _this_tmp__chpl = chpl_macro_tmp_6059;
  chpl_macro_tmp_6060.locale = (_this_tmp__chpl).locale;
  chpl_macro_tmp_6060.addr = (*((_this_tmp__chpl).addr) + INT64(0));
  call_tmp_chpl5 = chpl_macro_tmp_6060;
  i_x_chpl2 = call_tmp_chpl5;
  chpl_gen_comm_get(((void*)(&tmp_chpl5)), chpl_nodeFromLocaleID(&((i_x_chpl2).locale), INT64(0), INT32(0)), (i_x_chpl2).addr, sizeof(range_int64_t_bounded_F), -1, COMMID(36), INT64(324), INT64(58));
  _ic__F0_this_chpl3 = tmp_chpl5;
  end_chpl = (&_ic__F0_this_chpl3)->_high;
  for (i_chpl = (&_ic__F0_this_chpl3)->_low; ((i_chpl <= end_chpl)); i_chpl += INT64(1)) {
    tab_chpl = _ic__F1_tab_chpl;
    ret_chpl4 = (&tab_chpl)->_instance;
    call_tmp_chpl6 = ret_chpl4;
    chpl_macro_tmp_6061.locale = (&call_tmp_chpl6)->locale;
    chpl_macro_tmp_6061.addr = &(((&call_tmp_chpl6)->addr)->shiftedData);
    chpl_gen_comm_get(((void*)(&coerce_tmp_chpl2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_6061).locale), INT64(0), INT32(0)), (chpl_macro_tmp_6061).addr, sizeof(chpl____wide__ddata_chpl_TableEntry_int64_t), -1, COMMID(37), INT64(324), INT64(58));
    chpl_macro_tmp_6062.locale = (&coerce_tmp_chpl2)->locale;
    chpl_macro_tmp_6062.addr = ((&coerce_tmp_chpl2)->addr + i_chpl);
    call_tmp_chpl7 = chpl_macro_tmp_6062;
    chpl_gen_comm_get(((void*)(&ret_chpl5)), chpl_nodeFromLocaleID(&((call_tmp_chpl7).locale), INT64(0), INT32(0)), (call_tmp_chpl7).addr, sizeof(chpl_TableEntry_int64_t), -1, COMMID(38), INT64(324), INT64(58));
    tmp_chpl6 = ret_chpl5;
    coerce_tmp_chpl3 = (&tmp_chpl6)->status;
    call_tmp_chpl8 = (((int64_t)(coerce_tmp_chpl3)) == ((int64_t)(chpl__hash_status_full)));
    if (call_tmp_chpl8) {
      this_chpl12 = _ic__F0_this_chpl2;
      chpl_macro_tmp_6063.locale = (&this_chpl12)->locale;
      chpl_macro_tmp_6063.addr = &(((&this_chpl12)->addr)->table);
      call_tmp_chpl9 = chpl_macro_tmp_6063;
      chpl_macro_tmp_6064.locale = (call_tmp_chpl9).locale;
      chpl_macro_tmp_6064.addr = &(((call_tmp_chpl9).addr)->_instance);
      chpl_gen_comm_get(((void*)(&ret_chpl6)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_6064).locale), INT64(0), INT32(0)), (chpl_macro_tmp_6064).addr, sizeof(chpl____wide_DefaultRectangularArr_chpl_TableEntry_int64_t_1_int64_t_F_int64_t), -1, COMMID(39), INT64(324), INT64(58));
      call_tmp_chpl10 = ret_chpl6;
      chpl_macro_tmp_6065.locale = (&call_tmp_chpl10)->locale;
      chpl_macro_tmp_6065.addr = &(((&call_tmp_chpl10)->addr)->shiftedData);
      chpl_gen_comm_get(((void*)(&coerce_tmp_chpl4)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_6065).locale), INT64(0), INT32(0)), (chpl_macro_tmp_6065).addr, sizeof(chpl____wide__ddata_chpl_TableEntry_int64_t), -1, COMMID(40), INT64(324), INT64(58));
      chpl_macro_tmp_6066.locale = (&coerce_tmp_chpl4)->locale;
      chpl_macro_tmp_6066.addr = ((&coerce_tmp_chpl4)->addr + i_chpl);
      call_tmp_chpl11 = chpl_macro_tmp_6066;
      chpl_gen_comm_get(((void*)(&ret_chpl7)), chpl_nodeFromLocaleID(&((call_tmp_chpl11).locale), INT64(0), INT32(0)), (call_tmp_chpl11).addr, sizeof(chpl_TableEntry_int64_t), -1, COMMID(41), INT64(324), INT64(58));
      tmp_chpl7 = ret_chpl7;
      _yieldedIndex_chpl = (&tmp_chpl7)->idx;
      wrap_call_tmp_chpl2 = dsiAccess4(_ic__F0_this_chpl, _yieldedIndex_chpl, UINT8(false));
      chpl_gen_comm_get(((void*)(&tmp_chpl8)), chpl_nodeFromLocaleID(&((wrap_call_tmp_chpl2).locale), INT64(0), INT32(0)), (wrap_call_tmp_chpl2).addr, sizeof(chpl____wide_LocReplicatedDom_1_int64_t_F), -1, COMMID(42), INT64(325), INT64(58));
      call_tmp_chpl12 = (&tmp_chpl8)->locale;
      rvfDerefTmp_chpl = *(domArg_chpl);
      chpl_gen_comm_get(((void*)(&rvfDerefTmp_chpl2)), chpl_nodeFromLocaleID(&((wrap_call_tmp_chpl2).locale), INT64(0), INT32(0)), (wrap_call_tmp_chpl2).addr, sizeof(chpl____wide_LocReplicatedDom_1_int64_t_F), -1, COMMID(43), INT64(324), INT64(58));
      rvfDerefTmp_chpl3 = _coforallCount_chpl;
      _args_foron_fn_chpl = ((_class_localson_fn_chpl57)(&chpl_macro_tmp_6067));
      (_args_foron_fn_chpl)->_0_rvfDerefTmp_chpl = call_tmp_chpl12;
      (_args_foron_fn_chpl)->_1_rvfDerefTmp_chpl = rvfDerefTmp_chpl;
      (_args_foron_fn_chpl)->_2_rvfDerefTmp_chpl = rvfDerefTmp_chpl2;
      chpl_macro_tmp_6068.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_6068.addr = rvfDerefTmp_chpl3;
      tmp_chpl9 = chpl_macro_tmp_6068;
      (_args_foron_fn_chpl)->_3_rvfDerefTmp_chpl = tmp_chpl9;
      _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
      /*** wrapon_fn_chpl57 ***/ chpl_executeOnNB(&call_tmp_chpl12, INT32(313), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), sizeof(chpl__class_localson_fn_chpl57_object), INT64(325), INT32(58));
    }
  }
  chpl__autoDestroy5(&call_tmp_chpl4);
  _waitEndCount4(_coforallCount_chpl, numTasks_chpl);
  _field_destructor_tmp__chpl = &((_coforallCount_chpl)->i);
  call_tmp_chpl13 = &((_field_destructor_tmp__chpl)->_v);
  atomic_destroy_int_least64_t(call_tmp_chpl13);
  call_tmp_chpl14 = chpl_gen_getLocaleID();
  rvfDerefTmp_chpl4 = _coforallCount_chpl;
  isdirect_chpl = chpl_doDirectExecuteOn(&call_tmp_chpl14);
  if (isdirect_chpl) {
    chpl_macro_tmp_6069.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_6069.addr = rvfDerefTmp_chpl4;
    tmp_chpl10 = chpl_macro_tmp_6069;
    on_fn123(tmp_chpl10);
  } else {
    _args_foron_fn_chpl2 = ((_class_localson_fn104)(&chpl_macro_tmp_6070));
    (_args_foron_fn_chpl2)->_0_rvfDerefTmp = call_tmp_chpl14;
    chpl_macro_tmp_6071.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_6071.addr = rvfDerefTmp_chpl4;
    tmp_chpl11 = chpl_macro_tmp_6071;
    (_args_foron_fn_chpl2)->_1_rvfDerefTmp = tmp_chpl11;
    _args_vforon_fn_chpl2 = ((void*)(_args_foron_fn_chpl2));
    /*** wrapon_fn131 ***/ chpl_executeOn(&call_tmp_chpl14, INT32(196), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl2)), sizeof(chpl__class_localson_fn104_object), INT64(1227), INT32(2));
  }
  return;
}

/* ReplicatedDist.chpl:325 */
static void wrapon_fn_chpl57(_class_localson_fn_chpl57 c_chpl) {
  _domain_DefaultRectangularDom_1_int64_t_F _1_rvfDerefTmp_chpl;
  _domain_DefaultRectangularDom_1_int64_t_F tmp_chpl;
  chpl____wide_LocReplicatedDom_1_int64_t_F _2_rvfDerefTmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__EndCount_atomic_int64_int64_t _3_rvfDerefTmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__EndCount_atomic_int64_int64_t endcount_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  tmp_chpl = (c_chpl)->_1_rvfDerefTmp_chpl;
  _1_rvfDerefTmp_chpl = tmp_chpl;
  _2_rvfDerefTmp_chpl = (c_chpl)->_2_rvfDerefTmp_chpl;
  _3_rvfDerefTmp_chpl = (c_chpl)->_3_rvfDerefTmp_chpl;
  on_fn_chpl57(&_1_rvfDerefTmp_chpl, &_2_rvfDerefTmp_chpl, _3_rvfDerefTmp_chpl);
  endcount_chpl = (c_chpl)->_3_rvfDerefTmp_chpl;
  _downEndCount(endcount_chpl);
  return;
}

/* ReplicatedDist.chpl:325 */
static void on_fn_chpl57(_ref__domain_DefaultRectangularDom_1_int64_t_F domArg_chpl,
                         _ref__wide_LocReplicatedDom_1_int64_t_F locDom_chpl,
                         chpl____wide__EndCount_atomic_int64_int64_t _coforallCount_chpl) {
  chpl____wide_LocReplicatedDom_1_int64_t_F coerce_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_F call_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _domain_DefaultRectangularDom_1_int64_t_F rvfRerefTmp_chpl;
  chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_F tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_6072;
  chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_6073;
  coerce_tmp_chpl = *(locDom_chpl);
  chpl_macro_tmp_6072.locale = (&coerce_tmp_chpl)->locale;
  chpl_macro_tmp_6072.addr = &(((&coerce_tmp_chpl)->addr)->domLocalRep_chpl);
  call_tmp_chpl = chpl_macro_tmp_6072;
  rvfRerefTmp_chpl = *(domArg_chpl);
  chpl_macro_tmp_6073.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_6073.addr = &rvfRerefTmp_chpl;
  tmp_chpl = chpl_macro_tmp_6073;
  chpl___ASSIGN_3(call_tmp_chpl, tmp_chpl);
  return;
}

/* ReplicatedDist.chpl:329 */
static void dsiGetIndices_chpl2(ReplicatedDom_1_int64_t_F_chpl this_chpl6,
                                _ref__tuple_1_star_range_int64_t_bounded_F _retArg_chpl) {
  _domain_DefaultRectangularDom_1_int64_t_F call_tmp_chpl;
  _domain_DefaultRectangularDom_1_int64_t_F ret_tmp_chpl;
  _ref__domain_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp__chpl = NULL;
  range_int64_t_bounded_F _autoCopy_tmp__x1_chpl;
  _tuple_1_star_range_int64_t_bounded_F ret_tmp_chpl2;
  _ref__tuple_1_star_range_int64_t_bounded_F ret_to_arg_ref_tmp__chpl2 = NULL;
  _ref__domain_DefaultRectangularDom_1_int64_t_F _ref_tmp__chpl = NULL;
  chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_F tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_6074;
  ret_to_arg_ref_tmp__chpl = &ret_tmp_chpl;
  redirectee_chpl(this_chpl6, ret_to_arg_ref_tmp__chpl);
  call_tmp_chpl = ret_tmp_chpl;
  ret_to_arg_ref_tmp__chpl2 = &ret_tmp_chpl2;
  _ref_tmp__chpl = &call_tmp_chpl;
  chpl_macro_tmp_6074.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_6074.addr = _ref_tmp__chpl;
  tmp_chpl = chpl_macro_tmp_6074;
  getIndices4(tmp_chpl, ret_to_arg_ref_tmp__chpl2);
  _autoCopy_tmp__x1_chpl = *(ret_tmp_chpl2 + INT64(0));
  *(*(_retArg_chpl) + INT64(0)) = _autoCopy_tmp__x1_chpl;
  chpl__autoDestroy5(&call_tmp_chpl);
  return;
}

/* ReplicatedDist.chpl:393 */
static void dsiDestroyDom_chpl2(chpl____wide_ReplicatedDom_1_int64_t_F this_chpl6) {
  chpl____wide_Replicated coerce_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__domain_DefaultAssociativeDom_int64_t_T call_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl___EndCount_atomic_int64_int64_t _coforallCount_chpl = NULL;
  chpl___EndCount_atomic_int64_int64_t this_chpl7 = NULL;
  c_void_ptr cast_tmp_chpl;
  atomic_int64 _init_class_tmp__chpl;
  atomic_int64 this_chpl8;
  atomic_int_least64_t ret_chpl;
  atomic_int_least64_t type_tmp_chpl;
  _ref_atomic_int_least64_t _ref_tmp__chpl = NULL;
  atomic_int64 ret_tmp_chpl;
  _ref_atomic_int64 ret_to_arg_ref_tmp__chpl = NULL;
  c_void_ptr call_tmp_chpl2;
  chpl___EndCount_atomic_int64_int64_t wrap_call_tmp_chpl = NULL;
  int64_t numTasks_chpl;
  chpl____wide__ref__domain_DefaultAssociativeDom_int64_t_T i_x_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultAssociativeDom_int64_t_T ret_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultAssociativeDom_int64_t_T _ic__F0_this_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultAssociativeDom_int64_t_T this_chpl9 = {CHPL_LOCALEID_T_INIT, NULL};
  _array_DefaultRectangularArr_chpl_TableEntry_int64_t_1_int64_t_F_int64_t _ir_F1_tab_chpl;
  _array_DefaultRectangularArr_chpl_TableEntry_int64_t_1_int64_t_F_int64_t tmp_chpl;
  _array_DefaultRectangularArr_chpl_TableEntry_int64_t_1_int64_t_F_int64_t _ic__F1_tab_chpl;
  _domain_DefaultRectangularDom_1_int64_t_F call_tmp_chpl3;
  _domain_DefaultRectangularDom_1_int64_t_F ret_tmp_chpl2;
  _ref__domain_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp__chpl2 = NULL;
  chpl____wide__ref__wide__array_DefaultRectangularArr_chpl_TableEntry_int64_t_1_int64_t_F_int64_t tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularDom_1_int64_t_F ret_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  _tuple_1_star_int64_t ret_tmp_chpl3;
  _ref__tuple_1_star_int64_t ret_to_arg_ref_tmp__chpl3 = NULL;
  chpl____wide__ref_range_int64_t_bounded_F call_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F _this_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularDom_1_int64_t_F this_chpl10 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_range_int64_t_bounded_F i_x_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F tmp_chpl3;
  range_int64_t_bounded_F _ic__F0_this_chpl2;
  int64_t i_chpl;
  int64_t end_chpl;
  chpl_TableEntry_int64_t tmp_chpl4;
  _array_DefaultRectangularArr_chpl_TableEntry_int64_t_1_int64_t_F_int64_t tab_chpl;
  chpl____wide_DefaultRectangularArr_chpl_TableEntry_int64_t_1_int64_t_F_int64_t call_tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_chpl_TableEntry_int64_t_1_int64_t_F_int64_t ret_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_TableEntry_int64_t ret_chpl5;
  chpl____wide__ddata_chpl_TableEntry_int64_t coerce_tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_chpl_TableEntry_int64_t call_tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl__hash_status coerce_tmp_chpl3;
  chpl_bool call_tmp_chpl7;
  chpl____wide_DefaultAssociativeDom_int64_t_T this_chpl11 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide__array_DefaultRectangularArr_chpl_TableEntry_int64_t_1_int64_t_F_int64_t call_tmp_chpl8 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_TableEntry_int64_t tmp_chpl5;
  chpl____wide_DefaultRectangularArr_chpl_TableEntry_int64_t_1_int64_t_F_int64_t call_tmp_chpl9 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_chpl_TableEntry_int64_t_1_int64_t_F_int64_t ret_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_TableEntry_int64_t ret_chpl7;
  chpl____wide__ddata_chpl_TableEntry_int64_t coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_chpl_TableEntry_int64_t call_tmp_chpl10 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t _yieldedIndex_chpl;
  chpl____wide_Replicated coerce_tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide__array_DefaultAssociativeArr_locale_int64_t_T call_tmp_chpl11 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultAssociativeArr_locale_int64_t_T ret_chpl8 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide_locale wrap_call_tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp_chpl12;
  chpl____wide_locale tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_ReplicatedDom_1_int64_t_F rvfDerefTmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl___EndCount_atomic_int64_int64_t rvfDerefTmp_chpl2 = NULL;
  _class_localson_fn_chpl58 _args_foron_fn_chpl = NULL;
  chpl____wide__EndCount_atomic_int64_int64_t tmp_chpl7 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  _ref_atomic_int64 _field_destructor_tmp__chpl = NULL;
  _ref_atomic_int_least64_t call_tmp_chpl13 = NULL;
  chpl_localeID_t call_tmp_chpl14;
  chpl___EndCount_atomic_int64_int64_t rvfDerefTmp_chpl3 = NULL;
  chpl_bool isdirect_chpl;
  chpl____wide__EndCount_atomic_int64_int64_t tmp_chpl8 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn104 _args_foron_fn_chpl2 = NULL;
  chpl____wide__EndCount_atomic_int64_int64_t tmp_chpl9 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl2;
  chpl____wide__ref__wide_Replicated chpl_macro_tmp_6075;
  chpl____wide__ref__domain_DefaultAssociativeDom_int64_t_T chpl_macro_tmp_6076;
  chpl____wide__ref__wide_DefaultAssociativeDom_int64_t_T chpl_macro_tmp_6077;
  chpl____wide__ref__wide__array_DefaultRectangularArr_chpl_TableEntry_int64_t_1_int64_t_F_int64_t chpl_macro_tmp_6078;
  chpl____wide__ref__wide__array_DefaultRectangularArr_chpl_TableEntry_int64_t_1_int64_t_F_int64_t chpl_macro_tmp_6079;
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F chpl_macro_tmp_6080;
  chpl____wide__ref_range_int64_t_bounded_F chpl_macro_tmp_6081;
  chpl____wide__ref__wide__ddata_chpl_TableEntry_int64_t chpl_macro_tmp_6082;
  chpl____wide__ref_chpl_TableEntry_int64_t chpl_macro_tmp_6083;
  chpl____wide__ref__wide__array_DefaultRectangularArr_chpl_TableEntry_int64_t_1_int64_t_F_int64_t chpl_macro_tmp_6084;
  chpl____wide__ref__wide_DefaultRectangularArr_chpl_TableEntry_int64_t_1_int64_t_F_int64_t chpl_macro_tmp_6085;
  chpl____wide__ref__wide__ddata_chpl_TableEntry_int64_t chpl_macro_tmp_6086;
  chpl____wide__ref_chpl_TableEntry_int64_t chpl_macro_tmp_6087;
  chpl____wide__ref__wide_Replicated chpl_macro_tmp_6088;
  chpl____wide__ref__wide__array_DefaultAssociativeArr_locale_int64_t_T chpl_macro_tmp_6089;
  chpl____wide__ref__wide_DefaultAssociativeArr_locale_int64_t_T chpl_macro_tmp_6090;
  chpl__class_localson_fn_chpl58_object chpl_macro_tmp_6091;
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_6092;
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_6093;
  chpl__class_localson_fn104_object chpl_macro_tmp_6094;
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_6095;
  chpl_macro_tmp_6075.locale = (&this_chpl6)->locale;
  chpl_macro_tmp_6075.addr = &(((&this_chpl6)->addr)->dist_chpl);
  chpl_gen_comm_get(((void*)(&coerce_tmp_chpl)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_6075).locale), INT64(0), INT32(0)), (chpl_macro_tmp_6075).addr, sizeof(chpl____wide_Replicated), -1, COMMID(44), INT64(394), INT64(58));
  chpl_macro_tmp_6076.locale = (&coerce_tmp_chpl)->locale;
  chpl_macro_tmp_6076.addr = &(((&coerce_tmp_chpl)->addr)->targetLocDom_chpl);
  call_tmp_chpl = chpl_macro_tmp_6076;
  cast_tmp_chpl = chpl_here_alloc(sizeof(chpl_chpl___EndCount_atomic_int64_int64_t_object), INT16(2));
  this_chpl7 = ((chpl___EndCount_atomic_int64_int64_t)(cast_tmp_chpl));
  ((object)(this_chpl7))->chpl__cid = chpl__cid_chpl___EndCount_atomic_int64_int64_t;
  (this_chpl7)->i = _init_class_tmp__chpl;
  (this_chpl7)->taskCnt = INT64(0);
  (this_chpl7)->taskList = NULL;
  ret_chpl = type_tmp_chpl;
  _ref_tmp__chpl = &ret_chpl;
  atomic_init_int_least64_t(_ref_tmp__chpl, INT64(0));
  (&this_chpl8)->_v = ret_chpl;
  ret_to_arg_ref_tmp__chpl = &ret_tmp_chpl;
  _construct_atomic_int64(ret_chpl, &this_chpl8, ret_to_arg_ref_tmp__chpl);
  (this_chpl7)->i = ret_tmp_chpl;
  (this_chpl7)->taskCnt = INT64(0);
  call_tmp_chpl2 = ((c_void_ptr)(nil));
  (this_chpl7)->taskList = call_tmp_chpl2;
  wrap_call_tmp_chpl = _construct__EndCount(&ret_tmp_chpl, INT64(0), call_tmp_chpl2, this_chpl7);
  _coforallCount_chpl = wrap_call_tmp_chpl;
  numTasks_chpl = size2(call_tmp_chpl);
  _upEndCount4(wrap_call_tmp_chpl, numTasks_chpl);
  i_x_chpl = call_tmp_chpl;
  chpl_macro_tmp_6077.locale = (i_x_chpl).locale;
  chpl_macro_tmp_6077.addr = &(((i_x_chpl).addr)->_instance);
  chpl_gen_comm_get(((void*)(&ret_chpl2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_6077).locale), INT64(0), INT32(0)), (chpl_macro_tmp_6077).addr, sizeof(chpl____wide_DefaultAssociativeDom_int64_t_T), -1, COMMID(45), INT64(394), INT64(58));
  _ic__F0_this_chpl = ret_chpl2;
  this_chpl9 = ret_chpl2;
  chpl_macro_tmp_6078.locale = (&this_chpl9)->locale;
  chpl_macro_tmp_6078.addr = &(((&this_chpl9)->addr)->table);
  chpl_gen_comm_get(((void*)(&tmp_chpl)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_6078).locale), INT64(0), INT32(0)), (chpl_macro_tmp_6078).addr, sizeof(_array_DefaultRectangularArr_chpl_TableEntry_int64_t_1_int64_t_F_int64_t), -1, COMMID(46), INT64(394), INT64(58));
  _ir_F1_tab_chpl = tmp_chpl;
  _ic__F1_tab_chpl = _ir_F1_tab_chpl;
  ret_to_arg_ref_tmp__chpl2 = &ret_tmp_chpl2;
  chpl_macro_tmp_6079.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_6079.addr = &_ir_F1_tab_chpl;
  tmp_chpl2 = chpl_macro_tmp_6079;
  _dom4(tmp_chpl2, ret_to_arg_ref_tmp__chpl2);
  call_tmp_chpl3 = ret_tmp_chpl2;
  ret_chpl3 = (&ret_tmp_chpl2)->_instance;
  ret_to_arg_ref_tmp__chpl3 = &ret_tmp_chpl3;
  createTuple_chpl(INT64(0), ret_to_arg_ref_tmp__chpl3);
  this_chpl10 = ret_chpl3;
  chpl_macro_tmp_6080.locale = (&this_chpl10)->locale;
  chpl_macro_tmp_6080.addr = &(((&this_chpl10)->addr)->ranges);
  _this_tmp__chpl = chpl_macro_tmp_6080;
  chpl_macro_tmp_6081.locale = (_this_tmp__chpl).locale;
  chpl_macro_tmp_6081.addr = (*((_this_tmp__chpl).addr) + INT64(0));
  call_tmp_chpl4 = chpl_macro_tmp_6081;
  i_x_chpl2 = call_tmp_chpl4;
  chpl_gen_comm_get(((void*)(&tmp_chpl3)), chpl_nodeFromLocaleID(&((i_x_chpl2).locale), INT64(0), INT32(0)), (i_x_chpl2).addr, sizeof(range_int64_t_bounded_F), -1, COMMID(47), INT64(394), INT64(58));
  _ic__F0_this_chpl2 = tmp_chpl3;
  end_chpl = (&_ic__F0_this_chpl2)->_high;
  for (i_chpl = (&_ic__F0_this_chpl2)->_low; ((i_chpl <= end_chpl)); i_chpl += INT64(1)) {
    tab_chpl = _ic__F1_tab_chpl;
    ret_chpl4 = (&tab_chpl)->_instance;
    call_tmp_chpl5 = ret_chpl4;
    chpl_macro_tmp_6082.locale = (&call_tmp_chpl5)->locale;
    chpl_macro_tmp_6082.addr = &(((&call_tmp_chpl5)->addr)->shiftedData);
    chpl_gen_comm_get(((void*)(&coerce_tmp_chpl2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_6082).locale), INT64(0), INT32(0)), (chpl_macro_tmp_6082).addr, sizeof(chpl____wide__ddata_chpl_TableEntry_int64_t), -1, COMMID(48), INT64(394), INT64(58));
    chpl_macro_tmp_6083.locale = (&coerce_tmp_chpl2)->locale;
    chpl_macro_tmp_6083.addr = ((&coerce_tmp_chpl2)->addr + i_chpl);
    call_tmp_chpl6 = chpl_macro_tmp_6083;
    chpl_gen_comm_get(((void*)(&ret_chpl5)), chpl_nodeFromLocaleID(&((call_tmp_chpl6).locale), INT64(0), INT32(0)), (call_tmp_chpl6).addr, sizeof(chpl_TableEntry_int64_t), -1, COMMID(49), INT64(394), INT64(58));
    tmp_chpl4 = ret_chpl5;
    coerce_tmp_chpl3 = (&tmp_chpl4)->status;
    call_tmp_chpl7 = (((int64_t)(coerce_tmp_chpl3)) == ((int64_t)(chpl__hash_status_full)));
    if (call_tmp_chpl7) {
      this_chpl11 = _ic__F0_this_chpl;
      chpl_macro_tmp_6084.locale = (&this_chpl11)->locale;
      chpl_macro_tmp_6084.addr = &(((&this_chpl11)->addr)->table);
      call_tmp_chpl8 = chpl_macro_tmp_6084;
      chpl_macro_tmp_6085.locale = (call_tmp_chpl8).locale;
      chpl_macro_tmp_6085.addr = &(((call_tmp_chpl8).addr)->_instance);
      chpl_gen_comm_get(((void*)(&ret_chpl6)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_6085).locale), INT64(0), INT32(0)), (chpl_macro_tmp_6085).addr, sizeof(chpl____wide_DefaultRectangularArr_chpl_TableEntry_int64_t_1_int64_t_F_int64_t), -1, COMMID(50), INT64(394), INT64(58));
      call_tmp_chpl9 = ret_chpl6;
      chpl_macro_tmp_6086.locale = (&call_tmp_chpl9)->locale;
      chpl_macro_tmp_6086.addr = &(((&call_tmp_chpl9)->addr)->shiftedData);
      chpl_gen_comm_get(((void*)(&coerce_tmp_chpl4)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_6086).locale), INT64(0), INT32(0)), (chpl_macro_tmp_6086).addr, sizeof(chpl____wide__ddata_chpl_TableEntry_int64_t), -1, COMMID(51), INT64(394), INT64(58));
      chpl_macro_tmp_6087.locale = (&coerce_tmp_chpl4)->locale;
      chpl_macro_tmp_6087.addr = ((&coerce_tmp_chpl4)->addr + i_chpl);
      call_tmp_chpl10 = chpl_macro_tmp_6087;
      chpl_gen_comm_get(((void*)(&ret_chpl7)), chpl_nodeFromLocaleID(&((call_tmp_chpl10).locale), INT64(0), INT32(0)), (call_tmp_chpl10).addr, sizeof(chpl_TableEntry_int64_t), -1, COMMID(52), INT64(394), INT64(58));
      tmp_chpl5 = ret_chpl7;
      _yieldedIndex_chpl = (&tmp_chpl5)->idx;
      chpl_macro_tmp_6088.locale = (&this_chpl6)->locale;
      chpl_macro_tmp_6088.addr = &(((&this_chpl6)->addr)->dist_chpl);
      chpl_gen_comm_get(((void*)(&coerce_tmp_chpl5)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_6088).locale), INT64(0), INT32(0)), (chpl_macro_tmp_6088).addr, sizeof(chpl____wide_Replicated), -1, COMMID(53), INT64(395), INT64(58));
      chpl_macro_tmp_6089.locale = (&coerce_tmp_chpl5)->locale;
      chpl_macro_tmp_6089.addr = &(((&coerce_tmp_chpl5)->addr)->targetLocales_chpl);
      call_tmp_chpl11 = chpl_macro_tmp_6089;
      chpl_macro_tmp_6090.locale = (call_tmp_chpl11).locale;
      chpl_macro_tmp_6090.addr = &(((call_tmp_chpl11).addr)->_instance);
      chpl_gen_comm_get(((void*)(&ret_chpl8)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_6090).locale), INT64(0), INT32(0)), (chpl_macro_tmp_6090).addr, sizeof(chpl____wide_DefaultAssociativeArr_locale_int64_t_T), -1, COMMID(54), INT64(395), INT64(58));
      wrap_call_tmp_chpl2 = dsiAccess8(ret_chpl8, _yieldedIndex_chpl, UINT8(false));
      chpl_gen_comm_get(((void*)(&tmp_chpl6)), chpl_nodeFromLocaleID(&((wrap_call_tmp_chpl2).locale), INT64(0), INT32(0)), (wrap_call_tmp_chpl2).addr, sizeof(chpl____wide_locale), -1, COMMID(55), INT64(395), INT64(58));
      call_tmp_chpl12 = (&tmp_chpl6)->locale;
      rvfDerefTmp_chpl = this_chpl6;
      rvfDerefTmp_chpl2 = _coforallCount_chpl;
      _args_foron_fn_chpl = ((_class_localson_fn_chpl58)(&chpl_macro_tmp_6091));
      (_args_foron_fn_chpl)->_0_rvfDerefTmp_chpl = call_tmp_chpl12;
      (_args_foron_fn_chpl)->_1_rvfDerefTmp_chpl = _yieldedIndex_chpl;
      (_args_foron_fn_chpl)->_2_rvfDerefTmp_chpl = rvfDerefTmp_chpl;
      chpl_macro_tmp_6092.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_6092.addr = rvfDerefTmp_chpl2;
      tmp_chpl7 = chpl_macro_tmp_6092;
      (_args_foron_fn_chpl)->_3_rvfDerefTmp_chpl = tmp_chpl7;
      _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
      /*** wrapon_fn_chpl58 ***/ chpl_executeOnNB(&call_tmp_chpl12, INT32(314), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), sizeof(chpl__class_localson_fn_chpl58_object), INT64(395), INT32(58));
    }
  }
  chpl__autoDestroy5(&call_tmp_chpl3);
  _waitEndCount4(_coforallCount_chpl, numTasks_chpl);
  _field_destructor_tmp__chpl = &((_coforallCount_chpl)->i);
  call_tmp_chpl13 = &((_field_destructor_tmp__chpl)->_v);
  atomic_destroy_int_least64_t(call_tmp_chpl13);
  call_tmp_chpl14 = chpl_gen_getLocaleID();
  rvfDerefTmp_chpl3 = _coforallCount_chpl;
  isdirect_chpl = chpl_doDirectExecuteOn(&call_tmp_chpl14);
  if (isdirect_chpl) {
    chpl_macro_tmp_6093.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_6093.addr = rvfDerefTmp_chpl3;
    tmp_chpl8 = chpl_macro_tmp_6093;
    on_fn123(tmp_chpl8);
  } else {
    _args_foron_fn_chpl2 = ((_class_localson_fn104)(&chpl_macro_tmp_6094));
    (_args_foron_fn_chpl2)->_0_rvfDerefTmp = call_tmp_chpl14;
    chpl_macro_tmp_6095.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_6095.addr = rvfDerefTmp_chpl3;
    tmp_chpl9 = chpl_macro_tmp_6095;
    (_args_foron_fn_chpl2)->_1_rvfDerefTmp = tmp_chpl9;
    _args_vforon_fn_chpl2 = ((void*)(_args_foron_fn_chpl2));
    /*** wrapon_fn131 ***/ chpl_executeOn(&call_tmp_chpl14, INT32(196), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl2)), sizeof(chpl__class_localson_fn104_object), INT64(1227), INT32(2));
  }
  return;
}

/* ReplicatedDist.chpl:395 */
static void wrapon_fn_chpl58(_class_localson_fn_chpl58 c_chpl) {
  chpl____wide_ReplicatedDom_1_int64_t_F _2_rvfDerefTmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__EndCount_atomic_int64_int64_t _3_rvfDerefTmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__EndCount_atomic_int64_int64_t endcount_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _2_rvfDerefTmp_chpl = (c_chpl)->_2_rvfDerefTmp_chpl;
  _3_rvfDerefTmp_chpl = (c_chpl)->_3_rvfDerefTmp_chpl;
  on_fn_chpl58((c_chpl)->_1_rvfDerefTmp_chpl, _2_rvfDerefTmp_chpl, _3_rvfDerefTmp_chpl);
  endcount_chpl = (c_chpl)->_3_rvfDerefTmp_chpl;
  _downEndCount(endcount_chpl);
  return;
}

/* ReplicatedDist.chpl:395 */
static void on_fn_chpl58(int64_t localeIdx_chpl,
                         chpl____wide_ReplicatedDom_1_int64_t_F this_chpl6,
                         chpl____wide__EndCount_atomic_int64_int64_t _coforallCount_chpl) {
  chpl____wide_ReplicatedDom_1_int64_t_F rvfRerefTmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide__array_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T call_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T ret_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_LocReplicatedDom_1_int64_t_F wrap_call_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_LocReplicatedDom_1_int64_t_F coerce_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _domain_DefaultRectangularDom_1_int64_t_F _field_destructor_tmp__chpl;
  _domain_DefaultRectangularDom_1_int64_t_F tmp_chpl;
  chpl_localeID_t call_tmp_chpl2;
  chpl____wide_LocReplicatedDom_1_int64_t_F rvfDerefTmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect_chpl;
  _class_localson_fn116 _args_foron_fn_chpl = NULL;
  c_void_ptr _args_vforon_fn_chpl;
  chpl____wide__ref__wide__array_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T chpl_macro_tmp_6096;
  chpl____wide__ref__wide_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T chpl_macro_tmp_6097;
  chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_6098;
  chpl__class_localson_fn116_object chpl_macro_tmp_6099;
  rvfRerefTmp_chpl = this_chpl6;
  chpl_macro_tmp_6096.locale = (&rvfRerefTmp_chpl)->locale;
  chpl_macro_tmp_6096.addr = &(((&rvfRerefTmp_chpl)->addr)->localDoms_chpl);
  call_tmp_chpl = chpl_macro_tmp_6096;
  chpl_macro_tmp_6097.locale = (call_tmp_chpl).locale;
  chpl_macro_tmp_6097.addr = &(((call_tmp_chpl).addr)->_instance);
  chpl_gen_comm_get(((void*)(&ret_chpl)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_6097).locale), INT64(0), INT32(0)), (chpl_macro_tmp_6097).addr, sizeof(chpl____wide_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T), -1, COMMID(56), INT64(396), INT64(58));
  wrap_call_tmp_chpl = dsiAccess7(ret_chpl, localeIdx_chpl, UINT8(false));
  coerce_tmp_chpl = wrap_call_tmp_chpl;
  chpl_macro_tmp_6098.locale = (&coerce_tmp_chpl)->locale;
  chpl_macro_tmp_6098.addr = &(((&coerce_tmp_chpl)->addr)->domLocalRep_chpl);
  chpl_gen_comm_get(((void*)(&tmp_chpl)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_6098).locale), INT64(0), INT32(0)), (chpl_macro_tmp_6098).addr, sizeof(_domain_DefaultRectangularDom_1_int64_t_F), -1, COMMID(57), INT64(396), INT64(58));
  _field_destructor_tmp__chpl = tmp_chpl;
  chpl__autoDestroy5(&_field_destructor_tmp__chpl);
  call_tmp_chpl2 = (&wrap_call_tmp_chpl)->locale;
  rvfDerefTmp_chpl = wrap_call_tmp_chpl;
  isdirect_chpl = chpl_doDirectExecuteOn(&call_tmp_chpl2);
  if (isdirect_chpl) {
    on_fn142(rvfDerefTmp_chpl);
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn116)(&chpl_macro_tmp_6099));
    (_args_foron_fn_chpl)->_0_rvfDerefTmp = call_tmp_chpl2;
    (_args_foron_fn_chpl)->_1_rvfDerefTmp = rvfDerefTmp_chpl;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    /*** wrapon_fn121 ***/ chpl_executeOn(&call_tmp_chpl2, INT32(186), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), sizeof(chpl__class_localson_fn116_object), INT64(1227), INT32(2));
  }
  return;
}

/* ReplicatedDist.chpl:406 */
static ReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_ReplicatedDom_1_int64_t_F_chpl _construct_ReplicatedArr_chpl(BaseArr _arrAlias_chpl,
                                                                                                                                           int64_t pid_chpl,
                                                                                                                                           ReplicatedDom_1_int64_t_F_chpl dom_chpl,
                                                                                                                                           _ref__array_DefaultAssociativeArr_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t_T localArrs_chpl,
                                                                                                                                           ReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_ReplicatedDom_1_int64_t_F_chpl meme_chpl) {
  ReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_ReplicatedDom_1_int64_t_F_chpl this_chpl6 = NULL;
  BaseArr tmp_chpl = NULL;
  chpl____wide_ReplicatedDom_1_int64_t_F tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_ReplicatedDom_1_int64_t_F chpl_macro_tmp_6100;
  this_chpl6 = meme_chpl;
  tmp_chpl = &((this_chpl6)->super_chpl);
  _construct_BaseArr(_arrAlias_chpl, pid_chpl, tmp_chpl);
  chpl_macro_tmp_6100.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_6100.addr = dom_chpl;
  tmp_chpl2 = chpl_macro_tmp_6100;
  (this_chpl6)->dom_chpl = tmp_chpl2;
  (this_chpl6)->localArrs_chpl = *(localArrs_chpl);
  return this_chpl6;
}

/* ReplicatedDist.chpl:406 */
static ReplicatedArr_FCHGlobalNode_ReplicatedDom_1_int64_t_F_chpl _construct_ReplicatedArr_chpl2(BaseArr _arrAlias_chpl,
                                                                                                 int64_t pid_chpl,
                                                                                                 ReplicatedDom_1_int64_t_F_chpl dom_chpl,
                                                                                                 _ref__array_DefaultAssociativeArr_LocReplicatedArr_FCHGlobalNode_1_int64_t_F_int64_t_T localArrs_chpl,
                                                                                                 ReplicatedArr_FCHGlobalNode_ReplicatedDom_1_int64_t_F_chpl meme_chpl) {
  ReplicatedArr_FCHGlobalNode_ReplicatedDom_1_int64_t_F_chpl this_chpl6 = NULL;
  chpl____wide_ReplicatedDom_1_int64_t_F tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_ReplicatedDom_1_int64_t_F chpl_macro_tmp_6101;
  this_chpl6 = meme_chpl;
  _construct_BaseArr(_arrAlias_chpl, pid_chpl, &((this_chpl6)->super_chpl));
  chpl_macro_tmp_6101.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_6101.addr = dom_chpl;
  tmp_chpl = chpl_macro_tmp_6101;
  (this_chpl6)->dom_chpl = tmp_chpl;
  (this_chpl6)->localArrs_chpl = *(localArrs_chpl);
  return this_chpl6;
}

/* ReplicatedDist.chpl:406 */
static void chpl__auto_destroy_ReplicatedArr2(chpl____wide_ReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_ReplicatedDom_1_int64_t_F this_chpl6) {
  _array_DefaultAssociativeArr_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t_T _field_destructor_tmp__chpl;
  _array_DefaultAssociativeArr_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t_T tmp_chpl;
  chpl____wide_BaseArr _parent_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide__array_DefaultAssociativeArr_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t_T chpl_macro_tmp_6102;
  chpl____wide_BaseArr chpl_macro_tmp_6103;
  chpl_macro_tmp_6102.locale = (&this_chpl6)->locale;
  chpl_macro_tmp_6102.addr = &(((&this_chpl6)->addr)->localArrs_chpl);
  chpl_gen_comm_get(((void*)(&tmp_chpl)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_6102).locale), INT64(0), INT32(0)), (chpl_macro_tmp_6102).addr, sizeof(_array_DefaultAssociativeArr_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t_T), -1, COMMID(58), INT64(414), INT64(58));
  _field_destructor_tmp__chpl = tmp_chpl;
  chpl__autoDestroy19(&_field_destructor_tmp__chpl);
  chpl_macro_tmp_6103.locale = (&this_chpl6)->locale;
  chpl_macro_tmp_6103.addr = ((BaseArr)((&this_chpl6)->addr));
  _parent_destructor_tmp__chpl = chpl_macro_tmp_6103;
  deinit39(_parent_destructor_tmp__chpl);
  return;
}

/* ReplicatedDist.chpl:406 */
static void chpl__auto_destroy_ReplicatedArr(chpl____wide_ReplicatedArr_FCHGlobalNode_ReplicatedDom_1_int64_t_F this_chpl6) {
  _array_DefaultAssociativeArr_LocReplicatedArr_FCHGlobalNode_1_int64_t_F_int64_t_T _field_destructor_tmp__chpl;
  _array_DefaultAssociativeArr_LocReplicatedArr_FCHGlobalNode_1_int64_t_F_int64_t_T tmp_chpl;
  chpl____wide_BaseArr _parent_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide__array_DefaultAssociativeArr_LocReplicatedArr_FCHGlobalNode_1_int64_t_F_int64_t_T chpl_macro_tmp_6104;
  chpl____wide_BaseArr chpl_macro_tmp_6105;
  chpl_macro_tmp_6104.locale = (&this_chpl6)->locale;
  chpl_macro_tmp_6104.addr = &(((&this_chpl6)->addr)->localArrs_chpl);
  chpl_gen_comm_get(((void*)(&tmp_chpl)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_6104).locale), INT64(0), INT32(0)), (chpl_macro_tmp_6104).addr, sizeof(_array_DefaultAssociativeArr_LocReplicatedArr_FCHGlobalNode_1_int64_t_F_int64_t_T), -1, COMMID(59), INT64(414), INT64(58));
  _field_destructor_tmp__chpl = tmp_chpl;
  chpl__autoDestroy16(&_field_destructor_tmp__chpl);
  chpl_macro_tmp_6105.locale = (&this_chpl6)->locale;
  chpl_macro_tmp_6105.addr = ((BaseArr)((&this_chpl6)->addr));
  _parent_destructor_tmp__chpl = chpl_macro_tmp_6105;
  deinit39(_parent_destructor_tmp__chpl);
  return;
}

/* ReplicatedDist.chpl:421 */
static chpl____wide_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F chpl_myLocArr(ReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_ReplicatedDom_1_int64_t_F_chpl this_chpl6) {
  chpl_localeID_t _autoCopy_tmp__chpl;
  chpl____wide_locale call_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp_chpl2;
  _ref__wide__array_DefaultAssociativeArr_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t_T call_tmp_chpl3 = NULL;
  chpl____wide_DefaultAssociativeArr_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t_T ret_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F wrap_call_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _autoCopy_tmp__chpl = chpl_rt_buildLocaleID(chpl_nodeID, c_sublocid_any);
  call_tmp_chpl = chpl_localeID_to_locale(&_autoCopy_tmp__chpl);
  call_tmp_chpl2 = id(call_tmp_chpl);
  call_tmp_chpl3 = &((this_chpl6)->localArrs_chpl);
  ret_chpl = (call_tmp_chpl3)->_instance;
  wrap_call_tmp_chpl = dsiAccess5(ret_chpl, call_tmp_chpl2, UINT8(false));
  return wrap_call_tmp_chpl;
}

/* ReplicatedDist.chpl:421 */
static chpl____wide_LocReplicatedArr_FCHGlobalNode_1_int64_t_F chpl_myLocArr2(ReplicatedArr_FCHGlobalNode_ReplicatedDom_1_int64_t_F_chpl this_chpl6) {
  chpl_localeID_t _autoCopy_tmp__chpl;
  chpl____wide_locale call_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp_chpl2;
  _ref__wide__array_DefaultAssociativeArr_LocReplicatedArr_FCHGlobalNode_1_int64_t_F_int64_t_T call_tmp_chpl3 = NULL;
  chpl____wide_DefaultAssociativeArr_LocReplicatedArr_FCHGlobalNode_1_int64_t_F_int64_t_T ret_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_LocReplicatedArr_FCHGlobalNode_1_int64_t_F wrap_call_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _autoCopy_tmp__chpl = chpl_rt_buildLocaleID(chpl_nodeID, c_sublocid_any);
  call_tmp_chpl = chpl_localeID_to_locale(&_autoCopy_tmp__chpl);
  call_tmp_chpl2 = id(call_tmp_chpl);
  call_tmp_chpl3 = &((this_chpl6)->localArrs_chpl);
  ret_chpl = (call_tmp_chpl3)->_instance;
  wrap_call_tmp_chpl = dsiAccess6(ret_chpl, call_tmp_chpl2, UINT8(false));
  return wrap_call_tmp_chpl;
}

/* ReplicatedDist.chpl:432 */
static void chpl__auto_destroy_LocReplicatedArr2(chpl____wide_LocReplicatedArr_FCHGlobalNode_1_int64_t_F this_chpl6) {
  _array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t _field_destructor_tmp__chpl;
  _array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t tmp_chpl;
  chpl____wide__ref__wide__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t chpl_macro_tmp_6106;
  chpl_macro_tmp_6106.locale = (&this_chpl6)->locale;
  chpl_macro_tmp_6106.addr = &(((&this_chpl6)->addr)->arrLocalRep_chpl);
  chpl_gen_comm_get(((void*)(&tmp_chpl)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_6106).locale), INT64(0), INT32(0)), (chpl_macro_tmp_6106).addr, sizeof(_array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t), -1, COMMID(60), INT64(440), INT64(58));
  _field_destructor_tmp__chpl = tmp_chpl;
  chpl__autoDestroy23(&_field_destructor_tmp__chpl);
  return;
}

/* ReplicatedDist.chpl:432 */
static void chpl__auto_destroy_LocReplicatedArr(chpl____wide_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F this_chpl6) {
  _array_DefaultRectangularArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t _field_destructor_tmp__chpl;
  _array_DefaultRectangularArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t tmp_chpl;
  chpl____wide__ref__wide__array_DefaultRectangularArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t chpl_macro_tmp_6107;
  chpl_macro_tmp_6107.locale = (&this_chpl6)->locale;
  chpl_macro_tmp_6107.addr = &(((&this_chpl6)->addr)->arrLocalRep_chpl);
  chpl_gen_comm_get(((void*)(&tmp_chpl)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_6107).locale), INT64(0), INT32(0)), (chpl_macro_tmp_6107).addr, sizeof(_array_DefaultRectangularArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t), -1, COMMID(61), INT64(440), INT64(58));
  _field_destructor_tmp__chpl = tmp_chpl;
  chpl__autoDestroy21(&_field_destructor_tmp__chpl);
  return;
}

/* ReplicatedDist.chpl:432 */
static LocReplicatedArr_FCHGlobalNode_1_int64_t_F_chpl _construct_LocReplicatedArr_chpl2(chpl____wide_LocReplicatedDom_1_int64_t_F myDom_chpl,
                                                                                         _ref__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t arrLocalRep_chpl,
                                                                                         LocReplicatedArr_FCHGlobalNode_1_int64_t_F_chpl meme_chpl) {
  LocReplicatedArr_FCHGlobalNode_1_int64_t_F_chpl this_chpl6 = NULL;
  object tmp_chpl = NULL;
  this_chpl6 = meme_chpl;
  tmp_chpl = &((this_chpl6)->super_chpl);
  _construct_object(tmp_chpl);
  (this_chpl6)->myDom_chpl = myDom_chpl;
  (this_chpl6)->arrLocalRep_chpl = *(arrLocalRep_chpl);
  return this_chpl6;
}

/* ReplicatedDist.chpl:432 */
static LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_chpl _construct_LocReplicatedArr_chpl(chpl____wide_LocReplicatedDom_1_int64_t_F myDom_chpl,
                                                                                                                                   _ref__array_DefaultRectangularArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t arrLocalRep_chpl,
                                                                                                                                   LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_chpl meme_chpl) {
  LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_chpl this_chpl6 = NULL;
  object tmp_chpl = NULL;
  this_chpl6 = meme_chpl;
  tmp_chpl = &((this_chpl6)->super_chpl);
  _construct_object(tmp_chpl);
  (this_chpl6)->myDom_chpl = myDom_chpl;
  (this_chpl6)->arrLocalRep_chpl = *(arrLocalRep_chpl);
  return this_chpl6;
}

/* ReplicatedDist.chpl:449 */
static ReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_ReplicatedDom_1_int64_t_F_chpl ReplicatedArr_chpl(ReplicatedDom_1_int64_t_F_chpl dom_chpl) {
  ReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_ReplicatedDom_1_int64_t_F_chpl this_chpl6 = NULL;
  ReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_ReplicatedDom_1_int64_t_F_chpl this_chpl7 = NULL;
  c_void_ptr cast_tmp_chpl;
  chpl____wide_ReplicatedDom_1_int64_t_F tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _array_DefaultAssociativeArr_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t_T _init_class_tmp__chpl;
  chpl____wide_DefaultAssociativeArr_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t_T tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  BaseArr call_tmp_chpl = NULL;
  ReplicatedDom_1_int64_t_F_chpl wrap_arg_chpl = NULL;
  chpl____wide_ReplicatedDom_1_int64_t_F tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  Replicated_chpl coerce_tmp_chpl = NULL;
  chpl____wide_Replicated tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__domain_DefaultAssociativeDom_int64_t_T call_tmp_chpl2 = NULL;
  chpl___RuntimeTypeInfo21 call_tmp_chpl3;
  _ref__domain_DefaultAssociativeDom_int64_t_T i_dom_chpl = NULL;
  _domain_DefaultAssociativeDom_int64_t_T _runtime_type_tmp__chpl;
  _domain_DefaultAssociativeDom_int64_t_T tmp_chpl5;
  _array_DefaultAssociativeArr_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t_T ret_tmp_chpl;
  _ref__array_DefaultAssociativeArr_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t_T ret_to_arg_ref_tmp__chpl = NULL;
  _array_DefaultAssociativeArr_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t_T retarg_tmp_chpl;
  ReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_ReplicatedDom_1_int64_t_F_chpl wrap_call_tmp_chpl = NULL;
  chpl____wide__nilType chpl_macro_tmp_6108;
  chpl____wide_ReplicatedDom_1_int64_t_F chpl_macro_tmp_6109;
  chpl____wide__nilType chpl_macro_tmp_6110;
  chpl____wide_DefaultAssociativeArr_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t_T chpl_macro_tmp_6111;
  chpl____wide_ReplicatedDom_1_int64_t_F chpl_macro_tmp_6112;
  cast_tmp_chpl = chpl_here_alloc(sizeof(chpl_ReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_ReplicatedDom_1_int64_t_F_chpl_object), INT16(154));
  this_chpl7 = ((ReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_ReplicatedDom_1_int64_t_F_chpl)(cast_tmp_chpl));
  ((object)(this_chpl7))->chpl__cid = chpl__cid_ReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_ReplicatedDom_1_int64_t_F_chpl;
  chpl_macro_tmp_6108.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_6108.addr = nil;
  chpl_macro_tmp_6109.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_6109.addr = NULL;
  tmp_chpl = chpl_macro_tmp_6109;
  (this_chpl7)->dom_chpl = tmp_chpl;
  (&_init_class_tmp__chpl)->_pid = INT64(0);
  chpl_macro_tmp_6110.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_6110.addr = nil;
  chpl_macro_tmp_6111.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_6111.addr = NULL;
  tmp_chpl2 = chpl_macro_tmp_6111;
  (&_init_class_tmp__chpl)->_instance = tmp_chpl2;
  (&_init_class_tmp__chpl)->_unowned = UINT8(false);
  (this_chpl7)->localArrs_chpl = _init_class_tmp__chpl;
  call_tmp_chpl = ((BaseArr)(nil));
  wrap_arg_chpl = dom_chpl;
  chpl_macro_tmp_6112.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_6112.addr = dom_chpl;
  tmp_chpl3 = chpl_macro_tmp_6112;
  (this_chpl7)->dom_chpl = tmp_chpl3;
  tmp_chpl4 = (wrap_arg_chpl)->dist_chpl;
  coerce_tmp_chpl = (&tmp_chpl4)->addr;
  call_tmp_chpl2 = chpl__ensureDomainExpr4(&((coerce_tmp_chpl)->targetLocDom_chpl));
  i_dom_chpl = call_tmp_chpl2;
  call_tmp_chpl3 = chpl__buildArrayRuntimeType20(i_dom_chpl);
  tmp_chpl5 = (&call_tmp_chpl3)->dom;
  _runtime_type_tmp__chpl = tmp_chpl5;
  ret_to_arg_ref_tmp__chpl = &retarg_tmp_chpl;
  chpl__convertRuntimeTypeToValue9(&_runtime_type_tmp__chpl, ret_to_arg_ref_tmp__chpl);
  ret_tmp_chpl = retarg_tmp_chpl;
  (this_chpl7)->localArrs_chpl = ret_tmp_chpl;
  wrap_call_tmp_chpl = _construct_ReplicatedArr_chpl(call_tmp_chpl, INT64(-1), dom_chpl, &ret_tmp_chpl, this_chpl7);
  return wrap_call_tmp_chpl;
}

/* ReplicatedDist.chpl:449 */
static ReplicatedArr_FCHGlobalNode_ReplicatedDom_1_int64_t_F_chpl ReplicatedArr_chpl2(ReplicatedDom_1_int64_t_F_chpl dom_chpl) {
  ReplicatedArr_FCHGlobalNode_ReplicatedDom_1_int64_t_F_chpl this_chpl6 = NULL;
  ReplicatedArr_FCHGlobalNode_ReplicatedDom_1_int64_t_F_chpl this_chpl7 = NULL;
  c_void_ptr cast_tmp_chpl;
  chpl____wide_ReplicatedDom_1_int64_t_F tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _array_DefaultAssociativeArr_LocReplicatedArr_FCHGlobalNode_1_int64_t_F_int64_t_T _init_class_tmp__chpl;
  chpl____wide_DefaultAssociativeArr_LocReplicatedArr_FCHGlobalNode_1_int64_t_F_int64_t_T tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  BaseArr call_tmp_chpl = NULL;
  ReplicatedDom_1_int64_t_F_chpl wrap_arg_chpl = NULL;
  chpl____wide_ReplicatedDom_1_int64_t_F tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  Replicated_chpl coerce_tmp_chpl = NULL;
  chpl____wide_Replicated tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__domain_DefaultAssociativeDom_int64_t_T call_tmp_chpl2 = NULL;
  chpl___RuntimeTypeInfo19 call_tmp_chpl3;
  _ref__domain_DefaultAssociativeDom_int64_t_T i_dom_chpl = NULL;
  _domain_DefaultAssociativeDom_int64_t_T _runtime_type_tmp__chpl;
  _domain_DefaultAssociativeDom_int64_t_T tmp_chpl5;
  _array_DefaultAssociativeArr_LocReplicatedArr_FCHGlobalNode_1_int64_t_F_int64_t_T ret_tmp_chpl;
  _ref__array_DefaultAssociativeArr_LocReplicatedArr_FCHGlobalNode_1_int64_t_F_int64_t_T ret_to_arg_ref_tmp__chpl = NULL;
  _array_DefaultAssociativeArr_LocReplicatedArr_FCHGlobalNode_1_int64_t_F_int64_t_T retarg_tmp_chpl;
  ReplicatedArr_FCHGlobalNode_ReplicatedDom_1_int64_t_F_chpl wrap_call_tmp_chpl = NULL;
  chpl____wide__nilType chpl_macro_tmp_6113;
  chpl____wide_ReplicatedDom_1_int64_t_F chpl_macro_tmp_6114;
  chpl____wide__nilType chpl_macro_tmp_6115;
  chpl____wide_DefaultAssociativeArr_LocReplicatedArr_FCHGlobalNode_1_int64_t_F_int64_t_T chpl_macro_tmp_6116;
  chpl____wide_ReplicatedDom_1_int64_t_F chpl_macro_tmp_6117;
  cast_tmp_chpl = chpl_here_alloc(sizeof(chpl_ReplicatedArr_FCHGlobalNode_ReplicatedDom_1_int64_t_F_chpl_object), INT16(164));
  this_chpl7 = ((ReplicatedArr_FCHGlobalNode_ReplicatedDom_1_int64_t_F_chpl)(cast_tmp_chpl));
  ((object)(this_chpl7))->chpl__cid = chpl__cid_ReplicatedArr_FCHGlobalNode_ReplicatedDom_1_int64_t_F_chpl;
  chpl_macro_tmp_6113.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_6113.addr = nil;
  chpl_macro_tmp_6114.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_6114.addr = NULL;
  tmp_chpl = chpl_macro_tmp_6114;
  (this_chpl7)->dom_chpl = tmp_chpl;
  (&_init_class_tmp__chpl)->_pid = INT64(0);
  chpl_macro_tmp_6115.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_6115.addr = nil;
  chpl_macro_tmp_6116.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_6116.addr = NULL;
  tmp_chpl2 = chpl_macro_tmp_6116;
  (&_init_class_tmp__chpl)->_instance = tmp_chpl2;
  (&_init_class_tmp__chpl)->_unowned = UINT8(false);
  (this_chpl7)->localArrs_chpl = _init_class_tmp__chpl;
  call_tmp_chpl = ((BaseArr)(nil));
  wrap_arg_chpl = dom_chpl;
  chpl_macro_tmp_6117.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_6117.addr = dom_chpl;
  tmp_chpl3 = chpl_macro_tmp_6117;
  (this_chpl7)->dom_chpl = tmp_chpl3;
  tmp_chpl4 = (wrap_arg_chpl)->dist_chpl;
  coerce_tmp_chpl = (&tmp_chpl4)->addr;
  call_tmp_chpl2 = chpl__ensureDomainExpr4(&((coerce_tmp_chpl)->targetLocDom_chpl));
  i_dom_chpl = call_tmp_chpl2;
  call_tmp_chpl3 = chpl__buildArrayRuntimeType18(i_dom_chpl);
  tmp_chpl5 = (&call_tmp_chpl3)->dom;
  _runtime_type_tmp__chpl = tmp_chpl5;
  ret_to_arg_ref_tmp__chpl = &retarg_tmp_chpl;
  chpl__convertRuntimeTypeToValue11(&_runtime_type_tmp__chpl, ret_to_arg_ref_tmp__chpl);
  ret_tmp_chpl = retarg_tmp_chpl;
  (this_chpl7)->localArrs_chpl = ret_tmp_chpl;
  wrap_call_tmp_chpl = _construct_ReplicatedArr_chpl2(call_tmp_chpl, INT64(-1), dom_chpl, &ret_tmp_chpl, this_chpl7);
  return wrap_call_tmp_chpl;
}

/* ReplicatedDist.chpl:466 */
static chpl____wide_ReplicatedDom_1_int64_t_F dsiGetBaseDom_chpl4(chpl____wide_ReplicatedArr_FCHGlobalNode_ReplicatedDom_1_int64_t_F this_chpl6) {
  chpl____wide_ReplicatedDom_1_int64_t_F ret_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide_ReplicatedDom_1_int64_t_F chpl_macro_tmp_6118;
  chpl_macro_tmp_6118.locale = (&this_chpl6)->locale;
  chpl_macro_tmp_6118.addr = &(((&this_chpl6)->addr)->dom_chpl);
  chpl_gen_comm_get(((void*)(&ret_chpl)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_6118).locale), INT64(0), INT32(0)), (chpl_macro_tmp_6118).addr, sizeof(chpl____wide_ReplicatedDom_1_int64_t_F), -1, COMMID(62), INT64(466), INT64(58));
  return ret_chpl;
}

/* ReplicatedDist.chpl:466 */
static chpl____wide_ReplicatedDom_1_int64_t_F dsiGetBaseDom_chpl3(chpl____wide_ReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_ReplicatedDom_1_int64_t_F this_chpl6) {
  chpl____wide_ReplicatedDom_1_int64_t_F ret_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide_ReplicatedDom_1_int64_t_F chpl_macro_tmp_6119;
  chpl_macro_tmp_6119.locale = (&this_chpl6)->locale;
  chpl_macro_tmp_6119.addr = &(((&this_chpl6)->addr)->dom_chpl);
  chpl_gen_comm_get(((void*)(&ret_chpl)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_6119).locale), INT64(0), INT32(0)), (chpl_macro_tmp_6119).addr, sizeof(chpl____wide_ReplicatedDom_1_int64_t_F), -1, COMMID(63), INT64(466), INT64(58));
  return ret_chpl;
}

/* ReplicatedDist.chpl:473 */
static void dsiGetPrivatizeData_chpl8(ReplicatedArr_FCHGlobalNode_ReplicatedDom_1_int64_t_F_chpl this_chpl6,
                                      _ref__tuple_2_int64_t__array_DefaultAssociativeArr_LocReplicatedArr_FCHGlobalNode_1_int64_t_F_int64_t_T _retArg_chpl) {
  ReplicatedDom_1_int64_t_F_chpl coerce_tmp_chpl = NULL;
  chpl____wide_ReplicatedDom_1_int64_t_F tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  BaseDom coerce_tmp_chpl2 = NULL;
  _ref__wide__array_DefaultAssociativeArr_LocReplicatedArr_FCHGlobalNode_1_int64_t_F_int64_t_T call_tmp_chpl = NULL;
  int64_t coerce_tmp_chpl3;
  _ref__array_DefaultAssociativeArr_LocReplicatedArr_FCHGlobalNode_1_int64_t_F_int64_t_T i__e2_x_chpl = NULL;
  _array_DefaultAssociativeArr_LocReplicatedArr_FCHGlobalNode_1_int64_t_F_int64_t_T this_x2_chpl;
  _array_DefaultAssociativeArr_LocReplicatedArr_FCHGlobalNode_1_int64_t_F_int64_t_T elt_x2_chpl;
  tmp_chpl = (this_chpl6)->dom_chpl;
  coerce_tmp_chpl = (&tmp_chpl)->addr;
  coerce_tmp_chpl2 = ((BaseDom)(coerce_tmp_chpl));
  call_tmp_chpl = &((this_chpl6)->localArrs_chpl);
  coerce_tmp_chpl3 = (coerce_tmp_chpl2)->pid;
  i__e2_x_chpl = call_tmp_chpl;
  this_x2_chpl = *(i__e2_x_chpl);
  elt_x2_chpl = chpl__autoCopy3(&this_x2_chpl);
  (_retArg_chpl)->x1 = coerce_tmp_chpl3;
  (_retArg_chpl)->x2 = elt_x2_chpl;
  return;
}

/* ReplicatedDist.chpl:473 */
static void dsiGetPrivatizeData_chpl7(ReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_ReplicatedDom_1_int64_t_F_chpl this_chpl6,
                                      _ref__tuple_2_int64_t__array_DefaultAssociativeArr_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t_T _retArg_chpl) {
  ReplicatedDom_1_int64_t_F_chpl coerce_tmp_chpl = NULL;
  chpl____wide_ReplicatedDom_1_int64_t_F tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  BaseDom coerce_tmp_chpl2 = NULL;
  _ref__wide__array_DefaultAssociativeArr_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t_T call_tmp_chpl = NULL;
  int64_t coerce_tmp_chpl3;
  _ref__array_DefaultAssociativeArr_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t_T i__e2_x_chpl = NULL;
  _array_DefaultAssociativeArr_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t_T this_x2_chpl;
  _array_DefaultAssociativeArr_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t_T elt_x2_chpl;
  tmp_chpl = (this_chpl6)->dom_chpl;
  coerce_tmp_chpl = (&tmp_chpl)->addr;
  coerce_tmp_chpl2 = ((BaseDom)(coerce_tmp_chpl));
  call_tmp_chpl = &((this_chpl6)->localArrs_chpl);
  coerce_tmp_chpl3 = (coerce_tmp_chpl2)->pid;
  i__e2_x_chpl = call_tmp_chpl;
  this_x2_chpl = *(i__e2_x_chpl);
  elt_x2_chpl = chpl__autoCopy4(&this_x2_chpl);
  (_retArg_chpl)->x1 = coerce_tmp_chpl3;
  (_retArg_chpl)->x2 = elt_x2_chpl;
  return;
}

/* ReplicatedDist.chpl:481 */
static ReplicatedArr_FCHGlobalNode_ReplicatedDom_1_int64_t_F_chpl dsiPrivatize_chpl7(chpl____wide_ReplicatedArr_FCHGlobalNode_ReplicatedDom_1_int64_t_F this_chpl6,
                                                                                     _ref__tuple_2_int64_t__ref__array_DefaultAssociativeArr_LocReplicatedArr_FCHGlobalNode_1_int64_t_F_int64_t_T privatizeData_chpl) {
  int64_t local_dataParMinGranularity_chpl;
  chpl_bool local_dataParIgnoreRunningTasks_chpl;
  int32_t local_c_sublocid_any_chpl;
  int64_t local_dataParTasksPerLocale_chpl;
  ReplicatedDom_1_int64_t_F_chpl call_tmp_chpl = NULL;
  ReplicatedArr_FCHGlobalNode_ReplicatedDom_1_int64_t_F_chpl result_chpl = NULL;
  _ref__wide__array_DefaultAssociativeArr_LocReplicatedArr_FCHGlobalNode_1_int64_t_F_int64_t_T call_tmp_chpl2 = NULL;
  _array_DefaultAssociativeArr_LocReplicatedArr_FCHGlobalNode_1_int64_t_F_int64_t_T call_tmp_chpl3;
  _array_DefaultAssociativeArr_LocReplicatedArr_FCHGlobalNode_1_int64_t_F_int64_t_T tmp_chpl;
  chpl____wide_DefaultAssociativeArr_LocReplicatedArr_FCHGlobalNode_1_int64_t_F_int64_t_T ret_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp_chpl5;
  chpl____wide_object tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultAssociativeArr_LocReplicatedArr_FCHGlobalNode_1_int64_t_F_int64_t_T ret_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultAssociativeArr_LocReplicatedArr_FCHGlobalNode_1_int64_t_F_int64_t_T ret_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp_chpl7 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp_chpl8;
  _ref__wide__array_DefaultAssociativeArr_LocReplicatedArr_FCHGlobalNode_1_int64_t_F_int64_t_T tmp_chpl3 = NULL;
  _ref__wide__array_DefaultAssociativeArr_LocReplicatedArr_FCHGlobalNode_1_int64_t_F_int64_t_T tmp_chpl4 = NULL;
  chpl_bool ret_chpl4;
  int64_t call_tmp_chpl9;
  chpl_bool call_tmp_chpl10;
  int64_t call_tmp_chpl11;
  _tuple_2_star__ref__array_DefaultAssociativeArr_LocReplicatedArr_FCHGlobalNode_1_int64_t_F_int64_t_T chpl__iterLF;
  _ref__array_DefaultAssociativeArr_LocReplicatedArr_FCHGlobalNode_1_int64_t_F_int64_t_T i__e1_x_chpl = NULL;
  _array_DefaultAssociativeArr_LocReplicatedArr_FCHGlobalNode_1_int64_t_F_int64_t_T this_x1_chpl;
  _array_DefaultAssociativeArr_LocReplicatedArr_FCHGlobalNode_1_int64_t_F_int64_t_T call_tmp_chpl12;
  chpl____wide_DefaultAssociativeArr_LocReplicatedArr_FCHGlobalNode_1_int64_t_F_int64_t_T ret_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultAssociativeArr_LocReplicatedArr_FCHGlobalNode_1_int64_t_F_int64_t_T this_chpl7 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultAssociativeDom_int64_t_T coerce_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultAssociativeDom_int64_t_T _ic__F0_this_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t ret_chpl6;
  chpl_bool call_tmp_chpl13;
  chpl____wide_locale call_tmp_chpl14 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t _autoCopy_tmp__chpl;
  chpl____wide_locale call_tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t tmp_chpl5;
  int64_t numIndices_chpl;
  chpl____wide_DefaultAssociativeDom_int64_t_T this_chpl8 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t coerce_tmp_chpl2;
  int64_t tmp_chpl6;
  int64_t call_tmp_chpl16;
  chpl_bool call_tmp_chpl17;
  range_int64_t_bounded_F ret_tmp_chpl;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp__chpl = NULL;
  _array_DefaultAssociativeArr_LocReplicatedArr_FCHGlobalNode_1_int64_t_F_int64_t_T call_tmp_chpl18;
  chpl____wide_DefaultAssociativeArr_LocReplicatedArr_FCHGlobalNode_1_int64_t_F_int64_t_T ret_chpl7 = {CHPL_LOCALEID_T_INIT, NULL};
  _array_DefaultAssociativeArr_LocReplicatedArr_FCHGlobalNode_1_int64_t_F_int64_t_T call_tmp_chpl19;
  chpl____wide_DefaultAssociativeArr_LocReplicatedArr_FCHGlobalNode_1_int64_t_F_int64_t_T ret_chpl8 = {CHPL_LOCALEID_T_INIT, NULL};
  _ic_these_DefaultAssociativeArr_LocReplicatedArr_FCHGlobalNode_1_int64_t_F_int64_t_T2 _ic__chpl = NULL;
  c_void_ptr cast_tmp_chpl;
  _tuple_2_range_int64_t_bounded_F_DefaultAssociativeDom_int64_t_T tmp_chpl7;
  _ic_these_DefaultAssociativeArr_LocReplicatedArr_FCHGlobalNode_1_int64_t_F_int64_t_T2 _ic__chpl2 = NULL;
  c_void_ptr cast_tmp_chpl2;
  _tuple_2_range_int64_t_bounded_F_DefaultAssociativeDom_int64_t_T tmp_chpl8;
  chpl____wide__ref__wide_LocReplicatedArr_FCHGlobalNode_1_int64_t_F tmp_chpl9 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide_LocReplicatedArr_FCHGlobalNode_1_int64_t_F tmp_chpl10 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_LocReplicatedArr_FCHGlobalNode_1_int64_t_F coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t tmp_chpl11;
  c_void_ptr call_tmp_chpl20;
  c_void_ptr call_tmp_chpl21;
  range_int64_t_bounded_F tmpIter_chpl;
  range_int64_t_boundedLow_F ret_tmp_chpl2;
  _ref_range_int64_t_boundedLow_F ret_to_arg_ref_tmp__chpl2 = NULL;
  range_int64_t_bounded_F ret_tmp_chpl3;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp__chpl3 = NULL;
  chpl___EndCount_atomic_int64_int64_t _coforallCount_chpl = NULL;
  chpl___EndCount_atomic_int64_int64_t this_chpl9 = NULL;
  c_void_ptr cast_tmp_chpl3;
  atomic_int64 _init_class_tmp__chpl;
  atomic_int64 this_chpl10;
  atomic_int_least64_t ret_chpl9;
  atomic_int_least64_t type_tmp_chpl;
  _ref_atomic_int_least64_t _ref_tmp__chpl = NULL;
  atomic_int64 ret_tmp_chpl4;
  _ref_atomic_int64 ret_to_arg_ref_tmp__chpl4 = NULL;
  c_void_ptr call_tmp_chpl22;
  chpl___EndCount_atomic_int64_int64_t wrap_call_tmp_chpl = NULL;
  int64_t numTasks_chpl;
  _ref_range_int64_t_bounded_F _ref_tmp__chpl2 = NULL;
  int64_t call_tmp_chpl23;
  chpl____wide__ref_range_int64_t_bounded_F tmp_chpl12 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F _ic__F0_this_chpl2;
  int64_t numChunks_captemp_chpl;
  int64_t i_chpl;
  int64_t ret_chpl10;
  int64_t end_chpl;
  int64_t ret_chpl11;
  chpl____wide_DefaultAssociativeDom_int64_t_T this_chpl11 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localscoforall_fn7 _args_forcoforall_fn_chpl = NULL;
  _ref__tuple_2_star__ref__array_DefaultAssociativeArr_LocReplicatedArr_FCHGlobalNode_1_int64_t_F_int64_t_T tmp_chpl13 = NULL;
  c_void_ptr _args_vforcoforall_fn_chpl;
  int64_t _taskListNodecoforall_fn_chpl;
  _ref_atomic_int64 _field_destructor_tmp__chpl = NULL;
  _ref_atomic_int_least64_t call_tmp_chpl24 = NULL;
  chpl_localeID_t call_tmp_chpl25;
  chpl___EndCount_atomic_int64_int64_t rvfDerefTmp_chpl = NULL;
  chpl_bool isdirect_chpl;
  chpl____wide__EndCount_atomic_int64_int64_t tmp_chpl14 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn104 _args_foron_fn_chpl = NULL;
  chpl____wide__EndCount_atomic_int64_int64_t tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  chpl____wide_object chpl_macro_tmp_6120;
  chpl____wide__nilType chpl_macro_tmp_6121;
  chpl____wide_object chpl_macro_tmp_6122;
  chpl____wide_object chpl_macro_tmp_6123;
  chpl____wide_object chpl_macro_tmp_6124;
  chpl____wide__ref__wide_DefaultAssociativeDom_int64_t_T chpl_macro_tmp_6125;
  chpl____wide__ref_int64_t chpl_macro_tmp_6126;
  chpl____wide__ref_int64_t chpl_macro_tmp_6127;
  chpl____wide__ref_range_int64_t_bounded_F chpl_macro_tmp_6128;
  chpl__class_localscoforall_fn7_object chpl_macro_tmp_6129;
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_6130;
  chpl__class_localson_fn104_object chpl_macro_tmp_6131;
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_6132;
  local_dataParMinGranularity_chpl = dataParMinGranularity;
  local_dataParIgnoreRunningTasks_chpl = dataParIgnoreRunningTasks;
  local_c_sublocid_any_chpl = c_sublocid_any;
  local_dataParTasksPerLocale_chpl = dataParTasksPerLocale;
  call_tmp_chpl = chpl_getPrivatizedCopy7((privatizeData_chpl)->x1);
  result_chpl = ReplicatedArr_chpl2(call_tmp_chpl);
  call_tmp_chpl2 = &((result_chpl)->localArrs_chpl);
  tmp_chpl = (privatizeData_chpl)->x2;
  call_tmp_chpl3 = tmp_chpl;
  ret_chpl = (&call_tmp_chpl3)->_instance;
  chpl_macro_tmp_6120.locale = (&ret_chpl)->locale;
  chpl_macro_tmp_6120.addr = ((object)((&ret_chpl)->addr));
  call_tmp_chpl4 = chpl_macro_tmp_6120;
  chpl_macro_tmp_6121.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_6121.addr = nil;
  chpl_macro_tmp_6122.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_6122.addr = NULL;
  tmp_chpl2 = chpl_macro_tmp_6122;
  call_tmp_chpl5 = (! (((&call_tmp_chpl4)->addr != (&tmp_chpl2)->addr) || ((!(! (&call_tmp_chpl4)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp_chpl4)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&tmp_chpl2)->locale), INT64(0), INT32(0))))));
  if (call_tmp_chpl5) {
    goto _end__ASSIGN__chpl;
  }
  ret_chpl2 = (call_tmp_chpl2)->_instance;
  ret_chpl3 = (&call_tmp_chpl3)->_instance;
  chpl_macro_tmp_6123.locale = (&ret_chpl2)->locale;
  chpl_macro_tmp_6123.addr = ((object)((&ret_chpl2)->addr));
  call_tmp_chpl6 = chpl_macro_tmp_6123;
  chpl_macro_tmp_6124.locale = (&ret_chpl3)->locale;
  chpl_macro_tmp_6124.addr = ((object)((&ret_chpl3)->addr));
  call_tmp_chpl7 = chpl_macro_tmp_6124;
  call_tmp_chpl8 = (! (((&call_tmp_chpl6)->addr != (&call_tmp_chpl7)->addr) || ((!(! (&call_tmp_chpl6)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp_chpl6)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&call_tmp_chpl7)->locale), INT64(0), INT32(0))))));
  if (call_tmp_chpl8) {
    goto _end__ASSIGN__chpl;
  }
  tmp_chpl3 = call_tmp_chpl2;
  tmp_chpl4 = &call_tmp_chpl3;
  call_tmp_chpl9 = size3(tmp_chpl3);
  call_tmp_chpl10 = (call_tmp_chpl9 == INT64(0));
  if (call_tmp_chpl10) {
    call_tmp_chpl11 = size3(tmp_chpl4);
    ret_chpl4 = (call_tmp_chpl11 == INT64(0));
    goto _end__if_fn713_chpl;
  } else {
    ret_chpl4 = UINT8(false);
    goto _end__if_fn713_chpl;
  }
  _end__if_fn713_chpl:;
  if (ret_chpl4) {
    goto _end__ASSIGN__chpl;
  }
  i__e1_x_chpl = call_tmp_chpl2;
  this_x1_chpl = *(i__e1_x_chpl);
  *(chpl__iterLF + INT64(0)) = this_x1_chpl;
  *(chpl__iterLF + INT64(1)) = call_tmp_chpl3;
  call_tmp_chpl12 = *(chpl__iterLF + INT64(0));
  ret_chpl5 = (&call_tmp_chpl12)->_instance;
  this_chpl7 = ret_chpl5;
  chpl_macro_tmp_6125.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_6125.addr = &(((&this_chpl7)->addr)->dom);
  chpl_gen_comm_get(((void*)(&coerce_tmp_chpl)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_6125).locale), INT64(0), INT32(0)), (chpl_macro_tmp_6125).addr, sizeof(chpl____wide_DefaultAssociativeDom_int64_t_T), -1, COMMID(64), INT64(486), INT64(58));
  _ic__F0_this_chpl = coerce_tmp_chpl;
  call_tmp_chpl13 = (local_dataParTasksPerLocale_chpl == INT64(0));
  if (call_tmp_chpl13) {
    _autoCopy_tmp__chpl = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any_chpl);
    call_tmp_chpl15 = chpl_localeID_to_locale(&_autoCopy_tmp__chpl);
    call_tmp_chpl14 = call_tmp_chpl15;
    chpl_macro_tmp_6126.locale = (&call_tmp_chpl14)->locale;
    chpl_macro_tmp_6126.addr = &(((&call_tmp_chpl14)->addr)->maxTaskPar);
    chpl_gen_comm_get(((void*)(&tmp_chpl5)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_6126).locale), INT64(0), INT32(0)), (chpl_macro_tmp_6126).addr, sizeof(int64_t), -1, COMMID(65), INT64(486), INT64(58));
    ret_chpl6 = tmp_chpl5;
    goto _end__if_fn137_chpl;
  } else {
    ret_chpl6 = local_dataParTasksPerLocale_chpl;
    goto _end__if_fn137_chpl;
  }
  _end__if_fn137_chpl:;
  this_chpl8 = coerce_tmp_chpl;
  chpl_macro_tmp_6127.locale = (&this_chpl8)->locale;
  chpl_macro_tmp_6127.addr = &(((&this_chpl8)->addr)->tableSize);
  chpl_gen_comm_get(((void*)(&tmp_chpl6)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_6127).locale), INT64(0), INT32(0)), (chpl_macro_tmp_6127).addr, sizeof(int64_t), -1, COMMID(66), INT64(486), INT64(58));
  coerce_tmp_chpl2 = tmp_chpl6;
  numIndices_chpl = coerce_tmp_chpl2;
  call_tmp_chpl16 = _computeNumChunks_chpl(ret_chpl6, local_dataParIgnoreRunningTasks_chpl, local_dataParMinGranularity_chpl, coerce_tmp_chpl2);
  call_tmp_chpl17 = (call_tmp_chpl16 == INT64(1));
  if (call_tmp_chpl17) {
    ret_to_arg_ref_tmp__chpl = &ret_tmp_chpl;
    chpl_build_bounded_range(INT64(0), ((int64_t)((coerce_tmp_chpl2 - INT64(1)))), ret_to_arg_ref_tmp__chpl);
    call_tmp_chpl18 = *(chpl__iterLF + INT64(0));
    ret_chpl7 = (&call_tmp_chpl18)->_instance;
    call_tmp_chpl19 = *(chpl__iterLF + INT64(1));
    ret_chpl8 = (&call_tmp_chpl19)->_instance;
    cast_tmp_chpl = chpl_here_alloc(sizeof(chpl__ic_these_DefaultAssociativeArr_LocReplicatedArr_FCHGlobalNode_1_int64_t_F_int64_t_T2_object), INT16(167));
    _ic__chpl = ((_ic_these_DefaultAssociativeArr_LocReplicatedArr_FCHGlobalNode_1_int64_t_F_int64_t_T2)(cast_tmp_chpl));
    ((object)(_ic__chpl))->chpl__cid = chpl__cid__ic_these_DefaultAssociativeArr_LocReplicatedArr_FCHGlobalNode_1_int64_t_F_int64_t_T2;
    (_ic__chpl)->more = INT64(1);
    (_ic__chpl)->F0_this = ret_chpl7;
    (&tmp_chpl7)->x1 = ret_tmp_chpl;
    (&tmp_chpl7)->x2 = coerce_tmp_chpl;
    (_ic__chpl)->F1_followThis = tmp_chpl7;
    cast_tmp_chpl2 = chpl_here_alloc(sizeof(chpl__ic_these_DefaultAssociativeArr_LocReplicatedArr_FCHGlobalNode_1_int64_t_F_int64_t_T2_object), INT16(167));
    _ic__chpl2 = ((_ic_these_DefaultAssociativeArr_LocReplicatedArr_FCHGlobalNode_1_int64_t_F_int64_t_T2)(cast_tmp_chpl2));
    ((object)(_ic__chpl2))->chpl__cid = chpl__cid__ic_these_DefaultAssociativeArr_LocReplicatedArr_FCHGlobalNode_1_int64_t_F_int64_t_T2;
    (_ic__chpl2)->more = INT64(1);
    (_ic__chpl2)->F0_this = ret_chpl8;
    (&tmp_chpl8)->x1 = ret_tmp_chpl;
    (&tmp_chpl8)->x2 = coerce_tmp_chpl;
    (_ic__chpl2)->F1_followThis = tmp_chpl8;
    advance6(_ic__chpl);
    advance6(_ic__chpl2);
    for (; (tmp_chpl11 = (_ic__chpl)->more,tmp_chpl11); ) {
      tmp_chpl9 = (_ic__chpl2)->value;
      tmp_chpl10 = (_ic__chpl)->value;
      chpl_gen_comm_get(((void*)(&coerce_tmp_chpl3)), chpl_nodeFromLocaleID(&((tmp_chpl9).locale), INT64(0), INT32(0)), (tmp_chpl9).addr, sizeof(chpl____wide_LocReplicatedArr_FCHGlobalNode_1_int64_t_F), -1, COMMID(67), INT64(486), INT64(58));
      chpl_gen_comm_put(((void*)(&coerce_tmp_chpl3)), chpl_nodeFromLocaleID(&((tmp_chpl10).locale), INT64(0), INT32(0)), (tmp_chpl10).addr, sizeof(chpl____wide_LocReplicatedArr_FCHGlobalNode_1_int64_t_F), -1, COMMID(68), INT64(486), INT64(58));
      advance6(_ic__chpl);
      advance6(_ic__chpl2);
    }
    call_tmp_chpl20 = ((void*)(_ic__chpl));
    chpl_here_free(call_tmp_chpl20);
    call_tmp_chpl21 = ((void*)(_ic__chpl2));
    chpl_here_free(call_tmp_chpl21);
  } else {
    ret_to_arg_ref_tmp__chpl2 = &ret_tmp_chpl2;
    chpl_build_low_bounded_range(INT64(0), ret_to_arg_ref_tmp__chpl2);
    ret_to_arg_ref_tmp__chpl3 = &ret_tmp_chpl3;
    chpl___POUND_(&ret_tmp_chpl2, call_tmp_chpl16, ret_to_arg_ref_tmp__chpl3);
    tmpIter_chpl = ret_tmp_chpl3;
    cast_tmp_chpl3 = chpl_here_alloc(sizeof(chpl_chpl___EndCount_atomic_int64_int64_t_object), INT16(2));
    this_chpl9 = ((chpl___EndCount_atomic_int64_int64_t)(cast_tmp_chpl3));
    ((object)(this_chpl9))->chpl__cid = chpl__cid_chpl___EndCount_atomic_int64_int64_t;
    (this_chpl9)->i = _init_class_tmp__chpl;
    (this_chpl9)->taskCnt = INT64(0);
    (this_chpl9)->taskList = NULL;
    ret_chpl9 = type_tmp_chpl;
    _ref_tmp__chpl = &ret_chpl9;
    atomic_init_int_least64_t(_ref_tmp__chpl, INT64(0));
    (&this_chpl10)->_v = ret_chpl9;
    ret_to_arg_ref_tmp__chpl4 = &ret_tmp_chpl4;
    _construct_atomic_int64(ret_chpl9, &this_chpl10, ret_to_arg_ref_tmp__chpl4);
    (this_chpl9)->i = ret_tmp_chpl4;
    (this_chpl9)->taskCnt = INT64(0);
    call_tmp_chpl22 = ((c_void_ptr)(nil));
    (this_chpl9)->taskList = call_tmp_chpl22;
    wrap_call_tmp_chpl = _construct__EndCount(&ret_tmp_chpl4, INT64(0), call_tmp_chpl22, this_chpl9);
    _coforallCount_chpl = wrap_call_tmp_chpl;
    _ref_tmp__chpl2 = &tmpIter_chpl;
    chpl_macro_tmp_6128.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_6128.addr = _ref_tmp__chpl2;
    tmp_chpl12 = chpl_macro_tmp_6128;
    call_tmp_chpl23 = length2(tmp_chpl12);
    numTasks_chpl = call_tmp_chpl23;
    _upEndCount3(_coforallCount_chpl, call_tmp_chpl23);
    _ic__F0_this_chpl2 = tmpIter_chpl;
    numChunks_captemp_chpl = call_tmp_chpl16;
    ret_chpl10 = (&_ic__F0_this_chpl2)->_low;
    ret_chpl11 = (&_ic__F0_this_chpl2)->_high;
    end_chpl = ret_chpl11;
    for (i_chpl = ret_chpl10; ((i_chpl <= end_chpl)); i_chpl += INT64(1)) {
      this_chpl11 = _ic__F0_this_chpl;
      _args_forcoforall_fn_chpl = ((_class_localscoforall_fn7)(&chpl_macro_tmp_6129));
      (_args_forcoforall_fn_chpl)->_0_numChunks_captemp = numChunks_captemp_chpl;
      (_args_forcoforall_fn_chpl)->_1_numIndices = numIndices_chpl;
      (_args_forcoforall_fn_chpl)->_2__yieldedIndex = i_chpl;
      (_args_forcoforall_fn_chpl)->_3_this = this_chpl11;
      (_args_forcoforall_fn_chpl)->_4__coforallCount = _coforallCount_chpl;
      tmp_chpl13 = &chpl__iterLF;
      (_args_forcoforall_fn_chpl)->_5_tmp = tmp_chpl13;
      _args_vforcoforall_fn_chpl = ((void*)(_args_forcoforall_fn_chpl));
      _taskListNodecoforall_fn_chpl = chpl_nodeID;
      /*** wrapcoforall_fn3 ***/ chpl_taskListAddCoStmt(INT32(-2), INT64(132), ((chpl_task_bundle_p)(_args_vforcoforall_fn_chpl)), sizeof(chpl__class_localscoforall_fn7_object), &((_coforallCount_chpl)->taskList), _taskListNodecoforall_fn_chpl, INT64(3493), INT32(28));
    }
    _waitEndCount3(_coforallCount_chpl, numTasks_chpl);
    _field_destructor_tmp__chpl = &((_coforallCount_chpl)->i);
    call_tmp_chpl24 = &((_field_destructor_tmp__chpl)->_v);
    atomic_destroy_int_least64_t(call_tmp_chpl24);
    call_tmp_chpl25 = chpl_gen_getLocaleID();
    rvfDerefTmp_chpl = _coforallCount_chpl;
    isdirect_chpl = chpl_doDirectExecuteOn(&call_tmp_chpl25);
    if (isdirect_chpl) {
      chpl_macro_tmp_6130.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_6130.addr = rvfDerefTmp_chpl;
      tmp_chpl14 = chpl_macro_tmp_6130;
      on_fn123(tmp_chpl14);
    } else {
      _args_foron_fn_chpl = ((_class_localson_fn104)(&chpl_macro_tmp_6131));
      (_args_foron_fn_chpl)->_0_rvfDerefTmp = call_tmp_chpl25;
      chpl_macro_tmp_6132.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_6132.addr = rvfDerefTmp_chpl;
      tmp_chpl15 = chpl_macro_tmp_6132;
      (_args_foron_fn_chpl)->_1_rvfDerefTmp = tmp_chpl15;
      _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
      /*** wrapon_fn131 ***/ chpl_executeOn(&call_tmp_chpl25, INT32(196), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), sizeof(chpl__class_localson_fn104_object), INT64(1227), INT32(2));
    }
  }
  _end__ASSIGN__chpl:;
  return result_chpl;
}

/* ReplicatedDist.chpl:481 */
static ReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_ReplicatedDom_1_int64_t_F_chpl dsiPrivatize_chpl8(chpl____wide_ReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_ReplicatedDom_1_int64_t_F this_chpl6,
                                                                                                                                _ref__tuple_2_int64_t__ref__array_DefaultAssociativeArr_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t_T privatizeData_chpl) {
  int64_t local_dataParMinGranularity_chpl;
  chpl_bool local_dataParIgnoreRunningTasks_chpl;
  int32_t local_c_sublocid_any_chpl;
  int64_t local_dataParTasksPerLocale_chpl;
  ReplicatedDom_1_int64_t_F_chpl call_tmp_chpl = NULL;
  int64_t coerce_tmp_chpl;
  ReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_ReplicatedDom_1_int64_t_F_chpl result_chpl = NULL;
  _ref__wide__array_DefaultAssociativeArr_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t_T call_tmp_chpl2 = NULL;
  _array_DefaultAssociativeArr_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t_T call_tmp_chpl3;
  _array_DefaultAssociativeArr_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t_T tmp_chpl;
  chpl____wide_DefaultAssociativeArr_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t_T ret_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp_chpl5;
  chpl____wide_object tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultAssociativeArr_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t_T ret_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultAssociativeArr_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t_T ret_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp_chpl7 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp_chpl8;
  _ref__wide__array_DefaultAssociativeArr_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t_T tmp_chpl3 = NULL;
  _ref__wide__array_DefaultAssociativeArr_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t_T tmp_chpl4 = NULL;
  chpl_bool ret_chpl4;
  int64_t call_tmp_chpl9;
  chpl_bool call_tmp_chpl10;
  int64_t call_tmp_chpl11;
  _tuple_2_star__ref__array_DefaultAssociativeArr_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t_T chpl__iterLF;
  _ref__array_DefaultAssociativeArr_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t_T i__e1_x_chpl = NULL;
  _array_DefaultAssociativeArr_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t_T this_x1_chpl;
  _array_DefaultAssociativeArr_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t_T call_tmp_chpl12;
  chpl____wide_DefaultAssociativeArr_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t_T ret_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultAssociativeArr_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t_T this_chpl7 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultAssociativeDom_int64_t_T coerce_tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultAssociativeDom_int64_t_T _ic__F0_this_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t ret_chpl6;
  chpl_bool call_tmp_chpl13;
  chpl____wide_locale call_tmp_chpl14 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t _autoCopy_tmp__chpl;
  chpl____wide_locale call_tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t tmp_chpl5;
  int64_t numIndices_chpl;
  chpl____wide_DefaultAssociativeDom_int64_t_T this_chpl8 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t coerce_tmp_chpl3;
  int64_t tmp_chpl6;
  int64_t call_tmp_chpl16;
  chpl_bool call_tmp_chpl17;
  range_int64_t_bounded_F ret_tmp_chpl;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp__chpl = NULL;
  _array_DefaultAssociativeArr_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t_T call_tmp_chpl18;
  chpl____wide_DefaultAssociativeArr_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t_T ret_chpl7 = {CHPL_LOCALEID_T_INIT, NULL};
  _array_DefaultAssociativeArr_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t_T call_tmp_chpl19;
  chpl____wide_DefaultAssociativeArr_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t_T ret_chpl8 = {CHPL_LOCALEID_T_INIT, NULL};
  _ic_these_DefaultAssociativeArr_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t_T2 _ic__chpl = NULL;
  c_void_ptr cast_tmp_chpl;
  _tuple_2_range_int64_t_bounded_F_DefaultAssociativeDom_int64_t_T tmp_chpl7;
  _ic_these_DefaultAssociativeArr_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t_T2 _ic__chpl2 = NULL;
  c_void_ptr cast_tmp_chpl2;
  _tuple_2_range_int64_t_bounded_F_DefaultAssociativeDom_int64_t_T tmp_chpl8;
  chpl____wide__ref__wide_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F tmp_chpl9 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F tmp_chpl10 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t tmp_chpl11;
  c_void_ptr call_tmp_chpl20;
  c_void_ptr call_tmp_chpl21;
  range_int64_t_bounded_F tmpIter_chpl;
  range_int64_t_boundedLow_F ret_tmp_chpl2;
  _ref_range_int64_t_boundedLow_F ret_to_arg_ref_tmp__chpl2 = NULL;
  range_int64_t_bounded_F ret_tmp_chpl3;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp__chpl3 = NULL;
  chpl___EndCount_atomic_int64_int64_t _coforallCount_chpl = NULL;
  chpl___EndCount_atomic_int64_int64_t this_chpl9 = NULL;
  c_void_ptr cast_tmp_chpl3;
  atomic_int64 _init_class_tmp__chpl;
  atomic_int64 this_chpl10;
  atomic_int_least64_t ret_chpl9;
  atomic_int_least64_t type_tmp_chpl;
  _ref_atomic_int_least64_t _ref_tmp__chpl = NULL;
  atomic_int64 ret_tmp_chpl4;
  _ref_atomic_int64 ret_to_arg_ref_tmp__chpl4 = NULL;
  c_void_ptr call_tmp_chpl22;
  chpl___EndCount_atomic_int64_int64_t wrap_call_tmp_chpl = NULL;
  int64_t numTasks_chpl;
  _ref_range_int64_t_bounded_F _ref_tmp__chpl2 = NULL;
  int64_t call_tmp_chpl23;
  chpl____wide__ref_range_int64_t_bounded_F tmp_chpl12 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F _ic__F0_this_chpl2;
  int64_t numChunks_captemp_chpl;
  int64_t i_chpl;
  int64_t ret_chpl10;
  int64_t end_chpl;
  chpl____wide_DefaultAssociativeDom_int64_t_T this_chpl11 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localscoforall_fn8 _args_forcoforall_fn_chpl = NULL;
  _ref__tuple_2_star__ref__array_DefaultAssociativeArr_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t_T tmp_chpl13 = NULL;
  c_void_ptr _args_vforcoforall_fn_chpl;
  int64_t _taskListNodecoforall_fn_chpl;
  _ref_atomic_int64 _field_destructor_tmp__chpl = NULL;
  _ref_atomic_int_least64_t call_tmp_chpl24 = NULL;
  chpl_localeID_t call_tmp_chpl25;
  chpl___EndCount_atomic_int64_int64_t rvfDerefTmp_chpl = NULL;
  chpl_bool isdirect_chpl;
  chpl____wide__EndCount_atomic_int64_int64_t tmp_chpl14 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn104 _args_foron_fn_chpl = NULL;
  chpl____wide__EndCount_atomic_int64_int64_t tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  chpl____wide_object chpl_macro_tmp_6133;
  chpl____wide__nilType chpl_macro_tmp_6134;
  chpl____wide_object chpl_macro_tmp_6135;
  chpl____wide_object chpl_macro_tmp_6136;
  chpl____wide_object chpl_macro_tmp_6137;
  chpl____wide__ref__wide_DefaultAssociativeDom_int64_t_T chpl_macro_tmp_6138;
  chpl____wide__ref_int64_t chpl_macro_tmp_6139;
  chpl____wide__ref_int64_t chpl_macro_tmp_6140;
  chpl____wide__ref_range_int64_t_bounded_F chpl_macro_tmp_6141;
  chpl__class_localscoforall_fn8_object chpl_macro_tmp_6142;
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_6143;
  chpl__class_localson_fn104_object chpl_macro_tmp_6144;
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_6145;
  local_dataParMinGranularity_chpl = dataParMinGranularity;
  local_dataParIgnoreRunningTasks_chpl = dataParIgnoreRunningTasks;
  local_c_sublocid_any_chpl = c_sublocid_any;
  local_dataParTasksPerLocale_chpl = dataParTasksPerLocale;
  coerce_tmp_chpl = (privatizeData_chpl)->x1;
  call_tmp_chpl = chpl_getPrivatizedCopy7(coerce_tmp_chpl);
  result_chpl = ReplicatedArr_chpl(call_tmp_chpl);
  call_tmp_chpl2 = &((result_chpl)->localArrs_chpl);
  tmp_chpl = (privatizeData_chpl)->x2;
  call_tmp_chpl3 = tmp_chpl;
  ret_chpl = (&call_tmp_chpl3)->_instance;
  chpl_macro_tmp_6133.locale = (&ret_chpl)->locale;
  chpl_macro_tmp_6133.addr = ((object)((&ret_chpl)->addr));
  call_tmp_chpl4 = chpl_macro_tmp_6133;
  chpl_macro_tmp_6134.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_6134.addr = nil;
  chpl_macro_tmp_6135.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_6135.addr = NULL;
  tmp_chpl2 = chpl_macro_tmp_6135;
  call_tmp_chpl5 = (! (((&call_tmp_chpl4)->addr != (&tmp_chpl2)->addr) || ((!(! (&call_tmp_chpl4)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp_chpl4)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&tmp_chpl2)->locale), INT64(0), INT32(0))))));
  if (call_tmp_chpl5) {
    goto _end__ASSIGN__chpl;
  }
  ret_chpl2 = (call_tmp_chpl2)->_instance;
  ret_chpl3 = (&call_tmp_chpl3)->_instance;
  chpl_macro_tmp_6136.locale = (&ret_chpl2)->locale;
  chpl_macro_tmp_6136.addr = ((object)((&ret_chpl2)->addr));
  call_tmp_chpl6 = chpl_macro_tmp_6136;
  chpl_macro_tmp_6137.locale = (&ret_chpl3)->locale;
  chpl_macro_tmp_6137.addr = ((object)((&ret_chpl3)->addr));
  call_tmp_chpl7 = chpl_macro_tmp_6137;
  call_tmp_chpl8 = (! (((&call_tmp_chpl6)->addr != (&call_tmp_chpl7)->addr) || ((!(! (&call_tmp_chpl6)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp_chpl6)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&call_tmp_chpl7)->locale), INT64(0), INT32(0))))));
  if (call_tmp_chpl8) {
    goto _end__ASSIGN__chpl;
  }
  tmp_chpl3 = call_tmp_chpl2;
  tmp_chpl4 = &call_tmp_chpl3;
  call_tmp_chpl9 = size6(tmp_chpl3);
  call_tmp_chpl10 = (call_tmp_chpl9 == INT64(0));
  if (call_tmp_chpl10) {
    call_tmp_chpl11 = size6(tmp_chpl4);
    ret_chpl4 = (call_tmp_chpl11 == INT64(0));
    goto _end__if_fn713_chpl;
  } else {
    ret_chpl4 = UINT8(false);
    goto _end__if_fn713_chpl;
  }
  _end__if_fn713_chpl:;
  if (ret_chpl4) {
    goto _end__ASSIGN__chpl;
  }
  i__e1_x_chpl = call_tmp_chpl2;
  this_x1_chpl = *(i__e1_x_chpl);
  *(chpl__iterLF + INT64(0)) = this_x1_chpl;
  *(chpl__iterLF + INT64(1)) = call_tmp_chpl3;
  call_tmp_chpl12 = *(chpl__iterLF + INT64(0));
  ret_chpl5 = (&call_tmp_chpl12)->_instance;
  this_chpl7 = ret_chpl5;
  chpl_macro_tmp_6138.locale = (&this_chpl7)->locale;
  chpl_macro_tmp_6138.addr = &(((&this_chpl7)->addr)->dom);
  chpl_gen_comm_get(((void*)(&coerce_tmp_chpl2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_6138).locale), INT64(0), INT32(0)), (chpl_macro_tmp_6138).addr, sizeof(chpl____wide_DefaultAssociativeDom_int64_t_T), -1, COMMID(69), INT64(486), INT64(58));
  _ic__F0_this_chpl = coerce_tmp_chpl2;
  call_tmp_chpl13 = (local_dataParTasksPerLocale_chpl == INT64(0));
  if (call_tmp_chpl13) {
    _autoCopy_tmp__chpl = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any_chpl);
    call_tmp_chpl15 = chpl_localeID_to_locale(&_autoCopy_tmp__chpl);
    call_tmp_chpl14 = call_tmp_chpl15;
    chpl_macro_tmp_6139.locale = (&call_tmp_chpl14)->locale;
    chpl_macro_tmp_6139.addr = &(((&call_tmp_chpl14)->addr)->maxTaskPar);
    chpl_gen_comm_get(((void*)(&tmp_chpl5)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_6139).locale), INT64(0), INT32(0)), (chpl_macro_tmp_6139).addr, sizeof(int64_t), -1, COMMID(70), INT64(486), INT64(58));
    ret_chpl6 = tmp_chpl5;
    goto _end__if_fn137_chpl;
  } else {
    ret_chpl6 = local_dataParTasksPerLocale_chpl;
    goto _end__if_fn137_chpl;
  }
  _end__if_fn137_chpl:;
  this_chpl8 = coerce_tmp_chpl2;
  chpl_macro_tmp_6140.locale = (&this_chpl8)->locale;
  chpl_macro_tmp_6140.addr = &(((&this_chpl8)->addr)->tableSize);
  chpl_gen_comm_get(((void*)(&tmp_chpl6)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_6140).locale), INT64(0), INT32(0)), (chpl_macro_tmp_6140).addr, sizeof(int64_t), -1, COMMID(71), INT64(486), INT64(58));
  coerce_tmp_chpl3 = tmp_chpl6;
  numIndices_chpl = coerce_tmp_chpl3;
  call_tmp_chpl16 = _computeNumChunks_chpl(ret_chpl6, local_dataParIgnoreRunningTasks_chpl, local_dataParMinGranularity_chpl, coerce_tmp_chpl3);
  call_tmp_chpl17 = (call_tmp_chpl16 == INT64(1));
  if (call_tmp_chpl17) {
    ret_to_arg_ref_tmp__chpl = &ret_tmp_chpl;
    chpl_build_bounded_range(INT64(0), ((int64_t)((coerce_tmp_chpl3 - INT64(1)))), ret_to_arg_ref_tmp__chpl);
    call_tmp_chpl18 = *(chpl__iterLF + INT64(0));
    ret_chpl7 = (&call_tmp_chpl18)->_instance;
    call_tmp_chpl19 = *(chpl__iterLF + INT64(1));
    ret_chpl8 = (&call_tmp_chpl19)->_instance;
    cast_tmp_chpl = chpl_here_alloc(sizeof(chpl__ic_these_DefaultAssociativeArr_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t_T2_object), INT16(157));
    _ic__chpl = ((_ic_these_DefaultAssociativeArr_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t_T2)(cast_tmp_chpl));
    ((object)(_ic__chpl))->chpl__cid = chpl__cid__ic_these_DefaultAssociativeArr_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t_T2;
    (_ic__chpl)->more = INT64(1);
    (_ic__chpl)->F0_this = ret_chpl7;
    (&tmp_chpl7)->x1 = ret_tmp_chpl;
    (&tmp_chpl7)->x2 = coerce_tmp_chpl2;
    (_ic__chpl)->F1_followThis = tmp_chpl7;
    cast_tmp_chpl2 = chpl_here_alloc(sizeof(chpl__ic_these_DefaultAssociativeArr_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t_T2_object), INT16(157));
    _ic__chpl2 = ((_ic_these_DefaultAssociativeArr_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t_T2)(cast_tmp_chpl2));
    ((object)(_ic__chpl2))->chpl__cid = chpl__cid__ic_these_DefaultAssociativeArr_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t_T2;
    (_ic__chpl2)->more = INT64(1);
    (_ic__chpl2)->F0_this = ret_chpl8;
    (&tmp_chpl8)->x1 = ret_tmp_chpl;
    (&tmp_chpl8)->x2 = coerce_tmp_chpl2;
    (_ic__chpl2)->F1_followThis = tmp_chpl8;
    advance5(_ic__chpl);
    advance5(_ic__chpl2);
    for (; (tmp_chpl11 = (_ic__chpl)->more,tmp_chpl11); ) {
      tmp_chpl9 = (_ic__chpl2)->value;
      tmp_chpl10 = (_ic__chpl)->value;
      chpl_gen_comm_get(((void*)(&coerce_tmp_chpl4)), chpl_nodeFromLocaleID(&((tmp_chpl9).locale), INT64(0), INT32(0)), (tmp_chpl9).addr, sizeof(chpl____wide_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F), -1, COMMID(72), INT64(486), INT64(58));
      chpl_gen_comm_put(((void*)(&coerce_tmp_chpl4)), chpl_nodeFromLocaleID(&((tmp_chpl10).locale), INT64(0), INT32(0)), (tmp_chpl10).addr, sizeof(chpl____wide_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F), -1, COMMID(73), INT64(486), INT64(58));
      advance5(_ic__chpl);
      advance5(_ic__chpl2);
    }
    call_tmp_chpl20 = ((void*)(_ic__chpl));
    chpl_here_free(call_tmp_chpl20);
    call_tmp_chpl21 = ((void*)(_ic__chpl2));
    chpl_here_free(call_tmp_chpl21);
  } else {
    ret_to_arg_ref_tmp__chpl2 = &ret_tmp_chpl2;
    chpl_build_low_bounded_range(INT64(0), ret_to_arg_ref_tmp__chpl2);
    ret_to_arg_ref_tmp__chpl3 = &ret_tmp_chpl3;
    chpl___POUND_(&ret_tmp_chpl2, call_tmp_chpl16, ret_to_arg_ref_tmp__chpl3);
    tmpIter_chpl = ret_tmp_chpl3;
    cast_tmp_chpl3 = chpl_here_alloc(sizeof(chpl_chpl___EndCount_atomic_int64_int64_t_object), INT16(2));
    this_chpl9 = ((chpl___EndCount_atomic_int64_int64_t)(cast_tmp_chpl3));
    ((object)(this_chpl9))->chpl__cid = chpl__cid_chpl___EndCount_atomic_int64_int64_t;
    (this_chpl9)->i = _init_class_tmp__chpl;
    (this_chpl9)->taskCnt = INT64(0);
    (this_chpl9)->taskList = NULL;
    ret_chpl9 = type_tmp_chpl;
    _ref_tmp__chpl = &ret_chpl9;
    atomic_init_int_least64_t(_ref_tmp__chpl, INT64(0));
    (&this_chpl10)->_v = ret_chpl9;
    ret_to_arg_ref_tmp__chpl4 = &ret_tmp_chpl4;
    _construct_atomic_int64(ret_chpl9, &this_chpl10, ret_to_arg_ref_tmp__chpl4);
    (this_chpl9)->i = ret_tmp_chpl4;
    (this_chpl9)->taskCnt = INT64(0);
    call_tmp_chpl22 = ((c_void_ptr)(nil));
    (this_chpl9)->taskList = call_tmp_chpl22;
    wrap_call_tmp_chpl = _construct__EndCount(&ret_tmp_chpl4, INT64(0), call_tmp_chpl22, this_chpl9);
    _coforallCount_chpl = wrap_call_tmp_chpl;
    _ref_tmp__chpl2 = &tmpIter_chpl;
    chpl_macro_tmp_6141.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_6141.addr = _ref_tmp__chpl2;
    tmp_chpl12 = chpl_macro_tmp_6141;
    call_tmp_chpl23 = length2(tmp_chpl12);
    numTasks_chpl = call_tmp_chpl23;
    _upEndCount3(_coforallCount_chpl, call_tmp_chpl23);
    _ic__F0_this_chpl2 = tmpIter_chpl;
    numChunks_captemp_chpl = call_tmp_chpl16;
    ret_chpl10 = (&_ic__F0_this_chpl2)->_low;
    end_chpl = (&_ic__F0_this_chpl2)->_high;
    for (i_chpl = ret_chpl10; ((i_chpl <= end_chpl)); i_chpl += INT64(1)) {
      this_chpl11 = _ic__F0_this_chpl;
      _args_forcoforall_fn_chpl = ((_class_localscoforall_fn8)(&chpl_macro_tmp_6142));
      (_args_forcoforall_fn_chpl)->_0_numChunks_captemp = numChunks_captemp_chpl;
      (_args_forcoforall_fn_chpl)->_1_numIndices = numIndices_chpl;
      (_args_forcoforall_fn_chpl)->_2__yieldedIndex = i_chpl;
      (_args_forcoforall_fn_chpl)->_3_this = this_chpl11;
      (_args_forcoforall_fn_chpl)->_4__coforallCount = _coforallCount_chpl;
      tmp_chpl13 = &chpl__iterLF;
      (_args_forcoforall_fn_chpl)->_5_tmp = tmp_chpl13;
      _args_vforcoforall_fn_chpl = ((void*)(_args_forcoforall_fn_chpl));
      _taskListNodecoforall_fn_chpl = chpl_nodeID;
      /*** wrapcoforall_fn5 ***/ chpl_taskListAddCoStmt(INT32(-2), INT64(134), ((chpl_task_bundle_p)(_args_vforcoforall_fn_chpl)), sizeof(chpl__class_localscoforall_fn8_object), &((_coforallCount_chpl)->taskList), _taskListNodecoforall_fn_chpl, INT64(3493), INT32(28));
    }
    _waitEndCount3(_coforallCount_chpl, numTasks_chpl);
    _field_destructor_tmp__chpl = &((_coforallCount_chpl)->i);
    call_tmp_chpl24 = &((_field_destructor_tmp__chpl)->_v);
    atomic_destroy_int_least64_t(call_tmp_chpl24);
    call_tmp_chpl25 = chpl_gen_getLocaleID();
    rvfDerefTmp_chpl = _coforallCount_chpl;
    isdirect_chpl = chpl_doDirectExecuteOn(&call_tmp_chpl25);
    if (isdirect_chpl) {
      chpl_macro_tmp_6143.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_6143.addr = rvfDerefTmp_chpl;
      tmp_chpl14 = chpl_macro_tmp_6143;
      on_fn123(tmp_chpl14);
    } else {
      _args_foron_fn_chpl = ((_class_localson_fn104)(&chpl_macro_tmp_6144));
      (_args_foron_fn_chpl)->_0_rvfDerefTmp = call_tmp_chpl25;
      chpl_macro_tmp_6145.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_6145.addr = rvfDerefTmp_chpl;
      tmp_chpl15 = chpl_macro_tmp_6145;
      (_args_foron_fn_chpl)->_1_rvfDerefTmp = tmp_chpl15;
      _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
      /*** wrapon_fn131 ***/ chpl_executeOn(&call_tmp_chpl25, INT32(196), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), sizeof(chpl__class_localson_fn104_object), INT64(1227), INT32(2));
    }
  }
  _end__ASSIGN__chpl:;
  return result_chpl;
}

/* ReplicatedDist.chpl:492 */
static ReplicatedArr_FCHGlobalNode_ReplicatedDom_1_int64_t_F_chpl dsiBuildArray_chpl4(ReplicatedDom_1_int64_t_F_chpl this_chpl6) {
  ReplicatedArr_FCHGlobalNode_ReplicatedDom_1_int64_t_F_chpl result_chpl = NULL;
  Replicated_chpl coerce_tmp_chpl = NULL;
  chpl____wide_Replicated tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__wide__array_DefaultAssociativeArr_locale_int64_t_T call_tmp_chpl = NULL;
  _ref__wide__array_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T call_tmp_chpl2 = NULL;
  _ref__wide__array_DefaultAssociativeArr_LocReplicatedArr_FCHGlobalNode_1_int64_t_F_int64_t_T call_tmp_chpl3 = NULL;
  _ref__array_DefaultAssociativeArr_locale_int64_t_T i__e1_x_chpl = NULL;
  _ref__array_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T i__e2_x_chpl = NULL;
  _ref__array_DefaultAssociativeArr_LocReplicatedArr_FCHGlobalNode_1_int64_t_F_int64_t_T i__e3_x_chpl = NULL;
  _array_DefaultAssociativeArr_locale_int64_t_T this_x1_chpl;
  _array_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T this_x2_chpl;
  _array_DefaultAssociativeArr_LocReplicatedArr_FCHGlobalNode_1_int64_t_F_int64_t_T this_x3_chpl;
  chpl___EndCount_atomic_int64_int64_t _coforallCount_chpl = NULL;
  chpl___EndCount_atomic_int64_int64_t this_chpl7 = NULL;
  c_void_ptr cast_tmp_chpl;
  atomic_int64 _init_class_tmp__chpl;
  atomic_int64 this_chpl8;
  atomic_int_least64_t ret_chpl;
  atomic_int_least64_t type_tmp_chpl;
  _ref_atomic_int_least64_t _ref_tmp__chpl = NULL;
  atomic_int64 ret_tmp_chpl;
  _ref_atomic_int64 ret_to_arg_ref_tmp__chpl = NULL;
  c_void_ptr call_tmp_chpl4;
  chpl___EndCount_atomic_int64_int64_t wrap_call_tmp_chpl = NULL;
  _array_DefaultAssociativeArr_locale_int64_t_T call_tmp_chpl5;
  chpl____wide_DefaultAssociativeArr_locale_int64_t_T ret_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  _ic_these_DefaultAssociativeArr_locale_int64_t_T _ic__chpl = NULL;
  c_void_ptr cast_tmp_chpl2;
  _array_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T call_tmp_chpl6;
  chpl____wide_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T ret_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  _ic_these_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T _ic__chpl2 = NULL;
  c_void_ptr cast_tmp_chpl3;
  _array_DefaultAssociativeArr_LocReplicatedArr_FCHGlobalNode_1_int64_t_F_int64_t_T call_tmp_chpl7;
  chpl____wide_DefaultAssociativeArr_LocReplicatedArr_FCHGlobalNode_1_int64_t_F_int64_t_T ret_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  _ic_these_DefaultAssociativeArr_LocReplicatedArr_FCHGlobalNode_1_int64_t_F_int64_t_T _ic__chpl3 = NULL;
  c_void_ptr cast_tmp_chpl4;
  chpl____wide__ref__wide_LocReplicatedArr_FCHGlobalNode_1_int64_t_F tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide_LocReplicatedDom_1_int64_t_F tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide_locale tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp_chpl8;
  chpl____wide_locale tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_LocReplicatedDom_1_int64_t_F rvfDerefTmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl___EndCount_atomic_int64_int64_t rvfDerefTmp_chpl2 = NULL;
  _class_localson_fn_chpl60 _args_foron_fn_chpl = NULL;
  chpl____wide__ref__wide_LocReplicatedArr_FCHGlobalNode_1_int64_t_F tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__EndCount_atomic_int64_int64_t tmp_chpl7 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  int64_t tmp_chpl8;
  c_void_ptr call_tmp_chpl9;
  c_void_ptr call_tmp_chpl10;
  c_void_ptr call_tmp_chpl11;
  _ref_atomic_int64 _field_destructor_tmp__chpl = NULL;
  _ref_atomic_int_least64_t call_tmp_chpl12 = NULL;
  chpl_localeID_t call_tmp_chpl13;
  chpl___EndCount_atomic_int64_int64_t rvfDerefTmp_chpl3 = NULL;
  chpl_bool isdirect_chpl;
  chpl____wide__EndCount_atomic_int64_int64_t tmp_chpl9 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn104 _args_foron_fn_chpl2 = NULL;
  chpl____wide__EndCount_atomic_int64_int64_t tmp_chpl10 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl2;
  chpl__class_localson_fn_chpl60_object chpl_macro_tmp_6146;
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_6147;
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_6148;
  chpl__class_localson_fn104_object chpl_macro_tmp_6149;
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_6150;
  result_chpl = ReplicatedArr_chpl2(this_chpl6);
  tmp_chpl = (this_chpl6)->dist_chpl;
  coerce_tmp_chpl = (&tmp_chpl)->addr;
  call_tmp_chpl = &((coerce_tmp_chpl)->targetLocales_chpl);
  call_tmp_chpl2 = &((this_chpl6)->localDoms_chpl);
  call_tmp_chpl3 = &((result_chpl)->localArrs_chpl);
  i__e1_x_chpl = call_tmp_chpl;
  i__e2_x_chpl = call_tmp_chpl2;
  i__e3_x_chpl = call_tmp_chpl3;
  this_x1_chpl = *(i__e1_x_chpl);
  this_x2_chpl = *(i__e2_x_chpl);
  this_x3_chpl = *(i__e3_x_chpl);
  cast_tmp_chpl = chpl_here_alloc(sizeof(chpl_chpl___EndCount_atomic_int64_int64_t_object), INT16(2));
  this_chpl7 = ((chpl___EndCount_atomic_int64_int64_t)(cast_tmp_chpl));
  ((object)(this_chpl7))->chpl__cid = chpl__cid_chpl___EndCount_atomic_int64_int64_t;
  (this_chpl7)->i = _init_class_tmp__chpl;
  (this_chpl7)->taskCnt = INT64(0);
  (this_chpl7)->taskList = NULL;
  ret_chpl = type_tmp_chpl;
  _ref_tmp__chpl = &ret_chpl;
  atomic_init_int_least64_t(_ref_tmp__chpl, INT64(0));
  (&this_chpl8)->_v = ret_chpl;
  ret_to_arg_ref_tmp__chpl = &ret_tmp_chpl;
  _construct_atomic_int64(ret_chpl, &this_chpl8, ret_to_arg_ref_tmp__chpl);
  (this_chpl7)->i = ret_tmp_chpl;
  (this_chpl7)->taskCnt = INT64(0);
  call_tmp_chpl4 = ((c_void_ptr)(nil));
  (this_chpl7)->taskList = call_tmp_chpl4;
  wrap_call_tmp_chpl = _construct__EndCount(&ret_tmp_chpl, INT64(0), call_tmp_chpl4, this_chpl7);
  _coforallCount_chpl = wrap_call_tmp_chpl;
  call_tmp_chpl5 = this_x1_chpl;
  ret_chpl2 = (&call_tmp_chpl5)->_instance;
  cast_tmp_chpl2 = chpl_here_alloc(sizeof(chpl__ic_these_DefaultAssociativeArr_locale_int64_t_T_object), INT16(128));
  _ic__chpl = ((_ic_these_DefaultAssociativeArr_locale_int64_t_T)(cast_tmp_chpl2));
  ((object)(_ic__chpl))->chpl__cid = chpl__cid__ic_these_DefaultAssociativeArr_locale_int64_t_T;
  (_ic__chpl)->more = INT64(1);
  (_ic__chpl)->F0_this = ret_chpl2;
  call_tmp_chpl6 = this_x2_chpl;
  ret_chpl3 = (&call_tmp_chpl6)->_instance;
  cast_tmp_chpl3 = chpl_here_alloc(sizeof(chpl__ic_these_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T_object), INT16(139));
  _ic__chpl2 = ((_ic_these_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T)(cast_tmp_chpl3));
  ((object)(_ic__chpl2))->chpl__cid = chpl__cid__ic_these_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T;
  (_ic__chpl2)->more = INT64(1);
  (_ic__chpl2)->F0_this = ret_chpl3;
  call_tmp_chpl7 = this_x3_chpl;
  ret_chpl4 = (&call_tmp_chpl7)->_instance;
  cast_tmp_chpl4 = chpl_here_alloc(sizeof(chpl__ic_these_DefaultAssociativeArr_LocReplicatedArr_FCHGlobalNode_1_int64_t_F_int64_t_T_object), INT16(165));
  _ic__chpl3 = ((_ic_these_DefaultAssociativeArr_LocReplicatedArr_FCHGlobalNode_1_int64_t_F_int64_t_T)(cast_tmp_chpl4));
  ((object)(_ic__chpl3))->chpl__cid = chpl__cid__ic_these_DefaultAssociativeArr_LocReplicatedArr_FCHGlobalNode_1_int64_t_F_int64_t_T;
  (_ic__chpl3)->more = INT64(1);
  (_ic__chpl3)->F0_this = ret_chpl4;
  advance(_ic__chpl);
  advance3(_ic__chpl2);
  advance4(_ic__chpl3);
  for (; (tmp_chpl8 = (_ic__chpl)->more,tmp_chpl8); ) {
    tmp_chpl2 = (_ic__chpl3)->value;
    tmp_chpl3 = (_ic__chpl2)->value;
    tmp_chpl4 = (_ic__chpl)->value;
    _upEndCount2(_coforallCount_chpl);
    chpl_gen_comm_get(((void*)(&tmp_chpl5)), chpl_nodeFromLocaleID(&((tmp_chpl4).locale), INT64(0), INT32(0)), (tmp_chpl4).addr, sizeof(chpl____wide_locale), -1, COMMID(74), INT64(499), INT64(58));
    call_tmp_chpl8 = (&tmp_chpl5)->locale;
    chpl_gen_comm_get(((void*)(&rvfDerefTmp_chpl)), chpl_nodeFromLocaleID(&((tmp_chpl3).locale), INT64(0), INT32(0)), (tmp_chpl3).addr, sizeof(chpl____wide_LocReplicatedDom_1_int64_t_F), -1, COMMID(75), INT64(497), INT64(58));
    rvfDerefTmp_chpl2 = _coforallCount_chpl;
    _args_foron_fn_chpl = ((_class_localson_fn_chpl60)(&chpl_macro_tmp_6146));
    (_args_foron_fn_chpl)->_0_rvfDerefTmp_chpl = call_tmp_chpl8;
    (_args_foron_fn_chpl)->_1_rvfDerefTmp_chpl = rvfDerefTmp_chpl;
    tmp_chpl6 = tmp_chpl2;
    (_args_foron_fn_chpl)->_2_tmp_chpl = tmp_chpl6;
    chpl_macro_tmp_6147.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_6147.addr = rvfDerefTmp_chpl2;
    tmp_chpl7 = chpl_macro_tmp_6147;
    (_args_foron_fn_chpl)->_3_rvfDerefTmp_chpl = tmp_chpl7;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    /*** wrapon_fn_chpl60 ***/ chpl_executeOnNB(&call_tmp_chpl8, INT32(316), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), sizeof(chpl__class_localson_fn_chpl60_object), INT64(499), INT32(58));
    advance(_ic__chpl);
    advance3(_ic__chpl2);
    advance4(_ic__chpl3);
  }
  call_tmp_chpl9 = ((void*)(_ic__chpl));
  chpl_here_free(call_tmp_chpl9);
  call_tmp_chpl10 = ((void*)(_ic__chpl2));
  chpl_here_free(call_tmp_chpl10);
  call_tmp_chpl11 = ((void*)(_ic__chpl3));
  chpl_here_free(call_tmp_chpl11);
  _waitEndCount2(_coforallCount_chpl);
  _field_destructor_tmp__chpl = &((_coforallCount_chpl)->i);
  call_tmp_chpl12 = &((_field_destructor_tmp__chpl)->_v);
  atomic_destroy_int_least64_t(call_tmp_chpl12);
  call_tmp_chpl13 = chpl_gen_getLocaleID();
  rvfDerefTmp_chpl3 = _coforallCount_chpl;
  isdirect_chpl = chpl_doDirectExecuteOn(&call_tmp_chpl13);
  if (isdirect_chpl) {
    chpl_macro_tmp_6148.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_6148.addr = rvfDerefTmp_chpl3;
    tmp_chpl9 = chpl_macro_tmp_6148;
    on_fn123(tmp_chpl9);
  } else {
    _args_foron_fn_chpl2 = ((_class_localson_fn104)(&chpl_macro_tmp_6149));
    (_args_foron_fn_chpl2)->_0_rvfDerefTmp = call_tmp_chpl13;
    chpl_macro_tmp_6150.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_6150.addr = rvfDerefTmp_chpl3;
    tmp_chpl10 = chpl_macro_tmp_6150;
    (_args_foron_fn_chpl2)->_1_rvfDerefTmp = tmp_chpl10;
    _args_vforon_fn_chpl2 = ((void*)(_args_foron_fn_chpl2));
    /*** wrapon_fn131 ***/ chpl_executeOn(&call_tmp_chpl13, INT32(196), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl2)), sizeof(chpl__class_localson_fn104_object), INT64(1227), INT32(2));
  }
  return result_chpl;
}

/* ReplicatedDist.chpl:492 */
static ReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_ReplicatedDom_1_int64_t_F_chpl dsiBuildArray_chpl3(ReplicatedDom_1_int64_t_F_chpl this_chpl6) {
  ReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_ReplicatedDom_1_int64_t_F_chpl result_chpl = NULL;
  Replicated_chpl coerce_tmp_chpl = NULL;
  chpl____wide_Replicated tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__wide__array_DefaultAssociativeArr_locale_int64_t_T call_tmp_chpl = NULL;
  _ref__wide__array_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T call_tmp_chpl2 = NULL;
  _ref__wide__array_DefaultAssociativeArr_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t_T call_tmp_chpl3 = NULL;
  _ref__array_DefaultAssociativeArr_locale_int64_t_T i__e1_x_chpl = NULL;
  _ref__array_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T i__e2_x_chpl = NULL;
  _ref__array_DefaultAssociativeArr_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t_T i__e3_x_chpl = NULL;
  _array_DefaultAssociativeArr_locale_int64_t_T this_x1_chpl;
  _array_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T this_x2_chpl;
  _array_DefaultAssociativeArr_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t_T this_x3_chpl;
  chpl___EndCount_atomic_int64_int64_t _coforallCount_chpl = NULL;
  chpl___EndCount_atomic_int64_int64_t this_chpl7 = NULL;
  c_void_ptr cast_tmp_chpl;
  atomic_int64 _init_class_tmp__chpl;
  atomic_int64 this_chpl8;
  atomic_int_least64_t ret_chpl;
  atomic_int_least64_t type_tmp_chpl;
  _ref_atomic_int_least64_t _ref_tmp__chpl = NULL;
  atomic_int64 ret_tmp_chpl;
  _ref_atomic_int64 ret_to_arg_ref_tmp__chpl = NULL;
  c_void_ptr call_tmp_chpl4;
  chpl___EndCount_atomic_int64_int64_t wrap_call_tmp_chpl = NULL;
  _array_DefaultAssociativeArr_locale_int64_t_T call_tmp_chpl5;
  chpl____wide_DefaultAssociativeArr_locale_int64_t_T ret_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  _ic_these_DefaultAssociativeArr_locale_int64_t_T _ic__chpl = NULL;
  c_void_ptr cast_tmp_chpl2;
  _array_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T call_tmp_chpl6;
  chpl____wide_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T ret_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  _ic_these_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T _ic__chpl2 = NULL;
  c_void_ptr cast_tmp_chpl3;
  _array_DefaultAssociativeArr_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t_T call_tmp_chpl7;
  chpl____wide_DefaultAssociativeArr_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t_T ret_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  _ic_these_DefaultAssociativeArr_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t_T _ic__chpl3 = NULL;
  c_void_ptr cast_tmp_chpl4;
  chpl____wide__ref__wide_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide_LocReplicatedDom_1_int64_t_F tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide_locale tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp_chpl8;
  chpl____wide_locale tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_LocReplicatedDom_1_int64_t_F rvfDerefTmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl___EndCount_atomic_int64_int64_t rvfDerefTmp_chpl2 = NULL;
  _class_localson_fn_chpl59 _args_foron_fn_chpl = NULL;
  chpl____wide__ref__wide_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__EndCount_atomic_int64_int64_t tmp_chpl7 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  int64_t tmp_chpl8;
  c_void_ptr call_tmp_chpl9;
  c_void_ptr call_tmp_chpl10;
  c_void_ptr call_tmp_chpl11;
  _ref_atomic_int64 _field_destructor_tmp__chpl = NULL;
  _ref_atomic_int_least64_t call_tmp_chpl12 = NULL;
  chpl_localeID_t call_tmp_chpl13;
  chpl___EndCount_atomic_int64_int64_t rvfDerefTmp_chpl3 = NULL;
  chpl_bool isdirect_chpl;
  chpl____wide__EndCount_atomic_int64_int64_t tmp_chpl9 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn104 _args_foron_fn_chpl2 = NULL;
  chpl____wide__EndCount_atomic_int64_int64_t tmp_chpl10 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl2;
  chpl__class_localson_fn_chpl59_object chpl_macro_tmp_6151;
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_6152;
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_6153;
  chpl__class_localson_fn104_object chpl_macro_tmp_6154;
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_6155;
  result_chpl = ReplicatedArr_chpl(this_chpl6);
  tmp_chpl = (this_chpl6)->dist_chpl;
  coerce_tmp_chpl = (&tmp_chpl)->addr;
  call_tmp_chpl = &((coerce_tmp_chpl)->targetLocales_chpl);
  call_tmp_chpl2 = &((this_chpl6)->localDoms_chpl);
  call_tmp_chpl3 = &((result_chpl)->localArrs_chpl);
  i__e1_x_chpl = call_tmp_chpl;
  i__e2_x_chpl = call_tmp_chpl2;
  i__e3_x_chpl = call_tmp_chpl3;
  this_x1_chpl = *(i__e1_x_chpl);
  this_x2_chpl = *(i__e2_x_chpl);
  this_x3_chpl = *(i__e3_x_chpl);
  cast_tmp_chpl = chpl_here_alloc(sizeof(chpl_chpl___EndCount_atomic_int64_int64_t_object), INT16(2));
  this_chpl7 = ((chpl___EndCount_atomic_int64_int64_t)(cast_tmp_chpl));
  ((object)(this_chpl7))->chpl__cid = chpl__cid_chpl___EndCount_atomic_int64_int64_t;
  (this_chpl7)->i = _init_class_tmp__chpl;
  (this_chpl7)->taskCnt = INT64(0);
  (this_chpl7)->taskList = NULL;
  ret_chpl = type_tmp_chpl;
  _ref_tmp__chpl = &ret_chpl;
  atomic_init_int_least64_t(_ref_tmp__chpl, INT64(0));
  (&this_chpl8)->_v = ret_chpl;
  ret_to_arg_ref_tmp__chpl = &ret_tmp_chpl;
  _construct_atomic_int64(ret_chpl, &this_chpl8, ret_to_arg_ref_tmp__chpl);
  (this_chpl7)->i = ret_tmp_chpl;
  (this_chpl7)->taskCnt = INT64(0);
  call_tmp_chpl4 = ((c_void_ptr)(nil));
  (this_chpl7)->taskList = call_tmp_chpl4;
  wrap_call_tmp_chpl = _construct__EndCount(&ret_tmp_chpl, INT64(0), call_tmp_chpl4, this_chpl7);
  _coforallCount_chpl = wrap_call_tmp_chpl;
  call_tmp_chpl5 = this_x1_chpl;
  ret_chpl2 = (&call_tmp_chpl5)->_instance;
  cast_tmp_chpl2 = chpl_here_alloc(sizeof(chpl__ic_these_DefaultAssociativeArr_locale_int64_t_T_object), INT16(128));
  _ic__chpl = ((_ic_these_DefaultAssociativeArr_locale_int64_t_T)(cast_tmp_chpl2));
  ((object)(_ic__chpl))->chpl__cid = chpl__cid__ic_these_DefaultAssociativeArr_locale_int64_t_T;
  (_ic__chpl)->more = INT64(1);
  (_ic__chpl)->F0_this = ret_chpl2;
  call_tmp_chpl6 = this_x2_chpl;
  ret_chpl3 = (&call_tmp_chpl6)->_instance;
  cast_tmp_chpl3 = chpl_here_alloc(sizeof(chpl__ic_these_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T_object), INT16(139));
  _ic__chpl2 = ((_ic_these_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T)(cast_tmp_chpl3));
  ((object)(_ic__chpl2))->chpl__cid = chpl__cid__ic_these_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T;
  (_ic__chpl2)->more = INT64(1);
  (_ic__chpl2)->F0_this = ret_chpl3;
  call_tmp_chpl7 = this_x3_chpl;
  ret_chpl4 = (&call_tmp_chpl7)->_instance;
  cast_tmp_chpl4 = chpl_here_alloc(sizeof(chpl__ic_these_DefaultAssociativeArr_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t_T_object), INT16(155));
  _ic__chpl3 = ((_ic_these_DefaultAssociativeArr_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t_T)(cast_tmp_chpl4));
  ((object)(_ic__chpl3))->chpl__cid = chpl__cid__ic_these_DefaultAssociativeArr_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t_T;
  (_ic__chpl3)->more = INT64(1);
  (_ic__chpl3)->F0_this = ret_chpl4;
  advance(_ic__chpl);
  advance3(_ic__chpl2);
  advance2(_ic__chpl3);
  for (; (tmp_chpl8 = (_ic__chpl)->more,tmp_chpl8); ) {
    tmp_chpl2 = (_ic__chpl3)->value;
    tmp_chpl3 = (_ic__chpl2)->value;
    tmp_chpl4 = (_ic__chpl)->value;
    _upEndCount2(_coforallCount_chpl);
    chpl_gen_comm_get(((void*)(&tmp_chpl5)), chpl_nodeFromLocaleID(&((tmp_chpl4).locale), INT64(0), INT32(0)), (tmp_chpl4).addr, sizeof(chpl____wide_locale), -1, COMMID(76), INT64(499), INT64(58));
    call_tmp_chpl8 = (&tmp_chpl5)->locale;
    chpl_gen_comm_get(((void*)(&rvfDerefTmp_chpl)), chpl_nodeFromLocaleID(&((tmp_chpl3).locale), INT64(0), INT32(0)), (tmp_chpl3).addr, sizeof(chpl____wide_LocReplicatedDom_1_int64_t_F), -1, COMMID(77), INT64(497), INT64(58));
    rvfDerefTmp_chpl2 = _coforallCount_chpl;
    _args_foron_fn_chpl = ((_class_localson_fn_chpl59)(&chpl_macro_tmp_6151));
    (_args_foron_fn_chpl)->_0_rvfDerefTmp_chpl = call_tmp_chpl8;
    (_args_foron_fn_chpl)->_1_rvfDerefTmp_chpl = rvfDerefTmp_chpl;
    tmp_chpl6 = tmp_chpl2;
    (_args_foron_fn_chpl)->_2_tmp_chpl = tmp_chpl6;
    chpl_macro_tmp_6152.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_6152.addr = rvfDerefTmp_chpl2;
    tmp_chpl7 = chpl_macro_tmp_6152;
    (_args_foron_fn_chpl)->_3_rvfDerefTmp_chpl = tmp_chpl7;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    /*** wrapon_fn_chpl59 ***/ chpl_executeOnNB(&call_tmp_chpl8, INT32(315), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), sizeof(chpl__class_localson_fn_chpl59_object), INT64(499), INT32(58));
    advance(_ic__chpl);
    advance3(_ic__chpl2);
    advance2(_ic__chpl3);
  }
  call_tmp_chpl9 = ((void*)(_ic__chpl));
  chpl_here_free(call_tmp_chpl9);
  call_tmp_chpl10 = ((void*)(_ic__chpl2));
  chpl_here_free(call_tmp_chpl10);
  call_tmp_chpl11 = ((void*)(_ic__chpl3));
  chpl_here_free(call_tmp_chpl11);
  _waitEndCount2(_coforallCount_chpl);
  _field_destructor_tmp__chpl = &((_coforallCount_chpl)->i);
  call_tmp_chpl12 = &((_field_destructor_tmp__chpl)->_v);
  atomic_destroy_int_least64_t(call_tmp_chpl12);
  call_tmp_chpl13 = chpl_gen_getLocaleID();
  rvfDerefTmp_chpl3 = _coforallCount_chpl;
  isdirect_chpl = chpl_doDirectExecuteOn(&call_tmp_chpl13);
  if (isdirect_chpl) {
    chpl_macro_tmp_6153.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_6153.addr = rvfDerefTmp_chpl3;
    tmp_chpl9 = chpl_macro_tmp_6153;
    on_fn123(tmp_chpl9);
  } else {
    _args_foron_fn_chpl2 = ((_class_localson_fn104)(&chpl_macro_tmp_6154));
    (_args_foron_fn_chpl2)->_0_rvfDerefTmp = call_tmp_chpl13;
    chpl_macro_tmp_6155.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_6155.addr = rvfDerefTmp_chpl3;
    tmp_chpl10 = chpl_macro_tmp_6155;
    (_args_foron_fn_chpl2)->_1_rvfDerefTmp = tmp_chpl10;
    _args_vforon_fn_chpl2 = ((void*)(_args_foron_fn_chpl2));
    /*** wrapon_fn131 ***/ chpl_executeOn(&call_tmp_chpl13, INT32(196), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl2)), sizeof(chpl__class_localson_fn104_object), INT64(1227), INT32(2));
  }
  return result_chpl;
}

/* ReplicatedDist.chpl:499 */
static void wrapon_fn_chpl60(_class_localson_fn_chpl60 c_chpl) {
  chpl____wide_LocReplicatedDom_1_int64_t_F _1_rvfDerefTmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide_LocReplicatedArr_FCHGlobalNode_1_int64_t_F _2_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__EndCount_atomic_int64_int64_t _3_rvfDerefTmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__EndCount_atomic_int64_int64_t endcount_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _1_rvfDerefTmp_chpl = (c_chpl)->_1_rvfDerefTmp_chpl;
  _2_tmp_chpl = (c_chpl)->_2_tmp_chpl;
  _3_rvfDerefTmp_chpl = (c_chpl)->_3_rvfDerefTmp_chpl;
  on_fn_chpl60(&_1_rvfDerefTmp_chpl, _2_tmp_chpl, _3_rvfDerefTmp_chpl);
  endcount_chpl = (c_chpl)->_3_rvfDerefTmp_chpl;
  _downEndCount(endcount_chpl);
  return;
}

/* ReplicatedDist.chpl:499 */
static void wrapon_fn_chpl59(_class_localson_fn_chpl59 c_chpl) {
  chpl____wide_LocReplicatedDom_1_int64_t_F _1_rvfDerefTmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F _2_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__EndCount_atomic_int64_int64_t _3_rvfDerefTmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__EndCount_atomic_int64_int64_t endcount_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _1_rvfDerefTmp_chpl = (c_chpl)->_1_rvfDerefTmp_chpl;
  _2_tmp_chpl = (c_chpl)->_2_tmp_chpl;
  _3_rvfDerefTmp_chpl = (c_chpl)->_3_rvfDerefTmp_chpl;
  on_fn_chpl59(&_1_rvfDerefTmp_chpl, _2_tmp_chpl, _3_rvfDerefTmp_chpl);
  endcount_chpl = (c_chpl)->_3_rvfDerefTmp_chpl;
  _downEndCount(endcount_chpl);
  return;
}

/* ReplicatedDist.chpl:499 */
static void on_fn_chpl59(_ref__wide_LocReplicatedDom_1_int64_t_F locDom_chpl,
                         chpl____wide__ref__wide_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F locArr_chpl,
                         chpl____wide__EndCount_atomic_int64_int64_t _coforallCount_chpl) {
  chpl____wide_LocReplicatedDom_1_int64_t_F coerce_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_chpl this_chpl6 = NULL;
  c_void_ptr cast_tmp_chpl;
  chpl____wide_LocReplicatedDom_1_int64_t_F tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _array_DefaultRectangularArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t _init_class_tmp__chpl;
  chpl____wide_DefaultRectangularArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_LocReplicatedDom_1_int64_t_F wrap_arg_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_F call_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_F call_tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl___RuntimeTypeInfo22 call_tmp_chpl3;
  chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_F i_dom_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _domain_DefaultRectangularDom_1_int64_t_F _runtime_type_tmp__chpl;
  _domain_DefaultRectangularDom_1_int64_t_F tmp_chpl3;
  _array_DefaultRectangularArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t ret_tmp_chpl;
  _ref__array_DefaultRectangularArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t ret_to_arg_ref_tmp__chpl = NULL;
  _array_DefaultRectangularArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t retarg_tmp_chpl;
  LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_chpl wrap_call_tmp_chpl = NULL;
  chpl____wide_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__nilType chpl_macro_tmp_6156;
  chpl____wide_LocReplicatedDom_1_int64_t_F chpl_macro_tmp_6157;
  chpl____wide__nilType chpl_macro_tmp_6158;
  chpl____wide_DefaultRectangularArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t chpl_macro_tmp_6159;
  chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_6160;
  chpl____wide_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F chpl_macro_tmp_6161;
  coerce_tmp_chpl = *(locDom_chpl);
  cast_tmp_chpl = chpl_here_alloc(sizeof(chpl_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_chpl_object), INT16(148));
  this_chpl6 = ((LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_chpl)(cast_tmp_chpl));
  ((object)(this_chpl6))->chpl__cid = chpl__cid_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_chpl;
  chpl_macro_tmp_6156.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_6156.addr = nil;
  chpl_macro_tmp_6157.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_6157.addr = NULL;
  tmp_chpl = chpl_macro_tmp_6157;
  (this_chpl6)->myDom_chpl = tmp_chpl;
  (&_init_class_tmp__chpl)->_pid = INT64(0);
  chpl_macro_tmp_6158.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_6158.addr = nil;
  chpl_macro_tmp_6159.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_6159.addr = NULL;
  tmp_chpl2 = chpl_macro_tmp_6159;
  (&_init_class_tmp__chpl)->_instance = tmp_chpl2;
  (&_init_class_tmp__chpl)->_unowned = UINT8(false);
  (this_chpl6)->arrLocalRep_chpl = _init_class_tmp__chpl;
  wrap_arg_chpl = coerce_tmp_chpl;
  (this_chpl6)->myDom_chpl = coerce_tmp_chpl;
  chpl_macro_tmp_6160.locale = (&wrap_arg_chpl)->locale;
  chpl_macro_tmp_6160.addr = &(((&wrap_arg_chpl)->addr)->domLocalRep_chpl);
  call_tmp_chpl = chpl_macro_tmp_6160;
  call_tmp_chpl2 = chpl__ensureDomainExpr5(call_tmp_chpl);
  i_dom_chpl = call_tmp_chpl2;
  call_tmp_chpl3 = chpl__buildArrayRuntimeType13(i_dom_chpl);
  tmp_chpl3 = (&call_tmp_chpl3)->dom;
  _runtime_type_tmp__chpl = tmp_chpl3;
  ret_to_arg_ref_tmp__chpl = &retarg_tmp_chpl;
  chpl__convertRuntimeTypeToValue10(&_runtime_type_tmp__chpl, ret_to_arg_ref_tmp__chpl);
  ret_tmp_chpl = retarg_tmp_chpl;
  (this_chpl6)->arrLocalRep_chpl = ret_tmp_chpl;
  wrap_call_tmp_chpl = _construct_LocReplicatedArr_chpl(wrap_arg_chpl, &ret_tmp_chpl, this_chpl6);
  chpl_macro_tmp_6161.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_6161.addr = wrap_call_tmp_chpl;
  tmp_chpl4 = chpl_macro_tmp_6161;
  chpl_gen_comm_put(((void*)(&tmp_chpl4)), chpl_nodeFromLocaleID(&((locArr_chpl).locale), INT64(0), INT32(0)), (locArr_chpl).addr, sizeof(chpl____wide_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F), -1, COMMID(78), INT64(500), INT64(58));
  return;
}

/* ReplicatedDist.chpl:499 */
static void on_fn_chpl60(_ref__wide_LocReplicatedDom_1_int64_t_F locDom_chpl,
                         chpl____wide__ref__wide_LocReplicatedArr_FCHGlobalNode_1_int64_t_F locArr_chpl,
                         chpl____wide__EndCount_atomic_int64_int64_t _coforallCount_chpl) {
  chpl____wide_LocReplicatedDom_1_int64_t_F coerce_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  LocReplicatedArr_FCHGlobalNode_1_int64_t_F_chpl this_chpl6 = NULL;
  c_void_ptr cast_tmp_chpl;
  chpl____wide_LocReplicatedDom_1_int64_t_F tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t _init_class_tmp__chpl;
  chpl____wide_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_LocReplicatedDom_1_int64_t_F wrap_arg_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_F call_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_F call_tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl___RuntimeTypeInfo12 call_tmp_chpl3;
  chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_F i_dom_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _domain_DefaultRectangularDom_1_int64_t_F _runtime_type_tmp__chpl;
  _domain_DefaultRectangularDom_1_int64_t_F tmp_chpl3;
  _array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t ret_tmp_chpl;
  _ref__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t ret_to_arg_ref_tmp__chpl = NULL;
  _array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t retarg_tmp_chpl;
  LocReplicatedArr_FCHGlobalNode_1_int64_t_F_chpl wrap_call_tmp_chpl = NULL;
  chpl____wide_LocReplicatedArr_FCHGlobalNode_1_int64_t_F tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__nilType chpl_macro_tmp_6162;
  chpl____wide_LocReplicatedDom_1_int64_t_F chpl_macro_tmp_6163;
  chpl____wide__nilType chpl_macro_tmp_6164;
  chpl____wide_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t chpl_macro_tmp_6165;
  chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_6166;
  chpl____wide_LocReplicatedArr_FCHGlobalNode_1_int64_t_F chpl_macro_tmp_6167;
  coerce_tmp_chpl = *(locDom_chpl);
  cast_tmp_chpl = chpl_here_alloc(sizeof(chpl_LocReplicatedArr_FCHGlobalNode_1_int64_t_F_chpl_object), INT16(158));
  this_chpl6 = ((LocReplicatedArr_FCHGlobalNode_1_int64_t_F_chpl)(cast_tmp_chpl));
  ((object)(this_chpl6))->chpl__cid = chpl__cid_LocReplicatedArr_FCHGlobalNode_1_int64_t_F_chpl;
  chpl_macro_tmp_6162.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_6162.addr = nil;
  chpl_macro_tmp_6163.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_6163.addr = NULL;
  tmp_chpl = chpl_macro_tmp_6163;
  (this_chpl6)->myDom_chpl = tmp_chpl;
  (&_init_class_tmp__chpl)->_pid = INT64(0);
  chpl_macro_tmp_6164.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_6164.addr = nil;
  chpl_macro_tmp_6165.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_6165.addr = NULL;
  tmp_chpl2 = chpl_macro_tmp_6165;
  (&_init_class_tmp__chpl)->_instance = tmp_chpl2;
  (&_init_class_tmp__chpl)->_unowned = UINT8(false);
  (this_chpl6)->arrLocalRep_chpl = _init_class_tmp__chpl;
  wrap_arg_chpl = coerce_tmp_chpl;
  (this_chpl6)->myDom_chpl = coerce_tmp_chpl;
  chpl_macro_tmp_6166.locale = (&wrap_arg_chpl)->locale;
  chpl_macro_tmp_6166.addr = &(((&wrap_arg_chpl)->addr)->domLocalRep_chpl);
  call_tmp_chpl = chpl_macro_tmp_6166;
  call_tmp_chpl2 = chpl__ensureDomainExpr5(call_tmp_chpl);
  i_dom_chpl = call_tmp_chpl2;
  call_tmp_chpl3 = chpl__buildArrayRuntimeType19(i_dom_chpl);
  tmp_chpl3 = (&call_tmp_chpl3)->dom;
  _runtime_type_tmp__chpl = tmp_chpl3;
  ret_to_arg_ref_tmp__chpl = &retarg_tmp_chpl;
  chpl__convertRuntimeTypeToValue13(&_runtime_type_tmp__chpl, ret_to_arg_ref_tmp__chpl);
  ret_tmp_chpl = retarg_tmp_chpl;
  (this_chpl6)->arrLocalRep_chpl = ret_tmp_chpl;
  wrap_call_tmp_chpl = _construct_LocReplicatedArr_chpl2(wrap_arg_chpl, &ret_tmp_chpl, this_chpl6);
  chpl_macro_tmp_6167.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_6167.addr = wrap_call_tmp_chpl;
  tmp_chpl4 = chpl_macro_tmp_6167;
  chpl_gen_comm_put(((void*)(&tmp_chpl4)), chpl_nodeFromLocaleID(&((locArr_chpl).locale), INT64(0), INT32(0)), (locArr_chpl).addr, sizeof(chpl____wide_LocReplicatedArr_FCHGlobalNode_1_int64_t_F), -1, COMMID(79), INT64(500), INT64(58));
  return;
}

/* ReplicatedDist.chpl:506 */
static chpl____wide__ref_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t dsiAccess_chpl4(ReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_ReplicatedDom_1_int64_t_F_chpl this_chpl6,
                                                                                                  _ref__tuple_1_star_int64_t indexx_chpl) {
  chpl____wide_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F call_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide__array_DefaultRectangularArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t call_tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t call_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t ret_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t ret_chpl2;
  chpl____wide__ddata_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t coerce_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t call_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide__array_DefaultRectangularArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t chpl_macro_tmp_6168;
  chpl____wide__ref__wide_DefaultRectangularArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t chpl_macro_tmp_6169;
  chpl____wide__ref__wide__ddata_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t chpl_macro_tmp_6170;
  chpl____wide__ref_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t chpl_macro_tmp_6171;
  call_tmp_chpl = chpl_myLocArr(this_chpl6);
  chpl_macro_tmp_6168.locale = (&call_tmp_chpl)->locale;
  chpl_macro_tmp_6168.addr = &(((&call_tmp_chpl)->addr)->arrLocalRep_chpl);
  call_tmp_chpl2 = chpl_macro_tmp_6168;
  chpl_macro_tmp_6169.locale = (call_tmp_chpl2).locale;
  chpl_macro_tmp_6169.addr = &(((call_tmp_chpl2).addr)->_instance);
  chpl_gen_comm_get(((void*)(&ret_chpl)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_6169).locale), INT64(0), INT32(0)), (chpl_macro_tmp_6169).addr, sizeof(chpl____wide_DefaultRectangularArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t), -1, COMMID(80), INT64(507), INT64(58));
  call_tmp_chpl3 = ret_chpl;
  ret_chpl2 = *(*(indexx_chpl) + INT64(0));
  chpl_macro_tmp_6170.locale = (&call_tmp_chpl3)->locale;
  chpl_macro_tmp_6170.addr = &(((&call_tmp_chpl3)->addr)->shiftedData);
  chpl_gen_comm_get(((void*)(&coerce_tmp_chpl)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_6170).locale), INT64(0), INT32(0)), (chpl_macro_tmp_6170).addr, sizeof(chpl____wide__ddata_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t), -1, COMMID(81), INT64(507), INT64(58));
  chpl_macro_tmp_6171.locale = (&coerce_tmp_chpl)->locale;
  chpl_macro_tmp_6171.addr = ((&coerce_tmp_chpl)->addr + ret_chpl2);
  call_tmp_chpl4 = chpl_macro_tmp_6171;
  return call_tmp_chpl4;
}

/* ReplicatedDist.chpl:506 */
static chpl____wide__ref__wide_FCHGlobalNode dsiAccess_chpl3(ReplicatedArr_FCHGlobalNode_ReplicatedDom_1_int64_t_F_chpl this_chpl6,
                                                             _ref__tuple_1_star_int64_t indexx_chpl) {
  chpl____wide_LocReplicatedArr_FCHGlobalNode_1_int64_t_F call_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t call_tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t call_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t ret_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t ret_chpl2;
  chpl____wide__ddata_FCHGlobalNode coerce_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide_FCHGlobalNode call_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t chpl_macro_tmp_6172;
  chpl____wide__ref__wide_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t chpl_macro_tmp_6173;
  chpl____wide__ref__wide__ddata_FCHGlobalNode chpl_macro_tmp_6174;
  chpl____wide__ref__wide_FCHGlobalNode chpl_macro_tmp_6175;
  call_tmp_chpl = chpl_myLocArr2(this_chpl6);
  chpl_macro_tmp_6172.locale = (&call_tmp_chpl)->locale;
  chpl_macro_tmp_6172.addr = &(((&call_tmp_chpl)->addr)->arrLocalRep_chpl);
  call_tmp_chpl2 = chpl_macro_tmp_6172;
  chpl_macro_tmp_6173.locale = (call_tmp_chpl2).locale;
  chpl_macro_tmp_6173.addr = &(((call_tmp_chpl2).addr)->_instance);
  chpl_gen_comm_get(((void*)(&ret_chpl)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_6173).locale), INT64(0), INT32(0)), (chpl_macro_tmp_6173).addr, sizeof(chpl____wide_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t), -1, COMMID(82), INT64(507), INT64(58));
  call_tmp_chpl3 = ret_chpl;
  ret_chpl2 = *(*(indexx_chpl) + INT64(0));
  chpl_macro_tmp_6174.locale = (&call_tmp_chpl3)->locale;
  chpl_macro_tmp_6174.addr = &(((&call_tmp_chpl3)->addr)->shiftedData);
  chpl_gen_comm_get(((void*)(&coerce_tmp_chpl)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_6174).locale), INT64(0), INT32(0)), (chpl_macro_tmp_6174).addr, sizeof(chpl____wide__ddata_FCHGlobalNode), -1, COMMID(83), INT64(507), INT64(58));
  chpl_macro_tmp_6175.locale = (&coerce_tmp_chpl)->locale;
  chpl_macro_tmp_6175.addr = ((&coerce_tmp_chpl)->addr + ret_chpl2);
  call_tmp_chpl4 = chpl_macro_tmp_6175;
  return call_tmp_chpl4;
}

/* ReplicatedDist.chpl:526 */
static void dsiDestroyArr_chpl3(chpl____wide_ReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_ReplicatedDom_1_int64_t_F this_chpl6,
                                chpl_bool isslice_chpl) {
  chpl____wide_ReplicatedDom_1_int64_t_F coerce_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Replicated coerce_tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide__array_DefaultAssociativeArr_locale_int64_t_T call_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide__array_DefaultAssociativeArr_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t_T call_tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide__array_DefaultAssociativeArr_locale_int64_t_T i__e1_x_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide__array_DefaultAssociativeArr_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t_T i__e2_x_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _array_DefaultAssociativeArr_locale_int64_t_T this_x1_chpl;
  _array_DefaultAssociativeArr_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t_T this_x2_chpl;
  chpl___EndCount_atomic_int64_int64_t _coforallCount_chpl = NULL;
  chpl___EndCount_atomic_int64_int64_t this_chpl7 = NULL;
  c_void_ptr cast_tmp_chpl;
  atomic_int64 _init_class_tmp__chpl;
  atomic_int64 this_chpl8;
  atomic_int_least64_t ret_chpl;
  atomic_int_least64_t type_tmp_chpl;
  _ref_atomic_int_least64_t _ref_tmp__chpl = NULL;
  atomic_int64 ret_tmp_chpl;
  _ref_atomic_int64 ret_to_arg_ref_tmp__chpl = NULL;
  c_void_ptr call_tmp_chpl3;
  chpl___EndCount_atomic_int64_int64_t wrap_call_tmp_chpl = NULL;
  _array_DefaultAssociativeArr_locale_int64_t_T call_tmp_chpl4;
  chpl____wide_DefaultAssociativeArr_locale_int64_t_T ret_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  _ic_these_DefaultAssociativeArr_locale_int64_t_T _ic__chpl = NULL;
  c_void_ptr cast_tmp_chpl2;
  _array_DefaultAssociativeArr_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t_T call_tmp_chpl5;
  chpl____wide_DefaultAssociativeArr_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t_T ret_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  _ic_these_DefaultAssociativeArr_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t_T _ic__chpl2 = NULL;
  c_void_ptr cast_tmp_chpl3;
  chpl____wide__ref__wide_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide_locale tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp_chpl6;
  chpl____wide_locale tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F rvfDerefTmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl___EndCount_atomic_int64_int64_t rvfDerefTmp_chpl2 = NULL;
  _class_localson_fn_chpl61 _args_foron_fn_chpl = NULL;
  chpl____wide__EndCount_atomic_int64_int64_t tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  int64_t tmp_chpl5;
  c_void_ptr call_tmp_chpl7;
  c_void_ptr call_tmp_chpl8;
  _ref_atomic_int64 _field_destructor_tmp__chpl = NULL;
  _ref_atomic_int_least64_t call_tmp_chpl9 = NULL;
  chpl_localeID_t call_tmp_chpl10;
  chpl___EndCount_atomic_int64_int64_t rvfDerefTmp_chpl3 = NULL;
  chpl_bool isdirect_chpl;
  chpl____wide__EndCount_atomic_int64_int64_t tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn104 _args_foron_fn_chpl2 = NULL;
  chpl____wide__EndCount_atomic_int64_int64_t tmp_chpl7 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl2;
  chpl____wide__ref__wide_ReplicatedDom_1_int64_t_F chpl_macro_tmp_6176;
  chpl____wide__ref__wide_Replicated chpl_macro_tmp_6177;
  chpl____wide__ref__wide__array_DefaultAssociativeArr_locale_int64_t_T chpl_macro_tmp_6178;
  chpl____wide__ref__wide__array_DefaultAssociativeArr_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t_T chpl_macro_tmp_6179;
  chpl__class_localson_fn_chpl61_object chpl_macro_tmp_6180;
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_6181;
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_6182;
  chpl__class_localson_fn104_object chpl_macro_tmp_6183;
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_6184;
  chpl_macro_tmp_6176.locale = (&this_chpl6)->locale;
  chpl_macro_tmp_6176.addr = &(((&this_chpl6)->addr)->dom_chpl);
  chpl_gen_comm_get(((void*)(&coerce_tmp_chpl)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_6176).locale), INT64(0), INT32(0)), (chpl_macro_tmp_6176).addr, sizeof(chpl____wide_ReplicatedDom_1_int64_t_F), -1, COMMID(84), INT64(527), INT64(58));
  chpl_macro_tmp_6177.locale = (&coerce_tmp_chpl)->locale;
  chpl_macro_tmp_6177.addr = &(((&coerce_tmp_chpl)->addr)->dist_chpl);
  chpl_gen_comm_get(((void*)(&coerce_tmp_chpl2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_6177).locale), INT64(0), INT32(0)), (chpl_macro_tmp_6177).addr, sizeof(chpl____wide_Replicated), -1, COMMID(85), INT64(527), INT64(58));
  chpl_macro_tmp_6178.locale = (&coerce_tmp_chpl2)->locale;
  chpl_macro_tmp_6178.addr = &(((&coerce_tmp_chpl2)->addr)->targetLocales_chpl);
  call_tmp_chpl = chpl_macro_tmp_6178;
  chpl_macro_tmp_6179.locale = (&this_chpl6)->locale;
  chpl_macro_tmp_6179.addr = &(((&this_chpl6)->addr)->localArrs_chpl);
  call_tmp_chpl2 = chpl_macro_tmp_6179;
  i__e1_x_chpl = call_tmp_chpl;
  i__e2_x_chpl = call_tmp_chpl2;
  chpl_gen_comm_get(((void*)(&this_x1_chpl)), chpl_nodeFromLocaleID(&((i__e1_x_chpl).locale), INT64(0), INT32(0)), (i__e1_x_chpl).addr, sizeof(_array_DefaultAssociativeArr_locale_int64_t_T), -1, COMMID(86), INT64(527), INT64(58));
  chpl_gen_comm_get(((void*)(&this_x2_chpl)), chpl_nodeFromLocaleID(&((i__e2_x_chpl).locale), INT64(0), INT32(0)), (i__e2_x_chpl).addr, sizeof(_array_DefaultAssociativeArr_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t_T), -1, COMMID(87), INT64(527), INT64(58));
  cast_tmp_chpl = chpl_here_alloc(sizeof(chpl_chpl___EndCount_atomic_int64_int64_t_object), INT16(2));
  this_chpl7 = ((chpl___EndCount_atomic_int64_int64_t)(cast_tmp_chpl));
  ((object)(this_chpl7))->chpl__cid = chpl__cid_chpl___EndCount_atomic_int64_int64_t;
  (this_chpl7)->i = _init_class_tmp__chpl;
  (this_chpl7)->taskCnt = INT64(0);
  (this_chpl7)->taskList = NULL;
  ret_chpl = type_tmp_chpl;
  _ref_tmp__chpl = &ret_chpl;
  atomic_init_int_least64_t(_ref_tmp__chpl, INT64(0));
  (&this_chpl8)->_v = ret_chpl;
  ret_to_arg_ref_tmp__chpl = &ret_tmp_chpl;
  _construct_atomic_int64(ret_chpl, &this_chpl8, ret_to_arg_ref_tmp__chpl);
  (this_chpl7)->i = ret_tmp_chpl;
  (this_chpl7)->taskCnt = INT64(0);
  call_tmp_chpl3 = ((c_void_ptr)(nil));
  (this_chpl7)->taskList = call_tmp_chpl3;
  wrap_call_tmp_chpl = _construct__EndCount(&ret_tmp_chpl, INT64(0), call_tmp_chpl3, this_chpl7);
  _coforallCount_chpl = wrap_call_tmp_chpl;
  call_tmp_chpl4 = this_x1_chpl;
  ret_chpl2 = (&call_tmp_chpl4)->_instance;
  cast_tmp_chpl2 = chpl_here_alloc(sizeof(chpl__ic_these_DefaultAssociativeArr_locale_int64_t_T_object), INT16(128));
  _ic__chpl = ((_ic_these_DefaultAssociativeArr_locale_int64_t_T)(cast_tmp_chpl2));
  ((object)(_ic__chpl))->chpl__cid = chpl__cid__ic_these_DefaultAssociativeArr_locale_int64_t_T;
  (_ic__chpl)->more = INT64(1);
  (_ic__chpl)->F0_this = ret_chpl2;
  call_tmp_chpl5 = this_x2_chpl;
  ret_chpl3 = (&call_tmp_chpl5)->_instance;
  cast_tmp_chpl3 = chpl_here_alloc(sizeof(chpl__ic_these_DefaultAssociativeArr_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t_T_object), INT16(155));
  _ic__chpl2 = ((_ic_these_DefaultAssociativeArr_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t_T)(cast_tmp_chpl3));
  ((object)(_ic__chpl2))->chpl__cid = chpl__cid__ic_these_DefaultAssociativeArr_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t_T;
  (_ic__chpl2)->more = INT64(1);
  (_ic__chpl2)->F0_this = ret_chpl3;
  advance(_ic__chpl);
  advance2(_ic__chpl2);
  for (; (tmp_chpl5 = (_ic__chpl)->more,tmp_chpl5); ) {
    tmp_chpl = (_ic__chpl2)->value;
    tmp_chpl2 = (_ic__chpl)->value;
    _upEndCount2(_coforallCount_chpl);
    chpl_gen_comm_get(((void*)(&tmp_chpl3)), chpl_nodeFromLocaleID(&((tmp_chpl2).locale), INT64(0), INT32(0)), (tmp_chpl2).addr, sizeof(chpl____wide_locale), -1, COMMID(88), INT64(528), INT64(58));
    call_tmp_chpl6 = (&tmp_chpl3)->locale;
    chpl_gen_comm_get(((void*)(&coerce_tmp_chpl3)), chpl_nodeFromLocaleID(&((tmp_chpl).locale), INT64(0), INT32(0)), (tmp_chpl).addr, sizeof(chpl____wide_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F), -1, COMMID(89), INT64(527), INT64(58));
    rvfDerefTmp_chpl = coerce_tmp_chpl3;
    rvfDerefTmp_chpl2 = _coforallCount_chpl;
    _args_foron_fn_chpl = ((_class_localson_fn_chpl61)(&chpl_macro_tmp_6180));
    (_args_foron_fn_chpl)->_0_rvfDerefTmp_chpl = call_tmp_chpl6;
    (_args_foron_fn_chpl)->_1_rvfDerefTmp_chpl = rvfDerefTmp_chpl;
    chpl_macro_tmp_6181.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_6181.addr = rvfDerefTmp_chpl2;
    tmp_chpl4 = chpl_macro_tmp_6181;
    (_args_foron_fn_chpl)->_2_rvfDerefTmp_chpl = tmp_chpl4;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    /*** wrapon_fn_chpl61 ***/ chpl_executeOnNB(&call_tmp_chpl6, INT32(317), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), sizeof(chpl__class_localson_fn_chpl61_object), INT64(528), INT32(58));
    advance(_ic__chpl);
    advance2(_ic__chpl2);
  }
  call_tmp_chpl7 = ((void*)(_ic__chpl));
  chpl_here_free(call_tmp_chpl7);
  call_tmp_chpl8 = ((void*)(_ic__chpl2));
  chpl_here_free(call_tmp_chpl8);
  _waitEndCount2(_coforallCount_chpl);
  _field_destructor_tmp__chpl = &((_coforallCount_chpl)->i);
  call_tmp_chpl9 = &((_field_destructor_tmp__chpl)->_v);
  atomic_destroy_int_least64_t(call_tmp_chpl9);
  call_tmp_chpl10 = chpl_gen_getLocaleID();
  rvfDerefTmp_chpl3 = _coforallCount_chpl;
  isdirect_chpl = chpl_doDirectExecuteOn(&call_tmp_chpl10);
  if (isdirect_chpl) {
    chpl_macro_tmp_6182.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_6182.addr = rvfDerefTmp_chpl3;
    tmp_chpl6 = chpl_macro_tmp_6182;
    on_fn123(tmp_chpl6);
  } else {
    _args_foron_fn_chpl2 = ((_class_localson_fn104)(&chpl_macro_tmp_6183));
    (_args_foron_fn_chpl2)->_0_rvfDerefTmp = call_tmp_chpl10;
    chpl_macro_tmp_6184.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_6184.addr = rvfDerefTmp_chpl3;
    tmp_chpl7 = chpl_macro_tmp_6184;
    (_args_foron_fn_chpl2)->_1_rvfDerefTmp = tmp_chpl7;
    _args_vforon_fn_chpl2 = ((void*)(_args_foron_fn_chpl2));
    /*** wrapon_fn131 ***/ chpl_executeOn(&call_tmp_chpl10, INT32(196), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl2)), sizeof(chpl__class_localson_fn104_object), INT64(1227), INT32(2));
  }
  return;
}

/* ReplicatedDist.chpl:526 */
static void dsiDestroyArr_chpl4(chpl____wide_ReplicatedArr_FCHGlobalNode_ReplicatedDom_1_int64_t_F this_chpl6,
                                chpl_bool isslice_chpl) {
  chpl____wide_ReplicatedDom_1_int64_t_F coerce_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_Replicated coerce_tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide__array_DefaultAssociativeArr_locale_int64_t_T call_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide__array_DefaultAssociativeArr_LocReplicatedArr_FCHGlobalNode_1_int64_t_F_int64_t_T call_tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide__array_DefaultAssociativeArr_locale_int64_t_T i__e1_x_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide__array_DefaultAssociativeArr_LocReplicatedArr_FCHGlobalNode_1_int64_t_F_int64_t_T i__e2_x_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _array_DefaultAssociativeArr_locale_int64_t_T this_x1_chpl;
  _array_DefaultAssociativeArr_LocReplicatedArr_FCHGlobalNode_1_int64_t_F_int64_t_T this_x2_chpl;
  chpl___EndCount_atomic_int64_int64_t _coforallCount_chpl = NULL;
  chpl___EndCount_atomic_int64_int64_t this_chpl7 = NULL;
  c_void_ptr cast_tmp_chpl;
  atomic_int64 _init_class_tmp__chpl;
  atomic_int64 this_chpl8;
  atomic_int_least64_t ret_chpl;
  atomic_int_least64_t type_tmp_chpl;
  _ref_atomic_int_least64_t _ref_tmp__chpl = NULL;
  atomic_int64 ret_tmp_chpl;
  _ref_atomic_int64 ret_to_arg_ref_tmp__chpl = NULL;
  c_void_ptr call_tmp_chpl3;
  chpl___EndCount_atomic_int64_int64_t wrap_call_tmp_chpl = NULL;
  _array_DefaultAssociativeArr_locale_int64_t_T call_tmp_chpl4;
  chpl____wide_DefaultAssociativeArr_locale_int64_t_T ret_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  _ic_these_DefaultAssociativeArr_locale_int64_t_T _ic__chpl = NULL;
  c_void_ptr cast_tmp_chpl2;
  _array_DefaultAssociativeArr_LocReplicatedArr_FCHGlobalNode_1_int64_t_F_int64_t_T call_tmp_chpl5;
  chpl____wide_DefaultAssociativeArr_LocReplicatedArr_FCHGlobalNode_1_int64_t_F_int64_t_T ret_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  _ic_these_DefaultAssociativeArr_LocReplicatedArr_FCHGlobalNode_1_int64_t_F_int64_t_T _ic__chpl2 = NULL;
  c_void_ptr cast_tmp_chpl3;
  chpl____wide__ref__wide_LocReplicatedArr_FCHGlobalNode_1_int64_t_F tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide_locale tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp_chpl6;
  chpl____wide_locale tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_LocReplicatedArr_FCHGlobalNode_1_int64_t_F coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_LocReplicatedArr_FCHGlobalNode_1_int64_t_F rvfDerefTmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl___EndCount_atomic_int64_int64_t rvfDerefTmp_chpl2 = NULL;
  _class_localson_fn_chpl62 _args_foron_fn_chpl = NULL;
  chpl____wide__EndCount_atomic_int64_int64_t tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  int64_t tmp_chpl5;
  c_void_ptr call_tmp_chpl7;
  c_void_ptr call_tmp_chpl8;
  _ref_atomic_int64 _field_destructor_tmp__chpl = NULL;
  _ref_atomic_int_least64_t call_tmp_chpl9 = NULL;
  chpl_localeID_t call_tmp_chpl10;
  chpl___EndCount_atomic_int64_int64_t rvfDerefTmp_chpl3 = NULL;
  chpl_bool isdirect_chpl;
  chpl____wide__EndCount_atomic_int64_int64_t tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn104 _args_foron_fn_chpl2 = NULL;
  chpl____wide__EndCount_atomic_int64_int64_t tmp_chpl7 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl2;
  chpl____wide__ref__wide_ReplicatedDom_1_int64_t_F chpl_macro_tmp_6185;
  chpl____wide__ref__wide_Replicated chpl_macro_tmp_6186;
  chpl____wide__ref__wide__array_DefaultAssociativeArr_locale_int64_t_T chpl_macro_tmp_6187;
  chpl____wide__ref__wide__array_DefaultAssociativeArr_LocReplicatedArr_FCHGlobalNode_1_int64_t_F_int64_t_T chpl_macro_tmp_6188;
  chpl__class_localson_fn_chpl62_object chpl_macro_tmp_6189;
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_6190;
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_6191;
  chpl__class_localson_fn104_object chpl_macro_tmp_6192;
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_6193;
  chpl_macro_tmp_6185.locale = (&this_chpl6)->locale;
  chpl_macro_tmp_6185.addr = &(((&this_chpl6)->addr)->dom_chpl);
  chpl_gen_comm_get(((void*)(&coerce_tmp_chpl)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_6185).locale), INT64(0), INT32(0)), (chpl_macro_tmp_6185).addr, sizeof(chpl____wide_ReplicatedDom_1_int64_t_F), -1, COMMID(90), INT64(527), INT64(58));
  chpl_macro_tmp_6186.locale = (&coerce_tmp_chpl)->locale;
  chpl_macro_tmp_6186.addr = &(((&coerce_tmp_chpl)->addr)->dist_chpl);
  chpl_gen_comm_get(((void*)(&coerce_tmp_chpl2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_6186).locale), INT64(0), INT32(0)), (chpl_macro_tmp_6186).addr, sizeof(chpl____wide_Replicated), -1, COMMID(91), INT64(527), INT64(58));
  chpl_macro_tmp_6187.locale = (&coerce_tmp_chpl2)->locale;
  chpl_macro_tmp_6187.addr = &(((&coerce_tmp_chpl2)->addr)->targetLocales_chpl);
  call_tmp_chpl = chpl_macro_tmp_6187;
  chpl_macro_tmp_6188.locale = (&this_chpl6)->locale;
  chpl_macro_tmp_6188.addr = &(((&this_chpl6)->addr)->localArrs_chpl);
  call_tmp_chpl2 = chpl_macro_tmp_6188;
  i__e1_x_chpl = call_tmp_chpl;
  i__e2_x_chpl = call_tmp_chpl2;
  chpl_gen_comm_get(((void*)(&this_x1_chpl)), chpl_nodeFromLocaleID(&((i__e1_x_chpl).locale), INT64(0), INT32(0)), (i__e1_x_chpl).addr, sizeof(_array_DefaultAssociativeArr_locale_int64_t_T), -1, COMMID(92), INT64(527), INT64(58));
  chpl_gen_comm_get(((void*)(&this_x2_chpl)), chpl_nodeFromLocaleID(&((i__e2_x_chpl).locale), INT64(0), INT32(0)), (i__e2_x_chpl).addr, sizeof(_array_DefaultAssociativeArr_LocReplicatedArr_FCHGlobalNode_1_int64_t_F_int64_t_T), -1, COMMID(93), INT64(527), INT64(58));
  cast_tmp_chpl = chpl_here_alloc(sizeof(chpl_chpl___EndCount_atomic_int64_int64_t_object), INT16(2));
  this_chpl7 = ((chpl___EndCount_atomic_int64_int64_t)(cast_tmp_chpl));
  ((object)(this_chpl7))->chpl__cid = chpl__cid_chpl___EndCount_atomic_int64_int64_t;
  (this_chpl7)->i = _init_class_tmp__chpl;
  (this_chpl7)->taskCnt = INT64(0);
  (this_chpl7)->taskList = NULL;
  ret_chpl = type_tmp_chpl;
  _ref_tmp__chpl = &ret_chpl;
  atomic_init_int_least64_t(_ref_tmp__chpl, INT64(0));
  (&this_chpl8)->_v = ret_chpl;
  ret_to_arg_ref_tmp__chpl = &ret_tmp_chpl;
  _construct_atomic_int64(ret_chpl, &this_chpl8, ret_to_arg_ref_tmp__chpl);
  (this_chpl7)->i = ret_tmp_chpl;
  (this_chpl7)->taskCnt = INT64(0);
  call_tmp_chpl3 = ((c_void_ptr)(nil));
  (this_chpl7)->taskList = call_tmp_chpl3;
  wrap_call_tmp_chpl = _construct__EndCount(&ret_tmp_chpl, INT64(0), call_tmp_chpl3, this_chpl7);
  _coforallCount_chpl = wrap_call_tmp_chpl;
  call_tmp_chpl4 = this_x1_chpl;
  ret_chpl2 = (&call_tmp_chpl4)->_instance;
  cast_tmp_chpl2 = chpl_here_alloc(sizeof(chpl__ic_these_DefaultAssociativeArr_locale_int64_t_T_object), INT16(128));
  _ic__chpl = ((_ic_these_DefaultAssociativeArr_locale_int64_t_T)(cast_tmp_chpl2));
  ((object)(_ic__chpl))->chpl__cid = chpl__cid__ic_these_DefaultAssociativeArr_locale_int64_t_T;
  (_ic__chpl)->more = INT64(1);
  (_ic__chpl)->F0_this = ret_chpl2;
  call_tmp_chpl5 = this_x2_chpl;
  ret_chpl3 = (&call_tmp_chpl5)->_instance;
  cast_tmp_chpl3 = chpl_here_alloc(sizeof(chpl__ic_these_DefaultAssociativeArr_LocReplicatedArr_FCHGlobalNode_1_int64_t_F_int64_t_T_object), INT16(165));
  _ic__chpl2 = ((_ic_these_DefaultAssociativeArr_LocReplicatedArr_FCHGlobalNode_1_int64_t_F_int64_t_T)(cast_tmp_chpl3));
  ((object)(_ic__chpl2))->chpl__cid = chpl__cid__ic_these_DefaultAssociativeArr_LocReplicatedArr_FCHGlobalNode_1_int64_t_F_int64_t_T;
  (_ic__chpl2)->more = INT64(1);
  (_ic__chpl2)->F0_this = ret_chpl3;
  advance(_ic__chpl);
  advance4(_ic__chpl2);
  for (; (tmp_chpl5 = (_ic__chpl)->more,tmp_chpl5); ) {
    tmp_chpl = (_ic__chpl2)->value;
    tmp_chpl2 = (_ic__chpl)->value;
    _upEndCount2(_coforallCount_chpl);
    chpl_gen_comm_get(((void*)(&tmp_chpl3)), chpl_nodeFromLocaleID(&((tmp_chpl2).locale), INT64(0), INT32(0)), (tmp_chpl2).addr, sizeof(chpl____wide_locale), -1, COMMID(94), INT64(528), INT64(58));
    call_tmp_chpl6 = (&tmp_chpl3)->locale;
    chpl_gen_comm_get(((void*)(&coerce_tmp_chpl3)), chpl_nodeFromLocaleID(&((tmp_chpl).locale), INT64(0), INT32(0)), (tmp_chpl).addr, sizeof(chpl____wide_LocReplicatedArr_FCHGlobalNode_1_int64_t_F), -1, COMMID(95), INT64(527), INT64(58));
    rvfDerefTmp_chpl = coerce_tmp_chpl3;
    rvfDerefTmp_chpl2 = _coforallCount_chpl;
    _args_foron_fn_chpl = ((_class_localson_fn_chpl62)(&chpl_macro_tmp_6189));
    (_args_foron_fn_chpl)->_0_rvfDerefTmp_chpl = call_tmp_chpl6;
    (_args_foron_fn_chpl)->_1_rvfDerefTmp_chpl = rvfDerefTmp_chpl;
    chpl_macro_tmp_6190.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_6190.addr = rvfDerefTmp_chpl2;
    tmp_chpl4 = chpl_macro_tmp_6190;
    (_args_foron_fn_chpl)->_2_rvfDerefTmp_chpl = tmp_chpl4;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    /*** wrapon_fn_chpl62 ***/ chpl_executeOnNB(&call_tmp_chpl6, INT32(318), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), sizeof(chpl__class_localson_fn_chpl62_object), INT64(528), INT32(58));
    advance(_ic__chpl);
    advance4(_ic__chpl2);
  }
  call_tmp_chpl7 = ((void*)(_ic__chpl));
  chpl_here_free(call_tmp_chpl7);
  call_tmp_chpl8 = ((void*)(_ic__chpl2));
  chpl_here_free(call_tmp_chpl8);
  _waitEndCount2(_coforallCount_chpl);
  _field_destructor_tmp__chpl = &((_coforallCount_chpl)->i);
  call_tmp_chpl9 = &((_field_destructor_tmp__chpl)->_v);
  atomic_destroy_int_least64_t(call_tmp_chpl9);
  call_tmp_chpl10 = chpl_gen_getLocaleID();
  rvfDerefTmp_chpl3 = _coforallCount_chpl;
  isdirect_chpl = chpl_doDirectExecuteOn(&call_tmp_chpl10);
  if (isdirect_chpl) {
    chpl_macro_tmp_6191.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_6191.addr = rvfDerefTmp_chpl3;
    tmp_chpl6 = chpl_macro_tmp_6191;
    on_fn123(tmp_chpl6);
  } else {
    _args_foron_fn_chpl2 = ((_class_localson_fn104)(&chpl_macro_tmp_6192));
    (_args_foron_fn_chpl2)->_0_rvfDerefTmp = call_tmp_chpl10;
    chpl_macro_tmp_6193.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_6193.addr = rvfDerefTmp_chpl3;
    tmp_chpl7 = chpl_macro_tmp_6193;
    (_args_foron_fn_chpl2)->_1_rvfDerefTmp = tmp_chpl7;
    _args_vforon_fn_chpl2 = ((void*)(_args_foron_fn_chpl2));
    /*** wrapon_fn131 ***/ chpl_executeOn(&call_tmp_chpl10, INT32(196), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl2)), sizeof(chpl__class_localson_fn104_object), INT64(1227), INT32(2));
  }
  return;
}

/* ReplicatedDist.chpl:528 */
static void wrapon_fn_chpl62(_class_localson_fn_chpl62 c_chpl) {
  chpl____wide_LocReplicatedArr_FCHGlobalNode_1_int64_t_F _1_rvfDerefTmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__EndCount_atomic_int64_int64_t _2_rvfDerefTmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__EndCount_atomic_int64_int64_t endcount_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _1_rvfDerefTmp_chpl = (c_chpl)->_1_rvfDerefTmp_chpl;
  _2_rvfDerefTmp_chpl = (c_chpl)->_2_rvfDerefTmp_chpl;
  on_fn_chpl62(_1_rvfDerefTmp_chpl, _2_rvfDerefTmp_chpl);
  endcount_chpl = (c_chpl)->_2_rvfDerefTmp_chpl;
  _downEndCount(endcount_chpl);
  return;
}

/* ReplicatedDist.chpl:528 */
static void wrapon_fn_chpl61(_class_localson_fn_chpl61 c_chpl) {
  chpl____wide_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F _1_rvfDerefTmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__EndCount_atomic_int64_int64_t _2_rvfDerefTmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__EndCount_atomic_int64_int64_t endcount_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _1_rvfDerefTmp_chpl = (c_chpl)->_1_rvfDerefTmp_chpl;
  _2_rvfDerefTmp_chpl = (c_chpl)->_2_rvfDerefTmp_chpl;
  on_fn_chpl61(_1_rvfDerefTmp_chpl, _2_rvfDerefTmp_chpl);
  endcount_chpl = (c_chpl)->_2_rvfDerefTmp_chpl;
  _downEndCount(endcount_chpl);
  return;
}

/* ReplicatedDist.chpl:528 */
static void on_fn_chpl62(chpl____wide_LocReplicatedArr_FCHGlobalNode_1_int64_t_F locArr_chpl,
                         chpl____wide__EndCount_atomic_int64_int64_t _coforallCount_chpl) {
  chpl____wide_LocReplicatedArr_FCHGlobalNode_1_int64_t_F rvfRerefTmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t _field_destructor_tmp__chpl;
  _array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t tmp_chpl;
  chpl_localeID_t call_tmp_chpl;
  chpl____wide_LocReplicatedArr_FCHGlobalNode_1_int64_t_F rvfDerefTmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect_chpl;
  _class_localson_fn149 _args_foron_fn_chpl = NULL;
  c_void_ptr _args_vforon_fn_chpl;
  chpl____wide__ref__wide__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t chpl_macro_tmp_6194;
  chpl__class_localson_fn149_object chpl_macro_tmp_6195;
  rvfRerefTmp_chpl = locArr_chpl;
  chpl_macro_tmp_6194.locale = (&rvfRerefTmp_chpl)->locale;
  chpl_macro_tmp_6194.addr = &(((&rvfRerefTmp_chpl)->addr)->arrLocalRep_chpl);
  chpl_gen_comm_get(((void*)(&tmp_chpl)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_6194).locale), INT64(0), INT32(0)), (chpl_macro_tmp_6194).addr, sizeof(_array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t), -1, COMMID(96), INT64(529), INT64(58));
  _field_destructor_tmp__chpl = tmp_chpl;
  chpl__autoDestroy23(&_field_destructor_tmp__chpl);
  call_tmp_chpl = (&locArr_chpl)->locale;
  rvfDerefTmp_chpl = locArr_chpl;
  isdirect_chpl = chpl_doDirectExecuteOn(&call_tmp_chpl);
  if (isdirect_chpl) {
    on_fn102(rvfDerefTmp_chpl);
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn149)(&chpl_macro_tmp_6195));
    (_args_foron_fn_chpl)->_0_rvfDerefTmp = call_tmp_chpl;
    (_args_foron_fn_chpl)->_1_rvfDerefTmp = rvfDerefTmp_chpl;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    /*** wrapon_fn137 ***/ chpl_executeOn(&call_tmp_chpl, INT32(202), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), sizeof(chpl__class_localson_fn149_object), INT64(1227), INT32(2));
  }
  return;
}

/* ReplicatedDist.chpl:528 */
static void on_fn_chpl61(chpl____wide_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F locArr_chpl,
                         chpl____wide__EndCount_atomic_int64_int64_t _coforallCount_chpl) {
  chpl____wide_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F rvfRerefTmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _array_DefaultRectangularArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t _field_destructor_tmp__chpl;
  _array_DefaultRectangularArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t tmp_chpl;
  chpl_localeID_t call_tmp_chpl;
  chpl____wide_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F rvfDerefTmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect_chpl;
  _class_localson_fn114 _args_foron_fn_chpl = NULL;
  c_void_ptr _args_vforon_fn_chpl;
  chpl____wide__ref__wide__array_DefaultRectangularArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t chpl_macro_tmp_6196;
  chpl__class_localson_fn114_object chpl_macro_tmp_6197;
  rvfRerefTmp_chpl = locArr_chpl;
  chpl_macro_tmp_6196.locale = (&rvfRerefTmp_chpl)->locale;
  chpl_macro_tmp_6196.addr = &(((&rvfRerefTmp_chpl)->addr)->arrLocalRep_chpl);
  chpl_gen_comm_get(((void*)(&tmp_chpl)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_6196).locale), INT64(0), INT32(0)), (chpl_macro_tmp_6196).addr, sizeof(_array_DefaultRectangularArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t), -1, COMMID(97), INT64(529), INT64(58));
  _field_destructor_tmp__chpl = tmp_chpl;
  chpl__autoDestroy21(&_field_destructor_tmp__chpl);
  call_tmp_chpl = (&locArr_chpl)->locale;
  rvfDerefTmp_chpl = locArr_chpl;
  isdirect_chpl = chpl_doDirectExecuteOn(&call_tmp_chpl);
  if (isdirect_chpl) {
    on_fn117(rvfDerefTmp_chpl);
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn114)(&chpl_macro_tmp_6197));
    (_args_foron_fn_chpl)->_0_rvfDerefTmp = call_tmp_chpl;
    (_args_foron_fn_chpl)->_1_rvfDerefTmp = rvfDerefTmp_chpl;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    /*** wrapon_fn113 ***/ chpl_executeOn(&call_tmp_chpl, INT32(178), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), sizeof(chpl__class_localson_fn114_object), INT64(1227), INT32(2));
  }
  return;
}

/* ReplicatedDist.chpl:564 */
static void dsiReallocate_chpl7(chpl____wide_ReplicatedArr_FCHGlobalNode_ReplicatedDom_1_int64_t_F this_chpl6,
                                chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_T d_chpl) {
  return;
}

/* ReplicatedDist.chpl:564 */
static void dsiReallocate_chpl8(chpl____wide_ReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_ReplicatedDom_1_int64_t_F this_chpl6,
                                chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_T d_chpl) {
  return;
}

/* ReplicatedDist.chpl:564 */
static void dsiReallocate_chpl6(chpl____wide_ReplicatedArr_FCHGlobalNode_ReplicatedDom_1_int64_t_F this_chpl6,
                                chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_F d_chpl) {
  return;
}

/* ReplicatedDist.chpl:564 */
static void dsiReallocate_chpl5(chpl____wide_ReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_ReplicatedDom_1_int64_t_F this_chpl6,
                                chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_F d_chpl) {
  return;
}

