/* LocaleModel.chpl:29 */
static void chpl__init_LocaleModel(int64_t _ln,
                                   int32_t _fn) {
  _ref_int32_t refIndentLevel = NULL;
  _domain_DefaultRectangularDom_1_int64_t_F type_tmp;
  chpl___RuntimeTypeInfo4 call_tmp2;
  chpl___RuntimeTypeInfo4 wrap_call_tmp;
  _distribution_DefaultDist _runtime_type_tmp_;
  _distribution_DefaultDist T;
  _domain_DefaultRectangularDom_1_int64_t_F ret_tmp;
  _ref__domain_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
  range_int64_t_bounded_F ret_tmp2;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_2 = NULL;
  _domain_DefaultRectangularDom_1_int64_t_F call_tmp3;
  _domain_DefaultRectangularDom_1_int64_t_F ret_tmp3;
  _ref__domain_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_3 = NULL;
  _ref__domain_DefaultRectangularDom_1_int64_t_F _ref_tmp_ = NULL;
  chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_F T2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_F T3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_F call_tmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__domain_DefaultRectangularDom_1_int64_t_F _ref_tmp_2 = NULL;
  chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_F T4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl___RuntimeTypeInfo8 call_tmp5;
  chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_F i_dom = {CHPL_LOCALEID_T_INIT, NULL};
  _domain_DefaultRectangularDom_1_int64_t_F _runtime_type_tmp_2;
  _domain_DefaultRectangularDom_1_int64_t_F T5;
  _array_DefaultRectangularArr_locale_1_int64_t_F_int64_t ret_tmp4;
  _ref__array_DefaultRectangularArr_locale_1_int64_t_F_int64_t ret_to_arg_ref_tmp_4 = NULL;
  _array_DefaultRectangularArr_locale_1_int64_t_F_int64_t retarg_tmp;
  chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_663;
  chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_664;
  chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_665;
  if (chpl__init_LocaleModel_p) {
    goto _exit_chpl__init_LocaleModel;
  }
  printModuleInit("%*s\n", "LocaleModel", INT64(11));
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_LocaleModel_p = UINT8(true);
  {
    chpl__init_LocaleModelHelpFlat(INT64(29), INT32(24));
    chpl__init_LocaleModelHelpMem(INT64(29), INT32(24));
  }
  chpl_addModule("LocaleModel", ((c_fn_ptr)(chpl__deinit_LocaleModel)));
  wrap_call_tmp = chpl__buildDomainRuntimeType4(&defaultDist);
  call_tmp2 = wrap_call_tmp;
  T = (&call_tmp2)->d;
  _runtime_type_tmp_ = T;
  ret_to_arg_ref_tmp_ = &ret_tmp;
  chpl__convertRuntimeTypeToValue3(&_runtime_type_tmp_, ret_to_arg_ref_tmp_);
  type_tmp = ret_tmp;
  ret_to_arg_ref_tmp_2 = &ret_tmp2;
  chpl_build_bounded_range(INT64(1), INT64(0), ret_to_arg_ref_tmp_2);
  ret_to_arg_ref_tmp_3 = &ret_tmp3;
  chpl__buildDomainExpr2(&ret_tmp2, ret_to_arg_ref_tmp_3);
  call_tmp3 = ret_tmp3;
  _ref_tmp_ = &type_tmp;
  chpl_macro_tmp_663.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_663.addr = _ref_tmp_;
  T2 = chpl_macro_tmp_663;
  chpl_macro_tmp_664.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_664.addr = &ret_tmp3;
  T3 = chpl_macro_tmp_664;
  chpl___ASSIGN_3(T2, T3);
  chpl_emptyLocaleSpace2 = type_tmp;
  chpl_comm_broadcast_private(INT64(15), sizeof(_domain_DefaultRectangularDom_1_int64_t_F), -1);
  _ref_tmp_2 = &chpl_emptyLocaleSpace2;
  chpl_macro_tmp_665.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_665.addr = _ref_tmp_2;
  T4 = chpl_macro_tmp_665;
  call_tmp4 = chpl__ensureDomainExpr5(T4);
  i_dom = call_tmp4;
  call_tmp5 = chpl__buildArrayRuntimeType(i_dom);
  T5 = (&call_tmp5)->dom;
  _runtime_type_tmp_2 = T5;
  ret_to_arg_ref_tmp_4 = &retarg_tmp;
  chpl__convertRuntimeTypeToValue18(&_runtime_type_tmp_2, ret_to_arg_ref_tmp_4);
  ret_tmp4 = retarg_tmp;
  chpl_emptyLocales2 = ret_tmp4;
  chpl_comm_broadcast_private(INT64(16), sizeof(_array_DefaultRectangularArr_locale_1_int64_t_F_int64_t), -1);
  chpl__autoDestroy5(&call_tmp3);
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_LocaleModel:;
  return;
}

