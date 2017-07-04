/* ChapelLocale.chpl:67 */
static void chpl__init_ChapelLocale(int64_t _ln,
                                    int32_t _fn) {
  _ref_int32_t refIndentLevel = NULL;
  locale T = NULL;
  locale T2 = NULL;
  chpl____wide_locale T3 = {CHPL_LOCALEID_T_INIT, NULL};
  DummyLocale this12 = NULL;
  c_void_ptr cast_tmp;
  locale call_tmp2 = NULL;
  atomic_int64 this13;
  atomic_int_least64_t ret;
  atomic_int_least64_t type_tmp;
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
  atomic_int64 ret_tmp;
  _ref_atomic_int64 ret_to_arg_ref_tmp_ = NULL;
  DummyLocale wrap_call_tmp = NULL;
  chpl____wide_DummyLocale T4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_locale chpl_macro_tmp_710;
  chpl____wide_locale chpl_macro_tmp_711;
  chpl____wide__ref__wide_locale chpl_macro_tmp_712;
  chpl____wide_DummyLocale chpl_macro_tmp_713;
  chpl____wide__ref__wide_DummyLocale chpl_macro_tmp_714;
  if (chpl__init_ChapelLocale_p) {
    goto _exit_chpl__init_ChapelLocale;
  }
  printModuleInit("%*s\n", "ChapelLocale", INT64(12));
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_ChapelLocale_p = UINT8(true);
  {
    chpl__init_LocaleModel(INT64(67), INT32(25));
  }
  chpl_addModule("ChapelLocale", ((c_fn_ptr)(deinit40)));
  T = nil;
  chpl_macro_tmp_710.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_710.addr = T;
  rootLocale = chpl_macro_tmp_710;
  T2 = nil;
  chpl_macro_tmp_711.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_711.addr = T2;
  T3 = chpl_macro_tmp_711;
  chpl_macro_tmp_712.locale = (&origRootLocale)->locale;
  chpl_macro_tmp_712.addr = &(((&origRootLocale)->addr)->value);
  chpl_gen_comm_put(((void*)(&T3)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_712).locale), INT64(0), INT32(0)), (chpl_macro_tmp_712).addr, sizeof(chpl____wide_locale), -1, COMMID(0), INT64(386), INT64(25));
  cast_tmp = chpl_here_alloc(sizeof(chpl_DummyLocale_object), INT16(3));
  this12 = ((DummyLocale)(cast_tmp));
  ((object)(this12))->chpl__cid = chpl__cid_DummyLocale;
  call_tmp2 = ((locale)(nil));
  ret = type_tmp;
  _ref_tmp_ = &ret;
  atomic_init_int_least64_t(_ref_tmp_, INT64(0));
  (&this13)->_v = ret;
  ret_to_arg_ref_tmp_ = &ret_tmp;
  _construct_atomic_int64(ret, &this13, ret_to_arg_ref_tmp_);
  wrap_call_tmp = _construct_DummyLocale(call_tmp2, INT64(0), INT64(0), INT64(0), INT64(0), INT64(0), UINT64(0), &ret_tmp, this12);
  chpl_macro_tmp_713.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_713.addr = wrap_call_tmp;
  T4 = chpl_macro_tmp_713;
  chpl_macro_tmp_714.locale = (&dummyLocale)->locale;
  chpl_macro_tmp_714.addr = &(((&dummyLocale)->addr)->value);
  chpl_gen_comm_put(((void*)(&T4)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_714).locale), INT64(0), INT32(0)), (chpl_macro_tmp_714).addr, sizeof(chpl____wide_DummyLocale), -1, COMMID(1), INT64(563), INT64(25));
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_ChapelLocale:;
  return;
}

/* ChapelLocale.chpl:98 */
static locale _construct_locale(locale parent,
                                int64_t nPUsLogAcc,
                                int64_t nPUsLogAll,
                                int64_t nPUsPhysAcc,
                                int64_t nPUsPhysAll,
                                int64_t maxTaskPar,
                                uint64_t callStackSize,
                                _ref_atomic_int64 runningTaskCounter,
                                locale meme) {
  locale this12 = NULL;
  chpl____wide_locale T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_locale chpl_macro_tmp_715;
  this12 = meme;
  _construct_object(&((this12)->super));
  chpl_macro_tmp_715.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_715.addr = parent;
  T = chpl_macro_tmp_715;
  (this12)->parent = T;
  (this12)->nPUsLogAcc = nPUsLogAcc;
  (this12)->nPUsLogAll = nPUsLogAll;
  (this12)->nPUsPhysAcc = nPUsPhysAcc;
  (this12)->nPUsPhysAll = nPUsPhysAll;
  (this12)->maxTaskPar = maxTaskPar;
  (this12)->callStackSize = callStackSize;
  (this12)->runningTaskCounter = *(runningTaskCounter);
  return this12;
}

/* ChapelLocale.chpl:98 */
static void chpl__auto_destroy_locale(chpl____wide_locale this12) {
  chpl____wide__ref_atomic_int64 _field_destructor_tmp_ = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int_least64_t call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_atomic_int_least64_t T = NULL;
  chpl____wide__ref_atomic_int64 chpl_macro_tmp_716;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_717;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_718;
  chpl_macro_tmp_716.locale = (&this12)->locale;
  chpl_macro_tmp_716.addr = &(((&this12)->addr)->runningTaskCounter);
  _field_destructor_tmp_ = chpl_macro_tmp_716;
  chpl_macro_tmp_717.locale = (_field_destructor_tmp_).locale;
  chpl_macro_tmp_717.addr = &(((_field_destructor_tmp_).addr)->_v);
  call_tmp2 = chpl_macro_tmp_717;
  T = (&call_tmp2)->addr;
  atomic_destroy_int_least64_t(T);
  chpl_macro_tmp_718.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_718.addr = T;
  call_tmp2 = chpl_macro_tmp_718;
  return;
}

/* ChapelLocale.chpl:177 */
static int64_t id(chpl____wide_locale this12) {
  int64_t call_tmp2;
  chpl____wide__ref_int32_t chpl_macro_tmp_719;
  int32_t chpl_macro_tmp_720;
  chpl_macro_tmp_719.locale = (&this12)->locale;
  chpl_macro_tmp_719.addr = &(((object)((&this12)->addr))->chpl__cid);
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_720)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_719).locale), INT64(0), INT32(0)), (chpl_macro_tmp_719).addr, sizeof(int32_t), -1, COMMID(2), INT64(177), INT64(25));
  call_tmp2 = ((int64_t(*)(chpl____wide_locale))chpl_vmtable[((INT64(9) * chpl_macro_tmp_720) + INT64(1))])(this12);
  return call_tmp2;
}

/* ChapelLocale.chpl:239 */
static int64_t chpl_id(chpl____wide_locale this12) {
  string local__str_literal_32;
  local__str_literal_32 /* "Pure virtual function called." */ = _str_literal_32 /* "Pure virtual function called." */;
  halt(&local__str_literal_32 /* "Pure virtual function called." */, INT64(240), INT32(25));
  return INT64(-1);
}

/* ChapelLocale.chpl:291 */
static int64_t getChildCount(chpl____wide_locale this12) {
  string local__str_literal_32;
  local__str_literal_32 /* "Pure virtual function called." */ = _str_literal_32 /* "Pure virtual function called." */;
  halt(&local__str_literal_32 /* "Pure virtual function called." */, INT64(292), INT32(25));
  return INT64(0);
}

/* ChapelLocale.chpl:310 */
static chpl____wide_locale getChild(chpl____wide_locale this12,
                                    int64_t idx) {
  string local__str_literal_32;
  local__str_literal_32 /* "Pure virtual function called." */ = _str_literal_32 /* "Pure virtual function called." */;
  halt(&local__str_literal_32 /* "Pure virtual function called." */, INT64(311), INT32(25));
  return this12;
}

/* ChapelLocale.chpl:329 */
static void chpl__auto_destroy_DummyLocale(chpl____wide_DummyLocale this12) {
  chpl____wide_locale _parent_destructor_tmp_ = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int64 _field_destructor_tmp_ = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int_least64_t call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_atomic_int_least64_t T = NULL;
  chpl____wide_locale chpl_macro_tmp_721;
  chpl____wide__ref_atomic_int64 chpl_macro_tmp_722;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_723;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_724;
  chpl_macro_tmp_721.locale = (&this12)->locale;
  chpl_macro_tmp_721.addr = ((locale)((&this12)->addr));
  _parent_destructor_tmp_ = chpl_macro_tmp_721;
  chpl_macro_tmp_722.locale = (&_parent_destructor_tmp_)->locale;
  chpl_macro_tmp_722.addr = &(((&_parent_destructor_tmp_)->addr)->runningTaskCounter);
  _field_destructor_tmp_ = chpl_macro_tmp_722;
  chpl_macro_tmp_723.locale = (_field_destructor_tmp_).locale;
  chpl_macro_tmp_723.addr = &(((_field_destructor_tmp_).addr)->_v);
  call_tmp2 = chpl_macro_tmp_723;
  T = (&call_tmp2)->addr;
  atomic_destroy_int_least64_t(T);
  chpl_macro_tmp_724.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_724.addr = T;
  call_tmp2 = chpl_macro_tmp_724;
  return;
}

