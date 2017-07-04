/* ChapelBase.chpl:23 */
static void chpl__init_ChapelBase(int64_t _ln,
                                  int32_t _fn) {
  _ref_int32_t refIndentLevel = NULL;
  chpl___EndCount_atomic_int64_int64_t this12 = NULL;
  c_void_ptr cast_tmp;
  atomic_int64 _init_class_tmp_;
  atomic_int64 this13;
  atomic_int_least64_t ret;
  atomic_int_least64_t type_tmp;
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
  atomic_int64 ret_tmp;
  _ref_atomic_int64 ret_to_arg_ref_tmp_ = NULL;
  c_void_ptr call_tmp2;
  chpl___EndCount_atomic_int64_int64_t this14 = NULL;
  c_void_ptr cast_tmp2;
  atomic_int64 _init_class_tmp_2;
  atomic_int64 this15;
  atomic_int_least64_t ret2;
  atomic_int_least64_t type_tmp2;
  _ref_atomic_int_least64_t _ref_tmp_2 = NULL;
  atomic_int64 ret_tmp2;
  _ref_atomic_int64 ret_to_arg_ref_tmp_2 = NULL;
  c_void_ptr call_tmp3;
  chpl_ModuleDeinit call_tmp4 = NULL;
  chpl____wide_chpl_ModuleDeinit T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_ArrayInit chpl_macro_tmp_17;
  ArrayInit chpl_macro_tmp_18;
  chpl____wide_chpl_ModuleDeinit chpl_macro_tmp_19;
  chpl____wide__ref__wide_chpl_ModuleDeinit chpl_macro_tmp_20;
  if (chpl__init_ChapelBase_p) {
    goto _exit_chpl__init_ChapelBase;
  }
  printModuleInit("%*s\n", "ChapelBase", INT64(10));
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_ChapelBase_p = UINT8(true);
  {
    chpl__init_ChapelStringLiterals(INT64(23), INT32(2));
  }
  chpl_macro_tmp_17.locale = (&chpl_arrayInitMethod)->locale;
  chpl_macro_tmp_17.addr = &(((&chpl_arrayInitMethod)->addr)->value);
  chpl_macro_tmp_18 = ArrayInit_heuristicInit;
  chpl_gen_comm_put(((void*)(&chpl_macro_tmp_18)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_17).locale), INT64(0), INT32(0)), (chpl_macro_tmp_17).addr, sizeof(ArrayInit), -1, COMMID(0), INT64(651), INT64(2));
  cast_tmp = chpl_here_alloc(sizeof(chpl_chpl___EndCount_atomic_int64_int64_t_object), INT16(2));
  this12 = ((chpl___EndCount_atomic_int64_int64_t)(cast_tmp));
  ((object)(this12))->chpl__cid = chpl__cid_chpl___EndCount_atomic_int64_int64_t;
  (this12)->i = _init_class_tmp_;
  (this12)->taskCnt = INT64(0);
  (this12)->taskList = NULL;
  ret = type_tmp;
  _ref_tmp_ = &ret;
  atomic_init_int_least64_t(_ref_tmp_, INT64(0));
  (&this13)->_v = ret;
  ret_to_arg_ref_tmp_ = &ret_tmp;
  _construct_atomic_int64(ret, &this13, ret_to_arg_ref_tmp_);
  (this12)->i = ret_tmp;
  (this12)->taskCnt = INT64(0);
  call_tmp2 = ((c_void_ptr)(nil));
  (this12)->taskList = call_tmp2;
  _construct__EndCount(&ret_tmp, INT64(0), call_tmp2, this12);
  cast_tmp2 = chpl_here_alloc(sizeof(chpl_chpl___EndCount_atomic_int64_int64_t_object), INT16(2));
  this14 = ((chpl___EndCount_atomic_int64_int64_t)(cast_tmp2));
  ((object)(this14))->chpl__cid = chpl__cid_chpl___EndCount_atomic_int64_int64_t;
  (this14)->i = _init_class_tmp_2;
  (this14)->taskCnt = INT64(0);
  (this14)->taskList = NULL;
  ret2 = type_tmp2;
  _ref_tmp_2 = &ret2;
  atomic_init_int_least64_t(_ref_tmp_2, INT64(0));
  (&this15)->_v = ret2;
  ret_to_arg_ref_tmp_2 = &ret_tmp2;
  _construct_atomic_int64(ret2, &this15, ret_to_arg_ref_tmp_2);
  (this14)->i = ret_tmp2;
  (this14)->taskCnt = INT64(0);
  call_tmp3 = ((c_void_ptr)(nil));
  (this14)->taskList = call_tmp3;
  _construct__EndCount(&ret_tmp2, INT64(0), call_tmp3, this14);
  call_tmp4 = ((chpl_ModuleDeinit)(nil));
  chpl_macro_tmp_19.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_19.addr = call_tmp4;
  T = chpl_macro_tmp_19;
  chpl_macro_tmp_20.locale = (&chpl_moduleDeinitFuns)->locale;
  chpl_macro_tmp_20.addr = &(((&chpl_moduleDeinitFuns)->addr)->value);
  chpl_gen_comm_put(((void*)(&T)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_20).locale), INT64(0), INT32(0)), (chpl_macro_tmp_20).addr, sizeof(chpl____wide_chpl_ModuleDeinit), -1, COMMID(1), INT64(1695), INT64(2));
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_ChapelBase:;
  return;
}

/* ChapelBase.chpl:671 */
static void init_elts9(_ddata_locale x,
                       int64_t s) {
  string local__str_literal_177;
  chpl____wide_heap_DummyLocale local_dummyLocale = {CHPL_LOCALEID_T_INIT, NULL};
  int32_t local_c_sublocid_any;
  ArrayInit initMethod;
  ArrayInit ret;
  chpl_bool call_tmp2;
  chpl_bool call_tmp3;
  chpl_localeID_t _autoCopy_tmp_;
  chpl____wide_locale call_tmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DummyLocale T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp7;
  chpl_bool call_tmp8;
  chpl_bool call_tmp9;
  int64_t _ic__F1_high;
  int64_t i;
  locale call_tmp10 = NULL;
  chpl____wide_locale T2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp11;
  range_int64_t_bounded_F ret_tmp;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
  range_int64_t_bounded_F _ic__F0_this;
  _ddata_locale _ic__F1_x1__e1_args = NULL;
  int64_t len;
  int64_t call_tmp12;
  _ref_range_int64_t_bounded_F this12 = NULL;
  chpl____wide__ref_range_int64_t_bounded_F T3 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t numChunks;
  int64_t ret2;
  chpl_bool call_tmp13;
  int64_t call_tmp14;
  chpl_bool call_tmp15;
  range_int64_t_bounded_F _ic__F0_this2;
  int64_t i2;
  int64_t end;
  _ddata_locale x2 = NULL;
  locale call_tmp16 = NULL;
  chpl____wide_locale T4 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F tmpIter;
  range_int64_t_boundedLow_F ret_tmp2;
  _ref_range_int64_t_boundedLow_F ret_to_arg_ref_tmp_2 = NULL;
  range_int64_t_bounded_F ret_tmp3;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_3 = NULL;
  chpl___EndCount_atomic_int64_int64_t _coforallCount = NULL;
  chpl___EndCount_atomic_int64_int64_t this13 = NULL;
  c_void_ptr cast_tmp;
  atomic_int64 _init_class_tmp_;
  atomic_int64 this14;
  atomic_int_least64_t ret3;
  atomic_int_least64_t type_tmp;
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
  atomic_int64 ret_tmp4;
  _ref_atomic_int64 ret_to_arg_ref_tmp_4 = NULL;
  c_void_ptr call_tmp17;
  chpl___EndCount_atomic_int64_int64_t wrap_call_tmp = NULL;
  int64_t numTasks;
  _ref_range_int64_t_bounded_F _ref_tmp_2 = NULL;
  int64_t call_tmp18;
  chpl____wide__ref_range_int64_t_bounded_F T5 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F _ic__F0_this3;
  int64_t i3;
  int64_t end2;
  _ref_range_int64_t_bounded_F this15 = NULL;
  _class_localscoforall_fn17 _args_forcoforall_fn = NULL;
  _ref_range_int64_t_bounded_F T6 = NULL;
  c_void_ptr _args_vforcoforall_fn;
  int64_t _taskListNodecoforall_fn;
  _ref_atomic_int64 _field_destructor_tmp_ = NULL;
  _ref_atomic_int_least64_t call_tmp19 = NULL;
  chpl_localeID_t call_tmp20;
  chpl___EndCount_atomic_int64_int64_t rvfDerefTmp = NULL;
  chpl_bool isdirect;
  chpl____wide__EndCount_atomic_int64_int64_t T7 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn104 _args_foron_fn = NULL;
  chpl____wide__EndCount_atomic_int64_int64_t T8 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn;
  chpl____wide_object chpl_macro_tmp_21;
  chpl____wide__ref__wide_DummyLocale chpl_macro_tmp_22;
  chpl____wide_object chpl_macro_tmp_23;
  chpl____wide_locale chpl_macro_tmp_24;
  chpl____wide__ref_range_int64_t_bounded_F chpl_macro_tmp_25;
  chpl____wide_locale chpl_macro_tmp_26;
  chpl____wide__ref_range_int64_t_bounded_F chpl_macro_tmp_27;
  chpl__class_localscoforall_fn17_object chpl_macro_tmp_28;
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_29;
  chpl__class_localson_fn104_object chpl_macro_tmp_30;
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_31;
  local__str_literal_177 /* "ArrayInit.heuristicInit should have been made concrete" */ = _str_literal_177 /* "ArrayInit.heuristicInit should have been made concrete" */;
  local_dummyLocale = dummyLocale;
  local_c_sublocid_any = c_sublocid_any;
  ret = ArrayInit_heuristicInit;
  initMethod = ret;
  call_tmp2 = (((int64_t)(ret)) == ((int64_t)(ArrayInit_heuristicInit)));
  if (call_tmp2) {
    initMethod = ArrayInit_serialInit;
  }
  call_tmp3 = (((int64_t)(initMethod)) == ((int64_t)(ArrayInit_parallelInit)));
  if (call_tmp3) {
    _autoCopy_tmp_ = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any);
    call_tmp4 = chpl_localeID_to_locale(&_autoCopy_tmp_);
    chpl_macro_tmp_21.locale = (&call_tmp4)->locale;
    chpl_macro_tmp_21.addr = ((object)((&call_tmp4)->addr));
    call_tmp5 = chpl_macro_tmp_21;
    chpl_macro_tmp_22.locale = (&local_dummyLocale)->locale;
    chpl_macro_tmp_22.addr = &(((&local_dummyLocale)->addr)->value);
    chpl_gen_comm_get(((void*)(&T)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_22).locale), INT64(0), INT32(0)), (chpl_macro_tmp_22).addr, sizeof(chpl____wide_DummyLocale), -1, COMMID(0), INT64(563), INT64(25));
    chpl_macro_tmp_23.locale = (&T)->locale;
    chpl_macro_tmp_23.addr = ((object)((&T)->addr));
    call_tmp6 = chpl_macro_tmp_23;
    call_tmp7 = (! (((&call_tmp5)->addr != (&call_tmp6)->addr) || ((!(! (&call_tmp5)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp5)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&call_tmp6)->locale), INT64(0), INT32(0))))));
    if (call_tmp7) {
      initMethod = ArrayInit_serialInit;
    }
  }
  call_tmp8 = (((int64_t)(initMethod)) == ((int64_t)(ArrayInit_noInit)));
  if (call_tmp8) {
    goto _end_init_elts;
  } else {
    call_tmp9 = (((int64_t)(initMethod)) == ((int64_t)(ArrayInit_serialInit)));
    if (call_tmp9) {
      _ic__F1_high = ((int64_t)((s - INT64(1))));
      for (i = INT64(0); ((i <= _ic__F1_high)); i += INT64(1)) {
        call_tmp10 = ((locale)(nil));
        chpl_macro_tmp_24.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_24.addr = call_tmp10;
        T2 = chpl_macro_tmp_24;
        *(x + i) = T2;
      }
    } else {
      call_tmp11 = (((int64_t)(initMethod)) == ((int64_t)(ArrayInit_parallelInit)));
      if (call_tmp11) {
        ret_to_arg_ref_tmp_ = &ret_tmp;
        chpl_build_bounded_range(INT64(0), ((int64_t)((s - INT64(1)))), ret_to_arg_ref_tmp_);
        _ic__F0_this = ret_tmp;
        _ic__F1_x1__e1_args = x;
        this12 = &_ic__F0_this;
        chpl_macro_tmp_25.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_25.addr = this12;
        T3 = chpl_macro_tmp_25;
        call_tmp12 = length2(T3);
        len = call_tmp12;
        call_tmp13 = chpl_task_getSerial();
        if (call_tmp13) {
          ret2 = INT64(1);
          goto _end__if_fn50;
        } else {
          call_tmp14 = _computeNumChunks_chpl3(call_tmp12);
          ret2 = call_tmp14;
          goto _end__if_fn50;
        }
        _end__if_fn50:;
        numChunks = ret2;
        call_tmp15 = (ret2 <= INT64(1));
        if (call_tmp15) {
          _ic__F0_this2 = _ic__F0_this;
          end = (&_ic__F0_this2)->_high;
          x2 = _ic__F1_x1__e1_args;
          for (i2 = (&_ic__F0_this2)->_low; ((i2 <= end)); i2 += INT64(1)) {
            call_tmp16 = ((locale)(nil));
            chpl_macro_tmp_26.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_26.addr = call_tmp16;
            T4 = chpl_macro_tmp_26;
            *(x2 + i2) = T4;
          }
        } else {
          ret_to_arg_ref_tmp_2 = &ret_tmp2;
          chpl_build_low_bounded_range(INT64(0), ret_to_arg_ref_tmp_2);
          ret_to_arg_ref_tmp_3 = &ret_tmp3;
          chpl___POUND_(&ret_tmp2, ret2, ret_to_arg_ref_tmp_3);
          tmpIter = ret_tmp3;
          cast_tmp = chpl_here_alloc(sizeof(chpl_chpl___EndCount_atomic_int64_int64_t_object), INT16(2));
          this13 = ((chpl___EndCount_atomic_int64_int64_t)(cast_tmp));
          ((object)(this13))->chpl__cid = chpl__cid_chpl___EndCount_atomic_int64_int64_t;
          (this13)->i = _init_class_tmp_;
          (this13)->taskCnt = INT64(0);
          (this13)->taskList = NULL;
          ret3 = type_tmp;
          _ref_tmp_ = &ret3;
          atomic_init_int_least64_t(_ref_tmp_, INT64(0));
          (&this14)->_v = ret3;
          ret_to_arg_ref_tmp_4 = &ret_tmp4;
          _construct_atomic_int64(ret3, &this14, ret_to_arg_ref_tmp_4);
          (this13)->i = ret_tmp4;
          (this13)->taskCnt = INT64(0);
          call_tmp17 = ((c_void_ptr)(nil));
          (this13)->taskList = call_tmp17;
          wrap_call_tmp = _construct__EndCount(&ret_tmp4, INT64(0), call_tmp17, this13);
          _coforallCount = wrap_call_tmp;
          _ref_tmp_2 = &tmpIter;
          chpl_macro_tmp_27.locale = chpl_gen_getLocaleID();
          chpl_macro_tmp_27.addr = _ref_tmp_2;
          T5 = chpl_macro_tmp_27;
          call_tmp18 = length2(T5);
          numTasks = call_tmp18;
          _upEndCount3(_coforallCount, call_tmp18);
          _ic__F0_this3 = tmpIter;
          end2 = (&_ic__F0_this3)->_high;
          for (i3 = (&_ic__F0_this3)->_low; ((i3 <= end2)); i3 += INT64(1)) {
            this15 = &_ic__F0_this;
            _args_forcoforall_fn = ((_class_localscoforall_fn17)(&chpl_macro_tmp_28));
            (_args_forcoforall_fn)->_0_x1__e1_args = _ic__F1_x1__e1_args;
            T6 = this15;
            (_args_forcoforall_fn)->_1_tmp = T6;
            (_args_forcoforall_fn)->_2_len = len;
            (_args_forcoforall_fn)->_3_numChunks = numChunks;
            (_args_forcoforall_fn)->_4__yieldedIndex = i3;
            (_args_forcoforall_fn)->_5__coforallCount = _coforallCount;
            _args_vforcoforall_fn = ((void*)(_args_forcoforall_fn));
            _taskListNodecoforall_fn = chpl_nodeID;
            /*** wrapcoforall_fn17 ***/ chpl_taskListAddCoStmt(INT32(-2), INT64(146), ((chpl_task_bundle_p)(_args_vforcoforall_fn)), sizeof(chpl__class_localscoforall_fn17_object), &((_coforallCount)->taskList), _taskListNodecoforall_fn, INT64(740), INT32(2));
          }
          _waitEndCount3(_coforallCount, numTasks);
          _field_destructor_tmp_ = &((_coforallCount)->i);
          call_tmp19 = &((_field_destructor_tmp_)->_v);
          atomic_destroy_int_least64_t(call_tmp19);
          call_tmp20 = chpl_gen_getLocaleID();
          rvfDerefTmp = _coforallCount;
          isdirect = chpl_doDirectExecuteOn(&call_tmp20);
          if (isdirect) {
            chpl_macro_tmp_29.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_29.addr = rvfDerefTmp;
            T7 = chpl_macro_tmp_29;
            on_fn123(T7);
          } else {
            _args_foron_fn = ((_class_localson_fn104)(&chpl_macro_tmp_30));
            (_args_foron_fn)->_0_rvfDerefTmp = call_tmp20;
            chpl_macro_tmp_31.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_31.addr = rvfDerefTmp;
            T8 = chpl_macro_tmp_31;
            (_args_foron_fn)->_1_rvfDerefTmp = T8;
            _args_vforon_fn = ((void*)(_args_foron_fn));
            /*** wrapon_fn131 ***/ chpl_executeOn(&call_tmp20, INT32(196), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn104_object), INT64(1227), INT32(2));
          }
        }
      } else {
        halt(&local__str_literal_177 /* "ArrayInit.heuristicInit should have been made concrete" */, INT64(746), INT32(2));
      }
    }
  }
  _end_init_elts:;
  return;
}

/* ChapelBase.chpl:671 */
static void init_elts10(_ddata_LocReplicatedArr_FCHGlobalNode_1_int64_t_F x,
                        int64_t s) {
  string local__str_literal_177;
  chpl____wide_heap_DummyLocale local_dummyLocale = {CHPL_LOCALEID_T_INIT, NULL};
  int32_t local_c_sublocid_any;
  ArrayInit initMethod;
  ArrayInit ret;
  chpl_bool call_tmp2;
  chpl_bool call_tmp3;
  chpl_localeID_t _autoCopy_tmp_;
  chpl____wide_locale call_tmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DummyLocale T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp7;
  chpl_bool call_tmp8;
  chpl_bool call_tmp9;
  int64_t _ic__F1_high;
  int64_t i;
  LocReplicatedArr_FCHGlobalNode_1_int64_t_F_chpl call_tmp10 = NULL;
  chpl____wide_LocReplicatedArr_FCHGlobalNode_1_int64_t_F T2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp11;
  range_int64_t_bounded_F ret_tmp;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
  range_int64_t_bounded_F _ic__F0_this;
  _ddata_LocReplicatedArr_FCHGlobalNode_1_int64_t_F _ic__F1_x1__e1_args = NULL;
  int64_t len;
  int64_t call_tmp12;
  _ref_range_int64_t_bounded_F this12 = NULL;
  chpl____wide__ref_range_int64_t_bounded_F T3 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t numChunks;
  int64_t ret2;
  chpl_bool call_tmp13;
  int64_t call_tmp14;
  chpl_bool call_tmp15;
  range_int64_t_bounded_F _ic__F0_this2;
  int64_t i2;
  int64_t end;
  _ddata_LocReplicatedArr_FCHGlobalNode_1_int64_t_F x2 = NULL;
  LocReplicatedArr_FCHGlobalNode_1_int64_t_F_chpl call_tmp16 = NULL;
  chpl____wide_LocReplicatedArr_FCHGlobalNode_1_int64_t_F T4 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F tmpIter;
  range_int64_t_boundedLow_F ret_tmp2;
  _ref_range_int64_t_boundedLow_F ret_to_arg_ref_tmp_2 = NULL;
  range_int64_t_bounded_F ret_tmp3;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_3 = NULL;
  chpl___EndCount_atomic_int64_int64_t _coforallCount = NULL;
  chpl___EndCount_atomic_int64_int64_t this13 = NULL;
  c_void_ptr cast_tmp;
  atomic_int64 _init_class_tmp_;
  atomic_int64 this14;
  atomic_int_least64_t ret3;
  atomic_int_least64_t type_tmp;
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
  atomic_int64 ret_tmp4;
  _ref_atomic_int64 ret_to_arg_ref_tmp_4 = NULL;
  c_void_ptr call_tmp17;
  chpl___EndCount_atomic_int64_int64_t wrap_call_tmp = NULL;
  int64_t numTasks;
  _ref_range_int64_t_bounded_F _ref_tmp_2 = NULL;
  int64_t call_tmp18;
  chpl____wide__ref_range_int64_t_bounded_F T5 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F _ic__F0_this3;
  int64_t i3;
  int64_t end2;
  _ref_range_int64_t_bounded_F this15 = NULL;
  _class_localscoforall_fn27 _args_forcoforall_fn = NULL;
  _ref_range_int64_t_bounded_F T6 = NULL;
  c_void_ptr _args_vforcoforall_fn;
  int64_t _taskListNodecoforall_fn;
  _ref_atomic_int64 _field_destructor_tmp_ = NULL;
  _ref_atomic_int_least64_t call_tmp19 = NULL;
  chpl_localeID_t call_tmp20;
  chpl___EndCount_atomic_int64_int64_t rvfDerefTmp = NULL;
  chpl_bool isdirect;
  chpl____wide__EndCount_atomic_int64_int64_t T7 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn104 _args_foron_fn = NULL;
  chpl____wide__EndCount_atomic_int64_int64_t T8 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn;
  chpl____wide_object chpl_macro_tmp_32;
  chpl____wide__ref__wide_DummyLocale chpl_macro_tmp_33;
  chpl____wide_object chpl_macro_tmp_34;
  chpl____wide_LocReplicatedArr_FCHGlobalNode_1_int64_t_F chpl_macro_tmp_35;
  chpl____wide__ref_range_int64_t_bounded_F chpl_macro_tmp_36;
  chpl____wide_LocReplicatedArr_FCHGlobalNode_1_int64_t_F chpl_macro_tmp_37;
  chpl____wide__ref_range_int64_t_bounded_F chpl_macro_tmp_38;
  chpl__class_localscoforall_fn27_object chpl_macro_tmp_39;
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_40;
  chpl__class_localson_fn104_object chpl_macro_tmp_41;
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_42;
  local__str_literal_177 /* "ArrayInit.heuristicInit should have been made concrete" */ = _str_literal_177 /* "ArrayInit.heuristicInit should have been made concrete" */;
  local_dummyLocale = dummyLocale;
  local_c_sublocid_any = c_sublocid_any;
  ret = ArrayInit_heuristicInit;
  initMethod = ret;
  call_tmp2 = (((int64_t)(ret)) == ((int64_t)(ArrayInit_heuristicInit)));
  if (call_tmp2) {
    initMethod = ArrayInit_serialInit;
  }
  call_tmp3 = (((int64_t)(initMethod)) == ((int64_t)(ArrayInit_parallelInit)));
  if (call_tmp3) {
    _autoCopy_tmp_ = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any);
    call_tmp4 = chpl_localeID_to_locale(&_autoCopy_tmp_);
    chpl_macro_tmp_32.locale = (&call_tmp4)->locale;
    chpl_macro_tmp_32.addr = ((object)((&call_tmp4)->addr));
    call_tmp5 = chpl_macro_tmp_32;
    chpl_macro_tmp_33.locale = (&local_dummyLocale)->locale;
    chpl_macro_tmp_33.addr = &(((&local_dummyLocale)->addr)->value);
    chpl_gen_comm_get(((void*)(&T)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_33).locale), INT64(0), INT32(0)), (chpl_macro_tmp_33).addr, sizeof(chpl____wide_DummyLocale), -1, COMMID(1), INT64(563), INT64(25));
    chpl_macro_tmp_34.locale = (&T)->locale;
    chpl_macro_tmp_34.addr = ((object)((&T)->addr));
    call_tmp6 = chpl_macro_tmp_34;
    call_tmp7 = (! (((&call_tmp5)->addr != (&call_tmp6)->addr) || ((!(! (&call_tmp5)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp5)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&call_tmp6)->locale), INT64(0), INT32(0))))));
    if (call_tmp7) {
      initMethod = ArrayInit_serialInit;
    }
  }
  call_tmp8 = (((int64_t)(initMethod)) == ((int64_t)(ArrayInit_noInit)));
  if (call_tmp8) {
    goto _end_init_elts;
  } else {
    call_tmp9 = (((int64_t)(initMethod)) == ((int64_t)(ArrayInit_serialInit)));
    if (call_tmp9) {
      _ic__F1_high = ((int64_t)((s - INT64(1))));
      for (i = INT64(0); ((i <= _ic__F1_high)); i += INT64(1)) {
        call_tmp10 = ((LocReplicatedArr_FCHGlobalNode_1_int64_t_F_chpl)(nil));
        chpl_macro_tmp_35.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_35.addr = call_tmp10;
        T2 = chpl_macro_tmp_35;
        *(x + i) = T2;
      }
    } else {
      call_tmp11 = (((int64_t)(initMethod)) == ((int64_t)(ArrayInit_parallelInit)));
      if (call_tmp11) {
        ret_to_arg_ref_tmp_ = &ret_tmp;
        chpl_build_bounded_range(INT64(0), ((int64_t)((s - INT64(1)))), ret_to_arg_ref_tmp_);
        _ic__F0_this = ret_tmp;
        _ic__F1_x1__e1_args = x;
        this12 = &_ic__F0_this;
        chpl_macro_tmp_36.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_36.addr = this12;
        T3 = chpl_macro_tmp_36;
        call_tmp12 = length2(T3);
        len = call_tmp12;
        call_tmp13 = chpl_task_getSerial();
        if (call_tmp13) {
          ret2 = INT64(1);
          goto _end__if_fn50;
        } else {
          call_tmp14 = _computeNumChunks_chpl3(call_tmp12);
          ret2 = call_tmp14;
          goto _end__if_fn50;
        }
        _end__if_fn50:;
        numChunks = ret2;
        call_tmp15 = (ret2 <= INT64(1));
        if (call_tmp15) {
          _ic__F0_this2 = _ic__F0_this;
          end = (&_ic__F0_this2)->_high;
          x2 = _ic__F1_x1__e1_args;
          for (i2 = (&_ic__F0_this2)->_low; ((i2 <= end)); i2 += INT64(1)) {
            call_tmp16 = ((LocReplicatedArr_FCHGlobalNode_1_int64_t_F_chpl)(nil));
            chpl_macro_tmp_37.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_37.addr = call_tmp16;
            T4 = chpl_macro_tmp_37;
            *(x2 + i2) = T4;
          }
        } else {
          ret_to_arg_ref_tmp_2 = &ret_tmp2;
          chpl_build_low_bounded_range(INT64(0), ret_to_arg_ref_tmp_2);
          ret_to_arg_ref_tmp_3 = &ret_tmp3;
          chpl___POUND_(&ret_tmp2, ret2, ret_to_arg_ref_tmp_3);
          tmpIter = ret_tmp3;
          cast_tmp = chpl_here_alloc(sizeof(chpl_chpl___EndCount_atomic_int64_int64_t_object), INT16(2));
          this13 = ((chpl___EndCount_atomic_int64_int64_t)(cast_tmp));
          ((object)(this13))->chpl__cid = chpl__cid_chpl___EndCount_atomic_int64_int64_t;
          (this13)->i = _init_class_tmp_;
          (this13)->taskCnt = INT64(0);
          (this13)->taskList = NULL;
          ret3 = type_tmp;
          _ref_tmp_ = &ret3;
          atomic_init_int_least64_t(_ref_tmp_, INT64(0));
          (&this14)->_v = ret3;
          ret_to_arg_ref_tmp_4 = &ret_tmp4;
          _construct_atomic_int64(ret3, &this14, ret_to_arg_ref_tmp_4);
          (this13)->i = ret_tmp4;
          (this13)->taskCnt = INT64(0);
          call_tmp17 = ((c_void_ptr)(nil));
          (this13)->taskList = call_tmp17;
          wrap_call_tmp = _construct__EndCount(&ret_tmp4, INT64(0), call_tmp17, this13);
          _coforallCount = wrap_call_tmp;
          _ref_tmp_2 = &tmpIter;
          chpl_macro_tmp_38.locale = chpl_gen_getLocaleID();
          chpl_macro_tmp_38.addr = _ref_tmp_2;
          T5 = chpl_macro_tmp_38;
          call_tmp18 = length2(T5);
          numTasks = call_tmp18;
          _upEndCount3(_coforallCount, call_tmp18);
          _ic__F0_this3 = tmpIter;
          end2 = (&_ic__F0_this3)->_high;
          for (i3 = (&_ic__F0_this3)->_low; ((i3 <= end2)); i3 += INT64(1)) {
            this15 = &_ic__F0_this;
            _args_forcoforall_fn = ((_class_localscoforall_fn27)(&chpl_macro_tmp_39));
            (_args_forcoforall_fn)->_0_x1__e1_args = _ic__F1_x1__e1_args;
            (_args_forcoforall_fn)->_1_numChunks = numChunks;
            (_args_forcoforall_fn)->_2__yieldedIndex = i3;
            (_args_forcoforall_fn)->_3__coforallCount = _coforallCount;
            T6 = this15;
            (_args_forcoforall_fn)->_4_tmp = T6;
            (_args_forcoforall_fn)->_5_len = len;
            _args_vforcoforall_fn = ((void*)(_args_forcoforall_fn));
            _taskListNodecoforall_fn = chpl_nodeID;
            /*** wrapcoforall_fn31 ***/ chpl_taskListAddCoStmt(INT32(-2), INT64(160), ((chpl_task_bundle_p)(_args_vforcoforall_fn)), sizeof(chpl__class_localscoforall_fn27_object), &((_coforallCount)->taskList), _taskListNodecoforall_fn, INT64(740), INT32(2));
          }
          _waitEndCount3(_coforallCount, numTasks);
          _field_destructor_tmp_ = &((_coforallCount)->i);
          call_tmp19 = &((_field_destructor_tmp_)->_v);
          atomic_destroy_int_least64_t(call_tmp19);
          call_tmp20 = chpl_gen_getLocaleID();
          rvfDerefTmp = _coforallCount;
          isdirect = chpl_doDirectExecuteOn(&call_tmp20);
          if (isdirect) {
            chpl_macro_tmp_40.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_40.addr = rvfDerefTmp;
            T7 = chpl_macro_tmp_40;
            on_fn123(T7);
          } else {
            _args_foron_fn = ((_class_localson_fn104)(&chpl_macro_tmp_41));
            (_args_foron_fn)->_0_rvfDerefTmp = call_tmp20;
            chpl_macro_tmp_42.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_42.addr = rvfDerefTmp;
            T8 = chpl_macro_tmp_42;
            (_args_foron_fn)->_1_rvfDerefTmp = T8;
            _args_vforon_fn = ((void*)(_args_foron_fn));
            /*** wrapon_fn131 ***/ chpl_executeOn(&call_tmp20, INT32(196), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn104_object), INT64(1227), INT32(2));
          }
        }
      } else {
        halt(&local__str_literal_177 /* "ArrayInit.heuristicInit should have been made concrete" */, INT64(746), INT32(2));
      }
    }
  }
  _end_init_elts:;
  return;
}

/* ChapelBase.chpl:671 */
static void init_elts17(_ddata_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F x,
                        int64_t s) {
  string local__str_literal_177;
  chpl____wide_heap_DummyLocale local_dummyLocale = {CHPL_LOCALEID_T_INIT, NULL};
  int32_t local_c_sublocid_any;
  ArrayInit initMethod;
  ArrayInit ret;
  chpl_bool call_tmp2;
  chpl_bool call_tmp3;
  chpl_localeID_t _autoCopy_tmp_;
  chpl____wide_locale call_tmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DummyLocale T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp7;
  chpl_bool call_tmp8;
  chpl_bool call_tmp9;
  int64_t _ic__F1_high;
  int64_t i;
  LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_chpl call_tmp10 = NULL;
  chpl____wide_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F T2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp11;
  range_int64_t_bounded_F ret_tmp;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
  range_int64_t_bounded_F _ic__F0_this;
  _ddata_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F _ic__F1_x1__e1_args = NULL;
  int64_t len;
  int64_t call_tmp12;
  _ref_range_int64_t_bounded_F this12 = NULL;
  chpl____wide__ref_range_int64_t_bounded_F T3 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t numChunks;
  int64_t ret2;
  chpl_bool call_tmp13;
  int64_t call_tmp14;
  chpl_bool call_tmp15;
  range_int64_t_bounded_F _ic__F0_this2;
  int64_t i2;
  int64_t ret3;
  int64_t end;
  int64_t ret4;
  _ddata_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F x2 = NULL;
  LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_chpl call_tmp16 = NULL;
  chpl____wide_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F T4 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F tmpIter;
  range_int64_t_boundedLow_F ret_tmp2;
  _ref_range_int64_t_boundedLow_F ret_to_arg_ref_tmp_2 = NULL;
  range_int64_t_bounded_F ret_tmp3;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_3 = NULL;
  chpl___EndCount_atomic_int64_int64_t _coforallCount = NULL;
  chpl___EndCount_atomic_int64_int64_t this13 = NULL;
  c_void_ptr cast_tmp;
  atomic_int64 _init_class_tmp_;
  atomic_int64 this14;
  atomic_int_least64_t ret5;
  atomic_int_least64_t type_tmp;
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
  atomic_int64 ret_tmp4;
  _ref_atomic_int64 ret_to_arg_ref_tmp_4 = NULL;
  c_void_ptr call_tmp17;
  chpl___EndCount_atomic_int64_int64_t wrap_call_tmp = NULL;
  int64_t numTasks;
  _ref_range_int64_t_bounded_F _ref_tmp_2 = NULL;
  int64_t call_tmp18;
  chpl____wide__ref_range_int64_t_bounded_F T5 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F _ic__F0_this3;
  int64_t i3;
  int64_t ret6;
  int64_t end2;
  int64_t ret7;
  _ref_range_int64_t_bounded_F this15 = NULL;
  _class_localscoforall_fn26 _args_forcoforall_fn = NULL;
  _ref_range_int64_t_bounded_F T6 = NULL;
  c_void_ptr _args_vforcoforall_fn;
  int64_t _taskListNodecoforall_fn;
  _ref_atomic_int64 _field_destructor_tmp_ = NULL;
  _ref_atomic_int_least64_t call_tmp19 = NULL;
  chpl_localeID_t call_tmp20;
  chpl___EndCount_atomic_int64_int64_t rvfDerefTmp = NULL;
  chpl_bool isdirect;
  chpl____wide__EndCount_atomic_int64_int64_t T7 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn104 _args_foron_fn = NULL;
  chpl____wide__EndCount_atomic_int64_int64_t T8 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn;
  chpl____wide_object chpl_macro_tmp_43;
  chpl____wide__ref__wide_DummyLocale chpl_macro_tmp_44;
  chpl____wide_object chpl_macro_tmp_45;
  chpl____wide_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F chpl_macro_tmp_46;
  chpl____wide__ref_range_int64_t_bounded_F chpl_macro_tmp_47;
  chpl____wide_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F chpl_macro_tmp_48;
  chpl____wide__ref_range_int64_t_bounded_F chpl_macro_tmp_49;
  chpl__class_localscoforall_fn26_object chpl_macro_tmp_50;
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_51;
  chpl__class_localson_fn104_object chpl_macro_tmp_52;
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_53;
  local__str_literal_177 /* "ArrayInit.heuristicInit should have been made concrete" */ = _str_literal_177 /* "ArrayInit.heuristicInit should have been made concrete" */;
  local_dummyLocale = dummyLocale;
  local_c_sublocid_any = c_sublocid_any;
  ret = ArrayInit_heuristicInit;
  initMethod = ret;
  call_tmp2 = (((int64_t)(ret)) == ((int64_t)(ArrayInit_heuristicInit)));
  if (call_tmp2) {
    initMethod = ArrayInit_serialInit;
  }
  call_tmp3 = (((int64_t)(initMethod)) == ((int64_t)(ArrayInit_parallelInit)));
  if (call_tmp3) {
    _autoCopy_tmp_ = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any);
    call_tmp4 = chpl_localeID_to_locale(&_autoCopy_tmp_);
    chpl_macro_tmp_43.locale = (&call_tmp4)->locale;
    chpl_macro_tmp_43.addr = ((object)((&call_tmp4)->addr));
    call_tmp5 = chpl_macro_tmp_43;
    chpl_macro_tmp_44.locale = (&local_dummyLocale)->locale;
    chpl_macro_tmp_44.addr = &(((&local_dummyLocale)->addr)->value);
    chpl_gen_comm_get(((void*)(&T)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_44).locale), INT64(0), INT32(0)), (chpl_macro_tmp_44).addr, sizeof(chpl____wide_DummyLocale), -1, COMMID(2), INT64(563), INT64(25));
    chpl_macro_tmp_45.locale = (&T)->locale;
    chpl_macro_tmp_45.addr = ((object)((&T)->addr));
    call_tmp6 = chpl_macro_tmp_45;
    call_tmp7 = (! (((&call_tmp5)->addr != (&call_tmp6)->addr) || ((!(! (&call_tmp5)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp5)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&call_tmp6)->locale), INT64(0), INT32(0))))));
    if (call_tmp7) {
      initMethod = ArrayInit_serialInit;
    }
  }
  call_tmp8 = (((int64_t)(initMethod)) == ((int64_t)(ArrayInit_noInit)));
  if (call_tmp8) {
    goto _end_init_elts;
  } else {
    call_tmp9 = (((int64_t)(initMethod)) == ((int64_t)(ArrayInit_serialInit)));
    if (call_tmp9) {
      _ic__F1_high = ((int64_t)((s - INT64(1))));
      for (i = INT64(0); ((i <= _ic__F1_high)); i += INT64(1)) {
        call_tmp10 = ((LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_chpl)(nil));
        chpl_macro_tmp_46.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_46.addr = call_tmp10;
        T2 = chpl_macro_tmp_46;
        *(x + i) = T2;
      }
    } else {
      call_tmp11 = (((int64_t)(initMethod)) == ((int64_t)(ArrayInit_parallelInit)));
      if (call_tmp11) {
        ret_to_arg_ref_tmp_ = &ret_tmp;
        chpl_build_bounded_range(INT64(0), ((int64_t)((s - INT64(1)))), ret_to_arg_ref_tmp_);
        _ic__F0_this = ret_tmp;
        _ic__F1_x1__e1_args = x;
        this12 = &_ic__F0_this;
        chpl_macro_tmp_47.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_47.addr = this12;
        T3 = chpl_macro_tmp_47;
        call_tmp12 = length2(T3);
        len = call_tmp12;
        call_tmp13 = chpl_task_getSerial();
        if (call_tmp13) {
          ret2 = INT64(1);
          goto _end__if_fn50;
        } else {
          call_tmp14 = _computeNumChunks_chpl3(call_tmp12);
          ret2 = call_tmp14;
          goto _end__if_fn50;
        }
        _end__if_fn50:;
        numChunks = ret2;
        call_tmp15 = (ret2 <= INT64(1));
        if (call_tmp15) {
          _ic__F0_this2 = _ic__F0_this;
          ret3 = (&_ic__F0_this2)->_low;
          ret4 = (&_ic__F0_this2)->_high;
          end = ret4;
          x2 = _ic__F1_x1__e1_args;
          for (i2 = ret3; ((i2 <= end)); i2 += INT64(1)) {
            call_tmp16 = ((LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_chpl)(nil));
            chpl_macro_tmp_48.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_48.addr = call_tmp16;
            T4 = chpl_macro_tmp_48;
            *(x2 + i2) = T4;
          }
        } else {
          ret_to_arg_ref_tmp_2 = &ret_tmp2;
          chpl_build_low_bounded_range(INT64(0), ret_to_arg_ref_tmp_2);
          ret_to_arg_ref_tmp_3 = &ret_tmp3;
          chpl___POUND_(&ret_tmp2, ret2, ret_to_arg_ref_tmp_3);
          tmpIter = ret_tmp3;
          cast_tmp = chpl_here_alloc(sizeof(chpl_chpl___EndCount_atomic_int64_int64_t_object), INT16(2));
          this13 = ((chpl___EndCount_atomic_int64_int64_t)(cast_tmp));
          ((object)(this13))->chpl__cid = chpl__cid_chpl___EndCount_atomic_int64_int64_t;
          (this13)->i = _init_class_tmp_;
          (this13)->taskCnt = INT64(0);
          (this13)->taskList = NULL;
          ret5 = type_tmp;
          _ref_tmp_ = &ret5;
          atomic_init_int_least64_t(_ref_tmp_, INT64(0));
          (&this14)->_v = ret5;
          ret_to_arg_ref_tmp_4 = &ret_tmp4;
          _construct_atomic_int64(ret5, &this14, ret_to_arg_ref_tmp_4);
          (this13)->i = ret_tmp4;
          (this13)->taskCnt = INT64(0);
          call_tmp17 = ((c_void_ptr)(nil));
          (this13)->taskList = call_tmp17;
          wrap_call_tmp = _construct__EndCount(&ret_tmp4, INT64(0), call_tmp17, this13);
          _coforallCount = wrap_call_tmp;
          _ref_tmp_2 = &tmpIter;
          chpl_macro_tmp_49.locale = chpl_gen_getLocaleID();
          chpl_macro_tmp_49.addr = _ref_tmp_2;
          T5 = chpl_macro_tmp_49;
          call_tmp18 = length2(T5);
          numTasks = call_tmp18;
          _upEndCount3(_coforallCount, call_tmp18);
          _ic__F0_this3 = tmpIter;
          ret6 = (&_ic__F0_this3)->_low;
          ret7 = (&_ic__F0_this3)->_high;
          end2 = ret7;
          for (i3 = ret6; ((i3 <= end2)); i3 += INT64(1)) {
            this15 = &_ic__F0_this;
            _args_forcoforall_fn = ((_class_localscoforall_fn26)(&chpl_macro_tmp_50));
            (_args_forcoforall_fn)->_0_x1__e1_args = _ic__F1_x1__e1_args;
            (_args_forcoforall_fn)->_1_numChunks = numChunks;
            (_args_forcoforall_fn)->_2__yieldedIndex = i3;
            (_args_forcoforall_fn)->_3__coforallCount = _coforallCount;
            T6 = this15;
            (_args_forcoforall_fn)->_4_tmp = T6;
            (_args_forcoforall_fn)->_5_len = len;
            _args_vforcoforall_fn = ((void*)(_args_forcoforall_fn));
            _taskListNodecoforall_fn = chpl_nodeID;
            /*** wrapcoforall_fn15 ***/ chpl_taskListAddCoStmt(INT32(-2), INT64(144), ((chpl_task_bundle_p)(_args_vforcoforall_fn)), sizeof(chpl__class_localscoforall_fn26_object), &((_coforallCount)->taskList), _taskListNodecoforall_fn, INT64(740), INT32(2));
          }
          _waitEndCount3(_coforallCount, numTasks);
          _field_destructor_tmp_ = &((_coforallCount)->i);
          call_tmp19 = &((_field_destructor_tmp_)->_v);
          atomic_destroy_int_least64_t(call_tmp19);
          call_tmp20 = chpl_gen_getLocaleID();
          rvfDerefTmp = _coforallCount;
          isdirect = chpl_doDirectExecuteOn(&call_tmp20);
          if (isdirect) {
            chpl_macro_tmp_51.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_51.addr = rvfDerefTmp;
            T7 = chpl_macro_tmp_51;
            on_fn123(T7);
          } else {
            _args_foron_fn = ((_class_localson_fn104)(&chpl_macro_tmp_52));
            (_args_foron_fn)->_0_rvfDerefTmp = call_tmp20;
            chpl_macro_tmp_53.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_53.addr = rvfDerefTmp;
            T8 = chpl_macro_tmp_53;
            (_args_foron_fn)->_1_rvfDerefTmp = T8;
            _args_vforon_fn = ((void*)(_args_foron_fn));
            /*** wrapon_fn131 ***/ chpl_executeOn(&call_tmp20, INT32(196), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn104_object), INT64(1227), INT32(2));
          }
        }
      } else {
        halt(&local__str_literal_177 /* "ArrayInit.heuristicInit should have been made concrete" */, INT64(746), INT32(2));
      }
    }
  }
  _end_init_elts:;
  return;
}

/* ChapelBase.chpl:671 */
static void init_elts7(_ddata_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t x,
                       int64_t s) {
  string local__str_literal_177;
  chpl____wide_heap_DummyLocale local_dummyLocale = {CHPL_LOCALEID_T_INIT, NULL};
  int32_t local_c_sublocid_any;
  ArrayInit initMethod;
  ArrayInit ret;
  chpl_bool call_tmp2;
  chpl_bool call_tmp3;
  chpl_localeID_t _autoCopy_tmp_;
  chpl____wide_locale call_tmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DummyLocale T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp7;
  chpl_bool call_tmp8;
  chpl_bool call_tmp9;
  int64_t _ic__F1_high;
  int64_t i;
  LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_chpl this12;
  atomic_uint64 _init_class_tmp_;
  atomic_uint64 this13;
  atomic_uint_least64_t ret2;
  atomic_uint_least64_t type_tmp;
  _ref_atomic_uint_least64_t _ref_tmp_ = NULL;
  atomic_uint64 ret_tmp;
  _ref_atomic_uint64 ret_to_arg_ref_tmp_ = NULL;
  LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_chpl ret_tmp2;
  _ref_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t ret_to_arg_ref_tmp_2 = NULL;
  chpl_bool call_tmp10;
  range_int64_t_bounded_F ret_tmp3;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_3 = NULL;
  range_int64_t_bounded_F _ic__F0_this;
  _ddata_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t _ic__F1_x1__e1_args = NULL;
  int64_t len;
  int64_t call_tmp11;
  _ref_range_int64_t_bounded_F this14 = NULL;
  chpl____wide__ref_range_int64_t_bounded_F T2 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t numChunks;
  int64_t ret3;
  chpl_bool call_tmp12;
  int64_t call_tmp13;
  chpl_bool call_tmp14;
  range_int64_t_bounded_F _ic__F0_this2;
  int64_t i2;
  int64_t end;
  int64_t ret4;
  _ddata_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t x2 = NULL;
  LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_chpl this15;
  atomic_uint64 _init_class_tmp_2;
  atomic_uint64 this16;
  atomic_uint_least64_t ret5;
  atomic_uint_least64_t type_tmp2;
  _ref_atomic_uint_least64_t _ref_tmp_2 = NULL;
  atomic_uint64 ret_tmp4;
  _ref_atomic_uint64 ret_to_arg_ref_tmp_4 = NULL;
  LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_chpl ret_tmp5;
  _ref_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t ret_to_arg_ref_tmp_5 = NULL;
  range_int64_t_bounded_F tmpIter;
  range_int64_t_boundedLow_F ret_tmp6;
  _ref_range_int64_t_boundedLow_F ret_to_arg_ref_tmp_6 = NULL;
  range_int64_t_bounded_F ret_tmp7;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_7 = NULL;
  chpl___EndCount_atomic_int64_int64_t _coforallCount = NULL;
  chpl___EndCount_atomic_int64_int64_t this17 = NULL;
  c_void_ptr cast_tmp;
  atomic_int64 _init_class_tmp_3;
  atomic_int64 this18;
  atomic_int_least64_t ret6;
  atomic_int_least64_t type_tmp3;
  _ref_atomic_int_least64_t _ref_tmp_3 = NULL;
  atomic_int64 ret_tmp8;
  _ref_atomic_int64 ret_to_arg_ref_tmp_8 = NULL;
  c_void_ptr call_tmp15;
  chpl___EndCount_atomic_int64_int64_t wrap_call_tmp = NULL;
  int64_t numTasks;
  _ref_range_int64_t_bounded_F _ref_tmp_4 = NULL;
  int64_t call_tmp16;
  chpl____wide__ref_range_int64_t_bounded_F T3 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F _ic__F0_this3;
  int64_t i3;
  int64_t end2;
  int64_t ret7;
  _ref_range_int64_t_bounded_F this19 = NULL;
  _class_localscoforall_fn20 _args_forcoforall_fn = NULL;
  _ref_range_int64_t_bounded_F T4 = NULL;
  c_void_ptr _args_vforcoforall_fn;
  int64_t _taskListNodecoforall_fn;
  _ref_atomic_int64 _field_destructor_tmp_ = NULL;
  _ref_atomic_int_least64_t call_tmp17 = NULL;
  chpl_localeID_t call_tmp18;
  chpl___EndCount_atomic_int64_int64_t rvfDerefTmp = NULL;
  chpl_bool isdirect;
  chpl____wide__EndCount_atomic_int64_int64_t T5 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn104 _args_foron_fn = NULL;
  chpl____wide__EndCount_atomic_int64_int64_t T6 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn;
  chpl____wide_object chpl_macro_tmp_54;
  chpl____wide__ref__wide_DummyLocale chpl_macro_tmp_55;
  chpl____wide_object chpl_macro_tmp_56;
  chpl____wide__ref_range_int64_t_bounded_F chpl_macro_tmp_57;
  chpl____wide__ref_range_int64_t_bounded_F chpl_macro_tmp_58;
  chpl__class_localscoforall_fn20_object chpl_macro_tmp_59;
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_60;
  chpl__class_localson_fn104_object chpl_macro_tmp_61;
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_62;
  local__str_literal_177 /* "ArrayInit.heuristicInit should have been made concrete" */ = _str_literal_177 /* "ArrayInit.heuristicInit should have been made concrete" */;
  local_dummyLocale = dummyLocale;
  local_c_sublocid_any = c_sublocid_any;
  ret = ArrayInit_heuristicInit;
  initMethod = ret;
  call_tmp2 = (((int64_t)(ret)) == ((int64_t)(ArrayInit_heuristicInit)));
  if (call_tmp2) {
    initMethod = ArrayInit_serialInit;
  }
  call_tmp3 = (((int64_t)(initMethod)) == ((int64_t)(ArrayInit_parallelInit)));
  if (call_tmp3) {
    _autoCopy_tmp_ = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any);
    call_tmp4 = chpl_localeID_to_locale(&_autoCopy_tmp_);
    chpl_macro_tmp_54.locale = (&call_tmp4)->locale;
    chpl_macro_tmp_54.addr = ((object)((&call_tmp4)->addr));
    call_tmp5 = chpl_macro_tmp_54;
    chpl_macro_tmp_55.locale = (&local_dummyLocale)->locale;
    chpl_macro_tmp_55.addr = &(((&local_dummyLocale)->addr)->value);
    chpl_gen_comm_get(((void*)(&T)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_55).locale), INT64(0), INT32(0)), (chpl_macro_tmp_55).addr, sizeof(chpl____wide_DummyLocale), -1, COMMID(3), INT64(563), INT64(25));
    chpl_macro_tmp_56.locale = (&T)->locale;
    chpl_macro_tmp_56.addr = ((object)((&T)->addr));
    call_tmp6 = chpl_macro_tmp_56;
    call_tmp7 = (! (((&call_tmp5)->addr != (&call_tmp6)->addr) || ((!(! (&call_tmp5)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp5)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&call_tmp6)->locale), INT64(0), INT32(0))))));
    if (call_tmp7) {
      initMethod = ArrayInit_serialInit;
    }
  }
  call_tmp8 = (((int64_t)(initMethod)) == ((int64_t)(ArrayInit_noInit)));
  if (call_tmp8) {
    goto _end_init_elts;
  } else {
    call_tmp9 = (((int64_t)(initMethod)) == ((int64_t)(ArrayInit_serialInit)));
    if (call_tmp9) {
      _ic__F1_high = ((int64_t)((s - INT64(1))));
      for (i = INT64(0); ((i <= _ic__F1_high)); i += INT64(1)) {
        (&this12)->_atomicVar_chpl = _init_class_tmp_;
        ret2 = type_tmp;
        _ref_tmp_ = &ret2;
        atomic_init_uint_least64_t(_ref_tmp_, ((uint64_t)(INT64(0))));
        (&this13)->_v = ret2;
        ret_to_arg_ref_tmp_ = &ret_tmp;
        _construct_atomic_uint64(ret2, &this13, ret_to_arg_ref_tmp_);
        (&this12)->_atomicVar_chpl = ret_tmp;
        ret_to_arg_ref_tmp_2 = &ret_tmp2;
        _construct_LocalAtomicObject_chpl(&ret_tmp, &this12, ret_to_arg_ref_tmp_2);
        *(x + i) = ret_tmp2;
      }
    } else {
      call_tmp10 = (((int64_t)(initMethod)) == ((int64_t)(ArrayInit_parallelInit)));
      if (call_tmp10) {
        ret_to_arg_ref_tmp_3 = &ret_tmp3;
        chpl_build_bounded_range(INT64(0), ((int64_t)((s - INT64(1)))), ret_to_arg_ref_tmp_3);
        _ic__F0_this = ret_tmp3;
        _ic__F1_x1__e1_args = x;
        this14 = &_ic__F0_this;
        chpl_macro_tmp_57.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_57.addr = this14;
        T2 = chpl_macro_tmp_57;
        call_tmp11 = length2(T2);
        len = call_tmp11;
        call_tmp12 = chpl_task_getSerial();
        if (call_tmp12) {
          ret3 = INT64(1);
          goto _end__if_fn50;
        } else {
          call_tmp13 = _computeNumChunks_chpl3(call_tmp11);
          ret3 = call_tmp13;
          goto _end__if_fn50;
        }
        _end__if_fn50:;
        numChunks = ret3;
        call_tmp14 = (ret3 <= INT64(1));
        if (call_tmp14) {
          _ic__F0_this2 = _ic__F0_this;
          ret4 = (&_ic__F0_this2)->_high;
          end = ret4;
          for (i2 = (&_ic__F0_this2)->_low; ((i2 <= end)); i2 += INT64(1)) {
            x2 = _ic__F1_x1__e1_args;
            (&this15)->_atomicVar_chpl = _init_class_tmp_2;
            ret5 = type_tmp2;
            _ref_tmp_2 = &ret5;
            atomic_init_uint_least64_t(_ref_tmp_2, ((uint64_t)(INT64(0))));
            (&this16)->_v = ret5;
            ret_to_arg_ref_tmp_4 = &ret_tmp4;
            _construct_atomic_uint64(ret5, &this16, ret_to_arg_ref_tmp_4);
            (&this15)->_atomicVar_chpl = ret_tmp4;
            ret_to_arg_ref_tmp_5 = &ret_tmp5;
            _construct_LocalAtomicObject_chpl(&ret_tmp4, &this15, ret_to_arg_ref_tmp_5);
            *(x2 + i2) = ret_tmp5;
          }
        } else {
          ret_to_arg_ref_tmp_6 = &ret_tmp6;
          chpl_build_low_bounded_range(INT64(0), ret_to_arg_ref_tmp_6);
          ret_to_arg_ref_tmp_7 = &ret_tmp7;
          chpl___POUND_(&ret_tmp6, ret3, ret_to_arg_ref_tmp_7);
          tmpIter = ret_tmp7;
          cast_tmp = chpl_here_alloc(sizeof(chpl_chpl___EndCount_atomic_int64_int64_t_object), INT16(2));
          this17 = ((chpl___EndCount_atomic_int64_int64_t)(cast_tmp));
          ((object)(this17))->chpl__cid = chpl__cid_chpl___EndCount_atomic_int64_int64_t;
          (this17)->i = _init_class_tmp_3;
          (this17)->taskCnt = INT64(0);
          (this17)->taskList = NULL;
          ret6 = type_tmp3;
          _ref_tmp_3 = &ret6;
          atomic_init_int_least64_t(_ref_tmp_3, INT64(0));
          (&this18)->_v = ret6;
          ret_to_arg_ref_tmp_8 = &ret_tmp8;
          _construct_atomic_int64(ret6, &this18, ret_to_arg_ref_tmp_8);
          (this17)->i = ret_tmp8;
          (this17)->taskCnt = INT64(0);
          call_tmp15 = ((c_void_ptr)(nil));
          (this17)->taskList = call_tmp15;
          wrap_call_tmp = _construct__EndCount(&ret_tmp8, INT64(0), call_tmp15, this17);
          _coforallCount = wrap_call_tmp;
          _ref_tmp_4 = &tmpIter;
          chpl_macro_tmp_58.locale = chpl_gen_getLocaleID();
          chpl_macro_tmp_58.addr = _ref_tmp_4;
          T3 = chpl_macro_tmp_58;
          call_tmp16 = length2(T3);
          numTasks = call_tmp16;
          _upEndCount3(_coforallCount, call_tmp16);
          _ic__F0_this3 = tmpIter;
          ret7 = (&_ic__F0_this3)->_high;
          end2 = ret7;
          for (i3 = (&_ic__F0_this3)->_low; ((i3 <= end2)); i3 += INT64(1)) {
            this19 = &_ic__F0_this;
            _args_forcoforall_fn = ((_class_localscoforall_fn20)(&chpl_macro_tmp_59));
            (_args_forcoforall_fn)->_0_x1__e1_args = _ic__F1_x1__e1_args;
            (_args_forcoforall_fn)->_1_len = len;
            (_args_forcoforall_fn)->_2__yieldedIndex = i3;
            (_args_forcoforall_fn)->_3_numChunks = numChunks;
            T4 = this19;
            (_args_forcoforall_fn)->_4_tmp = T4;
            (_args_forcoforall_fn)->_5__coforallCount = _coforallCount;
            _args_vforcoforall_fn = ((void*)(_args_forcoforall_fn));
            _taskListNodecoforall_fn = chpl_nodeID;
            /*** wrapcoforall_fn24 ***/ chpl_taskListAddCoStmt(INT32(-2), INT64(153), ((chpl_task_bundle_p)(_args_vforcoforall_fn)), sizeof(chpl__class_localscoforall_fn20_object), &((_coforallCount)->taskList), _taskListNodecoforall_fn, INT64(740), INT32(2));
          }
          _waitEndCount3(_coforallCount, numTasks);
          _field_destructor_tmp_ = &((_coforallCount)->i);
          call_tmp17 = &((_field_destructor_tmp_)->_v);
          atomic_destroy_int_least64_t(call_tmp17);
          call_tmp18 = chpl_gen_getLocaleID();
          rvfDerefTmp = _coforallCount;
          isdirect = chpl_doDirectExecuteOn(&call_tmp18);
          if (isdirect) {
            chpl_macro_tmp_60.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_60.addr = rvfDerefTmp;
            T5 = chpl_macro_tmp_60;
            on_fn123(T5);
          } else {
            _args_foron_fn = ((_class_localson_fn104)(&chpl_macro_tmp_61));
            (_args_foron_fn)->_0_rvfDerefTmp = call_tmp18;
            chpl_macro_tmp_62.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_62.addr = rvfDerefTmp;
            T6 = chpl_macro_tmp_62;
            (_args_foron_fn)->_1_rvfDerefTmp = T6;
            _args_vforon_fn = ((void*)(_args_foron_fn));
            /*** wrapon_fn131 ***/ chpl_executeOn(&call_tmp18, INT32(196), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn104_object), INT64(1227), INT32(2));
          }
        }
      } else {
        halt(&local__str_literal_177 /* "ArrayInit.heuristicInit should have been made concrete" */, INT64(746), INT32(2));
      }
    }
  }
  _end_init_elts:;
  return;
}

/* ChapelBase.chpl:671 */
static void init_elts5(_ddata_LocReplicatedDom_1_int64_t_F x,
                       int64_t s) {
  string local__str_literal_177;
  chpl____wide_heap_DummyLocale local_dummyLocale = {CHPL_LOCALEID_T_INIT, NULL};
  int32_t local_c_sublocid_any;
  ArrayInit initMethod;
  ArrayInit ret;
  chpl_bool call_tmp2;
  chpl_bool call_tmp3;
  chpl_localeID_t _autoCopy_tmp_;
  chpl____wide_locale call_tmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DummyLocale T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp7;
  chpl_bool call_tmp8;
  chpl_bool call_tmp9;
  int64_t _ic__F1_high;
  int64_t i;
  LocReplicatedDom_1_int64_t_F_chpl call_tmp10 = NULL;
  chpl____wide_LocReplicatedDom_1_int64_t_F T2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp11;
  range_int64_t_bounded_F ret_tmp;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
  range_int64_t_bounded_F _ic__F0_this;
  _ddata_LocReplicatedDom_1_int64_t_F _ic__F1_x1__e1_args = NULL;
  int64_t len;
  int64_t call_tmp12;
  _ref_range_int64_t_bounded_F this12 = NULL;
  chpl____wide__ref_range_int64_t_bounded_F T3 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t numChunks;
  int64_t ret2;
  chpl_bool call_tmp13;
  int64_t call_tmp14;
  chpl_bool call_tmp15;
  range_int64_t_bounded_F _ic__F0_this2;
  int64_t i2;
  int64_t end;
  _ddata_LocReplicatedDom_1_int64_t_F x2 = NULL;
  LocReplicatedDom_1_int64_t_F_chpl call_tmp16 = NULL;
  chpl____wide_LocReplicatedDom_1_int64_t_F T4 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F tmpIter;
  range_int64_t_boundedLow_F ret_tmp2;
  _ref_range_int64_t_boundedLow_F ret_to_arg_ref_tmp_2 = NULL;
  range_int64_t_bounded_F ret_tmp3;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_3 = NULL;
  chpl___EndCount_atomic_int64_int64_t _coforallCount = NULL;
  chpl___EndCount_atomic_int64_int64_t this13 = NULL;
  c_void_ptr cast_tmp;
  atomic_int64 _init_class_tmp_;
  atomic_int64 this14;
  atomic_int_least64_t ret3;
  atomic_int_least64_t type_tmp;
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
  atomic_int64 ret_tmp4;
  _ref_atomic_int64 ret_to_arg_ref_tmp_4 = NULL;
  c_void_ptr call_tmp17;
  chpl___EndCount_atomic_int64_int64_t wrap_call_tmp = NULL;
  int64_t numTasks;
  _ref_range_int64_t_bounded_F _ref_tmp_2 = NULL;
  int64_t call_tmp18;
  chpl____wide__ref_range_int64_t_bounded_F T5 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F _ic__F0_this3;
  int64_t i3;
  int64_t end2;
  int64_t ret4;
  _ref_range_int64_t_bounded_F this15 = NULL;
  _class_localscoforall_fn16 _args_forcoforall_fn = NULL;
  _ref_range_int64_t_bounded_F T6 = NULL;
  c_void_ptr _args_vforcoforall_fn;
  int64_t _taskListNodecoforall_fn;
  _ref_atomic_int64 _field_destructor_tmp_ = NULL;
  _ref_atomic_int_least64_t call_tmp19 = NULL;
  chpl_localeID_t call_tmp20;
  chpl___EndCount_atomic_int64_int64_t rvfDerefTmp = NULL;
  chpl_bool isdirect;
  chpl____wide__EndCount_atomic_int64_int64_t T7 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn104 _args_foron_fn = NULL;
  chpl____wide__EndCount_atomic_int64_int64_t T8 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn;
  chpl____wide_object chpl_macro_tmp_63;
  chpl____wide__ref__wide_DummyLocale chpl_macro_tmp_64;
  chpl____wide_object chpl_macro_tmp_65;
  chpl____wide_LocReplicatedDom_1_int64_t_F chpl_macro_tmp_66;
  chpl____wide__ref_range_int64_t_bounded_F chpl_macro_tmp_67;
  chpl____wide_LocReplicatedDom_1_int64_t_F chpl_macro_tmp_68;
  chpl____wide__ref_range_int64_t_bounded_F chpl_macro_tmp_69;
  chpl__class_localscoforall_fn16_object chpl_macro_tmp_70;
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_71;
  chpl__class_localson_fn104_object chpl_macro_tmp_72;
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_73;
  local__str_literal_177 /* "ArrayInit.heuristicInit should have been made concrete" */ = _str_literal_177 /* "ArrayInit.heuristicInit should have been made concrete" */;
  local_dummyLocale = dummyLocale;
  local_c_sublocid_any = c_sublocid_any;
  ret = ArrayInit_heuristicInit;
  initMethod = ret;
  call_tmp2 = (((int64_t)(ret)) == ((int64_t)(ArrayInit_heuristicInit)));
  if (call_tmp2) {
    initMethod = ArrayInit_serialInit;
  }
  call_tmp3 = (((int64_t)(initMethod)) == ((int64_t)(ArrayInit_parallelInit)));
  if (call_tmp3) {
    _autoCopy_tmp_ = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any);
    call_tmp4 = chpl_localeID_to_locale(&_autoCopy_tmp_);
    chpl_macro_tmp_63.locale = (&call_tmp4)->locale;
    chpl_macro_tmp_63.addr = ((object)((&call_tmp4)->addr));
    call_tmp5 = chpl_macro_tmp_63;
    chpl_macro_tmp_64.locale = (&local_dummyLocale)->locale;
    chpl_macro_tmp_64.addr = &(((&local_dummyLocale)->addr)->value);
    chpl_gen_comm_get(((void*)(&T)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_64).locale), INT64(0), INT32(0)), (chpl_macro_tmp_64).addr, sizeof(chpl____wide_DummyLocale), -1, COMMID(4), INT64(563), INT64(25));
    chpl_macro_tmp_65.locale = (&T)->locale;
    chpl_macro_tmp_65.addr = ((object)((&T)->addr));
    call_tmp6 = chpl_macro_tmp_65;
    call_tmp7 = (! (((&call_tmp5)->addr != (&call_tmp6)->addr) || ((!(! (&call_tmp5)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp5)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&call_tmp6)->locale), INT64(0), INT32(0))))));
    if (call_tmp7) {
      initMethod = ArrayInit_serialInit;
    }
  }
  call_tmp8 = (((int64_t)(initMethod)) == ((int64_t)(ArrayInit_noInit)));
  if (call_tmp8) {
    goto _end_init_elts;
  } else {
    call_tmp9 = (((int64_t)(initMethod)) == ((int64_t)(ArrayInit_serialInit)));
    if (call_tmp9) {
      _ic__F1_high = ((int64_t)((s - INT64(1))));
      for (i = INT64(0); ((i <= _ic__F1_high)); i += INT64(1)) {
        call_tmp10 = ((LocReplicatedDom_1_int64_t_F_chpl)(nil));
        chpl_macro_tmp_66.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_66.addr = call_tmp10;
        T2 = chpl_macro_tmp_66;
        *(x + i) = T2;
      }
    } else {
      call_tmp11 = (((int64_t)(initMethod)) == ((int64_t)(ArrayInit_parallelInit)));
      if (call_tmp11) {
        ret_to_arg_ref_tmp_ = &ret_tmp;
        chpl_build_bounded_range(INT64(0), ((int64_t)((s - INT64(1)))), ret_to_arg_ref_tmp_);
        _ic__F0_this = ret_tmp;
        _ic__F1_x1__e1_args = x;
        this12 = &_ic__F0_this;
        chpl_macro_tmp_67.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_67.addr = this12;
        T3 = chpl_macro_tmp_67;
        call_tmp12 = length2(T3);
        len = call_tmp12;
        call_tmp13 = chpl_task_getSerial();
        if (call_tmp13) {
          ret2 = INT64(1);
          goto _end__if_fn50;
        } else {
          call_tmp14 = _computeNumChunks_chpl3(call_tmp12);
          ret2 = call_tmp14;
          goto _end__if_fn50;
        }
        _end__if_fn50:;
        numChunks = ret2;
        call_tmp15 = (ret2 <= INT64(1));
        if (call_tmp15) {
          _ic__F0_this2 = _ic__F0_this;
          end = (&_ic__F0_this2)->_high;
          x2 = _ic__F1_x1__e1_args;
          for (i2 = (&_ic__F0_this2)->_low; ((i2 <= end)); i2 += INT64(1)) {
            call_tmp16 = ((LocReplicatedDom_1_int64_t_F_chpl)(nil));
            chpl_macro_tmp_68.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_68.addr = call_tmp16;
            T4 = chpl_macro_tmp_68;
            *(x2 + i2) = T4;
          }
        } else {
          ret_to_arg_ref_tmp_2 = &ret_tmp2;
          chpl_build_low_bounded_range(INT64(0), ret_to_arg_ref_tmp_2);
          ret_to_arg_ref_tmp_3 = &ret_tmp3;
          chpl___POUND_(&ret_tmp2, ret2, ret_to_arg_ref_tmp_3);
          tmpIter = ret_tmp3;
          cast_tmp = chpl_here_alloc(sizeof(chpl_chpl___EndCount_atomic_int64_int64_t_object), INT16(2));
          this13 = ((chpl___EndCount_atomic_int64_int64_t)(cast_tmp));
          ((object)(this13))->chpl__cid = chpl__cid_chpl___EndCount_atomic_int64_int64_t;
          (this13)->i = _init_class_tmp_;
          (this13)->taskCnt = INT64(0);
          (this13)->taskList = NULL;
          ret3 = type_tmp;
          _ref_tmp_ = &ret3;
          atomic_init_int_least64_t(_ref_tmp_, INT64(0));
          (&this14)->_v = ret3;
          ret_to_arg_ref_tmp_4 = &ret_tmp4;
          _construct_atomic_int64(ret3, &this14, ret_to_arg_ref_tmp_4);
          (this13)->i = ret_tmp4;
          (this13)->taskCnt = INT64(0);
          call_tmp17 = ((c_void_ptr)(nil));
          (this13)->taskList = call_tmp17;
          wrap_call_tmp = _construct__EndCount(&ret_tmp4, INT64(0), call_tmp17, this13);
          _coforallCount = wrap_call_tmp;
          _ref_tmp_2 = &tmpIter;
          chpl_macro_tmp_69.locale = chpl_gen_getLocaleID();
          chpl_macro_tmp_69.addr = _ref_tmp_2;
          T5 = chpl_macro_tmp_69;
          call_tmp18 = length2(T5);
          numTasks = call_tmp18;
          _upEndCount3(_coforallCount, call_tmp18);
          _ic__F0_this3 = tmpIter;
          ret4 = (&_ic__F0_this3)->_high;
          end2 = ret4;
          for (i3 = (&_ic__F0_this3)->_low; ((i3 <= end2)); i3 += INT64(1)) {
            this15 = &_ic__F0_this;
            _args_forcoforall_fn = ((_class_localscoforall_fn16)(&chpl_macro_tmp_70));
            (_args_forcoforall_fn)->_0_x1__e1_args = _ic__F1_x1__e1_args;
            (_args_forcoforall_fn)->_1__yieldedIndex = i3;
            (_args_forcoforall_fn)->_2__coforallCount = _coforallCount;
            (_args_forcoforall_fn)->_3_numChunks = numChunks;
            T6 = this15;
            (_args_forcoforall_fn)->_4_tmp = T6;
            (_args_forcoforall_fn)->_5_len = len;
            _args_vforcoforall_fn = ((void*)(_args_forcoforall_fn));
            _taskListNodecoforall_fn = chpl_nodeID;
            /*** wrapcoforall_fn32 ***/ chpl_taskListAddCoStmt(INT32(-2), INT64(161), ((chpl_task_bundle_p)(_args_vforcoforall_fn)), sizeof(chpl__class_localscoforall_fn16_object), &((_coforallCount)->taskList), _taskListNodecoforall_fn, INT64(740), INT32(2));
          }
          _waitEndCount3(_coforallCount, numTasks);
          _field_destructor_tmp_ = &((_coforallCount)->i);
          call_tmp19 = &((_field_destructor_tmp_)->_v);
          atomic_destroy_int_least64_t(call_tmp19);
          call_tmp20 = chpl_gen_getLocaleID();
          rvfDerefTmp = _coforallCount;
          isdirect = chpl_doDirectExecuteOn(&call_tmp20);
          if (isdirect) {
            chpl_macro_tmp_71.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_71.addr = rvfDerefTmp;
            T7 = chpl_macro_tmp_71;
            on_fn123(T7);
          } else {
            _args_foron_fn = ((_class_localson_fn104)(&chpl_macro_tmp_72));
            (_args_foron_fn)->_0_rvfDerefTmp = call_tmp20;
            chpl_macro_tmp_73.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_73.addr = rvfDerefTmp;
            T8 = chpl_macro_tmp_73;
            (_args_foron_fn)->_1_rvfDerefTmp = T8;
            _args_vforon_fn = ((void*)(_args_foron_fn));
            /*** wrapon_fn131 ***/ chpl_executeOn(&call_tmp20, INT32(196), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn104_object), INT64(1227), INT32(2));
          }
        }
      } else {
        halt(&local__str_literal_177 /* "ArrayInit.heuristicInit should have been made concrete" */, INT64(746), INT32(2));
      }
    }
  }
  _end_init_elts:;
  return;
}

/* ChapelBase.chpl:671 */
static void init_elts12(_ddata_chpl_TableEntry_int64_t x,
                        int64_t s) {
  string local__str_literal_177;
  chpl____wide_heap_DummyLocale local_dummyLocale = {CHPL_LOCALEID_T_INIT, NULL};
  int32_t local_c_sublocid_any;
  ArrayInit initMethod;
  ArrayInit ret;
  chpl_bool call_tmp2;
  chpl_bool call_tmp3;
  chpl_localeID_t _autoCopy_tmp_;
  chpl____wide_locale call_tmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DummyLocale T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp7;
  chpl_bool call_tmp8;
  chpl_bool call_tmp9;
  int64_t _ic__F1_high;
  int64_t i;
  chpl_TableEntry_int64_t this12;
  chpl__hash_status x2;
  chpl_TableEntry_int64_t ret_tmp;
  _ref_chpl_TableEntry_int64_t ret_to_arg_ref_tmp_ = NULL;
  chpl_bool call_tmp10;
  range_int64_t_bounded_F ret_tmp2;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_2 = NULL;
  range_int64_t_bounded_F _ic__F0_this;
  _ddata_chpl_TableEntry_int64_t _ic__F1_x1__e1_args = NULL;
  int64_t len;
  int64_t call_tmp11;
  _ref_range_int64_t_bounded_F this13 = NULL;
  chpl____wide__ref_range_int64_t_bounded_F T2 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t numChunks;
  int64_t ret2;
  chpl_bool call_tmp12;
  int64_t call_tmp13;
  chpl_bool call_tmp14;
  range_int64_t_bounded_F _ic__F0_this2;
  int64_t i2;
  int64_t ret3;
  int64_t end;
  int64_t ret4;
  _ddata_chpl_TableEntry_int64_t x3 = NULL;
  chpl_TableEntry_int64_t this14;
  chpl__hash_status x4;
  chpl_TableEntry_int64_t ret_tmp3;
  _ref_chpl_TableEntry_int64_t ret_to_arg_ref_tmp_3 = NULL;
  range_int64_t_bounded_F tmpIter;
  range_int64_t_boundedLow_F ret_tmp4;
  _ref_range_int64_t_boundedLow_F ret_to_arg_ref_tmp_4 = NULL;
  range_int64_t_bounded_F ret_tmp5;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_5 = NULL;
  chpl___EndCount_atomic_int64_int64_t _coforallCount = NULL;
  chpl___EndCount_atomic_int64_int64_t this15 = NULL;
  c_void_ptr cast_tmp;
  atomic_int64 _init_class_tmp_;
  atomic_int64 this16;
  atomic_int_least64_t ret5;
  atomic_int_least64_t type_tmp;
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
  atomic_int64 ret_tmp6;
  _ref_atomic_int64 ret_to_arg_ref_tmp_6 = NULL;
  c_void_ptr call_tmp15;
  chpl___EndCount_atomic_int64_int64_t wrap_call_tmp = NULL;
  int64_t numTasks;
  _ref_range_int64_t_bounded_F _ref_tmp_2 = NULL;
  int64_t call_tmp16;
  chpl____wide__ref_range_int64_t_bounded_F T3 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F _ic__F0_this3;
  int64_t i3;
  int64_t end2;
  int64_t ret6;
  _ref_range_int64_t_bounded_F this17 = NULL;
  _class_localscoforall_fn21 _args_forcoforall_fn = NULL;
  _ref_range_int64_t_bounded_F T4 = NULL;
  c_void_ptr _args_vforcoforall_fn;
  int64_t _taskListNodecoforall_fn;
  _ref_atomic_int64 _field_destructor_tmp_ = NULL;
  _ref_atomic_int_least64_t call_tmp17 = NULL;
  chpl_localeID_t call_tmp18;
  chpl___EndCount_atomic_int64_int64_t rvfDerefTmp = NULL;
  chpl_bool isdirect;
  chpl____wide__EndCount_atomic_int64_int64_t T5 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn104 _args_foron_fn = NULL;
  chpl____wide__EndCount_atomic_int64_int64_t T6 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn;
  chpl____wide_object chpl_macro_tmp_74;
  chpl____wide__ref__wide_DummyLocale chpl_macro_tmp_75;
  chpl____wide_object chpl_macro_tmp_76;
  chpl____wide__ref_range_int64_t_bounded_F chpl_macro_tmp_77;
  chpl____wide__ref_range_int64_t_bounded_F chpl_macro_tmp_78;
  chpl__class_localscoforall_fn21_object chpl_macro_tmp_79;
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_80;
  chpl__class_localson_fn104_object chpl_macro_tmp_81;
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_82;
  local__str_literal_177 /* "ArrayInit.heuristicInit should have been made concrete" */ = _str_literal_177 /* "ArrayInit.heuristicInit should have been made concrete" */;
  local_dummyLocale = dummyLocale;
  local_c_sublocid_any = c_sublocid_any;
  ret = ArrayInit_heuristicInit;
  initMethod = ret;
  call_tmp2 = (((int64_t)(ret)) == ((int64_t)(ArrayInit_heuristicInit)));
  if (call_tmp2) {
    initMethod = ArrayInit_serialInit;
  }
  call_tmp3 = (((int64_t)(initMethod)) == ((int64_t)(ArrayInit_parallelInit)));
  if (call_tmp3) {
    _autoCopy_tmp_ = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any);
    call_tmp4 = chpl_localeID_to_locale(&_autoCopy_tmp_);
    chpl_macro_tmp_74.locale = (&call_tmp4)->locale;
    chpl_macro_tmp_74.addr = ((object)((&call_tmp4)->addr));
    call_tmp5 = chpl_macro_tmp_74;
    chpl_macro_tmp_75.locale = (&local_dummyLocale)->locale;
    chpl_macro_tmp_75.addr = &(((&local_dummyLocale)->addr)->value);
    chpl_gen_comm_get(((void*)(&T)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_75).locale), INT64(0), INT32(0)), (chpl_macro_tmp_75).addr, sizeof(chpl____wide_DummyLocale), -1, COMMID(5), INT64(563), INT64(25));
    chpl_macro_tmp_76.locale = (&T)->locale;
    chpl_macro_tmp_76.addr = ((object)((&T)->addr));
    call_tmp6 = chpl_macro_tmp_76;
    call_tmp7 = (! (((&call_tmp5)->addr != (&call_tmp6)->addr) || ((!(! (&call_tmp5)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp5)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&call_tmp6)->locale), INT64(0), INT32(0))))));
    if (call_tmp7) {
      initMethod = ArrayInit_serialInit;
    }
  }
  call_tmp8 = (((int64_t)(initMethod)) == ((int64_t)(ArrayInit_noInit)));
  if (call_tmp8) {
    goto _end_init_elts;
  } else {
    call_tmp9 = (((int64_t)(initMethod)) == ((int64_t)(ArrayInit_serialInit)));
    if (call_tmp9) {
      _ic__F1_high = ((int64_t)((s - INT64(1))));
      for (i = INT64(0); ((i <= _ic__F1_high)); i += INT64(1)) {
        (&this12)->status = chpl__hash_status_empty;
        (&this12)->idx = INT64(0);
        x2 = chpl__hash_status_empty;
        (&this12)->status = x2;
        (&this12)->idx = INT64(0);
        ret_to_arg_ref_tmp_ = &ret_tmp;
        _construct_chpl_TableEntry(x2, INT64(0), &this12, ret_to_arg_ref_tmp_);
        *(x + i) = ret_tmp;
      }
    } else {
      call_tmp10 = (((int64_t)(initMethod)) == ((int64_t)(ArrayInit_parallelInit)));
      if (call_tmp10) {
        ret_to_arg_ref_tmp_2 = &ret_tmp2;
        chpl_build_bounded_range(INT64(0), ((int64_t)((s - INT64(1)))), ret_to_arg_ref_tmp_2);
        _ic__F0_this = ret_tmp2;
        _ic__F1_x1__e1_args = x;
        this13 = &_ic__F0_this;
        chpl_macro_tmp_77.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_77.addr = this13;
        T2 = chpl_macro_tmp_77;
        call_tmp11 = length2(T2);
        len = call_tmp11;
        call_tmp12 = chpl_task_getSerial();
        if (call_tmp12) {
          ret2 = INT64(1);
          goto _end__if_fn50;
        } else {
          call_tmp13 = _computeNumChunks_chpl3(call_tmp11);
          ret2 = call_tmp13;
          goto _end__if_fn50;
        }
        _end__if_fn50:;
        numChunks = ret2;
        call_tmp14 = (ret2 <= INT64(1));
        if (call_tmp14) {
          _ic__F0_this2 = _ic__F0_this;
          ret3 = (&_ic__F0_this2)->_low;
          ret4 = (&_ic__F0_this2)->_high;
          end = ret4;
          x3 = _ic__F1_x1__e1_args;
          for (i2 = ret3; ((i2 <= end)); i2 += INT64(1)) {
            (&this14)->status = chpl__hash_status_empty;
            (&this14)->idx = INT64(0);
            x4 = chpl__hash_status_empty;
            (&this14)->status = x4;
            (&this14)->idx = INT64(0);
            ret_to_arg_ref_tmp_3 = &ret_tmp3;
            _construct_chpl_TableEntry(x4, INT64(0), &this14, ret_to_arg_ref_tmp_3);
            *(x3 + i2) = ret_tmp3;
          }
        } else {
          ret_to_arg_ref_tmp_4 = &ret_tmp4;
          chpl_build_low_bounded_range(INT64(0), ret_to_arg_ref_tmp_4);
          ret_to_arg_ref_tmp_5 = &ret_tmp5;
          chpl___POUND_(&ret_tmp4, ret2, ret_to_arg_ref_tmp_5);
          tmpIter = ret_tmp5;
          cast_tmp = chpl_here_alloc(sizeof(chpl_chpl___EndCount_atomic_int64_int64_t_object), INT16(2));
          this15 = ((chpl___EndCount_atomic_int64_int64_t)(cast_tmp));
          ((object)(this15))->chpl__cid = chpl__cid_chpl___EndCount_atomic_int64_int64_t;
          (this15)->i = _init_class_tmp_;
          (this15)->taskCnt = INT64(0);
          (this15)->taskList = NULL;
          ret5 = type_tmp;
          _ref_tmp_ = &ret5;
          atomic_init_int_least64_t(_ref_tmp_, INT64(0));
          (&this16)->_v = ret5;
          ret_to_arg_ref_tmp_6 = &ret_tmp6;
          _construct_atomic_int64(ret5, &this16, ret_to_arg_ref_tmp_6);
          (this15)->i = ret_tmp6;
          (this15)->taskCnt = INT64(0);
          call_tmp15 = ((c_void_ptr)(nil));
          (this15)->taskList = call_tmp15;
          wrap_call_tmp = _construct__EndCount(&ret_tmp6, INT64(0), call_tmp15, this15);
          _coforallCount = wrap_call_tmp;
          _ref_tmp_2 = &tmpIter;
          chpl_macro_tmp_78.locale = chpl_gen_getLocaleID();
          chpl_macro_tmp_78.addr = _ref_tmp_2;
          T3 = chpl_macro_tmp_78;
          call_tmp16 = length2(T3);
          numTasks = call_tmp16;
          _upEndCount3(_coforallCount, call_tmp16);
          _ic__F0_this3 = tmpIter;
          ret6 = (&_ic__F0_this3)->_high;
          end2 = ret6;
          for (i3 = (&_ic__F0_this3)->_low; ((i3 <= end2)); i3 += INT64(1)) {
            this17 = &_ic__F0_this;
            _args_forcoforall_fn = ((_class_localscoforall_fn21)(&chpl_macro_tmp_79));
            (_args_forcoforall_fn)->_0_x1__e1_args = _ic__F1_x1__e1_args;
            T4 = this17;
            (_args_forcoforall_fn)->_1_tmp = T4;
            (_args_forcoforall_fn)->_2_len = len;
            (_args_forcoforall_fn)->_3_numChunks = numChunks;
            (_args_forcoforall_fn)->_4__yieldedIndex = i3;
            (_args_forcoforall_fn)->_5__coforallCount = _coforallCount;
            _args_vforcoforall_fn = ((void*)(_args_forcoforall_fn));
            _taskListNodecoforall_fn = chpl_nodeID;
            /*** wrapcoforall_fn18 ***/ chpl_taskListAddCoStmt(INT32(-2), INT64(147), ((chpl_task_bundle_p)(_args_vforcoforall_fn)), sizeof(chpl__class_localscoforall_fn21_object), &((_coforallCount)->taskList), _taskListNodecoforall_fn, INT64(740), INT32(2));
          }
          _waitEndCount3(_coforallCount, numTasks);
          _field_destructor_tmp_ = &((_coforallCount)->i);
          call_tmp17 = &((_field_destructor_tmp_)->_v);
          atomic_destroy_int_least64_t(call_tmp17);
          call_tmp18 = chpl_gen_getLocaleID();
          rvfDerefTmp = _coforallCount;
          isdirect = chpl_doDirectExecuteOn(&call_tmp18);
          if (isdirect) {
            chpl_macro_tmp_80.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_80.addr = rvfDerefTmp;
            T5 = chpl_macro_tmp_80;
            on_fn123(T5);
          } else {
            _args_foron_fn = ((_class_localson_fn104)(&chpl_macro_tmp_81));
            (_args_foron_fn)->_0_rvfDerefTmp = call_tmp18;
            chpl_macro_tmp_82.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_82.addr = rvfDerefTmp;
            T6 = chpl_macro_tmp_82;
            (_args_foron_fn)->_1_rvfDerefTmp = T6;
            _args_vforon_fn = ((void*)(_args_foron_fn));
            /*** wrapon_fn131 ***/ chpl_executeOn(&call_tmp18, INT32(196), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn104_object), INT64(1227), INT32(2));
          }
        }
      } else {
        halt(&local__str_literal_177 /* "ArrayInit.heuristicInit should have been made concrete" */, INT64(746), INT32(2));
      }
    }
  }
  _end_init_elts:;
  return;
}

/* ChapelBase.chpl:671 */
static void init_elts8(_ddata_LocCyclicArr_Bitmap_1_int64_t_F x,
                       int64_t s) {
  string local__str_literal_177;
  chpl____wide_heap_DummyLocale local_dummyLocale = {CHPL_LOCALEID_T_INIT, NULL};
  int32_t local_c_sublocid_any;
  ArrayInit initMethod;
  ArrayInit ret;
  chpl_bool call_tmp2;
  chpl_bool call_tmp3;
  chpl_localeID_t _autoCopy_tmp_;
  chpl____wide_locale call_tmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DummyLocale T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp7;
  chpl_bool call_tmp8;
  chpl_bool call_tmp9;
  int64_t _ic__F1_high;
  int64_t i;
  LocCyclicArr_Bitmap_1_int64_t_F_chpl call_tmp10 = NULL;
  chpl____wide_LocCyclicArr_Bitmap_1_int64_t_F T2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp11;
  range_int64_t_bounded_F ret_tmp;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
  range_int64_t_bounded_F _ic__F0_this;
  _ddata_LocCyclicArr_Bitmap_1_int64_t_F _ic__F1_x1__e1_args = NULL;
  int64_t len;
  int64_t call_tmp12;
  _ref_range_int64_t_bounded_F this12 = NULL;
  chpl____wide__ref_range_int64_t_bounded_F T3 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t numChunks;
  int64_t ret2;
  chpl_bool call_tmp13;
  int64_t call_tmp14;
  chpl_bool call_tmp15;
  range_int64_t_bounded_F _ic__F0_this2;
  int64_t i2;
  int64_t end;
  _ddata_LocCyclicArr_Bitmap_1_int64_t_F x2 = NULL;
  LocCyclicArr_Bitmap_1_int64_t_F_chpl call_tmp16 = NULL;
  chpl____wide_LocCyclicArr_Bitmap_1_int64_t_F T4 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F tmpIter;
  range_int64_t_boundedLow_F ret_tmp2;
  _ref_range_int64_t_boundedLow_F ret_to_arg_ref_tmp_2 = NULL;
  range_int64_t_bounded_F ret_tmp3;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_3 = NULL;
  chpl___EndCount_atomic_int64_int64_t _coforallCount = NULL;
  chpl___EndCount_atomic_int64_int64_t this13 = NULL;
  c_void_ptr cast_tmp;
  atomic_int64 _init_class_tmp_;
  atomic_int64 this14;
  atomic_int_least64_t ret3;
  atomic_int_least64_t type_tmp;
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
  atomic_int64 ret_tmp4;
  _ref_atomic_int64 ret_to_arg_ref_tmp_4 = NULL;
  c_void_ptr call_tmp17;
  chpl___EndCount_atomic_int64_int64_t wrap_call_tmp = NULL;
  int64_t numTasks;
  _ref_range_int64_t_bounded_F _ref_tmp_2 = NULL;
  int64_t call_tmp18;
  chpl____wide__ref_range_int64_t_bounded_F T5 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F _ic__F0_this3;
  int64_t i3;
  int64_t end2;
  _ref_range_int64_t_bounded_F this15 = NULL;
  _class_localscoforall_fn22 _args_forcoforall_fn = NULL;
  _ref_range_int64_t_bounded_F T6 = NULL;
  c_void_ptr _args_vforcoforall_fn;
  int64_t _taskListNodecoforall_fn;
  _ref_atomic_int64 _field_destructor_tmp_ = NULL;
  _ref_atomic_int_least64_t call_tmp19 = NULL;
  chpl_localeID_t call_tmp20;
  chpl___EndCount_atomic_int64_int64_t rvfDerefTmp = NULL;
  chpl_bool isdirect;
  chpl____wide__EndCount_atomic_int64_int64_t T7 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn104 _args_foron_fn = NULL;
  chpl____wide__EndCount_atomic_int64_int64_t T8 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn;
  chpl____wide_object chpl_macro_tmp_83;
  chpl____wide__ref__wide_DummyLocale chpl_macro_tmp_84;
  chpl____wide_object chpl_macro_tmp_85;
  chpl____wide_LocCyclicArr_Bitmap_1_int64_t_F chpl_macro_tmp_86;
  chpl____wide__ref_range_int64_t_bounded_F chpl_macro_tmp_87;
  chpl____wide_LocCyclicArr_Bitmap_1_int64_t_F chpl_macro_tmp_88;
  chpl____wide__ref_range_int64_t_bounded_F chpl_macro_tmp_89;
  chpl__class_localscoforall_fn22_object chpl_macro_tmp_90;
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_91;
  chpl__class_localson_fn104_object chpl_macro_tmp_92;
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_93;
  local__str_literal_177 /* "ArrayInit.heuristicInit should have been made concrete" */ = _str_literal_177 /* "ArrayInit.heuristicInit should have been made concrete" */;
  local_dummyLocale = dummyLocale;
  local_c_sublocid_any = c_sublocid_any;
  ret = ArrayInit_heuristicInit;
  initMethod = ret;
  call_tmp2 = (((int64_t)(ret)) == ((int64_t)(ArrayInit_heuristicInit)));
  if (call_tmp2) {
    initMethod = ArrayInit_serialInit;
  }
  call_tmp3 = (((int64_t)(initMethod)) == ((int64_t)(ArrayInit_parallelInit)));
  if (call_tmp3) {
    _autoCopy_tmp_ = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any);
    call_tmp4 = chpl_localeID_to_locale(&_autoCopy_tmp_);
    chpl_macro_tmp_83.locale = (&call_tmp4)->locale;
    chpl_macro_tmp_83.addr = ((object)((&call_tmp4)->addr));
    call_tmp5 = chpl_macro_tmp_83;
    chpl_macro_tmp_84.locale = (&local_dummyLocale)->locale;
    chpl_macro_tmp_84.addr = &(((&local_dummyLocale)->addr)->value);
    chpl_gen_comm_get(((void*)(&T)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_84).locale), INT64(0), INT32(0)), (chpl_macro_tmp_84).addr, sizeof(chpl____wide_DummyLocale), -1, COMMID(6), INT64(563), INT64(25));
    chpl_macro_tmp_85.locale = (&T)->locale;
    chpl_macro_tmp_85.addr = ((object)((&T)->addr));
    call_tmp6 = chpl_macro_tmp_85;
    call_tmp7 = (! (((&call_tmp5)->addr != (&call_tmp6)->addr) || ((!(! (&call_tmp5)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp5)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&call_tmp6)->locale), INT64(0), INT32(0))))));
    if (call_tmp7) {
      initMethod = ArrayInit_serialInit;
    }
  }
  call_tmp8 = (((int64_t)(initMethod)) == ((int64_t)(ArrayInit_noInit)));
  if (call_tmp8) {
    goto _end_init_elts;
  } else {
    call_tmp9 = (((int64_t)(initMethod)) == ((int64_t)(ArrayInit_serialInit)));
    if (call_tmp9) {
      _ic__F1_high = ((int64_t)((s - INT64(1))));
      for (i = INT64(0); ((i <= _ic__F1_high)); i += INT64(1)) {
        call_tmp10 = ((LocCyclicArr_Bitmap_1_int64_t_F_chpl)(nil));
        chpl_macro_tmp_86.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_86.addr = call_tmp10;
        T2 = chpl_macro_tmp_86;
        *(x + i) = T2;
      }
    } else {
      call_tmp11 = (((int64_t)(initMethod)) == ((int64_t)(ArrayInit_parallelInit)));
      if (call_tmp11) {
        ret_to_arg_ref_tmp_ = &ret_tmp;
        chpl_build_bounded_range(INT64(0), ((int64_t)((s - INT64(1)))), ret_to_arg_ref_tmp_);
        _ic__F0_this = ret_tmp;
        _ic__F1_x1__e1_args = x;
        this12 = &_ic__F0_this;
        chpl_macro_tmp_87.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_87.addr = this12;
        T3 = chpl_macro_tmp_87;
        call_tmp12 = length2(T3);
        len = call_tmp12;
        call_tmp13 = chpl_task_getSerial();
        if (call_tmp13) {
          ret2 = INT64(1);
          goto _end__if_fn50;
        } else {
          call_tmp14 = _computeNumChunks_chpl3(call_tmp12);
          ret2 = call_tmp14;
          goto _end__if_fn50;
        }
        _end__if_fn50:;
        numChunks = ret2;
        call_tmp15 = (ret2 <= INT64(1));
        if (call_tmp15) {
          _ic__F0_this2 = _ic__F0_this;
          end = (&_ic__F0_this2)->_high;
          x2 = _ic__F1_x1__e1_args;
          for (i2 = (&_ic__F0_this2)->_low; ((i2 <= end)); i2 += INT64(1)) {
            call_tmp16 = ((LocCyclicArr_Bitmap_1_int64_t_F_chpl)(nil));
            chpl_macro_tmp_88.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_88.addr = call_tmp16;
            T4 = chpl_macro_tmp_88;
            *(x2 + i2) = T4;
          }
        } else {
          ret_to_arg_ref_tmp_2 = &ret_tmp2;
          chpl_build_low_bounded_range(INT64(0), ret_to_arg_ref_tmp_2);
          ret_to_arg_ref_tmp_3 = &ret_tmp3;
          chpl___POUND_(&ret_tmp2, ret2, ret_to_arg_ref_tmp_3);
          tmpIter = ret_tmp3;
          cast_tmp = chpl_here_alloc(sizeof(chpl_chpl___EndCount_atomic_int64_int64_t_object), INT16(2));
          this13 = ((chpl___EndCount_atomic_int64_int64_t)(cast_tmp));
          ((object)(this13))->chpl__cid = chpl__cid_chpl___EndCount_atomic_int64_int64_t;
          (this13)->i = _init_class_tmp_;
          (this13)->taskCnt = INT64(0);
          (this13)->taskList = NULL;
          ret3 = type_tmp;
          _ref_tmp_ = &ret3;
          atomic_init_int_least64_t(_ref_tmp_, INT64(0));
          (&this14)->_v = ret3;
          ret_to_arg_ref_tmp_4 = &ret_tmp4;
          _construct_atomic_int64(ret3, &this14, ret_to_arg_ref_tmp_4);
          (this13)->i = ret_tmp4;
          (this13)->taskCnt = INT64(0);
          call_tmp17 = ((c_void_ptr)(nil));
          (this13)->taskList = call_tmp17;
          wrap_call_tmp = _construct__EndCount(&ret_tmp4, INT64(0), call_tmp17, this13);
          _coforallCount = wrap_call_tmp;
          _ref_tmp_2 = &tmpIter;
          chpl_macro_tmp_89.locale = chpl_gen_getLocaleID();
          chpl_macro_tmp_89.addr = _ref_tmp_2;
          T5 = chpl_macro_tmp_89;
          call_tmp18 = length2(T5);
          numTasks = call_tmp18;
          _upEndCount3(_coforallCount, call_tmp18);
          _ic__F0_this3 = tmpIter;
          end2 = (&_ic__F0_this3)->_high;
          for (i3 = (&_ic__F0_this3)->_low; ((i3 <= end2)); i3 += INT64(1)) {
            this15 = &_ic__F0_this;
            _args_forcoforall_fn = ((_class_localscoforall_fn22)(&chpl_macro_tmp_90));
            (_args_forcoforall_fn)->_0_x1__e1_args = _ic__F1_x1__e1_args;
            (_args_forcoforall_fn)->_1_numChunks = numChunks;
            (_args_forcoforall_fn)->_2__yieldedIndex = i3;
            (_args_forcoforall_fn)->_3__coforallCount = _coforallCount;
            T6 = this15;
            (_args_forcoforall_fn)->_4_tmp = T6;
            (_args_forcoforall_fn)->_5_len = len;
            _args_vforcoforall_fn = ((void*)(_args_forcoforall_fn));
            _taskListNodecoforall_fn = chpl_nodeID;
            /*** wrapcoforall_fn22 ***/ chpl_taskListAddCoStmt(INT32(-2), INT64(151), ((chpl_task_bundle_p)(_args_vforcoforall_fn)), sizeof(chpl__class_localscoforall_fn22_object), &((_coforallCount)->taskList), _taskListNodecoforall_fn, INT64(740), INT32(2));
          }
          _waitEndCount3(_coforallCount, numTasks);
          _field_destructor_tmp_ = &((_coforallCount)->i);
          call_tmp19 = &((_field_destructor_tmp_)->_v);
          atomic_destroy_int_least64_t(call_tmp19);
          call_tmp20 = chpl_gen_getLocaleID();
          rvfDerefTmp = _coforallCount;
          isdirect = chpl_doDirectExecuteOn(&call_tmp20);
          if (isdirect) {
            chpl_macro_tmp_91.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_91.addr = rvfDerefTmp;
            T7 = chpl_macro_tmp_91;
            on_fn123(T7);
          } else {
            _args_foron_fn = ((_class_localson_fn104)(&chpl_macro_tmp_92));
            (_args_foron_fn)->_0_rvfDerefTmp = call_tmp20;
            chpl_macro_tmp_93.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_93.addr = rvfDerefTmp;
            T8 = chpl_macro_tmp_93;
            (_args_foron_fn)->_1_rvfDerefTmp = T8;
            _args_vforon_fn = ((void*)(_args_foron_fn));
            /*** wrapon_fn131 ***/ chpl_executeOn(&call_tmp20, INT32(196), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn104_object), INT64(1227), INT32(2));
          }
        }
      } else {
        halt(&local__str_literal_177 /* "ArrayInit.heuristicInit should have been made concrete" */, INT64(746), INT32(2));
      }
    }
  }
  _end_init_elts:;
  return;
}

/* ChapelBase.chpl:671 */
static void init_elts3(_ddata_Bitmap x,
                       int64_t s) {
  string local__str_literal_177;
  chpl____wide_heap_DummyLocale local_dummyLocale = {CHPL_LOCALEID_T_INIT, NULL};
  int32_t local_c_sublocid_any;
  ArrayInit initMethod;
  ArrayInit ret;
  chpl_bool call_tmp2;
  chpl_bool call_tmp3;
  chpl_localeID_t _autoCopy_tmp_;
  chpl____wide_locale call_tmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DummyLocale T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp7;
  chpl_bool call_tmp8;
  chpl_bool call_tmp9;
  int64_t _ic__F1_high;
  int64_t i;
  Bitmap_chpl this12;
  _syncvar_uint64_t _init_class_tmp_;
  chpl____wide__qthreads_synccls_uint64_t T2 = {CHPL_LOCALEID_T_INIT, NULL};
  _domain_DefaultRectangularDom_1_int64_t_F _init_class_tmp_2;
  chpl____wide_DefaultRectangularDom_1_int64_t_F T3 = {CHPL_LOCALEID_T_INIT, NULL};
  _array_DefaultRectangularArr_uint64_t_1_int64_t_F_int64_t _init_class_tmp_3;
  chpl____wide_DefaultRectangularArr_uint64_t_1_int64_t_F_int64_t T4 = {CHPL_LOCALEID_T_INIT, NULL};
  _syncvar_uint64_t x2;
  _syncvar_uint64_t ret_tmp;
  _ref__syncvar_uint64_t ret_to_arg_ref_tmp_ = NULL;
  _ref__syncvar_uint64_t _ref_tmp_ = NULL;
  chpl____wide__ref__syncvar_uint64_t T5 = {CHPL_LOCALEID_T_INIT, NULL};
  _domain_DefaultRectangularDom_1_int64_t_F default_argbitmapSpace;
  range_int64_t_bounded_F ret_tmp2;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_2 = NULL;
  _domain_DefaultRectangularDom_1_int64_t_F ret_tmp3;
  _ref__domain_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_3 = NULL;
  _ref__domain_DefaultRectangularDom_1_int64_t_F i_x = NULL;
  _domain_DefaultRectangularDom_1_int64_t_F ret2;
  chpl_bool coerce_tmp;
  _domain_DefaultRectangularDom_1_int64_t_F ret3;
  _ref__domain_DefaultRectangularDom_1_int64_t_F _ref_tmp_2 = NULL;
  chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_F T6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_F call_tmp10 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__domain_DefaultRectangularDom_1_int64_t_F _ref_tmp_3 = NULL;
  chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_F T7 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl___RuntimeTypeInfo24 call_tmp11;
  chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_F i_dom = {CHPL_LOCALEID_T_INIT, NULL};
  _domain_DefaultRectangularDom_1_int64_t_F _runtime_type_tmp_;
  _domain_DefaultRectangularDom_1_int64_t_F T8;
  _array_DefaultRectangularArr_uint64_t_1_int64_t_F_int64_t ret_tmp4;
  _ref__array_DefaultRectangularArr_uint64_t_1_int64_t_F_int64_t ret_to_arg_ref_tmp_4 = NULL;
  _array_DefaultRectangularArr_uint64_t_1_int64_t_F_int64_t retarg_tmp;
  Bitmap_chpl ret_tmp5;
  _ref_Bitmap ret_to_arg_ref_tmp_5 = NULL;
  chpl_bool call_tmp12;
  range_int64_t_bounded_F ret_tmp6;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_6 = NULL;
  range_int64_t_bounded_F _ic__F0_this;
  _ddata_Bitmap _ic__F1_x1__e1_args = NULL;
  int64_t len;
  int64_t call_tmp13;
  _ref_range_int64_t_bounded_F this13 = NULL;
  chpl____wide__ref_range_int64_t_bounded_F T9 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t numChunks;
  int64_t ret4;
  chpl_bool call_tmp14;
  int64_t call_tmp15;
  chpl_bool call_tmp16;
  range_int64_t_bounded_F _ic__F0_this2;
  int64_t i2;
  int64_t ret5;
  int64_t end;
  int64_t ret6;
  _ddata_Bitmap x3 = NULL;
  Bitmap_chpl this14;
  _syncvar_uint64_t _init_class_tmp_4;
  chpl____wide__qthreads_synccls_uint64_t T10 = {CHPL_LOCALEID_T_INIT, NULL};
  _domain_DefaultRectangularDom_1_int64_t_F _init_class_tmp_5;
  chpl____wide_DefaultRectangularDom_1_int64_t_F T11 = {CHPL_LOCALEID_T_INIT, NULL};
  _array_DefaultRectangularArr_uint64_t_1_int64_t_F_int64_t _init_class_tmp_6;
  chpl____wide_DefaultRectangularArr_uint64_t_1_int64_t_F_int64_t T12 = {CHPL_LOCALEID_T_INIT, NULL};
  _syncvar_uint64_t x4;
  _syncvar_uint64_t ret_tmp7;
  _ref__syncvar_uint64_t ret_to_arg_ref_tmp_7 = NULL;
  _ref__syncvar_uint64_t _ref_tmp_4 = NULL;
  chpl____wide__ref__syncvar_uint64_t T13 = {CHPL_LOCALEID_T_INIT, NULL};
  _domain_DefaultRectangularDom_1_int64_t_F default_argbitmapSpace2;
  range_int64_t_bounded_F ret_tmp8;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_8 = NULL;
  _domain_DefaultRectangularDom_1_int64_t_F ret_tmp9;
  _ref__domain_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_9 = NULL;
  _ref__domain_DefaultRectangularDom_1_int64_t_F i_x2 = NULL;
  _domain_DefaultRectangularDom_1_int64_t_F ret7;
  chpl_bool coerce_tmp2;
  _domain_DefaultRectangularDom_1_int64_t_F ret8;
  _ref__domain_DefaultRectangularDom_1_int64_t_F _ref_tmp_5 = NULL;
  chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_F T14 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_F call_tmp17 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__domain_DefaultRectangularDom_1_int64_t_F _ref_tmp_6 = NULL;
  chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_F T15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl___RuntimeTypeInfo24 call_tmp18;
  chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_F i_dom2 = {CHPL_LOCALEID_T_INIT, NULL};
  _domain_DefaultRectangularDom_1_int64_t_F _runtime_type_tmp_2;
  _domain_DefaultRectangularDom_1_int64_t_F T16;
  _array_DefaultRectangularArr_uint64_t_1_int64_t_F_int64_t ret_tmp10;
  _ref__array_DefaultRectangularArr_uint64_t_1_int64_t_F_int64_t ret_to_arg_ref_tmp_10 = NULL;
  _array_DefaultRectangularArr_uint64_t_1_int64_t_F_int64_t retarg_tmp2;
  Bitmap_chpl ret_tmp11;
  _ref_Bitmap ret_to_arg_ref_tmp_11 = NULL;
  range_int64_t_bounded_F tmpIter;
  range_int64_t_boundedLow_F ret_tmp12;
  _ref_range_int64_t_boundedLow_F ret_to_arg_ref_tmp_12 = NULL;
  range_int64_t_bounded_F ret_tmp13;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_13 = NULL;
  chpl___EndCount_atomic_int64_int64_t _coforallCount = NULL;
  chpl___EndCount_atomic_int64_int64_t this15 = NULL;
  c_void_ptr cast_tmp;
  atomic_int64 _init_class_tmp_7;
  atomic_int64 this16;
  atomic_int_least64_t ret9;
  atomic_int_least64_t type_tmp;
  _ref_atomic_int_least64_t _ref_tmp_7 = NULL;
  atomic_int64 ret_tmp14;
  _ref_atomic_int64 ret_to_arg_ref_tmp_14 = NULL;
  c_void_ptr call_tmp19;
  chpl___EndCount_atomic_int64_int64_t wrap_call_tmp = NULL;
  int64_t numTasks;
  _ref_range_int64_t_bounded_F _ref_tmp_8 = NULL;
  int64_t call_tmp20;
  chpl____wide__ref_range_int64_t_bounded_F T17 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F _ic__F0_this3;
  int64_t i3;
  int64_t end2;
  _ref_range_int64_t_bounded_F this17 = NULL;
  _class_localscoforall_fn23 _args_forcoforall_fn = NULL;
  _ref_range_int64_t_bounded_F T18 = NULL;
  c_void_ptr _args_vforcoforall_fn;
  int64_t _taskListNodecoforall_fn;
  _ref_atomic_int64 _field_destructor_tmp_ = NULL;
  _ref_atomic_int_least64_t call_tmp21 = NULL;
  chpl_localeID_t call_tmp22;
  chpl___EndCount_atomic_int64_int64_t rvfDerefTmp = NULL;
  chpl_bool isdirect;
  chpl____wide__EndCount_atomic_int64_int64_t T19 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn104 _args_foron_fn = NULL;
  chpl____wide__EndCount_atomic_int64_int64_t T20 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn;
  chpl____wide_object chpl_macro_tmp_94;
  chpl____wide__ref__wide_DummyLocale chpl_macro_tmp_95;
  chpl____wide_object chpl_macro_tmp_96;
  chpl____wide__nilType chpl_macro_tmp_97;
  chpl____wide__qthreads_synccls_uint64_t chpl_macro_tmp_98;
  chpl____wide__nilType chpl_macro_tmp_99;
  chpl____wide_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_100;
  chpl____wide__nilType chpl_macro_tmp_101;
  chpl____wide_DefaultRectangularArr_uint64_t_1_int64_t_F_int64_t chpl_macro_tmp_102;
  chpl____wide__ref__syncvar_uint64_t chpl_macro_tmp_103;
  chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_104;
  chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_105;
  chpl____wide__ref_range_int64_t_bounded_F chpl_macro_tmp_106;
  chpl____wide__nilType chpl_macro_tmp_107;
  chpl____wide__qthreads_synccls_uint64_t chpl_macro_tmp_108;
  chpl____wide__nilType chpl_macro_tmp_109;
  chpl____wide_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_110;
  chpl____wide__nilType chpl_macro_tmp_111;
  chpl____wide_DefaultRectangularArr_uint64_t_1_int64_t_F_int64_t chpl_macro_tmp_112;
  chpl____wide__ref__syncvar_uint64_t chpl_macro_tmp_113;
  chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_114;
  chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_115;
  chpl____wide__ref_range_int64_t_bounded_F chpl_macro_tmp_116;
  chpl__class_localscoforall_fn23_object chpl_macro_tmp_117;
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_118;
  chpl__class_localson_fn104_object chpl_macro_tmp_119;
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_120;
  local__str_literal_177 /* "ArrayInit.heuristicInit should have been made concrete" */ = _str_literal_177 /* "ArrayInit.heuristicInit should have been made concrete" */;
  local_dummyLocale = dummyLocale;
  local_c_sublocid_any = c_sublocid_any;
  ret = ArrayInit_heuristicInit;
  initMethod = ret;
  call_tmp2 = (((int64_t)(ret)) == ((int64_t)(ArrayInit_heuristicInit)));
  if (call_tmp2) {
    initMethod = ArrayInit_serialInit;
  }
  call_tmp3 = (((int64_t)(initMethod)) == ((int64_t)(ArrayInit_parallelInit)));
  if (call_tmp3) {
    _autoCopy_tmp_ = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any);
    call_tmp4 = chpl_localeID_to_locale(&_autoCopy_tmp_);
    chpl_macro_tmp_94.locale = (&call_tmp4)->locale;
    chpl_macro_tmp_94.addr = ((object)((&call_tmp4)->addr));
    call_tmp5 = chpl_macro_tmp_94;
    chpl_macro_tmp_95.locale = (&local_dummyLocale)->locale;
    chpl_macro_tmp_95.addr = &(((&local_dummyLocale)->addr)->value);
    chpl_gen_comm_get(((void*)(&T)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_95).locale), INT64(0), INT32(0)), (chpl_macro_tmp_95).addr, sizeof(chpl____wide_DummyLocale), -1, COMMID(7), INT64(563), INT64(25));
    chpl_macro_tmp_96.locale = (&T)->locale;
    chpl_macro_tmp_96.addr = ((object)((&T)->addr));
    call_tmp6 = chpl_macro_tmp_96;
    call_tmp7 = (! (((&call_tmp5)->addr != (&call_tmp6)->addr) || ((!(! (&call_tmp5)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp5)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&call_tmp6)->locale), INT64(0), INT32(0))))));
    if (call_tmp7) {
      initMethod = ArrayInit_serialInit;
    }
  }
  call_tmp8 = (((int64_t)(initMethod)) == ((int64_t)(ArrayInit_noInit)));
  if (call_tmp8) {
    goto _end_init_elts;
  } else {
    call_tmp9 = (((int64_t)(initMethod)) == ((int64_t)(ArrayInit_serialInit)));
    if (call_tmp9) {
      _ic__F1_high = ((int64_t)((s - INT64(1))));
      for (i = INT64(0); ((i <= _ic__F1_high)); i += INT64(1)) {
        chpl_macro_tmp_97.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_97.addr = nil;
        chpl_macro_tmp_98.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_98.addr = NULL;
        T2 = chpl_macro_tmp_98;
        (&_init_class_tmp_)->wrapped = T2;
        (&_init_class_tmp_)->isOwned = UINT8(false);
        (&this12)->nBits_DOLLAR__chpl = _init_class_tmp_;
        (&_init_class_tmp_2)->_pid = INT64(0);
        chpl_macro_tmp_99.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_99.addr = nil;
        chpl_macro_tmp_100.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_100.addr = NULL;
        T3 = chpl_macro_tmp_100;
        (&_init_class_tmp_2)->_instance = T3;
        (&_init_class_tmp_2)->_unowned = UINT8(false);
        (&this12)->bitmapSpace_chpl = _init_class_tmp_2;
        (&_init_class_tmp_3)->_pid = INT64(0);
        chpl_macro_tmp_101.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_101.addr = nil;
        chpl_macro_tmp_102.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_102.addr = NULL;
        T4 = chpl_macro_tmp_102;
        (&_init_class_tmp_3)->_instance = T4;
        (&_init_class_tmp_3)->_unowned = UINT8(false);
        (&this12)->bitmap_chpl = _init_class_tmp_3;
        ret_to_arg_ref_tmp_ = &ret_tmp;
        _syncvar(ret_to_arg_ref_tmp_);
        x2 = ret_tmp;
        _ref_tmp_ = &x2;
        chpl_macro_tmp_103.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_103.addr = _ref_tmp_;
        T5 = chpl_macro_tmp_103;
        chpl___ASSIGN_7(T5, ((uint64_t)(INT64(4096))));
        (&this12)->nBits_DOLLAR__chpl = x2;
        ret_to_arg_ref_tmp_2 = &ret_tmp2;
        chpl_build_bounded_range(INT64(0), INT64(63), ret_to_arg_ref_tmp_2);
        ret_to_arg_ref_tmp_3 = &ret_tmp3;
        chpl__buildDomainExpr2(&ret_tmp2, ret_to_arg_ref_tmp_3);
        i_x = &ret_tmp3;
        coerce_tmp = (i_x)->_unowned;
        if (coerce_tmp) {
          _ref_tmp_2 = i_x;
          chpl_macro_tmp_104.locale = chpl_gen_getLocaleID();
          chpl_macro_tmp_104.addr = _ref_tmp_2;
          T6 = chpl_macro_tmp_104;
          ret3 = chpl__initCopy2(T6);
          ret2 = ret3;
          goto _end_chpl__unalias;
        } else {
          ret2 = ret_tmp3;
          goto _end_chpl__unalias;
        }
        _end_chpl__unalias:;
        default_argbitmapSpace = ret2;
        (&this12)->bitmapSpace_chpl = ret2;
        _ref_tmp_3 = &default_argbitmapSpace;
        chpl_macro_tmp_105.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_105.addr = _ref_tmp_3;
        T7 = chpl_macro_tmp_105;
        call_tmp10 = chpl__ensureDomainExpr5(T7);
        i_dom = call_tmp10;
        call_tmp11 = chpl__buildArrayRuntimeType2(i_dom);
        T8 = (&call_tmp11)->dom;
        _runtime_type_tmp_ = T8;
        ret_to_arg_ref_tmp_4 = &retarg_tmp;
        chpl__convertRuntimeTypeToValue31(&_runtime_type_tmp_, ret_to_arg_ref_tmp_4);
        ret_tmp4 = retarg_tmp;
        (&this12)->bitmap_chpl = ret_tmp4;
        ret_to_arg_ref_tmp_5 = &ret_tmp5;
        _construct_Bitmap_chpl(&x2, &default_argbitmapSpace, &ret_tmp4, &this12, ret_to_arg_ref_tmp_5);
        *(x + i) = ret_tmp5;
      }
    } else {
      call_tmp12 = (((int64_t)(initMethod)) == ((int64_t)(ArrayInit_parallelInit)));
      if (call_tmp12) {
        ret_to_arg_ref_tmp_6 = &ret_tmp6;
        chpl_build_bounded_range(INT64(0), ((int64_t)((s - INT64(1)))), ret_to_arg_ref_tmp_6);
        _ic__F0_this = ret_tmp6;
        _ic__F1_x1__e1_args = x;
        this13 = &_ic__F0_this;
        chpl_macro_tmp_106.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_106.addr = this13;
        T9 = chpl_macro_tmp_106;
        call_tmp13 = length2(T9);
        len = call_tmp13;
        call_tmp14 = chpl_task_getSerial();
        if (call_tmp14) {
          ret4 = INT64(1);
          goto _end__if_fn50;
        } else {
          call_tmp15 = _computeNumChunks_chpl3(call_tmp13);
          ret4 = call_tmp15;
          goto _end__if_fn50;
        }
        _end__if_fn50:;
        numChunks = ret4;
        call_tmp16 = (ret4 <= INT64(1));
        if (call_tmp16) {
          _ic__F0_this2 = _ic__F0_this;
          ret5 = (&_ic__F0_this2)->_low;
          ret6 = (&_ic__F0_this2)->_high;
          end = ret6;
          for (i2 = ret5; ((i2 <= end)); i2 += INT64(1)) {
            x3 = _ic__F1_x1__e1_args;
            chpl_macro_tmp_107.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_107.addr = nil;
            chpl_macro_tmp_108.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_108.addr = NULL;
            T10 = chpl_macro_tmp_108;
            (&_init_class_tmp_4)->wrapped = T10;
            (&_init_class_tmp_4)->isOwned = UINT8(false);
            (&this14)->nBits_DOLLAR__chpl = _init_class_tmp_4;
            (&_init_class_tmp_5)->_pid = INT64(0);
            chpl_macro_tmp_109.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_109.addr = nil;
            chpl_macro_tmp_110.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_110.addr = NULL;
            T11 = chpl_macro_tmp_110;
            (&_init_class_tmp_5)->_instance = T11;
            (&_init_class_tmp_5)->_unowned = UINT8(false);
            (&this14)->bitmapSpace_chpl = _init_class_tmp_5;
            (&_init_class_tmp_6)->_pid = INT64(0);
            chpl_macro_tmp_111.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_111.addr = nil;
            chpl_macro_tmp_112.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_112.addr = NULL;
            T12 = chpl_macro_tmp_112;
            (&_init_class_tmp_6)->_instance = T12;
            (&_init_class_tmp_6)->_unowned = UINT8(false);
            (&this14)->bitmap_chpl = _init_class_tmp_6;
            ret_to_arg_ref_tmp_7 = &ret_tmp7;
            _syncvar(ret_to_arg_ref_tmp_7);
            x4 = ret_tmp7;
            _ref_tmp_4 = &x4;
            chpl_macro_tmp_113.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_113.addr = _ref_tmp_4;
            T13 = chpl_macro_tmp_113;
            chpl___ASSIGN_7(T13, ((uint64_t)(INT64(4096))));
            (&this14)->nBits_DOLLAR__chpl = x4;
            ret_to_arg_ref_tmp_8 = &ret_tmp8;
            chpl_build_bounded_range(INT64(0), INT64(63), ret_to_arg_ref_tmp_8);
            ret_to_arg_ref_tmp_9 = &ret_tmp9;
            chpl__buildDomainExpr2(&ret_tmp8, ret_to_arg_ref_tmp_9);
            i_x2 = &ret_tmp9;
            coerce_tmp2 = (i_x2)->_unowned;
            if (coerce_tmp2) {
              _ref_tmp_5 = i_x2;
              chpl_macro_tmp_114.locale = chpl_gen_getLocaleID();
              chpl_macro_tmp_114.addr = _ref_tmp_5;
              T14 = chpl_macro_tmp_114;
              ret8 = chpl__initCopy2(T14);
              ret7 = ret8;
              goto _end_chpl__unalias2;
            } else {
              ret7 = ret_tmp9;
              goto _end_chpl__unalias2;
            }
            _end_chpl__unalias2:;
            default_argbitmapSpace2 = ret7;
            (&this14)->bitmapSpace_chpl = ret7;
            _ref_tmp_6 = &default_argbitmapSpace2;
            chpl_macro_tmp_115.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_115.addr = _ref_tmp_6;
            T15 = chpl_macro_tmp_115;
            call_tmp17 = chpl__ensureDomainExpr5(T15);
            i_dom2 = call_tmp17;
            call_tmp18 = chpl__buildArrayRuntimeType2(i_dom2);
            T16 = (&call_tmp18)->dom;
            _runtime_type_tmp_2 = T16;
            ret_to_arg_ref_tmp_10 = &retarg_tmp2;
            chpl__convertRuntimeTypeToValue31(&_runtime_type_tmp_2, ret_to_arg_ref_tmp_10);
            ret_tmp10 = retarg_tmp2;
            (&this14)->bitmap_chpl = ret_tmp10;
            ret_to_arg_ref_tmp_11 = &ret_tmp11;
            _construct_Bitmap_chpl(&x4, &default_argbitmapSpace2, &ret_tmp10, &this14, ret_to_arg_ref_tmp_11);
            *(x3 + i2) = ret_tmp11;
          }
        } else {
          ret_to_arg_ref_tmp_12 = &ret_tmp12;
          chpl_build_low_bounded_range(INT64(0), ret_to_arg_ref_tmp_12);
          ret_to_arg_ref_tmp_13 = &ret_tmp13;
          chpl___POUND_(&ret_tmp12, ret4, ret_to_arg_ref_tmp_13);
          tmpIter = ret_tmp13;
          cast_tmp = chpl_here_alloc(sizeof(chpl_chpl___EndCount_atomic_int64_int64_t_object), INT16(2));
          this15 = ((chpl___EndCount_atomic_int64_int64_t)(cast_tmp));
          ((object)(this15))->chpl__cid = chpl__cid_chpl___EndCount_atomic_int64_int64_t;
          (this15)->i = _init_class_tmp_7;
          (this15)->taskCnt = INT64(0);
          (this15)->taskList = NULL;
          ret9 = type_tmp;
          _ref_tmp_7 = &ret9;
          atomic_init_int_least64_t(_ref_tmp_7, INT64(0));
          (&this16)->_v = ret9;
          ret_to_arg_ref_tmp_14 = &ret_tmp14;
          _construct_atomic_int64(ret9, &this16, ret_to_arg_ref_tmp_14);
          (this15)->i = ret_tmp14;
          (this15)->taskCnt = INT64(0);
          call_tmp19 = ((c_void_ptr)(nil));
          (this15)->taskList = call_tmp19;
          wrap_call_tmp = _construct__EndCount(&ret_tmp14, INT64(0), call_tmp19, this15);
          _coforallCount = wrap_call_tmp;
          _ref_tmp_8 = &tmpIter;
          chpl_macro_tmp_116.locale = chpl_gen_getLocaleID();
          chpl_macro_tmp_116.addr = _ref_tmp_8;
          T17 = chpl_macro_tmp_116;
          call_tmp20 = length2(T17);
          numTasks = call_tmp20;
          _upEndCount3(_coforallCount, call_tmp20);
          _ic__F0_this3 = tmpIter;
          end2 = (&_ic__F0_this3)->_high;
          for (i3 = (&_ic__F0_this3)->_low; ((i3 <= end2)); i3 += INT64(1)) {
            this17 = &_ic__F0_this;
            _args_forcoforall_fn = ((_class_localscoforall_fn23)(&chpl_macro_tmp_117));
            (_args_forcoforall_fn)->_0_x1__e1_args = _ic__F1_x1__e1_args;
            (_args_forcoforall_fn)->_1__yieldedIndex = i3;
            (_args_forcoforall_fn)->_2__coforallCount = _coforallCount;
            T18 = this17;
            (_args_forcoforall_fn)->_3_tmp = T18;
            (_args_forcoforall_fn)->_4_len = len;
            (_args_forcoforall_fn)->_5_numChunks = numChunks;
            _args_vforcoforall_fn = ((void*)(_args_forcoforall_fn));
            _taskListNodecoforall_fn = chpl_nodeID;
            /*** wrapcoforall_fn25 ***/ chpl_taskListAddCoStmt(INT32(-2), INT64(154), ((chpl_task_bundle_p)(_args_vforcoforall_fn)), sizeof(chpl__class_localscoforall_fn23_object), &((_coforallCount)->taskList), _taskListNodecoforall_fn, INT64(740), INT32(2));
          }
          _waitEndCount3(_coforallCount, numTasks);
          _field_destructor_tmp_ = &((_coforallCount)->i);
          call_tmp21 = &((_field_destructor_tmp_)->_v);
          atomic_destroy_int_least64_t(call_tmp21);
          call_tmp22 = chpl_gen_getLocaleID();
          rvfDerefTmp = _coforallCount;
          isdirect = chpl_doDirectExecuteOn(&call_tmp22);
          if (isdirect) {
            chpl_macro_tmp_118.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_118.addr = rvfDerefTmp;
            T19 = chpl_macro_tmp_118;
            on_fn123(T19);
          } else {
            _args_foron_fn = ((_class_localson_fn104)(&chpl_macro_tmp_119));
            (_args_foron_fn)->_0_rvfDerefTmp = call_tmp22;
            chpl_macro_tmp_120.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_120.addr = rvfDerefTmp;
            T20 = chpl_macro_tmp_120;
            (_args_foron_fn)->_1_rvfDerefTmp = T20;
            _args_vforon_fn = ((void*)(_args_foron_fn));
            /*** wrapon_fn131 ***/ chpl_executeOn(&call_tmp22, INT32(196), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn104_object), INT64(1227), INT32(2));
          }
        }
      } else {
        halt(&local__str_literal_177 /* "ArrayInit.heuristicInit should have been made concrete" */, INT64(746), INT32(2));
      }
    }
  }
  _end_init_elts:;
  return;
}

/* ChapelBase.chpl:671 */
static void init_elts2(_ddata__remoteAccessData_Bitmap_1_int64_t_F_F x,
                       int64_t s) {
  string local__str_literal_177;
  chpl____wide_heap_DummyLocale local_dummyLocale = {CHPL_LOCALEID_T_INIT, NULL};
  int32_t local_c_sublocid_any;
  ArrayInit initMethod;
  ArrayInit ret;
  chpl_bool call_tmp2;
  chpl_bool call_tmp3;
  chpl_localeID_t _autoCopy_tmp_;
  chpl____wide_locale call_tmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DummyLocale T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp7;
  chpl_bool call_tmp8;
  chpl_bool call_tmp9;
  int64_t _ic__F1_high;
  int64_t i;
  _remoteAccessData_Bitmap_1_int64_t_F_F this12;
  _tuple_1_star_int64_t _init_class_tmp_;
  _tuple_1_star_int64_t _init_class_tmp_2;
  _tuple_1_star_int64_t _init_class_tmp_3;
  chpl____wide__ddata_Bitmap T2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ddata_Bitmap T3 = {CHPL_LOCALEID_T_INIT, NULL};
  _tuple_1_star_int64_t tup;
  _tuple_1_star_int64_t tup2;
  _tuple_1_star_int64_t tup3;
  _ddata_Bitmap call_tmp10 = NULL;
  chpl____wide__ddata_Bitmap T4 = {CHPL_LOCALEID_T_INIT, NULL};
  _ddata_Bitmap call_tmp11 = NULL;
  chpl____wide__ddata_Bitmap T5 = {CHPL_LOCALEID_T_INIT, NULL};
  _remoteAccessData_Bitmap_1_int64_t_F_F ret_tmp;
  _ref__remoteAccessData_Bitmap_1_int64_t_F_F ret_to_arg_ref_tmp_ = NULL;
  chpl_bool call_tmp12;
  range_int64_t_bounded_F ret_tmp2;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_2 = NULL;
  range_int64_t_bounded_F _ic__F0_this;
  _ddata__remoteAccessData_Bitmap_1_int64_t_F_F _ic__F1_x1__e1_args = NULL;
  int64_t len;
  int64_t call_tmp13;
  _ref_range_int64_t_bounded_F this13 = NULL;
  chpl____wide__ref_range_int64_t_bounded_F T6 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t numChunks;
  int64_t ret2;
  chpl_bool call_tmp14;
  int64_t call_tmp15;
  chpl_bool call_tmp16;
  range_int64_t_bounded_F _ic__F0_this2;
  int64_t i2;
  int64_t ret3;
  int64_t end;
  int64_t ret4;
  _ddata__remoteAccessData_Bitmap_1_int64_t_F_F x2 = NULL;
  _remoteAccessData_Bitmap_1_int64_t_F_F this14;
  _tuple_1_star_int64_t _init_class_tmp_4;
  _tuple_1_star_int64_t _init_class_tmp_5;
  _tuple_1_star_int64_t _init_class_tmp_6;
  chpl____wide__ddata_Bitmap T7 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ddata_Bitmap T8 = {CHPL_LOCALEID_T_INIT, NULL};
  _tuple_1_star_int64_t tup4;
  _tuple_1_star_int64_t tup5;
  _tuple_1_star_int64_t tup6;
  _ddata_Bitmap call_tmp17 = NULL;
  chpl____wide__ddata_Bitmap T9 = {CHPL_LOCALEID_T_INIT, NULL};
  _ddata_Bitmap call_tmp18 = NULL;
  chpl____wide__ddata_Bitmap T10 = {CHPL_LOCALEID_T_INIT, NULL};
  _remoteAccessData_Bitmap_1_int64_t_F_F ret_tmp3;
  _ref__remoteAccessData_Bitmap_1_int64_t_F_F ret_to_arg_ref_tmp_3 = NULL;
  range_int64_t_bounded_F tmpIter;
  range_int64_t_boundedLow_F ret_tmp4;
  _ref_range_int64_t_boundedLow_F ret_to_arg_ref_tmp_4 = NULL;
  range_int64_t_bounded_F ret_tmp5;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_5 = NULL;
  chpl___EndCount_atomic_int64_int64_t _coforallCount = NULL;
  chpl___EndCount_atomic_int64_int64_t this15 = NULL;
  c_void_ptr cast_tmp;
  atomic_int64 _init_class_tmp_7;
  atomic_int64 this16;
  atomic_int_least64_t ret5;
  atomic_int_least64_t type_tmp;
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
  atomic_int64 ret_tmp6;
  _ref_atomic_int64 ret_to_arg_ref_tmp_6 = NULL;
  c_void_ptr call_tmp19;
  chpl___EndCount_atomic_int64_int64_t wrap_call_tmp = NULL;
  int64_t numTasks;
  _ref_range_int64_t_bounded_F _ref_tmp_2 = NULL;
  int64_t call_tmp20;
  chpl____wide__ref_range_int64_t_bounded_F T11 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F _ic__F0_this3;
  int64_t i3;
  int64_t end2;
  _ref_range_int64_t_bounded_F this17 = NULL;
  _class_localscoforall_fn30 _args_forcoforall_fn = NULL;
  _ref_range_int64_t_bounded_F T12 = NULL;
  c_void_ptr _args_vforcoforall_fn;
  int64_t _taskListNodecoforall_fn;
  _ref_atomic_int64 _field_destructor_tmp_ = NULL;
  _ref_atomic_int_least64_t call_tmp21 = NULL;
  chpl_localeID_t call_tmp22;
  chpl___EndCount_atomic_int64_int64_t rvfDerefTmp = NULL;
  chpl_bool isdirect;
  chpl____wide__EndCount_atomic_int64_int64_t T13 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn104 _args_foron_fn = NULL;
  chpl____wide__EndCount_atomic_int64_int64_t T14 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn;
  chpl____wide_object chpl_macro_tmp_121;
  chpl____wide__ref__wide_DummyLocale chpl_macro_tmp_122;
  chpl____wide_object chpl_macro_tmp_123;
  chpl____wide__nilType chpl_macro_tmp_124;
  chpl____wide__ddata_Bitmap chpl_macro_tmp_125;
  chpl____wide__nilType chpl_macro_tmp_126;
  chpl____wide__ddata_Bitmap chpl_macro_tmp_127;
  chpl____wide__ddata_Bitmap chpl_macro_tmp_128;
  chpl____wide__ddata_Bitmap chpl_macro_tmp_129;
  chpl____wide__ref_range_int64_t_bounded_F chpl_macro_tmp_130;
  chpl____wide__nilType chpl_macro_tmp_131;
  chpl____wide__ddata_Bitmap chpl_macro_tmp_132;
  chpl____wide__nilType chpl_macro_tmp_133;
  chpl____wide__ddata_Bitmap chpl_macro_tmp_134;
  chpl____wide__ddata_Bitmap chpl_macro_tmp_135;
  chpl____wide__ddata_Bitmap chpl_macro_tmp_136;
  chpl____wide__ref_range_int64_t_bounded_F chpl_macro_tmp_137;
  chpl__class_localscoforall_fn30_object chpl_macro_tmp_138;
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_139;
  chpl__class_localson_fn104_object chpl_macro_tmp_140;
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_141;
  local__str_literal_177 /* "ArrayInit.heuristicInit should have been made concrete" */ = _str_literal_177 /* "ArrayInit.heuristicInit should have been made concrete" */;
  local_dummyLocale = dummyLocale;
  local_c_sublocid_any = c_sublocid_any;
  ret = ArrayInit_heuristicInit;
  initMethod = ret;
  call_tmp2 = (((int64_t)(ret)) == ((int64_t)(ArrayInit_heuristicInit)));
  if (call_tmp2) {
    initMethod = ArrayInit_serialInit;
  }
  call_tmp3 = (((int64_t)(initMethod)) == ((int64_t)(ArrayInit_parallelInit)));
  if (call_tmp3) {
    _autoCopy_tmp_ = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any);
    call_tmp4 = chpl_localeID_to_locale(&_autoCopy_tmp_);
    chpl_macro_tmp_121.locale = (&call_tmp4)->locale;
    chpl_macro_tmp_121.addr = ((object)((&call_tmp4)->addr));
    call_tmp5 = chpl_macro_tmp_121;
    chpl_macro_tmp_122.locale = (&local_dummyLocale)->locale;
    chpl_macro_tmp_122.addr = &(((&local_dummyLocale)->addr)->value);
    chpl_gen_comm_get(((void*)(&T)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_122).locale), INT64(0), INT32(0)), (chpl_macro_tmp_122).addr, sizeof(chpl____wide_DummyLocale), -1, COMMID(8), INT64(563), INT64(25));
    chpl_macro_tmp_123.locale = (&T)->locale;
    chpl_macro_tmp_123.addr = ((object)((&T)->addr));
    call_tmp6 = chpl_macro_tmp_123;
    call_tmp7 = (! (((&call_tmp5)->addr != (&call_tmp6)->addr) || ((!(! (&call_tmp5)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp5)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&call_tmp6)->locale), INT64(0), INT32(0))))));
    if (call_tmp7) {
      initMethod = ArrayInit_serialInit;
    }
  }
  call_tmp8 = (((int64_t)(initMethod)) == ((int64_t)(ArrayInit_noInit)));
  if (call_tmp8) {
    goto _end_init_elts;
  } else {
    call_tmp9 = (((int64_t)(initMethod)) == ((int64_t)(ArrayInit_serialInit)));
    if (call_tmp9) {
      _ic__F1_high = ((int64_t)((s - INT64(1))));
      for (i = INT64(0); ((i <= _ic__F1_high)); i += INT64(1)) {
        *(_init_class_tmp_ + INT64(0)) = INT64(0);
        *((&this12)->off + INT64(0)) = *(_init_class_tmp_ + INT64(0));
        *(_init_class_tmp_2 + INT64(0)) = INT64(0);
        *((&this12)->blk + INT64(0)) = *(_init_class_tmp_2 + INT64(0));
        *(_init_class_tmp_3 + INT64(0)) = INT64(0);
        *((&this12)->str + INT64(0)) = *(_init_class_tmp_3 + INT64(0));
        (&this12)->origin = INT64(0);
        (&this12)->factoredOffs = INT64(0);
        chpl_macro_tmp_124.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_124.addr = nil;
        chpl_macro_tmp_125.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_125.addr = NULL;
        T2 = chpl_macro_tmp_125;
        (&this12)->data = T2;
        chpl_macro_tmp_126.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_126.addr = nil;
        chpl_macro_tmp_127.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_127.addr = NULL;
        T3 = chpl_macro_tmp_127;
        (&this12)->shiftedData = T3;
        *(tup + INT64(0)) = INT64(0);
        *((&this12)->off + INT64(0)) = *(tup + INT64(0));
        *(tup2 + INT64(0)) = INT64(0);
        *((&this12)->blk + INT64(0)) = *(tup2 + INT64(0));
        *(tup3 + INT64(0)) = INT64(0);
        *((&this12)->str + INT64(0)) = *(tup3 + INT64(0));
        (&this12)->origin = INT64(0);
        (&this12)->factoredOffs = INT64(0);
        call_tmp10 = ((_ddata_Bitmap)(nil));
        chpl_macro_tmp_128.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_128.addr = call_tmp10;
        T4 = chpl_macro_tmp_128;
        (&this12)->data = T4;
        call_tmp11 = ((_ddata_Bitmap)(nil));
        chpl_macro_tmp_129.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_129.addr = call_tmp11;
        T5 = chpl_macro_tmp_129;
        (&this12)->shiftedData = T5;
        ret_to_arg_ref_tmp_ = &ret_tmp;
        _construct__remoteAccessData2(&tup, &tup2, &tup3, INT64(0), INT64(0), call_tmp10, call_tmp11, &this12, ret_to_arg_ref_tmp_);
        *(x + i) = ret_tmp;
      }
    } else {
      call_tmp12 = (((int64_t)(initMethod)) == ((int64_t)(ArrayInit_parallelInit)));
      if (call_tmp12) {
        ret_to_arg_ref_tmp_2 = &ret_tmp2;
        chpl_build_bounded_range(INT64(0), ((int64_t)((s - INT64(1)))), ret_to_arg_ref_tmp_2);
        _ic__F0_this = ret_tmp2;
        _ic__F1_x1__e1_args = x;
        this13 = &_ic__F0_this;
        chpl_macro_tmp_130.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_130.addr = this13;
        T6 = chpl_macro_tmp_130;
        call_tmp13 = length2(T6);
        len = call_tmp13;
        call_tmp14 = chpl_task_getSerial();
        if (call_tmp14) {
          ret2 = INT64(1);
          goto _end__if_fn50;
        } else {
          call_tmp15 = _computeNumChunks_chpl3(call_tmp13);
          ret2 = call_tmp15;
          goto _end__if_fn50;
        }
        _end__if_fn50:;
        numChunks = ret2;
        call_tmp16 = (ret2 <= INT64(1));
        if (call_tmp16) {
          _ic__F0_this2 = _ic__F0_this;
          ret3 = (&_ic__F0_this2)->_low;
          ret4 = (&_ic__F0_this2)->_high;
          end = ret4;
          x2 = _ic__F1_x1__e1_args;
          for (i2 = ret3; ((i2 <= end)); i2 += INT64(1)) {
            *(_init_class_tmp_4 + INT64(0)) = INT64(0);
            *((&this14)->off + INT64(0)) = *(_init_class_tmp_4 + INT64(0));
            *(_init_class_tmp_5 + INT64(0)) = INT64(0);
            *((&this14)->blk + INT64(0)) = *(_init_class_tmp_5 + INT64(0));
            *(_init_class_tmp_6 + INT64(0)) = INT64(0);
            *((&this14)->str + INT64(0)) = *(_init_class_tmp_6 + INT64(0));
            (&this14)->origin = INT64(0);
            (&this14)->factoredOffs = INT64(0);
            chpl_macro_tmp_131.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_131.addr = nil;
            chpl_macro_tmp_132.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_132.addr = NULL;
            T7 = chpl_macro_tmp_132;
            (&this14)->data = T7;
            chpl_macro_tmp_133.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_133.addr = nil;
            chpl_macro_tmp_134.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_134.addr = NULL;
            T8 = chpl_macro_tmp_134;
            (&this14)->shiftedData = T8;
            *(tup4 + INT64(0)) = INT64(0);
            *((&this14)->off + INT64(0)) = *(tup4 + INT64(0));
            *(tup5 + INT64(0)) = INT64(0);
            *((&this14)->blk + INT64(0)) = *(tup5 + INT64(0));
            *(tup6 + INT64(0)) = INT64(0);
            *((&this14)->str + INT64(0)) = *(tup6 + INT64(0));
            (&this14)->origin = INT64(0);
            (&this14)->factoredOffs = INT64(0);
            call_tmp17 = ((_ddata_Bitmap)(nil));
            chpl_macro_tmp_135.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_135.addr = call_tmp17;
            T9 = chpl_macro_tmp_135;
            (&this14)->data = T9;
            call_tmp18 = ((_ddata_Bitmap)(nil));
            chpl_macro_tmp_136.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_136.addr = call_tmp18;
            T10 = chpl_macro_tmp_136;
            (&this14)->shiftedData = T10;
            ret_to_arg_ref_tmp_3 = &ret_tmp3;
            _construct__remoteAccessData2(&tup4, &tup5, &tup6, INT64(0), INT64(0), call_tmp17, call_tmp18, &this14, ret_to_arg_ref_tmp_3);
            *(x2 + i2) = ret_tmp3;
          }
        } else {
          ret_to_arg_ref_tmp_4 = &ret_tmp4;
          chpl_build_low_bounded_range(INT64(0), ret_to_arg_ref_tmp_4);
          ret_to_arg_ref_tmp_5 = &ret_tmp5;
          chpl___POUND_(&ret_tmp4, ret2, ret_to_arg_ref_tmp_5);
          tmpIter = ret_tmp5;
          cast_tmp = chpl_here_alloc(sizeof(chpl_chpl___EndCount_atomic_int64_int64_t_object), INT16(2));
          this15 = ((chpl___EndCount_atomic_int64_int64_t)(cast_tmp));
          ((object)(this15))->chpl__cid = chpl__cid_chpl___EndCount_atomic_int64_int64_t;
          (this15)->i = _init_class_tmp_7;
          (this15)->taskCnt = INT64(0);
          (this15)->taskList = NULL;
          ret5 = type_tmp;
          _ref_tmp_ = &ret5;
          atomic_init_int_least64_t(_ref_tmp_, INT64(0));
          (&this16)->_v = ret5;
          ret_to_arg_ref_tmp_6 = &ret_tmp6;
          _construct_atomic_int64(ret5, &this16, ret_to_arg_ref_tmp_6);
          (this15)->i = ret_tmp6;
          (this15)->taskCnt = INT64(0);
          call_tmp19 = ((c_void_ptr)(nil));
          (this15)->taskList = call_tmp19;
          wrap_call_tmp = _construct__EndCount(&ret_tmp6, INT64(0), call_tmp19, this15);
          _coforallCount = wrap_call_tmp;
          _ref_tmp_2 = &tmpIter;
          chpl_macro_tmp_137.locale = chpl_gen_getLocaleID();
          chpl_macro_tmp_137.addr = _ref_tmp_2;
          T11 = chpl_macro_tmp_137;
          call_tmp20 = length2(T11);
          numTasks = call_tmp20;
          _upEndCount3(_coforallCount, call_tmp20);
          _ic__F0_this3 = tmpIter;
          end2 = (&_ic__F0_this3)->_high;
          for (i3 = (&_ic__F0_this3)->_low; ((i3 <= end2)); i3 += INT64(1)) {
            this17 = &_ic__F0_this;
            _args_forcoforall_fn = ((_class_localscoforall_fn30)(&chpl_macro_tmp_138));
            (_args_forcoforall_fn)->_0_x1__e1_args = _ic__F1_x1__e1_args;
            (_args_forcoforall_fn)->_1__coforallCount = _coforallCount;
            T12 = this17;
            (_args_forcoforall_fn)->_2_tmp = T12;
            (_args_forcoforall_fn)->_3_len = len;
            (_args_forcoforall_fn)->_4_numChunks = numChunks;
            (_args_forcoforall_fn)->_5__yieldedIndex = i3;
            _args_vforcoforall_fn = ((void*)(_args_forcoforall_fn));
            _taskListNodecoforall_fn = chpl_nodeID;
            /*** wrapcoforall_fn26 ***/ chpl_taskListAddCoStmt(INT32(-2), INT64(155), ((chpl_task_bundle_p)(_args_vforcoforall_fn)), sizeof(chpl__class_localscoforall_fn30_object), &((_coforallCount)->taskList), _taskListNodecoforall_fn, INT64(740), INT32(2));
          }
          _waitEndCount3(_coforallCount, numTasks);
          _field_destructor_tmp_ = &((_coforallCount)->i);
          call_tmp21 = &((_field_destructor_tmp_)->_v);
          atomic_destroy_int_least64_t(call_tmp21);
          call_tmp22 = chpl_gen_getLocaleID();
          rvfDerefTmp = _coforallCount;
          isdirect = chpl_doDirectExecuteOn(&call_tmp22);
          if (isdirect) {
            chpl_macro_tmp_139.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_139.addr = rvfDerefTmp;
            T13 = chpl_macro_tmp_139;
            on_fn123(T13);
          } else {
            _args_foron_fn = ((_class_localson_fn104)(&chpl_macro_tmp_140));
            (_args_foron_fn)->_0_rvfDerefTmp = call_tmp22;
            chpl_macro_tmp_141.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_141.addr = rvfDerefTmp;
            T14 = chpl_macro_tmp_141;
            (_args_foron_fn)->_1_rvfDerefTmp = T14;
            _args_vforon_fn = ((void*)(_args_foron_fn));
            /*** wrapon_fn131 ***/ chpl_executeOn(&call_tmp22, INT32(196), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn104_object), INT64(1227), INT32(2));
          }
        }
      } else {
        halt(&local__str_literal_177 /* "ArrayInit.heuristicInit should have been made concrete" */, INT64(746), INT32(2));
      }
    }
  }
  _end_init_elts:;
  return;
}

/* ChapelBase.chpl:671 */
static void init_elts11(_ddata_LocCyclicArr__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F x,
                        int64_t s) {
  string local__str_literal_177;
  chpl____wide_heap_DummyLocale local_dummyLocale = {CHPL_LOCALEID_T_INIT, NULL};
  int32_t local_c_sublocid_any;
  ArrayInit initMethod;
  ArrayInit ret;
  chpl_bool call_tmp2;
  chpl_bool call_tmp3;
  chpl_localeID_t _autoCopy_tmp_;
  chpl____wide_locale call_tmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DummyLocale T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp7;
  chpl_bool call_tmp8;
  chpl_bool call_tmp9;
  int64_t _ic__F1_high;
  int64_t i;
  LocCyclicArr__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F_chpl call_tmp10 = NULL;
  chpl____wide_LocCyclicArr__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F T2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp11;
  range_int64_t_bounded_F ret_tmp;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
  range_int64_t_bounded_F _ic__F0_this;
  _ddata_LocCyclicArr__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F _ic__F1_x1__e1_args = NULL;
  int64_t len;
  int64_t call_tmp12;
  _ref_range_int64_t_bounded_F this12 = NULL;
  chpl____wide__ref_range_int64_t_bounded_F T3 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t numChunks;
  int64_t ret2;
  chpl_bool call_tmp13;
  int64_t call_tmp14;
  chpl_bool call_tmp15;
  range_int64_t_bounded_F _ic__F0_this2;
  int64_t i2;
  int64_t end;
  _ddata_LocCyclicArr__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F x2 = NULL;
  LocCyclicArr__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F_chpl call_tmp16 = NULL;
  chpl____wide_LocCyclicArr__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F T4 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F tmpIter;
  range_int64_t_boundedLow_F ret_tmp2;
  _ref_range_int64_t_boundedLow_F ret_to_arg_ref_tmp_2 = NULL;
  range_int64_t_bounded_F ret_tmp3;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_3 = NULL;
  chpl___EndCount_atomic_int64_int64_t _coforallCount = NULL;
  chpl___EndCount_atomic_int64_int64_t this13 = NULL;
  c_void_ptr cast_tmp;
  atomic_int64 _init_class_tmp_;
  atomic_int64 this14;
  atomic_int_least64_t ret3;
  atomic_int_least64_t type_tmp;
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
  atomic_int64 ret_tmp4;
  _ref_atomic_int64 ret_to_arg_ref_tmp_4 = NULL;
  c_void_ptr call_tmp17;
  chpl___EndCount_atomic_int64_int64_t wrap_call_tmp = NULL;
  int64_t numTasks;
  _ref_range_int64_t_bounded_F _ref_tmp_2 = NULL;
  int64_t call_tmp18;
  chpl____wide__ref_range_int64_t_bounded_F T5 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F _ic__F0_this3;
  int64_t i3;
  int64_t end2;
  _ref_range_int64_t_bounded_F this15 = NULL;
  _class_localscoforall_fn24 _args_forcoforall_fn = NULL;
  _ref_range_int64_t_bounded_F T6 = NULL;
  c_void_ptr _args_vforcoforall_fn;
  int64_t _taskListNodecoforall_fn;
  _ref_atomic_int64 _field_destructor_tmp_ = NULL;
  _ref_atomic_int_least64_t call_tmp19 = NULL;
  chpl_localeID_t call_tmp20;
  chpl___EndCount_atomic_int64_int64_t rvfDerefTmp = NULL;
  chpl_bool isdirect;
  chpl____wide__EndCount_atomic_int64_int64_t T7 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn104 _args_foron_fn = NULL;
  chpl____wide__EndCount_atomic_int64_int64_t T8 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn;
  chpl____wide_object chpl_macro_tmp_142;
  chpl____wide__ref__wide_DummyLocale chpl_macro_tmp_143;
  chpl____wide_object chpl_macro_tmp_144;
  chpl____wide_LocCyclicArr__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F chpl_macro_tmp_145;
  chpl____wide__ref_range_int64_t_bounded_F chpl_macro_tmp_146;
  chpl____wide_LocCyclicArr__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F chpl_macro_tmp_147;
  chpl____wide__ref_range_int64_t_bounded_F chpl_macro_tmp_148;
  chpl__class_localscoforall_fn24_object chpl_macro_tmp_149;
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_150;
  chpl__class_localson_fn104_object chpl_macro_tmp_151;
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_152;
  local__str_literal_177 /* "ArrayInit.heuristicInit should have been made concrete" */ = _str_literal_177 /* "ArrayInit.heuristicInit should have been made concrete" */;
  local_dummyLocale = dummyLocale;
  local_c_sublocid_any = c_sublocid_any;
  ret = ArrayInit_heuristicInit;
  initMethod = ret;
  call_tmp2 = (((int64_t)(ret)) == ((int64_t)(ArrayInit_heuristicInit)));
  if (call_tmp2) {
    initMethod = ArrayInit_serialInit;
  }
  call_tmp3 = (((int64_t)(initMethod)) == ((int64_t)(ArrayInit_parallelInit)));
  if (call_tmp3) {
    _autoCopy_tmp_ = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any);
    call_tmp4 = chpl_localeID_to_locale(&_autoCopy_tmp_);
    chpl_macro_tmp_142.locale = (&call_tmp4)->locale;
    chpl_macro_tmp_142.addr = ((object)((&call_tmp4)->addr));
    call_tmp5 = chpl_macro_tmp_142;
    chpl_macro_tmp_143.locale = (&local_dummyLocale)->locale;
    chpl_macro_tmp_143.addr = &(((&local_dummyLocale)->addr)->value);
    chpl_gen_comm_get(((void*)(&T)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_143).locale), INT64(0), INT32(0)), (chpl_macro_tmp_143).addr, sizeof(chpl____wide_DummyLocale), -1, COMMID(9), INT64(563), INT64(25));
    chpl_macro_tmp_144.locale = (&T)->locale;
    chpl_macro_tmp_144.addr = ((object)((&T)->addr));
    call_tmp6 = chpl_macro_tmp_144;
    call_tmp7 = (! (((&call_tmp5)->addr != (&call_tmp6)->addr) || ((!(! (&call_tmp5)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp5)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&call_tmp6)->locale), INT64(0), INT32(0))))));
    if (call_tmp7) {
      initMethod = ArrayInit_serialInit;
    }
  }
  call_tmp8 = (((int64_t)(initMethod)) == ((int64_t)(ArrayInit_noInit)));
  if (call_tmp8) {
    goto _end_init_elts;
  } else {
    call_tmp9 = (((int64_t)(initMethod)) == ((int64_t)(ArrayInit_serialInit)));
    if (call_tmp9) {
      _ic__F1_high = ((int64_t)((s - INT64(1))));
      for (i = INT64(0); ((i <= _ic__F1_high)); i += INT64(1)) {
        call_tmp10 = ((LocCyclicArr__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F_chpl)(nil));
        chpl_macro_tmp_145.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_145.addr = call_tmp10;
        T2 = chpl_macro_tmp_145;
        *(x + i) = T2;
      }
    } else {
      call_tmp11 = (((int64_t)(initMethod)) == ((int64_t)(ArrayInit_parallelInit)));
      if (call_tmp11) {
        ret_to_arg_ref_tmp_ = &ret_tmp;
        chpl_build_bounded_range(INT64(0), ((int64_t)((s - INT64(1)))), ret_to_arg_ref_tmp_);
        _ic__F0_this = ret_tmp;
        _ic__F1_x1__e1_args = x;
        this12 = &_ic__F0_this;
        chpl_macro_tmp_146.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_146.addr = this12;
        T3 = chpl_macro_tmp_146;
        call_tmp12 = length2(T3);
        len = call_tmp12;
        call_tmp13 = chpl_task_getSerial();
        if (call_tmp13) {
          ret2 = INT64(1);
          goto _end__if_fn50;
        } else {
          call_tmp14 = _computeNumChunks_chpl3(call_tmp12);
          ret2 = call_tmp14;
          goto _end__if_fn50;
        }
        _end__if_fn50:;
        numChunks = ret2;
        call_tmp15 = (ret2 <= INT64(1));
        if (call_tmp15) {
          _ic__F0_this2 = _ic__F0_this;
          end = (&_ic__F0_this2)->_high;
          x2 = _ic__F1_x1__e1_args;
          for (i2 = (&_ic__F0_this2)->_low; ((i2 <= end)); i2 += INT64(1)) {
            call_tmp16 = ((LocCyclicArr__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F_chpl)(nil));
            chpl_macro_tmp_147.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_147.addr = call_tmp16;
            T4 = chpl_macro_tmp_147;
            *(x2 + i2) = T4;
          }
        } else {
          ret_to_arg_ref_tmp_2 = &ret_tmp2;
          chpl_build_low_bounded_range(INT64(0), ret_to_arg_ref_tmp_2);
          ret_to_arg_ref_tmp_3 = &ret_tmp3;
          chpl___POUND_(&ret_tmp2, ret2, ret_to_arg_ref_tmp_3);
          tmpIter = ret_tmp3;
          cast_tmp = chpl_here_alloc(sizeof(chpl_chpl___EndCount_atomic_int64_int64_t_object), INT16(2));
          this13 = ((chpl___EndCount_atomic_int64_int64_t)(cast_tmp));
          ((object)(this13))->chpl__cid = chpl__cid_chpl___EndCount_atomic_int64_int64_t;
          (this13)->i = _init_class_tmp_;
          (this13)->taskCnt = INT64(0);
          (this13)->taskList = NULL;
          ret3 = type_tmp;
          _ref_tmp_ = &ret3;
          atomic_init_int_least64_t(_ref_tmp_, INT64(0));
          (&this14)->_v = ret3;
          ret_to_arg_ref_tmp_4 = &ret_tmp4;
          _construct_atomic_int64(ret3, &this14, ret_to_arg_ref_tmp_4);
          (this13)->i = ret_tmp4;
          (this13)->taskCnt = INT64(0);
          call_tmp17 = ((c_void_ptr)(nil));
          (this13)->taskList = call_tmp17;
          wrap_call_tmp = _construct__EndCount(&ret_tmp4, INT64(0), call_tmp17, this13);
          _coforallCount = wrap_call_tmp;
          _ref_tmp_2 = &tmpIter;
          chpl_macro_tmp_148.locale = chpl_gen_getLocaleID();
          chpl_macro_tmp_148.addr = _ref_tmp_2;
          T5 = chpl_macro_tmp_148;
          call_tmp18 = length2(T5);
          numTasks = call_tmp18;
          _upEndCount3(_coforallCount, call_tmp18);
          _ic__F0_this3 = tmpIter;
          end2 = (&_ic__F0_this3)->_high;
          for (i3 = (&_ic__F0_this3)->_low; ((i3 <= end2)); i3 += INT64(1)) {
            this15 = &_ic__F0_this;
            _args_forcoforall_fn = ((_class_localscoforall_fn24)(&chpl_macro_tmp_149));
            (_args_forcoforall_fn)->_0_x1__e1_args = _ic__F1_x1__e1_args;
            (_args_forcoforall_fn)->_1_numChunks = numChunks;
            (_args_forcoforall_fn)->_2__yieldedIndex = i3;
            (_args_forcoforall_fn)->_3__coforallCount = _coforallCount;
            T6 = this15;
            (_args_forcoforall_fn)->_4_tmp = T6;
            (_args_forcoforall_fn)->_5_len = len;
            _args_vforcoforall_fn = ((void*)(_args_forcoforall_fn));
            _taskListNodecoforall_fn = chpl_nodeID;
            /*** wrapcoforall_fn20 ***/ chpl_taskListAddCoStmt(INT32(-2), INT64(149), ((chpl_task_bundle_p)(_args_vforcoforall_fn)), sizeof(chpl__class_localscoforall_fn24_object), &((_coforallCount)->taskList), _taskListNodecoforall_fn, INT64(740), INT32(2));
          }
          _waitEndCount3(_coforallCount, numTasks);
          _field_destructor_tmp_ = &((_coforallCount)->i);
          call_tmp19 = &((_field_destructor_tmp_)->_v);
          atomic_destroy_int_least64_t(call_tmp19);
          call_tmp20 = chpl_gen_getLocaleID();
          rvfDerefTmp = _coforallCount;
          isdirect = chpl_doDirectExecuteOn(&call_tmp20);
          if (isdirect) {
            chpl_macro_tmp_150.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_150.addr = rvfDerefTmp;
            T7 = chpl_macro_tmp_150;
            on_fn123(T7);
          } else {
            _args_foron_fn = ((_class_localson_fn104)(&chpl_macro_tmp_151));
            (_args_foron_fn)->_0_rvfDerefTmp = call_tmp20;
            chpl_macro_tmp_152.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_152.addr = rvfDerefTmp;
            T8 = chpl_macro_tmp_152;
            (_args_foron_fn)->_1_rvfDerefTmp = T8;
            _args_vforon_fn = ((void*)(_args_foron_fn));
            /*** wrapon_fn131 ***/ chpl_executeOn(&call_tmp20, INT32(196), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn104_object), INT64(1227), INT32(2));
          }
        }
      } else {
        halt(&local__str_literal_177 /* "ArrayInit.heuristicInit should have been made concrete" */, INT64(746), INT32(2));
      }
    }
  }
  _end_init_elts:;
  return;
}

/* ChapelBase.chpl:671 */
static void init_elts4(_ddata_uint64_t x,
                       int64_t s) {
  string local__str_literal_177;
  chpl____wide_heap_DummyLocale local_dummyLocale = {CHPL_LOCALEID_T_INIT, NULL};
  int32_t local_c_sublocid_any;
  ArrayInit initMethod;
  ArrayInit ret;
  chpl_bool call_tmp2;
  chpl_bool call_tmp3;
  chpl_bool call_tmp4;
  chpl_localeID_t _autoCopy_tmp_;
  chpl____wide_locale call_tmp5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DummyLocale T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp7 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp8;
  chpl_bool call_tmp9;
  chpl_bool call_tmp10;
  int64_t _ic__F1_high;
  int64_t i;
  chpl_bool call_tmp11;
  range_int64_t_bounded_F ret_tmp;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
  range_int64_t_bounded_F _ic__F0_this;
  _ddata_uint64_t _ic__F1_x1__e1_args = NULL;
  int64_t len;
  int64_t call_tmp12;
  _ref_range_int64_t_bounded_F this12 = NULL;
  chpl____wide__ref_range_int64_t_bounded_F T2 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t numChunks;
  int64_t ret2;
  chpl_bool call_tmp13;
  int64_t call_tmp14;
  chpl_bool call_tmp15;
  range_int64_t_bounded_F _ic__F0_this2;
  int64_t i2;
  int64_t ret3;
  int64_t end;
  int64_t ret4;
  _ddata_uint64_t x2 = NULL;
  range_int64_t_bounded_F tmpIter;
  range_int64_t_boundedLow_F ret_tmp2;
  _ref_range_int64_t_boundedLow_F ret_to_arg_ref_tmp_2 = NULL;
  range_int64_t_bounded_F ret_tmp3;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_3 = NULL;
  chpl___EndCount_atomic_int64_int64_t _coforallCount = NULL;
  chpl___EndCount_atomic_int64_int64_t this13 = NULL;
  c_void_ptr cast_tmp;
  atomic_int64 _init_class_tmp_;
  atomic_int64 this14;
  atomic_int_least64_t ret5;
  atomic_int_least64_t type_tmp;
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
  atomic_int64 ret_tmp4;
  _ref_atomic_int64 ret_to_arg_ref_tmp_4 = NULL;
  c_void_ptr call_tmp16;
  chpl___EndCount_atomic_int64_int64_t wrap_call_tmp = NULL;
  int64_t numTasks;
  _ref_range_int64_t_bounded_F _ref_tmp_2 = NULL;
  int64_t call_tmp17;
  chpl____wide__ref_range_int64_t_bounded_F T3 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F _ic__F0_this3;
  int64_t i3;
  int64_t end2;
  _ref_range_int64_t_bounded_F this15 = NULL;
  _class_localscoforall_fn19 _args_forcoforall_fn = NULL;
  _ref_range_int64_t_bounded_F T4 = NULL;
  c_void_ptr _args_vforcoforall_fn;
  int64_t _taskListNodecoforall_fn;
  _ref_atomic_int64 _field_destructor_tmp_ = NULL;
  _ref_atomic_int_least64_t call_tmp18 = NULL;
  chpl_localeID_t call_tmp19;
  chpl___EndCount_atomic_int64_int64_t rvfDerefTmp = NULL;
  chpl_bool isdirect;
  chpl____wide__EndCount_atomic_int64_int64_t T5 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn104 _args_foron_fn = NULL;
  chpl____wide__EndCount_atomic_int64_int64_t T6 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn;
  chpl____wide_object chpl_macro_tmp_153;
  chpl____wide__ref__wide_DummyLocale chpl_macro_tmp_154;
  chpl____wide_object chpl_macro_tmp_155;
  chpl____wide__ref_range_int64_t_bounded_F chpl_macro_tmp_156;
  chpl____wide__ref_range_int64_t_bounded_F chpl_macro_tmp_157;
  chpl__class_localscoforall_fn19_object chpl_macro_tmp_158;
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_159;
  chpl__class_localson_fn104_object chpl_macro_tmp_160;
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_161;
  local__str_literal_177 /* "ArrayInit.heuristicInit should have been made concrete" */ = _str_literal_177 /* "ArrayInit.heuristicInit should have been made concrete" */;
  local_dummyLocale = dummyLocale;
  local_c_sublocid_any = c_sublocid_any;
  ret = ArrayInit_heuristicInit;
  initMethod = ret;
  call_tmp2 = (((int64_t)(ret)) == ((int64_t)(ArrayInit_heuristicInit)));
  if (call_tmp2) {
    call_tmp3 = (((int64_t)((s * INT64(8)))) > INT64(2097152));
    if (call_tmp3) {
      initMethod = ArrayInit_parallelInit;
    } else {
      initMethod = ArrayInit_serialInit;
    }
  }
  call_tmp4 = (((int64_t)(initMethod)) == ((int64_t)(ArrayInit_parallelInit)));
  if (call_tmp4) {
    _autoCopy_tmp_ = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any);
    call_tmp5 = chpl_localeID_to_locale(&_autoCopy_tmp_);
    chpl_macro_tmp_153.locale = (&call_tmp5)->locale;
    chpl_macro_tmp_153.addr = ((object)((&call_tmp5)->addr));
    call_tmp6 = chpl_macro_tmp_153;
    chpl_macro_tmp_154.locale = (&local_dummyLocale)->locale;
    chpl_macro_tmp_154.addr = &(((&local_dummyLocale)->addr)->value);
    chpl_gen_comm_get(((void*)(&T)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_154).locale), INT64(0), INT32(0)), (chpl_macro_tmp_154).addr, sizeof(chpl____wide_DummyLocale), -1, COMMID(10), INT64(563), INT64(25));
    chpl_macro_tmp_155.locale = (&T)->locale;
    chpl_macro_tmp_155.addr = ((object)((&T)->addr));
    call_tmp7 = chpl_macro_tmp_155;
    call_tmp8 = (! (((&call_tmp6)->addr != (&call_tmp7)->addr) || ((!(! (&call_tmp6)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp6)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&call_tmp7)->locale), INT64(0), INT32(0))))));
    if (call_tmp8) {
      initMethod = ArrayInit_serialInit;
    }
  }
  call_tmp9 = (((int64_t)(initMethod)) == ((int64_t)(ArrayInit_noInit)));
  if (call_tmp9) {
    goto _end_init_elts;
  } else {
    call_tmp10 = (((int64_t)(initMethod)) == ((int64_t)(ArrayInit_serialInit)));
    if (call_tmp10) {
      _ic__F1_high = ((int64_t)((s - INT64(1))));
      for (i = INT64(0); ((i <= _ic__F1_high)); i += INT64(1)) {
        *(x + i) = UINT64(0);
      }
    } else {
      call_tmp11 = (((int64_t)(initMethod)) == ((int64_t)(ArrayInit_parallelInit)));
      if (call_tmp11) {
        ret_to_arg_ref_tmp_ = &ret_tmp;
        chpl_build_bounded_range(INT64(0), ((int64_t)((s - INT64(1)))), ret_to_arg_ref_tmp_);
        _ic__F0_this = ret_tmp;
        _ic__F1_x1__e1_args = x;
        this12 = &_ic__F0_this;
        chpl_macro_tmp_156.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_156.addr = this12;
        T2 = chpl_macro_tmp_156;
        call_tmp12 = length2(T2);
        len = call_tmp12;
        call_tmp13 = chpl_task_getSerial();
        if (call_tmp13) {
          ret2 = INT64(1);
          goto _end__if_fn50;
        } else {
          call_tmp14 = _computeNumChunks_chpl3(call_tmp12);
          ret2 = call_tmp14;
          goto _end__if_fn50;
        }
        _end__if_fn50:;
        numChunks = ret2;
        call_tmp15 = (ret2 <= INT64(1));
        if (call_tmp15) {
          _ic__F0_this2 = _ic__F0_this;
          ret3 = (&_ic__F0_this2)->_low;
          ret4 = (&_ic__F0_this2)->_high;
          end = ret4;
          x2 = _ic__F1_x1__e1_args;
          for (i2 = ret3; ((i2 <= end)); i2 += INT64(1)) {
            *(x2 + i2) = UINT64(0);
          }
        } else {
          ret_to_arg_ref_tmp_2 = &ret_tmp2;
          chpl_build_low_bounded_range(INT64(0), ret_to_arg_ref_tmp_2);
          ret_to_arg_ref_tmp_3 = &ret_tmp3;
          chpl___POUND_(&ret_tmp2, ret2, ret_to_arg_ref_tmp_3);
          tmpIter = ret_tmp3;
          cast_tmp = chpl_here_alloc(sizeof(chpl_chpl___EndCount_atomic_int64_int64_t_object), INT16(2));
          this13 = ((chpl___EndCount_atomic_int64_int64_t)(cast_tmp));
          ((object)(this13))->chpl__cid = chpl__cid_chpl___EndCount_atomic_int64_int64_t;
          (this13)->i = _init_class_tmp_;
          (this13)->taskCnt = INT64(0);
          (this13)->taskList = NULL;
          ret5 = type_tmp;
          _ref_tmp_ = &ret5;
          atomic_init_int_least64_t(_ref_tmp_, INT64(0));
          (&this14)->_v = ret5;
          ret_to_arg_ref_tmp_4 = &ret_tmp4;
          _construct_atomic_int64(ret5, &this14, ret_to_arg_ref_tmp_4);
          (this13)->i = ret_tmp4;
          (this13)->taskCnt = INT64(0);
          call_tmp16 = ((c_void_ptr)(nil));
          (this13)->taskList = call_tmp16;
          wrap_call_tmp = _construct__EndCount(&ret_tmp4, INT64(0), call_tmp16, this13);
          _coforallCount = wrap_call_tmp;
          _ref_tmp_2 = &tmpIter;
          chpl_macro_tmp_157.locale = chpl_gen_getLocaleID();
          chpl_macro_tmp_157.addr = _ref_tmp_2;
          T3 = chpl_macro_tmp_157;
          call_tmp17 = length2(T3);
          numTasks = call_tmp17;
          _upEndCount3(_coforallCount, call_tmp17);
          _ic__F0_this3 = tmpIter;
          end2 = (&_ic__F0_this3)->_high;
          for (i3 = (&_ic__F0_this3)->_low; ((i3 <= end2)); i3 += INT64(1)) {
            this15 = &_ic__F0_this;
            _args_forcoforall_fn = ((_class_localscoforall_fn19)(&chpl_macro_tmp_158));
            (_args_forcoforall_fn)->_0_x1__e1_args = _ic__F1_x1__e1_args;
            T4 = this15;
            (_args_forcoforall_fn)->_1_tmp = T4;
            (_args_forcoforall_fn)->_2_len = len;
            (_args_forcoforall_fn)->_3_numChunks = numChunks;
            (_args_forcoforall_fn)->_4__yieldedIndex = i3;
            (_args_forcoforall_fn)->_5__coforallCount = _coforallCount;
            _args_vforcoforall_fn = ((void*)(_args_forcoforall_fn));
            _taskListNodecoforall_fn = chpl_nodeID;
            /*** wrapcoforall_fn27 ***/ chpl_taskListAddCoStmt(INT32(-2), INT64(156), ((chpl_task_bundle_p)(_args_vforcoforall_fn)), sizeof(chpl__class_localscoforall_fn19_object), &((_coforallCount)->taskList), _taskListNodecoforall_fn, INT64(740), INT32(2));
          }
          _waitEndCount3(_coforallCount, numTasks);
          _field_destructor_tmp_ = &((_coforallCount)->i);
          call_tmp18 = &((_field_destructor_tmp_)->_v);
          atomic_destroy_int_least64_t(call_tmp18);
          call_tmp19 = chpl_gen_getLocaleID();
          rvfDerefTmp = _coforallCount;
          isdirect = chpl_doDirectExecuteOn(&call_tmp19);
          if (isdirect) {
            chpl_macro_tmp_159.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_159.addr = rvfDerefTmp;
            T5 = chpl_macro_tmp_159;
            on_fn123(T5);
          } else {
            _args_foron_fn = ((_class_localson_fn104)(&chpl_macro_tmp_160));
            (_args_foron_fn)->_0_rvfDerefTmp = call_tmp19;
            chpl_macro_tmp_161.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_161.addr = rvfDerefTmp;
            T6 = chpl_macro_tmp_161;
            (_args_foron_fn)->_1_rvfDerefTmp = T6;
            _args_vforon_fn = ((void*)(_args_foron_fn));
            /*** wrapon_fn131 ***/ chpl_executeOn(&call_tmp19, INT32(196), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn104_object), INT64(1227), INT32(2));
          }
        }
      } else {
        halt(&local__str_literal_177 /* "ArrayInit.heuristicInit should have been made concrete" */, INT64(746), INT32(2));
      }
    }
  }
  _end_init_elts:;
  return;
}

/* ChapelBase.chpl:671 */
static void init_elts6(_ddata_localesSignal x,
                       int64_t s) {
  string local__str_literal_177;
  chpl____wide_heap_DummyLocale local_dummyLocale = {CHPL_LOCALEID_T_INIT, NULL};
  int32_t local_c_sublocid_any;
  ArrayInit initMethod;
  ArrayInit ret;
  chpl_bool call_tmp2;
  chpl_bool call_tmp3;
  chpl_localeID_t _autoCopy_tmp_;
  chpl____wide_locale call_tmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DummyLocale T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp7;
  chpl_bool call_tmp8;
  chpl_bool call_tmp9;
  int64_t _ic__F1_high;
  int64_t i;
  localesSignal call_tmp10 = NULL;
  chpl____wide_localesSignal T2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp11;
  range_int64_t_bounded_F ret_tmp;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
  range_int64_t_bounded_F _ic__F0_this;
  _ddata_localesSignal _ic__F1_x1__e1_args = NULL;
  int64_t len;
  int64_t call_tmp12;
  _ref_range_int64_t_bounded_F this12 = NULL;
  chpl____wide__ref_range_int64_t_bounded_F T3 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t numChunks;
  int64_t ret2;
  chpl_bool call_tmp13;
  int64_t call_tmp14;
  chpl_bool call_tmp15;
  range_int64_t_bounded_F _ic__F0_this2;
  int64_t i2;
  int64_t end;
  _ddata_localesSignal x2 = NULL;
  localesSignal call_tmp16 = NULL;
  chpl____wide_localesSignal T4 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F tmpIter;
  range_int64_t_boundedLow_F ret_tmp2;
  _ref_range_int64_t_boundedLow_F ret_to_arg_ref_tmp_2 = NULL;
  range_int64_t_bounded_F ret_tmp3;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_3 = NULL;
  chpl___EndCount_atomic_int64_int64_t _coforallCount = NULL;
  chpl___EndCount_atomic_int64_int64_t this13 = NULL;
  c_void_ptr cast_tmp;
  atomic_int64 _init_class_tmp_;
  atomic_int64 this14;
  atomic_int_least64_t ret3;
  atomic_int_least64_t type_tmp;
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
  atomic_int64 ret_tmp4;
  _ref_atomic_int64 ret_to_arg_ref_tmp_4 = NULL;
  c_void_ptr call_tmp17;
  chpl___EndCount_atomic_int64_int64_t wrap_call_tmp = NULL;
  int64_t numTasks;
  _ref_range_int64_t_bounded_F _ref_tmp_2 = NULL;
  int64_t call_tmp18;
  chpl____wide__ref_range_int64_t_bounded_F T5 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F _ic__F0_this3;
  int64_t i3;
  int64_t ret4;
  int64_t end2;
  _ref_range_int64_t_bounded_F this15 = NULL;
  _class_localscoforall_fn18 _args_forcoforall_fn = NULL;
  _ref_range_int64_t_bounded_F T6 = NULL;
  c_void_ptr _args_vforcoforall_fn;
  int64_t _taskListNodecoforall_fn;
  _ref_atomic_int64 _field_destructor_tmp_ = NULL;
  _ref_atomic_int_least64_t call_tmp19 = NULL;
  chpl_localeID_t call_tmp20;
  chpl___EndCount_atomic_int64_int64_t rvfDerefTmp = NULL;
  chpl_bool isdirect;
  chpl____wide__EndCount_atomic_int64_int64_t T7 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn104 _args_foron_fn = NULL;
  chpl____wide__EndCount_atomic_int64_int64_t T8 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn;
  chpl____wide_object chpl_macro_tmp_162;
  chpl____wide__ref__wide_DummyLocale chpl_macro_tmp_163;
  chpl____wide_object chpl_macro_tmp_164;
  chpl____wide_localesSignal chpl_macro_tmp_165;
  chpl____wide__ref_range_int64_t_bounded_F chpl_macro_tmp_166;
  chpl____wide_localesSignal chpl_macro_tmp_167;
  chpl____wide__ref_range_int64_t_bounded_F chpl_macro_tmp_168;
  chpl__class_localscoforall_fn18_object chpl_macro_tmp_169;
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_170;
  chpl__class_localson_fn104_object chpl_macro_tmp_171;
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_172;
  local__str_literal_177 /* "ArrayInit.heuristicInit should have been made concrete" */ = _str_literal_177 /* "ArrayInit.heuristicInit should have been made concrete" */;
  local_dummyLocale = dummyLocale;
  local_c_sublocid_any = c_sublocid_any;
  ret = ArrayInit_heuristicInit;
  initMethod = ret;
  call_tmp2 = (((int64_t)(ret)) == ((int64_t)(ArrayInit_heuristicInit)));
  if (call_tmp2) {
    initMethod = ArrayInit_serialInit;
  }
  call_tmp3 = (((int64_t)(initMethod)) == ((int64_t)(ArrayInit_parallelInit)));
  if (call_tmp3) {
    _autoCopy_tmp_ = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any);
    call_tmp4 = chpl_localeID_to_locale(&_autoCopy_tmp_);
    chpl_macro_tmp_162.locale = (&call_tmp4)->locale;
    chpl_macro_tmp_162.addr = ((object)((&call_tmp4)->addr));
    call_tmp5 = chpl_macro_tmp_162;
    chpl_macro_tmp_163.locale = (&local_dummyLocale)->locale;
    chpl_macro_tmp_163.addr = &(((&local_dummyLocale)->addr)->value);
    chpl_gen_comm_get(((void*)(&T)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_163).locale), INT64(0), INT32(0)), (chpl_macro_tmp_163).addr, sizeof(chpl____wide_DummyLocale), -1, COMMID(11), INT64(563), INT64(25));
    chpl_macro_tmp_164.locale = (&T)->locale;
    chpl_macro_tmp_164.addr = ((object)((&T)->addr));
    call_tmp6 = chpl_macro_tmp_164;
    call_tmp7 = (! (((&call_tmp5)->addr != (&call_tmp6)->addr) || ((!(! (&call_tmp5)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp5)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&call_tmp6)->locale), INT64(0), INT32(0))))));
    if (call_tmp7) {
      initMethod = ArrayInit_serialInit;
    }
  }
  call_tmp8 = (((int64_t)(initMethod)) == ((int64_t)(ArrayInit_noInit)));
  if (call_tmp8) {
    goto _end_init_elts;
  } else {
    call_tmp9 = (((int64_t)(initMethod)) == ((int64_t)(ArrayInit_serialInit)));
    if (call_tmp9) {
      _ic__F1_high = ((int64_t)((s - INT64(1))));
      for (i = INT64(0); ((i <= _ic__F1_high)); i += INT64(1)) {
        call_tmp10 = ((localesSignal)(nil));
        chpl_macro_tmp_165.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_165.addr = call_tmp10;
        T2 = chpl_macro_tmp_165;
        *(x + i) = T2;
      }
    } else {
      call_tmp11 = (((int64_t)(initMethod)) == ((int64_t)(ArrayInit_parallelInit)));
      if (call_tmp11) {
        ret_to_arg_ref_tmp_ = &ret_tmp;
        chpl_build_bounded_range(INT64(0), ((int64_t)((s - INT64(1)))), ret_to_arg_ref_tmp_);
        _ic__F0_this = ret_tmp;
        _ic__F1_x1__e1_args = x;
        this12 = &_ic__F0_this;
        chpl_macro_tmp_166.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_166.addr = this12;
        T3 = chpl_macro_tmp_166;
        call_tmp12 = length2(T3);
        len = call_tmp12;
        call_tmp13 = chpl_task_getSerial();
        if (call_tmp13) {
          ret2 = INT64(1);
          goto _end__if_fn50;
        } else {
          call_tmp14 = _computeNumChunks_chpl3(call_tmp12);
          ret2 = call_tmp14;
          goto _end__if_fn50;
        }
        _end__if_fn50:;
        numChunks = ret2;
        call_tmp15 = (ret2 <= INT64(1));
        if (call_tmp15) {
          _ic__F0_this2 = _ic__F0_this;
          end = (&_ic__F0_this2)->_high;
          x2 = _ic__F1_x1__e1_args;
          for (i2 = (&_ic__F0_this2)->_low; ((i2 <= end)); i2 += INT64(1)) {
            call_tmp16 = ((localesSignal)(nil));
            chpl_macro_tmp_167.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_167.addr = call_tmp16;
            T4 = chpl_macro_tmp_167;
            *(x2 + i2) = T4;
          }
        } else {
          ret_to_arg_ref_tmp_2 = &ret_tmp2;
          chpl_build_low_bounded_range(INT64(0), ret_to_arg_ref_tmp_2);
          ret_to_arg_ref_tmp_3 = &ret_tmp3;
          chpl___POUND_(&ret_tmp2, ret2, ret_to_arg_ref_tmp_3);
          tmpIter = ret_tmp3;
          cast_tmp = chpl_here_alloc(sizeof(chpl_chpl___EndCount_atomic_int64_int64_t_object), INT16(2));
          this13 = ((chpl___EndCount_atomic_int64_int64_t)(cast_tmp));
          ((object)(this13))->chpl__cid = chpl__cid_chpl___EndCount_atomic_int64_int64_t;
          (this13)->i = _init_class_tmp_;
          (this13)->taskCnt = INT64(0);
          (this13)->taskList = NULL;
          ret3 = type_tmp;
          _ref_tmp_ = &ret3;
          atomic_init_int_least64_t(_ref_tmp_, INT64(0));
          (&this14)->_v = ret3;
          ret_to_arg_ref_tmp_4 = &ret_tmp4;
          _construct_atomic_int64(ret3, &this14, ret_to_arg_ref_tmp_4);
          (this13)->i = ret_tmp4;
          (this13)->taskCnt = INT64(0);
          call_tmp17 = ((c_void_ptr)(nil));
          (this13)->taskList = call_tmp17;
          wrap_call_tmp = _construct__EndCount(&ret_tmp4, INT64(0), call_tmp17, this13);
          _coforallCount = wrap_call_tmp;
          _ref_tmp_2 = &tmpIter;
          chpl_macro_tmp_168.locale = chpl_gen_getLocaleID();
          chpl_macro_tmp_168.addr = _ref_tmp_2;
          T5 = chpl_macro_tmp_168;
          call_tmp18 = length2(T5);
          numTasks = call_tmp18;
          _upEndCount3(_coforallCount, call_tmp18);
          _ic__F0_this3 = tmpIter;
          ret4 = (&_ic__F0_this3)->_low;
          end2 = (&_ic__F0_this3)->_high;
          for (i3 = ret4; ((i3 <= end2)); i3 += INT64(1)) {
            this15 = &_ic__F0_this;
            _args_forcoforall_fn = ((_class_localscoforall_fn18)(&chpl_macro_tmp_169));
            (_args_forcoforall_fn)->_0_x1__e1_args = _ic__F1_x1__e1_args;
            (_args_forcoforall_fn)->_1__yieldedIndex = i3;
            (_args_forcoforall_fn)->_2__coforallCount = _coforallCount;
            T6 = this15;
            (_args_forcoforall_fn)->_3_tmp = T6;
            (_args_forcoforall_fn)->_4_len = len;
            (_args_forcoforall_fn)->_5_numChunks = numChunks;
            _args_vforcoforall_fn = ((void*)(_args_forcoforall_fn));
            _taskListNodecoforall_fn = chpl_nodeID;
            /*** wrapcoforall_fn16 ***/ chpl_taskListAddCoStmt(INT32(-2), INT64(145), ((chpl_task_bundle_p)(_args_vforcoforall_fn)), sizeof(chpl__class_localscoforall_fn18_object), &((_coforallCount)->taskList), _taskListNodecoforall_fn, INT64(740), INT32(2));
          }
          _waitEndCount3(_coforallCount, numTasks);
          _field_destructor_tmp_ = &((_coforallCount)->i);
          call_tmp19 = &((_field_destructor_tmp_)->_v);
          atomic_destroy_int_least64_t(call_tmp19);
          call_tmp20 = chpl_gen_getLocaleID();
          rvfDerefTmp = _coforallCount;
          isdirect = chpl_doDirectExecuteOn(&call_tmp20);
          if (isdirect) {
            chpl_macro_tmp_170.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_170.addr = rvfDerefTmp;
            T7 = chpl_macro_tmp_170;
            on_fn123(T7);
          } else {
            _args_foron_fn = ((_class_localson_fn104)(&chpl_macro_tmp_171));
            (_args_foron_fn)->_0_rvfDerefTmp = call_tmp20;
            chpl_macro_tmp_172.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_172.addr = rvfDerefTmp;
            T8 = chpl_macro_tmp_172;
            (_args_foron_fn)->_1_rvfDerefTmp = T8;
            _args_vforon_fn = ((void*)(_args_foron_fn));
            /*** wrapon_fn131 ***/ chpl_executeOn(&call_tmp20, INT32(196), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn104_object), INT64(1227), INT32(2));
          }
        }
      } else {
        halt(&local__str_literal_177 /* "ArrayInit.heuristicInit should have been made concrete" */, INT64(746), INT32(2));
      }
    }
  }
  _end_init_elts:;
  return;
}

/* ChapelBase.chpl:671 */
static void init_elts(_ddata_LocCyclic_1_int64_t x,
                      int64_t s) {
  string local__str_literal_177;
  chpl____wide_heap_DummyLocale local_dummyLocale = {CHPL_LOCALEID_T_INIT, NULL};
  int32_t local_c_sublocid_any;
  ArrayInit initMethod;
  ArrayInit ret;
  chpl_bool call_tmp2;
  chpl_bool call_tmp3;
  chpl_localeID_t _autoCopy_tmp_;
  chpl____wide_locale call_tmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DummyLocale T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp7;
  chpl_bool call_tmp8;
  chpl_bool call_tmp9;
  int64_t _ic__F1_high;
  int64_t i;
  LocCyclic_1_int64_t_chpl call_tmp10 = NULL;
  chpl____wide_LocCyclic_1_int64_t T2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp11;
  range_int64_t_bounded_F ret_tmp;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
  range_int64_t_bounded_F _ic__F0_this;
  _ddata_LocCyclic_1_int64_t _ic__F1_x1__e1_args = NULL;
  int64_t len;
  int64_t call_tmp12;
  _ref_range_int64_t_bounded_F this12 = NULL;
  chpl____wide__ref_range_int64_t_bounded_F T3 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t numChunks;
  int64_t ret2;
  chpl_bool call_tmp13;
  int64_t call_tmp14;
  chpl_bool call_tmp15;
  range_int64_t_bounded_F _ic__F0_this2;
  int64_t i2;
  int64_t end;
  _ddata_LocCyclic_1_int64_t x2 = NULL;
  LocCyclic_1_int64_t_chpl call_tmp16 = NULL;
  chpl____wide_LocCyclic_1_int64_t T4 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F tmpIter;
  range_int64_t_boundedLow_F ret_tmp2;
  _ref_range_int64_t_boundedLow_F ret_to_arg_ref_tmp_2 = NULL;
  range_int64_t_bounded_F ret_tmp3;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_3 = NULL;
  chpl___EndCount_atomic_int64_int64_t _coforallCount = NULL;
  chpl___EndCount_atomic_int64_int64_t this13 = NULL;
  c_void_ptr cast_tmp;
  atomic_int64 _init_class_tmp_;
  atomic_int64 this14;
  atomic_int_least64_t ret3;
  atomic_int_least64_t type_tmp;
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
  atomic_int64 ret_tmp4;
  _ref_atomic_int64 ret_to_arg_ref_tmp_4 = NULL;
  c_void_ptr call_tmp17;
  chpl___EndCount_atomic_int64_int64_t wrap_call_tmp = NULL;
  int64_t numTasks;
  _ref_range_int64_t_bounded_F _ref_tmp_2 = NULL;
  int64_t call_tmp18;
  chpl____wide__ref_range_int64_t_bounded_F T5 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F _ic__F0_this3;
  int64_t i3;
  int64_t end2;
  _ref_range_int64_t_bounded_F this15 = NULL;
  _class_localscoforall_fn15 _args_forcoforall_fn = NULL;
  _ref_range_int64_t_bounded_F T6 = NULL;
  c_void_ptr _args_vforcoforall_fn;
  int64_t _taskListNodecoforall_fn;
  _ref_atomic_int64 _field_destructor_tmp_ = NULL;
  _ref_atomic_int_least64_t call_tmp19 = NULL;
  chpl_localeID_t call_tmp20;
  chpl___EndCount_atomic_int64_int64_t rvfDerefTmp = NULL;
  chpl_bool isdirect;
  chpl____wide__EndCount_atomic_int64_int64_t T7 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn104 _args_foron_fn = NULL;
  chpl____wide__EndCount_atomic_int64_int64_t T8 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn;
  chpl____wide_object chpl_macro_tmp_173;
  chpl____wide__ref__wide_DummyLocale chpl_macro_tmp_174;
  chpl____wide_object chpl_macro_tmp_175;
  chpl____wide_LocCyclic_1_int64_t chpl_macro_tmp_176;
  chpl____wide__ref_range_int64_t_bounded_F chpl_macro_tmp_177;
  chpl____wide_LocCyclic_1_int64_t chpl_macro_tmp_178;
  chpl____wide__ref_range_int64_t_bounded_F chpl_macro_tmp_179;
  chpl__class_localscoforall_fn15_object chpl_macro_tmp_180;
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_181;
  chpl__class_localson_fn104_object chpl_macro_tmp_182;
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_183;
  local__str_literal_177 /* "ArrayInit.heuristicInit should have been made concrete" */ = _str_literal_177 /* "ArrayInit.heuristicInit should have been made concrete" */;
  local_dummyLocale = dummyLocale;
  local_c_sublocid_any = c_sublocid_any;
  ret = ArrayInit_heuristicInit;
  initMethod = ret;
  call_tmp2 = (((int64_t)(ret)) == ((int64_t)(ArrayInit_heuristicInit)));
  if (call_tmp2) {
    initMethod = ArrayInit_serialInit;
  }
  call_tmp3 = (((int64_t)(initMethod)) == ((int64_t)(ArrayInit_parallelInit)));
  if (call_tmp3) {
    _autoCopy_tmp_ = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any);
    call_tmp4 = chpl_localeID_to_locale(&_autoCopy_tmp_);
    chpl_macro_tmp_173.locale = (&call_tmp4)->locale;
    chpl_macro_tmp_173.addr = ((object)((&call_tmp4)->addr));
    call_tmp5 = chpl_macro_tmp_173;
    chpl_macro_tmp_174.locale = (&local_dummyLocale)->locale;
    chpl_macro_tmp_174.addr = &(((&local_dummyLocale)->addr)->value);
    chpl_gen_comm_get(((void*)(&T)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_174).locale), INT64(0), INT32(0)), (chpl_macro_tmp_174).addr, sizeof(chpl____wide_DummyLocale), -1, COMMID(12), INT64(563), INT64(25));
    chpl_macro_tmp_175.locale = (&T)->locale;
    chpl_macro_tmp_175.addr = ((object)((&T)->addr));
    call_tmp6 = chpl_macro_tmp_175;
    call_tmp7 = (! (((&call_tmp5)->addr != (&call_tmp6)->addr) || ((!(! (&call_tmp5)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp5)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&call_tmp6)->locale), INT64(0), INT32(0))))));
    if (call_tmp7) {
      initMethod = ArrayInit_serialInit;
    }
  }
  call_tmp8 = (((int64_t)(initMethod)) == ((int64_t)(ArrayInit_noInit)));
  if (call_tmp8) {
    goto _end_init_elts;
  } else {
    call_tmp9 = (((int64_t)(initMethod)) == ((int64_t)(ArrayInit_serialInit)));
    if (call_tmp9) {
      _ic__F1_high = ((int64_t)((s - INT64(1))));
      for (i = INT64(0); ((i <= _ic__F1_high)); i += INT64(1)) {
        call_tmp10 = ((LocCyclic_1_int64_t_chpl)(nil));
        chpl_macro_tmp_176.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_176.addr = call_tmp10;
        T2 = chpl_macro_tmp_176;
        *(x + i) = T2;
      }
    } else {
      call_tmp11 = (((int64_t)(initMethod)) == ((int64_t)(ArrayInit_parallelInit)));
      if (call_tmp11) {
        ret_to_arg_ref_tmp_ = &ret_tmp;
        chpl_build_bounded_range(INT64(0), ((int64_t)((s - INT64(1)))), ret_to_arg_ref_tmp_);
        _ic__F0_this = ret_tmp;
        _ic__F1_x1__e1_args = x;
        this12 = &_ic__F0_this;
        chpl_macro_tmp_177.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_177.addr = this12;
        T3 = chpl_macro_tmp_177;
        call_tmp12 = length2(T3);
        len = call_tmp12;
        call_tmp13 = chpl_task_getSerial();
        if (call_tmp13) {
          ret2 = INT64(1);
          goto _end__if_fn50;
        } else {
          call_tmp14 = _computeNumChunks_chpl3(call_tmp12);
          ret2 = call_tmp14;
          goto _end__if_fn50;
        }
        _end__if_fn50:;
        numChunks = ret2;
        call_tmp15 = (ret2 <= INT64(1));
        if (call_tmp15) {
          _ic__F0_this2 = _ic__F0_this;
          end = (&_ic__F0_this2)->_high;
          x2 = _ic__F1_x1__e1_args;
          for (i2 = (&_ic__F0_this2)->_low; ((i2 <= end)); i2 += INT64(1)) {
            call_tmp16 = ((LocCyclic_1_int64_t_chpl)(nil));
            chpl_macro_tmp_178.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_178.addr = call_tmp16;
            T4 = chpl_macro_tmp_178;
            *(x2 + i2) = T4;
          }
        } else {
          ret_to_arg_ref_tmp_2 = &ret_tmp2;
          chpl_build_low_bounded_range(INT64(0), ret_to_arg_ref_tmp_2);
          ret_to_arg_ref_tmp_3 = &ret_tmp3;
          chpl___POUND_(&ret_tmp2, ret2, ret_to_arg_ref_tmp_3);
          tmpIter = ret_tmp3;
          cast_tmp = chpl_here_alloc(sizeof(chpl_chpl___EndCount_atomic_int64_int64_t_object), INT16(2));
          this13 = ((chpl___EndCount_atomic_int64_int64_t)(cast_tmp));
          ((object)(this13))->chpl__cid = chpl__cid_chpl___EndCount_atomic_int64_int64_t;
          (this13)->i = _init_class_tmp_;
          (this13)->taskCnt = INT64(0);
          (this13)->taskList = NULL;
          ret3 = type_tmp;
          _ref_tmp_ = &ret3;
          atomic_init_int_least64_t(_ref_tmp_, INT64(0));
          (&this14)->_v = ret3;
          ret_to_arg_ref_tmp_4 = &ret_tmp4;
          _construct_atomic_int64(ret3, &this14, ret_to_arg_ref_tmp_4);
          (this13)->i = ret_tmp4;
          (this13)->taskCnt = INT64(0);
          call_tmp17 = ((c_void_ptr)(nil));
          (this13)->taskList = call_tmp17;
          wrap_call_tmp = _construct__EndCount(&ret_tmp4, INT64(0), call_tmp17, this13);
          _coforallCount = wrap_call_tmp;
          _ref_tmp_2 = &tmpIter;
          chpl_macro_tmp_179.locale = chpl_gen_getLocaleID();
          chpl_macro_tmp_179.addr = _ref_tmp_2;
          T5 = chpl_macro_tmp_179;
          call_tmp18 = length2(T5);
          numTasks = call_tmp18;
          _upEndCount3(_coforallCount, call_tmp18);
          _ic__F0_this3 = tmpIter;
          end2 = (&_ic__F0_this3)->_high;
          for (i3 = (&_ic__F0_this3)->_low; ((i3 <= end2)); i3 += INT64(1)) {
            this15 = &_ic__F0_this;
            _args_forcoforall_fn = ((_class_localscoforall_fn15)(&chpl_macro_tmp_180));
            (_args_forcoforall_fn)->_0_x1__e1_args = _ic__F1_x1__e1_args;
            (_args_forcoforall_fn)->_1_numChunks = numChunks;
            (_args_forcoforall_fn)->_2__yieldedIndex = i3;
            (_args_forcoforall_fn)->_3__coforallCount = _coforallCount;
            T6 = this15;
            (_args_forcoforall_fn)->_4_tmp = T6;
            (_args_forcoforall_fn)->_5_len = len;
            _args_vforcoforall_fn = ((void*)(_args_forcoforall_fn));
            _taskListNodecoforall_fn = chpl_nodeID;
            /*** wrapcoforall_fn19 ***/ chpl_taskListAddCoStmt(INT32(-2), INT64(148), ((chpl_task_bundle_p)(_args_vforcoforall_fn)), sizeof(chpl__class_localscoforall_fn15_object), &((_coforallCount)->taskList), _taskListNodecoforall_fn, INT64(740), INT32(2));
          }
          _waitEndCount3(_coforallCount, numTasks);
          _field_destructor_tmp_ = &((_coforallCount)->i);
          call_tmp19 = &((_field_destructor_tmp_)->_v);
          atomic_destroy_int_least64_t(call_tmp19);
          call_tmp20 = chpl_gen_getLocaleID();
          rvfDerefTmp = _coforallCount;
          isdirect = chpl_doDirectExecuteOn(&call_tmp20);
          if (isdirect) {
            chpl_macro_tmp_181.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_181.addr = rvfDerefTmp;
            T7 = chpl_macro_tmp_181;
            on_fn123(T7);
          } else {
            _args_foron_fn = ((_class_localson_fn104)(&chpl_macro_tmp_182));
            (_args_foron_fn)->_0_rvfDerefTmp = call_tmp20;
            chpl_macro_tmp_183.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_183.addr = rvfDerefTmp;
            T8 = chpl_macro_tmp_183;
            (_args_foron_fn)->_1_rvfDerefTmp = T8;
            _args_vforon_fn = ((void*)(_args_foron_fn));
            /*** wrapon_fn131 ***/ chpl_executeOn(&call_tmp20, INT32(196), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn104_object), INT64(1227), INT32(2));
          }
        }
      } else {
        halt(&local__str_literal_177 /* "ArrayInit.heuristicInit should have been made concrete" */, INT64(746), INT32(2));
      }
    }
  }
  _end_init_elts:;
  return;
}

/* ChapelBase.chpl:671 */
static void init_elts14(_ddata_LocCyclicDom_1_int64_t_F x,
                        int64_t s) {
  string local__str_literal_177;
  chpl____wide_heap_DummyLocale local_dummyLocale = {CHPL_LOCALEID_T_INIT, NULL};
  int32_t local_c_sublocid_any;
  ArrayInit initMethod;
  ArrayInit ret;
  chpl_bool call_tmp2;
  chpl_bool call_tmp3;
  chpl_localeID_t _autoCopy_tmp_;
  chpl____wide_locale call_tmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DummyLocale T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp7;
  chpl_bool call_tmp8;
  chpl_bool call_tmp9;
  int64_t _ic__F1_high;
  int64_t i;
  LocCyclicDom_1_int64_t_F_chpl call_tmp10 = NULL;
  chpl____wide_LocCyclicDom_1_int64_t_F T2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp11;
  range_int64_t_bounded_F ret_tmp;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
  range_int64_t_bounded_F _ic__F0_this;
  _ddata_LocCyclicDom_1_int64_t_F _ic__F1_x1__e1_args = NULL;
  int64_t len;
  int64_t call_tmp12;
  _ref_range_int64_t_bounded_F this12 = NULL;
  chpl____wide__ref_range_int64_t_bounded_F T3 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t numChunks;
  int64_t ret2;
  chpl_bool call_tmp13;
  int64_t call_tmp14;
  chpl_bool call_tmp15;
  range_int64_t_bounded_F _ic__F0_this2;
  int64_t i2;
  int64_t end;
  _ddata_LocCyclicDom_1_int64_t_F x2 = NULL;
  LocCyclicDom_1_int64_t_F_chpl call_tmp16 = NULL;
  chpl____wide_LocCyclicDom_1_int64_t_F T4 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F tmpIter;
  range_int64_t_boundedLow_F ret_tmp2;
  _ref_range_int64_t_boundedLow_F ret_to_arg_ref_tmp_2 = NULL;
  range_int64_t_bounded_F ret_tmp3;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_3 = NULL;
  chpl___EndCount_atomic_int64_int64_t _coforallCount = NULL;
  chpl___EndCount_atomic_int64_int64_t this13 = NULL;
  c_void_ptr cast_tmp;
  atomic_int64 _init_class_tmp_;
  atomic_int64 this14;
  atomic_int_least64_t ret3;
  atomic_int_least64_t type_tmp;
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
  atomic_int64 ret_tmp4;
  _ref_atomic_int64 ret_to_arg_ref_tmp_4 = NULL;
  c_void_ptr call_tmp17;
  chpl___EndCount_atomic_int64_int64_t wrap_call_tmp = NULL;
  int64_t numTasks;
  _ref_range_int64_t_bounded_F _ref_tmp_2 = NULL;
  int64_t call_tmp18;
  chpl____wide__ref_range_int64_t_bounded_F T5 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F _ic__F0_this3;
  int64_t i3;
  int64_t end2;
  _ref_range_int64_t_bounded_F this15 = NULL;
  _class_localscoforall_fn29 _args_forcoforall_fn = NULL;
  _ref_range_int64_t_bounded_F T6 = NULL;
  c_void_ptr _args_vforcoforall_fn;
  int64_t _taskListNodecoforall_fn;
  _ref_atomic_int64 _field_destructor_tmp_ = NULL;
  _ref_atomic_int_least64_t call_tmp19 = NULL;
  chpl_localeID_t call_tmp20;
  chpl___EndCount_atomic_int64_int64_t rvfDerefTmp = NULL;
  chpl_bool isdirect;
  chpl____wide__EndCount_atomic_int64_int64_t T7 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn104 _args_foron_fn = NULL;
  chpl____wide__EndCount_atomic_int64_int64_t T8 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn;
  chpl____wide_object chpl_macro_tmp_184;
  chpl____wide__ref__wide_DummyLocale chpl_macro_tmp_185;
  chpl____wide_object chpl_macro_tmp_186;
  chpl____wide_LocCyclicDom_1_int64_t_F chpl_macro_tmp_187;
  chpl____wide__ref_range_int64_t_bounded_F chpl_macro_tmp_188;
  chpl____wide_LocCyclicDom_1_int64_t_F chpl_macro_tmp_189;
  chpl____wide__ref_range_int64_t_bounded_F chpl_macro_tmp_190;
  chpl__class_localscoforall_fn29_object chpl_macro_tmp_191;
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_192;
  chpl__class_localson_fn104_object chpl_macro_tmp_193;
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_194;
  local__str_literal_177 /* "ArrayInit.heuristicInit should have been made concrete" */ = _str_literal_177 /* "ArrayInit.heuristicInit should have been made concrete" */;
  local_dummyLocale = dummyLocale;
  local_c_sublocid_any = c_sublocid_any;
  ret = ArrayInit_heuristicInit;
  initMethod = ret;
  call_tmp2 = (((int64_t)(ret)) == ((int64_t)(ArrayInit_heuristicInit)));
  if (call_tmp2) {
    initMethod = ArrayInit_serialInit;
  }
  call_tmp3 = (((int64_t)(initMethod)) == ((int64_t)(ArrayInit_parallelInit)));
  if (call_tmp3) {
    _autoCopy_tmp_ = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any);
    call_tmp4 = chpl_localeID_to_locale(&_autoCopy_tmp_);
    chpl_macro_tmp_184.locale = (&call_tmp4)->locale;
    chpl_macro_tmp_184.addr = ((object)((&call_tmp4)->addr));
    call_tmp5 = chpl_macro_tmp_184;
    chpl_macro_tmp_185.locale = (&local_dummyLocale)->locale;
    chpl_macro_tmp_185.addr = &(((&local_dummyLocale)->addr)->value);
    chpl_gen_comm_get(((void*)(&T)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_185).locale), INT64(0), INT32(0)), (chpl_macro_tmp_185).addr, sizeof(chpl____wide_DummyLocale), -1, COMMID(13), INT64(563), INT64(25));
    chpl_macro_tmp_186.locale = (&T)->locale;
    chpl_macro_tmp_186.addr = ((object)((&T)->addr));
    call_tmp6 = chpl_macro_tmp_186;
    call_tmp7 = (! (((&call_tmp5)->addr != (&call_tmp6)->addr) || ((!(! (&call_tmp5)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp5)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&call_tmp6)->locale), INT64(0), INT32(0))))));
    if (call_tmp7) {
      initMethod = ArrayInit_serialInit;
    }
  }
  call_tmp8 = (((int64_t)(initMethod)) == ((int64_t)(ArrayInit_noInit)));
  if (call_tmp8) {
    goto _end_init_elts;
  } else {
    call_tmp9 = (((int64_t)(initMethod)) == ((int64_t)(ArrayInit_serialInit)));
    if (call_tmp9) {
      _ic__F1_high = ((int64_t)((s - INT64(1))));
      for (i = INT64(0); ((i <= _ic__F1_high)); i += INT64(1)) {
        call_tmp10 = ((LocCyclicDom_1_int64_t_F_chpl)(nil));
        chpl_macro_tmp_187.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_187.addr = call_tmp10;
        T2 = chpl_macro_tmp_187;
        *(x + i) = T2;
      }
    } else {
      call_tmp11 = (((int64_t)(initMethod)) == ((int64_t)(ArrayInit_parallelInit)));
      if (call_tmp11) {
        ret_to_arg_ref_tmp_ = &ret_tmp;
        chpl_build_bounded_range(INT64(0), ((int64_t)((s - INT64(1)))), ret_to_arg_ref_tmp_);
        _ic__F0_this = ret_tmp;
        _ic__F1_x1__e1_args = x;
        this12 = &_ic__F0_this;
        chpl_macro_tmp_188.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_188.addr = this12;
        T3 = chpl_macro_tmp_188;
        call_tmp12 = length2(T3);
        len = call_tmp12;
        call_tmp13 = chpl_task_getSerial();
        if (call_tmp13) {
          ret2 = INT64(1);
          goto _end__if_fn50;
        } else {
          call_tmp14 = _computeNumChunks_chpl3(call_tmp12);
          ret2 = call_tmp14;
          goto _end__if_fn50;
        }
        _end__if_fn50:;
        numChunks = ret2;
        call_tmp15 = (ret2 <= INT64(1));
        if (call_tmp15) {
          _ic__F0_this2 = _ic__F0_this;
          end = (&_ic__F0_this2)->_high;
          x2 = _ic__F1_x1__e1_args;
          for (i2 = (&_ic__F0_this2)->_low; ((i2 <= end)); i2 += INT64(1)) {
            call_tmp16 = ((LocCyclicDom_1_int64_t_F_chpl)(nil));
            chpl_macro_tmp_189.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_189.addr = call_tmp16;
            T4 = chpl_macro_tmp_189;
            *(x2 + i2) = T4;
          }
        } else {
          ret_to_arg_ref_tmp_2 = &ret_tmp2;
          chpl_build_low_bounded_range(INT64(0), ret_to_arg_ref_tmp_2);
          ret_to_arg_ref_tmp_3 = &ret_tmp3;
          chpl___POUND_(&ret_tmp2, ret2, ret_to_arg_ref_tmp_3);
          tmpIter = ret_tmp3;
          cast_tmp = chpl_here_alloc(sizeof(chpl_chpl___EndCount_atomic_int64_int64_t_object), INT16(2));
          this13 = ((chpl___EndCount_atomic_int64_int64_t)(cast_tmp));
          ((object)(this13))->chpl__cid = chpl__cid_chpl___EndCount_atomic_int64_int64_t;
          (this13)->i = _init_class_tmp_;
          (this13)->taskCnt = INT64(0);
          (this13)->taskList = NULL;
          ret3 = type_tmp;
          _ref_tmp_ = &ret3;
          atomic_init_int_least64_t(_ref_tmp_, INT64(0));
          (&this14)->_v = ret3;
          ret_to_arg_ref_tmp_4 = &ret_tmp4;
          _construct_atomic_int64(ret3, &this14, ret_to_arg_ref_tmp_4);
          (this13)->i = ret_tmp4;
          (this13)->taskCnt = INT64(0);
          call_tmp17 = ((c_void_ptr)(nil));
          (this13)->taskList = call_tmp17;
          wrap_call_tmp = _construct__EndCount(&ret_tmp4, INT64(0), call_tmp17, this13);
          _coforallCount = wrap_call_tmp;
          _ref_tmp_2 = &tmpIter;
          chpl_macro_tmp_190.locale = chpl_gen_getLocaleID();
          chpl_macro_tmp_190.addr = _ref_tmp_2;
          T5 = chpl_macro_tmp_190;
          call_tmp18 = length2(T5);
          numTasks = call_tmp18;
          _upEndCount3(_coforallCount, call_tmp18);
          _ic__F0_this3 = tmpIter;
          end2 = (&_ic__F0_this3)->_high;
          for (i3 = (&_ic__F0_this3)->_low; ((i3 <= end2)); i3 += INT64(1)) {
            this15 = &_ic__F0_this;
            _args_forcoforall_fn = ((_class_localscoforall_fn29)(&chpl_macro_tmp_191));
            (_args_forcoforall_fn)->_0_x1__e1_args = _ic__F1_x1__e1_args;
            T6 = this15;
            (_args_forcoforall_fn)->_1_tmp = T6;
            (_args_forcoforall_fn)->_2_len = len;
            (_args_forcoforall_fn)->_3_numChunks = numChunks;
            (_args_forcoforall_fn)->_4__yieldedIndex = i3;
            (_args_forcoforall_fn)->_5__coforallCount = _coforallCount;
            _args_vforcoforall_fn = ((void*)(_args_forcoforall_fn));
            _taskListNodecoforall_fn = chpl_nodeID;
            /*** wrapcoforall_fn21 ***/ chpl_taskListAddCoStmt(INT32(-2), INT64(150), ((chpl_task_bundle_p)(_args_vforcoforall_fn)), sizeof(chpl__class_localscoforall_fn29_object), &((_coforallCount)->taskList), _taskListNodecoforall_fn, INT64(740), INT32(2));
          }
          _waitEndCount3(_coforallCount, numTasks);
          _field_destructor_tmp_ = &((_coforallCount)->i);
          call_tmp19 = &((_field_destructor_tmp_)->_v);
          atomic_destroy_int_least64_t(call_tmp19);
          call_tmp20 = chpl_gen_getLocaleID();
          rvfDerefTmp = _coforallCount;
          isdirect = chpl_doDirectExecuteOn(&call_tmp20);
          if (isdirect) {
            chpl_macro_tmp_192.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_192.addr = rvfDerefTmp;
            T7 = chpl_macro_tmp_192;
            on_fn123(T7);
          } else {
            _args_foron_fn = ((_class_localson_fn104)(&chpl_macro_tmp_193));
            (_args_foron_fn)->_0_rvfDerefTmp = call_tmp20;
            chpl_macro_tmp_194.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_194.addr = rvfDerefTmp;
            T8 = chpl_macro_tmp_194;
            (_args_foron_fn)->_1_rvfDerefTmp = T8;
            _args_vforon_fn = ((void*)(_args_foron_fn));
            /*** wrapon_fn131 ***/ chpl_executeOn(&call_tmp20, INT32(196), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn104_object), INT64(1227), INT32(2));
          }
        }
      } else {
        halt(&local__str_literal_177 /* "ArrayInit.heuristicInit should have been made concrete" */, INT64(746), INT32(2));
      }
    }
  }
  _end_init_elts:;
  return;
}

/* ChapelBase.chpl:671 */
static void init_elts18(_ddata_FCHGlobalNode x,
                        int64_t s) {
  string local__str_literal_177;
  chpl____wide_heap_DummyLocale local_dummyLocale = {CHPL_LOCALEID_T_INIT, NULL};
  int32_t local_c_sublocid_any;
  ArrayInit initMethod;
  ArrayInit ret;
  chpl_bool call_tmp2;
  chpl_bool call_tmp3;
  chpl_localeID_t _autoCopy_tmp_;
  chpl____wide_locale call_tmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DummyLocale T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp7;
  chpl_bool call_tmp8;
  chpl_bool call_tmp9;
  int64_t _ic__F1_high;
  int64_t i;
  FCHGlobalNode_chpl call_tmp10 = NULL;
  chpl____wide_FCHGlobalNode T2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp11;
  range_int64_t_bounded_F ret_tmp;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
  range_int64_t_bounded_F _ic__F0_this;
  _ddata_FCHGlobalNode _ic__F1_x1__e1_args = NULL;
  int64_t len;
  int64_t call_tmp12;
  _ref_range_int64_t_bounded_F this12 = NULL;
  chpl____wide__ref_range_int64_t_bounded_F T3 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t numChunks;
  int64_t ret2;
  chpl_bool call_tmp13;
  int64_t call_tmp14;
  chpl_bool call_tmp15;
  range_int64_t_bounded_F _ic__F0_this2;
  int64_t i2;
  int64_t ret3;
  int64_t end;
  int64_t ret4;
  _ddata_FCHGlobalNode x2 = NULL;
  FCHGlobalNode_chpl call_tmp16 = NULL;
  chpl____wide_FCHGlobalNode T4 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F tmpIter;
  range_int64_t_boundedLow_F ret_tmp2;
  _ref_range_int64_t_boundedLow_F ret_to_arg_ref_tmp_2 = NULL;
  range_int64_t_bounded_F ret_tmp3;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_3 = NULL;
  chpl___EndCount_atomic_int64_int64_t _coforallCount = NULL;
  chpl___EndCount_atomic_int64_int64_t this13 = NULL;
  c_void_ptr cast_tmp;
  atomic_int64 _init_class_tmp_;
  atomic_int64 this14;
  atomic_int_least64_t ret5;
  atomic_int_least64_t type_tmp;
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
  atomic_int64 ret_tmp4;
  _ref_atomic_int64 ret_to_arg_ref_tmp_4 = NULL;
  c_void_ptr call_tmp17;
  chpl___EndCount_atomic_int64_int64_t wrap_call_tmp = NULL;
  int64_t numTasks;
  _ref_range_int64_t_bounded_F _ref_tmp_2 = NULL;
  int64_t call_tmp18;
  chpl____wide__ref_range_int64_t_bounded_F T5 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F _ic__F0_this3;
  int64_t i3;
  int64_t ret6;
  int64_t end2;
  int64_t ret7;
  _ref_range_int64_t_bounded_F this15 = NULL;
  _class_localscoforall_fn31 _args_forcoforall_fn = NULL;
  _ref_range_int64_t_bounded_F T6 = NULL;
  c_void_ptr _args_vforcoforall_fn;
  int64_t _taskListNodecoforall_fn;
  _ref_atomic_int64 _field_destructor_tmp_ = NULL;
  _ref_atomic_int_least64_t call_tmp19 = NULL;
  chpl_localeID_t call_tmp20;
  chpl___EndCount_atomic_int64_int64_t rvfDerefTmp = NULL;
  chpl_bool isdirect;
  chpl____wide__EndCount_atomic_int64_int64_t T7 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn104 _args_foron_fn = NULL;
  chpl____wide__EndCount_atomic_int64_int64_t T8 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn;
  chpl____wide_object chpl_macro_tmp_195;
  chpl____wide__ref__wide_DummyLocale chpl_macro_tmp_196;
  chpl____wide_object chpl_macro_tmp_197;
  chpl____wide_FCHGlobalNode chpl_macro_tmp_198;
  chpl____wide__ref_range_int64_t_bounded_F chpl_macro_tmp_199;
  chpl____wide_FCHGlobalNode chpl_macro_tmp_200;
  chpl____wide__ref_range_int64_t_bounded_F chpl_macro_tmp_201;
  chpl__class_localscoforall_fn31_object chpl_macro_tmp_202;
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_203;
  chpl__class_localson_fn104_object chpl_macro_tmp_204;
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_205;
  local__str_literal_177 /* "ArrayInit.heuristicInit should have been made concrete" */ = _str_literal_177 /* "ArrayInit.heuristicInit should have been made concrete" */;
  local_dummyLocale = dummyLocale;
  local_c_sublocid_any = c_sublocid_any;
  ret = ArrayInit_heuristicInit;
  initMethod = ret;
  call_tmp2 = (((int64_t)(ret)) == ((int64_t)(ArrayInit_heuristicInit)));
  if (call_tmp2) {
    initMethod = ArrayInit_serialInit;
  }
  call_tmp3 = (((int64_t)(initMethod)) == ((int64_t)(ArrayInit_parallelInit)));
  if (call_tmp3) {
    _autoCopy_tmp_ = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any);
    call_tmp4 = chpl_localeID_to_locale(&_autoCopy_tmp_);
    chpl_macro_tmp_195.locale = (&call_tmp4)->locale;
    chpl_macro_tmp_195.addr = ((object)((&call_tmp4)->addr));
    call_tmp5 = chpl_macro_tmp_195;
    chpl_macro_tmp_196.locale = (&local_dummyLocale)->locale;
    chpl_macro_tmp_196.addr = &(((&local_dummyLocale)->addr)->value);
    chpl_gen_comm_get(((void*)(&T)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_196).locale), INT64(0), INT32(0)), (chpl_macro_tmp_196).addr, sizeof(chpl____wide_DummyLocale), -1, COMMID(14), INT64(563), INT64(25));
    chpl_macro_tmp_197.locale = (&T)->locale;
    chpl_macro_tmp_197.addr = ((object)((&T)->addr));
    call_tmp6 = chpl_macro_tmp_197;
    call_tmp7 = (! (((&call_tmp5)->addr != (&call_tmp6)->addr) || ((!(! (&call_tmp5)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp5)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&call_tmp6)->locale), INT64(0), INT32(0))))));
    if (call_tmp7) {
      initMethod = ArrayInit_serialInit;
    }
  }
  call_tmp8 = (((int64_t)(initMethod)) == ((int64_t)(ArrayInit_noInit)));
  if (call_tmp8) {
    goto _end_init_elts;
  } else {
    call_tmp9 = (((int64_t)(initMethod)) == ((int64_t)(ArrayInit_serialInit)));
    if (call_tmp9) {
      _ic__F1_high = ((int64_t)((s - INT64(1))));
      for (i = INT64(0); ((i <= _ic__F1_high)); i += INT64(1)) {
        call_tmp10 = ((FCHGlobalNode_chpl)(nil));
        chpl_macro_tmp_198.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_198.addr = call_tmp10;
        T2 = chpl_macro_tmp_198;
        *(x + i) = T2;
      }
    } else {
      call_tmp11 = (((int64_t)(initMethod)) == ((int64_t)(ArrayInit_parallelInit)));
      if (call_tmp11) {
        ret_to_arg_ref_tmp_ = &ret_tmp;
        chpl_build_bounded_range(INT64(0), ((int64_t)((s - INT64(1)))), ret_to_arg_ref_tmp_);
        _ic__F0_this = ret_tmp;
        _ic__F1_x1__e1_args = x;
        this12 = &_ic__F0_this;
        chpl_macro_tmp_199.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_199.addr = this12;
        T3 = chpl_macro_tmp_199;
        call_tmp12 = length2(T3);
        len = call_tmp12;
        call_tmp13 = chpl_task_getSerial();
        if (call_tmp13) {
          ret2 = INT64(1);
          goto _end__if_fn50;
        } else {
          call_tmp14 = _computeNumChunks_chpl3(call_tmp12);
          ret2 = call_tmp14;
          goto _end__if_fn50;
        }
        _end__if_fn50:;
        numChunks = ret2;
        call_tmp15 = (ret2 <= INT64(1));
        if (call_tmp15) {
          _ic__F0_this2 = _ic__F0_this;
          ret3 = (&_ic__F0_this2)->_low;
          ret4 = (&_ic__F0_this2)->_high;
          end = ret4;
          x2 = _ic__F1_x1__e1_args;
          for (i2 = ret3; ((i2 <= end)); i2 += INT64(1)) {
            call_tmp16 = ((FCHGlobalNode_chpl)(nil));
            chpl_macro_tmp_200.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_200.addr = call_tmp16;
            T4 = chpl_macro_tmp_200;
            *(x2 + i2) = T4;
          }
        } else {
          ret_to_arg_ref_tmp_2 = &ret_tmp2;
          chpl_build_low_bounded_range(INT64(0), ret_to_arg_ref_tmp_2);
          ret_to_arg_ref_tmp_3 = &ret_tmp3;
          chpl___POUND_(&ret_tmp2, ret2, ret_to_arg_ref_tmp_3);
          tmpIter = ret_tmp3;
          cast_tmp = chpl_here_alloc(sizeof(chpl_chpl___EndCount_atomic_int64_int64_t_object), INT16(2));
          this13 = ((chpl___EndCount_atomic_int64_int64_t)(cast_tmp));
          ((object)(this13))->chpl__cid = chpl__cid_chpl___EndCount_atomic_int64_int64_t;
          (this13)->i = _init_class_tmp_;
          (this13)->taskCnt = INT64(0);
          (this13)->taskList = NULL;
          ret5 = type_tmp;
          _ref_tmp_ = &ret5;
          atomic_init_int_least64_t(_ref_tmp_, INT64(0));
          (&this14)->_v = ret5;
          ret_to_arg_ref_tmp_4 = &ret_tmp4;
          _construct_atomic_int64(ret5, &this14, ret_to_arg_ref_tmp_4);
          (this13)->i = ret_tmp4;
          (this13)->taskCnt = INT64(0);
          call_tmp17 = ((c_void_ptr)(nil));
          (this13)->taskList = call_tmp17;
          wrap_call_tmp = _construct__EndCount(&ret_tmp4, INT64(0), call_tmp17, this13);
          _coforallCount = wrap_call_tmp;
          _ref_tmp_2 = &tmpIter;
          chpl_macro_tmp_201.locale = chpl_gen_getLocaleID();
          chpl_macro_tmp_201.addr = _ref_tmp_2;
          T5 = chpl_macro_tmp_201;
          call_tmp18 = length2(T5);
          numTasks = call_tmp18;
          _upEndCount3(_coforallCount, call_tmp18);
          _ic__F0_this3 = tmpIter;
          ret6 = (&_ic__F0_this3)->_low;
          ret7 = (&_ic__F0_this3)->_high;
          end2 = ret7;
          for (i3 = ret6; ((i3 <= end2)); i3 += INT64(1)) {
            this15 = &_ic__F0_this;
            _args_forcoforall_fn = ((_class_localscoforall_fn31)(&chpl_macro_tmp_202));
            (_args_forcoforall_fn)->_0_x1__e1_args = _ic__F1_x1__e1_args;
            (_args_forcoforall_fn)->_1_numChunks = numChunks;
            (_args_forcoforall_fn)->_2__yieldedIndex = i3;
            (_args_forcoforall_fn)->_3__coforallCount = _coforallCount;
            T6 = this15;
            (_args_forcoforall_fn)->_4_tmp = T6;
            (_args_forcoforall_fn)->_5_len = len;
            _args_vforcoforall_fn = ((void*)(_args_forcoforall_fn));
            _taskListNodecoforall_fn = chpl_nodeID;
            /*** wrapcoforall_fn28 ***/ chpl_taskListAddCoStmt(INT32(-2), INT64(157), ((chpl_task_bundle_p)(_args_vforcoforall_fn)), sizeof(chpl__class_localscoforall_fn31_object), &((_coforallCount)->taskList), _taskListNodecoforall_fn, INT64(740), INT32(2));
          }
          _waitEndCount3(_coforallCount, numTasks);
          _field_destructor_tmp_ = &((_coforallCount)->i);
          call_tmp19 = &((_field_destructor_tmp_)->_v);
          atomic_destroy_int_least64_t(call_tmp19);
          call_tmp20 = chpl_gen_getLocaleID();
          rvfDerefTmp = _coforallCount;
          isdirect = chpl_doDirectExecuteOn(&call_tmp20);
          if (isdirect) {
            chpl_macro_tmp_203.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_203.addr = rvfDerefTmp;
            T7 = chpl_macro_tmp_203;
            on_fn123(T7);
          } else {
            _args_foron_fn = ((_class_localson_fn104)(&chpl_macro_tmp_204));
            (_args_foron_fn)->_0_rvfDerefTmp = call_tmp20;
            chpl_macro_tmp_205.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_205.addr = rvfDerefTmp;
            T8 = chpl_macro_tmp_205;
            (_args_foron_fn)->_1_rvfDerefTmp = T8;
            _args_vforon_fn = ((void*)(_args_foron_fn));
            /*** wrapon_fn131 ***/ chpl_executeOn(&call_tmp20, INT32(196), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn104_object), INT64(1227), INT32(2));
          }
        }
      } else {
        halt(&local__str_literal_177 /* "ArrayInit.heuristicInit should have been made concrete" */, INT64(746), INT32(2));
      }
    }
  }
  _end_init_elts:;
  return;
}

/* ChapelBase.chpl:671 */
static void init_elts16(_ddata__remoteAccessData__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F_F x,
                        int64_t s) {
  string local__str_literal_177;
  chpl____wide_heap_DummyLocale local_dummyLocale = {CHPL_LOCALEID_T_INIT, NULL};
  int32_t local_c_sublocid_any;
  ArrayInit initMethod;
  ArrayInit ret;
  chpl_bool call_tmp2;
  chpl_bool call_tmp3;
  chpl_localeID_t _autoCopy_tmp_;
  chpl____wide_locale call_tmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DummyLocale T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp7;
  chpl_bool call_tmp8;
  chpl_bool call_tmp9;
  int64_t _ic__F1_high;
  int64_t i;
  chpl___RuntimeTypeInfo12 eltType;
  _remoteAccessData__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F_F this12;
  chpl___RuntimeTypeInfo12 _init_class_tmp_;
  _domain_DefaultRectangularDom_1_int64_t_F _init_class_tmp_2;
  chpl____wide_DefaultRectangularDom_1_int64_t_F T2 = {CHPL_LOCALEID_T_INIT, NULL};
  _tuple_1_star_int64_t _init_class_tmp_3;
  _tuple_1_star_int64_t _init_class_tmp_4;
  _tuple_1_star_int64_t _init_class_tmp_5;
  chpl____wide__ddata__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t T3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ddata__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t T4 = {CHPL_LOCALEID_T_INIT, NULL};
  _tuple_1_star_int64_t tup;
  _tuple_1_star_int64_t tup2;
  _tuple_1_star_int64_t tup3;
  _ddata__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t call_tmp10 = NULL;
  chpl____wide__ddata__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t T5 = {CHPL_LOCALEID_T_INIT, NULL};
  _ddata__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t call_tmp11 = NULL;
  chpl____wide__ddata__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t T6 = {CHPL_LOCALEID_T_INIT, NULL};
  _remoteAccessData__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F_F ret_tmp;
  _ref__remoteAccessData__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F_F ret_to_arg_ref_tmp_ = NULL;
  chpl_bool call_tmp12;
  range_int64_t_bounded_F ret_tmp2;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_2 = NULL;
  range_int64_t_bounded_F _ic__F0_this;
  _ddata__remoteAccessData__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F_F _ic__F1_x1__e1_args = NULL;
  int64_t len;
  int64_t call_tmp13;
  _ref_range_int64_t_bounded_F this13 = NULL;
  chpl____wide__ref_range_int64_t_bounded_F T7 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t numChunks;
  int64_t ret2;
  chpl_bool call_tmp14;
  int64_t call_tmp15;
  chpl_bool call_tmp16;
  range_int64_t_bounded_F _ic__F0_this2;
  int64_t i2;
  int64_t ret3;
  int64_t end;
  int64_t ret4;
  _ddata__remoteAccessData__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F_F x2 = NULL;
  chpl___RuntimeTypeInfo12 eltType2;
  _remoteAccessData__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F_F this14;
  chpl___RuntimeTypeInfo12 _init_class_tmp_6;
  _domain_DefaultRectangularDom_1_int64_t_F _init_class_tmp_7;
  chpl____wide_DefaultRectangularDom_1_int64_t_F T8 = {CHPL_LOCALEID_T_INIT, NULL};
  _tuple_1_star_int64_t _init_class_tmp_8;
  _tuple_1_star_int64_t _init_class_tmp_9;
  _tuple_1_star_int64_t _init_class_tmp_10;
  chpl____wide__ddata__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t T9 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ddata__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t T10 = {CHPL_LOCALEID_T_INIT, NULL};
  _tuple_1_star_int64_t tup4;
  _tuple_1_star_int64_t tup5;
  _tuple_1_star_int64_t tup6;
  _ddata__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t call_tmp17 = NULL;
  chpl____wide__ddata__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t T11 = {CHPL_LOCALEID_T_INIT, NULL};
  _ddata__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t call_tmp18 = NULL;
  chpl____wide__ddata__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t T12 = {CHPL_LOCALEID_T_INIT, NULL};
  _remoteAccessData__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F_F ret_tmp3;
  _ref__remoteAccessData__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F_F ret_to_arg_ref_tmp_3 = NULL;
  range_int64_t_bounded_F tmpIter;
  range_int64_t_boundedLow_F ret_tmp4;
  _ref_range_int64_t_boundedLow_F ret_to_arg_ref_tmp_4 = NULL;
  range_int64_t_bounded_F ret_tmp5;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_5 = NULL;
  chpl___EndCount_atomic_int64_int64_t _coforallCount = NULL;
  chpl___EndCount_atomic_int64_int64_t this15 = NULL;
  c_void_ptr cast_tmp;
  atomic_int64 _init_class_tmp_11;
  atomic_int64 this16;
  atomic_int_least64_t ret5;
  atomic_int_least64_t type_tmp;
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
  atomic_int64 ret_tmp6;
  _ref_atomic_int64 ret_to_arg_ref_tmp_6 = NULL;
  c_void_ptr call_tmp19;
  chpl___EndCount_atomic_int64_int64_t wrap_call_tmp = NULL;
  int64_t numTasks;
  _ref_range_int64_t_bounded_F _ref_tmp_2 = NULL;
  int64_t call_tmp20;
  chpl____wide__ref_range_int64_t_bounded_F T13 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F _ic__F0_this3;
  int64_t i3;
  int64_t ret6;
  int64_t end2;
  int64_t ret7;
  _ref_range_int64_t_bounded_F this17 = NULL;
  _class_localscoforall_fn25 _args_forcoforall_fn = NULL;
  _ref_range_int64_t_bounded_F T14 = NULL;
  c_void_ptr _args_vforcoforall_fn;
  int64_t _taskListNodecoforall_fn;
  _ref_atomic_int64 _field_destructor_tmp_ = NULL;
  _ref_atomic_int_least64_t call_tmp21 = NULL;
  chpl_localeID_t call_tmp22;
  chpl___EndCount_atomic_int64_int64_t rvfDerefTmp = NULL;
  chpl_bool isdirect;
  chpl____wide__EndCount_atomic_int64_int64_t T15 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn104 _args_foron_fn = NULL;
  chpl____wide__EndCount_atomic_int64_int64_t T16 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn;
  chpl____wide_object chpl_macro_tmp_206;
  chpl____wide__ref__wide_DummyLocale chpl_macro_tmp_207;
  chpl____wide_object chpl_macro_tmp_208;
  chpl____wide__nilType chpl_macro_tmp_209;
  chpl____wide_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_210;
  chpl____wide__nilType chpl_macro_tmp_211;
  chpl____wide__ddata__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t chpl_macro_tmp_212;
  chpl____wide__nilType chpl_macro_tmp_213;
  chpl____wide__ddata__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t chpl_macro_tmp_214;
  chpl____wide__ddata__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t chpl_macro_tmp_215;
  chpl____wide__ddata__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t chpl_macro_tmp_216;
  chpl____wide__ref_range_int64_t_bounded_F chpl_macro_tmp_217;
  chpl____wide__nilType chpl_macro_tmp_218;
  chpl____wide_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_219;
  chpl____wide__nilType chpl_macro_tmp_220;
  chpl____wide__ddata__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t chpl_macro_tmp_221;
  chpl____wide__nilType chpl_macro_tmp_222;
  chpl____wide__ddata__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t chpl_macro_tmp_223;
  chpl____wide__ddata__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t chpl_macro_tmp_224;
  chpl____wide__ddata__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t chpl_macro_tmp_225;
  chpl____wide__ref_range_int64_t_bounded_F chpl_macro_tmp_226;
  chpl__class_localscoforall_fn25_object chpl_macro_tmp_227;
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_228;
  chpl__class_localson_fn104_object chpl_macro_tmp_229;
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_230;
  local__str_literal_177 /* "ArrayInit.heuristicInit should have been made concrete" */ = _str_literal_177 /* "ArrayInit.heuristicInit should have been made concrete" */;
  local_dummyLocale = dummyLocale;
  local_c_sublocid_any = c_sublocid_any;
  ret = ArrayInit_heuristicInit;
  initMethod = ret;
  call_tmp2 = (((int64_t)(ret)) == ((int64_t)(ArrayInit_heuristicInit)));
  if (call_tmp2) {
    initMethod = ArrayInit_serialInit;
  }
  call_tmp3 = (((int64_t)(initMethod)) == ((int64_t)(ArrayInit_parallelInit)));
  if (call_tmp3) {
    _autoCopy_tmp_ = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any);
    call_tmp4 = chpl_localeID_to_locale(&_autoCopy_tmp_);
    chpl_macro_tmp_206.locale = (&call_tmp4)->locale;
    chpl_macro_tmp_206.addr = ((object)((&call_tmp4)->addr));
    call_tmp5 = chpl_macro_tmp_206;
    chpl_macro_tmp_207.locale = (&local_dummyLocale)->locale;
    chpl_macro_tmp_207.addr = &(((&local_dummyLocale)->addr)->value);
    chpl_gen_comm_get(((void*)(&T)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_207).locale), INT64(0), INT32(0)), (chpl_macro_tmp_207).addr, sizeof(chpl____wide_DummyLocale), -1, COMMID(15), INT64(563), INT64(25));
    chpl_macro_tmp_208.locale = (&T)->locale;
    chpl_macro_tmp_208.addr = ((object)((&T)->addr));
    call_tmp6 = chpl_macro_tmp_208;
    call_tmp7 = (! (((&call_tmp5)->addr != (&call_tmp6)->addr) || ((!(! (&call_tmp5)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp5)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&call_tmp6)->locale), INT64(0), INT32(0))))));
    if (call_tmp7) {
      initMethod = ArrayInit_serialInit;
    }
  }
  call_tmp8 = (((int64_t)(initMethod)) == ((int64_t)(ArrayInit_noInit)));
  if (call_tmp8) {
    goto _end_init_elts;
  } else {
    call_tmp9 = (((int64_t)(initMethod)) == ((int64_t)(ArrayInit_serialInit)));
    if (call_tmp9) {
      _ic__F1_high = ((int64_t)((s - INT64(1))));
      for (i = INT64(0); ((i <= _ic__F1_high)); i += INT64(1)) {
        (&_init_class_tmp_2)->_pid = INT64(0);
        chpl_macro_tmp_209.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_209.addr = nil;
        chpl_macro_tmp_210.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_210.addr = NULL;
        T2 = chpl_macro_tmp_210;
        (&_init_class_tmp_2)->_instance = T2;
        (&_init_class_tmp_2)->_unowned = UINT8(false);
        (&_init_class_tmp_)->dom = _init_class_tmp_2;
        (&this12)->eltType = _init_class_tmp_;
        *(_init_class_tmp_3 + INT64(0)) = INT64(0);
        *((&this12)->off + INT64(0)) = *(_init_class_tmp_3 + INT64(0));
        *(_init_class_tmp_4 + INT64(0)) = INT64(0);
        *((&this12)->blk + INT64(0)) = *(_init_class_tmp_4 + INT64(0));
        *(_init_class_tmp_5 + INT64(0)) = INT64(0);
        *((&this12)->str + INT64(0)) = *(_init_class_tmp_5 + INT64(0));
        (&this12)->origin = INT64(0);
        (&this12)->factoredOffs = INT64(0);
        chpl_macro_tmp_211.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_211.addr = nil;
        chpl_macro_tmp_212.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_212.addr = NULL;
        T3 = chpl_macro_tmp_212;
        (&this12)->data = T3;
        chpl_macro_tmp_213.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_213.addr = nil;
        chpl_macro_tmp_214.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_214.addr = NULL;
        T4 = chpl_macro_tmp_214;
        (&this12)->shiftedData = T4;
        *(tup + INT64(0)) = INT64(0);
        *((&this12)->off + INT64(0)) = *(tup + INT64(0));
        *(tup2 + INT64(0)) = INT64(0);
        *((&this12)->blk + INT64(0)) = *(tup2 + INT64(0));
        *(tup3 + INT64(0)) = INT64(0);
        *((&this12)->str + INT64(0)) = *(tup3 + INT64(0));
        (&this12)->origin = INT64(0);
        (&this12)->factoredOffs = INT64(0);
        call_tmp10 = ((_ddata__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t)(nil));
        chpl_macro_tmp_215.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_215.addr = call_tmp10;
        T5 = chpl_macro_tmp_215;
        (&this12)->data = T5;
        call_tmp11 = ((_ddata__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t)(nil));
        chpl_macro_tmp_216.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_216.addr = call_tmp11;
        T6 = chpl_macro_tmp_216;
        (&this12)->shiftedData = T6;
        ret_to_arg_ref_tmp_ = &ret_tmp;
        _construct__remoteAccessData(&eltType, &tup, &tup2, &tup3, INT64(0), INT64(0), call_tmp10, call_tmp11, &this12, ret_to_arg_ref_tmp_);
        *(x + i) = ret_tmp;
      }
    } else {
      call_tmp12 = (((int64_t)(initMethod)) == ((int64_t)(ArrayInit_parallelInit)));
      if (call_tmp12) {
        ret_to_arg_ref_tmp_2 = &ret_tmp2;
        chpl_build_bounded_range(INT64(0), ((int64_t)((s - INT64(1)))), ret_to_arg_ref_tmp_2);
        _ic__F0_this = ret_tmp2;
        _ic__F1_x1__e1_args = x;
        this13 = &_ic__F0_this;
        chpl_macro_tmp_217.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_217.addr = this13;
        T7 = chpl_macro_tmp_217;
        call_tmp13 = length2(T7);
        len = call_tmp13;
        call_tmp14 = chpl_task_getSerial();
        if (call_tmp14) {
          ret2 = INT64(1);
          goto _end__if_fn50;
        } else {
          call_tmp15 = _computeNumChunks_chpl3(call_tmp13);
          ret2 = call_tmp15;
          goto _end__if_fn50;
        }
        _end__if_fn50:;
        numChunks = ret2;
        call_tmp16 = (ret2 <= INT64(1));
        if (call_tmp16) {
          _ic__F0_this2 = _ic__F0_this;
          ret3 = (&_ic__F0_this2)->_low;
          ret4 = (&_ic__F0_this2)->_high;
          end = ret4;
          x2 = _ic__F1_x1__e1_args;
          for (i2 = ret3; ((i2 <= end)); i2 += INT64(1)) {
            (&_init_class_tmp_7)->_pid = INT64(0);
            chpl_macro_tmp_218.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_218.addr = nil;
            chpl_macro_tmp_219.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_219.addr = NULL;
            T8 = chpl_macro_tmp_219;
            (&_init_class_tmp_7)->_instance = T8;
            (&_init_class_tmp_7)->_unowned = UINT8(false);
            (&_init_class_tmp_6)->dom = _init_class_tmp_7;
            (&this14)->eltType = _init_class_tmp_6;
            *(_init_class_tmp_8 + INT64(0)) = INT64(0);
            *((&this14)->off + INT64(0)) = *(_init_class_tmp_8 + INT64(0));
            *(_init_class_tmp_9 + INT64(0)) = INT64(0);
            *((&this14)->blk + INT64(0)) = *(_init_class_tmp_9 + INT64(0));
            *(_init_class_tmp_10 + INT64(0)) = INT64(0);
            *((&this14)->str + INT64(0)) = *(_init_class_tmp_10 + INT64(0));
            (&this14)->origin = INT64(0);
            (&this14)->factoredOffs = INT64(0);
            chpl_macro_tmp_220.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_220.addr = nil;
            chpl_macro_tmp_221.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_221.addr = NULL;
            T9 = chpl_macro_tmp_221;
            (&this14)->data = T9;
            chpl_macro_tmp_222.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_222.addr = nil;
            chpl_macro_tmp_223.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_223.addr = NULL;
            T10 = chpl_macro_tmp_223;
            (&this14)->shiftedData = T10;
            *(tup4 + INT64(0)) = INT64(0);
            *((&this14)->off + INT64(0)) = *(tup4 + INT64(0));
            *(tup5 + INT64(0)) = INT64(0);
            *((&this14)->blk + INT64(0)) = *(tup5 + INT64(0));
            *(tup6 + INT64(0)) = INT64(0);
            *((&this14)->str + INT64(0)) = *(tup6 + INT64(0));
            (&this14)->origin = INT64(0);
            (&this14)->factoredOffs = INT64(0);
            call_tmp17 = ((_ddata__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t)(nil));
            chpl_macro_tmp_224.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_224.addr = call_tmp17;
            T11 = chpl_macro_tmp_224;
            (&this14)->data = T11;
            call_tmp18 = ((_ddata__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t)(nil));
            chpl_macro_tmp_225.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_225.addr = call_tmp18;
            T12 = chpl_macro_tmp_225;
            (&this14)->shiftedData = T12;
            ret_to_arg_ref_tmp_3 = &ret_tmp3;
            _construct__remoteAccessData(&eltType2, &tup4, &tup5, &tup6, INT64(0), INT64(0), call_tmp17, call_tmp18, &this14, ret_to_arg_ref_tmp_3);
            *(x2 + i2) = ret_tmp3;
          }
        } else {
          ret_to_arg_ref_tmp_4 = &ret_tmp4;
          chpl_build_low_bounded_range(INT64(0), ret_to_arg_ref_tmp_4);
          ret_to_arg_ref_tmp_5 = &ret_tmp5;
          chpl___POUND_(&ret_tmp4, ret2, ret_to_arg_ref_tmp_5);
          tmpIter = ret_tmp5;
          cast_tmp = chpl_here_alloc(sizeof(chpl_chpl___EndCount_atomic_int64_int64_t_object), INT16(2));
          this15 = ((chpl___EndCount_atomic_int64_int64_t)(cast_tmp));
          ((object)(this15))->chpl__cid = chpl__cid_chpl___EndCount_atomic_int64_int64_t;
          (this15)->i = _init_class_tmp_11;
          (this15)->taskCnt = INT64(0);
          (this15)->taskList = NULL;
          ret5 = type_tmp;
          _ref_tmp_ = &ret5;
          atomic_init_int_least64_t(_ref_tmp_, INT64(0));
          (&this16)->_v = ret5;
          ret_to_arg_ref_tmp_6 = &ret_tmp6;
          _construct_atomic_int64(ret5, &this16, ret_to_arg_ref_tmp_6);
          (this15)->i = ret_tmp6;
          (this15)->taskCnt = INT64(0);
          call_tmp19 = ((c_void_ptr)(nil));
          (this15)->taskList = call_tmp19;
          wrap_call_tmp = _construct__EndCount(&ret_tmp6, INT64(0), call_tmp19, this15);
          _coforallCount = wrap_call_tmp;
          _ref_tmp_2 = &tmpIter;
          chpl_macro_tmp_226.locale = chpl_gen_getLocaleID();
          chpl_macro_tmp_226.addr = _ref_tmp_2;
          T13 = chpl_macro_tmp_226;
          call_tmp20 = length2(T13);
          numTasks = call_tmp20;
          _upEndCount3(_coforallCount, call_tmp20);
          _ic__F0_this3 = tmpIter;
          ret6 = (&_ic__F0_this3)->_low;
          ret7 = (&_ic__F0_this3)->_high;
          end2 = ret7;
          for (i3 = ret6; ((i3 <= end2)); i3 += INT64(1)) {
            this17 = &_ic__F0_this;
            _args_forcoforall_fn = ((_class_localscoforall_fn25)(&chpl_macro_tmp_227));
            (_args_forcoforall_fn)->_0_x1__e1_args = _ic__F1_x1__e1_args;
            (_args_forcoforall_fn)->_1_numChunks = numChunks;
            (_args_forcoforall_fn)->_2__yieldedIndex = i3;
            (_args_forcoforall_fn)->_3__coforallCount = _coforallCount;
            T14 = this17;
            (_args_forcoforall_fn)->_4_tmp = T14;
            (_args_forcoforall_fn)->_5_len = len;
            _args_vforcoforall_fn = ((void*)(_args_forcoforall_fn));
            _taskListNodecoforall_fn = chpl_nodeID;
            /*** wrapcoforall_fn23 ***/ chpl_taskListAddCoStmt(INT32(-2), INT64(152), ((chpl_task_bundle_p)(_args_vforcoforall_fn)), sizeof(chpl__class_localscoforall_fn25_object), &((_coforallCount)->taskList), _taskListNodecoforall_fn, INT64(740), INT32(2));
          }
          _waitEndCount3(_coforallCount, numTasks);
          _field_destructor_tmp_ = &((_coforallCount)->i);
          call_tmp21 = &((_field_destructor_tmp_)->_v);
          atomic_destroy_int_least64_t(call_tmp21);
          call_tmp22 = chpl_gen_getLocaleID();
          rvfDerefTmp = _coforallCount;
          isdirect = chpl_doDirectExecuteOn(&call_tmp22);
          if (isdirect) {
            chpl_macro_tmp_228.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_228.addr = rvfDerefTmp;
            T15 = chpl_macro_tmp_228;
            on_fn123(T15);
          } else {
            _args_foron_fn = ((_class_localson_fn104)(&chpl_macro_tmp_229));
            (_args_foron_fn)->_0_rvfDerefTmp = call_tmp22;
            chpl_macro_tmp_230.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_230.addr = rvfDerefTmp;
            T16 = chpl_macro_tmp_230;
            (_args_foron_fn)->_1_rvfDerefTmp = T16;
            _args_vforon_fn = ((void*)(_args_foron_fn));
            /*** wrapon_fn131 ***/ chpl_executeOn(&call_tmp22, INT32(196), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn104_object), INT64(1227), INT32(2));
          }
        }
      } else {
        halt(&local__str_literal_177 /* "ArrayInit.heuristicInit should have been made concrete" */, INT64(746), INT32(2));
      }
    }
  }
  _end_init_elts:;
  return;
}

/* ChapelBase.chpl:671 */
static void init_elts15(_ddata_atomicbool x,
                        int64_t s) {
  string local__str_literal_177;
  chpl____wide_heap_DummyLocale local_dummyLocale = {CHPL_LOCALEID_T_INIT, NULL};
  int32_t local_c_sublocid_any;
  ArrayInit initMethod;
  ArrayInit ret;
  chpl_bool call_tmp2;
  chpl_bool call_tmp3;
  chpl_localeID_t _autoCopy_tmp_;
  chpl____wide_locale call_tmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DummyLocale T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp7;
  chpl_bool call_tmp8;
  chpl_bool call_tmp9;
  int64_t _ic__F1_high;
  int64_t i;
  atomicbool this12;
  atomic_bool ret2;
  atomic_bool type_tmp;
  _ref_atomic_bool _ref_tmp_ = NULL;
  atomicbool ret_tmp;
  _ref_atomicbool ret_to_arg_ref_tmp_ = NULL;
  chpl_bool call_tmp10;
  range_int64_t_bounded_F ret_tmp2;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_2 = NULL;
  range_int64_t_bounded_F _ic__F0_this;
  _ddata_atomicbool _ic__F1_x1__e1_args = NULL;
  int64_t len;
  int64_t call_tmp11;
  _ref_range_int64_t_bounded_F this13 = NULL;
  chpl____wide__ref_range_int64_t_bounded_F T2 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t numChunks;
  int64_t ret3;
  chpl_bool call_tmp12;
  int64_t call_tmp13;
  chpl_bool call_tmp14;
  range_int64_t_bounded_F _ic__F0_this2;
  int64_t i2;
  int64_t ret4;
  int64_t end;
  int64_t ret5;
  _ddata_atomicbool x2 = NULL;
  atomicbool this14;
  atomic_bool ret6;
  atomic_bool type_tmp2;
  _ref_atomic_bool _ref_tmp_2 = NULL;
  atomicbool ret_tmp3;
  _ref_atomicbool ret_to_arg_ref_tmp_3 = NULL;
  range_int64_t_bounded_F tmpIter;
  range_int64_t_boundedLow_F ret_tmp4;
  _ref_range_int64_t_boundedLow_F ret_to_arg_ref_tmp_4 = NULL;
  range_int64_t_bounded_F ret_tmp5;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_5 = NULL;
  chpl___EndCount_atomic_int64_int64_t _coforallCount = NULL;
  chpl___EndCount_atomic_int64_int64_t this15 = NULL;
  c_void_ptr cast_tmp;
  atomic_int64 _init_class_tmp_;
  atomic_int64 this16;
  atomic_int_least64_t ret7;
  atomic_int_least64_t type_tmp3;
  _ref_atomic_int_least64_t _ref_tmp_3 = NULL;
  atomic_int64 ret_tmp6;
  _ref_atomic_int64 ret_to_arg_ref_tmp_6 = NULL;
  c_void_ptr call_tmp15;
  chpl___EndCount_atomic_int64_int64_t wrap_call_tmp = NULL;
  int64_t numTasks;
  _ref_range_int64_t_bounded_F _ref_tmp_4 = NULL;
  int64_t call_tmp16;
  chpl____wide__ref_range_int64_t_bounded_F T3 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F _ic__F0_this3;
  int64_t i3;
  int64_t ret8;
  int64_t end2;
  int64_t ret9;
  _ref_range_int64_t_bounded_F this17 = NULL;
  _class_localscoforall_fn28 _args_forcoforall_fn = NULL;
  _ref_range_int64_t_bounded_F T4 = NULL;
  c_void_ptr _args_vforcoforall_fn;
  int64_t _taskListNodecoforall_fn;
  _ref_atomic_int64 _field_destructor_tmp_ = NULL;
  _ref_atomic_int_least64_t call_tmp17 = NULL;
  chpl_localeID_t call_tmp18;
  chpl___EndCount_atomic_int64_int64_t rvfDerefTmp = NULL;
  chpl_bool isdirect;
  chpl____wide__EndCount_atomic_int64_int64_t T5 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn104 _args_foron_fn = NULL;
  chpl____wide__EndCount_atomic_int64_int64_t T6 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn;
  chpl____wide_object chpl_macro_tmp_231;
  chpl____wide__ref__wide_DummyLocale chpl_macro_tmp_232;
  chpl____wide_object chpl_macro_tmp_233;
  chpl____wide__ref_range_int64_t_bounded_F chpl_macro_tmp_234;
  chpl____wide__ref_range_int64_t_bounded_F chpl_macro_tmp_235;
  chpl__class_localscoforall_fn28_object chpl_macro_tmp_236;
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_237;
  chpl__class_localson_fn104_object chpl_macro_tmp_238;
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_239;
  local__str_literal_177 /* "ArrayInit.heuristicInit should have been made concrete" */ = _str_literal_177 /* "ArrayInit.heuristicInit should have been made concrete" */;
  local_dummyLocale = dummyLocale;
  local_c_sublocid_any = c_sublocid_any;
  ret = ArrayInit_heuristicInit;
  initMethod = ret;
  call_tmp2 = (((int64_t)(ret)) == ((int64_t)(ArrayInit_heuristicInit)));
  if (call_tmp2) {
    initMethod = ArrayInit_serialInit;
  }
  call_tmp3 = (((int64_t)(initMethod)) == ((int64_t)(ArrayInit_parallelInit)));
  if (call_tmp3) {
    _autoCopy_tmp_ = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any);
    call_tmp4 = chpl_localeID_to_locale(&_autoCopy_tmp_);
    chpl_macro_tmp_231.locale = (&call_tmp4)->locale;
    chpl_macro_tmp_231.addr = ((object)((&call_tmp4)->addr));
    call_tmp5 = chpl_macro_tmp_231;
    chpl_macro_tmp_232.locale = (&local_dummyLocale)->locale;
    chpl_macro_tmp_232.addr = &(((&local_dummyLocale)->addr)->value);
    chpl_gen_comm_get(((void*)(&T)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_232).locale), INT64(0), INT32(0)), (chpl_macro_tmp_232).addr, sizeof(chpl____wide_DummyLocale), -1, COMMID(16), INT64(563), INT64(25));
    chpl_macro_tmp_233.locale = (&T)->locale;
    chpl_macro_tmp_233.addr = ((object)((&T)->addr));
    call_tmp6 = chpl_macro_tmp_233;
    call_tmp7 = (! (((&call_tmp5)->addr != (&call_tmp6)->addr) || ((!(! (&call_tmp5)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp5)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&call_tmp6)->locale), INT64(0), INT32(0))))));
    if (call_tmp7) {
      initMethod = ArrayInit_serialInit;
    }
  }
  call_tmp8 = (((int64_t)(initMethod)) == ((int64_t)(ArrayInit_noInit)));
  if (call_tmp8) {
    goto _end_init_elts;
  } else {
    call_tmp9 = (((int64_t)(initMethod)) == ((int64_t)(ArrayInit_serialInit)));
    if (call_tmp9) {
      _ic__F1_high = ((int64_t)((s - INT64(1))));
      for (i = INT64(0); ((i <= _ic__F1_high)); i += INT64(1)) {
        ret2 = type_tmp;
        _ref_tmp_ = &ret2;
        atomic_init_bool(_ref_tmp_, UINT8(false));
        (&this12)->_v = ret2;
        ret_to_arg_ref_tmp_ = &ret_tmp;
        _construct_atomicbool(ret2, &this12, ret_to_arg_ref_tmp_);
        *(x + i) = ret_tmp;
      }
    } else {
      call_tmp10 = (((int64_t)(initMethod)) == ((int64_t)(ArrayInit_parallelInit)));
      if (call_tmp10) {
        ret_to_arg_ref_tmp_2 = &ret_tmp2;
        chpl_build_bounded_range(INT64(0), ((int64_t)((s - INT64(1)))), ret_to_arg_ref_tmp_2);
        _ic__F0_this = ret_tmp2;
        _ic__F1_x1__e1_args = x;
        this13 = &_ic__F0_this;
        chpl_macro_tmp_234.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_234.addr = this13;
        T2 = chpl_macro_tmp_234;
        call_tmp11 = length2(T2);
        len = call_tmp11;
        call_tmp12 = chpl_task_getSerial();
        if (call_tmp12) {
          ret3 = INT64(1);
          goto _end__if_fn50;
        } else {
          call_tmp13 = _computeNumChunks_chpl3(call_tmp11);
          ret3 = call_tmp13;
          goto _end__if_fn50;
        }
        _end__if_fn50:;
        numChunks = ret3;
        call_tmp14 = (ret3 <= INT64(1));
        if (call_tmp14) {
          _ic__F0_this2 = _ic__F0_this;
          ret4 = (&_ic__F0_this2)->_low;
          ret5 = (&_ic__F0_this2)->_high;
          end = ret5;
          for (i2 = ret4; ((i2 <= end)); i2 += INT64(1)) {
            x2 = _ic__F1_x1__e1_args;
            ret6 = type_tmp2;
            _ref_tmp_2 = &ret6;
            atomic_init_bool(_ref_tmp_2, UINT8(false));
            (&this14)->_v = ret6;
            ret_to_arg_ref_tmp_3 = &ret_tmp3;
            _construct_atomicbool(ret6, &this14, ret_to_arg_ref_tmp_3);
            *(x2 + i2) = ret_tmp3;
          }
        } else {
          ret_to_arg_ref_tmp_4 = &ret_tmp4;
          chpl_build_low_bounded_range(INT64(0), ret_to_arg_ref_tmp_4);
          ret_to_arg_ref_tmp_5 = &ret_tmp5;
          chpl___POUND_(&ret_tmp4, ret3, ret_to_arg_ref_tmp_5);
          tmpIter = ret_tmp5;
          cast_tmp = chpl_here_alloc(sizeof(chpl_chpl___EndCount_atomic_int64_int64_t_object), INT16(2));
          this15 = ((chpl___EndCount_atomic_int64_int64_t)(cast_tmp));
          ((object)(this15))->chpl__cid = chpl__cid_chpl___EndCount_atomic_int64_int64_t;
          (this15)->i = _init_class_tmp_;
          (this15)->taskCnt = INT64(0);
          (this15)->taskList = NULL;
          ret7 = type_tmp3;
          _ref_tmp_3 = &ret7;
          atomic_init_int_least64_t(_ref_tmp_3, INT64(0));
          (&this16)->_v = ret7;
          ret_to_arg_ref_tmp_6 = &ret_tmp6;
          _construct_atomic_int64(ret7, &this16, ret_to_arg_ref_tmp_6);
          (this15)->i = ret_tmp6;
          (this15)->taskCnt = INT64(0);
          call_tmp15 = ((c_void_ptr)(nil));
          (this15)->taskList = call_tmp15;
          wrap_call_tmp = _construct__EndCount(&ret_tmp6, INT64(0), call_tmp15, this15);
          _coforallCount = wrap_call_tmp;
          _ref_tmp_4 = &tmpIter;
          chpl_macro_tmp_235.locale = chpl_gen_getLocaleID();
          chpl_macro_tmp_235.addr = _ref_tmp_4;
          T3 = chpl_macro_tmp_235;
          call_tmp16 = length2(T3);
          numTasks = call_tmp16;
          _upEndCount3(_coforallCount, call_tmp16);
          _ic__F0_this3 = tmpIter;
          ret8 = (&_ic__F0_this3)->_low;
          ret9 = (&_ic__F0_this3)->_high;
          end2 = ret9;
          for (i3 = ret8; ((i3 <= end2)); i3 += INT64(1)) {
            this17 = &_ic__F0_this;
            _args_forcoforall_fn = ((_class_localscoforall_fn28)(&chpl_macro_tmp_236));
            (_args_forcoforall_fn)->_0_x1__e1_args = _ic__F1_x1__e1_args;
            (_args_forcoforall_fn)->_1__yieldedIndex = i3;
            (_args_forcoforall_fn)->_2__coforallCount = _coforallCount;
            T4 = this17;
            (_args_forcoforall_fn)->_3_tmp = T4;
            (_args_forcoforall_fn)->_4_len = len;
            (_args_forcoforall_fn)->_5_numChunks = numChunks;
            _args_vforcoforall_fn = ((void*)(_args_forcoforall_fn));
            _taskListNodecoforall_fn = chpl_nodeID;
            /*** wrapcoforall_fn29 ***/ chpl_taskListAddCoStmt(INT32(-2), INT64(158), ((chpl_task_bundle_p)(_args_vforcoforall_fn)), sizeof(chpl__class_localscoforall_fn28_object), &((_coforallCount)->taskList), _taskListNodecoforall_fn, INT64(740), INT32(2));
          }
          _waitEndCount3(_coforallCount, numTasks);
          _field_destructor_tmp_ = &((_coforallCount)->i);
          call_tmp17 = &((_field_destructor_tmp_)->_v);
          atomic_destroy_int_least64_t(call_tmp17);
          call_tmp18 = chpl_gen_getLocaleID();
          rvfDerefTmp = _coforallCount;
          isdirect = chpl_doDirectExecuteOn(&call_tmp18);
          if (isdirect) {
            chpl_macro_tmp_237.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_237.addr = rvfDerefTmp;
            T5 = chpl_macro_tmp_237;
            on_fn123(T5);
          } else {
            _args_foron_fn = ((_class_localson_fn104)(&chpl_macro_tmp_238));
            (_args_foron_fn)->_0_rvfDerefTmp = call_tmp18;
            chpl_macro_tmp_239.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_239.addr = rvfDerefTmp;
            T6 = chpl_macro_tmp_239;
            (_args_foron_fn)->_1_rvfDerefTmp = T6;
            _args_vforon_fn = ((void*)(_args_foron_fn));
            /*** wrapon_fn131 ***/ chpl_executeOn(&call_tmp18, INT32(196), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn104_object), INT64(1227), INT32(2));
          }
        }
      } else {
        halt(&local__str_literal_177 /* "ArrayInit.heuristicInit should have been made concrete" */, INT64(746), INT32(2));
      }
    }
  }
  _end_init_elts:;
  return;
}

/* ChapelBase.chpl:671 */
static void init_elts13(_ddata__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t x,
                        int64_t s,
                        _ref__RuntimeTypeInfo28 t) {
  string local__str_literal_177;
  chpl____wide_heap_DummyLocale local_dummyLocale = {CHPL_LOCALEID_T_INIT, NULL};
  int32_t local_c_sublocid_any;
  ArrayInit initMethod;
  ArrayInit ret;
  chpl_bool call_tmp2;
  chpl_bool call_tmp3;
  chpl_localeID_t _autoCopy_tmp_;
  chpl____wide_locale call_tmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DummyLocale T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp7;
  chpl_bool call_tmp8;
  chpl_bool call_tmp9;
  int64_t _ic__F1_high;
  int64_t i;
  _domain_DefaultRectangularDom_1_int64_t_F _runtime_type_tmp_;
  _domain_DefaultRectangularDom_1_int64_t_F T2;
  _array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t ret_tmp;
  _ref__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t ret_to_arg_ref_tmp_ = NULL;
  _array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t retarg_tmp;
  chpl_bool call_tmp10;
  range_int64_t_bounded_F ret_tmp2;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_2 = NULL;
  range_int64_t_bounded_F _ic__F0_this;
  _ddata__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t _ic__F1_x1__e1_args = NULL;
  int64_t len;
  int64_t call_tmp11;
  _ref_range_int64_t_bounded_F this12 = NULL;
  chpl____wide__ref_range_int64_t_bounded_F T3 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t numChunks;
  int64_t ret2;
  chpl_bool call_tmp12;
  int64_t call_tmp13;
  chpl_bool call_tmp14;
  range_int64_t_bounded_F _ic__F0_this2;
  int64_t i2;
  int64_t ret3;
  int64_t end;
  int64_t ret4;
  _ddata__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t x2 = NULL;
  _domain_DefaultRectangularDom_1_int64_t_F _runtime_type_tmp_2;
  _domain_DefaultRectangularDom_1_int64_t_F T4;
  _array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t ret_tmp3;
  _ref__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t ret_to_arg_ref_tmp_3 = NULL;
  _array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t retarg_tmp2;
  range_int64_t_bounded_F tmpIter;
  range_int64_t_boundedLow_F ret_tmp4;
  _ref_range_int64_t_boundedLow_F ret_to_arg_ref_tmp_4 = NULL;
  range_int64_t_bounded_F ret_tmp5;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_5 = NULL;
  chpl___EndCount_atomic_int64_int64_t _coforallCount = NULL;
  chpl___EndCount_atomic_int64_int64_t this13 = NULL;
  c_void_ptr cast_tmp;
  atomic_int64 _init_class_tmp_;
  atomic_int64 this14;
  atomic_int_least64_t ret5;
  atomic_int_least64_t type_tmp;
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
  atomic_int64 ret_tmp6;
  _ref_atomic_int64 ret_to_arg_ref_tmp_6 = NULL;
  c_void_ptr call_tmp15;
  chpl___EndCount_atomic_int64_int64_t wrap_call_tmp = NULL;
  int64_t numTasks;
  _ref_range_int64_t_bounded_F _ref_tmp_2 = NULL;
  int64_t call_tmp16;
  chpl____wide__ref_range_int64_t_bounded_F T5 = {CHPL_LOCALEID_T_INIT, NULL};
  range_int64_t_bounded_F _ic__F0_this3;
  int64_t i3;
  int64_t ret6;
  int64_t end2;
  int64_t ret7;
  _ref_range_int64_t_bounded_F this15 = NULL;
  _class_localscoforall_fn32 _args_forcoforall_fn = NULL;
  _ref_range_int64_t_bounded_F T6 = NULL;
  _ref__RuntimeTypeInfo28 T7 = NULL;
  c_void_ptr _args_vforcoforall_fn;
  int64_t _taskListNodecoforall_fn;
  _ref_atomic_int64 _field_destructor_tmp_ = NULL;
  _ref_atomic_int_least64_t call_tmp17 = NULL;
  chpl_localeID_t call_tmp18;
  chpl___EndCount_atomic_int64_int64_t rvfDerefTmp = NULL;
  chpl_bool isdirect;
  chpl____wide__EndCount_atomic_int64_int64_t T8 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn104 _args_foron_fn = NULL;
  chpl____wide__EndCount_atomic_int64_int64_t T9 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn;
  chpl____wide_object chpl_macro_tmp_240;
  chpl____wide__ref__wide_DummyLocale chpl_macro_tmp_241;
  chpl____wide_object chpl_macro_tmp_242;
  chpl____wide__ref_range_int64_t_bounded_F chpl_macro_tmp_243;
  chpl____wide__ref_range_int64_t_bounded_F chpl_macro_tmp_244;
  chpl__class_localscoforall_fn32_object chpl_macro_tmp_245;
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_246;
  chpl__class_localson_fn104_object chpl_macro_tmp_247;
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_248;
  local__str_literal_177 /* "ArrayInit.heuristicInit should have been made concrete" */ = _str_literal_177 /* "ArrayInit.heuristicInit should have been made concrete" */;
  local_dummyLocale = dummyLocale;
  local_c_sublocid_any = c_sublocid_any;
  ret = ArrayInit_heuristicInit;
  initMethod = ret;
  call_tmp2 = (((int64_t)(ret)) == ((int64_t)(ArrayInit_heuristicInit)));
  if (call_tmp2) {
    initMethod = ArrayInit_serialInit;
  }
  call_tmp3 = (((int64_t)(initMethod)) == ((int64_t)(ArrayInit_parallelInit)));
  if (call_tmp3) {
    _autoCopy_tmp_ = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any);
    call_tmp4 = chpl_localeID_to_locale(&_autoCopy_tmp_);
    chpl_macro_tmp_240.locale = (&call_tmp4)->locale;
    chpl_macro_tmp_240.addr = ((object)((&call_tmp4)->addr));
    call_tmp5 = chpl_macro_tmp_240;
    chpl_macro_tmp_241.locale = (&local_dummyLocale)->locale;
    chpl_macro_tmp_241.addr = &(((&local_dummyLocale)->addr)->value);
    chpl_gen_comm_get(((void*)(&T)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_241).locale), INT64(0), INT32(0)), (chpl_macro_tmp_241).addr, sizeof(chpl____wide_DummyLocale), -1, COMMID(17), INT64(563), INT64(25));
    chpl_macro_tmp_242.locale = (&T)->locale;
    chpl_macro_tmp_242.addr = ((object)((&T)->addr));
    call_tmp6 = chpl_macro_tmp_242;
    call_tmp7 = (! (((&call_tmp5)->addr != (&call_tmp6)->addr) || ((!(! (&call_tmp5)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp5)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&call_tmp6)->locale), INT64(0), INT32(0))))));
    if (call_tmp7) {
      initMethod = ArrayInit_serialInit;
    }
  }
  call_tmp8 = (((int64_t)(initMethod)) == ((int64_t)(ArrayInit_noInit)));
  if (call_tmp8) {
    goto _end_init_elts;
  } else {
    call_tmp9 = (((int64_t)(initMethod)) == ((int64_t)(ArrayInit_serialInit)));
    if (call_tmp9) {
      _ic__F1_high = ((int64_t)((s - INT64(1))));
      for (i = INT64(0); ((i <= _ic__F1_high)); i += INT64(1)) {
        T2 = (t)->dom;
        _runtime_type_tmp_ = T2;
        ret_to_arg_ref_tmp_ = &retarg_tmp;
        chpl__convertRuntimeTypeToValue13(&_runtime_type_tmp_, ret_to_arg_ref_tmp_);
        ret_tmp = retarg_tmp;
        *(x + i) = ret_tmp;
      }
    } else {
      call_tmp10 = (((int64_t)(initMethod)) == ((int64_t)(ArrayInit_parallelInit)));
      if (call_tmp10) {
        ret_to_arg_ref_tmp_2 = &ret_tmp2;
        chpl_build_bounded_range(INT64(0), ((int64_t)((s - INT64(1)))), ret_to_arg_ref_tmp_2);
        _ic__F0_this = ret_tmp2;
        _ic__F1_x1__e1_args = x;
        this12 = &_ic__F0_this;
        chpl_macro_tmp_243.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_243.addr = this12;
        T3 = chpl_macro_tmp_243;
        call_tmp11 = length2(T3);
        len = call_tmp11;
        call_tmp12 = chpl_task_getSerial();
        if (call_tmp12) {
          ret2 = INT64(1);
          goto _end__if_fn50;
        } else {
          call_tmp13 = _computeNumChunks_chpl3(call_tmp11);
          ret2 = call_tmp13;
          goto _end__if_fn50;
        }
        _end__if_fn50:;
        numChunks = ret2;
        call_tmp14 = (ret2 <= INT64(1));
        if (call_tmp14) {
          _ic__F0_this2 = _ic__F0_this;
          ret3 = (&_ic__F0_this2)->_low;
          ret4 = (&_ic__F0_this2)->_high;
          end = ret4;
          for (i2 = ret3; ((i2 <= end)); i2 += INT64(1)) {
            x2 = _ic__F1_x1__e1_args;
            T4 = (t)->dom;
            _runtime_type_tmp_2 = T4;
            ret_to_arg_ref_tmp_3 = &retarg_tmp2;
            chpl__convertRuntimeTypeToValue13(&_runtime_type_tmp_2, ret_to_arg_ref_tmp_3);
            ret_tmp3 = retarg_tmp2;
            *(x2 + i2) = ret_tmp3;
          }
        } else {
          ret_to_arg_ref_tmp_4 = &ret_tmp4;
          chpl_build_low_bounded_range(INT64(0), ret_to_arg_ref_tmp_4);
          ret_to_arg_ref_tmp_5 = &ret_tmp5;
          chpl___POUND_(&ret_tmp4, ret2, ret_to_arg_ref_tmp_5);
          tmpIter = ret_tmp5;
          cast_tmp = chpl_here_alloc(sizeof(chpl_chpl___EndCount_atomic_int64_int64_t_object), INT16(2));
          this13 = ((chpl___EndCount_atomic_int64_int64_t)(cast_tmp));
          ((object)(this13))->chpl__cid = chpl__cid_chpl___EndCount_atomic_int64_int64_t;
          (this13)->i = _init_class_tmp_;
          (this13)->taskCnt = INT64(0);
          (this13)->taskList = NULL;
          ret5 = type_tmp;
          _ref_tmp_ = &ret5;
          atomic_init_int_least64_t(_ref_tmp_, INT64(0));
          (&this14)->_v = ret5;
          ret_to_arg_ref_tmp_6 = &ret_tmp6;
          _construct_atomic_int64(ret5, &this14, ret_to_arg_ref_tmp_6);
          (this13)->i = ret_tmp6;
          (this13)->taskCnt = INT64(0);
          call_tmp15 = ((c_void_ptr)(nil));
          (this13)->taskList = call_tmp15;
          wrap_call_tmp = _construct__EndCount(&ret_tmp6, INT64(0), call_tmp15, this13);
          _coforallCount = wrap_call_tmp;
          _ref_tmp_2 = &tmpIter;
          chpl_macro_tmp_244.locale = chpl_gen_getLocaleID();
          chpl_macro_tmp_244.addr = _ref_tmp_2;
          T5 = chpl_macro_tmp_244;
          call_tmp16 = length2(T5);
          numTasks = call_tmp16;
          _upEndCount3(_coforallCount, call_tmp16);
          _ic__F0_this3 = tmpIter;
          ret6 = (&_ic__F0_this3)->_low;
          ret7 = (&_ic__F0_this3)->_high;
          end2 = ret7;
          for (i3 = ret6; ((i3 <= end2)); i3 += INT64(1)) {
            this15 = &_ic__F0_this;
            _args_forcoforall_fn = ((_class_localscoforall_fn32)(&chpl_macro_tmp_245));
            (_args_forcoforall_fn)->_0_x1__e1_args = _ic__F1_x1__e1_args;
            T6 = this15;
            (_args_forcoforall_fn)->_1_tmp = T6;
            (_args_forcoforall_fn)->_2_len = len;
            (_args_forcoforall_fn)->_3_numChunks = numChunks;
            (_args_forcoforall_fn)->_4__yieldedIndex = i3;
            (_args_forcoforall_fn)->_5__coforallCount = _coforallCount;
            T7 = t;
            (_args_forcoforall_fn)->_6_tmp = T7;
            _args_vforcoforall_fn = ((void*)(_args_forcoforall_fn));
            _taskListNodecoforall_fn = chpl_nodeID;
            /*** wrapcoforall_fn30 ***/ chpl_taskListAddCoStmt(INT32(-2), INT64(159), ((chpl_task_bundle_p)(_args_vforcoforall_fn)), sizeof(chpl__class_localscoforall_fn32_object), &((_coforallCount)->taskList), _taskListNodecoforall_fn, INT64(740), INT32(2));
          }
          _waitEndCount3(_coforallCount, numTasks);
          _field_destructor_tmp_ = &((_coforallCount)->i);
          call_tmp17 = &((_field_destructor_tmp_)->_v);
          atomic_destroy_int_least64_t(call_tmp17);
          call_tmp18 = chpl_gen_getLocaleID();
          rvfDerefTmp = _coforallCount;
          isdirect = chpl_doDirectExecuteOn(&call_tmp18);
          if (isdirect) {
            chpl_macro_tmp_246.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_246.addr = rvfDerefTmp;
            T8 = chpl_macro_tmp_246;
            on_fn123(T8);
          } else {
            _args_foron_fn = ((_class_localson_fn104)(&chpl_macro_tmp_247));
            (_args_foron_fn)->_0_rvfDerefTmp = call_tmp18;
            chpl_macro_tmp_248.locale = chpl_gen_getLocaleID();
            chpl_macro_tmp_248.addr = rvfDerefTmp;
            T9 = chpl_macro_tmp_248;
            (_args_foron_fn)->_1_rvfDerefTmp = T9;
            _args_vforon_fn = ((void*)(_args_foron_fn));
            /*** wrapon_fn131 ***/ chpl_executeOn(&call_tmp18, INT32(196), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn104_object), INT64(1227), INT32(2));
          }
        }
      } else {
        halt(&local__str_literal_177 /* "ArrayInit.heuristicInit should have been made concrete" */, INT64(746), INT32(2));
      }
    }
  }
  _end_init_elts:;
  return;
}

/* ChapelBase.chpl:740 */
static void coforall_fn31(_ddata_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F x1__e1_args,
                          int64_t numChunks,
                          int64_t chunk,
                          chpl___EndCount_atomic_int64_int64_t _coforallCount,
                          _ref_range_int64_t_bounded_F this12,
                          int64_t len) {
  _tuple_2_star_int64_t ret_tmp;
  _ref__tuple_2_star_int64_t ret_to_arg_ref_tmp_ = NULL;
  int64_t _ic__F1_high;
  int64_t i;
  _ddata_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F x = NULL;
  LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_chpl call_tmp2 = NULL;
  chpl____wide_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F chpl_macro_tmp_249;
  ret_to_arg_ref_tmp_ = &ret_tmp;
  _computeBlock_chpl(len, numChunks, chunk, (this12)->_high, (this12)->_low, (this12)->_low, ret_to_arg_ref_tmp_);
  _ic__F1_high = *(ret_tmp + INT64(1));
  x = x1__e1_args;
  for (i = *(ret_tmp + INT64(0)); ((i <= _ic__F1_high)); i += INT64(1)) {
    call_tmp2 = ((LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_chpl)(nil));
    chpl_macro_tmp_249.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_249.addr = call_tmp2;
    T = chpl_macro_tmp_249;
    *(x + i) = T;
  }
  return;
}

/* ChapelBase.chpl:740 */
static void coforall_fn15(_ddata_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t x1__e1_args,
                          int64_t len,
                          int64_t chunk,
                          int64_t numChunks,
                          _ref_range_int64_t_bounded_F this12,
                          chpl___EndCount_atomic_int64_int64_t _coforallCount) {
  _tuple_2_star_int64_t ret_tmp;
  _ref__tuple_2_star_int64_t ret_to_arg_ref_tmp_ = NULL;
  int64_t _ic__F1_high;
  int64_t i;
  _ddata_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t x = NULL;
  LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_chpl this13;
  atomic_uint64 _init_class_tmp_;
  atomic_uint64 this14;
  atomic_uint_least64_t ret;
  atomic_uint_least64_t type_tmp;
  _ref_atomic_uint_least64_t _ref_tmp_ = NULL;
  atomic_uint64 ret_tmp2;
  _ref_atomic_uint64 ret_to_arg_ref_tmp_2 = NULL;
  LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_chpl ret_tmp3;
  _ref_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t ret_to_arg_ref_tmp_3 = NULL;
  ret_to_arg_ref_tmp_ = &ret_tmp;
  _computeBlock_chpl(len, numChunks, chunk, (this12)->_high, (this12)->_low, (this12)->_low, ret_to_arg_ref_tmp_);
  _ic__F1_high = *(ret_tmp + INT64(1));
  for (i = *(ret_tmp + INT64(0)); ((i <= _ic__F1_high)); i += INT64(1)) {
    x = x1__e1_args;
    (&this13)->_atomicVar_chpl = _init_class_tmp_;
    ret = type_tmp;
    _ref_tmp_ = &ret;
    atomic_init_uint_least64_t(_ref_tmp_, ((uint64_t)(INT64(0))));
    (&this14)->_v = ret;
    ret_to_arg_ref_tmp_2 = &ret_tmp2;
    _construct_atomic_uint64(ret, &this14, ret_to_arg_ref_tmp_2);
    (&this13)->_atomicVar_chpl = ret_tmp2;
    ret_to_arg_ref_tmp_3 = &ret_tmp3;
    _construct_LocalAtomicObject_chpl(&ret_tmp2, &this13, ret_to_arg_ref_tmp_3);
    *(x + i) = ret_tmp3;
  }
  return;
}

/* ChapelBase.chpl:740 */
static void coforall_fn19(_ddata_LocReplicatedDom_1_int64_t_F x1__e1_args,
                          int64_t chunk,
                          chpl___EndCount_atomic_int64_int64_t _coforallCount,
                          int64_t numChunks,
                          _ref_range_int64_t_bounded_F this12,
                          int64_t len) {
  int64_t ret;
  _tuple_2_star_int64_t ret_tmp;
  _ref__tuple_2_star_int64_t ret_to_arg_ref_tmp_ = NULL;
  int64_t _ic__F1_high;
  int64_t i;
  _ddata_LocReplicatedDom_1_int64_t_F x = NULL;
  LocReplicatedDom_1_int64_t_F_chpl call_tmp2 = NULL;
  chpl____wide_LocReplicatedDom_1_int64_t_F T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_LocReplicatedDom_1_int64_t_F chpl_macro_tmp_250;
  ret = (this12)->_high;
  ret_to_arg_ref_tmp_ = &ret_tmp;
  _computeBlock_chpl(len, numChunks, chunk, ret, (this12)->_low, (this12)->_low, ret_to_arg_ref_tmp_);
  _ic__F1_high = *(ret_tmp + INT64(1));
  x = x1__e1_args;
  for (i = *(ret_tmp + INT64(0)); ((i <= _ic__F1_high)); i += INT64(1)) {
    call_tmp2 = ((LocReplicatedDom_1_int64_t_F_chpl)(nil));
    chpl_macro_tmp_250.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_250.addr = call_tmp2;
    T = chpl_macro_tmp_250;
    *(x + i) = T;
  }
  return;
}

/* ChapelBase.chpl:740 */
static void coforall_fn18(_ddata_chpl_TableEntry_int64_t x1__e1_args,
                          _ref_range_int64_t_bounded_F this12,
                          int64_t len,
                          int64_t numChunks,
                          int64_t chunk,
                          chpl___EndCount_atomic_int64_int64_t _coforallCount) {
  _tuple_2_star_int64_t ret_tmp;
  _ref__tuple_2_star_int64_t ret_to_arg_ref_tmp_ = NULL;
  int64_t _ic__F1_high;
  int64_t i;
  _ddata_chpl_TableEntry_int64_t x = NULL;
  chpl_TableEntry_int64_t this13;
  chpl__hash_status x2;
  chpl_TableEntry_int64_t ret_tmp2;
  _ref_chpl_TableEntry_int64_t ret_to_arg_ref_tmp_2 = NULL;
  ret_to_arg_ref_tmp_ = &ret_tmp;
  _computeBlock_chpl(len, numChunks, chunk, (this12)->_high, (this12)->_low, (this12)->_low, ret_to_arg_ref_tmp_);
  _ic__F1_high = *(ret_tmp + INT64(1));
  x = x1__e1_args;
  for (i = *(ret_tmp + INT64(0)); ((i <= _ic__F1_high)); i += INT64(1)) {
    (&this13)->status = chpl__hash_status_empty;
    (&this13)->idx = INT64(0);
    x2 = chpl__hash_status_empty;
    (&this13)->status = x2;
    (&this13)->idx = INT64(0);
    ret_to_arg_ref_tmp_2 = &ret_tmp2;
    _construct_chpl_TableEntry(x2, INT64(0), &this13, ret_to_arg_ref_tmp_2);
    *(x + i) = ret_tmp2;
  }
  return;
}

/* ChapelBase.chpl:740 */
static void coforall_fn17(_ddata_LocCyclicArr_Bitmap_1_int64_t_F x1__e1_args,
                          int64_t numChunks,
                          int64_t chunk,
                          chpl___EndCount_atomic_int64_int64_t _coforallCount,
                          _ref_range_int64_t_bounded_F this12,
                          int64_t len) {
  _tuple_2_star_int64_t ret_tmp;
  _ref__tuple_2_star_int64_t ret_to_arg_ref_tmp_ = NULL;
  int64_t _ic__F1_high;
  int64_t i;
  _ddata_LocCyclicArr_Bitmap_1_int64_t_F x = NULL;
  LocCyclicArr_Bitmap_1_int64_t_F_chpl call_tmp2 = NULL;
  chpl____wide_LocCyclicArr_Bitmap_1_int64_t_F T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_LocCyclicArr_Bitmap_1_int64_t_F chpl_macro_tmp_251;
  ret_to_arg_ref_tmp_ = &ret_tmp;
  _computeBlock_chpl(len, numChunks, chunk, (this12)->_high, (this12)->_low, (this12)->_low, ret_to_arg_ref_tmp_);
  _ic__F1_high = *(ret_tmp + INT64(1));
  x = x1__e1_args;
  for (i = *(ret_tmp + INT64(0)); ((i <= _ic__F1_high)); i += INT64(1)) {
    call_tmp2 = ((LocCyclicArr_Bitmap_1_int64_t_F_chpl)(nil));
    chpl_macro_tmp_251.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_251.addr = call_tmp2;
    T = chpl_macro_tmp_251;
    *(x + i) = T;
  }
  return;
}

/* ChapelBase.chpl:740 */
static void coforall_fn16(_ddata_Bitmap x1__e1_args,
                          int64_t chunk,
                          chpl___EndCount_atomic_int64_int64_t _coforallCount,
                          _ref_range_int64_t_bounded_F this12,
                          int64_t len,
                          int64_t numChunks) {
  _tuple_2_star_int64_t ret_tmp;
  _ref__tuple_2_star_int64_t ret_to_arg_ref_tmp_ = NULL;
  int64_t _ic__F1_high;
  int64_t i;
  _ddata_Bitmap x = NULL;
  Bitmap_chpl this13;
  _syncvar_uint64_t _init_class_tmp_;
  chpl____wide__qthreads_synccls_uint64_t T = {CHPL_LOCALEID_T_INIT, NULL};
  _domain_DefaultRectangularDom_1_int64_t_F _init_class_tmp_2;
  chpl____wide_DefaultRectangularDom_1_int64_t_F T2 = {CHPL_LOCALEID_T_INIT, NULL};
  _array_DefaultRectangularArr_uint64_t_1_int64_t_F_int64_t _init_class_tmp_3;
  chpl____wide_DefaultRectangularArr_uint64_t_1_int64_t_F_int64_t T3 = {CHPL_LOCALEID_T_INIT, NULL};
  _syncvar_uint64_t x2;
  _syncvar_uint64_t ret_tmp2;
  _ref__syncvar_uint64_t ret_to_arg_ref_tmp_2 = NULL;
  _ref__syncvar_uint64_t _ref_tmp_ = NULL;
  chpl____wide__ref__syncvar_uint64_t T4 = {CHPL_LOCALEID_T_INIT, NULL};
  _domain_DefaultRectangularDom_1_int64_t_F default_argbitmapSpace;
  range_int64_t_bounded_F ret_tmp3;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_3 = NULL;
  _domain_DefaultRectangularDom_1_int64_t_F ret_tmp4;
  _ref__domain_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_4 = NULL;
  _ref__domain_DefaultRectangularDom_1_int64_t_F i_x = NULL;
  _domain_DefaultRectangularDom_1_int64_t_F ret;
  chpl_bool coerce_tmp;
  _domain_DefaultRectangularDom_1_int64_t_F ret2;
  _ref__domain_DefaultRectangularDom_1_int64_t_F _ref_tmp_2 = NULL;
  chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_F T5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_F call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__domain_DefaultRectangularDom_1_int64_t_F _ref_tmp_3 = NULL;
  chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_F T6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl___RuntimeTypeInfo24 call_tmp3;
  chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_F i_dom = {CHPL_LOCALEID_T_INIT, NULL};
  _domain_DefaultRectangularDom_1_int64_t_F _runtime_type_tmp_;
  _domain_DefaultRectangularDom_1_int64_t_F T7;
  _array_DefaultRectangularArr_uint64_t_1_int64_t_F_int64_t ret_tmp5;
  _ref__array_DefaultRectangularArr_uint64_t_1_int64_t_F_int64_t ret_to_arg_ref_tmp_5 = NULL;
  _array_DefaultRectangularArr_uint64_t_1_int64_t_F_int64_t retarg_tmp;
  Bitmap_chpl ret_tmp6;
  _ref_Bitmap ret_to_arg_ref_tmp_6 = NULL;
  chpl____wide__nilType chpl_macro_tmp_252;
  chpl____wide__qthreads_synccls_uint64_t chpl_macro_tmp_253;
  chpl____wide__nilType chpl_macro_tmp_254;
  chpl____wide_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_255;
  chpl____wide__nilType chpl_macro_tmp_256;
  chpl____wide_DefaultRectangularArr_uint64_t_1_int64_t_F_int64_t chpl_macro_tmp_257;
  chpl____wide__ref__syncvar_uint64_t chpl_macro_tmp_258;
  chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_259;
  chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_260;
  ret_to_arg_ref_tmp_ = &ret_tmp;
  _computeBlock_chpl(len, numChunks, chunk, (this12)->_high, (this12)->_low, (this12)->_low, ret_to_arg_ref_tmp_);
  _ic__F1_high = *(ret_tmp + INT64(1));
  for (i = *(ret_tmp + INT64(0)); ((i <= _ic__F1_high)); i += INT64(1)) {
    x = x1__e1_args;
    chpl_macro_tmp_252.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_252.addr = nil;
    chpl_macro_tmp_253.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_253.addr = NULL;
    T = chpl_macro_tmp_253;
    (&_init_class_tmp_)->wrapped = T;
    (&_init_class_tmp_)->isOwned = UINT8(false);
    (&this13)->nBits_DOLLAR__chpl = _init_class_tmp_;
    (&_init_class_tmp_2)->_pid = INT64(0);
    chpl_macro_tmp_254.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_254.addr = nil;
    chpl_macro_tmp_255.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_255.addr = NULL;
    T2 = chpl_macro_tmp_255;
    (&_init_class_tmp_2)->_instance = T2;
    (&_init_class_tmp_2)->_unowned = UINT8(false);
    (&this13)->bitmapSpace_chpl = _init_class_tmp_2;
    (&_init_class_tmp_3)->_pid = INT64(0);
    chpl_macro_tmp_256.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_256.addr = nil;
    chpl_macro_tmp_257.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_257.addr = NULL;
    T3 = chpl_macro_tmp_257;
    (&_init_class_tmp_3)->_instance = T3;
    (&_init_class_tmp_3)->_unowned = UINT8(false);
    (&this13)->bitmap_chpl = _init_class_tmp_3;
    ret_to_arg_ref_tmp_2 = &ret_tmp2;
    _syncvar(ret_to_arg_ref_tmp_2);
    x2 = ret_tmp2;
    _ref_tmp_ = &x2;
    chpl_macro_tmp_258.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_258.addr = _ref_tmp_;
    T4 = chpl_macro_tmp_258;
    chpl___ASSIGN_7(T4, ((uint64_t)(INT64(4096))));
    (&this13)->nBits_DOLLAR__chpl = x2;
    ret_to_arg_ref_tmp_3 = &ret_tmp3;
    chpl_build_bounded_range(INT64(0), INT64(63), ret_to_arg_ref_tmp_3);
    ret_to_arg_ref_tmp_4 = &ret_tmp4;
    chpl__buildDomainExpr2(&ret_tmp3, ret_to_arg_ref_tmp_4);
    i_x = &ret_tmp4;
    coerce_tmp = (i_x)->_unowned;
    if (coerce_tmp) {
      _ref_tmp_2 = i_x;
      chpl_macro_tmp_259.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_259.addr = _ref_tmp_2;
      T5 = chpl_macro_tmp_259;
      ret2 = chpl__initCopy2(T5);
      ret = ret2;
      goto _end_chpl__unalias;
    } else {
      ret = ret_tmp4;
      goto _end_chpl__unalias;
    }
    _end_chpl__unalias:;
    default_argbitmapSpace = ret;
    (&this13)->bitmapSpace_chpl = ret;
    _ref_tmp_3 = &default_argbitmapSpace;
    chpl_macro_tmp_260.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_260.addr = _ref_tmp_3;
    T6 = chpl_macro_tmp_260;
    call_tmp2 = chpl__ensureDomainExpr5(T6);
    i_dom = call_tmp2;
    call_tmp3 = chpl__buildArrayRuntimeType2(i_dom);
    T7 = (&call_tmp3)->dom;
    _runtime_type_tmp_ = T7;
    ret_to_arg_ref_tmp_5 = &retarg_tmp;
    chpl__convertRuntimeTypeToValue31(&_runtime_type_tmp_, ret_to_arg_ref_tmp_5);
    ret_tmp5 = retarg_tmp;
    (&this13)->bitmap_chpl = ret_tmp5;
    ret_to_arg_ref_tmp_6 = &ret_tmp6;
    _construct_Bitmap_chpl(&x2, &default_argbitmapSpace, &ret_tmp5, &this13, ret_to_arg_ref_tmp_6);
    *(x + i) = ret_tmp6;
  }
  return;
}

/* ChapelBase.chpl:740 */
static void coforall_fn30(_ddata__remoteAccessData_Bitmap_1_int64_t_F_F x1__e1_args,
                          chpl___EndCount_atomic_int64_int64_t _coforallCount,
                          _ref_range_int64_t_bounded_F this12,
                          int64_t len,
                          int64_t numChunks,
                          int64_t chunk) {
  int64_t ret;
  int64_t ret2;
  int64_t ret3;
  _tuple_2_star_int64_t ret_tmp;
  _ref__tuple_2_star_int64_t ret_to_arg_ref_tmp_ = NULL;
  int64_t _ic__F1_high;
  int64_t i;
  _ddata__remoteAccessData_Bitmap_1_int64_t_F_F x = NULL;
  _remoteAccessData_Bitmap_1_int64_t_F_F this13;
  _tuple_1_star_int64_t _init_class_tmp_;
  _tuple_1_star_int64_t _init_class_tmp_2;
  _tuple_1_star_int64_t _init_class_tmp_3;
  chpl____wide__ddata_Bitmap T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ddata_Bitmap T2 = {CHPL_LOCALEID_T_INIT, NULL};
  _tuple_1_star_int64_t tup;
  _tuple_1_star_int64_t tup2;
  _tuple_1_star_int64_t tup3;
  _ddata_Bitmap call_tmp2 = NULL;
  chpl____wide__ddata_Bitmap T3 = {CHPL_LOCALEID_T_INIT, NULL};
  _ddata_Bitmap call_tmp3 = NULL;
  chpl____wide__ddata_Bitmap T4 = {CHPL_LOCALEID_T_INIT, NULL};
  _remoteAccessData_Bitmap_1_int64_t_F_F ret_tmp2;
  _ref__remoteAccessData_Bitmap_1_int64_t_F_F ret_to_arg_ref_tmp_2 = NULL;
  chpl____wide__nilType chpl_macro_tmp_261;
  chpl____wide__ddata_Bitmap chpl_macro_tmp_262;
  chpl____wide__nilType chpl_macro_tmp_263;
  chpl____wide__ddata_Bitmap chpl_macro_tmp_264;
  chpl____wide__ddata_Bitmap chpl_macro_tmp_265;
  chpl____wide__ddata_Bitmap chpl_macro_tmp_266;
  ret = (this12)->_high;
  ret2 = (this12)->_low;
  ret3 = (this12)->_low;
  ret_to_arg_ref_tmp_ = &ret_tmp;
  _computeBlock_chpl(len, numChunks, chunk, ret, ret2, ret3, ret_to_arg_ref_tmp_);
  _ic__F1_high = *(ret_tmp + INT64(1));
  x = x1__e1_args;
  for (i = *(ret_tmp + INT64(0)); ((i <= _ic__F1_high)); i += INT64(1)) {
    *(_init_class_tmp_ + INT64(0)) = INT64(0);
    *((&this13)->off + INT64(0)) = *(_init_class_tmp_ + INT64(0));
    *(_init_class_tmp_2 + INT64(0)) = INT64(0);
    *((&this13)->blk + INT64(0)) = *(_init_class_tmp_2 + INT64(0));
    *(_init_class_tmp_3 + INT64(0)) = INT64(0);
    *((&this13)->str + INT64(0)) = *(_init_class_tmp_3 + INT64(0));
    (&this13)->origin = INT64(0);
    (&this13)->factoredOffs = INT64(0);
    chpl_macro_tmp_261.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_261.addr = nil;
    chpl_macro_tmp_262.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_262.addr = NULL;
    T = chpl_macro_tmp_262;
    (&this13)->data = T;
    chpl_macro_tmp_263.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_263.addr = nil;
    chpl_macro_tmp_264.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_264.addr = NULL;
    T2 = chpl_macro_tmp_264;
    (&this13)->shiftedData = T2;
    *(tup + INT64(0)) = INT64(0);
    *((&this13)->off + INT64(0)) = *(tup + INT64(0));
    *(tup2 + INT64(0)) = INT64(0);
    *((&this13)->blk + INT64(0)) = *(tup2 + INT64(0));
    *(tup3 + INT64(0)) = INT64(0);
    *((&this13)->str + INT64(0)) = *(tup3 + INT64(0));
    (&this13)->origin = INT64(0);
    (&this13)->factoredOffs = INT64(0);
    call_tmp2 = ((_ddata_Bitmap)(nil));
    chpl_macro_tmp_265.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_265.addr = call_tmp2;
    T3 = chpl_macro_tmp_265;
    (&this13)->data = T3;
    call_tmp3 = ((_ddata_Bitmap)(nil));
    chpl_macro_tmp_266.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_266.addr = call_tmp3;
    T4 = chpl_macro_tmp_266;
    (&this13)->shiftedData = T4;
    ret_to_arg_ref_tmp_2 = &ret_tmp2;
    _construct__remoteAccessData2(&tup, &tup2, &tup3, INT64(0), INT64(0), call_tmp2, call_tmp3, &this13, ret_to_arg_ref_tmp_2);
    *(x + i) = ret_tmp2;
  }
  return;
}

/* ChapelBase.chpl:740 */
static void coforall_fn23(_ddata_uint64_t x1__e1_args,
                          _ref_range_int64_t_bounded_F this12,
                          int64_t len,
                          int64_t numChunks,
                          int64_t chunk,
                          chpl___EndCount_atomic_int64_int64_t _coforallCount) {
  int64_t ret;
  int64_t ret2;
  int64_t ret3;
  _tuple_2_star_int64_t ret_tmp;
  _ref__tuple_2_star_int64_t ret_to_arg_ref_tmp_ = NULL;
  int64_t _ic__F1_high;
  int64_t i;
  _ddata_uint64_t x = NULL;
  ret = (this12)->_high;
  ret2 = (this12)->_low;
  ret3 = (this12)->_low;
  ret_to_arg_ref_tmp_ = &ret_tmp;
  _computeBlock_chpl(len, numChunks, chunk, ret, ret2, ret3, ret_to_arg_ref_tmp_);
  _ic__F1_high = *(ret_tmp + INT64(1));
  x = x1__e1_args;
  for (i = *(ret_tmp + INT64(0)); ((i <= _ic__F1_high)); i += INT64(1)) {
    *(x + i) = UINT64(0);
  }
  return;
}

/* ChapelBase.chpl:740 */
static void coforall_fn20(_ddata_LocCyclicArr__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F x1__e1_args,
                          int64_t numChunks,
                          int64_t chunk,
                          chpl___EndCount_atomic_int64_int64_t _coforallCount,
                          _ref_range_int64_t_bounded_F this12,
                          int64_t len) {
  _tuple_2_star_int64_t ret_tmp;
  _ref__tuple_2_star_int64_t ret_to_arg_ref_tmp_ = NULL;
  int64_t _ic__F1_high;
  int64_t i;
  _ddata_LocCyclicArr__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F x = NULL;
  LocCyclicArr__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F_chpl call_tmp2 = NULL;
  chpl____wide_LocCyclicArr__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_LocCyclicArr__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F chpl_macro_tmp_267;
  ret_to_arg_ref_tmp_ = &ret_tmp;
  _computeBlock_chpl(len, numChunks, chunk, (this12)->_high, (this12)->_low, (this12)->_low, ret_to_arg_ref_tmp_);
  _ic__F1_high = *(ret_tmp + INT64(1));
  x = x1__e1_args;
  for (i = *(ret_tmp + INT64(0)); ((i <= _ic__F1_high)); i += INT64(1)) {
    call_tmp2 = ((LocCyclicArr__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F_chpl)(nil));
    chpl_macro_tmp_267.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_267.addr = call_tmp2;
    T = chpl_macro_tmp_267;
    *(x + i) = T;
  }
  return;
}

/* ChapelBase.chpl:740 */
static void coforall_fn21(_ddata__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t x1__e1_args,
                          _ref_range_int64_t_bounded_F this12,
                          int64_t len,
                          int64_t numChunks,
                          int64_t chunk,
                          chpl___EndCount_atomic_int64_int64_t _coforallCount,
                          _ref__RuntimeTypeInfo28 t) {
  _tuple_2_star_int64_t ret_tmp;
  _ref__tuple_2_star_int64_t ret_to_arg_ref_tmp_ = NULL;
  int64_t _ic__F1_high;
  int64_t i;
  _ddata__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t x = NULL;
  _domain_DefaultRectangularDom_1_int64_t_F _runtime_type_tmp_;
  _domain_DefaultRectangularDom_1_int64_t_F T;
  _array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t ret_tmp2;
  _ref__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t ret_to_arg_ref_tmp_2 = NULL;
  _array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t retarg_tmp;
  ret_to_arg_ref_tmp_ = &ret_tmp;
  _computeBlock_chpl(len, numChunks, chunk, (this12)->_high, (this12)->_low, (this12)->_low, ret_to_arg_ref_tmp_);
  _ic__F1_high = *(ret_tmp + INT64(1));
  for (i = *(ret_tmp + INT64(0)); ((i <= _ic__F1_high)); i += INT64(1)) {
    x = x1__e1_args;
    T = (t)->dom;
    _runtime_type_tmp_ = T;
    ret_to_arg_ref_tmp_2 = &retarg_tmp;
    chpl__convertRuntimeTypeToValue13(&_runtime_type_tmp_, ret_to_arg_ref_tmp_2);
    ret_tmp2 = retarg_tmp;
    *(x + i) = ret_tmp2;
  }
  return;
}

/* ChapelBase.chpl:740 */
static void coforall_fn22(_ddata_atomicbool x1__e1_args,
                          int64_t chunk,
                          chpl___EndCount_atomic_int64_int64_t _coforallCount,
                          _ref_range_int64_t_bounded_F this12,
                          int64_t len,
                          int64_t numChunks) {
  int64_t ret;
  int64_t ret2;
  _tuple_2_star_int64_t ret_tmp;
  _ref__tuple_2_star_int64_t ret_to_arg_ref_tmp_ = NULL;
  int64_t _ic__F1_high;
  int64_t i;
  _ddata_atomicbool x = NULL;
  atomicbool this13;
  atomic_bool ret3;
  atomic_bool type_tmp;
  _ref_atomic_bool _ref_tmp_ = NULL;
  atomicbool ret_tmp2;
  _ref_atomicbool ret_to_arg_ref_tmp_2 = NULL;
  ret = (this12)->_low;
  ret2 = (this12)->_low;
  ret_to_arg_ref_tmp_ = &ret_tmp;
  _computeBlock_chpl(len, numChunks, chunk, (this12)->_high, ret, ret2, ret_to_arg_ref_tmp_);
  _ic__F1_high = *(ret_tmp + INT64(1));
  for (i = *(ret_tmp + INT64(0)); ((i <= _ic__F1_high)); i += INT64(1)) {
    x = x1__e1_args;
    ret3 = type_tmp;
    _ref_tmp_ = &ret3;
    atomic_init_bool(_ref_tmp_, UINT8(false));
    (&this13)->_v = ret3;
    ret_to_arg_ref_tmp_2 = &ret_tmp2;
    _construct_atomicbool(ret3, &this13, ret_to_arg_ref_tmp_2);
    *(x + i) = ret_tmp2;
  }
  return;
}

/* ChapelBase.chpl:740 */
static void coforall_fn24(_ddata__remoteAccessData__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F_F x1__e1_args,
                          int64_t numChunks,
                          int64_t chunk,
                          chpl___EndCount_atomic_int64_int64_t _coforallCount,
                          _ref_range_int64_t_bounded_F this12,
                          int64_t len) {
  int64_t ret;
  int64_t ret2;
  _tuple_2_star_int64_t ret_tmp;
  _ref__tuple_2_star_int64_t ret_to_arg_ref_tmp_ = NULL;
  int64_t _ic__F1_high;
  int64_t i;
  _ddata__remoteAccessData__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F_F x = NULL;
  chpl___RuntimeTypeInfo12 eltType;
  _remoteAccessData__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F_F this13;
  chpl___RuntimeTypeInfo12 _init_class_tmp_;
  _domain_DefaultRectangularDom_1_int64_t_F _init_class_tmp_2;
  chpl____wide_DefaultRectangularDom_1_int64_t_F T = {CHPL_LOCALEID_T_INIT, NULL};
  _tuple_1_star_int64_t _init_class_tmp_3;
  _tuple_1_star_int64_t _init_class_tmp_4;
  _tuple_1_star_int64_t _init_class_tmp_5;
  chpl____wide__ddata__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t T2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ddata__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t T3 = {CHPL_LOCALEID_T_INIT, NULL};
  _tuple_1_star_int64_t tup;
  _tuple_1_star_int64_t tup2;
  _tuple_1_star_int64_t tup3;
  _ddata__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t call_tmp2 = NULL;
  chpl____wide__ddata__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t T4 = {CHPL_LOCALEID_T_INIT, NULL};
  _ddata__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t call_tmp3 = NULL;
  chpl____wide__ddata__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t T5 = {CHPL_LOCALEID_T_INIT, NULL};
  _remoteAccessData__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F_F ret_tmp2;
  _ref__remoteAccessData__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F_F ret_to_arg_ref_tmp_2 = NULL;
  chpl____wide__nilType chpl_macro_tmp_268;
  chpl____wide_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_269;
  chpl____wide__nilType chpl_macro_tmp_270;
  chpl____wide__ddata__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t chpl_macro_tmp_271;
  chpl____wide__nilType chpl_macro_tmp_272;
  chpl____wide__ddata__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t chpl_macro_tmp_273;
  chpl____wide__ddata__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t chpl_macro_tmp_274;
  chpl____wide__ddata__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t chpl_macro_tmp_275;
  ret = (this12)->_low;
  ret2 = (this12)->_low;
  ret_to_arg_ref_tmp_ = &ret_tmp;
  _computeBlock_chpl(len, numChunks, chunk, (this12)->_high, ret, ret2, ret_to_arg_ref_tmp_);
  _ic__F1_high = *(ret_tmp + INT64(1));
  x = x1__e1_args;
  for (i = *(ret_tmp + INT64(0)); ((i <= _ic__F1_high)); i += INT64(1)) {
    (&_init_class_tmp_2)->_pid = INT64(0);
    chpl_macro_tmp_268.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_268.addr = nil;
    chpl_macro_tmp_269.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_269.addr = NULL;
    T = chpl_macro_tmp_269;
    (&_init_class_tmp_2)->_instance = T;
    (&_init_class_tmp_2)->_unowned = UINT8(false);
    (&_init_class_tmp_)->dom = _init_class_tmp_2;
    (&this13)->eltType = _init_class_tmp_;
    *(_init_class_tmp_3 + INT64(0)) = INT64(0);
    *((&this13)->off + INT64(0)) = *(_init_class_tmp_3 + INT64(0));
    *(_init_class_tmp_4 + INT64(0)) = INT64(0);
    *((&this13)->blk + INT64(0)) = *(_init_class_tmp_4 + INT64(0));
    *(_init_class_tmp_5 + INT64(0)) = INT64(0);
    *((&this13)->str + INT64(0)) = *(_init_class_tmp_5 + INT64(0));
    (&this13)->origin = INT64(0);
    (&this13)->factoredOffs = INT64(0);
    chpl_macro_tmp_270.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_270.addr = nil;
    chpl_macro_tmp_271.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_271.addr = NULL;
    T2 = chpl_macro_tmp_271;
    (&this13)->data = T2;
    chpl_macro_tmp_272.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_272.addr = nil;
    chpl_macro_tmp_273.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_273.addr = NULL;
    T3 = chpl_macro_tmp_273;
    (&this13)->shiftedData = T3;
    *(tup + INT64(0)) = INT64(0);
    *((&this13)->off + INT64(0)) = *(tup + INT64(0));
    *(tup2 + INT64(0)) = INT64(0);
    *((&this13)->blk + INT64(0)) = *(tup2 + INT64(0));
    *(tup3 + INT64(0)) = INT64(0);
    *((&this13)->str + INT64(0)) = *(tup3 + INT64(0));
    (&this13)->origin = INT64(0);
    (&this13)->factoredOffs = INT64(0);
    call_tmp2 = ((_ddata__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t)(nil));
    chpl_macro_tmp_274.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_274.addr = call_tmp2;
    T4 = chpl_macro_tmp_274;
    (&this13)->data = T4;
    call_tmp3 = ((_ddata__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t)(nil));
    chpl_macro_tmp_275.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_275.addr = call_tmp3;
    T5 = chpl_macro_tmp_275;
    (&this13)->shiftedData = T5;
    ret_to_arg_ref_tmp_2 = &ret_tmp2;
    _construct__remoteAccessData(&eltType, &tup, &tup2, &tup3, INT64(0), INT64(0), call_tmp2, call_tmp3, &this13, ret_to_arg_ref_tmp_2);
    *(x + i) = ret_tmp2;
  }
  return;
}

/* ChapelBase.chpl:740 */
static void coforall_fn25(_ddata_FCHGlobalNode x1__e1_args,
                          int64_t numChunks,
                          int64_t chunk,
                          chpl___EndCount_atomic_int64_int64_t _coforallCount,
                          _ref_range_int64_t_bounded_F this12,
                          int64_t len) {
  int64_t ret;
  int64_t ret2;
  _tuple_2_star_int64_t ret_tmp;
  _ref__tuple_2_star_int64_t ret_to_arg_ref_tmp_ = NULL;
  int64_t _ic__F1_high;
  int64_t i;
  _ddata_FCHGlobalNode x = NULL;
  FCHGlobalNode_chpl call_tmp2 = NULL;
  chpl____wide_FCHGlobalNode T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_FCHGlobalNode chpl_macro_tmp_276;
  ret = (this12)->_low;
  ret2 = (this12)->_low;
  ret_to_arg_ref_tmp_ = &ret_tmp;
  _computeBlock_chpl(len, numChunks, chunk, (this12)->_high, ret, ret2, ret_to_arg_ref_tmp_);
  _ic__F1_high = *(ret_tmp + INT64(1));
  x = x1__e1_args;
  for (i = *(ret_tmp + INT64(0)); ((i <= _ic__F1_high)); i += INT64(1)) {
    call_tmp2 = ((FCHGlobalNode_chpl)(nil));
    chpl_macro_tmp_276.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_276.addr = call_tmp2;
    T = chpl_macro_tmp_276;
    *(x + i) = T;
  }
  return;
}

/* ChapelBase.chpl:740 */
static void coforall_fn26(_ddata_LocCyclicDom_1_int64_t_F x1__e1_args,
                          _ref_range_int64_t_bounded_F this12,
                          int64_t len,
                          int64_t numChunks,
                          int64_t chunk,
                          chpl___EndCount_atomic_int64_int64_t _coforallCount) {
  int64_t ret;
  int64_t ret2;
  _tuple_2_star_int64_t ret_tmp;
  _ref__tuple_2_star_int64_t ret_to_arg_ref_tmp_ = NULL;
  int64_t _ic__F1_high;
  int64_t i;
  _ddata_LocCyclicDom_1_int64_t_F x = NULL;
  LocCyclicDom_1_int64_t_F_chpl call_tmp2 = NULL;
  chpl____wide_LocCyclicDom_1_int64_t_F T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_LocCyclicDom_1_int64_t_F chpl_macro_tmp_277;
  ret = (this12)->_low;
  ret2 = (this12)->_low;
  ret_to_arg_ref_tmp_ = &ret_tmp;
  _computeBlock_chpl(len, numChunks, chunk, (this12)->_high, ret, ret2, ret_to_arg_ref_tmp_);
  _ic__F1_high = *(ret_tmp + INT64(1));
  x = x1__e1_args;
  for (i = *(ret_tmp + INT64(0)); ((i <= _ic__F1_high)); i += INT64(1)) {
    call_tmp2 = ((LocCyclicDom_1_int64_t_F_chpl)(nil));
    chpl_macro_tmp_277.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_277.addr = call_tmp2;
    T = chpl_macro_tmp_277;
    *(x + i) = T;
  }
  return;
}

/* ChapelBase.chpl:740 */
static void coforall_fn27(_ddata_LocCyclic_1_int64_t x1__e1_args,
                          int64_t numChunks,
                          int64_t chunk,
                          chpl___EndCount_atomic_int64_int64_t _coforallCount,
                          _ref_range_int64_t_bounded_F this12,
                          int64_t len) {
  int64_t ret;
  int64_t ret2;
  _tuple_2_star_int64_t ret_tmp;
  _ref__tuple_2_star_int64_t ret_to_arg_ref_tmp_ = NULL;
  int64_t _ic__F1_high;
  int64_t i;
  _ddata_LocCyclic_1_int64_t x = NULL;
  LocCyclic_1_int64_t_chpl call_tmp2 = NULL;
  chpl____wide_LocCyclic_1_int64_t T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_LocCyclic_1_int64_t chpl_macro_tmp_278;
  ret = (this12)->_low;
  ret2 = (this12)->_low;
  ret_to_arg_ref_tmp_ = &ret_tmp;
  _computeBlock_chpl(len, numChunks, chunk, (this12)->_high, ret, ret2, ret_to_arg_ref_tmp_);
  _ic__F1_high = *(ret_tmp + INT64(1));
  x = x1__e1_args;
  for (i = *(ret_tmp + INT64(0)); ((i <= _ic__F1_high)); i += INT64(1)) {
    call_tmp2 = ((LocCyclic_1_int64_t_chpl)(nil));
    chpl_macro_tmp_278.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_278.addr = call_tmp2;
    T = chpl_macro_tmp_278;
    *(x + i) = T;
  }
  return;
}

/* ChapelBase.chpl:740 */
static void coforall_fn28(_ddata_localesSignal x1__e1_args,
                          int64_t chunk,
                          chpl___EndCount_atomic_int64_int64_t _coforallCount,
                          _ref_range_int64_t_bounded_F this12,
                          int64_t len,
                          int64_t numChunks) {
  int64_t ret;
  int64_t ret2;
  _tuple_2_star_int64_t ret_tmp;
  _ref__tuple_2_star_int64_t ret_to_arg_ref_tmp_ = NULL;
  int64_t _ic__F1_high;
  int64_t i;
  _ddata_localesSignal x = NULL;
  localesSignal call_tmp2 = NULL;
  chpl____wide_localesSignal T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_localesSignal chpl_macro_tmp_279;
  ret = (this12)->_low;
  ret2 = (this12)->_low;
  ret_to_arg_ref_tmp_ = &ret_tmp;
  _computeBlock_chpl(len, numChunks, chunk, (this12)->_high, ret, ret2, ret_to_arg_ref_tmp_);
  _ic__F1_high = *(ret_tmp + INT64(1));
  x = x1__e1_args;
  for (i = *(ret_tmp + INT64(0)); ((i <= _ic__F1_high)); i += INT64(1)) {
    call_tmp2 = ((localesSignal)(nil));
    chpl_macro_tmp_279.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_279.addr = call_tmp2;
    T = chpl_macro_tmp_279;
    *(x + i) = T;
  }
  return;
}

/* ChapelBase.chpl:740 */
static void wrapcoforall_fn31(_class_localscoforall_fn27 c) {
  _ddata_LocReplicatedArr_FCHGlobalNode_1_int64_t_F _0_x1__e1_args = NULL;
  int64_t _1_numChunks;
  int64_t _2__yieldedIndex;
  _ref_range_int64_t_bounded_F _4_tmp = NULL;
  int64_t _5_len;
  chpl___EndCount_atomic_int64_int64_t endcount = NULL;
  chpl____wide__EndCount_atomic_int64_int64_t T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_280;
  _0_x1__e1_args = (c)->_0_x1__e1_args;
  _1_numChunks = (c)->_1_numChunks;
  _2__yieldedIndex = (c)->_2__yieldedIndex;
  _4_tmp = (c)->_4_tmp;
  _5_len = (c)->_5_len;
  coforall_fn32(_0_x1__e1_args, _1_numChunks, _2__yieldedIndex, (c)->_3__coforallCount, _4_tmp, _5_len);
  endcount = (c)->_3__coforallCount;
  chpl_macro_tmp_280.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_280.addr = endcount;
  T = chpl_macro_tmp_280;
  _downEndCount(T);
  return;
}

/* ChapelBase.chpl:740 */
static void coforall_fn29(_ddata_locale x1__e1_args,
                          _ref_range_int64_t_bounded_F this12,
                          int64_t len,
                          int64_t numChunks,
                          int64_t chunk,
                          chpl___EndCount_atomic_int64_int64_t _coforallCount) {
  int64_t ret;
  int64_t ret2;
  _tuple_2_star_int64_t ret_tmp;
  _ref__tuple_2_star_int64_t ret_to_arg_ref_tmp_ = NULL;
  int64_t _ic__F1_high;
  int64_t i;
  _ddata_locale x = NULL;
  locale call_tmp2 = NULL;
  chpl____wide_locale T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_locale chpl_macro_tmp_281;
  ret = (this12)->_low;
  ret2 = (this12)->_low;
  ret_to_arg_ref_tmp_ = &ret_tmp;
  _computeBlock_chpl(len, numChunks, chunk, (this12)->_high, ret, ret2, ret_to_arg_ref_tmp_);
  _ic__F1_high = *(ret_tmp + INT64(1));
  x = x1__e1_args;
  for (i = *(ret_tmp + INT64(0)); ((i <= _ic__F1_high)); i += INT64(1)) {
    call_tmp2 = ((locale)(nil));
    chpl_macro_tmp_281.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_281.addr = call_tmp2;
    T = chpl_macro_tmp_281;
    *(x + i) = T;
  }
  return;
}

/* ChapelBase.chpl:740 */
static void wrapcoforall_fn20(_class_localscoforall_fn24 c) {
  _ddata_LocCyclicArr__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F _0_x1__e1_args = NULL;
  chpl___EndCount_atomic_int64_int64_t _3__coforallCount = NULL;
  _ref_range_int64_t_bounded_F _4_tmp = NULL;
  int64_t _5_len;
  chpl___EndCount_atomic_int64_int64_t endcount = NULL;
  chpl____wide__EndCount_atomic_int64_int64_t T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_282;
  _0_x1__e1_args = (c)->_0_x1__e1_args;
  _3__coforallCount = (c)->_3__coforallCount;
  _4_tmp = (c)->_4_tmp;
  _5_len = (c)->_5_len;
  coforall_fn20(_0_x1__e1_args, (c)->_1_numChunks, (c)->_2__yieldedIndex, _3__coforallCount, _4_tmp, _5_len);
  endcount = (c)->_3__coforallCount;
  chpl_macro_tmp_282.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_282.addr = endcount;
  T = chpl_macro_tmp_282;
  _downEndCount(T);
  return;
}

/* ChapelBase.chpl:740 */
static void wrapcoforall_fn15(_class_localscoforall_fn26 c) {
  _ddata_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F _0_x1__e1_args = NULL;
  _ref_range_int64_t_bounded_F _4_tmp = NULL;
  chpl___EndCount_atomic_int64_int64_t endcount = NULL;
  chpl____wide__EndCount_atomic_int64_int64_t T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_283;
  _0_x1__e1_args = (c)->_0_x1__e1_args;
  _4_tmp = (c)->_4_tmp;
  coforall_fn31(_0_x1__e1_args, (c)->_1_numChunks, (c)->_2__yieldedIndex, (c)->_3__coforallCount, _4_tmp, (c)->_5_len);
  endcount = (c)->_3__coforallCount;
  chpl_macro_tmp_283.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_283.addr = endcount;
  T = chpl_macro_tmp_283;
  _downEndCount(T);
  return;
}

/* ChapelBase.chpl:740 */
static void wrapcoforall_fn24(_class_localscoforall_fn20 c) {
  _ddata_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t _0_x1__e1_args = NULL;
  _ref_range_int64_t_bounded_F _4_tmp = NULL;
  chpl___EndCount_atomic_int64_int64_t endcount = NULL;
  chpl____wide__EndCount_atomic_int64_int64_t T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_284;
  _0_x1__e1_args = (c)->_0_x1__e1_args;
  _4_tmp = (c)->_4_tmp;
  coforall_fn15(_0_x1__e1_args, (c)->_1_len, (c)->_2__yieldedIndex, (c)->_3_numChunks, _4_tmp, (c)->_5__coforallCount);
  endcount = (c)->_5__coforallCount;
  chpl_macro_tmp_284.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_284.addr = endcount;
  T = chpl_macro_tmp_284;
  _downEndCount(T);
  return;
}

/* ChapelBase.chpl:740 */
static void wrapcoforall_fn32(_class_localscoforall_fn16 c) {
  _ddata_LocReplicatedDom_1_int64_t_F _0_x1__e1_args = NULL;
  _ref_range_int64_t_bounded_F _4_tmp = NULL;
  int64_t _5_len;
  chpl___EndCount_atomic_int64_int64_t endcount = NULL;
  chpl____wide__EndCount_atomic_int64_int64_t T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_285;
  _0_x1__e1_args = (c)->_0_x1__e1_args;
  _4_tmp = (c)->_4_tmp;
  _5_len = (c)->_5_len;
  coforall_fn19(_0_x1__e1_args, (c)->_1__yieldedIndex, (c)->_2__coforallCount, (c)->_3_numChunks, _4_tmp, _5_len);
  endcount = (c)->_2__coforallCount;
  chpl_macro_tmp_285.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_285.addr = endcount;
  T = chpl_macro_tmp_285;
  _downEndCount(T);
  return;
}

/* ChapelBase.chpl:740 */
static void wrapcoforall_fn18(_class_localscoforall_fn21 c) {
  _ddata_chpl_TableEntry_int64_t _0_x1__e1_args = NULL;
  _ref_range_int64_t_bounded_F _1_tmp = NULL;
  chpl___EndCount_atomic_int64_int64_t endcount = NULL;
  chpl____wide__EndCount_atomic_int64_int64_t T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_286;
  _0_x1__e1_args = (c)->_0_x1__e1_args;
  _1_tmp = (c)->_1_tmp;
  coforall_fn18(_0_x1__e1_args, _1_tmp, (c)->_2_len, (c)->_3_numChunks, (c)->_4__yieldedIndex, (c)->_5__coforallCount);
  endcount = (c)->_5__coforallCount;
  chpl_macro_tmp_286.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_286.addr = endcount;
  T = chpl_macro_tmp_286;
  _downEndCount(T);
  return;
}

/* ChapelBase.chpl:740 */
static void wrapcoforall_fn22(_class_localscoforall_fn22 c) {
  _ref_range_int64_t_bounded_F _4_tmp = NULL;
  chpl___EndCount_atomic_int64_int64_t endcount = NULL;
  chpl____wide__EndCount_atomic_int64_int64_t T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_287;
  _4_tmp = (c)->_4_tmp;
  coforall_fn17((c)->_0_x1__e1_args, (c)->_1_numChunks, (c)->_2__yieldedIndex, (c)->_3__coforallCount, _4_tmp, (c)->_5_len);
  endcount = (c)->_3__coforallCount;
  chpl_macro_tmp_287.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_287.addr = endcount;
  T = chpl_macro_tmp_287;
  _downEndCount(T);
  return;
}

/* ChapelBase.chpl:740 */
static void wrapcoforall_fn25(_class_localscoforall_fn23 c) {
  int64_t _1__yieldedIndex;
  chpl___EndCount_atomic_int64_int64_t _2__coforallCount = NULL;
  _ref_range_int64_t_bounded_F _3_tmp = NULL;
  int64_t _4_len;
  int64_t _5_numChunks;
  chpl___EndCount_atomic_int64_int64_t endcount = NULL;
  chpl____wide__EndCount_atomic_int64_int64_t T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_288;
  _1__yieldedIndex = (c)->_1__yieldedIndex;
  _2__coforallCount = (c)->_2__coforallCount;
  _3_tmp = (c)->_3_tmp;
  _4_len = (c)->_4_len;
  _5_numChunks = (c)->_5_numChunks;
  coforall_fn16((c)->_0_x1__e1_args, _1__yieldedIndex, _2__coforallCount, _3_tmp, _4_len, _5_numChunks);
  endcount = (c)->_2__coforallCount;
  chpl_macro_tmp_288.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_288.addr = endcount;
  T = chpl_macro_tmp_288;
  _downEndCount(T);
  return;
}

/* ChapelBase.chpl:740 */
static void wrapcoforall_fn26(_class_localscoforall_fn30 c) {
  _ref_range_int64_t_bounded_F _2_tmp = NULL;
  int64_t _4_numChunks;
  chpl___EndCount_atomic_int64_int64_t endcount = NULL;
  chpl____wide__EndCount_atomic_int64_int64_t T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_289;
  _2_tmp = (c)->_2_tmp;
  _4_numChunks = (c)->_4_numChunks;
  coforall_fn30((c)->_0_x1__e1_args, (c)->_1__coforallCount, _2_tmp, (c)->_3_len, _4_numChunks, (c)->_5__yieldedIndex);
  endcount = (c)->_1__coforallCount;
  chpl_macro_tmp_289.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_289.addr = endcount;
  T = chpl_macro_tmp_289;
  _downEndCount(T);
  return;
}

/* ChapelBase.chpl:740 */
static void wrapcoforall_fn27(_class_localscoforall_fn19 c) {
  _ref_range_int64_t_bounded_F _1_tmp = NULL;
  chpl___EndCount_atomic_int64_int64_t endcount = NULL;
  chpl____wide__EndCount_atomic_int64_int64_t T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_290;
  _1_tmp = (c)->_1_tmp;
  coforall_fn23((c)->_0_x1__e1_args, _1_tmp, (c)->_2_len, (c)->_3_numChunks, (c)->_4__yieldedIndex, (c)->_5__coforallCount);
  endcount = (c)->_5__coforallCount;
  chpl_macro_tmp_290.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_290.addr = endcount;
  T = chpl_macro_tmp_290;
  _downEndCount(T);
  return;
}

/* ChapelBase.chpl:740 */
static void coforall_fn32(_ddata_LocReplicatedArr_FCHGlobalNode_1_int64_t_F x1__e1_args,
                          int64_t numChunks,
                          int64_t chunk,
                          chpl___EndCount_atomic_int64_int64_t _coforallCount,
                          _ref_range_int64_t_bounded_F this12,
                          int64_t len) {
  _tuple_2_star_int64_t ret_tmp;
  _ref__tuple_2_star_int64_t ret_to_arg_ref_tmp_ = NULL;
  int64_t _ic__F1_high;
  int64_t i;
  _ddata_LocReplicatedArr_FCHGlobalNode_1_int64_t_F x = NULL;
  LocReplicatedArr_FCHGlobalNode_1_int64_t_F_chpl call_tmp2 = NULL;
  chpl____wide_LocReplicatedArr_FCHGlobalNode_1_int64_t_F T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_LocReplicatedArr_FCHGlobalNode_1_int64_t_F chpl_macro_tmp_291;
  ret_to_arg_ref_tmp_ = &ret_tmp;
  _computeBlock_chpl(len, numChunks, chunk, (this12)->_high, (this12)->_low, (this12)->_low, ret_to_arg_ref_tmp_);
  _ic__F1_high = *(ret_tmp + INT64(1));
  x = x1__e1_args;
  for (i = *(ret_tmp + INT64(0)); ((i <= _ic__F1_high)); i += INT64(1)) {
    call_tmp2 = ((LocReplicatedArr_FCHGlobalNode_1_int64_t_F_chpl)(nil));
    chpl_macro_tmp_291.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_291.addr = call_tmp2;
    T = chpl_macro_tmp_291;
    *(x + i) = T;
  }
  return;
}

/* ChapelBase.chpl:740 */
static void wrapcoforall_fn30(_class_localscoforall_fn32 c) {
  _ref_range_int64_t_bounded_F _1_tmp = NULL;
  chpl___EndCount_atomic_int64_int64_t _5__coforallCount = NULL;
  _ref__RuntimeTypeInfo28 _6_tmp = NULL;
  chpl___EndCount_atomic_int64_int64_t endcount = NULL;
  chpl____wide__EndCount_atomic_int64_int64_t T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_292;
  _1_tmp = (c)->_1_tmp;
  _5__coforallCount = (c)->_5__coforallCount;
  _6_tmp = (c)->_6_tmp;
  coforall_fn21((c)->_0_x1__e1_args, _1_tmp, (c)->_2_len, (c)->_3_numChunks, (c)->_4__yieldedIndex, _5__coforallCount, _6_tmp);
  endcount = (c)->_5__coforallCount;
  chpl_macro_tmp_292.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_292.addr = endcount;
  T = chpl_macro_tmp_292;
  _downEndCount(T);
  return;
}

/* ChapelBase.chpl:740 */
static void wrapcoforall_fn29(_class_localscoforall_fn28 c) {
  _ref_range_int64_t_bounded_F _3_tmp = NULL;
  chpl___EndCount_atomic_int64_int64_t endcount = NULL;
  chpl____wide__EndCount_atomic_int64_int64_t T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_293;
  _3_tmp = (c)->_3_tmp;
  coforall_fn22((c)->_0_x1__e1_args, (c)->_1__yieldedIndex, (c)->_2__coforallCount, _3_tmp, (c)->_4_len, (c)->_5_numChunks);
  endcount = (c)->_2__coforallCount;
  chpl_macro_tmp_293.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_293.addr = endcount;
  T = chpl_macro_tmp_293;
  _downEndCount(T);
  return;
}

/* ChapelBase.chpl:740 */
static void wrapcoforall_fn23(_class_localscoforall_fn25 c) {
  _ddata__remoteAccessData__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F_F _0_x1__e1_args = NULL;
  _ref_range_int64_t_bounded_F _4_tmp = NULL;
  chpl___EndCount_atomic_int64_int64_t endcount = NULL;
  chpl____wide__EndCount_atomic_int64_int64_t T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_294;
  _0_x1__e1_args = (c)->_0_x1__e1_args;
  _4_tmp = (c)->_4_tmp;
  coforall_fn24(_0_x1__e1_args, (c)->_1_numChunks, (c)->_2__yieldedIndex, (c)->_3__coforallCount, _4_tmp, (c)->_5_len);
  endcount = (c)->_3__coforallCount;
  chpl_macro_tmp_294.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_294.addr = endcount;
  T = chpl_macro_tmp_294;
  _downEndCount(T);
  return;
}

/* ChapelBase.chpl:740 */
static void wrapcoforall_fn28(_class_localscoforall_fn31 c) {
  _ddata_FCHGlobalNode _0_x1__e1_args = NULL;
  _ref_range_int64_t_bounded_F _4_tmp = NULL;
  chpl___EndCount_atomic_int64_int64_t endcount = NULL;
  chpl____wide__EndCount_atomic_int64_int64_t T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_295;
  _0_x1__e1_args = (c)->_0_x1__e1_args;
  _4_tmp = (c)->_4_tmp;
  coforall_fn25(_0_x1__e1_args, (c)->_1_numChunks, (c)->_2__yieldedIndex, (c)->_3__coforallCount, _4_tmp, (c)->_5_len);
  endcount = (c)->_3__coforallCount;
  chpl_macro_tmp_295.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_295.addr = endcount;
  T = chpl_macro_tmp_295;
  _downEndCount(T);
  return;
}

/* ChapelBase.chpl:740 */
static void wrapcoforall_fn21(_class_localscoforall_fn29 c) {
  _ddata_LocCyclicDom_1_int64_t_F _0_x1__e1_args = NULL;
  _ref_range_int64_t_bounded_F _1_tmp = NULL;
  int64_t _2_len;
  int64_t _3_numChunks;
  int64_t _4__yieldedIndex;
  chpl___EndCount_atomic_int64_int64_t endcount = NULL;
  chpl____wide__EndCount_atomic_int64_int64_t T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_296;
  _0_x1__e1_args = (c)->_0_x1__e1_args;
  _1_tmp = (c)->_1_tmp;
  _2_len = (c)->_2_len;
  _3_numChunks = (c)->_3_numChunks;
  _4__yieldedIndex = (c)->_4__yieldedIndex;
  coforall_fn26(_0_x1__e1_args, _1_tmp, _2_len, _3_numChunks, _4__yieldedIndex, (c)->_5__coforallCount);
  endcount = (c)->_5__coforallCount;
  chpl_macro_tmp_296.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_296.addr = endcount;
  T = chpl_macro_tmp_296;
  _downEndCount(T);
  return;
}

/* ChapelBase.chpl:740 */
static void wrapcoforall_fn19(_class_localscoforall_fn15 c) {
  _ref_range_int64_t_bounded_F _4_tmp = NULL;
  chpl___EndCount_atomic_int64_int64_t endcount = NULL;
  chpl____wide__EndCount_atomic_int64_int64_t T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_297;
  _4_tmp = (c)->_4_tmp;
  coforall_fn27((c)->_0_x1__e1_args, (c)->_1_numChunks, (c)->_2__yieldedIndex, (c)->_3__coforallCount, _4_tmp, (c)->_5_len);
  endcount = (c)->_3__coforallCount;
  chpl_macro_tmp_297.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_297.addr = endcount;
  T = chpl_macro_tmp_297;
  _downEndCount(T);
  return;
}

/* ChapelBase.chpl:740 */
static void wrapcoforall_fn16(_class_localscoforall_fn18 c) {
  _ref_range_int64_t_bounded_F _3_tmp = NULL;
  chpl___EndCount_atomic_int64_int64_t endcount = NULL;
  chpl____wide__EndCount_atomic_int64_int64_t T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_298;
  _3_tmp = (c)->_3_tmp;
  coforall_fn28((c)->_0_x1__e1_args, (c)->_1__yieldedIndex, (c)->_2__coforallCount, _3_tmp, (c)->_4_len, (c)->_5_numChunks);
  endcount = (c)->_2__coforallCount;
  chpl_macro_tmp_298.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_298.addr = endcount;
  T = chpl_macro_tmp_298;
  _downEndCount(T);
  return;
}

/* ChapelBase.chpl:740 */
static void wrapcoforall_fn17(_class_localscoforall_fn17 c) {
  _ddata_locale _0_x1__e1_args = NULL;
  _ref_range_int64_t_bounded_F _1_tmp = NULL;
  chpl___EndCount_atomic_int64_int64_t endcount = NULL;
  chpl____wide__EndCount_atomic_int64_int64_t T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_299;
  _0_x1__e1_args = (c)->_0_x1__e1_args;
  _1_tmp = (c)->_1_tmp;
  coforall_fn29(_0_x1__e1_args, _1_tmp, (c)->_2_len, (c)->_3_numChunks, (c)->_4__yieldedIndex, (c)->_5__coforallCount);
  endcount = (c)->_5__coforallCount;
  chpl_macro_tmp_299.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_299.addr = endcount;
  T = chpl_macro_tmp_299;
  _downEndCount(T);
  return;
}

/* ChapelBase.chpl:843 */
static chpl___EndCount_atomic_int64_int64_t _construct__EndCount(_ref_atomic_int64 i,
                                                                 int64_t taskCnt,
                                                                 c_void_ptr taskList,
                                                                 chpl___EndCount_atomic_int64_int64_t meme) {
  chpl___EndCount_atomic_int64_int64_t this12 = NULL;
  this12 = meme;
  _construct_object(&((this12)->super));
  (this12)->i = *(i);
  (this12)->taskCnt = taskCnt;
  (this12)->taskList = taskList;
  return this12;
}

/* ChapelBase.chpl:843 */
static void chpl__auto_destroy__EndCount(chpl____wide__EndCount_atomic_int64_int64_t this12) {
  chpl____wide__ref_atomic_int64 _field_destructor_tmp_ = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int_least64_t call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_atomic_int_least64_t T = NULL;
  chpl____wide__ref_atomic_int64 chpl_macro_tmp_300;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_301;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_302;
  chpl_macro_tmp_300.locale = (&this12)->locale;
  chpl_macro_tmp_300.addr = &(((&this12)->addr)->i);
  _field_destructor_tmp_ = chpl_macro_tmp_300;
  chpl_macro_tmp_301.locale = (_field_destructor_tmp_).locale;
  chpl_macro_tmp_301.addr = &(((_field_destructor_tmp_).addr)->_v);
  call_tmp2 = chpl_macro_tmp_301;
  T = (&call_tmp2)->addr;
  atomic_destroy_int_least64_t(T);
  chpl_macro_tmp_302.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_302.addr = T;
  call_tmp2 = chpl_macro_tmp_302;
  return;
}

/* ChapelBase.chpl:887 */
static void _upEndCount(chpl___EndCount_atomic_int64_int64_t e) {
  memory_order local_memory_order_relaxed;
  int32_t local_c_sublocid_any;
  memory_order local_memory_order_release;
  chpl_localeID_t call_tmp2;
  chpl___EndCount_atomic_int64_int64_t rvfDerefTmp = NULL;
  chpl_bool isdirect;
  chpl____wide__EndCount_atomic_int64_int64_t T = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn100 _args_foron_fn = NULL;
  chpl____wide__EndCount_atomic_int64_int64_t T2 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn;
  chpl____wide_locale call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t _autoCopy_tmp_;
  chpl____wide_locale call_tmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int64 call_tmp5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp6;
  chpl____wide__ref_atomic_int64 T3 = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order rvfDerefTmp2;
  chpl_bool isdirect2;
  _class_localson_fn13 _args_foron_fn2 = NULL;
  chpl____wide__ref_atomic_int64 T4 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn2;
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_303;
  chpl__class_localson_fn100_object chpl_macro_tmp_304;
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_305;
  chpl____wide__ref_atomic_int64 chpl_macro_tmp_306;
  chpl__class_localson_fn13_object chpl_macro_tmp_307;
  local_memory_order_relaxed = memory_order_relaxed;
  local_c_sublocid_any = c_sublocid_any;
  local_memory_order_release = memory_order_release;
  chpl_rmem_consist_fence(local_memory_order_release, INT64(895), INT32(2));
  call_tmp2 = chpl_gen_getLocaleID();
  rvfDerefTmp = e;
  isdirect = chpl_doDirectExecuteOn(&call_tmp2);
  if (isdirect) {
    chpl_macro_tmp_303.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_303.addr = rvfDerefTmp;
    T = chpl_macro_tmp_303;
    on_fn100(T);
  } else {
    _args_foron_fn = ((_class_localson_fn100)(&chpl_macro_tmp_304));
    (_args_foron_fn)->_0_rvfDerefTmp = call_tmp2;
    chpl_macro_tmp_305.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_305.addr = rvfDerefTmp;
    T2 = chpl_macro_tmp_305;
    (_args_foron_fn)->_1_rvfDerefTmp = T2;
    _args_vforon_fn = ((void*)(_args_foron_fn));
    /*** wrapon_fn100 ***/ chpl_executeOn(&call_tmp2, INT32(163), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn100_object), INT64(896), INT32(2));
  }
  _autoCopy_tmp_ = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any);
  call_tmp4 = chpl_localeID_to_locale(&_autoCopy_tmp_);
  call_tmp3 = call_tmp4;
  chpl_macro_tmp_306.locale = (&call_tmp3)->locale;
  chpl_macro_tmp_306.addr = &(((&call_tmp3)->addr)->runningTaskCounter);
  call_tmp5 = chpl_macro_tmp_306;
  call_tmp6 = (&call_tmp5)->locale;
  T3 = call_tmp5;
  rvfDerefTmp2 = local_memory_order_relaxed;
  isdirect2 = chpl_doDirectExecuteOn(&call_tmp6);
  if (isdirect2) {
    on_fn13(T3, INT64(1), rvfDerefTmp2);
  } else {
    _args_foron_fn2 = ((_class_localson_fn13)(&chpl_macro_tmp_307));
    (_args_foron_fn2)->_0_rvfDerefTmp = call_tmp6;
    T4 = call_tmp5;
    (_args_foron_fn2)->_1_tmp = T4;
    (_args_foron_fn2)->_2_rvfDerefTmp = INT64(1);
    (_args_foron_fn2)->_3_rvfDerefTmp = rvfDerefTmp2;
    _args_vforon_fn2 = ((void*)(_args_foron_fn2));
    /*** wrapon_fn13 ***/ chpl_executeOnFast(&call_tmp6, INT32(14), ((chpl_comm_on_bundle_p)(_args_vforon_fn2)), sizeof(chpl__class_localson_fn13_object), INT64(1238), INT32(12));
  }
  return;
}

/* ChapelBase.chpl:887 */
static void _upEndCount2(chpl___EndCount_atomic_int64_int64_t e) {
  memory_order local_memory_order_release;
  chpl_localeID_t call_tmp2;
  chpl___EndCount_atomic_int64_int64_t rvfDerefTmp = NULL;
  chpl_bool isdirect;
  chpl____wide__EndCount_atomic_int64_int64_t T = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn99 _args_foron_fn = NULL;
  chpl____wide__EndCount_atomic_int64_int64_t T2 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn;
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_308;
  chpl__class_localson_fn99_object chpl_macro_tmp_309;
  chpl____wide__EndCount_atomic_int64_int64_t chpl_macro_tmp_310;
  local_memory_order_release = memory_order_release;
  chpl_rmem_consist_fence(local_memory_order_release, INT64(895), INT32(2));
  call_tmp2 = chpl_gen_getLocaleID();
  rvfDerefTmp = e;
  isdirect = chpl_doDirectExecuteOn(&call_tmp2);
  if (isdirect) {
    chpl_macro_tmp_308.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_308.addr = rvfDerefTmp;
    T = chpl_macro_tmp_308;
    on_fn99(T);
  } else {
    _args_foron_fn = ((_class_localson_fn99)(&chpl_macro_tmp_309));
    (_args_foron_fn)->_0_rvfDerefTmp = call_tmp2;
    chpl_macro_tmp_310.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_310.addr = rvfDerefTmp;
    T2 = chpl_macro_tmp_310;
    (_args_foron_fn)->_1_rvfDerefTmp = T2;
    _args_vforon_fn = ((void*)(_args_foron_fn));
    /*** wrapon_fn99 ***/ chpl_executeOn(&call_tmp2, INT32(162), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn99_object), INT64(896), INT32(2));
  }
  return;
}

/* ChapelBase.chpl:896 */
static void on_fn100(chpl____wide__EndCount_atomic_int64_int64_t e) {
  memory_order local_memory_order_release;
  chpl____wide__EndCount_atomic_int64_int64_t rvfRerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int64 call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp3;
  chpl____wide__ref_atomic_int64 T = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order rvfDerefTmp;
  chpl_bool isdirect;
  _class_localson_fn13 _args_foron_fn = NULL;
  chpl____wide__ref_atomic_int64 T2 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn;
  chpl____wide__EndCount_atomic_int64_int64_t rvfRerefTmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_int64_t call_tmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int64 chpl_macro_tmp_311;
  chpl__class_localson_fn13_object chpl_macro_tmp_312;
  chpl____wide__ref_int64_t chpl_macro_tmp_313;
  int64_t chpl_macro_tmp_314;
  local_memory_order_release = memory_order_release;
  rvfRerefTmp = e;
  chpl_macro_tmp_311.locale = (&rvfRerefTmp)->locale;
  chpl_macro_tmp_311.addr = &(((&rvfRerefTmp)->addr)->i);
  call_tmp2 = chpl_macro_tmp_311;
  call_tmp3 = (&call_tmp2)->locale;
  T = call_tmp2;
  rvfDerefTmp = local_memory_order_release;
  isdirect = chpl_doDirectExecuteOn(&call_tmp3);
  if (isdirect) {
    on_fn13(T, INT64(1), rvfDerefTmp);
  } else {
    _args_foron_fn = ((_class_localson_fn13)(&chpl_macro_tmp_312));
    (_args_foron_fn)->_0_rvfDerefTmp = call_tmp3;
    T2 = call_tmp2;
    (_args_foron_fn)->_1_tmp = T2;
    (_args_foron_fn)->_2_rvfDerefTmp = INT64(1);
    (_args_foron_fn)->_3_rvfDerefTmp = rvfDerefTmp;
    _args_vforon_fn = ((void*)(_args_foron_fn));
    /*** wrapon_fn13 ***/ chpl_executeOnFast(&call_tmp3, INT32(14), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn13_object), INT64(1238), INT32(12));
  }
  rvfRerefTmp2 = e;
  chpl_macro_tmp_313.locale = (&rvfRerefTmp2)->locale;
  chpl_macro_tmp_313.addr = &(((&rvfRerefTmp2)->addr)->taskCnt);
  call_tmp4 = chpl_macro_tmp_313;
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_314)), chpl_nodeFromLocaleID(&((call_tmp4).locale), INT64(0), INT32(0)), (call_tmp4).addr, sizeof(int64_t), -1, COMMID(2), INT64(898), INT64(2));
  chpl_macro_tmp_314 += INT64(1);
  chpl_gen_comm_put(((void*)(&chpl_macro_tmp_314)), chpl_nodeFromLocaleID(&((call_tmp4).locale), INT64(0), INT32(0)), (call_tmp4).addr, sizeof(int64_t), -1, COMMID(3), INT64(898), INT64(2));
  return;
}

/* ChapelBase.chpl:896 */
static void on_fn99(chpl____wide__EndCount_atomic_int64_int64_t e) {
  memory_order local_memory_order_release;
  chpl____wide__EndCount_atomic_int64_int64_t rvfRerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int64 call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp3;
  chpl____wide__ref_atomic_int64 T = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order rvfDerefTmp;
  chpl_bool isdirect;
  _class_localson_fn13 _args_foron_fn = NULL;
  chpl____wide__ref_atomic_int64 T2 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn;
  chpl____wide__EndCount_atomic_int64_int64_t rvfRerefTmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_int64_t call_tmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int64 chpl_macro_tmp_315;
  chpl__class_localson_fn13_object chpl_macro_tmp_316;
  chpl____wide__ref_int64_t chpl_macro_tmp_317;
  int64_t chpl_macro_tmp_318;
  local_memory_order_release = memory_order_release;
  rvfRerefTmp = e;
  chpl_macro_tmp_315.locale = (&rvfRerefTmp)->locale;
  chpl_macro_tmp_315.addr = &(((&rvfRerefTmp)->addr)->i);
  call_tmp2 = chpl_macro_tmp_315;
  call_tmp3 = (&call_tmp2)->locale;
  T = call_tmp2;
  rvfDerefTmp = local_memory_order_release;
  isdirect = chpl_doDirectExecuteOn(&call_tmp3);
  if (isdirect) {
    on_fn13(T, INT64(1), rvfDerefTmp);
  } else {
    _args_foron_fn = ((_class_localson_fn13)(&chpl_macro_tmp_316));
    (_args_foron_fn)->_0_rvfDerefTmp = call_tmp3;
    T2 = call_tmp2;
    (_args_foron_fn)->_1_tmp = T2;
    (_args_foron_fn)->_2_rvfDerefTmp = INT64(1);
    (_args_foron_fn)->_3_rvfDerefTmp = rvfDerefTmp;
    _args_vforon_fn = ((void*)(_args_foron_fn));
    /*** wrapon_fn13 ***/ chpl_executeOnFast(&call_tmp3, INT32(14), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn13_object), INT64(1238), INT32(12));
  }
  rvfRerefTmp2 = e;
  chpl_macro_tmp_317.locale = (&rvfRerefTmp2)->locale;
  chpl_macro_tmp_317.addr = &(((&rvfRerefTmp2)->addr)->taskCnt);
  call_tmp4 = chpl_macro_tmp_317;
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_318)), chpl_nodeFromLocaleID(&((call_tmp4).locale), INT64(0), INT32(0)), (call_tmp4).addr, sizeof(int64_t), -1, COMMID(4), INT64(898), INT64(2));
  chpl_macro_tmp_318 += INT64(1);
  chpl_gen_comm_put(((void*)(&chpl_macro_tmp_318)), chpl_nodeFromLocaleID(&((call_tmp4).locale), INT64(0), INT32(0)), (call_tmp4).addr, sizeof(int64_t), -1, COMMID(5), INT64(898), INT64(2));
  return;
}

/* ChapelBase.chpl:896 */
static void wrapon_fn100(_class_localson_fn100 c) {
  chpl____wide__EndCount_atomic_int64_int64_t _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  on_fn100(_1_rvfDerefTmp);
  return;
}

/* ChapelBase.chpl:896 */
static void wrapon_fn99(_class_localson_fn99 c) {
  chpl____wide__EndCount_atomic_int64_int64_t _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  on_fn99(_1_rvfDerefTmp);
  return;
}

/* ChapelBase.chpl:908 */
static void _upEndCount3(chpl___EndCount_atomic_int64_int64_t e,
                         int64_t numTasks) {
  memory_order local_memory_order_relaxed;
  int32_t local_c_sublocid_any;
  memory_order local_memory_order_release;
  _ref_atomic_int64 call_tmp2 = NULL;
  chpl_localeID_t call_tmp3;
  _ref_atomic_int64 T = NULL;
  memory_order rvfDerefTmp;
  chpl_bool isdirect;
  chpl____wide__ref_atomic_int64 T2 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn13 _args_foron_fn = NULL;
  _ref_atomic_int64 T3 = NULL;
  chpl____wide__ref_atomic_int64 T4 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn;
  chpl____wide_locale call_tmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t _autoCopy_tmp_;
  chpl____wide_locale call_tmp5 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp6;
  chpl____wide__ref_atomic_int64 call_tmp7 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp8;
  chpl____wide__ref_atomic_int64 T5 = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order rvfDerefTmp2;
  chpl_bool isdirect2;
  _class_localson_fn13 _args_foron_fn2 = NULL;
  chpl____wide__ref_atomic_int64 T6 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn2;
  chpl____wide__ref_atomic_int64 chpl_macro_tmp_319;
  chpl__class_localson_fn13_object chpl_macro_tmp_320;
  chpl____wide__ref_atomic_int64 chpl_macro_tmp_321;
  chpl____wide__ref_atomic_int64 chpl_macro_tmp_322;
  chpl__class_localson_fn13_object chpl_macro_tmp_323;
  local_memory_order_relaxed = memory_order_relaxed;
  local_c_sublocid_any = c_sublocid_any;
  local_memory_order_release = memory_order_release;
  call_tmp2 = &((e)->i);
  call_tmp3 = chpl_gen_getLocaleID();
  T = call_tmp2;
  rvfDerefTmp = local_memory_order_release;
  isdirect = chpl_doDirectExecuteOn(&call_tmp3);
  if (isdirect) {
    chpl_macro_tmp_319.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_319.addr = T;
    T2 = chpl_macro_tmp_319;
    on_fn13(T2, numTasks, rvfDerefTmp);
  } else {
    _args_foron_fn = ((_class_localson_fn13)(&chpl_macro_tmp_320));
    (_args_foron_fn)->_0_rvfDerefTmp = call_tmp3;
    T3 = call_tmp2;
    chpl_macro_tmp_321.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_321.addr = T3;
    T4 = chpl_macro_tmp_321;
    (_args_foron_fn)->_1_tmp = T4;
    (_args_foron_fn)->_2_rvfDerefTmp = numTasks;
    (_args_foron_fn)->_3_rvfDerefTmp = rvfDerefTmp;
    _args_vforon_fn = ((void*)(_args_foron_fn));
    /*** wrapon_fn13 ***/ chpl_executeOnFast(&call_tmp3, INT32(14), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn13_object), INT64(1238), INT32(12));
  }
  _autoCopy_tmp_ = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any);
  call_tmp5 = chpl_localeID_to_locale(&_autoCopy_tmp_);
  call_tmp4 = call_tmp5;
  call_tmp6 = (numTasks - INT64(1));
  chpl_macro_tmp_322.locale = (&call_tmp4)->locale;
  chpl_macro_tmp_322.addr = &(((&call_tmp4)->addr)->runningTaskCounter);
  call_tmp7 = chpl_macro_tmp_322;
  call_tmp8 = (&call_tmp7)->locale;
  T5 = call_tmp7;
  rvfDerefTmp2 = local_memory_order_relaxed;
  isdirect2 = chpl_doDirectExecuteOn(&call_tmp8);
  if (isdirect2) {
    on_fn13(T5, call_tmp6, rvfDerefTmp2);
  } else {
    _args_foron_fn2 = ((_class_localson_fn13)(&chpl_macro_tmp_323));
    (_args_foron_fn2)->_0_rvfDerefTmp = call_tmp8;
    T6 = call_tmp7;
    (_args_foron_fn2)->_1_tmp = T6;
    (_args_foron_fn2)->_2_rvfDerefTmp = call_tmp6;
    (_args_foron_fn2)->_3_rvfDerefTmp = rvfDerefTmp2;
    _args_vforon_fn2 = ((void*)(_args_foron_fn2));
    /*** wrapon_fn13 ***/ chpl_executeOnFast(&call_tmp8, INT32(14), ((chpl_comm_on_bundle_p)(_args_vforon_fn2)), sizeof(chpl__class_localson_fn13_object), INT64(1238), INT32(12));
  }
  return;
}

/* ChapelBase.chpl:908 */
static void _upEndCount4(chpl___EndCount_atomic_int64_int64_t e,
                         int64_t numTasks) {
  memory_order local_memory_order_release;
  _ref_atomic_int64 call_tmp2 = NULL;
  chpl_localeID_t call_tmp3;
  _ref_atomic_int64 T = NULL;
  memory_order rvfDerefTmp;
  chpl_bool isdirect;
  chpl____wide__ref_atomic_int64 T2 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn13 _args_foron_fn = NULL;
  _ref_atomic_int64 T3 = NULL;
  chpl____wide__ref_atomic_int64 T4 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn;
  chpl____wide__ref_atomic_int64 chpl_macro_tmp_324;
  chpl__class_localson_fn13_object chpl_macro_tmp_325;
  chpl____wide__ref_atomic_int64 chpl_macro_tmp_326;
  local_memory_order_release = memory_order_release;
  call_tmp2 = &((e)->i);
  call_tmp3 = chpl_gen_getLocaleID();
  T = call_tmp2;
  rvfDerefTmp = local_memory_order_release;
  isdirect = chpl_doDirectExecuteOn(&call_tmp3);
  if (isdirect) {
    chpl_macro_tmp_324.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_324.addr = T;
    T2 = chpl_macro_tmp_324;
    on_fn13(T2, numTasks, rvfDerefTmp);
  } else {
    _args_foron_fn = ((_class_localson_fn13)(&chpl_macro_tmp_325));
    (_args_foron_fn)->_0_rvfDerefTmp = call_tmp3;
    T3 = call_tmp2;
    chpl_macro_tmp_326.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_326.addr = T3;
    T4 = chpl_macro_tmp_326;
    (_args_foron_fn)->_1_tmp = T4;
    (_args_foron_fn)->_2_rvfDerefTmp = numTasks;
    (_args_foron_fn)->_3_rvfDerefTmp = rvfDerefTmp;
    _args_vforon_fn = ((void*)(_args_foron_fn));
    /*** wrapon_fn13 ***/ chpl_executeOnFast(&call_tmp3, INT32(14), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn13_object), INT64(1238), INT32(12));
  }
  return;
}

/* ChapelBase.chpl:919 */
static void _downEndCount(chpl____wide__EndCount_atomic_int64_int64_t e) {
  memory_order local_memory_order_release;
  chpl____wide__ref_atomic_int64 call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp3;
  chpl____wide__ref_atomic_int64 T = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order rvfDerefTmp;
  chpl_bool isdirect;
  _class_localson_fn14 _args_foron_fn = NULL;
  chpl____wide__ref_atomic_int64 T2 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn;
  chpl____wide__ref_atomic_int64 chpl_macro_tmp_327;
  chpl__class_localson_fn14_object chpl_macro_tmp_328;
  local_memory_order_release = memory_order_release;
  chpl_macro_tmp_327.locale = (&e)->locale;
  chpl_macro_tmp_327.addr = &(((&e)->addr)->i);
  call_tmp2 = chpl_macro_tmp_327;
  call_tmp3 = (&call_tmp2)->locale;
  T = call_tmp2;
  rvfDerefTmp = local_memory_order_release;
  isdirect = chpl_doDirectExecuteOn(&call_tmp3);
  if (isdirect) {
    on_fn14(T, INT64(1), rvfDerefTmp);
  } else {
    _args_foron_fn = ((_class_localson_fn14)(&chpl_macro_tmp_328));
    (_args_foron_fn)->_0_rvfDerefTmp = call_tmp3;
    T2 = call_tmp2;
    (_args_foron_fn)->_1_tmp = T2;
    (_args_foron_fn)->_2_rvfDerefTmp = INT64(1);
    (_args_foron_fn)->_3_rvfDerefTmp = rvfDerefTmp;
    _args_vforon_fn = ((void*)(_args_foron_fn));
    /*** wrapon_fn14 ***/ chpl_executeOnFast(&call_tmp3, INT32(15), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn14_object), INT64(1258), INT32(12));
  }
  return;
}

/* ChapelBase.chpl:926 */
static void _waitEndCount2(chpl___EndCount_atomic_int64_int64_t e) {
  memory_order local_memory_order_acquire;
  memory_order local_memory_order_relaxed;
  int32_t local_c_sublocid_any;
  _ref_c_void_ptr call_tmp2 = NULL;
  chpl____wide_locale call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t _autoCopy_tmp_;
  chpl____wide_locale call_tmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int64 call_tmp5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp6;
  chpl____wide__ref_atomic_int64 T = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order rvfDerefTmp;
  chpl_bool isdirect;
  _class_localson_fn14 _args_foron_fn = NULL;
  chpl____wide__ref_atomic_int64 T2 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn;
  _ref_atomic_int64 call_tmp7 = NULL;
  chpl_localeID_t call_tmp8;
  _ref_atomic_int64 T3 = NULL;
  memory_order rvfDerefTmp2;
  chpl_bool isdirect2;
  chpl____wide__ref_atomic_int64 T4 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn15 _args_foron_fn2 = NULL;
  _ref_atomic_int64 T5 = NULL;
  chpl____wide__ref_atomic_int64 T6 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn2;
  chpl____wide_locale call_tmp9 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t _autoCopy_tmp_2;
  chpl____wide_locale call_tmp10 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int64 call_tmp11 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp12;
  chpl____wide__ref_atomic_int64 T7 = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order rvfDerefTmp3;
  chpl_bool isdirect3;
  _class_localson_fn13 _args_foron_fn3 = NULL;
  chpl____wide__ref_atomic_int64 T8 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn3;
  chpl____wide__ref_atomic_int64 chpl_macro_tmp_329;
  chpl__class_localson_fn14_object chpl_macro_tmp_330;
  chpl____wide__ref_atomic_int64 chpl_macro_tmp_331;
  chpl__class_localson_fn15_object chpl_macro_tmp_332;
  chpl____wide__ref_atomic_int64 chpl_macro_tmp_333;
  chpl____wide__ref_atomic_int64 chpl_macro_tmp_334;
  chpl__class_localson_fn13_object chpl_macro_tmp_335;
  local_memory_order_acquire = memory_order_acquire;
  local_memory_order_relaxed = memory_order_relaxed;
  local_c_sublocid_any = c_sublocid_any;
  call_tmp2 = &((e)->taskList);
  chpl_taskListExecute(call_tmp2, INT64(928), INT32(2));
  _autoCopy_tmp_ = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any);
  call_tmp4 = chpl_localeID_to_locale(&_autoCopy_tmp_);
  call_tmp3 = call_tmp4;
  chpl_macro_tmp_329.locale = (&call_tmp3)->locale;
  chpl_macro_tmp_329.addr = &(((&call_tmp3)->addr)->runningTaskCounter);
  call_tmp5 = chpl_macro_tmp_329;
  call_tmp6 = (&call_tmp5)->locale;
  T = call_tmp5;
  rvfDerefTmp = local_memory_order_relaxed;
  isdirect = chpl_doDirectExecuteOn(&call_tmp6);
  if (isdirect) {
    on_fn14(T, INT64(1), rvfDerefTmp);
  } else {
    _args_foron_fn = ((_class_localson_fn14)(&chpl_macro_tmp_330));
    (_args_foron_fn)->_0_rvfDerefTmp = call_tmp6;
    T2 = call_tmp5;
    (_args_foron_fn)->_1_tmp = T2;
    (_args_foron_fn)->_2_rvfDerefTmp = INT64(1);
    (_args_foron_fn)->_3_rvfDerefTmp = rvfDerefTmp;
    _args_vforon_fn = ((void*)(_args_foron_fn));
    /*** wrapon_fn14 ***/ chpl_executeOnFast(&call_tmp6, INT32(15), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn14_object), INT64(1258), INT32(12));
  }
  call_tmp7 = &((e)->i);
  call_tmp8 = chpl_gen_getLocaleID();
  T3 = call_tmp7;
  rvfDerefTmp2 = local_memory_order_acquire;
  isdirect2 = chpl_doDirectExecuteOn(&call_tmp8);
  if (isdirect2) {
    chpl_macro_tmp_331.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_331.addr = T3;
    T4 = chpl_macro_tmp_331;
    on_fn15(T4, INT64(0), rvfDerefTmp2);
  } else {
    _args_foron_fn2 = ((_class_localson_fn15)(&chpl_macro_tmp_332));
    (_args_foron_fn2)->_0_rvfDerefTmp = call_tmp8;
    T5 = call_tmp7;
    chpl_macro_tmp_333.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_333.addr = T5;
    T6 = chpl_macro_tmp_333;
    (_args_foron_fn2)->_1_tmp = T6;
    (_args_foron_fn2)->_2_rvfDerefTmp = INT64(0);
    (_args_foron_fn2)->_3_rvfDerefTmp = rvfDerefTmp2;
    _args_vforon_fn2 = ((void*)(_args_foron_fn2));
    /*** wrapon_fn15 ***/ chpl_executeOn(&call_tmp8, INT32(16), ((chpl_comm_on_bundle_p)(_args_vforon_fn2)), sizeof(chpl__class_localson_fn15_object), INT64(1338), INT32(12));
  }
  _autoCopy_tmp_2 = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any);
  call_tmp10 = chpl_localeID_to_locale(&_autoCopy_tmp_2);
  call_tmp9 = call_tmp10;
  chpl_macro_tmp_334.locale = (&call_tmp9)->locale;
  chpl_macro_tmp_334.addr = &(((&call_tmp9)->addr)->runningTaskCounter);
  call_tmp11 = chpl_macro_tmp_334;
  call_tmp12 = (&call_tmp11)->locale;
  T7 = call_tmp11;
  rvfDerefTmp3 = local_memory_order_relaxed;
  isdirect3 = chpl_doDirectExecuteOn(&call_tmp12);
  if (isdirect3) {
    on_fn13(T7, INT64(1), rvfDerefTmp3);
  } else {
    _args_foron_fn3 = ((_class_localson_fn13)(&chpl_macro_tmp_335));
    (_args_foron_fn3)->_0_rvfDerefTmp = call_tmp12;
    T8 = call_tmp11;
    (_args_foron_fn3)->_1_tmp = T8;
    (_args_foron_fn3)->_2_rvfDerefTmp = INT64(1);
    (_args_foron_fn3)->_3_rvfDerefTmp = rvfDerefTmp3;
    _args_vforon_fn3 = ((void*)(_args_foron_fn3));
    /*** wrapon_fn13 ***/ chpl_executeOnFast(&call_tmp12, INT32(14), ((chpl_comm_on_bundle_p)(_args_vforon_fn3)), sizeof(chpl__class_localson_fn13_object), INT64(1238), INT32(12));
  }
  return;
}

/* ChapelBase.chpl:926 */
static void _waitEndCount(chpl___EndCount_atomic_int64_int64_t e) {
  memory_order local_memory_order_acquire;
  memory_order local_memory_order_relaxed;
  int32_t local_c_sublocid_any;
  _ref_c_void_ptr call_tmp2 = NULL;
  chpl____wide_locale call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t _autoCopy_tmp_;
  chpl____wide_locale call_tmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_int64 call_tmp5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp6;
  chpl____wide__ref_atomic_int64 T = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order rvfDerefTmp;
  chpl_bool isdirect;
  _class_localson_fn14 _args_foron_fn = NULL;
  chpl____wide__ref_atomic_int64 T2 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn;
  _ref_atomic_int64 call_tmp7 = NULL;
  chpl_localeID_t call_tmp8;
  _ref_atomic_int64 T3 = NULL;
  memory_order rvfDerefTmp2;
  chpl_bool isdirect2;
  chpl____wide__ref_atomic_int64 T4 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn15 _args_foron_fn2 = NULL;
  _ref_atomic_int64 T5 = NULL;
  chpl____wide__ref_atomic_int64 T6 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn2;
  int64_t coerce_tmp;
  chpl____wide_locale call_tmp9 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t _autoCopy_tmp_2;
  chpl____wide_locale call_tmp10 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp11;
  chpl____wide__ref_atomic_int64 call_tmp12 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp13;
  chpl____wide__ref_atomic_int64 T7 = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order rvfDerefTmp3;
  chpl_bool isdirect3;
  _class_localson_fn14 _args_foron_fn3 = NULL;
  chpl____wide__ref_atomic_int64 T8 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn3;
  chpl____wide__ref_atomic_int64 chpl_macro_tmp_336;
  chpl__class_localson_fn14_object chpl_macro_tmp_337;
  chpl____wide__ref_atomic_int64 chpl_macro_tmp_338;
  chpl__class_localson_fn15_object chpl_macro_tmp_339;
  chpl____wide__ref_atomic_int64 chpl_macro_tmp_340;
  chpl____wide__ref_atomic_int64 chpl_macro_tmp_341;
  chpl__class_localson_fn14_object chpl_macro_tmp_342;
  local_memory_order_acquire = memory_order_acquire;
  local_memory_order_relaxed = memory_order_relaxed;
  local_c_sublocid_any = c_sublocid_any;
  call_tmp2 = &((e)->taskList);
  chpl_taskListExecute(call_tmp2, INT64(928), INT32(2));
  _autoCopy_tmp_ = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any);
  call_tmp4 = chpl_localeID_to_locale(&_autoCopy_tmp_);
  call_tmp3 = call_tmp4;
  chpl_macro_tmp_336.locale = (&call_tmp3)->locale;
  chpl_macro_tmp_336.addr = &(((&call_tmp3)->addr)->runningTaskCounter);
  call_tmp5 = chpl_macro_tmp_336;
  call_tmp6 = (&call_tmp5)->locale;
  T = call_tmp5;
  rvfDerefTmp = local_memory_order_relaxed;
  isdirect = chpl_doDirectExecuteOn(&call_tmp6);
  if (isdirect) {
    on_fn14(T, INT64(1), rvfDerefTmp);
  } else {
    _args_foron_fn = ((_class_localson_fn14)(&chpl_macro_tmp_337));
    (_args_foron_fn)->_0_rvfDerefTmp = call_tmp6;
    T2 = call_tmp5;
    (_args_foron_fn)->_1_tmp = T2;
    (_args_foron_fn)->_2_rvfDerefTmp = INT64(1);
    (_args_foron_fn)->_3_rvfDerefTmp = rvfDerefTmp;
    _args_vforon_fn = ((void*)(_args_foron_fn));
    /*** wrapon_fn14 ***/ chpl_executeOnFast(&call_tmp6, INT32(15), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn14_object), INT64(1258), INT32(12));
  }
  call_tmp7 = &((e)->i);
  call_tmp8 = chpl_gen_getLocaleID();
  T3 = call_tmp7;
  rvfDerefTmp2 = local_memory_order_acquire;
  isdirect2 = chpl_doDirectExecuteOn(&call_tmp8);
  if (isdirect2) {
    chpl_macro_tmp_338.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_338.addr = T3;
    T4 = chpl_macro_tmp_338;
    on_fn15(T4, INT64(0), rvfDerefTmp2);
  } else {
    _args_foron_fn2 = ((_class_localson_fn15)(&chpl_macro_tmp_339));
    (_args_foron_fn2)->_0_rvfDerefTmp = call_tmp8;
    T5 = call_tmp7;
    chpl_macro_tmp_340.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_340.addr = T5;
    T6 = chpl_macro_tmp_340;
    (_args_foron_fn2)->_1_tmp = T6;
    (_args_foron_fn2)->_2_rvfDerefTmp = INT64(0);
    (_args_foron_fn2)->_3_rvfDerefTmp = rvfDerefTmp2;
    _args_vforon_fn2 = ((void*)(_args_foron_fn2));
    /*** wrapon_fn15 ***/ chpl_executeOn(&call_tmp8, INT32(16), ((chpl_comm_on_bundle_p)(_args_vforon_fn2)), sizeof(chpl__class_localson_fn15_object), INT64(1338), INT32(12));
  }
  coerce_tmp = (e)->taskCnt;
  _autoCopy_tmp_2 = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any);
  call_tmp10 = chpl_localeID_to_locale(&_autoCopy_tmp_2);
  call_tmp9 = call_tmp10;
  call_tmp11 = (coerce_tmp - INT64(1));
  chpl_macro_tmp_341.locale = (&call_tmp9)->locale;
  chpl_macro_tmp_341.addr = &(((&call_tmp9)->addr)->runningTaskCounter);
  call_tmp12 = chpl_macro_tmp_341;
  call_tmp13 = (&call_tmp12)->locale;
  T7 = call_tmp12;
  rvfDerefTmp3 = local_memory_order_relaxed;
  isdirect3 = chpl_doDirectExecuteOn(&call_tmp13);
  if (isdirect3) {
    on_fn14(T7, call_tmp11, rvfDerefTmp3);
  } else {
    _args_foron_fn3 = ((_class_localson_fn14)(&chpl_macro_tmp_342));
    (_args_foron_fn3)->_0_rvfDerefTmp = call_tmp13;
    T8 = call_tmp12;
    (_args_foron_fn3)->_1_tmp = T8;
    (_args_foron_fn3)->_2_rvfDerefTmp = call_tmp11;
    (_args_foron_fn3)->_3_rvfDerefTmp = rvfDerefTmp3;
    _args_vforon_fn3 = ((void*)(_args_foron_fn3));
    /*** wrapon_fn14 ***/ chpl_executeOnFast(&call_tmp13, INT32(15), ((chpl_comm_on_bundle_p)(_args_vforon_fn3)), sizeof(chpl__class_localson_fn14_object), INT64(1258), INT32(12));
  }
  return;
}

/* ChapelBase.chpl:949 */
static void _waitEndCount3(chpl___EndCount_atomic_int64_int64_t e,
                           int64_t numTasks) {
  memory_order local_memory_order_relaxed;
  int32_t local_c_sublocid_any;
  memory_order local_memory_order_acquire;
  _ref_c_void_ptr call_tmp2 = NULL;
  _ref_atomic_int64 call_tmp3 = NULL;
  chpl_localeID_t call_tmp4;
  _ref_atomic_int64 T = NULL;
  memory_order rvfDerefTmp;
  chpl_bool isdirect;
  chpl____wide__ref_atomic_int64 T2 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn15 _args_foron_fn = NULL;
  _ref_atomic_int64 T3 = NULL;
  chpl____wide__ref_atomic_int64 T4 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn;
  chpl____wide_locale call_tmp5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t _autoCopy_tmp_;
  chpl____wide_locale call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp7;
  chpl____wide__ref_atomic_int64 call_tmp8 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp9;
  chpl____wide__ref_atomic_int64 T5 = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order rvfDerefTmp2;
  chpl_bool isdirect2;
  _class_localson_fn14 _args_foron_fn2 = NULL;
  chpl____wide__ref_atomic_int64 T6 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn2;
  chpl____wide__ref_atomic_int64 chpl_macro_tmp_343;
  chpl__class_localson_fn15_object chpl_macro_tmp_344;
  chpl____wide__ref_atomic_int64 chpl_macro_tmp_345;
  chpl____wide__ref_atomic_int64 chpl_macro_tmp_346;
  chpl__class_localson_fn14_object chpl_macro_tmp_347;
  local_memory_order_relaxed = memory_order_relaxed;
  local_c_sublocid_any = c_sublocid_any;
  local_memory_order_acquire = memory_order_acquire;
  call_tmp2 = &((e)->taskList);
  chpl_taskListExecute(call_tmp2, INT64(951), INT32(2));
  call_tmp3 = &((e)->i);
  call_tmp4 = chpl_gen_getLocaleID();
  T = call_tmp3;
  rvfDerefTmp = local_memory_order_acquire;
  isdirect = chpl_doDirectExecuteOn(&call_tmp4);
  if (isdirect) {
    chpl_macro_tmp_343.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_343.addr = T;
    T2 = chpl_macro_tmp_343;
    on_fn15(T2, INT64(0), rvfDerefTmp);
  } else {
    _args_foron_fn = ((_class_localson_fn15)(&chpl_macro_tmp_344));
    (_args_foron_fn)->_0_rvfDerefTmp = call_tmp4;
    T3 = call_tmp3;
    chpl_macro_tmp_345.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_345.addr = T3;
    T4 = chpl_macro_tmp_345;
    (_args_foron_fn)->_1_tmp = T4;
    (_args_foron_fn)->_2_rvfDerefTmp = INT64(0);
    (_args_foron_fn)->_3_rvfDerefTmp = rvfDerefTmp;
    _args_vforon_fn = ((void*)(_args_foron_fn));
    /*** wrapon_fn15 ***/ chpl_executeOn(&call_tmp4, INT32(16), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn15_object), INT64(1338), INT32(12));
  }
  _autoCopy_tmp_ = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any);
  call_tmp6 = chpl_localeID_to_locale(&_autoCopy_tmp_);
  call_tmp5 = call_tmp6;
  call_tmp7 = (numTasks - INT64(1));
  chpl_macro_tmp_346.locale = (&call_tmp5)->locale;
  chpl_macro_tmp_346.addr = &(((&call_tmp5)->addr)->runningTaskCounter);
  call_tmp8 = chpl_macro_tmp_346;
  call_tmp9 = (&call_tmp8)->locale;
  T5 = call_tmp8;
  rvfDerefTmp2 = local_memory_order_relaxed;
  isdirect2 = chpl_doDirectExecuteOn(&call_tmp9);
  if (isdirect2) {
    on_fn14(T5, call_tmp7, rvfDerefTmp2);
  } else {
    _args_foron_fn2 = ((_class_localson_fn14)(&chpl_macro_tmp_347));
    (_args_foron_fn2)->_0_rvfDerefTmp = call_tmp9;
    T6 = call_tmp8;
    (_args_foron_fn2)->_1_tmp = T6;
    (_args_foron_fn2)->_2_rvfDerefTmp = call_tmp7;
    (_args_foron_fn2)->_3_rvfDerefTmp = rvfDerefTmp2;
    _args_vforon_fn2 = ((void*)(_args_foron_fn2));
    /*** wrapon_fn14 ***/ chpl_executeOnFast(&call_tmp9, INT32(15), ((chpl_comm_on_bundle_p)(_args_vforon_fn2)), sizeof(chpl__class_localson_fn14_object), INT64(1258), INT32(12));
  }
  return;
}

/* ChapelBase.chpl:949 */
static void _waitEndCount4(chpl___EndCount_atomic_int64_int64_t e,
                           int64_t numTasks) {
  memory_order local_memory_order_acquire;
  _ref_c_void_ptr call_tmp2 = NULL;
  _ref_atomic_int64 call_tmp3 = NULL;
  chpl_localeID_t call_tmp4;
  _ref_atomic_int64 T = NULL;
  memory_order rvfDerefTmp;
  chpl_bool isdirect;
  chpl____wide__ref_atomic_int64 T2 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn15 _args_foron_fn = NULL;
  _ref_atomic_int64 T3 = NULL;
  chpl____wide__ref_atomic_int64 T4 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn;
  chpl____wide__ref_atomic_int64 chpl_macro_tmp_348;
  chpl__class_localson_fn15_object chpl_macro_tmp_349;
  chpl____wide__ref_atomic_int64 chpl_macro_tmp_350;
  local_memory_order_acquire = memory_order_acquire;
  call_tmp2 = &((e)->taskList);
  chpl_taskListExecute(call_tmp2, INT64(951), INT32(2));
  call_tmp3 = &((e)->i);
  call_tmp4 = chpl_gen_getLocaleID();
  T = call_tmp3;
  rvfDerefTmp = local_memory_order_acquire;
  isdirect = chpl_doDirectExecuteOn(&call_tmp4);
  if (isdirect) {
    chpl_macro_tmp_348.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_348.addr = T;
    T2 = chpl_macro_tmp_348;
    on_fn15(T2, INT64(0), rvfDerefTmp);
  } else {
    _args_foron_fn = ((_class_localson_fn15)(&chpl_macro_tmp_349));
    (_args_foron_fn)->_0_rvfDerefTmp = call_tmp4;
    T3 = call_tmp3;
    chpl_macro_tmp_350.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_350.addr = T3;
    T4 = chpl_macro_tmp_350;
    (_args_foron_fn)->_1_tmp = T4;
    (_args_foron_fn)->_2_rvfDerefTmp = INT64(0);
    (_args_foron_fn)->_3_rvfDerefTmp = rvfDerefTmp;
    _args_vforon_fn = ((void*)(_args_foron_fn));
    /*** wrapon_fn15 ***/ chpl_executeOn(&call_tmp4, INT32(16), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn15_object), INT64(1338), INT32(12));
  }
  return;
}

/* ChapelBase.chpl:971 */
static void _waitEndCount5(chpl___EndCount_atomic_int64_int64_t _endCount) {
  _waitEndCount(_endCount);
  return;
}

/* ChapelBase.chpl:977 */
static void _command_line_cast10(c_string x,
                                 _ref_string _retArg) {
  string ret_tmp;
  _ref_string ret_to_arg_ref_tmp_ = NULL;
  ret_to_arg_ref_tmp_ = &ret_tmp;
  _cast(x, ret_to_arg_ref_tmp_);
  *(_retArg) = ret_tmp;
  return;
}

/* ChapelBase.chpl:977 */
static uint64_t _command_line_cast11(c_string x) {
  string local__str_literal_337;
  string call_tmp2;
  string ret_tmp;
  _ref_string ret_to_arg_ref_tmp_ = NULL;
  uint64_t ret;
  string localX;
  string ret2;
  chpl_bool call_tmp3;
  string ret_tmp2;
  _ref_string ret_to_arg_ref_tmp_2 = NULL;
  _ref_string i_s = NULL;
  chpl____wide__ref_string T = {CHPL_LOCALEID_T_INIT, NULL};
  string type_tmp;
  string this12;
  c_ptr_uint8_t call_tmp4 = NULL;
  int32_t default_arglocale_id;
  string ret_tmp3;
  _ref_string ret_to_arg_ref_tmp_3 = NULL;
  _ref_string _ref_tmp_ = NULL;
  _ref_string i_rhs = NULL;
  chpl____wide__ref_string T2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string T3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp5;
  uint64_t call_tmp6;
  _ref_string _ref_tmp_2 = NULL;
  chpl____wide__ref_string T4 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp_3 = NULL;
  chpl____wide__ref_string T5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_351;
  chpl____wide__ref_string chpl_macro_tmp_352;
  chpl____wide__ref_string chpl_macro_tmp_353;
  chpl____wide__ref_string chpl_macro_tmp_354;
  chpl____wide__ref_string chpl_macro_tmp_355;
  local__str_literal_337 /* "Cannot call .c_str() on a remote string" */ = _str_literal_337 /* "Cannot call .c_str() on a remote string" */;
  ret_to_arg_ref_tmp_ = &ret_tmp;
  _cast(x, ret_to_arg_ref_tmp_);
  call_tmp2 = ret_tmp;
  call_tmp3 = ((&call_tmp2)->locale_id == chpl_nodeID);
  if (call_tmp3) {
    ret_to_arg_ref_tmp_2 = &ret_tmp2;
    i_s = &call_tmp2;
    chpl_macro_tmp_351.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_351.addr = i_s;
    T = chpl_macro_tmp_351;
    string2(T, UINT8(false), ret_to_arg_ref_tmp_2);
    ret2 = ret_tmp2;
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
    ret_to_arg_ref_tmp_3 = &ret_tmp3;
    _construct_string(INT64(0), INT64(0), call_tmp4, UINT8(true), default_arglocale_id, &this12, ret_to_arg_ref_tmp_3);
    type_tmp = ret_tmp3;
    _ref_tmp_ = &type_tmp;
    i_rhs = &call_tmp2;
    chpl_macro_tmp_352.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_352.addr = _ref_tmp_;
    T2 = chpl_macro_tmp_352;
    chpl_macro_tmp_353.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_353.addr = i_rhs;
    T3 = chpl_macro_tmp_353;
    chpl___ASSIGN_13(T2, T3);
    ret2 = type_tmp;
    goto _end_localize;
  }
  _end_localize:;
  localX = ret2;
  call_tmp5 = ((&localX)->locale_id != chpl_nodeID);
  if (call_tmp5) {
    halt(&local__str_literal_337 /* "Cannot call .c_str() on a remote string" */, INT64(977), INT32(2));
  }
  call_tmp6 = c_string_to_uint64_t(((c_string)(((c_void_ptr)((&localX)->buff)))), INT64(977), INT32(2));
  ret = call_tmp6;
  _ref_tmp_2 = &localX;
  chpl_macro_tmp_354.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_354.addr = _ref_tmp_2;
  T4 = chpl_macro_tmp_354;
  deinit44(T4);
  _ref_tmp_3 = &call_tmp2;
  chpl_macro_tmp_355.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_355.addr = _ref_tmp_3;
  T5 = chpl_macro_tmp_355;
  deinit44(T5);
  return ret;
}

/* ChapelBase.chpl:977 */
static void _command_line_cast12(c_string x,
                                 _ref_string _retArg) {
  string ret_tmp;
  _ref_string ret_to_arg_ref_tmp_ = NULL;
  ret_to_arg_ref_tmp_ = &ret_tmp;
  _cast(x, ret_to_arg_ref_tmp_);
  *(_retArg) = ret_tmp;
  return;
}

/* ChapelBase.chpl:977 */
static int64_t _command_line_cast5(c_string x) {
  string local__str_literal_337;
  string call_tmp2;
  string ret_tmp;
  _ref_string ret_to_arg_ref_tmp_ = NULL;
  int64_t ret;
  string localX;
  string ret2;
  int32_t coerce_tmp;
  chpl_bool call_tmp3;
  string ret_tmp2;
  _ref_string ret_to_arg_ref_tmp_2 = NULL;
  _ref_string i_s = NULL;
  chpl____wide__ref_string T = {CHPL_LOCALEID_T_INIT, NULL};
  string type_tmp;
  string this12;
  c_ptr_uint8_t call_tmp4 = NULL;
  int32_t default_arglocale_id;
  string ret_tmp3;
  _ref_string ret_to_arg_ref_tmp_3 = NULL;
  _ref_string _ref_tmp_ = NULL;
  _ref_string i_rhs = NULL;
  chpl____wide__ref_string T2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string T3 = {CHPL_LOCALEID_T_INIT, NULL};
  int32_t coerce_tmp2;
  chpl_bool call_tmp5;
  c_ptr_uint8_t coerce_tmp3 = NULL;
  int64_t call_tmp6;
  _ref_string _ref_tmp_2 = NULL;
  chpl____wide__ref_string T4 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp_3 = NULL;
  chpl____wide__ref_string T5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_356;
  chpl____wide__ref_string chpl_macro_tmp_357;
  chpl____wide__ref_string chpl_macro_tmp_358;
  chpl____wide__ref_string chpl_macro_tmp_359;
  chpl____wide__ref_string chpl_macro_tmp_360;
  local__str_literal_337 /* "Cannot call .c_str() on a remote string" */ = _str_literal_337 /* "Cannot call .c_str() on a remote string" */;
  ret_to_arg_ref_tmp_ = &ret_tmp;
  _cast(x, ret_to_arg_ref_tmp_);
  call_tmp2 = ret_tmp;
  coerce_tmp = (&call_tmp2)->locale_id;
  call_tmp3 = (coerce_tmp == chpl_nodeID);
  if (call_tmp3) {
    ret_to_arg_ref_tmp_2 = &ret_tmp2;
    i_s = &call_tmp2;
    chpl_macro_tmp_356.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_356.addr = i_s;
    T = chpl_macro_tmp_356;
    string2(T, UINT8(false), ret_to_arg_ref_tmp_2);
    ret2 = ret_tmp2;
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
    ret_to_arg_ref_tmp_3 = &ret_tmp3;
    _construct_string(INT64(0), INT64(0), call_tmp4, UINT8(true), default_arglocale_id, &this12, ret_to_arg_ref_tmp_3);
    type_tmp = ret_tmp3;
    _ref_tmp_ = &type_tmp;
    i_rhs = &call_tmp2;
    chpl_macro_tmp_357.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_357.addr = _ref_tmp_;
    T2 = chpl_macro_tmp_357;
    chpl_macro_tmp_358.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_358.addr = i_rhs;
    T3 = chpl_macro_tmp_358;
    chpl___ASSIGN_13(T2, T3);
    ret2 = type_tmp;
    goto _end_localize;
  }
  _end_localize:;
  localX = ret2;
  coerce_tmp2 = (&localX)->locale_id;
  call_tmp5 = (coerce_tmp2 != chpl_nodeID);
  if (call_tmp5) {
    halt(&local__str_literal_337 /* "Cannot call .c_str() on a remote string" */, INT64(977), INT32(2));
  }
  coerce_tmp3 = (&localX)->buff;
  call_tmp6 = c_string_to_int64_t(((c_string)(((c_void_ptr)(coerce_tmp3)))), INT64(977), INT32(2));
  ret = call_tmp6;
  _ref_tmp_2 = &localX;
  chpl_macro_tmp_359.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_359.addr = _ref_tmp_2;
  T4 = chpl_macro_tmp_359;
  deinit44(T4);
  _ref_tmp_3 = &call_tmp2;
  chpl_macro_tmp_360.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_360.addr = _ref_tmp_3;
  T5 = chpl_macro_tmp_360;
  deinit44(T5);
  return ret;
}

/* ChapelBase.chpl:977 */
static chpl_bool _command_line_cast19(c_string x) {
  string call_tmp2;
  string ret_tmp;
  _ref_string ret_to_arg_ref_tmp_ = NULL;
  chpl_bool call_tmp3;
  _ref_string _ref_tmp_ = NULL;
  chpl____wide__ref_string T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_361;
  ret_to_arg_ref_tmp_ = &ret_tmp;
  _cast(x, ret_to_arg_ref_tmp_);
  call_tmp2 = ret_tmp;
  call_tmp3 = _cast2(&ret_tmp);
  _ref_tmp_ = &call_tmp2;
  chpl_macro_tmp_361.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_361.addr = _ref_tmp_;
  T = chpl_macro_tmp_361;
  deinit44(T);
  return call_tmp3;
}

/* ChapelBase.chpl:977 */
static chpl_bool _command_line_cast20(c_string x) {
  string call_tmp2;
  string ret_tmp;
  _ref_string ret_to_arg_ref_tmp_ = NULL;
  chpl_bool call_tmp3;
  _ref_string _ref_tmp_ = NULL;
  chpl____wide__ref_string T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_362;
  ret_to_arg_ref_tmp_ = &ret_tmp;
  _cast(x, ret_to_arg_ref_tmp_);
  call_tmp2 = ret_tmp;
  call_tmp3 = _cast2(&ret_tmp);
  _ref_tmp_ = &call_tmp2;
  chpl_macro_tmp_362.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_362.addr = _ref_tmp_;
  T = chpl_macro_tmp_362;
  deinit44(T);
  return call_tmp3;
}

/* ChapelBase.chpl:977 */
static chpl_bool _command_line_cast3(c_string x) {
  string call_tmp2;
  string ret_tmp;
  _ref_string ret_to_arg_ref_tmp_ = NULL;
  chpl_bool call_tmp3;
  _ref_string _ref_tmp_ = NULL;
  chpl____wide__ref_string T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_363;
  ret_to_arg_ref_tmp_ = &ret_tmp;
  _cast(x, ret_to_arg_ref_tmp_);
  call_tmp2 = ret_tmp;
  call_tmp3 = _cast2(&ret_tmp);
  _ref_tmp_ = &call_tmp2;
  chpl_macro_tmp_363.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_363.addr = _ref_tmp_;
  T = chpl_macro_tmp_363;
  deinit44(T);
  return call_tmp3;
}

/* ChapelBase.chpl:977 */
static int64_t _command_line_cast2(c_string x) {
  string local__str_literal_337;
  string call_tmp2;
  string ret_tmp;
  _ref_string ret_to_arg_ref_tmp_ = NULL;
  int64_t ret;
  string localX;
  string ret2;
  int32_t coerce_tmp;
  chpl_bool call_tmp3;
  string ret_tmp2;
  _ref_string ret_to_arg_ref_tmp_2 = NULL;
  _ref_string i_s = NULL;
  chpl____wide__ref_string T = {CHPL_LOCALEID_T_INIT, NULL};
  string type_tmp;
  string this12;
  c_ptr_uint8_t call_tmp4 = NULL;
  int32_t default_arglocale_id;
  string ret_tmp3;
  _ref_string ret_to_arg_ref_tmp_3 = NULL;
  _ref_string _ref_tmp_ = NULL;
  _ref_string i_rhs = NULL;
  chpl____wide__ref_string T2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string T3 = {CHPL_LOCALEID_T_INIT, NULL};
  int32_t coerce_tmp2;
  chpl_bool call_tmp5;
  c_ptr_uint8_t coerce_tmp3 = NULL;
  int64_t call_tmp6;
  _ref_string _ref_tmp_2 = NULL;
  chpl____wide__ref_string T4 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp_3 = NULL;
  chpl____wide__ref_string T5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_364;
  chpl____wide__ref_string chpl_macro_tmp_365;
  chpl____wide__ref_string chpl_macro_tmp_366;
  chpl____wide__ref_string chpl_macro_tmp_367;
  chpl____wide__ref_string chpl_macro_tmp_368;
  local__str_literal_337 /* "Cannot call .c_str() on a remote string" */ = _str_literal_337 /* "Cannot call .c_str() on a remote string" */;
  ret_to_arg_ref_tmp_ = &ret_tmp;
  _cast(x, ret_to_arg_ref_tmp_);
  call_tmp2 = ret_tmp;
  coerce_tmp = (&call_tmp2)->locale_id;
  call_tmp3 = (coerce_tmp == chpl_nodeID);
  if (call_tmp3) {
    ret_to_arg_ref_tmp_2 = &ret_tmp2;
    i_s = &call_tmp2;
    chpl_macro_tmp_364.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_364.addr = i_s;
    T = chpl_macro_tmp_364;
    string2(T, UINT8(false), ret_to_arg_ref_tmp_2);
    ret2 = ret_tmp2;
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
    ret_to_arg_ref_tmp_3 = &ret_tmp3;
    _construct_string(INT64(0), INT64(0), call_tmp4, UINT8(true), default_arglocale_id, &this12, ret_to_arg_ref_tmp_3);
    type_tmp = ret_tmp3;
    _ref_tmp_ = &type_tmp;
    i_rhs = &call_tmp2;
    chpl_macro_tmp_365.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_365.addr = _ref_tmp_;
    T2 = chpl_macro_tmp_365;
    chpl_macro_tmp_366.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_366.addr = i_rhs;
    T3 = chpl_macro_tmp_366;
    chpl___ASSIGN_13(T2, T3);
    ret2 = type_tmp;
    goto _end_localize;
  }
  _end_localize:;
  localX = ret2;
  coerce_tmp2 = (&localX)->locale_id;
  call_tmp5 = (coerce_tmp2 != chpl_nodeID);
  if (call_tmp5) {
    halt(&local__str_literal_337 /* "Cannot call .c_str() on a remote string" */, INT64(977), INT32(2));
  }
  coerce_tmp3 = (&localX)->buff;
  call_tmp6 = c_string_to_int64_t(((c_string)(((c_void_ptr)(coerce_tmp3)))), INT64(977), INT32(2));
  ret = call_tmp6;
  _ref_tmp_2 = &localX;
  chpl_macro_tmp_367.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_367.addr = _ref_tmp_2;
  T4 = chpl_macro_tmp_367;
  deinit44(T4);
  _ref_tmp_3 = &call_tmp2;
  chpl_macro_tmp_368.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_368.addr = _ref_tmp_3;
  T5 = chpl_macro_tmp_368;
  deinit44(T5);
  return ret;
}

/* ChapelBase.chpl:977 */
static int64_t _command_line_cast6(c_string x) {
  string local__str_literal_337;
  string call_tmp2;
  string ret_tmp;
  _ref_string ret_to_arg_ref_tmp_ = NULL;
  int64_t ret;
  string localX;
  string ret2;
  int32_t coerce_tmp;
  chpl_bool call_tmp3;
  string ret_tmp2;
  _ref_string ret_to_arg_ref_tmp_2 = NULL;
  _ref_string i_s = NULL;
  chpl____wide__ref_string T = {CHPL_LOCALEID_T_INIT, NULL};
  string type_tmp;
  string this12;
  c_ptr_uint8_t call_tmp4 = NULL;
  int32_t default_arglocale_id;
  string ret_tmp3;
  _ref_string ret_to_arg_ref_tmp_3 = NULL;
  _ref_string _ref_tmp_ = NULL;
  _ref_string i_rhs = NULL;
  chpl____wide__ref_string T2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string T3 = {CHPL_LOCALEID_T_INIT, NULL};
  int32_t coerce_tmp2;
  chpl_bool call_tmp5;
  c_ptr_uint8_t coerce_tmp3 = NULL;
  int64_t call_tmp6;
  _ref_string _ref_tmp_2 = NULL;
  chpl____wide__ref_string T4 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp_3 = NULL;
  chpl____wide__ref_string T5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_369;
  chpl____wide__ref_string chpl_macro_tmp_370;
  chpl____wide__ref_string chpl_macro_tmp_371;
  chpl____wide__ref_string chpl_macro_tmp_372;
  chpl____wide__ref_string chpl_macro_tmp_373;
  local__str_literal_337 /* "Cannot call .c_str() on a remote string" */ = _str_literal_337 /* "Cannot call .c_str() on a remote string" */;
  ret_to_arg_ref_tmp_ = &ret_tmp;
  _cast(x, ret_to_arg_ref_tmp_);
  call_tmp2 = ret_tmp;
  coerce_tmp = (&call_tmp2)->locale_id;
  call_tmp3 = (coerce_tmp == chpl_nodeID);
  if (call_tmp3) {
    ret_to_arg_ref_tmp_2 = &ret_tmp2;
    i_s = &call_tmp2;
    chpl_macro_tmp_369.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_369.addr = i_s;
    T = chpl_macro_tmp_369;
    string2(T, UINT8(false), ret_to_arg_ref_tmp_2);
    ret2 = ret_tmp2;
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
    ret_to_arg_ref_tmp_3 = &ret_tmp3;
    _construct_string(INT64(0), INT64(0), call_tmp4, UINT8(true), default_arglocale_id, &this12, ret_to_arg_ref_tmp_3);
    type_tmp = ret_tmp3;
    _ref_tmp_ = &type_tmp;
    i_rhs = &call_tmp2;
    chpl_macro_tmp_370.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_370.addr = _ref_tmp_;
    T2 = chpl_macro_tmp_370;
    chpl_macro_tmp_371.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_371.addr = i_rhs;
    T3 = chpl_macro_tmp_371;
    chpl___ASSIGN_13(T2, T3);
    ret2 = type_tmp;
    goto _end_localize;
  }
  _end_localize:;
  localX = ret2;
  coerce_tmp2 = (&localX)->locale_id;
  call_tmp5 = (coerce_tmp2 != chpl_nodeID);
  if (call_tmp5) {
    halt(&local__str_literal_337 /* "Cannot call .c_str() on a remote string" */, INT64(977), INT32(2));
  }
  coerce_tmp3 = (&localX)->buff;
  call_tmp6 = c_string_to_int64_t(((c_string)(((c_void_ptr)(coerce_tmp3)))), INT64(977), INT32(2));
  ret = call_tmp6;
  _ref_tmp_2 = &localX;
  chpl_macro_tmp_372.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_372.addr = _ref_tmp_2;
  T4 = chpl_macro_tmp_372;
  deinit44(T4);
  _ref_tmp_3 = &call_tmp2;
  chpl_macro_tmp_373.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_373.addr = _ref_tmp_3;
  T5 = chpl_macro_tmp_373;
  deinit44(T5);
  return ret;
}

/* ChapelBase.chpl:977 */
static chpl_bool _command_line_cast4(c_string x) {
  string call_tmp2;
  string ret_tmp;
  _ref_string ret_to_arg_ref_tmp_ = NULL;
  chpl_bool call_tmp3;
  _ref_string _ref_tmp_ = NULL;
  chpl____wide__ref_string T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_374;
  ret_to_arg_ref_tmp_ = &ret_tmp;
  _cast(x, ret_to_arg_ref_tmp_);
  call_tmp2 = ret_tmp;
  call_tmp3 = _cast2(&ret_tmp);
  _ref_tmp_ = &call_tmp2;
  chpl_macro_tmp_374.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_374.addr = _ref_tmp_;
  T = chpl_macro_tmp_374;
  deinit44(T);
  return call_tmp3;
}

/* ChapelBase.chpl:977 */
static void _command_line_cast9(c_string x,
                                _ref_string _retArg) {
  string ret_tmp;
  _ref_string ret_to_arg_ref_tmp_ = NULL;
  ret_to_arg_ref_tmp_ = &ret_tmp;
  _cast(x, ret_to_arg_ref_tmp_);
  *(_retArg) = ret_tmp;
  return;
}

/* ChapelBase.chpl:977 */
static uint64_t _command_line_cast8(c_string x) {
  string local__str_literal_337;
  string call_tmp2;
  string ret_tmp;
  _ref_string ret_to_arg_ref_tmp_ = NULL;
  uint64_t ret;
  string localX;
  string ret2;
  chpl_bool call_tmp3;
  string ret_tmp2;
  _ref_string ret_to_arg_ref_tmp_2 = NULL;
  _ref_string i_s = NULL;
  chpl____wide__ref_string T = {CHPL_LOCALEID_T_INIT, NULL};
  string type_tmp;
  string this12;
  c_ptr_uint8_t call_tmp4 = NULL;
  int32_t default_arglocale_id;
  string ret_tmp3;
  _ref_string ret_to_arg_ref_tmp_3 = NULL;
  _ref_string _ref_tmp_ = NULL;
  _ref_string i_rhs = NULL;
  chpl____wide__ref_string T2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string T3 = {CHPL_LOCALEID_T_INIT, NULL};
  int32_t coerce_tmp;
  chpl_bool call_tmp5;
  c_ptr_uint8_t coerce_tmp2 = NULL;
  uint64_t call_tmp6;
  _ref_string _ref_tmp_2 = NULL;
  chpl____wide__ref_string T4 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp_3 = NULL;
  chpl____wide__ref_string T5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_375;
  chpl____wide__ref_string chpl_macro_tmp_376;
  chpl____wide__ref_string chpl_macro_tmp_377;
  chpl____wide__ref_string chpl_macro_tmp_378;
  chpl____wide__ref_string chpl_macro_tmp_379;
  local__str_literal_337 /* "Cannot call .c_str() on a remote string" */ = _str_literal_337 /* "Cannot call .c_str() on a remote string" */;
  ret_to_arg_ref_tmp_ = &ret_tmp;
  _cast(x, ret_to_arg_ref_tmp_);
  call_tmp2 = ret_tmp;
  call_tmp3 = ((&call_tmp2)->locale_id == chpl_nodeID);
  if (call_tmp3) {
    ret_to_arg_ref_tmp_2 = &ret_tmp2;
    i_s = &call_tmp2;
    chpl_macro_tmp_375.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_375.addr = i_s;
    T = chpl_macro_tmp_375;
    string2(T, UINT8(false), ret_to_arg_ref_tmp_2);
    ret2 = ret_tmp2;
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
    ret_to_arg_ref_tmp_3 = &ret_tmp3;
    _construct_string(INT64(0), INT64(0), call_tmp4, UINT8(true), default_arglocale_id, &this12, ret_to_arg_ref_tmp_3);
    type_tmp = ret_tmp3;
    _ref_tmp_ = &type_tmp;
    i_rhs = &call_tmp2;
    chpl_macro_tmp_376.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_376.addr = _ref_tmp_;
    T2 = chpl_macro_tmp_376;
    chpl_macro_tmp_377.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_377.addr = i_rhs;
    T3 = chpl_macro_tmp_377;
    chpl___ASSIGN_13(T2, T3);
    ret2 = type_tmp;
    goto _end_localize;
  }
  _end_localize:;
  localX = ret2;
  coerce_tmp = (&localX)->locale_id;
  call_tmp5 = (coerce_tmp != chpl_nodeID);
  if (call_tmp5) {
    halt(&local__str_literal_337 /* "Cannot call .c_str() on a remote string" */, INT64(977), INT32(2));
  }
  coerce_tmp2 = (&localX)->buff;
  call_tmp6 = c_string_to_uint64_t(((c_string)(((c_void_ptr)(coerce_tmp2)))), INT64(977), INT32(2));
  ret = call_tmp6;
  _ref_tmp_2 = &localX;
  chpl_macro_tmp_378.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_378.addr = _ref_tmp_2;
  T4 = chpl_macro_tmp_378;
  deinit44(T4);
  _ref_tmp_3 = &call_tmp2;
  chpl_macro_tmp_379.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_379.addr = _ref_tmp_3;
  T5 = chpl_macro_tmp_379;
  deinit44(T5);
  return ret;
}

/* ChapelBase.chpl:977 */
static chpl_bool _command_line_cast13(c_string x) {
  string call_tmp2;
  string ret_tmp;
  _ref_string ret_to_arg_ref_tmp_ = NULL;
  chpl_bool call_tmp3;
  _ref_string _ref_tmp_ = NULL;
  chpl____wide__ref_string T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_380;
  ret_to_arg_ref_tmp_ = &ret_tmp;
  _cast(x, ret_to_arg_ref_tmp_);
  call_tmp2 = ret_tmp;
  call_tmp3 = _cast2(&ret_tmp);
  _ref_tmp_ = &call_tmp2;
  chpl_macro_tmp_380.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_380.addr = _ref_tmp_;
  T = chpl_macro_tmp_380;
  deinit44(T);
  return call_tmp3;
}

/* ChapelBase.chpl:977 */
static chpl_bool _command_line_cast7(c_string x) {
  string call_tmp2;
  string ret_tmp;
  _ref_string ret_to_arg_ref_tmp_ = NULL;
  chpl_bool call_tmp3;
  _ref_string _ref_tmp_ = NULL;
  chpl____wide__ref_string T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_381;
  ret_to_arg_ref_tmp_ = &ret_tmp;
  _cast(x, ret_to_arg_ref_tmp_);
  call_tmp2 = ret_tmp;
  call_tmp3 = _cast2(&ret_tmp);
  _ref_tmp_ = &call_tmp2;
  chpl_macro_tmp_381.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_381.addr = _ref_tmp_;
  T = chpl_macro_tmp_381;
  deinit44(T);
  return call_tmp3;
}

/* ChapelBase.chpl:977 */
static chpl_bool _command_line_cast14(c_string x) {
  string call_tmp2;
  string ret_tmp;
  _ref_string ret_to_arg_ref_tmp_ = NULL;
  chpl_bool call_tmp3;
  _ref_string _ref_tmp_ = NULL;
  chpl____wide__ref_string T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_382;
  ret_to_arg_ref_tmp_ = &ret_tmp;
  _cast(x, ret_to_arg_ref_tmp_);
  call_tmp2 = ret_tmp;
  call_tmp3 = _cast2(&ret_tmp);
  _ref_tmp_ = &call_tmp2;
  chpl_macro_tmp_382.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_382.addr = _ref_tmp_;
  T = chpl_macro_tmp_382;
  deinit44(T);
  return call_tmp3;
}

/* ChapelBase.chpl:977 */
static chpl_bool _command_line_cast16(c_string x) {
  string call_tmp2;
  string ret_tmp;
  _ref_string ret_to_arg_ref_tmp_ = NULL;
  chpl_bool call_tmp3;
  _ref_string _ref_tmp_ = NULL;
  chpl____wide__ref_string T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_383;
  ret_to_arg_ref_tmp_ = &ret_tmp;
  _cast(x, ret_to_arg_ref_tmp_);
  call_tmp2 = ret_tmp;
  call_tmp3 = _cast2(&ret_tmp);
  _ref_tmp_ = &call_tmp2;
  chpl_macro_tmp_383.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_383.addr = _ref_tmp_;
  T = chpl_macro_tmp_383;
  deinit44(T);
  return call_tmp3;
}

/* ChapelBase.chpl:977 */
static int64_t _command_line_cast(c_string x) {
  string local__str_literal_337;
  string call_tmp2;
  string ret_tmp;
  _ref_string ret_to_arg_ref_tmp_ = NULL;
  int64_t ret;
  string localX;
  string ret2;
  chpl_bool call_tmp3;
  string ret_tmp2;
  _ref_string ret_to_arg_ref_tmp_2 = NULL;
  _ref_string i_s = NULL;
  chpl____wide__ref_string T = {CHPL_LOCALEID_T_INIT, NULL};
  string type_tmp;
  string this12;
  c_ptr_uint8_t call_tmp4 = NULL;
  int32_t default_arglocale_id;
  string ret_tmp3;
  _ref_string ret_to_arg_ref_tmp_3 = NULL;
  _ref_string _ref_tmp_ = NULL;
  _ref_string i_rhs = NULL;
  chpl____wide__ref_string T2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string T3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp5;
  int64_t call_tmp6;
  _ref_string _ref_tmp_2 = NULL;
  chpl____wide__ref_string T4 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp_3 = NULL;
  chpl____wide__ref_string T5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_384;
  chpl____wide__ref_string chpl_macro_tmp_385;
  chpl____wide__ref_string chpl_macro_tmp_386;
  chpl____wide__ref_string chpl_macro_tmp_387;
  chpl____wide__ref_string chpl_macro_tmp_388;
  local__str_literal_337 /* "Cannot call .c_str() on a remote string" */ = _str_literal_337 /* "Cannot call .c_str() on a remote string" */;
  ret_to_arg_ref_tmp_ = &ret_tmp;
  _cast(x, ret_to_arg_ref_tmp_);
  call_tmp2 = ret_tmp;
  call_tmp3 = ((&call_tmp2)->locale_id == chpl_nodeID);
  if (call_tmp3) {
    ret_to_arg_ref_tmp_2 = &ret_tmp2;
    i_s = &call_tmp2;
    chpl_macro_tmp_384.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_384.addr = i_s;
    T = chpl_macro_tmp_384;
    string2(T, UINT8(false), ret_to_arg_ref_tmp_2);
    ret2 = ret_tmp2;
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
    ret_to_arg_ref_tmp_3 = &ret_tmp3;
    _construct_string(INT64(0), INT64(0), call_tmp4, UINT8(true), default_arglocale_id, &this12, ret_to_arg_ref_tmp_3);
    type_tmp = ret_tmp3;
    _ref_tmp_ = &type_tmp;
    i_rhs = &call_tmp2;
    chpl_macro_tmp_385.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_385.addr = _ref_tmp_;
    T2 = chpl_macro_tmp_385;
    chpl_macro_tmp_386.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_386.addr = i_rhs;
    T3 = chpl_macro_tmp_386;
    chpl___ASSIGN_13(T2, T3);
    ret2 = type_tmp;
    goto _end_localize;
  }
  _end_localize:;
  localX = ret2;
  call_tmp5 = ((&localX)->locale_id != chpl_nodeID);
  if (call_tmp5) {
    halt(&local__str_literal_337 /* "Cannot call .c_str() on a remote string" */, INT64(977), INT32(2));
  }
  call_tmp6 = c_string_to_int64_t(((c_string)(((c_void_ptr)((&localX)->buff)))), INT64(977), INT32(2));
  ret = call_tmp6;
  _ref_tmp_2 = &localX;
  chpl_macro_tmp_387.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_387.addr = _ref_tmp_2;
  T4 = chpl_macro_tmp_387;
  deinit44(T4);
  _ref_tmp_3 = &call_tmp2;
  chpl_macro_tmp_388.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_388.addr = _ref_tmp_3;
  T5 = chpl_macro_tmp_388;
  deinit44(T5);
  return ret;
}

/* ChapelBase.chpl:977 */
static int64_t _command_line_cast15(c_string x) {
  string local__str_literal_337;
  string call_tmp2;
  string ret_tmp;
  _ref_string ret_to_arg_ref_tmp_ = NULL;
  int64_t ret;
  string localX;
  string ret2;
  int32_t coerce_tmp;
  chpl_bool call_tmp3;
  string ret_tmp2;
  _ref_string ret_to_arg_ref_tmp_2 = NULL;
  _ref_string i_s = NULL;
  chpl____wide__ref_string T = {CHPL_LOCALEID_T_INIT, NULL};
  string type_tmp;
  string this12;
  c_ptr_uint8_t call_tmp4 = NULL;
  int32_t default_arglocale_id;
  string ret_tmp3;
  _ref_string ret_to_arg_ref_tmp_3 = NULL;
  _ref_string _ref_tmp_ = NULL;
  _ref_string i_rhs = NULL;
  chpl____wide__ref_string T2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string T3 = {CHPL_LOCALEID_T_INIT, NULL};
  int32_t coerce_tmp2;
  chpl_bool call_tmp5;
  c_ptr_uint8_t coerce_tmp3 = NULL;
  int64_t call_tmp6;
  _ref_string _ref_tmp_2 = NULL;
  chpl____wide__ref_string T4 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp_3 = NULL;
  chpl____wide__ref_string T5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_389;
  chpl____wide__ref_string chpl_macro_tmp_390;
  chpl____wide__ref_string chpl_macro_tmp_391;
  chpl____wide__ref_string chpl_macro_tmp_392;
  chpl____wide__ref_string chpl_macro_tmp_393;
  local__str_literal_337 /* "Cannot call .c_str() on a remote string" */ = _str_literal_337 /* "Cannot call .c_str() on a remote string" */;
  ret_to_arg_ref_tmp_ = &ret_tmp;
  _cast(x, ret_to_arg_ref_tmp_);
  call_tmp2 = ret_tmp;
  coerce_tmp = (&call_tmp2)->locale_id;
  call_tmp3 = (coerce_tmp == chpl_nodeID);
  if (call_tmp3) {
    ret_to_arg_ref_tmp_2 = &ret_tmp2;
    i_s = &call_tmp2;
    chpl_macro_tmp_389.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_389.addr = i_s;
    T = chpl_macro_tmp_389;
    string2(T, UINT8(false), ret_to_arg_ref_tmp_2);
    ret2 = ret_tmp2;
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
    ret_to_arg_ref_tmp_3 = &ret_tmp3;
    _construct_string(INT64(0), INT64(0), call_tmp4, UINT8(true), default_arglocale_id, &this12, ret_to_arg_ref_tmp_3);
    type_tmp = ret_tmp3;
    _ref_tmp_ = &type_tmp;
    i_rhs = &call_tmp2;
    chpl_macro_tmp_390.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_390.addr = _ref_tmp_;
    T2 = chpl_macro_tmp_390;
    chpl_macro_tmp_391.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_391.addr = i_rhs;
    T3 = chpl_macro_tmp_391;
    chpl___ASSIGN_13(T2, T3);
    ret2 = type_tmp;
    goto _end_localize;
  }
  _end_localize:;
  localX = ret2;
  coerce_tmp2 = (&localX)->locale_id;
  call_tmp5 = (coerce_tmp2 != chpl_nodeID);
  if (call_tmp5) {
    halt(&local__str_literal_337 /* "Cannot call .c_str() on a remote string" */, INT64(977), INT32(2));
  }
  coerce_tmp3 = (&localX)->buff;
  call_tmp6 = c_string_to_int64_t(((c_string)(((c_void_ptr)(coerce_tmp3)))), INT64(977), INT32(2));
  ret = call_tmp6;
  _ref_tmp_2 = &localX;
  chpl_macro_tmp_392.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_392.addr = _ref_tmp_2;
  T4 = chpl_macro_tmp_392;
  deinit44(T4);
  _ref_tmp_3 = &call_tmp2;
  chpl_macro_tmp_393.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_393.addr = _ref_tmp_3;
  T5 = chpl_macro_tmp_393;
  deinit44(T5);
  return ret;
}

/* ChapelBase.chpl:977 */
static chpl_bool _command_line_cast18(c_string x) {
  string call_tmp2;
  string ret_tmp;
  _ref_string ret_to_arg_ref_tmp_ = NULL;
  chpl_bool call_tmp3;
  _ref_string _ref_tmp_ = NULL;
  chpl____wide__ref_string T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_394;
  ret_to_arg_ref_tmp_ = &ret_tmp;
  _cast(x, ret_to_arg_ref_tmp_);
  call_tmp2 = ret_tmp;
  call_tmp3 = _cast2(&ret_tmp);
  _ref_tmp_ = &call_tmp2;
  chpl_macro_tmp_394.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_394.addr = _ref_tmp_;
  T = chpl_macro_tmp_394;
  deinit44(T);
  return call_tmp3;
}

/* ChapelBase.chpl:977 */
static int64_t _command_line_cast17(c_string x) {
  string local__str_literal_337;
  string call_tmp2;
  string ret_tmp;
  _ref_string ret_to_arg_ref_tmp_ = NULL;
  int64_t ret;
  string localX;
  string ret2;
  int32_t coerce_tmp;
  chpl_bool call_tmp3;
  string ret_tmp2;
  _ref_string ret_to_arg_ref_tmp_2 = NULL;
  _ref_string i_s = NULL;
  chpl____wide__ref_string T = {CHPL_LOCALEID_T_INIT, NULL};
  string type_tmp;
  string this12;
  c_ptr_uint8_t call_tmp4 = NULL;
  int32_t default_arglocale_id;
  string ret_tmp3;
  _ref_string ret_to_arg_ref_tmp_3 = NULL;
  _ref_string _ref_tmp_ = NULL;
  _ref_string i_rhs = NULL;
  chpl____wide__ref_string T2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string T3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp5;
  c_ptr_uint8_t coerce_tmp2 = NULL;
  int64_t call_tmp6;
  _ref_string _ref_tmp_2 = NULL;
  chpl____wide__ref_string T4 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string _ref_tmp_3 = NULL;
  chpl____wide__ref_string T5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_395;
  chpl____wide__ref_string chpl_macro_tmp_396;
  chpl____wide__ref_string chpl_macro_tmp_397;
  chpl____wide__ref_string chpl_macro_tmp_398;
  chpl____wide__ref_string chpl_macro_tmp_399;
  local__str_literal_337 /* "Cannot call .c_str() on a remote string" */ = _str_literal_337 /* "Cannot call .c_str() on a remote string" */;
  ret_to_arg_ref_tmp_ = &ret_tmp;
  _cast(x, ret_to_arg_ref_tmp_);
  call_tmp2 = ret_tmp;
  coerce_tmp = (&call_tmp2)->locale_id;
  call_tmp3 = (coerce_tmp == chpl_nodeID);
  if (call_tmp3) {
    ret_to_arg_ref_tmp_2 = &ret_tmp2;
    i_s = &call_tmp2;
    chpl_macro_tmp_395.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_395.addr = i_s;
    T = chpl_macro_tmp_395;
    string2(T, UINT8(false), ret_to_arg_ref_tmp_2);
    ret2 = ret_tmp2;
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
    ret_to_arg_ref_tmp_3 = &ret_tmp3;
    _construct_string(INT64(0), INT64(0), call_tmp4, UINT8(true), default_arglocale_id, &this12, ret_to_arg_ref_tmp_3);
    type_tmp = ret_tmp3;
    _ref_tmp_ = &type_tmp;
    i_rhs = &call_tmp2;
    chpl_macro_tmp_396.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_396.addr = _ref_tmp_;
    T2 = chpl_macro_tmp_396;
    chpl_macro_tmp_397.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_397.addr = i_rhs;
    T3 = chpl_macro_tmp_397;
    chpl___ASSIGN_13(T2, T3);
    ret2 = type_tmp;
    goto _end_localize;
  }
  _end_localize:;
  localX = ret2;
  call_tmp5 = ((&localX)->locale_id != chpl_nodeID);
  if (call_tmp5) {
    halt(&local__str_literal_337 /* "Cannot call .c_str() on a remote string" */, INT64(977), INT32(2));
  }
  coerce_tmp2 = (&localX)->buff;
  call_tmp6 = c_string_to_int64_t(((c_string)(((c_void_ptr)(coerce_tmp2)))), INT64(977), INT32(2));
  ret = call_tmp6;
  _ref_tmp_2 = &localX;
  chpl_macro_tmp_398.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_398.addr = _ref_tmp_2;
  T4 = chpl_macro_tmp_398;
  deinit44(T4);
  _ref_tmp_3 = &call_tmp2;
  chpl_macro_tmp_399.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_399.addr = _ref_tmp_3;
  T5 = chpl_macro_tmp_399;
  deinit44(T5);
  return ret;
}

/* ChapelBase.chpl:1199 */
static void chpl__autoDestroy3(_ref__distribution_DefaultDist x) {
  deinit2(x);
  return;
}

/* ChapelBase.chpl:1199 */
static void chpl__autoDestroy2(_ref__distribution_Replicated x) {
  deinit(x);
  return;
}

/* ChapelBase.chpl:1199 */
static void chpl__autoDestroy(_ref__distribution_Cyclic_1_int64_t x) {
  deinit3(x);
  return;
}

/* ChapelBase.chpl:1205 */
static void chpl__autoDestroy4(_ref__domain_CyclicDom_1_int64_t_F x) {
  deinit4(x);
  return;
}

/* ChapelBase.chpl:1205 */
static void chpl__autoDestroy8(_ref__domain_DefaultAssociativeDom_int64_t_T x) {
  deinit5(x);
  return;
}

/* ChapelBase.chpl:1205 */
static void chpl__autoDestroy7(_ref__domain_ReplicatedDom_1_int64_t_F x) {
  deinit7(x);
  return;
}

/* ChapelBase.chpl:1205 */
static void chpl__autoDestroy5(_ref__domain_DefaultRectangularDom_1_int64_t_F x) {
  deinit8(x);
  return;
}

/* ChapelBase.chpl:1205 */
static void chpl__autoDestroy6(_ref__domain_DefaultRectangularDom_1_int64_t_T x) {
  deinit6(x);
  return;
}

/* ChapelBase.chpl:1211 */
static void chpl__autoDestroy31(_ref__array_CyclicArr_Bitmap_1_int64_t_F x) {
  _ref__wide__array_CyclicArr_Bitmap_1_int64_t_F _ref_tmp_ = NULL;
  chpl____wide__ref__wide__array_CyclicArr_Bitmap_1_int64_t_F T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide__array_CyclicArr_Bitmap_1_int64_t_F chpl_macro_tmp_400;
  _ref_tmp_ = x;
  chpl_macro_tmp_400.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_400.addr = _ref_tmp_;
  T = chpl_macro_tmp_400;
  deinit31(T);
  return;
}

/* ChapelBase.chpl:1211 */
static void chpl__autoDestroy19(_ref__array_DefaultAssociativeArr_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t_T x) {
  _ref__wide__array_DefaultAssociativeArr_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t_T _ref_tmp_ = NULL;
  chpl____wide__ref__wide__array_DefaultAssociativeArr_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t_T T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide__array_DefaultAssociativeArr_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t_T chpl_macro_tmp_401;
  _ref_tmp_ = x;
  chpl_macro_tmp_401.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_401.addr = _ref_tmp_;
  T = chpl_macro_tmp_401;
  deinit22(T);
  return;
}

/* ChapelBase.chpl:1211 */
static void chpl__autoDestroy15(_ref__array_ReplicatedArr_FCHGlobalNode_ReplicatedDom_1_int64_t_F x) {
  _ref__wide__array_ReplicatedArr_FCHGlobalNode_ReplicatedDom_1_int64_t_F _ref_tmp_ = NULL;
  chpl____wide__ref__wide__array_ReplicatedArr_FCHGlobalNode_ReplicatedDom_1_int64_t_F T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide__array_ReplicatedArr_FCHGlobalNode_ReplicatedDom_1_int64_t_F chpl_macro_tmp_402;
  _ref_tmp_ = x;
  chpl_macro_tmp_402.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_402.addr = _ref_tmp_;
  T = chpl_macro_tmp_402;
  deinit16(T);
  return;
}

/* ChapelBase.chpl:1211 */
static void chpl__autoDestroy26(_ref__array_DefaultAssociativeArr_locale_int64_t_T x) {
  _ref__wide__array_DefaultAssociativeArr_locale_int64_t_T _ref_tmp_ = NULL;
  chpl____wide__ref__wide__array_DefaultAssociativeArr_locale_int64_t_T T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide__array_DefaultAssociativeArr_locale_int64_t_T chpl_macro_tmp_403;
  _ref_tmp_ = x;
  chpl_macro_tmp_403.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_403.addr = _ref_tmp_;
  T = chpl_macro_tmp_403;
  deinit30(T);
  return;
}

/* ChapelBase.chpl:1211 */
static void chpl__autoDestroy16(_ref__array_DefaultAssociativeArr_LocReplicatedArr_FCHGlobalNode_1_int64_t_F_int64_t_T x) {
  _ref__wide__array_DefaultAssociativeArr_LocReplicatedArr_FCHGlobalNode_1_int64_t_F_int64_t_T _ref_tmp_ = NULL;
  chpl____wide__ref__wide__array_DefaultAssociativeArr_LocReplicatedArr_FCHGlobalNode_1_int64_t_F_int64_t_T T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide__array_DefaultAssociativeArr_LocReplicatedArr_FCHGlobalNode_1_int64_t_F_int64_t_T chpl_macro_tmp_404;
  _ref_tmp_ = x;
  chpl_macro_tmp_404.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_404.addr = _ref_tmp_;
  T = chpl_macro_tmp_404;
  deinit24(T);
  return;
}

/* ChapelBase.chpl:1211 */
static void chpl__autoDestroy29(_ref__array_DefaultRectangularArr_chpl_TableEntry_int64_t_1_int64_t_F_int64_t x) {
  _ref__wide__array_DefaultRectangularArr_chpl_TableEntry_int64_t_1_int64_t_F_int64_t _ref_tmp_ = NULL;
  chpl____wide__ref__wide__array_DefaultRectangularArr_chpl_TableEntry_int64_t_1_int64_t_F_int64_t T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide__array_DefaultRectangularArr_chpl_TableEntry_int64_t_1_int64_t_F_int64_t chpl_macro_tmp_405;
  _ref_tmp_ = x;
  chpl_macro_tmp_405.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_405.addr = _ref_tmp_;
  T = chpl_macro_tmp_405;
  deinit33(T);
  return;
}

/* ChapelBase.chpl:1211 */
static void chpl__autoDestroy17(_ref__array_DefaultRectangularArr_LocReplicatedArr_FCHGlobalNode_1_int64_t_F_1_int64_t_F_int64_t x) {
  _ref__wide__array_DefaultRectangularArr_LocReplicatedArr_FCHGlobalNode_1_int64_t_F_1_int64_t_F_int64_t _ref_tmp_ = NULL;
  chpl____wide__ref__wide__array_DefaultRectangularArr_LocReplicatedArr_FCHGlobalNode_1_int64_t_F_1_int64_t_F_int64_t T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide__array_DefaultRectangularArr_LocReplicatedArr_FCHGlobalNode_1_int64_t_F_1_int64_t_F_int64_t chpl_macro_tmp_406;
  _ref_tmp_ = x;
  chpl_macro_tmp_406.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_406.addr = _ref_tmp_;
  T = chpl_macro_tmp_406;
  deinit25(T);
  return;
}

/* ChapelBase.chpl:1211 */
static void chpl__autoDestroy18(_ref__array_ReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_ReplicatedDom_1_int64_t_F x) {
  _ref__wide__array_ReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_ReplicatedDom_1_int64_t_F _ref_tmp_ = NULL;
  chpl____wide__ref__wide__array_ReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_ReplicatedDom_1_int64_t_F T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide__array_ReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_ReplicatedDom_1_int64_t_F chpl_macro_tmp_407;
  _ref_tmp_ = x;
  chpl_macro_tmp_407.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_407.addr = _ref_tmp_;
  T = chpl_macro_tmp_407;
  deinit27(T);
  return;
}

/* ChapelBase.chpl:1211 */
static void chpl__autoDestroy25(_ref__array_DefaultRectangularArr_LocReplicatedDom_1_int64_t_F_1_int64_t_F_int64_t x) {
  _ref__wide__array_DefaultRectangularArr_LocReplicatedDom_1_int64_t_F_1_int64_t_F_int64_t _ref_tmp_ = NULL;
  chpl____wide__ref__wide__array_DefaultRectangularArr_LocReplicatedDom_1_int64_t_F_1_int64_t_F_int64_t T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide__array_DefaultRectangularArr_LocReplicatedDom_1_int64_t_F_1_int64_t_F_int64_t chpl_macro_tmp_408;
  _ref_tmp_ = x;
  chpl_macro_tmp_408.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_408.addr = _ref_tmp_;
  T = chpl_macro_tmp_408;
  deinit10(T);
  return;
}

/* ChapelBase.chpl:1211 */
static void chpl__autoDestroy24(_ref__array_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T x) {
  _ref__wide__array_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T _ref_tmp_ = NULL;
  chpl____wide__ref__wide__array_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide__array_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T chpl_macro_tmp_409;
  _ref_tmp_ = x;
  chpl_macro_tmp_409.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_409.addr = _ref_tmp_;
  T = chpl_macro_tmp_409;
  deinit12(T);
  return;
}

/* ChapelBase.chpl:1211 */
static void chpl__autoDestroy21(_ref__array_DefaultRectangularArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t x) {
  _ref__wide__array_DefaultRectangularArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t _ref_tmp_ = NULL;
  chpl____wide__ref__wide__array_DefaultRectangularArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide__array_DefaultRectangularArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t chpl_macro_tmp_410;
  _ref_tmp_ = x;
  chpl_macro_tmp_410.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_410.addr = _ref_tmp_;
  T = chpl_macro_tmp_410;
  deinit18(T);
  return;
}

/* ChapelBase.chpl:1211 */
static void chpl__autoDestroy20(_ref__array_DefaultRectangularArr_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_1_int64_t_F_int64_t x) {
  _ref__wide__array_DefaultRectangularArr_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_1_int64_t_F_int64_t _ref_tmp_ = NULL;
  chpl____wide__ref__wide__array_DefaultRectangularArr_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_1_int64_t_F_int64_t T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide__array_DefaultRectangularArr_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_1_int64_t_F_int64_t chpl_macro_tmp_411;
  _ref_tmp_ = x;
  chpl_macro_tmp_411.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_411.addr = _ref_tmp_;
  T = chpl_macro_tmp_411;
  deinit20(T);
  return;
}

/* ChapelBase.chpl:1211 */
static void chpl__autoDestroy32(_ref__array_DefaultRectangularArr_LocCyclicArr_Bitmap_1_int64_t_F_1_int64_t_F_int64_t x) {
  _ref__wide__array_DefaultRectangularArr_LocCyclicArr_Bitmap_1_int64_t_F_1_int64_t_F_int64_t _ref_tmp_ = NULL;
  chpl____wide__ref__wide__array_DefaultRectangularArr_LocCyclicArr_Bitmap_1_int64_t_F_1_int64_t_F_int64_t T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide__array_DefaultRectangularArr_LocCyclicArr_Bitmap_1_int64_t_F_1_int64_t_F_int64_t chpl_macro_tmp_412;
  _ref_tmp_ = x;
  chpl_macro_tmp_412.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_412.addr = _ref_tmp_;
  T = chpl_macro_tmp_412;
  deinit29(T);
  return;
}

/* ChapelBase.chpl:1211 */
static void chpl__autoDestroy34(_ref__array_DefaultRectangularArr_Bitmap_1_int64_t_T_int64_t x) {
  _ref__wide__array_DefaultRectangularArr_Bitmap_1_int64_t_T_int64_t _ref_tmp_ = NULL;
  chpl____wide__ref__wide__array_DefaultRectangularArr_Bitmap_1_int64_t_T_int64_t T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide__array_DefaultRectangularArr_Bitmap_1_int64_t_T_int64_t chpl_macro_tmp_413;
  _ref_tmp_ = x;
  chpl_macro_tmp_413.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_413.addr = _ref_tmp_;
  T = chpl_macro_tmp_413;
  deinit11(T);
  return;
}

/* ChapelBase.chpl:1211 */
static void chpl__autoDestroy33(_ref__array_DefaultRectangularArr__remoteAccessData_Bitmap_1_int64_t_F_F_1_int64_t_F_int64_t x) {
  _ref__wide__array_DefaultRectangularArr__remoteAccessData_Bitmap_1_int64_t_F_F_1_int64_t_F_int64_t _ref_tmp_ = NULL;
  chpl____wide__ref__wide__array_DefaultRectangularArr__remoteAccessData_Bitmap_1_int64_t_F_F_1_int64_t_F_int64_t T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide__array_DefaultRectangularArr__remoteAccessData_Bitmap_1_int64_t_F_F_1_int64_t_F_int64_t chpl_macro_tmp_414;
  _ref_tmp_ = x;
  chpl_macro_tmp_414.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_414.addr = _ref_tmp_;
  T = chpl_macro_tmp_414;
  deinit14(T);
  return;
}

/* ChapelBase.chpl:1211 */
static void chpl__autoDestroy30(_ref__array_CyclicArr__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F x) {
  _ref__wide__array_CyclicArr__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F _ref_tmp_ = NULL;
  chpl____wide__ref__wide__array_CyclicArr__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide__array_CyclicArr__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F chpl_macro_tmp_415;
  _ref_tmp_ = x;
  chpl_macro_tmp_415.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_415.addr = _ref_tmp_;
  T = chpl_macro_tmp_415;
  deinit21(T);
  return;
}

/* ChapelBase.chpl:1211 */
static void chpl__autoDestroy14(_ref__array_DefaultRectangularArr_LocCyclicArr__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F_1_int64_t_F_int64_t x) {
  _ref__wide__array_DefaultRectangularArr_LocCyclicArr__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F_1_int64_t_F_int64_t _ref_tmp_ = NULL;
  chpl____wide__ref__wide__array_DefaultRectangularArr_LocCyclicArr__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F_1_int64_t_F_int64_t T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide__array_DefaultRectangularArr_LocCyclicArr__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F_1_int64_t_F_int64_t chpl_macro_tmp_416;
  _ref_tmp_ = x;
  chpl_macro_tmp_416.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_416.addr = _ref_tmp_;
  T = chpl_macro_tmp_416;
  deinit32(T);
  return;
}

/* ChapelBase.chpl:1211 */
static void chpl__autoDestroy13(_ref__array_DefaultRectangularArr__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_T_int64_t x) {
  _ref__wide__array_DefaultRectangularArr__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_T_int64_t _ref_tmp_ = NULL;
  chpl____wide__ref__wide__array_DefaultRectangularArr__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_T_int64_t T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide__array_DefaultRectangularArr__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_T_int64_t chpl_macro_tmp_417;
  _ref_tmp_ = x;
  chpl_macro_tmp_417.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_417.addr = _ref_tmp_;
  T = chpl_macro_tmp_417;
  deinit17(T);
  return;
}

/* ChapelBase.chpl:1211 */
static void chpl__autoDestroy12(_ref__array_DefaultRectangularArr_atomicbool_1_int64_t_F_int64_t x) {
  _ref__wide__array_DefaultRectangularArr_atomicbool_1_int64_t_F_int64_t _ref_tmp_ = NULL;
  chpl____wide__ref__wide__array_DefaultRectangularArr_atomicbool_1_int64_t_F_int64_t T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide__array_DefaultRectangularArr_atomicbool_1_int64_t_F_int64_t chpl_macro_tmp_418;
  _ref_tmp_ = x;
  chpl_macro_tmp_418.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_418.addr = _ref_tmp_;
  T = chpl_macro_tmp_418;
  deinit23(T);
  return;
}

/* ChapelBase.chpl:1211 */
static void chpl__autoDestroy11(_ref__array_DefaultRectangularArr__remoteAccessData__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F_F_1_int64_t_F_int64_t x) {
  _ref__wide__array_DefaultRectangularArr__remoteAccessData__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F_F_1_int64_t_F_int64_t _ref_tmp_ = NULL;
  chpl____wide__ref__wide__array_DefaultRectangularArr__remoteAccessData__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F_F_1_int64_t_F_int64_t T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide__array_DefaultRectangularArr__remoteAccessData__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F_F_1_int64_t_F_int64_t chpl_macro_tmp_419;
  _ref_tmp_ = x;
  chpl_macro_tmp_419.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_419.addr = _ref_tmp_;
  T = chpl_macro_tmp_419;
  deinit28(T);
  return;
}

/* ChapelBase.chpl:1211 */
static void chpl__autoDestroy10(_ref__array_DefaultRectangularArr_LocCyclicDom_1_int64_t_F_1_int64_t_F_int64_t x) {
  _ref__wide__array_DefaultRectangularArr_LocCyclicDom_1_int64_t_F_1_int64_t_F_int64_t _ref_tmp_ = NULL;
  chpl____wide__ref__wide__array_DefaultRectangularArr_LocCyclicDom_1_int64_t_F_1_int64_t_F_int64_t T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide__array_DefaultRectangularArr_LocCyclicDom_1_int64_t_F_1_int64_t_F_int64_t chpl_macro_tmp_420;
  _ref_tmp_ = x;
  chpl_macro_tmp_420.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_420.addr = _ref_tmp_;
  T = chpl_macro_tmp_420;
  deinit26(T);
  return;
}

/* ChapelBase.chpl:1211 */
static void chpl__autoDestroy9(_ref__array_DefaultRectangularArr_LocCyclic_1_int64_t_1_int64_t_F_int64_t x) {
  _ref__wide__array_DefaultRectangularArr_LocCyclic_1_int64_t_1_int64_t_F_int64_t _ref_tmp_ = NULL;
  chpl____wide__ref__wide__array_DefaultRectangularArr_LocCyclic_1_int64_t_1_int64_t_F_int64_t T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide__array_DefaultRectangularArr_LocCyclic_1_int64_t_1_int64_t_F_int64_t chpl_macro_tmp_421;
  _ref_tmp_ = x;
  chpl_macro_tmp_421.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_421.addr = _ref_tmp_;
  T = chpl_macro_tmp_421;
  deinit15(T);
  return;
}

/* ChapelBase.chpl:1211 */
static void chpl__autoDestroy28(_ref__array_DefaultRectangularArr_localesSignal_1_int64_t_F_int64_t x) {
  deinit13(x);
  return;
}

/* ChapelBase.chpl:1211 */
static void chpl__autoDestroy27(_ref__array_DefaultRectangularArr_locale_1_int64_t_F_int64_t x) {
  _ref__wide__array_DefaultRectangularArr_locale_1_int64_t_F_int64_t _ref_tmp_ = NULL;
  chpl____wide__ref__wide__array_DefaultRectangularArr_locale_1_int64_t_F_int64_t T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide__array_DefaultRectangularArr_locale_1_int64_t_F_int64_t chpl_macro_tmp_422;
  _ref_tmp_ = x;
  chpl_macro_tmp_422.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_422.addr = _ref_tmp_;
  T = chpl_macro_tmp_422;
  deinit34(T);
  return;
}

/* ChapelBase.chpl:1211 */
static void chpl__autoDestroy22(_ref__array_DefaultRectangularArr_uint64_t_1_int64_t_F_int64_t x) {
  _ref__wide__array_DefaultRectangularArr_uint64_t_1_int64_t_F_int64_t _ref_tmp_ = NULL;
  chpl____wide__ref__wide__array_DefaultRectangularArr_uint64_t_1_int64_t_F_int64_t T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide__array_DefaultRectangularArr_uint64_t_1_int64_t_F_int64_t chpl_macro_tmp_423;
  _ref_tmp_ = x;
  chpl_macro_tmp_423.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_423.addr = _ref_tmp_;
  T = chpl_macro_tmp_423;
  deinit19(T);
  return;
}

/* ChapelBase.chpl:1211 */
static void chpl__autoDestroy23(_ref__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t x) {
  _ref__wide__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t _ref_tmp_ = NULL;
  chpl____wide__ref__wide__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t chpl_macro_tmp_424;
  _ref_tmp_ = x;
  chpl_macro_tmp_424.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_424.addr = _ref_tmp_;
  T = chpl_macro_tmp_424;
  deinit9(T);
  return;
}

/* ChapelBase.chpl:1227 */
static void wrapon_fn116(_class_localson_fn126 c) {
  chpl____wide_CyclicArr__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  on_fn132(_1_rvfDerefTmp);
  return;
}

/* ChapelBase.chpl:1227 */
static void wrapon_fn144(_class_localson_fn147 c) {
  chpl____wide_DefaultRectangularArr__remoteAccessData__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F_F_1_int64_t_F_int64_t _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  on_fn135(_1_rvfDerefTmp);
  return;
}

/* ChapelBase.chpl:1227 */
static void wrapon_fn104(_class_localson_fn129 c) {
  chpl____wide_DefaultRectangularArr_atomicbool_1_int64_t_F_int64_t _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  on_fn130(_1_rvfDerefTmp);
  return;
}

/* ChapelBase.chpl:1227 */
static void wrapon_fn114(_class_localson_fn131 c) {
  chpl____wide_DefaultRectangularArr__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_T_int64_t _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  on_fn147(_1_rvfDerefTmp);
  return;
}

/* ChapelBase.chpl:1227 */
static void wrapon_fn120(_class_localson_fn133 c) {
  chpl____wide_DefaultRectangularArr_LocCyclicArr__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F_1_int64_t_F_int64_t _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  on_fn150(_1_rvfDerefTmp);
  return;
}

/* ChapelBase.chpl:1227 */
static void wrapon_fn119(_class_localson_fn134 c) {
  chpl____wide_LocRADCache__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  on_fn139(_1_rvfDerefTmp);
  return;
}

/* ChapelBase.chpl:1227 */
static void wrapon_fn117(_class_localson_fn135 c) {
  chpl____wide_LocCyclicArr__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  on_fn131(_1_rvfDerefTmp);
  return;
}

/* ChapelBase.chpl:1227 */
static void wrapon_fn123(_class_localson_fn102 c) {
  chpl____wide_localesSignal _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  on_fn112(_1_rvfDerefTmp);
  return;
}

/* ChapelBase.chpl:1227 */
static void wrapon_fn152(_class_localson_fn148 c) {
  chpl____wide_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  on_fn145(_1_rvfDerefTmp);
  return;
}

/* ChapelBase.chpl:1227 */
static void wrapon_fn134(_class_localson_fn153 c) {
  chpl____wide_CyclicDom_1_int64_t_F _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  on_fn149(_1_rvfDerefTmp);
  return;
}

/* ChapelBase.chpl:1227 */
static void wrapon_fn133(_class_localson_fn151 c) {
  chpl____wide_LocCyclicDom_1_int64_t_F _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  on_fn143(_1_rvfDerefTmp);
  return;
}

/* ChapelBase.chpl:1227 */
static void wrapon_fn124(_class_localson_fn146 c) {
  chpl____wide_DefaultRectangularArr_LocCyclicDom_1_int64_t_F_1_int64_t_F_int64_t _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  on_fn133(_1_rvfDerefTmp);
  return;
}

/* ChapelBase.chpl:1227 */
static void wrapon_fn127(_class_localson_fn145 c) {
  chpl____wide_object _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  on_fn140(_1_rvfDerefTmp);
  return;
}

/* ChapelBase.chpl:1227 */
static void wrapon_fn108(_class_localson_fn117 c) {
  chpl____wide_DefaultRectangularArr_LocCyclic_1_int64_t_1_int64_t_F_int64_t _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  on_fn144(_1_rvfDerefTmp);
  return;
}

/* ChapelBase.chpl:1227 */
static void wrapon_fn102(_class_localson_fn106 c) {
  chpl____wide_DefaultRectangularDom_1_int64_t_T _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  on_fn153(_1_rvfDerefTmp);
  return;
}

/* ChapelBase.chpl:1227 */
static void wrapon_fn122(_class_localson_fn101 c) {
  chpl____wide_listNode_int64_t _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  on_fn137(_1_rvfDerefTmp);
  return;
}

/* ChapelBase.chpl:1227 */
static void _local_wrapon_fn4(_class_localson_fn108 c) {
  chpl____wide_listNode_BaseDom _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  _local_on_fn3(_1_rvfDerefTmp);
  return;
}

/* ChapelBase.chpl:1227 */
static void wrapon_fn126(_class_localson_fn112 c) {
  chpl____wide_ReplicatedDom_1_int64_t_F _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  on_fn136(_1_rvfDerefTmp);
  return;
}

/* ChapelBase.chpl:1227 */
static void wrapon_fn118(_class_localson_fn111 c) {
  chpl____wide_LocCyclic_1_int64_t _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  on_fn104(_1_rvfDerefTmp);
  return;
}

/* ChapelBase.chpl:1227 */
static void wrapon_fn112(_class_localson_fn118 c) {
  chpl____wide_Error _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  on_fn146(_1_rvfDerefTmp);
  return;
}

/* ChapelBase.chpl:1227 */
static void wrapon_fn111(_class_localson_fn119 c) {
  chpl____wide_chpl_ModuleDeinit _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  on_fn129(_1_rvfDerefTmp);
  return;
}

/* ChapelBase.chpl:1227 */
static void wrapon_fn149(_class_localson_fn115 c) {
  chpl____wide_DequeueFunctor_FCHQueue_int64_t_int64_t _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  on_fn151(_1_rvfDerefTmp);
  return;
}

/* ChapelBase.chpl:1227 */
static void wrapon_fn150(_class_localson_fn113 c) {
  chpl____wide_EnqueueFunctor_FCHQueue_int64_t_int64_t _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  on_fn148(_1_rvfDerefTmp);
  return;
}

/* ChapelBase.chpl:1227 */
static void wrapon_fn136(_class_localson_fn128 c) {
  chpl____wide_ReplicatedArr_FCHGlobalNode_ReplicatedDom_1_int64_t_F _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  on_fn127(_1_rvfDerefTmp);
  return;
}

/* ChapelBase.chpl:1227 */
static void wrapon_fn137(_class_localson_fn149 c) {
  chpl____wide_LocReplicatedArr_FCHGlobalNode_1_int64_t_F _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  on_fn102(_1_rvfDerefTmp);
  return;
}

/* ChapelBase.chpl:1227 */
static void wrapon_fn138(_class_localson_fn122 c) {
  chpl____wide_DefaultAssociativeArr_LocReplicatedArr_FCHGlobalNode_1_int64_t_F_int64_t_T _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  on_fn124(_1_rvfDerefTmp);
  return;
}

/* ChapelBase.chpl:1227 */
static void wrapon_fn139(_class_localson_fn125 c) {
  chpl____wide_DefaultRectangularArr_LocReplicatedArr_FCHGlobalNode_1_int64_t_F_1_int64_t_F_int64_t _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  on_fn105(_1_rvfDerefTmp);
  return;
}

/* ChapelBase.chpl:1227 */
static void wrapon_fn147(_class_localson_fn121 c) {
  chpl____wide_ReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_ReplicatedDom_1_int64_t_F _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  on_fn118(_1_rvfDerefTmp);
  return;
}

/* ChapelBase.chpl:1227 */
static void wrapon_fn113(_class_localson_fn114 c) {
  chpl____wide_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  on_fn117(_1_rvfDerefTmp);
  return;
}

/* ChapelBase.chpl:1227 */
static void wrapon_fn151(_class_localson_fn150 c) {
  chpl____wide_DefaultAssociativeArr_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t_T _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  on_fn103(_1_rvfDerefTmp);
  return;
}

/* ChapelBase.chpl:1227 */
static void wrapon_fn153(_class_localson_fn105 c) {
  chpl____wide_DefaultRectangularArr_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_1_int64_t_F_int64_t _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  on_fn128(_1_rvfDerefTmp);
  return;
}

/* ChapelBase.chpl:1227 */
static void wrapon_fn143(_class_localson_fn120 c) {
  chpl____wide_DefaultRectangularArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  on_fn113(_1_rvfDerefTmp);
  return;
}

/* ChapelBase.chpl:1227 */
static void wrapon_fn115(_class_localson_fn137 c) {
  chpl____wide__qthreads_synccls_uint64_t _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  on_fn134(_1_rvfDerefTmp);
  return;
}

/* ChapelBase.chpl:1227 */
static void wrapon_fn121(_class_localson_fn116 c) {
  chpl____wide_LocReplicatedDom_1_int64_t_F _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  on_fn142(_1_rvfDerefTmp);
  return;
}

/* ChapelBase.chpl:1227 */
static void wrapon_fn130(_class_localson_fn152 c) {
  chpl____wide_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  on_fn141(_1_rvfDerefTmp);
  return;
}

/* ChapelBase.chpl:1227 */
static void wrapon_fn129(_class_localson_fn127 c) {
  chpl____wide_DefaultRectangularArr_LocReplicatedDom_1_int64_t_F_1_int64_t_F_int64_t _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  on_fn152(_1_rvfDerefTmp);
  return;
}

/* ChapelBase.chpl:1227 */
static void wrapon_fn132(_class_localson_fn130 c) {
  chpl____wide_DefaultAssociativeArr_locale_int64_t_T _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  on_fn111(_1_rvfDerefTmp);
  return;
}

/* ChapelBase.chpl:1227 */
static void wrapon_fn135(_class_localson_fn136 c) {
  chpl____wide_DefaultAssociativeDom_int64_t_T _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  on_fn116(_1_rvfDerefTmp);
  return;
}

/* ChapelBase.chpl:1227 */
static void wrapon_fn141(_class_localson_fn132 c) {
  chpl____wide_DefaultRectangularArr_chpl_TableEntry_int64_t_1_int64_t_F_int64_t _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  on_fn119(_1_rvfDerefTmp);
  return;
}

/* ChapelBase.chpl:1227 */
static void wrapon_fn110(_class_localson_fn144 c) {
  chpl____wide_CyclicArr_Bitmap_1_int64_t_F _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  on_fn110(_1_rvfDerefTmp);
  return;
}

/* ChapelBase.chpl:1227 */
static void wrapon_fn109(_class_localson_fn143 c) {
  chpl____wide_LocCyclicArr_Bitmap_1_int64_t_F _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  on_fn109(_1_rvfDerefTmp);
  return;
}

/* ChapelBase.chpl:1227 */
static void wrapon_fn107(_class_localson_fn142 c) {
  chpl____wide_LocRADCache_Bitmap_1_int64_t_F _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  on_fn114(_1_rvfDerefTmp);
  return;
}

/* ChapelBase.chpl:1227 */
static void wrapon_fn101(_class_localson_fn141 c) {
  chpl____wide_DefaultRectangularArr_LocCyclicArr_Bitmap_1_int64_t_F_1_int64_t_F_int64_t _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  on_fn125(_1_rvfDerefTmp);
  return;
}

/* ChapelBase.chpl:1227 */
static void wrapon_fn105(_class_localson_fn140 c) {
  chpl____wide_DefaultRectangularArr_Bitmap_1_int64_t_T_int64_t _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  on_fn126(_1_rvfDerefTmp);
  return;
}

/* ChapelBase.chpl:1227 */
static void wrapon_fn103(_class_localson_fn139 c) {
  chpl____wide_DefaultRectangularArr__remoteAccessData_Bitmap_1_int64_t_F_F_1_int64_t_F_int64_t _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  on_fn101(_1_rvfDerefTmp);
  return;
}

/* ChapelBase.chpl:1227 */
static void wrapon_fn106(_class_localson_fn138 c) {
  chpl____wide_DefaultRectangularArr_uint64_t_1_int64_t_F_int64_t _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  on_fn138(_1_rvfDerefTmp);
  return;
}

/* ChapelBase.chpl:1227 */
static void on_fn114(chpl____wide_LocRADCache_Bitmap_1_int64_t_F arg) {
  chpl_here_free(((c_void_ptr)((&arg)->addr)));
  return;
}

/* ChapelBase.chpl:1227 */
static void on_fn139(chpl____wide_LocRADCache__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F arg) {
  chpl_here_free(((c_void_ptr)((&arg)->addr)));
  return;
}

/* ChapelBase.chpl:1227 */
static void on_fn131(chpl____wide_LocCyclicArr__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F arg) {
  chpl_here_free(((c_void_ptr)((&arg)->addr)));
  return;
}

/* ChapelBase.chpl:1227 */
static void on_fn132(chpl____wide_CyclicArr__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F arg) {
  chpl_here_free(((c_void_ptr)((&arg)->addr)));
  return;
}

/* ChapelBase.chpl:1227 */
static void on_fn134(chpl____wide__qthreads_synccls_uint64_t arg) {
  chpl_here_free(((c_void_ptr)((&arg)->addr)));
  return;
}

/* ChapelBase.chpl:1227 */
static void on_fn138(chpl____wide_DefaultRectangularArr_uint64_t_1_int64_t_F_int64_t arg) {
  chpl_here_free(((c_void_ptr)((&arg)->addr)));
  return;
}

/* ChapelBase.chpl:1227 */
static void on_fn101(chpl____wide_DefaultRectangularArr__remoteAccessData_Bitmap_1_int64_t_F_F_1_int64_t_F_int64_t arg) {
  chpl_here_free(((c_void_ptr)((&arg)->addr)));
  return;
}

/* ChapelBase.chpl:1227 */
static void on_fn126(chpl____wide_DefaultRectangularArr_Bitmap_1_int64_t_T_int64_t arg) {
  chpl_here_free(((c_void_ptr)((&arg)->addr)));
  return;
}

/* ChapelBase.chpl:1227 */
static void on_fn125(chpl____wide_DefaultRectangularArr_LocCyclicArr_Bitmap_1_int64_t_F_1_int64_t_F_int64_t arg) {
  chpl_here_free(((c_void_ptr)((&arg)->addr)));
  return;
}

/* ChapelBase.chpl:1227 */
static void on_fn150(chpl____wide_DefaultRectangularArr_LocCyclicArr__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F_1_int64_t_F_int64_t arg) {
  chpl_here_free(((c_void_ptr)((&arg)->addr)));
  return;
}

/* ChapelBase.chpl:1227 */
static void on_fn109(chpl____wide_LocCyclicArr_Bitmap_1_int64_t_F arg) {
  chpl_here_free(((c_void_ptr)((&arg)->addr)));
  return;
}

/* ChapelBase.chpl:1227 */
static void on_fn110(chpl____wide_CyclicArr_Bitmap_1_int64_t_F arg) {
  chpl_here_free(((c_void_ptr)((&arg)->addr)));
  return;
}

/* ChapelBase.chpl:1227 */
static void on_fn119(chpl____wide_DefaultRectangularArr_chpl_TableEntry_int64_t_1_int64_t_F_int64_t arg) {
  chpl_here_free(((c_void_ptr)((&arg)->addr)));
  return;
}

/* ChapelBase.chpl:1227 */
static void on_fn116(chpl____wide_DefaultAssociativeDom_int64_t_T arg) {
  chpl_here_free(((c_void_ptr)((&arg)->addr)));
  return;
}

/* ChapelBase.chpl:1227 */
static void on_fn111(chpl____wide_DefaultAssociativeArr_locale_int64_t_T arg) {
  chpl_here_free(((c_void_ptr)((&arg)->addr)));
  return;
}

/* ChapelBase.chpl:1227 */
static void on_fn152(chpl____wide_DefaultRectangularArr_LocReplicatedDom_1_int64_t_F_1_int64_t_F_int64_t arg) {
  chpl_here_free(((c_void_ptr)((&arg)->addr)));
  return;
}

/* ChapelBase.chpl:1227 */
static void on_fn141(chpl____wide_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T arg) {
  chpl_here_free(((c_void_ptr)((&arg)->addr)));
  return;
}

/* ChapelBase.chpl:1227 */
static void on_fn122(chpl____wide_BaseDist arg) {
  chpl_here_free(((c_void_ptr)((&arg)->addr)));
  return;
}

/* ChapelBase.chpl:1227 */
static void on_fn147(chpl____wide_DefaultRectangularArr__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_T_int64_t arg) {
  chpl_here_free(((c_void_ptr)((&arg)->addr)));
  return;
}

/* ChapelBase.chpl:1227 */
static void on_fn130(chpl____wide_DefaultRectangularArr_atomicbool_1_int64_t_F_int64_t arg) {
  chpl_here_free(((c_void_ptr)((&arg)->addr)));
  return;
}

/* ChapelBase.chpl:1227 */
static void on_fn135(chpl____wide_DefaultRectangularArr__remoteAccessData__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F_F_1_int64_t_F_int64_t arg) {
  chpl_here_free(((c_void_ptr)((&arg)->addr)));
  return;
}

/* ChapelBase.chpl:1227 */
static void on_fn145(chpl____wide_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t arg) {
  chpl_here_free(((c_void_ptr)((&arg)->addr)));
  return;
}

/* ChapelBase.chpl:1227 */
static void on_fn149(chpl____wide_CyclicDom_1_int64_t_F arg) {
  chpl_here_free(((c_void_ptr)((&arg)->addr)));
  return;
}

/* ChapelBase.chpl:1227 */
static void on_fn143(chpl____wide_LocCyclicDom_1_int64_t_F arg) {
  chpl_here_free(((c_void_ptr)((&arg)->addr)));
  return;
}

/* ChapelBase.chpl:1227 */
static void on_fn133(chpl____wide_DefaultRectangularArr_LocCyclicDom_1_int64_t_F_1_int64_t_F_int64_t arg) {
  chpl_here_free(((c_void_ptr)((&arg)->addr)));
  return;
}

/* ChapelBase.chpl:1227 */
static void on_fn140(chpl____wide_object arg) {
  chpl_here_free(((c_void_ptr)((&arg)->addr)));
  return;
}

/* ChapelBase.chpl:1227 */
static void on_fn106(chpl____wide_DefaultRectangularDom_1_int64_t_F arg) {
  chpl_here_free(((c_void_ptr)((&arg)->addr)));
  return;
}

/* ChapelBase.chpl:1227 */
static void on_fn144(chpl____wide_DefaultRectangularArr_LocCyclic_1_int64_t_1_int64_t_F_int64_t arg) {
  chpl_here_free(((c_void_ptr)((&arg)->addr)));
  return;
}

/* ChapelBase.chpl:1227 */
static void on_fn153(chpl____wide_DefaultRectangularDom_1_int64_t_T arg) {
  chpl_here_free(((c_void_ptr)((&arg)->addr)));
  return;
}

/* ChapelBase.chpl:1227 */
static void on_fn137(chpl____wide_listNode_int64_t arg) {
  chpl_here_free(((c_void_ptr)((&arg)->addr)));
  return;
}

/* ChapelBase.chpl:1227 */
static void on_fn112(chpl____wide_localesSignal arg) {
  chpl_here_free(((c_void_ptr)((&arg)->addr)));
  return;
}

/* ChapelBase.chpl:1227 */
static void on_fn115(chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F_int64_t arg) {
  chpl_here_free(((c_void_ptr)((&arg)->addr)));
  return;
}

/* ChapelBase.chpl:1227 */
static void on_fn107(chpl____wide_DefaultRectangularArr_locale_1_int64_t_F_int64_t arg) {
  chpl_here_free(((c_void_ptr)((&arg)->addr)));
  return;
}

/* ChapelBase.chpl:1227 */
static void on_fn104(chpl____wide_LocCyclic_1_int64_t arg) {
  chpl_here_free(((c_void_ptr)((&arg)->addr)));
  return;
}

/* ChapelBase.chpl:1227 */
static void wrapon_fn148(_class_localson_fn103 c) {
  chpl____wide_DefaultRectangularArr_locale_1_int64_t_F_int64_t _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  on_fn107(_1_rvfDerefTmp);
  return;
}

/* ChapelBase.chpl:1227 */
static void wrapon_fn131(_class_localson_fn104 c) {
  chpl____wide__EndCount_atomic_int64_int64_t _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  on_fn123(_1_rvfDerefTmp);
  return;
}

/* ChapelBase.chpl:1227 */
static void wrapon_fn146(_class_localson_fn124 c) {
  chpl____wide_DefaultRectangularDom_1_int64_t_F _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  on_fn106(_1_rvfDerefTmp);
  return;
}

/* ChapelBase.chpl:1227 */
static void wrapon_fn142(_class_localson_fn123 c) {
  chpl____wide_BaseDist _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  on_fn122(_1_rvfDerefTmp);
  return;
}

/* ChapelBase.chpl:1227 */
static void wrapon_fn140(_class_localson_fn108 c) {
  chpl____wide_listNode_BaseDom _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  on_fn121(_1_rvfDerefTmp);
  return;
}

/* ChapelBase.chpl:1227 */
static void on_fn123(chpl____wide__EndCount_atomic_int64_int64_t arg) {
  chpl_here_free(((c_void_ptr)((&arg)->addr)));
  return;
}

/* ChapelBase.chpl:1227 */
static void wrapon_fn128(_class_localson_fn109 c) {
  chpl____wide_listNode_BaseArr _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  on_fn120(_1_rvfDerefTmp);
  return;
}

/* ChapelBase.chpl:1227 */
static void _local_wrapon_fn3(_class_localson_fn109 c) {
  chpl____wide_listNode_BaseArr _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  _local_on_fn4(_1_rvfDerefTmp);
  return;
}

/* ChapelBase.chpl:1227 */
static void wrapon_fn145(_class_localson_fn110 c) {
  chpl____wide_locale _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  on_fn108(_1_rvfDerefTmp);
  return;
}

/* ChapelBase.chpl:1227 */
static void on_fn108(chpl____wide_locale arg) {
  chpl_here_free(((c_void_ptr)((&arg)->addr)));
  return;
}

/* ChapelBase.chpl:1227 */
static void _local_on_fn4(chpl____wide_listNode_BaseArr arg) {
  _local_chpl_here_free(((c_void_ptr)((&arg)->addr)));
  return;
}

/* ChapelBase.chpl:1227 */
static void on_fn120(chpl____wide_listNode_BaseArr arg) {
  chpl_here_free(((c_void_ptr)((&arg)->addr)));
  return;
}

/* ChapelBase.chpl:1227 */
static void _local_on_fn3(chpl____wide_listNode_BaseDom arg) {
  _local_chpl_here_free(((c_void_ptr)((&arg)->addr)));
  return;
}

/* ChapelBase.chpl:1227 */
static void on_fn121(chpl____wide_listNode_BaseDom arg) {
  chpl_here_free(((c_void_ptr)((&arg)->addr)));
  return;
}

/* ChapelBase.chpl:1227 */
static void wrapon_fn125(_class_localson_fn107 c) {
  chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F_int64_t _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  on_fn115(_1_rvfDerefTmp);
  return;
}

/* ChapelBase.chpl:1227 */
static void on_fn124(chpl____wide_DefaultAssociativeArr_LocReplicatedArr_FCHGlobalNode_1_int64_t_F_int64_t_T arg) {
  chpl_here_free(((c_void_ptr)((&arg)->addr)));
  return;
}

/* ChapelBase.chpl:1227 */
static void on_fn142(chpl____wide_LocReplicatedDom_1_int64_t_F arg) {
  chpl_here_free(((c_void_ptr)((&arg)->addr)));
  return;
}

/* ChapelBase.chpl:1227 */
static void on_fn136(chpl____wide_ReplicatedDom_1_int64_t_F arg) {
  chpl_here_free(((c_void_ptr)((&arg)->addr)));
  return;
}

/* ChapelBase.chpl:1227 */
static void on_fn113(chpl____wide_DefaultRectangularArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t arg) {
  chpl_here_free(((c_void_ptr)((&arg)->addr)));
  return;
}

/* ChapelBase.chpl:1227 */
static void on_fn128(chpl____wide_DefaultRectangularArr_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_1_int64_t_F_int64_t arg) {
  chpl_here_free(((c_void_ptr)((&arg)->addr)));
  return;
}

/* ChapelBase.chpl:1227 */
static void on_fn103(chpl____wide_DefaultAssociativeArr_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t_T arg) {
  chpl_here_free(((c_void_ptr)((&arg)->addr)));
  return;
}

/* ChapelBase.chpl:1227 */
static void on_fn117(chpl____wide_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F arg) {
  chpl_here_free(((c_void_ptr)((&arg)->addr)));
  return;
}

/* ChapelBase.chpl:1227 */
static void on_fn118(chpl____wide_ReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_ReplicatedDom_1_int64_t_F arg) {
  chpl_here_free(((c_void_ptr)((&arg)->addr)));
  return;
}

/* ChapelBase.chpl:1227 */
static void on_fn105(chpl____wide_DefaultRectangularArr_LocReplicatedArr_FCHGlobalNode_1_int64_t_F_1_int64_t_F_int64_t arg) {
  chpl_here_free(((c_void_ptr)((&arg)->addr)));
  return;
}

/* ChapelBase.chpl:1227 */
static void on_fn146(chpl____wide_Error arg) {
  chpl_here_free(((c_void_ptr)((&arg)->addr)));
  return;
}

/* ChapelBase.chpl:1227 */
static void on_fn102(chpl____wide_LocReplicatedArr_FCHGlobalNode_1_int64_t_F arg) {
  chpl_here_free(((c_void_ptr)((&arg)->addr)));
  return;
}

/* ChapelBase.chpl:1227 */
static void on_fn127(chpl____wide_ReplicatedArr_FCHGlobalNode_ReplicatedDom_1_int64_t_F arg) {
  chpl_here_free(((c_void_ptr)((&arg)->addr)));
  return;
}

/* ChapelBase.chpl:1227 */
static void on_fn148(chpl____wide_EnqueueFunctor_FCHQueue_int64_t_int64_t arg) {
  chpl_here_free(((c_void_ptr)((&arg)->addr)));
  return;
}

/* ChapelBase.chpl:1227 */
static void on_fn151(chpl____wide_DequeueFunctor_FCHQueue_int64_t_int64_t arg) {
  chpl_here_free(((c_void_ptr)((&arg)->addr)));
  return;
}

/* ChapelBase.chpl:1227 */
static void on_fn129(chpl____wide_chpl_ModuleDeinit arg) {
  chpl_here_free(((c_void_ptr)((&arg)->addr)));
  return;
}

/* ChapelBase.chpl:1689 */
static chpl_ModuleDeinit _construct_chpl_ModuleDeinit(c_string moduleName,
                                                      c_fn_ptr deinitFun,
                                                      chpl____wide_chpl_ModuleDeinit prevModule,
                                                      chpl_ModuleDeinit meme) {
  chpl_ModuleDeinit this12 = NULL;
  this12 = meme;
  _construct_object(&((this12)->super));
  (this12)->moduleName = moduleName;
  (this12)->deinitFun = deinitFun;
  (this12)->prevModule = prevModule;
  return this12;
}

/* ChapelBase.chpl:1689 */
static void chpl__auto_destroy_chpl_ModuleDeinit(chpl____wide_chpl_ModuleDeinit this12) {
  return;
}