/* LocaleModel.chpl:29 */
static void chpl__deinit_LocaleModel(void) {
  _domain_DefaultRectangularDom_1_int64_t_F local_chpl_emptyLocaleSpace;
  _array_DefaultRectangularArr_locale_1_int64_t_F_int64_t local_chpl_emptyLocales;
  local_chpl_emptyLocaleSpace = chpl_emptyLocaleSpace2;
  local_chpl_emptyLocales = chpl_emptyLocales2;
  chpl__autoDestroy27(&local_chpl_emptyLocales);
  chpl__autoDestroy5(&local_chpl_emptyLocaleSpace);
  return;
}

/* LocaleModel.chpl:40 */
int32_t chpl_localeModel_sublocToExecutionSubloc(int32_t full_subloc) {
  return full_subloc;
}

/* LocaleModel.chpl:46 */
int32_t chpl_localeModel_sublocMerge(int32_t full_subloc,
                                     int32_t execution_subloc) {
  return execution_subloc;
}

/* LocaleModel.chpl:58 */
static void chpl__auto_destroy_LocaleModel(chpl____wide_LocaleModel this12) {
  chpl____wide__ref_string _field_destructor_tmp_ = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_AbstractLocaleModel _parent_destructor_tmp_ = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_locale _parent_destructor_tmp_2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int64 _field_destructor_tmp_2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int_least64_t call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_atomic_int_least64_t T = NULL;
  chpl____wide__ref_string chpl_macro_tmp_666;
  chpl____wide_AbstractLocaleModel chpl_macro_tmp_667;
  chpl____wide_locale chpl_macro_tmp_668;
  chpl____wide__ref_atomic_int64 chpl_macro_tmp_669;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_670;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_671;
  chpl_macro_tmp_666.locale = (&this12)->locale;
  chpl_macro_tmp_666.addr = &(((&this12)->addr)->local_name);
  _field_destructor_tmp_ = chpl_macro_tmp_666;
  deinit44(_field_destructor_tmp_);
  chpl_macro_tmp_667.locale = (&this12)->locale;
  chpl_macro_tmp_667.addr = ((AbstractLocaleModel)((&this12)->addr));
  _parent_destructor_tmp_ = chpl_macro_tmp_667;
  chpl_macro_tmp_668.locale = (&_parent_destructor_tmp_)->locale;
  chpl_macro_tmp_668.addr = ((locale)((&_parent_destructor_tmp_)->addr));
  _parent_destructor_tmp_2 = chpl_macro_tmp_668;
  chpl_macro_tmp_669.locale = (&_parent_destructor_tmp_2)->locale;
  chpl_macro_tmp_669.addr = &(((&_parent_destructor_tmp_2)->addr)->runningTaskCounter);
  _field_destructor_tmp_2 = chpl_macro_tmp_669;
  chpl_macro_tmp_670.locale = (_field_destructor_tmp_2).locale;
  chpl_macro_tmp_670.addr = &(((_field_destructor_tmp_2).addr)->_v);
  call_tmp2 = chpl_macro_tmp_670;
  T = (&call_tmp2)->addr;
  atomic_destroy_int_least64_t(T);
  chpl_macro_tmp_671.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_671.addr = T;
  call_tmp2 = chpl_macro_tmp_671;
  return;
}

/* LocaleModel.chpl:58 */
static LocaleModel _construct_LocaleModel(locale parent,
                                          int64_t nPUsLogAcc,
                                          int64_t nPUsLogAll,
                                          int64_t nPUsPhysAcc,
                                          int64_t nPUsPhysAll,
                                          int64_t maxTaskPar,
                                          uint64_t callStackSize,
                                          _ref_atomic_int64 runningTaskCounter,
                                          int64_t _node_id,
                                          _ref_string local_name,
                                          LocaleModel meme) {
  LocaleModel this12 = NULL;
  this12 = meme;
  _construct_AbstractLocaleModel(parent, nPUsLogAcc, nPUsLogAll, nPUsPhysAcc, nPUsPhysAll, maxTaskPar, callStackSize, runningTaskCounter, &((this12)->super));
  (this12)->_node_id = _node_id;
  (this12)->local_name = *(local_name);
  return this12;
}