/* ChapelLocale.chpl:329 */
static DummyLocale _construct_DummyLocale(locale parent,
                                          int64_t nPUsLogAcc,
                                          int64_t nPUsLogAll,
                                          int64_t nPUsPhysAcc,
                                          int64_t nPUsPhysAll,
                                          int64_t maxTaskPar,
                                          uint64_t callStackSize,
                                          _ref_atomic_int64 runningTaskCounter,
                                          DummyLocale meme) {
  DummyLocale this12 = NULL;
  this12 = meme;
  _construct_locale(parent, nPUsLogAcc, nPUsLogAll, nPUsPhysAcc, nPUsPhysAll, maxTaskPar, callStackSize, runningTaskCounter, &((this12)->super));
  return meme;
}

/* ChapelLocale.chpl:330 */
static int64_t chpl_id2(chpl____wide_DummyLocale this12) {
  return INT64(-1);
}

/* ChapelLocale.chpl:339 */
static int64_t getChildCount2(chpl____wide_DummyLocale this12) {
  return INT64(0);
}

/* ChapelLocale.chpl:342 */
static chpl____wide_locale getChild2(chpl____wide_DummyLocale this12,
                                     int64_t idx) {
  chpl____wide_locale call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_locale chpl_macro_tmp_725;
  chpl_macro_tmp_725.locale = (&this12)->locale;
  chpl_macro_tmp_725.addr = ((locale)((&this12)->addr));
  call_tmp2 = chpl_macro_tmp_725;
  return call_tmp2;
}

/* ChapelLocale.chpl:353 */
static AbstractLocaleModel _construct_AbstractLocaleModel(locale parent,
                                                          int64_t nPUsLogAcc,
                                                          int64_t nPUsLogAll,
                                                          int64_t nPUsPhysAcc,
                                                          int64_t nPUsPhysAll,
                                                          int64_t maxTaskPar,
                                                          uint64_t callStackSize,
                                                          _ref_atomic_int64 runningTaskCounter,
                                                          AbstractLocaleModel meme) {
  AbstractLocaleModel this12 = NULL;
  this12 = meme;
  _construct_locale(parent, nPUsLogAcc, nPUsLogAll, nPUsPhysAcc, nPUsPhysAll, maxTaskPar, callStackSize, runningTaskCounter, &((this12)->super));
  return meme;
}

/* ChapelLocale.chpl:353 */
static void chpl__auto_destroy_AbstractLocaleModel(chpl____wide_AbstractLocaleModel this12) {
  chpl____wide_locale _parent_destructor_tmp_ = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int64 _field_destructor_tmp_ = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int_least64_t call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_atomic_int_least64_t T = NULL;
  chpl____wide_locale chpl_macro_tmp_726;
  chpl____wide__ref_atomic_int64 chpl_macro_tmp_727;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_728;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_729;
  chpl_macro_tmp_726.locale = (&this12)->locale;
  chpl_macro_tmp_726.addr = ((locale)((&this12)->addr));
  _parent_destructor_tmp_ = chpl_macro_tmp_726;
  chpl_macro_tmp_727.locale = (&_parent_destructor_tmp_)->locale;
  chpl_macro_tmp_727.addr = &(((&_parent_destructor_tmp_)->addr)->runningTaskCounter);
  _field_destructor_tmp_ = chpl_macro_tmp_727;
  chpl_macro_tmp_728.locale = (_field_destructor_tmp_).locale;
  chpl_macro_tmp_728.addr = &(((_field_destructor_tmp_).addr)->_v);
  call_tmp2 = chpl_macro_tmp_728;
  T = (&call_tmp2)->addr;
  atomic_destroy_int_least64_t(T);
  chpl_macro_tmp_729.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_729.addr = T;
  call_tmp2 = chpl_macro_tmp_729;
  return;
}

/* ChapelLocale.chpl:389 */
static AbstractRootLocale _construct_AbstractRootLocale(locale parent,
                                                        int64_t nPUsLogAcc,
                                                        int64_t nPUsLogAll,
                                                        int64_t nPUsPhysAcc,
                                                        int64_t nPUsPhysAll,
                                                        int64_t maxTaskPar,
                                                        uint64_t callStackSize,
                                                        _ref_atomic_int64 runningTaskCounter,
                                                        AbstractRootLocale meme) {
  AbstractRootLocale this12 = NULL;
  this12 = meme;
  _construct_locale(parent, nPUsLogAcc, nPUsLogAll, nPUsPhysAcc, nPUsPhysAll, maxTaskPar, callStackSize, runningTaskCounter, &((this12)->super));
  return meme;
}

/* ChapelLocale.chpl:389 */
static void chpl__auto_destroy_AbstractRootLocale(chpl____wide_AbstractRootLocale this12) {
  chpl____wide_locale _parent_destructor_tmp_ = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int64 _field_destructor_tmp_ = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int_least64_t call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_atomic_int_least64_t T = NULL;
  chpl____wide_locale chpl_macro_tmp_730;
  chpl____wide__ref_atomic_int64 chpl_macro_tmp_731;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_732;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_733;
  chpl_macro_tmp_730.locale = (&this12)->locale;
  chpl_macro_tmp_730.addr = ((locale)((&this12)->addr));
  _parent_destructor_tmp_ = chpl_macro_tmp_730;
  chpl_macro_tmp_731.locale = (&_parent_destructor_tmp_)->locale;
  chpl_macro_tmp_731.addr = &(((&_parent_destructor_tmp_)->addr)->runningTaskCounter);
  _field_destructor_tmp_ = chpl_macro_tmp_731;
  chpl_macro_tmp_732.locale = (_field_destructor_tmp_).locale;
  chpl_macro_tmp_732.addr = &(((_field_destructor_tmp_).addr)->_v);
  call_tmp2 = chpl_macro_tmp_732;
  T = (&call_tmp2)->addr;
  atomic_destroy_int_least64_t(T);
  chpl_macro_tmp_733.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_733.addr = T;
  call_tmp2 = chpl_macro_tmp_733;
  return;
}

/* ChapelLocale.chpl:404 */
static chpl____wide_locale localeIDtoLocale(chpl____wide_AbstractRootLocale this12,
                                            chpl____wide__ref_chpl_localeID_t id2) {
  string local__str_literal_32;
  chpl____wide_locale call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_locale chpl_macro_tmp_734;
  local__str_literal_32 /* "Pure virtual function called." */ = _str_literal_32 /* "Pure virtual function called." */;
  halt(&local__str_literal_32 /* "Pure virtual function called." */, INT64(405), INT32(25));
  chpl_macro_tmp_734.locale = (&this12)->locale;
  chpl_macro_tmp_734.addr = ((locale)((&this12)->addr));
  call_tmp2 = chpl_macro_tmp_734;
  return call_tmp2;
}

/* ChapelLocale.chpl:461 */
static localesSignal _construct_localesSignal(_ref_atomicbool s,
                                              localesSignal meme) {
  localesSignal this12 = NULL;
  this12 = meme;
  _construct_object(&((this12)->super));
  (this12)->s = *(s);
  return this12;
}

/* ChapelLocale.chpl:461 */
static void chpl__auto_destroy_localesSignal(chpl____wide_localesSignal this12) {
  chpl____wide__ref_atomicbool _field_destructor_tmp_ = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_bool call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_atomic_bool T = NULL;
  chpl____wide__ref_atomicbool chpl_macro_tmp_735;
  chpl____wide__ref_atomic_bool chpl_macro_tmp_736;
  chpl____wide__ref_atomic_bool chpl_macro_tmp_737;
  chpl_macro_tmp_735.locale = (&this12)->locale;
  chpl_macro_tmp_735.addr = &(((&this12)->addr)->s);
  _field_destructor_tmp_ = chpl_macro_tmp_735;
  chpl_macro_tmp_736.locale = (_field_destructor_tmp_).locale;
  chpl_macro_tmp_736.addr = &(((_field_destructor_tmp_).addr)->_v);
  call_tmp2 = chpl_macro_tmp_736;
  T = (&call_tmp2)->addr;
  atomic_destroy_bool(T);
  chpl_macro_tmp_737.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_737.addr = T;
  call_tmp2 = chpl_macro_tmp_737;
  return;
}

/* ChapelLocale.chpl:465 */
static void _construct_localesBarrier(_ref_localesBarrier meme,
                                      _ref_localesBarrier _retArg) {
  localesBarrier this12;
  this12 = *(meme);
  *(_retArg) = this12;
  return;
}

/* ChapelLocale.chpl:466 */
static void wait5(_ref_localesBarrier this12,
                  int64_t locIdx,
                  _ref__array_DefaultRectangularArr_localesSignal_1_int64_t_F_int64_t flags) {
  memory_order local_memory_order_seq_cst;
  chpl_bool call_tmp2;
  chpl_bool T;
  memory_order default_argorder;
  int64_t count;
  chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F_int64_t ret = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F_int64_t this13 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularDom_1_int64_t_F coerce_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularDom_1_int64_t_F _ic__F1_viewDom = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F_int64_t info = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp3;
  int64_t call_tmp4;
  int64_t call_tmp5;
  int64_t call_tmp6;
  int64_t _ic__F1_high;
  int64_t _ic__F2_stride;
  int64_t i;
  chpl____wide__ddata_localesSignal coerce_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide_localesSignal call_tmp7 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_localesSignal coerce_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp8 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp9;
  chpl____wide_object T2 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_int64_t _ref_tmp_ = NULL;
  int64_t call_tmp10;
  chpl_bool call_tmp11;
  chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F_int64_t ret2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F_int64_t this14 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularDom_1_int64_t_F coerce_tmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularDom_1_int64_t_F _ic__F1_viewDom2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F_int64_t info2 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp12;
  int64_t call_tmp13;
  int64_t call_tmp14;
  int64_t call_tmp15;
  int64_t _ic__F1_high2;
  int64_t _ic__F2_stride2;
  int64_t i2;
  chpl____wide__ddata_localesSignal coerce_tmp5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide_localesSignal call_tmp16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_localesSignal coerce_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomicbool call_tmp17 = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order default_argorder2;
  chpl_bool ret3;
  chpl_localeID_t call_tmp18;
  chpl____wide__ref_atomicbool T3 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_chpl_bool T4 = NULL;
  chpl_bool isdirect;
  chpl____wide__ref_chpl_bool T5 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn3 _args_foron_fn = NULL;
  chpl____wide__ref_atomicbool T6 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_chpl_bool T7 = NULL;
  chpl____wide__ref_chpl_bool T8 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn;
  localesSignal f = NULL;
  localesSignal this15 = NULL;
  c_void_ptr cast_tmp;
  atomicbool _init_class_tmp_;
  atomicbool this16;
  atomic_bool ret4;
  atomic_bool type_tmp;
  _ref_atomic_bool _ref_tmp_2 = NULL;
  atomicbool ret_tmp;
  _ref_atomicbool ret_to_arg_ref_tmp_ = NULL;
  localesSignal wrap_call_tmp = NULL;
  chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F_int64_t call_tmp19 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F_int64_t ret5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ddata_localesSignal coerce_tmp7 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide_localesSignal call_tmp20 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_localesSignal T9 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_atomicbool call_tmp21 = NULL;
  memory_order default_argorder3;
  chpl_localeID_t call_tmp22;
  _ref_atomicbool T10 = NULL;
  chpl_bool isdirect2;
  chpl____wide__ref_atomicbool T11 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn5 _args_foron_fn2 = NULL;
  _ref_atomicbool T12 = NULL;
  chpl____wide__ref_atomicbool T13 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn2;
  _ref_atomicbool _field_destructor_tmp_ = NULL;
  _ref_atomic_bool call_tmp23 = NULL;
  chpl_localeID_t call_tmp24;
  localesSignal rvfDerefTmp = NULL;
  chpl_bool isdirect3;
  chpl____wide_localesSignal T14 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn102 _args_foron_fn3 = NULL;
  chpl____wide_localesSignal T15 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn3;
  chpl____wide__ref__wide_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_738;
  chpl____wide__ref__wide__ddata_localesSignal chpl_macro_tmp_739;
  chpl____wide__ref__wide_localesSignal chpl_macro_tmp_740;
  chpl____wide_object chpl_macro_tmp_741;
  chpl____wide__nilType chpl_macro_tmp_742;
  chpl____wide_object chpl_macro_tmp_743;
  chpl____wide__ref__wide_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_744;
  chpl____wide__ref__wide__ddata_localesSignal chpl_macro_tmp_745;
  chpl____wide__ref__wide_localesSignal chpl_macro_tmp_746;
  chpl____wide__ref_atomicbool chpl_macro_tmp_747;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_748;
  chpl__class_localson_fn3_object chpl_macro_tmp_749;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_750;
  chpl____wide__ref__wide__ddata_localesSignal chpl_macro_tmp_751;
  chpl____wide__ref__wide_localesSignal chpl_macro_tmp_752;
  chpl____wide_localesSignal chpl_macro_tmp_753;
  chpl____wide__ref_atomicbool chpl_macro_tmp_754;
  chpl__class_localson_fn5_object chpl_macro_tmp_755;
  chpl____wide__ref_atomicbool chpl_macro_tmp_756;
  chpl____wide_localesSignal chpl_macro_tmp_757;
  chpl__class_localson_fn102_object chpl_macro_tmp_758;
  chpl____wide_localesSignal chpl_macro_tmp_759;
  local_memory_order_seq_cst = memory_order_seq_cst;
  call_tmp2 = (locIdx == INT64(0));
  if (call_tmp2) {
    T = UINT8(true);
    call_tmp10 = (numLocales - INT64(1));
    while (T) {
      default_argorder = local_memory_order_seq_cst;
      atomic_fence(default_argorder);
      count = INT64(0);
      ret = (flags)->_instance;
      this13 = ret;
      chpl_macro_tmp_738.locale = (&this13)->locale;
      chpl_macro_tmp_738.addr = &(((&this13)->addr)->dom);
      chpl_gen_comm_get(((void*)(&coerce_tmp)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_738).locale), INT64(0), INT32(0)), (chpl_macro_tmp_738).addr, sizeof(chpl____wide_DefaultRectangularDom_1_int64_t_F), -1, COMMID(3), INT64(478), INT64(25));
      _ic__F1_viewDom = coerce_tmp;
      info = ret;
      call_tmp3 = dsiLow(coerce_tmp);
      call_tmp4 = dsiLow(_ic__F1_viewDom);
      call_tmp5 = (((int64_t)((call_tmp4 + INT64(1)))) - call_tmp3);
      call_tmp6 = dsiNumIndices(_ic__F1_viewDom);
      _ic__F1_high = ((int64_t)((call_tmp3 + ((int64_t)((((int64_t)((call_tmp6 - INT64(1)))) * call_tmp5))))));
      _ic__F2_stride = call_tmp5;
      chpl_macro_tmp_739.locale = (&info)->locale;
      chpl_macro_tmp_739.addr = &(((&info)->addr)->shiftedData);
      chpl_gen_comm_get(((void*)(&coerce_tmp2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_739).locale), INT64(0), INT32(0)), (chpl_macro_tmp_739).addr, sizeof(chpl____wide__ddata_localesSignal), -1, COMMID(4), INT64(478), INT64(25));
      for (i = call_tmp3; ((i <= _ic__F1_high)); i += _ic__F2_stride) {
        chpl_macro_tmp_740.locale = (&coerce_tmp2)->locale;
        chpl_macro_tmp_740.addr = ((&coerce_tmp2)->addr + i);
        call_tmp7 = chpl_macro_tmp_740;
        chpl_gen_comm_get(((void*)(&coerce_tmp3)), chpl_nodeFromLocaleID(&((call_tmp7).locale), INT64(0), INT32(0)), (call_tmp7).addr, sizeof(chpl____wide_localesSignal), -1, COMMID(5), INT64(479), INT64(25));
        chpl_macro_tmp_741.locale = (&coerce_tmp3)->locale;
        chpl_macro_tmp_741.addr = ((object)((&coerce_tmp3)->addr));
        call_tmp8 = chpl_macro_tmp_741;
        chpl_macro_tmp_742.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_742.addr = nil;
        chpl_macro_tmp_743.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_743.addr = NULL;
        T2 = chpl_macro_tmp_743;
        call_tmp9 = (((&call_tmp8)->addr != (&T2)->addr) || ((!(! (&call_tmp8)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp8)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&T2)->locale), INT64(0), INT32(0)))));
        if (call_tmp9) {
          _ref_tmp_ = &count;
          *(_ref_tmp_) += INT64(1);
        }
      }
      call_tmp11 = (count == call_tmp10);
      if (call_tmp11) {
        goto _breakLabel;
      }
      chpl_task_yield();
      T = UINT8(true);
    }
    _breakLabel:;
    ret2 = (flags)->_instance;
    this14 = ret2;
    chpl_macro_tmp_744.locale = (&this14)->locale;
    chpl_macro_tmp_744.addr = &(((&this14)->addr)->dom);
    chpl_gen_comm_get(((void*)(&coerce_tmp4)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_744).locale), INT64(0), INT32(0)), (chpl_macro_tmp_744).addr, sizeof(chpl____wide_DefaultRectangularDom_1_int64_t_F), -1, COMMID(6), INT64(486), INT64(25));
    _ic__F1_viewDom2 = coerce_tmp4;
    info2 = ret2;
    call_tmp12 = dsiLow(coerce_tmp4);
    call_tmp13 = dsiLow(_ic__F1_viewDom2);
    call_tmp14 = (((int64_t)((call_tmp13 + INT64(1)))) - call_tmp12);
    call_tmp15 = dsiNumIndices(_ic__F1_viewDom2);
    _ic__F1_high2 = ((int64_t)((call_tmp12 + ((int64_t)((((int64_t)((call_tmp15 - INT64(1)))) * call_tmp14))))));
    _ic__F2_stride2 = call_tmp14;
    for (i2 = call_tmp12; ((i2 <= _ic__F1_high2)); i2 += _ic__F2_stride2) {
      chpl_macro_tmp_745.locale = (&info2)->locale;
      chpl_macro_tmp_745.addr = &(((&info2)->addr)->shiftedData);
      chpl_gen_comm_get(((void*)(&coerce_tmp5)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_745).locale), INT64(0), INT32(0)), (chpl_macro_tmp_745).addr, sizeof(chpl____wide__ddata_localesSignal), -1, COMMID(7), INT64(486), INT64(25));
      chpl_macro_tmp_746.locale = (&coerce_tmp5)->locale;
      chpl_macro_tmp_746.addr = ((&coerce_tmp5)->addr + i2);
      call_tmp16 = chpl_macro_tmp_746;
      chpl_gen_comm_get(((void*)(&coerce_tmp6)), chpl_nodeFromLocaleID(&((call_tmp16).locale), INT64(0), INT32(0)), (call_tmp16).addr, sizeof(chpl____wide_localesSignal), -1, COMMID(8), INT64(487), INT64(25));
      chpl_macro_tmp_747.locale = (&coerce_tmp6)->locale;
      chpl_macro_tmp_747.addr = &(((&coerce_tmp6)->addr)->s);
      call_tmp17 = chpl_macro_tmp_747;
      default_argorder2 = local_memory_order_seq_cst;
      ret3 = UINT8(false);
      call_tmp18 = (&call_tmp17)->locale;
      T3 = call_tmp17;
      T4 = &ret3;
      isdirect = chpl_doDirectExecuteOn(&call_tmp18);
      if (isdirect) {
        chpl_macro_tmp_748.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_748.addr = T4;
        T5 = chpl_macro_tmp_748;
        on_fn3(T3, default_argorder2, T5);
      } else {
        _args_foron_fn = ((_class_localson_fn3)(&chpl_macro_tmp_749));
        (_args_foron_fn)->_0_rvfDerefTmp = call_tmp18;
        T6 = call_tmp17;
        (_args_foron_fn)->_1_tmp = T6;
        (_args_foron_fn)->_2_rvfDerefTmp = default_argorder2;
        T7 = &ret3;
        chpl_macro_tmp_750.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_750.addr = T7;
        T8 = chpl_macro_tmp_750;
        (_args_foron_fn)->_3_tmp = T8;
        _args_vforon_fn = ((void*)(_args_foron_fn));
        /*** wrapon_fn3 ***/ chpl_executeOn(&call_tmp18, INT32(3), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn3_object), INT64(384), INT32(12));
      }
    }
  } else {
    cast_tmp = chpl_here_alloc(sizeof(chpl_localesSignal_object), INT16(31));
    this15 = ((localesSignal)(cast_tmp));
    ((object)(this15))->chpl__cid = chpl__cid_localesSignal;
    (this15)->s = _init_class_tmp_;
    ret4 = type_tmp;
    _ref_tmp_2 = &ret4;
    atomic_init_bool(_ref_tmp_2, UINT8(false));
    (&this16)->_v = ret4;
    ret_to_arg_ref_tmp_ = &ret_tmp;
    _construct_atomicbool(ret4, &this16, ret_to_arg_ref_tmp_);
    (this15)->s = ret_tmp;
    wrap_call_tmp = _construct_localesSignal(&ret_tmp, this15);
    f = wrap_call_tmp;
    ret5 = (flags)->_instance;
    call_tmp19 = ret5;
    chpl_macro_tmp_751.locale = (&call_tmp19)->locale;
    chpl_macro_tmp_751.addr = &(((&call_tmp19)->addr)->shiftedData);
    chpl_gen_comm_get(((void*)(&coerce_tmp7)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_751).locale), INT64(0), INT32(0)), (chpl_macro_tmp_751).addr, sizeof(chpl____wide__ddata_localesSignal), -1, COMMID(9), INT64(491), INT64(25));
    chpl_macro_tmp_752.locale = (&coerce_tmp7)->locale;
    chpl_macro_tmp_752.addr = ((&coerce_tmp7)->addr + locIdx);
    call_tmp20 = chpl_macro_tmp_752;
    chpl_macro_tmp_753.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_753.addr = wrap_call_tmp;
    T9 = chpl_macro_tmp_753;
    chpl_gen_comm_put(((void*)(&T9)), chpl_nodeFromLocaleID(&((call_tmp20).locale), INT64(0), INT32(0)), (call_tmp20).addr, sizeof(chpl____wide_localesSignal), -1, COMMID(10), INT64(491), INT64(25));
    call_tmp21 = &((f)->s);
    default_argorder3 = local_memory_order_seq_cst;
    call_tmp22 = chpl_gen_getLocaleID();
    T10 = call_tmp21;
    isdirect2 = chpl_doDirectExecuteOn(&call_tmp22);
    if (isdirect2) {
      chpl_macro_tmp_754.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_754.addr = T10;
      T11 = chpl_macro_tmp_754;
      on_fn5(T11, UINT8(true), default_argorder3);
    } else {
      _args_foron_fn2 = ((_class_localson_fn5)(&chpl_macro_tmp_755));
      (_args_foron_fn2)->_0_rvfDerefTmp = call_tmp22;
      T12 = call_tmp21;
      chpl_macro_tmp_756.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_756.addr = T12;
      T13 = chpl_macro_tmp_756;
      (_args_foron_fn2)->_1_tmp = T13;
      (_args_foron_fn2)->_2_rvfDerefTmp = UINT8(true);
      (_args_foron_fn2)->_3_rvfDerefTmp = default_argorder3;
      _args_vforon_fn2 = ((void*)(_args_foron_fn2));
      /*** wrapon_fn5 ***/ chpl_executeOn(&call_tmp22, INT32(6), ((chpl_comm_on_bundle_p)(_args_vforon_fn2)), sizeof(chpl__class_localson_fn5_object), INT64(402), INT32(12));
    }
    _field_destructor_tmp_ = &((f)->s);
    call_tmp23 = &((_field_destructor_tmp_)->_v);
    atomic_destroy_bool(call_tmp23);
    call_tmp24 = chpl_gen_getLocaleID();
    rvfDerefTmp = f;
    isdirect3 = chpl_doDirectExecuteOn(&call_tmp24);
    if (isdirect3) {
      chpl_macro_tmp_757.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_757.addr = rvfDerefTmp;
      T14 = chpl_macro_tmp_757;
      on_fn112(T14);
    } else {
      _args_foron_fn3 = ((_class_localson_fn102)(&chpl_macro_tmp_758));
      (_args_foron_fn3)->_0_rvfDerefTmp = call_tmp24;
      chpl_macro_tmp_759.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_759.addr = rvfDerefTmp;
      T15 = chpl_macro_tmp_759;
      (_args_foron_fn3)->_1_rvfDerefTmp = T15;
      _args_vforon_fn3 = ((void*)(_args_foron_fn3));
      /*** wrapon_fn123 ***/ chpl_executeOn(&call_tmp24, INT32(188), ((chpl_comm_on_bundle_p)(_args_vforon_fn3)), sizeof(chpl__class_localson_fn102_object), INT64(1227), INT32(2));
    }
  }
  return;
}