/* LocaleModel.chpl:73 */
static LocaleModel LocaleModel2(chpl____wide_locale parent_loc) {
  string local__str_literal_881;
  LocaleModel this12 = NULL;
  LocaleModel this13 = NULL;
  c_void_ptr cast_tmp;
  string _init_class_tmp_;
  locale call_tmp2 = NULL;
  atomic_int64 this14;
  atomic_int_least64_t ret;
  atomic_int_least64_t type_tmp;
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
  atomic_int64 ret_tmp;
  _ref_atomic_int64 ret_to_arg_ref_tmp_ = NULL;
  string this15;
  c_ptr_uint8_t call_tmp3 = NULL;
  int32_t default_arglocale_id;
  string ret_tmp2;
  _ref_string ret_to_arg_ref_tmp_2 = NULL;
  LocaleModel wrap_call_tmp = NULL;
  chpl_bool T;
  chpl_bool T2;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_672;
  local__str_literal_881 /* "Cannot create additional LocaleModel instances" */ = _str_literal_881 /* "Cannot create additional LocaleModel instances" */;
  cast_tmp = chpl_here_alloc(sizeof(chpl_LocaleModel_object), INT16(33));
  this13 = ((LocaleModel)(cast_tmp));
  ((object)(this13))->chpl__cid = chpl__cid_LocaleModel;
  (this13)->_node_id = INT64(0);
  (&_init_class_tmp_)->len = INT64(0);
  (&_init_class_tmp_)->_size = INT64(0);
  (&_init_class_tmp_)->buff = nil;
  (&_init_class_tmp_)->owned = UINT8(false);
  (&_init_class_tmp_)->locale_id = INT32(0);
  (this13)->local_name = _init_class_tmp_;
  call_tmp2 = ((locale)(nil));
  ret = type_tmp;
  _ref_tmp_ = &ret;
  atomic_init_int_least64_t(_ref_tmp_, INT64(0));
  (&this14)->_v = ret;
  ret_to_arg_ref_tmp_ = &ret_tmp;
  _construct_atomic_int64(ret, &this14, ret_to_arg_ref_tmp_);
  (this13)->_node_id = INT64(0);
  (&this15)->len = INT64(0);
  (&this15)->_size = INT64(0);
  (&this15)->buff = nil;
  (&this15)->owned = UINT8(false);
  (&this15)->locale_id = INT32(0);
  (&this15)->len = INT64(0);
  (&this15)->_size = INT64(0);
  call_tmp3 = ((c_ptr_uint8_t)(nil));
  (&this15)->buff = call_tmp3;
  (&this15)->owned = UINT8(true);
  default_arglocale_id = chpl_nodeID;
  (&this15)->locale_id = default_arglocale_id;
  ret_to_arg_ref_tmp_2 = &ret_tmp2;
  _construct_string(INT64(0), INT64(0), call_tmp3, UINT8(true), default_arglocale_id, &this15, ret_to_arg_ref_tmp_2);
  (this13)->local_name = ret_tmp2;
  wrap_call_tmp = _construct_LocaleModel(call_tmp2, INT64(0), INT64(0), INT64(0), INT64(0), INT64(0), UINT64(0), &ret_tmp, INT64(0), &ret_tmp2, this13);
  this12 = wrap_call_tmp;
  chpl_macro_tmp_672.locale = (&doneCreatingLocales)->locale;
  chpl_macro_tmp_672.addr = &(((&doneCreatingLocales)->addr)->value);
  chpl_gen_comm_get(((void*)(&T2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_672).locale), INT64(0), INT32(0)), (chpl_macro_tmp_672).addr, sizeof(chpl_bool), -1, COMMID(0), INT64(38), INT64(48));
  T = T2;
  if (T) {
    halt(&local__str_literal_881 /* "Cannot create additional LocaleModel instances" */, INT64(75), INT32(24));
  }
  (((locale)(wrap_call_tmp)))->parent = parent_loc;
  setup(wrap_call_tmp);
  return this12;
}

/* LocaleModel.chpl:81 */
static int64_t chpl_id3(chpl____wide_LocaleModel this12) {
  int64_t ret;
  int64_t T;
  chpl____wide__ref_int64_t chpl_macro_tmp_673;
  chpl_macro_tmp_673.locale = (&this12)->locale;
  chpl_macro_tmp_673.addr = &(((&this12)->addr)->_node_id);
  chpl_gen_comm_get(((void*)(&T)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_673).locale), INT64(0), INT32(0)), (chpl_macro_tmp_673).addr, sizeof(int64_t), -1, COMMID(0), INT64(81), INT64(24));
  ret = T;
  return ret;
}

/* LocaleModel.chpl:119 */
static int64_t getChildCount3(chpl____wide_LocaleModel this12) {
  return INT64(0);
}

/* LocaleModel.chpl:126 */
static chpl____wide_locale getChild3(chpl____wide_LocaleModel this12,
                                     int64_t idx) {
  chpl____wide_locale call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  locale T = NULL;
  chpl____wide_locale chpl_macro_tmp_674;
  T = ((locale)(nil));
  chpl_macro_tmp_674.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_674.addr = T;
  call_tmp2 = chpl_macro_tmp_674;
  return call_tmp2;
}

/* LocaleModel.chpl:144 */
static void setup(LocaleModel this12) {
  _ref_string call_tmp2 = NULL;
  (this12)->_node_id = ((int64_t)(chpl_nodeID));
  call_tmp2 = &((this12)->local_name);
  helpSetupLocaleFlat(this12, call_tmp2);
  return;
}

/* LocaleModel.chpl:159 */
static RootLocale _construct_RootLocale(locale parent,
                                        int64_t nPUsLogAcc,
                                        int64_t nPUsLogAll,
                                        int64_t nPUsPhysAcc,
                                        int64_t nPUsPhysAll,
                                        int64_t maxTaskPar,
                                        uint64_t callStackSize,
                                        _ref_atomic_int64 runningTaskCounter,
                                        _ref__domain_DefaultRectangularDom_1_int64_t_F myLocaleSpace,
                                        _ref__array_DefaultRectangularArr_locale_1_int64_t_F_int64_t myLocales,
                                        RootLocale meme) {
  RootLocale this12 = NULL;
  this12 = meme;
  _construct_AbstractRootLocale(parent, nPUsLogAcc, nPUsLogAll, nPUsPhysAcc, nPUsPhysAll, maxTaskPar, callStackSize, runningTaskCounter, &((this12)->super));
  (this12)->myLocaleSpace = *(myLocaleSpace);
  (this12)->myLocales = *(myLocales);
  return this12;
}

/* LocaleModel.chpl:164 */
static RootLocale RootLocale2(void) {
  int64_t local_numLocales;
  RootLocale this12 = NULL;
  RootLocale this13 = NULL;
  c_void_ptr cast_tmp;
  _domain_DefaultRectangularDom_1_int64_t_F _init_class_tmp_;
  chpl____wide_DefaultRectangularDom_1_int64_t_F T = {CHPL_LOCALEID_T_INIT, NULL};
  _array_DefaultRectangularArr_locale_1_int64_t_F_int64_t _init_class_tmp_2;
  chpl____wide_DefaultRectangularArr_locale_1_int64_t_F_int64_t T2 = {CHPL_LOCALEID_T_INIT, NULL};
  locale call_tmp2 = NULL;
  atomic_int64 this14;
  atomic_int_least64_t ret;
  atomic_int_least64_t type_tmp;
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
  atomic_int64 ret_tmp;
  _ref_atomic_int64 ret_to_arg_ref_tmp_ = NULL;
  _domain_DefaultRectangularDom_1_int64_t_F default_argmyLocaleSpace;
  chpl___RuntimeTypeInfo4 call_tmp3;
  chpl___RuntimeTypeInfo4 wrap_call_tmp;
  range_int64_t_bounded_F ret_tmp2;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_2 = NULL;
  _domain_DefaultRectangularDom_1_int64_t_F call_tmp4;
  _domain_DefaultRectangularDom_1_int64_t_F ret_tmp3;
  _ref__domain_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_3 = NULL;
  _domain_DefaultRectangularDom_1_int64_t_F x;
  _distribution_DefaultDist _runtime_type_tmp_;
  _distribution_DefaultDist T3;
  _domain_DefaultRectangularDom_1_int64_t_F ret_tmp4;
  _ref__domain_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_4 = NULL;
  _ref__domain_DefaultRectangularDom_1_int64_t_F _ref_tmp_2 = NULL;
  chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_F T4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_F T5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_F call_tmp5 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__domain_DefaultRectangularDom_1_int64_t_F _ref_tmp_3 = NULL;
  chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_F T6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl___RuntimeTypeInfo8 call_tmp6;
  chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_F i_dom = {CHPL_LOCALEID_T_INIT, NULL};
  _domain_DefaultRectangularDom_1_int64_t_F _runtime_type_tmp_2;
  _domain_DefaultRectangularDom_1_int64_t_F T7;
  _array_DefaultRectangularArr_locale_1_int64_t_F_int64_t ret_tmp5;
  _ref__array_DefaultRectangularArr_locale_1_int64_t_F_int64_t ret_to_arg_ref_tmp_5 = NULL;
  _array_DefaultRectangularArr_locale_1_int64_t_F_int64_t retarg_tmp;
  RootLocale wrap_call_tmp2 = NULL;
  locale coerce_tmp = NULL;
  chpl____wide_locale T8 = {CHPL_LOCALEID_T_INIT, NULL};
  locale coerce_tmp2 = NULL;
  locale coerce_tmp3 = NULL;
  locale coerce_tmp4 = NULL;
  locale coerce_tmp5 = NULL;
  chpl____wide__nilType chpl_macro_tmp_675;
  chpl____wide_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_676;
  chpl____wide__nilType chpl_macro_tmp_677;
  chpl____wide_DefaultRectangularArr_locale_1_int64_t_F_int64_t chpl_macro_tmp_678;
  chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_679;
  chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_680;
  chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_681;
  chpl____wide__nilType chpl_macro_tmp_682;
  chpl____wide_locale chpl_macro_tmp_683;
  local_numLocales = numLocales;
  cast_tmp = chpl_here_alloc(sizeof(chpl_RootLocale_object), INT16(22));
  this13 = ((RootLocale)(cast_tmp));
  ((object)(this13))->chpl__cid = chpl__cid_RootLocale;
  (&_init_class_tmp_)->_pid = INT64(0);
  chpl_macro_tmp_675.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_675.addr = nil;
  chpl_macro_tmp_676.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_676.addr = NULL;
  T = chpl_macro_tmp_676;
  (&_init_class_tmp_)->_instance = T;
  (&_init_class_tmp_)->_unowned = UINT8(false);
  (this13)->myLocaleSpace = _init_class_tmp_;
  (&_init_class_tmp_2)->_pid = INT64(0);
  chpl_macro_tmp_677.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_677.addr = nil;
  chpl_macro_tmp_678.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_678.addr = NULL;
  T2 = chpl_macro_tmp_678;
  (&_init_class_tmp_2)->_instance = T2;
  (&_init_class_tmp_2)->_unowned = UINT8(false);
  (this13)->myLocales = _init_class_tmp_2;
  call_tmp2 = ((locale)(nil));
  ret = type_tmp;
  _ref_tmp_ = &ret;
  atomic_init_int_least64_t(_ref_tmp_, INT64(0));
  (&this14)->_v = ret;
  ret_to_arg_ref_tmp_ = &ret_tmp;
  _construct_atomic_int64(ret, &this14, ret_to_arg_ref_tmp_);
  wrap_call_tmp = chpl__buildDomainRuntimeType4(&defaultDist);
  call_tmp3 = wrap_call_tmp;
  ret_to_arg_ref_tmp_2 = &ret_tmp2;
  chpl_build_bounded_range(INT64(0), ((int64_t)((local_numLocales - INT64(1)))), ret_to_arg_ref_tmp_2);
  ret_to_arg_ref_tmp_3 = &ret_tmp3;
  chpl__buildDomainExpr2(&ret_tmp2, ret_to_arg_ref_tmp_3);
  call_tmp4 = ret_tmp3;
  T3 = (&call_tmp3)->d;
  _runtime_type_tmp_ = T3;
  ret_to_arg_ref_tmp_4 = &ret_tmp4;
  chpl__convertRuntimeTypeToValue3(&_runtime_type_tmp_, ret_to_arg_ref_tmp_4);
  x = ret_tmp4;
  _ref_tmp_2 = &x;
  chpl_macro_tmp_679.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_679.addr = _ref_tmp_2;
  T4 = chpl_macro_tmp_679;
  chpl_macro_tmp_680.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_680.addr = &ret_tmp3;
  T5 = chpl_macro_tmp_680;
  chpl___ASSIGN_3(T4, T5);
  default_argmyLocaleSpace = x;
  (this13)->myLocaleSpace = x;
  _ref_tmp_3 = &default_argmyLocaleSpace;
  chpl_macro_tmp_681.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_681.addr = _ref_tmp_3;
  T6 = chpl_macro_tmp_681;
  call_tmp5 = chpl__ensureDomainExpr5(T6);
  i_dom = call_tmp5;
  call_tmp6 = chpl__buildArrayRuntimeType(i_dom);
  T7 = (&call_tmp6)->dom;
  _runtime_type_tmp_2 = T7;
  ret_to_arg_ref_tmp_5 = &retarg_tmp;
  chpl__convertRuntimeTypeToValue18(&_runtime_type_tmp_2, ret_to_arg_ref_tmp_5);
  ret_tmp5 = retarg_tmp;
  (this13)->myLocales = ret_tmp5;
  wrap_call_tmp2 = _construct_RootLocale(call_tmp2, INT64(0), INT64(0), INT64(0), INT64(0), INT64(0), UINT64(0), &ret_tmp, &default_argmyLocaleSpace, &ret_tmp5, this13);
  chpl__autoDestroy5(&call_tmp4);
  coerce_tmp = ((locale)(wrap_call_tmp2));
  chpl_macro_tmp_682.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_682.addr = nil;
  chpl_macro_tmp_683.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_683.addr = NULL;
  T8 = chpl_macro_tmp_683;
  (coerce_tmp)->parent = T8;
  (((locale)(wrap_call_tmp2)))->nPUsPhysAcc = INT64(0);
  coerce_tmp2 = ((locale)(wrap_call_tmp2));
  (coerce_tmp2)->nPUsPhysAll = INT64(0);
  coerce_tmp3 = ((locale)(wrap_call_tmp2));
  (coerce_tmp3)->nPUsLogAcc = INT64(0);
  coerce_tmp4 = ((locale)(wrap_call_tmp2));
  (coerce_tmp4)->nPUsLogAll = INT64(0);
  coerce_tmp5 = ((locale)(wrap_call_tmp2));
  (coerce_tmp5)->maxTaskPar = INT64(0);
  return wrap_call_tmp2;
}