/* ChapelLocale.chpl:509 */
static void chpl_init_rootLocale(void) {
  RootLocale call_tmp2 = NULL;
  locale call_tmp3 = NULL;
  chpl____wide_locale T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_locale T2 = {CHPL_LOCALEID_T_INIT, NULL};
  RootLocale _formal_type_tmp_ = NULL;
  chpl____wide_RootLocale ret = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp5;
  chpl____wide_object T3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_RootLocale call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  RootLocale call_tmp7 = NULL;
  chpl____wide_locale chpl_macro_tmp_760;
  chpl____wide__ref__wide_locale chpl_macro_tmp_761;
  chpl____wide__ref__wide_locale chpl_macro_tmp_762;
  chpl____wide_object chpl_macro_tmp_763;
  chpl____wide__nilType chpl_macro_tmp_764;
  chpl____wide_object chpl_macro_tmp_765;
  chpl____wide__ref_int32_t chpl_macro_tmp_766;
  int32_t chpl_macro_tmp_767;
  int32_t chpl_macro_tmp_768;
  chpl____wide_RootLocale chpl_macro_tmp_769;
  chpl____wide_RootLocale chpl_macro_tmp_770;
  call_tmp2 = RootLocale2();
  call_tmp3 = ((locale)(call_tmp2));
  chpl_macro_tmp_760.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_760.addr = call_tmp3;
  T = chpl_macro_tmp_760;
  chpl_macro_tmp_761.locale = (&origRootLocale)->locale;
  chpl_macro_tmp_761.addr = &(((&origRootLocale)->addr)->value);
  chpl_gen_comm_put(((void*)(&T)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_761).locale), INT64(0), INT32(0)), (chpl_macro_tmp_761).addr, sizeof(chpl____wide_locale), -1, COMMID(11), INT64(510), INT64(25));
  chpl_macro_tmp_762.locale = (&origRootLocale)->locale;
  chpl_macro_tmp_762.addr = &(((&origRootLocale)->addr)->value);
  chpl_gen_comm_get(((void*)(&T2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_762).locale), INT64(0), INT32(0)), (chpl_macro_tmp_762).addr, sizeof(chpl____wide_locale), -1, COMMID(12), INT64(386), INT64(25));
  chpl_macro_tmp_763.locale = (&T2)->locale;
  chpl_macro_tmp_763.addr = ((object)((&T2)->addr));
  call_tmp4 = chpl_macro_tmp_763;
  chpl_macro_tmp_764.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_764.addr = nil;
  chpl_macro_tmp_765.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_765.addr = NULL;
  T3 = chpl_macro_tmp_765;
  call_tmp5 = (((&call_tmp4)->addr != (&T3)->addr) || ((!(! (&call_tmp4)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp4)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&T3)->locale), INT64(0), INT32(0)))));
  if (call_tmp5) {
    chpl_macro_tmp_766.locale = (T2).locale;
    chpl_macro_tmp_766.addr = &(((object)((T2).addr))->chpl__cid);
    chpl_gen_comm_get(((void*)(&chpl_macro_tmp_767)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_766).locale), INT64(0), INT32(0)), (chpl_macro_tmp_766).addr, sizeof(int32_t), -1, COMMID(13), INT64(511), INT64(25));
    chpl_macro_tmp_768 = chpl_macro_tmp_767;
    chpl_macro_tmp_769.locale = (T2).locale;
    chpl_macro_tmp_769.addr = ( (((chpl__cid_RootLocale <= chpl_macro_tmp_768) && (chpl_macro_tmp_768 <= chpl_subclass_max_id[chpl__cid_RootLocale])))?(((RootLocale)((T2).addr))):(((RootLocale)(NULL))) );
    call_tmp6 = chpl_macro_tmp_769;
    ret = call_tmp6;
    goto _end__if_fn18;
  } else {
    call_tmp7 = ((RootLocale)(nil));
    chpl_macro_tmp_770.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_770.addr = call_tmp7;
    ret = chpl_macro_tmp_770;
    goto _end__if_fn18;
  }
  _end__if_fn18:;
  setup2(ret);
  return;
}