/* LocaleModel.chpl:176 */
static void setup2(chpl____wide_RootLocale this12) {
  helpSetupRootLocaleFlat(this12);
  return;
}

/* LocaleModel.chpl:184 */
static int64_t chpl_id4(chpl____wide_RootLocale this12) {
  int64_t ret;
  ret = numLocales;
  return ret;
}

/* LocaleModel.chpl:195 */
static int64_t getChildCount4(chpl____wide_RootLocale this12) {
  chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_F call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp3;
  chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_684;
  chpl_macro_tmp_684.locale = (&this12)->locale;
  chpl_macro_tmp_684.addr = &(((&this12)->addr)->myLocaleSpace);
  call_tmp2 = chpl_macro_tmp_684;
  call_tmp3 = numIndices(call_tmp2);
  return call_tmp3;
}

/* LocaleModel.chpl:204 */
static chpl____wide_locale getChild4(chpl____wide_RootLocale this12,
                                     int64_t idx) {
  chpl____wide__ref__wide__array_DefaultRectangularArr_locale_1_int64_t_F_int64_t call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_locale_1_int64_t_F_int64_t call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_locale_1_int64_t_F_int64_t ret = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_locale ret2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ddata_locale coerce_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide_locale call_tmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide__array_DefaultRectangularArr_locale_1_int64_t_F_int64_t chpl_macro_tmp_685;
  chpl____wide__ref__wide_DefaultRectangularArr_locale_1_int64_t_F_int64_t chpl_macro_tmp_686;
  chpl____wide__ref__wide__ddata_locale chpl_macro_tmp_687;
  chpl____wide__ref__wide_locale chpl_macro_tmp_688;
  chpl_macro_tmp_685.locale = (&this12)->locale;
  chpl_macro_tmp_685.addr = &(((&this12)->addr)->myLocales);
  call_tmp2 = chpl_macro_tmp_685;
  chpl_macro_tmp_686.locale = (call_tmp2).locale;
  chpl_macro_tmp_686.addr = &(((call_tmp2).addr)->_instance);
  chpl_gen_comm_get(((void*)(&ret)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_686).locale), INT64(0), INT32(0)), (chpl_macro_tmp_686).addr, sizeof(chpl____wide_DefaultRectangularArr_locale_1_int64_t_F_int64_t), -1, COMMID(1), INT64(204), INT64(24));
  call_tmp3 = ret;
  chpl_macro_tmp_687.locale = (&call_tmp3)->locale;
  chpl_macro_tmp_687.addr = &(((&call_tmp3)->addr)->shiftedData);
  chpl_gen_comm_get(((void*)(&coerce_tmp)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_687).locale), INT64(0), INT32(0)), (chpl_macro_tmp_687).addr, sizeof(chpl____wide__ddata_locale), -1, COMMID(2), INT64(204), INT64(24));
  chpl_macro_tmp_688.locale = (&coerce_tmp)->locale;
  chpl_macro_tmp_688.addr = ((&coerce_tmp)->addr + idx);
  call_tmp4 = chpl_macro_tmp_688;
  chpl_gen_comm_get(((void*)(&ret2)), chpl_nodeFromLocaleID(&((call_tmp4).locale), INT64(0), INT32(0)), (call_tmp4).addr, sizeof(chpl____wide_locale), -1, COMMID(3), INT64(204), INT64(24));
  return ret2;
}