/* ChapelLocale.chpl:519 */
static void chpl_rootLocaleInitPrivate(int64_t locIdx) {
  int64_t local_numLocales;
  chpl____wide_locale T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp2;
  RootLocale newRootLocale = NULL;
  chpl____wide_locale T2 = {CHPL_LOCALEID_T_INIT, NULL};
  RootLocale _formal_type_tmp_ = NULL;
  chpl____wide_RootLocale ret = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp4;
  chpl____wide_object T3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_RootLocale call_tmp5 = {CHPL_LOCALEID_T_INIT, NULL};
  RootLocale call_tmp6 = NULL;
  chpl____wide__ref__wide__array_DefaultRectangularArr_locale_1_int64_t_F_int64_t call_tmp7 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_RootLocale T4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ddata_locale origRL = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_locale_1_int64_t_F_int64_t call_tmp8 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_locale_1_int64_t_F_int64_t ret2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ddata_locale coerce_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ddata_locale newRL = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide__array_DefaultRectangularArr_locale_1_int64_t_F_int64_t call_tmp9 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_RootLocale T5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_locale_1_int64_t_F_int64_t call_tmp10 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_locale_1_int64_t_F_int64_t ret3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ddata_locale coerce_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide_locale call_tmp11 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide_locale call_tmp12 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp13;
  RootLocale _formal_type_tmp_2 = NULL;
  chpl____wide_RootLocale ret4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp14 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp15;
  chpl____wide_object T6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_RootLocale call_tmp16 = {CHPL_LOCALEID_T_INIT, NULL};
  RootLocale call_tmp17 = NULL;
  chpl____wide__ref__wide__array_DefaultRectangularArr_locale_1_int64_t_F_int64_t call_tmp18 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide_locale chpl_macro_tmp_771;
  chpl____wide__ref__wide_locale chpl_macro_tmp_772;
  chpl____wide_object chpl_macro_tmp_773;
  chpl____wide__nilType chpl_macro_tmp_774;
  chpl____wide_object chpl_macro_tmp_775;
  chpl____wide__ref_int32_t chpl_macro_tmp_776;
  int32_t chpl_macro_tmp_777;
  int32_t chpl_macro_tmp_778;
  chpl____wide_RootLocale chpl_macro_tmp_779;
  chpl____wide_RootLocale chpl_macro_tmp_780;
  chpl____wide_RootLocale chpl_macro_tmp_781;
  chpl____wide__ref__wide_DefaultRectangularArr_locale_1_int64_t_F_int64_t chpl_macro_tmp_782;
  chpl____wide__ref__wide__ddata_locale chpl_macro_tmp_783;
  chpl____wide_RootLocale chpl_macro_tmp_784;
  chpl____wide__ref__wide_DefaultRectangularArr_locale_1_int64_t_F_int64_t chpl_macro_tmp_785;
  chpl____wide__ref__wide__ddata_locale chpl_macro_tmp_786;
  chpl____wide__ref__wide_locale chpl_macro_tmp_787;
  chpl____wide__ref__wide_locale chpl_macro_tmp_788;
  chpl____wide_locale chpl_macro_tmp_789;
  chpl____wide_object chpl_macro_tmp_790;
  chpl____wide__nilType chpl_macro_tmp_791;
  chpl____wide_object chpl_macro_tmp_792;
  chpl____wide__ref_int32_t chpl_macro_tmp_793;
  int32_t chpl_macro_tmp_794;
  int32_t chpl_macro_tmp_795;
  chpl____wide_RootLocale chpl_macro_tmp_796;
  chpl____wide_RootLocale chpl_macro_tmp_797;
  local_numLocales = numLocales;
  chpl_macro_tmp_771.locale = (&origRootLocale)->locale;
  chpl_macro_tmp_771.addr = &(((&origRootLocale)->addr)->value);
  chpl_gen_comm_get(((void*)(&T)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_771).locale), INT64(0), INT32(0)), (chpl_macro_tmp_771).addr, sizeof(chpl____wide_locale), -1, COMMID(14), INT64(386), INT64(25));
  rootLocale = T;
  call_tmp2 = (locIdx != INT64(0));
  if (call_tmp2) {
    newRootLocale = RootLocale2();
    chpl_macro_tmp_772.locale = (&origRootLocale)->locale;
    chpl_macro_tmp_772.addr = &(((&origRootLocale)->addr)->value);
    chpl_gen_comm_get(((void*)(&T2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_772).locale), INT64(0), INT32(0)), (chpl_macro_tmp_772).addr, sizeof(chpl____wide_locale), -1, COMMID(15), INT64(386), INT64(25));
    chpl_macro_tmp_773.locale = (&T2)->locale;
    chpl_macro_tmp_773.addr = ((object)((&T2)->addr));
    call_tmp3 = chpl_macro_tmp_773;
    chpl_macro_tmp_774.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_774.addr = nil;
    chpl_macro_tmp_775.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_775.addr = NULL;
    T3 = chpl_macro_tmp_775;
    call_tmp4 = (((&call_tmp3)->addr != (&T3)->addr) || ((!(! (&call_tmp3)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp3)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&T3)->locale), INT64(0), INT32(0)))));
    if (call_tmp4) {
      chpl_macro_tmp_776.locale = (T2).locale;
      chpl_macro_tmp_776.addr = &(((object)((T2).addr))->chpl__cid);
      chpl_gen_comm_get(((void*)(&chpl_macro_tmp_777)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_776).locale), INT64(0), INT32(0)), (chpl_macro_tmp_776).addr, sizeof(int32_t), -1, COMMID(16), INT64(531), INT64(25));
      chpl_macro_tmp_778 = chpl_macro_tmp_777;
      chpl_macro_tmp_779.locale = (T2).locale;
      chpl_macro_tmp_779.addr = ( (((chpl__cid_RootLocale <= chpl_macro_tmp_778) && (chpl_macro_tmp_778 <= chpl_subclass_max_id[chpl__cid_RootLocale])))?(((RootLocale)((T2).addr))):(((RootLocale)(NULL))) );
      call_tmp5 = chpl_macro_tmp_779;
      ret = call_tmp5;
      goto _end__if_fn18;
    } else {
      call_tmp6 = ((RootLocale)(nil));
      chpl_macro_tmp_780.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_780.addr = call_tmp6;
      ret = chpl_macro_tmp_780;
      goto _end__if_fn18;
    }
    _end__if_fn18:;
    call_tmp7 = getDefaultLocaleArray(ret);
    chpl_macro_tmp_781.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_781.addr = newRootLocale;
    T4 = chpl_macro_tmp_781;
    getDefaultLocaleArray(T4);
    assert_chpl(UINT8(true));
    chpl_macro_tmp_782.locale = (call_tmp7).locale;
    chpl_macro_tmp_782.addr = &(((call_tmp7).addr)->_instance);
    chpl_gen_comm_get(((void*)(&ret2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_782).locale), INT64(0), INT32(0)), (chpl_macro_tmp_782).addr, sizeof(chpl____wide_DefaultRectangularArr_locale_1_int64_t_F_int64_t), -1, COMMID(17), INT64(534), INT64(25));
    call_tmp8 = ret2;
    chpl_macro_tmp_783.locale = (&call_tmp8)->locale;
    chpl_macro_tmp_783.addr = &(((&call_tmp8)->addr)->shiftedData);
    chpl_gen_comm_get(((void*)(&coerce_tmp)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_783).locale), INT64(0), INT32(0)), (chpl_macro_tmp_783).addr, sizeof(chpl____wide__ddata_locale), -1, COMMID(18), INT64(534), INT64(25));
    origRL = coerce_tmp;
    chpl_macro_tmp_784.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_784.addr = newRootLocale;
    T5 = chpl_macro_tmp_784;
    call_tmp9 = getDefaultLocaleArray(T5);
    chpl_macro_tmp_785.locale = (call_tmp9).locale;
    chpl_macro_tmp_785.addr = &(((call_tmp9).addr)->_instance);
    chpl_gen_comm_get(((void*)(&ret3)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_785).locale), INT64(0), INT32(0)), (chpl_macro_tmp_785).addr, sizeof(chpl____wide_DefaultRectangularArr_locale_1_int64_t_F_int64_t), -1, COMMID(19), INT64(535), INT64(25));
    call_tmp10 = ret3;
    chpl_macro_tmp_786.locale = (&call_tmp10)->locale;
    chpl_macro_tmp_786.addr = &(((&call_tmp10)->addr)->shiftedData);
    chpl_gen_comm_get(((void*)(&coerce_tmp2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_786).locale), INT64(0), INT32(0)), (chpl_macro_tmp_786).addr, sizeof(chpl____wide__ddata_locale), -1, COMMID(20), INT64(535), INT64(25));
    newRL = coerce_tmp2;
    chpl_macro_tmp_787.locale = (&newRL)->locale;
    chpl_macro_tmp_787.addr = ((&newRL)->addr + INT64(0));
    call_tmp11 = chpl_macro_tmp_787;
    chpl_macro_tmp_788.locale = (&origRL)->locale;
    chpl_macro_tmp_788.addr = ((&origRL)->addr + INT64(0));
    call_tmp12 = chpl_macro_tmp_788;
    chpl_gen_comm_get(((void*)((&call_tmp11)->addr)), INT64(0), (&call_tmp12)->addr, (sizeof(chpl____wide_locale) * ((uint64_t)(local_numLocales))), -1, COMMID(21), INT64(539), INT32(25));
    chpl_macro_tmp_789.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_789.addr = ((locale)(newRootLocale));
    rootLocale = chpl_macro_tmp_789;
  }
  call_tmp13 = (locIdx != INT64(0));
  if (call_tmp13) {
    chpl_macro_tmp_790.locale = (&rootLocale)->locale;
    chpl_macro_tmp_790.addr = ((object)((&rootLocale)->addr));
    call_tmp14 = chpl_macro_tmp_790;
    chpl_macro_tmp_791.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_791.addr = nil;
    chpl_macro_tmp_792.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_792.addr = NULL;
    T6 = chpl_macro_tmp_792;
    call_tmp15 = (((&call_tmp14)->addr != (&T6)->addr) || ((!(! (&call_tmp14)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp14)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&T6)->locale), INT64(0), INT32(0)))));
    if (call_tmp15) {
      chpl_macro_tmp_793.locale = (rootLocale).locale;
      chpl_macro_tmp_793.addr = &(((object)((rootLocale).addr))->chpl__cid);
      chpl_gen_comm_get(((void*)(&chpl_macro_tmp_794)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_793).locale), INT64(0), INT32(0)), (chpl_macro_tmp_793).addr, sizeof(int32_t), -1, COMMID(22), INT64(551), INT64(25));
      chpl_macro_tmp_795 = chpl_macro_tmp_794;
      chpl_macro_tmp_796.locale = (rootLocale).locale;
      chpl_macro_tmp_796.addr = ( (((chpl__cid_RootLocale <= chpl_macro_tmp_795) && (chpl_macro_tmp_795 <= chpl_subclass_max_id[chpl__cid_RootLocale])))?(((RootLocale)((rootLocale).addr))):(((RootLocale)(NULL))) );
      call_tmp16 = chpl_macro_tmp_796;
      ret4 = call_tmp16;
      goto _end__if_fn182;
    } else {
      call_tmp17 = ((RootLocale)(nil));
      chpl_macro_tmp_797.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_797.addr = call_tmp17;
      ret4 = chpl_macro_tmp_797;
      goto _end__if_fn182;
    }
    _end__if_fn182:;
    call_tmp18 = getDefaultLocaleArray(ret4);
    Locales = call_tmp18;
  }
  return;
}