/* LocaleModel.chpl:212 */
static chpl____wide__ref__wide__array_DefaultRectangularArr_locale_1_int64_t_F_int64_t getDefaultLocaleArray(chpl____wide_RootLocale this12) {
  chpl____wide__ref__wide__array_DefaultRectangularArr_locale_1_int64_t_F_int64_t call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide__array_DefaultRectangularArr_locale_1_int64_t_F_int64_t chpl_macro_tmp_689;
  chpl_macro_tmp_689.locale = (&this12)->locale;
  chpl_macro_tmp_689.addr = &(((&this12)->addr)->myLocales);
  call_tmp2 = chpl_macro_tmp_689;
  return call_tmp2;
}

/* LocaleModel.chpl:214 */
static chpl____wide_locale localeIDtoLocale2(chpl____wide_RootLocale this12,
                                             chpl____wide__ref_chpl_localeID_t id2) {
  int32_t call_tmp2;
  _ref_chpl_localeID_t T = NULL;
  chpl____wide__ref__wide__array_DefaultRectangularArr_locale_1_int64_t_F_int64_t call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp4;
  chpl____wide_DefaultRectangularArr_locale_1_int64_t_F_int64_t call_tmp5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_locale_1_int64_t_F_int64_t ret = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_locale ret2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ddata_locale coerce_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide_locale call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_chpl_localeID_t chpl_macro_tmp_690;
  chpl____wide__ref__wide__array_DefaultRectangularArr_locale_1_int64_t_F_int64_t chpl_macro_tmp_691;
  chpl____wide__ref__wide_DefaultRectangularArr_locale_1_int64_t_F_int64_t chpl_macro_tmp_692;
  chpl____wide__ref__wide__ddata_locale chpl_macro_tmp_693;
  chpl____wide__ref__wide_locale chpl_macro_tmp_694;
  T = (&id2)->addr;
  call_tmp2 = chpl_rt_nodeFromLocaleID(*(T));
  chpl_macro_tmp_690.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_690.addr = T;
  id2 = chpl_macro_tmp_690;
  chpl_macro_tmp_691.locale = (&this12)->locale;
  chpl_macro_tmp_691.addr = &(((&this12)->addr)->myLocales);
  call_tmp3 = chpl_macro_tmp_691;
  call_tmp4 = ((int64_t)(call_tmp2));
  chpl_macro_tmp_692.locale = (call_tmp3).locale;
  chpl_macro_tmp_692.addr = &(((call_tmp3).addr)->_instance);
  chpl_gen_comm_get(((void*)(&ret)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_692).locale), INT64(0), INT32(0)), (chpl_macro_tmp_692).addr, sizeof(chpl____wide_DefaultRectangularArr_locale_1_int64_t_F_int64_t), -1, COMMID(4), INT64(219), INT64(24));
  call_tmp5 = ret;
  chpl_macro_tmp_693.locale = (&call_tmp5)->locale;
  chpl_macro_tmp_693.addr = &(((&call_tmp5)->addr)->shiftedData);
  chpl_gen_comm_get(((void*)(&coerce_tmp)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_693).locale), INT64(0), INT32(0)), (chpl_macro_tmp_693).addr, sizeof(chpl____wide__ddata_locale), -1, COMMID(5), INT64(219), INT64(24));
  chpl_macro_tmp_694.locale = (&coerce_tmp)->locale;
  chpl_macro_tmp_694.addr = ((&coerce_tmp)->addr + call_tmp4);
  call_tmp6 = chpl_macro_tmp_694;
  chpl_gen_comm_get(((void*)(&ret2)), chpl_nodeFromLocaleID(&((call_tmp6).locale), INT64(0), INT32(0)), (call_tmp6).addr, sizeof(chpl____wide_locale), -1, COMMID(6), INT64(219), INT64(24));
  return ret2;
}