/* ChapelLocale.chpl:571 */
void chpl_getLocaleID(_ref_chpl_localeID_t localeID,
                      int64_t _ln,
                      int32_t _fn) {
  chpl_localeID_t _autoCopy_tmp_;
  _autoCopy_tmp_ = chpl_rt_buildLocaleID(chpl_nodeID, c_sublocid_any);
  *(localeID) = _autoCopy_tmp_;
  return;
}

/* ChapelLocale.chpl:596 */
static chpl____wide_locale chpl_localeID_to_locale(_ref_chpl_localeID_t id2) {
  chpl____wide_heap_DummyLocale local_dummyLocale = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_locale ret = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp3;
  chpl____wide_object T = {CHPL_LOCALEID_T_INIT, NULL};
  AbstractRootLocale _formal_type_tmp_ = NULL;
  chpl____wide_AbstractRootLocale ret2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp5;
  chpl____wide_object T2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_AbstractRootLocale call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  AbstractRootLocale call_tmp7 = NULL;
  chpl____wide_locale call_tmp8 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_chpl_localeID_t T3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DummyLocale T4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_locale call_tmp9 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object chpl_macro_tmp_798;
  chpl____wide__nilType chpl_macro_tmp_799;
  chpl____wide_object chpl_macro_tmp_800;
  chpl____wide_object chpl_macro_tmp_801;
  chpl____wide__nilType chpl_macro_tmp_802;
  chpl____wide_object chpl_macro_tmp_803;
  chpl____wide__ref_int32_t chpl_macro_tmp_804;
  int32_t chpl_macro_tmp_805;
  int32_t chpl_macro_tmp_806;
  chpl____wide_AbstractRootLocale chpl_macro_tmp_807;
  chpl____wide_AbstractRootLocale chpl_macro_tmp_808;
  chpl____wide__ref_chpl_localeID_t chpl_macro_tmp_809;
  chpl____wide__ref_int32_t chpl_macro_tmp_810;
  int32_t chpl_macro_tmp_811;
  chpl____wide__ref__wide_DummyLocale chpl_macro_tmp_812;
  chpl____wide_locale chpl_macro_tmp_813;
  local_dummyLocale = dummyLocale;
  chpl_macro_tmp_798.locale = (&rootLocale)->locale;
  chpl_macro_tmp_798.addr = ((object)((&rootLocale)->addr));
  call_tmp2 = chpl_macro_tmp_798;
  chpl_macro_tmp_799.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_799.addr = nil;
  chpl_macro_tmp_800.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_800.addr = NULL;
  T = chpl_macro_tmp_800;
  call_tmp3 = (((&call_tmp2)->addr != (&T)->addr) || ((!(! (&call_tmp2)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp2)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&T)->locale), INT64(0), INT32(0)))));
  if (call_tmp3) {
    chpl_macro_tmp_801.locale = (&rootLocale)->locale;
    chpl_macro_tmp_801.addr = ((object)((&rootLocale)->addr));
    call_tmp4 = chpl_macro_tmp_801;
    chpl_macro_tmp_802.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_802.addr = nil;
    chpl_macro_tmp_803.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_803.addr = NULL;
    T2 = chpl_macro_tmp_803;
    call_tmp5 = (((&call_tmp4)->addr != (&T2)->addr) || ((!(! (&call_tmp4)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp4)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&T2)->locale), INT64(0), INT32(0)))));
    if (call_tmp5) {
      chpl_macro_tmp_804.locale = (rootLocale).locale;
      chpl_macro_tmp_804.addr = &(((object)((rootLocale).addr))->chpl__cid);
      chpl_gen_comm_get(((void*)(&chpl_macro_tmp_805)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_804).locale), INT64(0), INT32(0)), (chpl_macro_tmp_804).addr, sizeof(int32_t), -1, COMMID(23), INT64(598), INT64(25));
      chpl_macro_tmp_806 = chpl_macro_tmp_805;
      chpl_macro_tmp_807.locale = (rootLocale).locale;
      chpl_macro_tmp_807.addr = ( (((chpl__cid_AbstractRootLocale <= chpl_macro_tmp_806) && (chpl_macro_tmp_806 <= chpl_subclass_max_id[chpl__cid_AbstractRootLocale])))?(((AbstractRootLocale)((rootLocale).addr))):(((AbstractRootLocale)(NULL))) );
      call_tmp6 = chpl_macro_tmp_807;
      ret2 = call_tmp6;
      goto _end__if_fn18;
    } else {
      call_tmp7 = ((AbstractRootLocale)(nil));
      chpl_macro_tmp_808.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_808.addr = call_tmp7;
      ret2 = chpl_macro_tmp_808;
      goto _end__if_fn18;
    }
    _end__if_fn18:;
    chpl_macro_tmp_809.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_809.addr = id2;
    T3 = chpl_macro_tmp_809;
    chpl_macro_tmp_810.locale = (&ret2)->locale;
    chpl_macro_tmp_810.addr = &(((object)((&ret2)->addr))->chpl__cid);
    chpl_gen_comm_get(((void*)(&chpl_macro_tmp_811)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_810).locale), INT64(0), INT32(0)), (chpl_macro_tmp_810).addr, sizeof(int32_t), -1, COMMID(24), INT64(598), INT64(25));
    call_tmp8 = ((chpl____wide_locale(*)(chpl____wide_AbstractRootLocale,
                   chpl____wide__ref_chpl_localeID_t))chpl_vmtable[((INT64(9) * chpl_macro_tmp_811) + INT64(4))])(ret2, T3);
    ret = call_tmp8;
    goto _end_chpl_localeID_to_locale;
  } else {
    chpl_macro_tmp_812.locale = (&local_dummyLocale)->locale;
    chpl_macro_tmp_812.addr = &(((&local_dummyLocale)->addr)->value);
    chpl_gen_comm_get(((void*)(&T4)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_812).locale), INT64(0), INT32(0)), (chpl_macro_tmp_812).addr, sizeof(chpl____wide_DummyLocale), -1, COMMID(25), INT64(563), INT64(25));
    chpl_macro_tmp_813.locale = (&T4)->locale;
    chpl_macro_tmp_813.addr = ((locale)((&T4)->addr));
    call_tmp9 = chpl_macro_tmp_813;
    ret = call_tmp9;
    goto _end_chpl_localeID_to_locale;
  }
  _end_chpl_localeID_to_locale:;
  return ret;
}