/* LocaleModel.chpl:222 */
static void deinit43(chpl____wide_RootLocale this12) {
  chpl____wide__ref__wide__array_DefaultRectangularArr_locale_1_int64_t_F_int64_t call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide__array_DefaultRectangularArr_locale_1_int64_t_F_int64_t i_x = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_locale_1_int64_t_F_int64_t ret = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_locale_1_int64_t_F_int64_t this13 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularDom_1_int64_t_F coerce_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularDom_1_int64_t_F _ic__F1_viewDom = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_locale_1_int64_t_F_int64_t info = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp3;
  int64_t call_tmp4;
  int64_t call_tmp5;
  int64_t call_tmp6;
  int64_t _ic__F1_high;
  int64_t _ic__F2_stride;
  int64_t i;
  chpl____wide__ddata_locale coerce_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide_locale call_tmp7 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_locale coerce_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp8;
  chpl____wide_locale rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect;
  _class_localson_fn110 _args_foron_fn = NULL;
  c_void_ptr _args_vforon_fn;
  _array_DefaultRectangularArr_locale_1_int64_t_F_int64_t _field_destructor_tmp_;
  _array_DefaultRectangularArr_locale_1_int64_t_F_int64_t T;
  _domain_DefaultRectangularDom_1_int64_t_F _field_destructor_tmp_2;
  _domain_DefaultRectangularDom_1_int64_t_F T2;
  chpl____wide_AbstractRootLocale _parent_destructor_tmp_ = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_locale _parent_destructor_tmp_2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int64 _field_destructor_tmp_3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int_least64_t call_tmp9 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_atomic_int_least64_t T3 = NULL;
  chpl____wide__ref__wide__array_DefaultRectangularArr_locale_1_int64_t_F_int64_t chpl_macro_tmp_695;
  chpl____wide__ref__wide_DefaultRectangularArr_locale_1_int64_t_F_int64_t chpl_macro_tmp_696;
  chpl____wide__ref__wide_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_697;
  chpl____wide__ref__wide__ddata_locale chpl_macro_tmp_698;
  chpl____wide__ref__wide_locale chpl_macro_tmp_699;
  chpl____wide__ref_int32_t chpl_macro_tmp_700;
  int32_t chpl_macro_tmp_701;
  chpl__class_localson_fn110_object chpl_macro_tmp_702;
  chpl____wide__ref__wide__array_DefaultRectangularArr_locale_1_int64_t_F_int64_t chpl_macro_tmp_703;
  chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_704;
  chpl____wide_AbstractRootLocale chpl_macro_tmp_705;
  chpl____wide_locale chpl_macro_tmp_706;
  chpl____wide__ref_atomic_int64 chpl_macro_tmp_707;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_708;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_709;
  chpl_macro_tmp_695.locale = (&this12)->locale;
  chpl_macro_tmp_695.addr = &(((&this12)->addr)->myLocales);
  call_tmp2 = chpl_macro_tmp_695;
  i_x = call_tmp2;
  chpl_macro_tmp_696.locale = (i_x).locale;
  chpl_macro_tmp_696.addr = &(((i_x).addr)->_instance);
  chpl_gen_comm_get(((void*)(&ret)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_696).locale), INT64(0), INT32(0)), (chpl_macro_tmp_696).addr, sizeof(chpl____wide_DefaultRectangularArr_locale_1_int64_t_F_int64_t), -1, COMMID(7), INT64(223), INT64(24));
  this13 = ret;
  chpl_macro_tmp_697.locale = (&this13)->locale;
  chpl_macro_tmp_697.addr = &(((&this13)->addr)->dom);
  chpl_gen_comm_get(((void*)(&coerce_tmp)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_697).locale), INT64(0), INT32(0)), (chpl_macro_tmp_697).addr, sizeof(chpl____wide_DefaultRectangularDom_1_int64_t_F), -1, COMMID(8), INT64(223), INT64(24));
  _ic__F1_viewDom = coerce_tmp;
  info = ret;
  call_tmp3 = dsiLow(coerce_tmp);
  call_tmp4 = dsiLow(_ic__F1_viewDom);
  call_tmp5 = (((int64_t)((call_tmp4 + INT64(1)))) - call_tmp3);
  call_tmp6 = dsiNumIndices(_ic__F1_viewDom);
  _ic__F1_high = ((int64_t)((call_tmp3 + ((int64_t)((((int64_t)((call_tmp6 - INT64(1)))) * call_tmp5))))));
  _ic__F2_stride = call_tmp5;
  chpl_macro_tmp_698.locale = (&info)->locale;
  chpl_macro_tmp_698.addr = &(((&info)->addr)->shiftedData);
  chpl_gen_comm_get(((void*)(&coerce_tmp2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_698).locale), INT64(0), INT32(0)), (chpl_macro_tmp_698).addr, sizeof(chpl____wide__ddata_locale), -1, COMMID(9), INT64(223), INT64(24));
  for (i = call_tmp3; ((i <= _ic__F1_high)); i += _ic__F2_stride) {
    chpl_macro_tmp_699.locale = (&coerce_tmp2)->locale;
    chpl_macro_tmp_699.addr = ((&coerce_tmp2)->addr + i);
    call_tmp7 = chpl_macro_tmp_699;
    chpl_gen_comm_get(((void*)(&coerce_tmp3)), chpl_nodeFromLocaleID(&((call_tmp7).locale), INT64(0), INT32(0)), (call_tmp7).addr, sizeof(chpl____wide_locale), -1, COMMID(10), INT64(224), INT64(24));
    chpl_macro_tmp_700.locale = (&coerce_tmp3)->locale;
    chpl_macro_tmp_700.addr = &(((object)((&coerce_tmp3)->addr))->chpl__cid);
    chpl_gen_comm_get(((void*)(&chpl_macro_tmp_701)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_700).locale), INT64(0), INT32(0)), (chpl_macro_tmp_700).addr, sizeof(int32_t), -1, COMMID(11), INT64(224), INT64(24));
    ((void(*)(chpl____wide_locale))chpl_vmtable[((INT64(9) * chpl_macro_tmp_701) + INT64(0))])(coerce_tmp3);
    call_tmp8 = (&coerce_tmp3)->locale;
    rvfDerefTmp = coerce_tmp3;
    isdirect = chpl_doDirectExecuteOn(&call_tmp8);
    if (isdirect) {
      on_fn108(rvfDerefTmp);
    } else {
      _args_foron_fn = ((_class_localson_fn110)(&chpl_macro_tmp_702));
      (_args_foron_fn)->_0_rvfDerefTmp = call_tmp8;
      (_args_foron_fn)->_1_rvfDerefTmp = rvfDerefTmp;
      _args_vforon_fn = ((void*)(_args_foron_fn));
      /*** wrapon_fn145 ***/ chpl_executeOn(&call_tmp8, INT32(210), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn110_object), INT64(1227), INT32(2));
    }
  }
  chpl_macro_tmp_703.locale = (&this12)->locale;
  chpl_macro_tmp_703.addr = &(((&this12)->addr)->myLocales);
  chpl_gen_comm_get(((void*)(&T)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_703).locale), INT64(0), INT32(0)), (chpl_macro_tmp_703).addr, sizeof(_array_DefaultRectangularArr_locale_1_int64_t_F_int64_t), -1, COMMID(12), INT64(162), INT64(24));
  _field_destructor_tmp_ = T;
  chpl__autoDestroy27(&_field_destructor_tmp_);
  chpl_macro_tmp_704.locale = (&this12)->locale;
  chpl_macro_tmp_704.addr = &(((&this12)->addr)->myLocaleSpace);
  chpl_gen_comm_get(((void*)(&T2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_704).locale), INT64(0), INT32(0)), (chpl_macro_tmp_704).addr, sizeof(_domain_DefaultRectangularDom_1_int64_t_F), -1, COMMID(13), INT64(161), INT64(24));
  _field_destructor_tmp_2 = T2;
  chpl__autoDestroy5(&_field_destructor_tmp_2);
  chpl_macro_tmp_705.locale = (&this12)->locale;
  chpl_macro_tmp_705.addr = ((AbstractRootLocale)((&this12)->addr));
  _parent_destructor_tmp_ = chpl_macro_tmp_705;
  chpl_macro_tmp_706.locale = (&_parent_destructor_tmp_)->locale;
  chpl_macro_tmp_706.addr = ((locale)((&_parent_destructor_tmp_)->addr));
  _parent_destructor_tmp_2 = chpl_macro_tmp_706;
  chpl_macro_tmp_707.locale = (&_parent_destructor_tmp_2)->locale;
  chpl_macro_tmp_707.addr = &(((&_parent_destructor_tmp_2)->addr)->runningTaskCounter);
  _field_destructor_tmp_3 = chpl_macro_tmp_707;
  chpl_macro_tmp_708.locale = (_field_destructor_tmp_3).locale;
  chpl_macro_tmp_708.addr = &(((_field_destructor_tmp_3).addr)->_v);
  call_tmp9 = chpl_macro_tmp_708;
  T3 = (&call_tmp9)->addr;
  atomic_destroy_int_least64_t(T3);
  chpl_macro_tmp_709.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_709.addr = T3;
  call_tmp9 = chpl_macro_tmp_709;
  return;
}