/* ChapelLocale.chpl:605 */
static CyclicDom_1_int64_t_F_chpl chpl_getPrivatizedCopy9(int64_t objectPid) {
  CyclicDom_1_int64_t_F_chpl call_tmp2 = NULL;
  CyclicDom_1_int64_t_F_chpl call_tmp3 = NULL;
  call_tmp2 = ((CyclicDom_1_int64_t_F_chpl)(nil));
  call_tmp3 = chpl_getPrivatizedClass(objectPid);
  return call_tmp3;
}

/* ChapelLocale.chpl:605 */
static ReplicatedArr_FCHGlobalNode_ReplicatedDom_1_int64_t_F_chpl chpl_getPrivatizedCopy5(int64_t objectPid) {
  ReplicatedArr_FCHGlobalNode_ReplicatedDom_1_int64_t_F_chpl call_tmp2 = NULL;
  ReplicatedArr_FCHGlobalNode_ReplicatedDom_1_int64_t_F_chpl call_tmp3 = NULL;
  call_tmp2 = ((ReplicatedArr_FCHGlobalNode_ReplicatedDom_1_int64_t_F_chpl)(nil));
  call_tmp3 = chpl_getPrivatizedClass(objectPid);
  return call_tmp3;
}

/* ChapelLocale.chpl:605 */
static ReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_ReplicatedDom_1_int64_t_F_chpl chpl_getPrivatizedCopy6(int64_t objectPid) {
  ReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_ReplicatedDom_1_int64_t_F_chpl call_tmp2 = NULL;
  ReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_ReplicatedDom_1_int64_t_F_chpl call_tmp3 = NULL;
  call_tmp2 = ((ReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_ReplicatedDom_1_int64_t_F_chpl)(nil));
  call_tmp3 = chpl_getPrivatizedClass(objectPid);
  return call_tmp3;
}

/* ChapelLocale.chpl:605 */
static ReplicatedDom_1_int64_t_F_chpl chpl_getPrivatizedCopy7(int64_t objectPid) {
  ReplicatedDom_1_int64_t_F_chpl call_tmp2 = NULL;
  ReplicatedDom_1_int64_t_F_chpl call_tmp3 = NULL;
  call_tmp2 = ((ReplicatedDom_1_int64_t_F_chpl)(nil));
  call_tmp3 = chpl_getPrivatizedClass(objectPid);
  return call_tmp3;
}

/* ChapelLocale.chpl:605 */
static Replicated_chpl chpl_getPrivatizedCopy2(int64_t objectPid) {
  Replicated_chpl call_tmp2 = NULL;
  Replicated_chpl call_tmp3 = NULL;
  call_tmp2 = ((Replicated_chpl)(nil));
  call_tmp3 = chpl_getPrivatizedClass(objectPid);
  return call_tmp3;
}

/* ChapelLocale.chpl:605 */
static CyclicArr_Bitmap_1_int64_t_F_chpl chpl_getPrivatizedCopy8(int64_t objectPid) {
  CyclicArr_Bitmap_1_int64_t_F_chpl call_tmp2 = NULL;
  CyclicArr_Bitmap_1_int64_t_F_chpl call_tmp3 = NULL;
  call_tmp2 = ((CyclicArr_Bitmap_1_int64_t_F_chpl)(nil));
  call_tmp3 = chpl_getPrivatizedClass(objectPid);
  return call_tmp3;
}

/* ChapelLocale.chpl:605 */
static CyclicArr__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F_chpl chpl_getPrivatizedCopy(int64_t objectPid) {
  CyclicArr__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F_chpl call_tmp2 = NULL;
  CyclicArr__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F_chpl call_tmp3 = NULL;
  call_tmp2 = ((CyclicArr__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F_chpl)(nil));
  call_tmp3 = chpl_getPrivatizedClass(objectPid);
  return call_tmp3;
}

/* ChapelLocale.chpl:605 */
static Cyclic_1_int64_t_chpl chpl_getPrivatizedCopy4(int64_t objectPid) {
  Cyclic_1_int64_t_chpl call_tmp2 = NULL;
  Cyclic_1_int64_t_chpl call_tmp3 = NULL;
  call_tmp2 = ((Cyclic_1_int64_t_chpl)(nil));
  call_tmp3 = chpl_getPrivatizedClass(objectPid);
  return call_tmp3;
}

/* ChapelLocale.chpl:605 */
static object chpl_getPrivatizedCopy3(int64_t objectPid) {
  object call_tmp2 = NULL;
  object call_tmp3 = NULL;
  call_tmp2 = ((object)(nil));
  call_tmp3 = chpl_getPrivatizedClass(objectPid);
  return call_tmp3;
}

/* ChapelLocale.chpl:638 */
static int64_t runningTasks(chpl____wide_locale this12) {
  memory_order local_memory_order_relaxed;
  chpl____wide__ref_atomic_int64 call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t ret;
  chpl_localeID_t call_tmp3;
  chpl____wide__ref_atomic_int64 T = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_int64_t T2 = NULL;
  memory_order rvfDerefTmp;
  chpl_bool isdirect;
  chpl____wide__ref_int64_t T3 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn10 _args_foron_fn = NULL;
  chpl____wide__ref_atomic_int64 T4 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_int64_t T5 = NULL;
  chpl____wide__ref_int64_t T6 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn;
  int64_t ret2;
  chpl_bool call_tmp4;
  chpl____wide__ref_atomic_int64 chpl_macro_tmp_814;
  chpl____wide__ref_int64_t chpl_macro_tmp_815;
  chpl__class_localson_fn10_object chpl_macro_tmp_816;
  chpl____wide__ref_int64_t chpl_macro_tmp_817;
  local_memory_order_relaxed = memory_order_relaxed;
  chpl_macro_tmp_814.locale = (&this12)->locale;
  chpl_macro_tmp_814.addr = &(((&this12)->addr)->runningTaskCounter);
  call_tmp2 = chpl_macro_tmp_814;
  ret = INT64(0);
  call_tmp3 = (&call_tmp2)->locale;
  T = call_tmp2;
  T2 = &ret;
  rvfDerefTmp = local_memory_order_relaxed;
  isdirect = chpl_doDirectExecuteOn(&call_tmp3);
  if (isdirect) {
    chpl_macro_tmp_815.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_815.addr = T2;
    T3 = chpl_macro_tmp_815;
    on_fn10(T, rvfDerefTmp, T3);
  } else {
    _args_foron_fn = ((_class_localson_fn10)(&chpl_macro_tmp_816));
    (_args_foron_fn)->_0_rvfDerefTmp = call_tmp3;
    T4 = call_tmp2;
    (_args_foron_fn)->_1_tmp = T4;
    (_args_foron_fn)->_2_rvfDerefTmp = rvfDerefTmp;
    T5 = &ret;
    chpl_macro_tmp_817.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_817.addr = T5;
    T6 = chpl_macro_tmp_817;
    (_args_foron_fn)->_3_tmp = T6;
    _args_vforon_fn = ((void*)(_args_foron_fn));
    /*** wrapon_fn10 ***/ chpl_executeOn(&call_tmp3, INT32(11), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn10_object), INT64(1175), INT32(12));
  }
  call_tmp4 = (ret <= INT64(0));
  if (call_tmp4) {
    ret2 = INT64(1);
    goto _end__if_fn72;
  } else {
    ret2 = ret;
    goto _end__if_fn72;
  }
  _end__if_fn72:;
  return ret2;
}

/* ChapelLocale.chpl:662 */
void chpl_taskRunningCntInc(int64_t _ln,
                            int32_t _fn) {
  memory_order local_memory_order_relaxed;
  chpl____wide_locale call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t _autoCopy_tmp_;
  chpl____wide_locale call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int64 call_tmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp5;
  chpl____wide__ref_atomic_int64 T = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order rvfDerefTmp;
  chpl_bool isdirect;
  _class_localson_fn13 _args_foron_fn = NULL;
  chpl____wide__ref_atomic_int64 T2 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn;
  chpl____wide__ref_atomic_int64 chpl_macro_tmp_818;
  chpl__class_localson_fn13_object chpl_macro_tmp_819;
  local_memory_order_relaxed = memory_order_relaxed;
  _autoCopy_tmp_ = chpl_rt_buildLocaleID(chpl_nodeID, c_sublocid_any);
  call_tmp3 = chpl_localeID_to_locale(&_autoCopy_tmp_);
  call_tmp2 = call_tmp3;
  chpl_macro_tmp_818.locale = (&call_tmp2)->locale;
  chpl_macro_tmp_818.addr = &(((&call_tmp2)->addr)->runningTaskCounter);
  call_tmp4 = chpl_macro_tmp_818;
  call_tmp5 = (&call_tmp4)->locale;
  T = call_tmp4;
  rvfDerefTmp = local_memory_order_relaxed;
  isdirect = chpl_doDirectExecuteOn(&call_tmp5);
  if (isdirect) {
    on_fn13(T, INT64(1), rvfDerefTmp);
  } else {
    _args_foron_fn = ((_class_localson_fn13)(&chpl_macro_tmp_819));
    (_args_foron_fn)->_0_rvfDerefTmp = call_tmp5;
    T2 = call_tmp4;
    (_args_foron_fn)->_1_tmp = T2;
    (_args_foron_fn)->_2_rvfDerefTmp = INT64(1);
    (_args_foron_fn)->_3_rvfDerefTmp = rvfDerefTmp;
    _args_vforon_fn = ((void*)(_args_foron_fn));
    /*** wrapon_fn13 ***/ chpl_executeOnFast(&call_tmp5, INT32(14), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn13_object), INT64(1238), INT32(12));
  }
  return;
}

/* ChapelLocale.chpl:669 */
void chpl_taskRunningCntDec(int64_t _ln,
                            int32_t _fn) {
  memory_order local_memory_order_relaxed;
  chpl____wide_locale call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t _autoCopy_tmp_;
  chpl____wide_locale call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int64 call_tmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp5;
  chpl____wide__ref_atomic_int64 T = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order rvfDerefTmp;
  chpl_bool isdirect;
  _class_localson_fn14 _args_foron_fn = NULL;
  chpl____wide__ref_atomic_int64 T2 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn;
  chpl____wide__ref_atomic_int64 chpl_macro_tmp_820;
  chpl__class_localson_fn14_object chpl_macro_tmp_821;
  local_memory_order_relaxed = memory_order_relaxed;
  _autoCopy_tmp_ = chpl_rt_buildLocaleID(chpl_nodeID, c_sublocid_any);
  call_tmp3 = chpl_localeID_to_locale(&_autoCopy_tmp_);
  call_tmp2 = call_tmp3;
  chpl_macro_tmp_820.locale = (&call_tmp2)->locale;
  chpl_macro_tmp_820.addr = &(((&call_tmp2)->addr)->runningTaskCounter);
  call_tmp4 = chpl_macro_tmp_820;
  call_tmp5 = (&call_tmp4)->locale;
  T = call_tmp4;
  rvfDerefTmp = local_memory_order_relaxed;
  isdirect = chpl_doDirectExecuteOn(&call_tmp5);
  if (isdirect) {
    on_fn14(T, INT64(1), rvfDerefTmp);
  } else {
    _args_foron_fn = ((_class_localson_fn14)(&chpl_macro_tmp_821));
    (_args_foron_fn)->_0_rvfDerefTmp = call_tmp5;
    T2 = call_tmp4;
    (_args_foron_fn)->_1_tmp = T2;
    (_args_foron_fn)->_2_rvfDerefTmp = INT64(1);
    (_args_foron_fn)->_3_rvfDerefTmp = rvfDerefTmp;
    _args_vforon_fn = ((void*)(_args_foron_fn));
    /*** wrapon_fn14 ***/ chpl_executeOnFast(&call_tmp5, INT32(15), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn14_object), INT64(1258), INT32(12));
  }
  return;
}

/* ChapelLocale.chpl:680 */
static void deinit40(void) {
  chpl____wide_locale T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp2;
  chpl____wide_locale rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect;
  _class_localson_fn110 _args_foron_fn = NULL;
  c_void_ptr _args_vforon_fn;
  chpl____wide__ref__wide_locale chpl_macro_tmp_822;
  chpl____wide__ref_int32_t chpl_macro_tmp_823;
  int32_t chpl_macro_tmp_824;
  chpl__class_localson_fn110_object chpl_macro_tmp_825;
  chpl_macro_tmp_822.locale = (&origRootLocale)->locale;
  chpl_macro_tmp_822.addr = &(((&origRootLocale)->addr)->value);
  chpl_gen_comm_get(((void*)(&T)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_822).locale), INT64(0), INT32(0)), (chpl_macro_tmp_822).addr, sizeof(chpl____wide_locale), -1, COMMID(26), INT64(386), INT64(25));
  chpl_macro_tmp_823.locale = (&T)->locale;
  chpl_macro_tmp_823.addr = &(((object)((&T)->addr))->chpl__cid);
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_824)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_823).locale), INT64(0), INT32(0)), (chpl_macro_tmp_823).addr, sizeof(int32_t), -1, COMMID(27), INT64(681), INT64(25));
  ((void(*)(chpl____wide_locale))chpl_vmtable[((INT64(9) * chpl_macro_tmp_824) + INT64(0))])(T);
  call_tmp2 = (&T)->locale;
  rvfDerefTmp = T;
  isdirect = chpl_doDirectExecuteOn(&call_tmp2);
  if (isdirect) {
    on_fn108(rvfDerefTmp);
  } else {
    _args_foron_fn = ((_class_localson_fn110)(&chpl_macro_tmp_825));
    (_args_foron_fn)->_0_rvfDerefTmp = call_tmp2;
    (_args_foron_fn)->_1_rvfDerefTmp = rvfDerefTmp;
    _args_vforon_fn = ((void*)(_args_foron_fn));
    /*** wrapon_fn145 ***/ chpl_executeOn(&call_tmp2, INT32(210), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn110_object), INT64(1227), INT32(2));
  }
  return;
}

