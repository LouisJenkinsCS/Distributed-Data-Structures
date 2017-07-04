/* ChapelDistribution.chpl:20 */
static void chpl__deinit_ChapelDistribution(void) {
  _domain_DefaultRectangularDom_1_int64_t_F local_chpl_emptyLocaleSpace;
  _array_DefaultRectangularArr_locale_1_int64_t_F_int64_t local_chpl_emptyLocales;
  local_chpl_emptyLocaleSpace = chpl_emptyLocaleSpace;
  local_chpl_emptyLocales = chpl_emptyLocales;
  chpl__autoDestroy27(&local_chpl_emptyLocales);
  chpl__autoDestroy5(&local_chpl_emptyLocaleSpace);
  return;
}

/* ChapelDistribution.chpl:20 */
static void chpl__init_ChapelDistribution(int64_t _ln,
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
  chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_3991;
  chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_3992;
  chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_3993;
  if (chpl__init_ChapelDistribution_p) {
    goto _exit_chpl__init_ChapelDistribution;
  }
  printModuleInit("%*s\n", "ChapelDistribution", INT64(18));
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_ChapelDistribution_p = UINT8(true);
  {
    chpl__init_List(INT64(20), INT32(29));
    chpl__init_Sort(INT64(20), INT32(29));
  }
  chpl_addModule("ChapelDistribution", ((c_fn_ptr)(chpl__deinit_ChapelDistribution)));
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
  chpl_macro_tmp_3991.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_3991.addr = _ref_tmp_;
  T2 = chpl_macro_tmp_3991;
  chpl_macro_tmp_3992.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_3992.addr = &ret_tmp3;
  T3 = chpl_macro_tmp_3992;
  chpl___ASSIGN_3(T2, T3);
  chpl_emptyLocaleSpace = type_tmp;
  chpl_comm_broadcast_private(INT64(21), sizeof(_domain_DefaultRectangularDom_1_int64_t_F), -1);
  _ref_tmp_2 = &chpl_emptyLocaleSpace;
  chpl_macro_tmp_3993.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_3993.addr = _ref_tmp_2;
  T4 = chpl_macro_tmp_3993;
  call_tmp4 = chpl__ensureDomainExpr5(T4);
  i_dom = call_tmp4;
  call_tmp5 = chpl__buildArrayRuntimeType(i_dom);
  T5 = (&call_tmp5)->dom;
  _runtime_type_tmp_2 = T5;
  ret_to_arg_ref_tmp_4 = &retarg_tmp;
  chpl__convertRuntimeTypeToValue18(&_runtime_type_tmp_2, ret_to_arg_ref_tmp_4);
  ret_tmp4 = retarg_tmp;
  chpl_emptyLocales = ret_tmp4;
  chpl_comm_broadcast_private(INT64(22), sizeof(_array_DefaultRectangularArr_locale_1_int64_t_F_int64_t), -1);
  chpl__autoDestroy5(&call_tmp3);
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_ChapelDistribution:;
  return;
}

/* ChapelDistribution.chpl:30 */
static BaseDist _construct_BaseDist(_ref_list_BaseDom _doms,
                                    _ref_atomicbool _domsLock,
                                    chpl_bool _free_when_no_doms,
                                    int64_t pid,
                                    BaseDist meme) {
  BaseDist this12 = NULL;
  this12 = meme;
  _construct_object(&((this12)->super));
  (this12)->_doms = *(_doms);
  (this12)->_domsLock = *(_domsLock);
  (this12)->_free_when_no_doms = _free_when_no_doms;
  (this12)->pid = pid;
  return this12;
}

/* ChapelDistribution.chpl:40 */
static void deinit35(chpl____wide_BaseDist this12) {
  chpl____wide__ref_atomicbool _field_destructor_tmp_ = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_bool call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_atomic_bool T = NULL;
  chpl____wide__ref_list_BaseDom _field_destructor_tmp_2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomicbool chpl_macro_tmp_3994;
  chpl____wide__ref_atomic_bool chpl_macro_tmp_3995;
  chpl____wide__ref_atomic_bool chpl_macro_tmp_3996;
  chpl____wide__ref_list_BaseDom chpl_macro_tmp_3997;
  chpl_macro_tmp_3994.locale = (&this12)->locale;
  chpl_macro_tmp_3994.addr = &(((&this12)->addr)->_domsLock);
  _field_destructor_tmp_ = chpl_macro_tmp_3994;
  chpl_macro_tmp_3995.locale = (_field_destructor_tmp_).locale;
  chpl_macro_tmp_3995.addr = &(((_field_destructor_tmp_).addr)->_v);
  call_tmp2 = chpl_macro_tmp_3995;
  T = (&call_tmp2)->addr;
  atomic_destroy_bool(T);
  chpl_macro_tmp_3996.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_3996.addr = T;
  call_tmp2 = chpl_macro_tmp_3996;
  chpl_macro_tmp_3997.locale = (&this12)->locale;
  chpl_macro_tmp_3997.addr = &(((&this12)->addr)->_doms);
  _field_destructor_tmp_2 = chpl_macro_tmp_3997;
  deinit_chpl8(_field_destructor_tmp_2);
  return;
}

/* ChapelDistribution.chpl:45 */
static chpl____wide_BaseDist remove2(chpl____wide_BaseDist this12) {
  chpl____wide_BaseDist ret = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool free_dist;
  chpl_bool call_tmp2;
  chpl_localeID_t call_tmp3;
  _ref_chpl_bool T = NULL;
  chpl____wide_BaseDist rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect;
  chpl____wide__ref_chpl_bool T2 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn154 _args_foron_fn = NULL;
  _ref_chpl_bool T3 = NULL;
  chpl____wide__ref_chpl_bool T4 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn;
  BaseDist call_tmp4 = NULL;
  chpl____wide__ref_int32_t chpl_macro_tmp_3998;
  int32_t chpl_macro_tmp_3999;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_4000;
  chpl__class_localson_fn154_object chpl_macro_tmp_4001;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_4002;
  chpl____wide_BaseDist chpl_macro_tmp_4003;
  free_dist = UINT8(false);
  chpl_macro_tmp_3998.locale = (&this12)->locale;
  chpl_macro_tmp_3998.addr = &(((object)((&this12)->addr))->chpl__cid);
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_3999)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_3998).locale), INT64(0), INT32(0)), (chpl_macro_tmp_3998).addr, sizeof(int32_t), -1, COMMID(0), INT64(47), INT64(29));
  call_tmp2 = ((chpl_bool(*)(chpl____wide_BaseDist))chpl_vmtable[((INT64(9) * chpl_macro_tmp_3999) + INT64(1))])(this12);
  if (call_tmp2) {
    call_tmp3 = (&this12)->locale;
    T = &free_dist;
    rvfDerefTmp = this12;
    isdirect = chpl_doDirectExecuteOn(&call_tmp3);
    if (isdirect) {
      chpl_macro_tmp_4000.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_4000.addr = T;
      T2 = chpl_macro_tmp_4000;
      on_fn154(rvfDerefTmp, T2);
    } else {
      _args_foron_fn = ((_class_localson_fn154)(&chpl_macro_tmp_4001));
      (_args_foron_fn)->_0_rvfDerefTmp = call_tmp3;
      (_args_foron_fn)->_1_rvfDerefTmp = rvfDerefTmp;
      T3 = &free_dist;
      chpl_macro_tmp_4002.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_4002.addr = T3;
      T4 = chpl_macro_tmp_4002;
      (_args_foron_fn)->_2_tmp = T4;
      _args_vforon_fn = ((void*)(_args_foron_fn));
      /*** wrapon_fn154 ***/ chpl_executeOn(&call_tmp3, INT32(219), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn154_object), INT64(48), INT32(29));
    }
  } else {
    free_dist = UINT8(true);
  }
  if (free_dist) {
    ret = this12;
    goto _end_remove;
  } else {
    call_tmp4 = ((BaseDist)(nil));
    chpl_macro_tmp_4003.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_4003.addr = call_tmp4;
    ret = chpl_macro_tmp_4003;
    goto _end_remove;
  }
  _end_remove:;
  return ret;
}

/* ChapelDistribution.chpl:48 */
static void on_fn154(chpl____wide_BaseDist this12,
                     chpl____wide__ref_chpl_bool free_dist) {
  memory_order local_memory_order_seq_cst;
  chpl____wide_BaseDist rvfRerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool T;
  chpl____wide__ref_atomicbool call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  BaseDist local_rvfRerefTmp = NULL;
  memory_order default_argorder;
  chpl_bool ret;
  chpl_localeID_t call_tmp3;
  chpl____wide__ref_atomicbool T2 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_chpl_bool T3 = NULL;
  chpl_bool isdirect;
  chpl____wide__ref_chpl_bool T4 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn3 _args_foron_fn = NULL;
  chpl____wide__ref_atomicbool T5 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_chpl_bool T6 = NULL;
  chpl____wide__ref_chpl_bool T7 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn;
  chpl____wide__ref_atomicbool call_tmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  BaseDist local_rvfRerefTmp2 = NULL;
  memory_order default_argorder2;
  chpl_bool ret2;
  chpl_localeID_t call_tmp5;
  chpl____wide__ref_atomicbool T8 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_chpl_bool T9 = NULL;
  chpl_bool isdirect2;
  chpl____wide__ref_chpl_bool T10 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn3 _args_foron_fn2 = NULL;
  chpl____wide__ref_atomicbool T11 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_chpl_bool T12 = NULL;
  chpl____wide__ref_chpl_bool T13 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn2;
  chpl____wide_BaseDist rvfRerefTmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  BaseDist local_rvfRerefTmp3 = NULL;
  chpl____wide_BaseDist rvfRerefTmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_list_BaseDom call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  BaseDist local_rvfRerefTmp4 = NULL;
  int64_t call_tmp7;
  chpl____wide_BaseDist rvfRerefTmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomicbool call_tmp8 = {CHPL_LOCALEID_T_INIT, NULL};
  BaseDist local_rvfRerefTmp5 = NULL;
  memory_order default_argorder3;
  chpl_localeID_t call_tmp9;
  chpl____wide__ref_atomicbool T14 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect3;
  _class_localson_fn4 _args_foron_fn3 = NULL;
  chpl____wide__ref_atomicbool T15 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn3;
  chpl_bool call_tmp10;
  chpl____wide__ref_atomicbool chpl_macro_tmp_4004;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_4005;
  chpl__class_localson_fn3_object chpl_macro_tmp_4006;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_4007;
  chpl____wide__ref_atomicbool chpl_macro_tmp_4008;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_4009;
  chpl__class_localson_fn3_object chpl_macro_tmp_4010;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_4011;
  chpl____wide__ref_list_BaseDom chpl_macro_tmp_4012;
  chpl____wide__ref_atomicbool chpl_macro_tmp_4013;
  chpl__class_localson_fn4_object chpl_macro_tmp_4014;
  chpl_bool chpl_macro_tmp_4015;
  local_memory_order_seq_cst = memory_order_seq_cst;
  /* local block */
  {
    rvfRerefTmp = this12;
    local_rvfRerefTmp = (&rvfRerefTmp)->addr;
    chpl_macro_tmp_4004.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_4004.addr = &((local_rvfRerefTmp)->_domsLock);
    call_tmp2 = chpl_macro_tmp_4004;
    default_argorder = local_memory_order_seq_cst;
    ret = UINT8(false);
    call_tmp3 = (&call_tmp2)->locale;
    T2 = call_tmp2;
    T3 = &ret;
    isdirect = _local_chpl_doDirectExecuteOn(&call_tmp3);
    if (isdirect) {
      chpl_macro_tmp_4005.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_4005.addr = T3;
      T4 = chpl_macro_tmp_4005;
      _local_on_fn(T2, default_argorder, T4);
    } else {
      _args_foron_fn = ((_class_localson_fn3)(&chpl_macro_tmp_4006));
      (_args_foron_fn)->_0_rvfDerefTmp = call_tmp3;
      T5 = call_tmp2;
      (_args_foron_fn)->_1_tmp = T5;
      (_args_foron_fn)->_2_rvfDerefTmp = default_argorder;
      T6 = &ret;
      chpl_macro_tmp_4007.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_4007.addr = T6;
      T7 = chpl_macro_tmp_4007;
      (_args_foron_fn)->_3_tmp = T7;
      _args_vforon_fn = ((void*)(_args_foron_fn));
      /*** _local_wrapon_fn ***/ chpl_executeOnFast(&call_tmp3, INT32(2), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn3_object), INT64(384), INT32(12));
    }
    T = ret;
    while (T) {
      chpl_task_yield();
      local_rvfRerefTmp2 = (&rvfRerefTmp)->addr;
      chpl_macro_tmp_4008.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_4008.addr = &((local_rvfRerefTmp2)->_domsLock);
      call_tmp4 = chpl_macro_tmp_4008;
      default_argorder2 = local_memory_order_seq_cst;
      ret2 = UINT8(false);
      call_tmp5 = (&call_tmp4)->locale;
      T8 = call_tmp4;
      T9 = &ret2;
      isdirect2 = _local_chpl_doDirectExecuteOn(&call_tmp5);
      if (isdirect2) {
        chpl_macro_tmp_4009.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_4009.addr = T9;
        T10 = chpl_macro_tmp_4009;
        _local_on_fn(T8, default_argorder2, T10);
      } else {
        _args_foron_fn2 = ((_class_localson_fn3)(&chpl_macro_tmp_4010));
        (_args_foron_fn2)->_0_rvfDerefTmp = call_tmp5;
        T11 = call_tmp4;
        (_args_foron_fn2)->_1_tmp = T11;
        (_args_foron_fn2)->_2_rvfDerefTmp = default_argorder2;
        T12 = &ret2;
        chpl_macro_tmp_4011.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_4011.addr = T12;
        T13 = chpl_macro_tmp_4011;
        (_args_foron_fn2)->_3_tmp = T13;
        _args_vforon_fn2 = ((void*)(_args_foron_fn2));
        /*** _local_wrapon_fn ***/ chpl_executeOnFast(&call_tmp5, INT32(2), ((chpl_comm_on_bundle_p)(_args_vforon_fn2)), sizeof(chpl__class_localson_fn3_object), INT64(384), INT32(12));
      }
      T = ret2;
    }
    rvfRerefTmp2 = this12;
    local_rvfRerefTmp3 = (&rvfRerefTmp2)->addr;
    (local_rvfRerefTmp3)->_free_when_no_doms = UINT8(true);
    rvfRerefTmp3 = this12;
    local_rvfRerefTmp4 = (&rvfRerefTmp3)->addr;
    chpl_macro_tmp_4012.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_4012.addr = &((local_rvfRerefTmp4)->_doms);
    call_tmp6 = chpl_macro_tmp_4012;
    call_tmp7 = _local_size_chpl(call_tmp6);
    rvfRerefTmp4 = this12;
    local_rvfRerefTmp5 = (&rvfRerefTmp4)->addr;
    chpl_macro_tmp_4013.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_4013.addr = &((local_rvfRerefTmp5)->_domsLock);
    call_tmp8 = chpl_macro_tmp_4013;
    default_argorder3 = local_memory_order_seq_cst;
    call_tmp9 = (&call_tmp8)->locale;
    T14 = call_tmp8;
    isdirect3 = _local_chpl_doDirectExecuteOn(&call_tmp9);
    if (isdirect3) {
      _local_on_fn2(T14, default_argorder3);
    } else {
      _args_foron_fn3 = ((_class_localson_fn4)(&chpl_macro_tmp_4014));
      (_args_foron_fn3)->_0_rvfDerefTmp = call_tmp9;
      T15 = call_tmp8;
      (_args_foron_fn3)->_1_tmp = T15;
      (_args_foron_fn3)->_2_rvfDerefTmp = default_argorder3;
      _args_vforon_fn3 = ((void*)(_args_foron_fn3));
      /*** _local_wrapon_fn2 ***/ chpl_executeOnFast(&call_tmp9, INT32(4), ((chpl_comm_on_bundle_p)(_args_vforon_fn3)), sizeof(chpl__class_localson_fn4_object), INT64(392), INT32(12));
    }
  }
  call_tmp10 = (call_tmp7 == INT64(0));
  if (call_tmp10) {
    chpl_macro_tmp_4015 = UINT8(true);
    chpl_gen_comm_put(((void*)(&chpl_macro_tmp_4015)), chpl_nodeFromLocaleID(&((free_dist).locale), INT64(0), INT32(0)), (free_dist).addr, sizeof(chpl_bool), -1, COMMID(1), INT64(59), INT64(29));
  }
  return;
}

/* ChapelDistribution.chpl:48 */
static void wrapon_fn154(_class_localson_fn154 c) {
  chpl____wide_BaseDist _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_chpl_bool _2_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  _2_tmp = (c)->_2_tmp;
  on_fn154(_1_rvfDerefTmp, _2_tmp);
  return;
}

/* ChapelDistribution.chpl:75 */
static void wrapon_fn155(_class_localson_fn155 c) {
  chpl____wide_BaseDist _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDom _2_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_int64_t _3_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  _2_rvfDerefTmp = (c)->_2_rvfDerefTmp;
  _3_tmp = (c)->_3_tmp;
  on_fn155(_1_rvfDerefTmp, _2_rvfDerefTmp, _3_tmp);
  return;
}

/* ChapelDistribution.chpl:75 */
static void on_fn155(chpl____wide_BaseDist this12,
                     chpl____wide_BaseDom x,
                     chpl____wide__ref_int64_t count) {
  memory_order local_memory_order_seq_cst;
  int64_t cnt;
  chpl____wide_BaseDist rvfRerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool T;
  chpl____wide__ref_atomicbool call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  BaseDist local_rvfRerefTmp = NULL;
  memory_order default_argorder;
  chpl_bool ret;
  chpl_localeID_t call_tmp3;
  chpl____wide__ref_atomicbool T2 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_chpl_bool T3 = NULL;
  chpl_bool isdirect;
  chpl____wide__ref_chpl_bool T4 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn3 _args_foron_fn = NULL;
  chpl____wide__ref_atomicbool T5 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_chpl_bool T6 = NULL;
  chpl____wide__ref_chpl_bool T7 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn;
  chpl____wide__ref_atomicbool call_tmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  BaseDist local_rvfRerefTmp2 = NULL;
  memory_order default_argorder2;
  chpl_bool ret2;
  chpl_localeID_t call_tmp5;
  chpl____wide__ref_atomicbool T8 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_chpl_bool T9 = NULL;
  chpl_bool isdirect2;
  chpl____wide__ref_chpl_bool T10 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn3 _args_foron_fn2 = NULL;
  chpl____wide__ref_atomicbool T11 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_chpl_bool T12 = NULL;
  chpl____wide__ref_chpl_bool T13 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn2;
  chpl____wide_BaseDist rvfRerefTmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_list_BaseDom call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  BaseDist local_rvfRerefTmp3 = NULL;
  chpl____wide_BaseDist rvfRerefTmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_list_BaseDom call_tmp7 = {CHPL_LOCALEID_T_INIT, NULL};
  BaseDist local_rvfRerefTmp4 = NULL;
  int64_t call_tmp8;
  chpl____wide_BaseDist rvfRerefTmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  BaseDist local_rvfRerefTmp5 = NULL;
  chpl_bool call_tmp9;
  _ref_int64_t _ref_tmp_ = NULL;
  chpl____wide_BaseDist rvfRerefTmp5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomicbool call_tmp10 = {CHPL_LOCALEID_T_INIT, NULL};
  BaseDist local_rvfRerefTmp6 = NULL;
  memory_order default_argorder3;
  chpl_localeID_t call_tmp11;
  chpl____wide__ref_atomicbool T14 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect3;
  _class_localson_fn4 _args_foron_fn3 = NULL;
  chpl____wide__ref_atomicbool T15 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn3;
  chpl____wide__ref_atomicbool chpl_macro_tmp_4016;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_4017;
  chpl__class_localson_fn3_object chpl_macro_tmp_4018;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_4019;
  chpl____wide__ref_atomicbool chpl_macro_tmp_4020;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_4021;
  chpl__class_localson_fn3_object chpl_macro_tmp_4022;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_4023;
  chpl____wide__ref_list_BaseDom chpl_macro_tmp_4024;
  chpl____wide__ref_list_BaseDom chpl_macro_tmp_4025;
  chpl____wide__ref_atomicbool chpl_macro_tmp_4026;
  chpl__class_localson_fn4_object chpl_macro_tmp_4027;
  local_memory_order_seq_cst = memory_order_seq_cst;
  /* local block */
  {
    rvfRerefTmp = this12;
    local_rvfRerefTmp = (&rvfRerefTmp)->addr;
    chpl_macro_tmp_4016.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_4016.addr = &((local_rvfRerefTmp)->_domsLock);
    call_tmp2 = chpl_macro_tmp_4016;
    default_argorder = local_memory_order_seq_cst;
    ret = UINT8(false);
    call_tmp3 = (&call_tmp2)->locale;
    T2 = call_tmp2;
    T3 = &ret;
    isdirect = _local_chpl_doDirectExecuteOn(&call_tmp3);
    if (isdirect) {
      chpl_macro_tmp_4017.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_4017.addr = T3;
      T4 = chpl_macro_tmp_4017;
      _local_on_fn(T2, default_argorder, T4);
    } else {
      _args_foron_fn = ((_class_localson_fn3)(&chpl_macro_tmp_4018));
      (_args_foron_fn)->_0_rvfDerefTmp = call_tmp3;
      T5 = call_tmp2;
      (_args_foron_fn)->_1_tmp = T5;
      (_args_foron_fn)->_2_rvfDerefTmp = default_argorder;
      T6 = &ret;
      chpl_macro_tmp_4019.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_4019.addr = T6;
      T7 = chpl_macro_tmp_4019;
      (_args_foron_fn)->_3_tmp = T7;
      _args_vforon_fn = ((void*)(_args_foron_fn));
      /*** _local_wrapon_fn ***/ chpl_executeOnFast(&call_tmp3, INT32(2), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn3_object), INT64(384), INT32(12));
    }
    T = ret;
    while (T) {
      chpl_task_yield();
      local_rvfRerefTmp2 = (&rvfRerefTmp)->addr;
      chpl_macro_tmp_4020.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_4020.addr = &((local_rvfRerefTmp2)->_domsLock);
      call_tmp4 = chpl_macro_tmp_4020;
      default_argorder2 = local_memory_order_seq_cst;
      ret2 = UINT8(false);
      call_tmp5 = (&call_tmp4)->locale;
      T8 = call_tmp4;
      T9 = &ret2;
      isdirect2 = _local_chpl_doDirectExecuteOn(&call_tmp5);
      if (isdirect2) {
        chpl_macro_tmp_4021.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_4021.addr = T9;
        T10 = chpl_macro_tmp_4021;
        _local_on_fn(T8, default_argorder2, T10);
      } else {
        _args_foron_fn2 = ((_class_localson_fn3)(&chpl_macro_tmp_4022));
        (_args_foron_fn2)->_0_rvfDerefTmp = call_tmp5;
        T11 = call_tmp4;
        (_args_foron_fn2)->_1_tmp = T11;
        (_args_foron_fn2)->_2_rvfDerefTmp = default_argorder2;
        T12 = &ret2;
        chpl_macro_tmp_4023.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_4023.addr = T12;
        T13 = chpl_macro_tmp_4023;
        (_args_foron_fn2)->_3_tmp = T13;
        _args_vforon_fn2 = ((void*)(_args_foron_fn2));
        /*** _local_wrapon_fn ***/ chpl_executeOnFast(&call_tmp5, INT32(2), ((chpl_comm_on_bundle_p)(_args_vforon_fn2)), sizeof(chpl__class_localson_fn3_object), INT64(384), INT32(12));
      }
      T = ret2;
    }
    rvfRerefTmp2 = this12;
    local_rvfRerefTmp3 = (&rvfRerefTmp2)->addr;
    chpl_macro_tmp_4024.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_4024.addr = &((local_rvfRerefTmp3)->_doms);
    call_tmp6 = chpl_macro_tmp_4024;
    _local_remove_chpl(call_tmp6, x);
    rvfRerefTmp3 = this12;
    local_rvfRerefTmp4 = (&rvfRerefTmp3)->addr;
    chpl_macro_tmp_4025.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_4025.addr = &((local_rvfRerefTmp4)->_doms);
    call_tmp7 = chpl_macro_tmp_4025;
    call_tmp8 = _local_size_chpl(call_tmp7);
    cnt = call_tmp8;
    rvfRerefTmp4 = this12;
    local_rvfRerefTmp5 = (&rvfRerefTmp4)->addr;
    call_tmp9 = (! (local_rvfRerefTmp5)->_free_when_no_doms);
    if (call_tmp9) {
      _ref_tmp_ = &cnt;
      *(_ref_tmp_) += INT64(1);
    }
    rvfRerefTmp5 = this12;
    local_rvfRerefTmp6 = (&rvfRerefTmp5)->addr;
    chpl_macro_tmp_4026.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_4026.addr = &((local_rvfRerefTmp6)->_domsLock);
    call_tmp10 = chpl_macro_tmp_4026;
    default_argorder3 = local_memory_order_seq_cst;
    call_tmp11 = (&call_tmp10)->locale;
    T14 = call_tmp10;
    isdirect3 = _local_chpl_doDirectExecuteOn(&call_tmp11);
    if (isdirect3) {
      _local_on_fn2(T14, default_argorder3);
    } else {
      _args_foron_fn3 = ((_class_localson_fn4)(&chpl_macro_tmp_4027));
      (_args_foron_fn3)->_0_rvfDerefTmp = call_tmp11;
      T15 = call_tmp10;
      (_args_foron_fn3)->_1_tmp = T15;
      (_args_foron_fn3)->_2_rvfDerefTmp = default_argorder3;
      _args_vforon_fn3 = ((void*)(_args_foron_fn3));
      /*** _local_wrapon_fn2 ***/ chpl_executeOnFast(&call_tmp11, INT32(4), ((chpl_comm_on_bundle_p)(_args_vforon_fn3)), sizeof(chpl__class_localson_fn4_object), INT64(392), INT32(12));
    }
  }
  chpl_gen_comm_put(((void*)(&cnt)), chpl_nodeFromLocaleID(&((count).locale), INT64(0), INT32(0)), (count).addr, sizeof(int64_t), -1, COMMID(2), INT64(88), INT64(29));
  return;
}

/* ChapelDistribution.chpl:106 */
static void wrapon_fn156(_class_localson_fn156 c) {
  chpl____wide_BaseDist _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDom _2_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  _2_rvfDerefTmp = (c)->_2_rvfDerefTmp;
  on_fn156(_1_rvfDerefTmp, _2_rvfDerefTmp);
  return;
}

/* ChapelDistribution.chpl:106 */
static void on_fn156(chpl____wide_BaseDist this12,
                     chpl____wide_BaseDom x) {
  memory_order local_memory_order_seq_cst;
  chpl____wide_BaseDist rvfRerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool T;
  chpl____wide__ref_atomicbool call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order default_argorder;
  chpl_bool ret;
  chpl_localeID_t call_tmp3;
  chpl____wide__ref_atomicbool T2 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_chpl_bool T3 = NULL;
  chpl_bool isdirect;
  chpl____wide__ref_chpl_bool T4 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn3 _args_foron_fn = NULL;
  chpl____wide__ref_atomicbool T5 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_chpl_bool T6 = NULL;
  chpl____wide__ref_chpl_bool T7 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn;
  chpl____wide__ref_atomicbool call_tmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order default_argorder2;
  chpl_bool ret2;
  chpl_localeID_t call_tmp5;
  chpl____wide__ref_atomicbool T8 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_chpl_bool T9 = NULL;
  chpl_bool isdirect2;
  chpl____wide__ref_chpl_bool T10 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn3 _args_foron_fn2 = NULL;
  chpl____wide__ref_atomicbool T11 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_chpl_bool T12 = NULL;
  chpl____wide__ref_chpl_bool T13 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn2;
  chpl____wide_BaseDist rvfRerefTmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_list_BaseDom call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDist rvfRerefTmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomicbool call_tmp7 = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order default_argorder3;
  chpl_localeID_t call_tmp8;
  chpl____wide__ref_atomicbool T14 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect3;
  _class_localson_fn4 _args_foron_fn3 = NULL;
  chpl____wide__ref_atomicbool T15 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn3;
  chpl____wide__ref_atomicbool chpl_macro_tmp_4028;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_4029;
  chpl__class_localson_fn3_object chpl_macro_tmp_4030;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_4031;
  chpl____wide__ref_atomicbool chpl_macro_tmp_4032;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_4033;
  chpl__class_localson_fn3_object chpl_macro_tmp_4034;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_4035;
  chpl____wide__ref_list_BaseDom chpl_macro_tmp_4036;
  chpl____wide__ref_atomicbool chpl_macro_tmp_4037;
  chpl__class_localson_fn4_object chpl_macro_tmp_4038;
  local_memory_order_seq_cst = memory_order_seq_cst;
  rvfRerefTmp = this12;
  chpl_macro_tmp_4028.locale = (&rvfRerefTmp)->locale;
  chpl_macro_tmp_4028.addr = &(((&rvfRerefTmp)->addr)->_domsLock);
  call_tmp2 = chpl_macro_tmp_4028;
  default_argorder = local_memory_order_seq_cst;
  ret = UINT8(false);
  call_tmp3 = (&call_tmp2)->locale;
  T2 = call_tmp2;
  T3 = &ret;
  isdirect = chpl_doDirectExecuteOn(&call_tmp3);
  if (isdirect) {
    chpl_macro_tmp_4029.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_4029.addr = T3;
    T4 = chpl_macro_tmp_4029;
    on_fn3(T2, default_argorder, T4);
  } else {
    _args_foron_fn = ((_class_localson_fn3)(&chpl_macro_tmp_4030));
    (_args_foron_fn)->_0_rvfDerefTmp = call_tmp3;
    T5 = call_tmp2;
    (_args_foron_fn)->_1_tmp = T5;
    (_args_foron_fn)->_2_rvfDerefTmp = default_argorder;
    T6 = &ret;
    chpl_macro_tmp_4031.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_4031.addr = T6;
    T7 = chpl_macro_tmp_4031;
    (_args_foron_fn)->_3_tmp = T7;
    _args_vforon_fn = ((void*)(_args_foron_fn));
    /*** wrapon_fn3 ***/ chpl_executeOn(&call_tmp3, INT32(3), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn3_object), INT64(384), INT32(12));
  }
  T = ret;
  while (T) {
    chpl_task_yield();
    chpl_macro_tmp_4032.locale = (&rvfRerefTmp)->locale;
    chpl_macro_tmp_4032.addr = &(((&rvfRerefTmp)->addr)->_domsLock);
    call_tmp4 = chpl_macro_tmp_4032;
    default_argorder2 = local_memory_order_seq_cst;
    ret2 = UINT8(false);
    call_tmp5 = (&call_tmp4)->locale;
    T8 = call_tmp4;
    T9 = &ret2;
    isdirect2 = chpl_doDirectExecuteOn(&call_tmp5);
    if (isdirect2) {
      chpl_macro_tmp_4033.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_4033.addr = T9;
      T10 = chpl_macro_tmp_4033;
      on_fn3(T8, default_argorder2, T10);
    } else {
      _args_foron_fn2 = ((_class_localson_fn3)(&chpl_macro_tmp_4034));
      (_args_foron_fn2)->_0_rvfDerefTmp = call_tmp5;
      T11 = call_tmp4;
      (_args_foron_fn2)->_1_tmp = T11;
      (_args_foron_fn2)->_2_rvfDerefTmp = default_argorder2;
      T12 = &ret2;
      chpl_macro_tmp_4035.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_4035.addr = T12;
      T13 = chpl_macro_tmp_4035;
      (_args_foron_fn2)->_3_tmp = T13;
      _args_vforon_fn2 = ((void*)(_args_foron_fn2));
      /*** wrapon_fn3 ***/ chpl_executeOn(&call_tmp5, INT32(3), ((chpl_comm_on_bundle_p)(_args_vforon_fn2)), sizeof(chpl__class_localson_fn3_object), INT64(384), INT32(12));
    }
    T = ret2;
  }
  rvfRerefTmp2 = this12;
  chpl_macro_tmp_4036.locale = (&rvfRerefTmp2)->locale;
  chpl_macro_tmp_4036.addr = &(((&rvfRerefTmp2)->addr)->_doms);
  call_tmp6 = chpl_macro_tmp_4036;
  append_chpl3(call_tmp6, x);
  rvfRerefTmp3 = this12;
  chpl_macro_tmp_4037.locale = (&rvfRerefTmp3)->locale;
  chpl_macro_tmp_4037.addr = &(((&rvfRerefTmp3)->addr)->_domsLock);
  call_tmp7 = chpl_macro_tmp_4037;
  default_argorder3 = local_memory_order_seq_cst;
  call_tmp8 = (&call_tmp7)->locale;
  T14 = call_tmp7;
  isdirect3 = chpl_doDirectExecuteOn(&call_tmp8);
  if (isdirect3) {
    on_fn4(T14, default_argorder3);
  } else {
    _args_foron_fn3 = ((_class_localson_fn4)(&chpl_macro_tmp_4038));
    (_args_foron_fn3)->_0_rvfDerefTmp = call_tmp8;
    T15 = call_tmp7;
    (_args_foron_fn3)->_1_tmp = T15;
    (_args_foron_fn3)->_2_rvfDerefTmp = default_argorder3;
    _args_vforon_fn3 = ((void*)(_args_foron_fn3));
    /*** wrapon_fn4 ***/ chpl_executeOnFast(&call_tmp8, INT32(5), ((chpl_comm_on_bundle_p)(_args_vforon_fn3)), sizeof(chpl__class_localson_fn4_object), INT64(392), INT32(12));
  }
  return;
}

/* ChapelDistribution.chpl:149 */
static void dsiDestroyDist(chpl____wide_BaseDist this12) {
  return;
}

/* ChapelDistribution.chpl:158 */
static chpl_bool dsiTrackDomains(chpl____wide_BaseDist this12) {
  return UINT8(true);
}

/* ChapelDistribution.chpl:170 */
static BaseDom _construct_BaseDom(_ref_list_BaseArr _arrs,
                                  int64_t _arrs_containing_dom,
                                  _ref_atomicbool _arrsLock,
                                  chpl_bool _free_when_no_arrs,
                                  int64_t pid,
                                  BaseDom meme) {
  BaseDom this12 = NULL;
  this12 = meme;
  _construct_object(&((this12)->super));
  (this12)->_arrs = *(_arrs);
  (this12)->_arrs_containing_dom = _arrs_containing_dom;
  (this12)->_arrsLock = *(_arrsLock);
  (this12)->_free_when_no_arrs = _free_when_no_arrs;
  (this12)->pid = pid;
  return this12;
}

/* ChapelDistribution.chpl:182 */
static void deinit36(chpl____wide_BaseDom this12) {
  chpl____wide__ref_atomicbool _field_destructor_tmp_ = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_bool call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_atomic_bool T = NULL;
  chpl____wide__ref_list_BaseArr _field_destructor_tmp_2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomicbool chpl_macro_tmp_4039;
  chpl____wide__ref_atomic_bool chpl_macro_tmp_4040;
  chpl____wide__ref_atomic_bool chpl_macro_tmp_4041;
  chpl____wide__ref_list_BaseArr chpl_macro_tmp_4042;
  chpl_macro_tmp_4039.locale = (&this12)->locale;
  chpl_macro_tmp_4039.addr = &(((&this12)->addr)->_arrsLock);
  _field_destructor_tmp_ = chpl_macro_tmp_4039;
  chpl_macro_tmp_4040.locale = (_field_destructor_tmp_).locale;
  chpl_macro_tmp_4040.addr = &(((_field_destructor_tmp_).addr)->_v);
  call_tmp2 = chpl_macro_tmp_4040;
  T = (&call_tmp2)->addr;
  atomic_destroy_bool(T);
  chpl_macro_tmp_4041.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_4041.addr = T;
  call_tmp2 = chpl_macro_tmp_4041;
  chpl_macro_tmp_4042.locale = (&this12)->locale;
  chpl_macro_tmp_4042.addr = &(((&this12)->addr)->_arrs);
  _field_destructor_tmp_2 = chpl_macro_tmp_4042;
  deinit_chpl6(_field_destructor_tmp_2);
  return;
}

/* ChapelDistribution.chpl:185 */
static chpl____wide_BaseDist dsiMyDist(chpl____wide_BaseDom this12) {
  string local__str_literal_1589;
  chpl____wide_BaseDist call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  BaseDist T = NULL;
  chpl____wide_BaseDist chpl_macro_tmp_4043;
  local__str_literal_1589 /* "internal error: dsiMyDist is not implemented" */ = _str_literal_1589 /* "internal error: dsiMyDist is not implemented" */;
  halt(&local__str_literal_1589 /* "internal error: dsiMyDist is not implemented" */, INT64(186), INT32(29));
  T = ((BaseDist)(nil));
  chpl_macro_tmp_4043.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_4043.addr = T;
  call_tmp2 = chpl_macro_tmp_4043;
  return call_tmp2;
}

/* ChapelDistribution.chpl:194 */
static void remove3(chpl____wide_BaseDom this12,
                    _ref__tuple_2_BaseDom_BaseDist _retArg) {
  chpl____wide_BaseDist call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp3;
  chpl_bool call_tmp4;
  BaseDom T = NULL;
  chpl____wide_BaseDom ret_dom = {CHPL_LOCALEID_T_INIT, NULL};
  BaseDist T2 = NULL;
  chpl____wide_BaseDist ret_dist = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDist call_tmp5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool free_dom;
  chpl_bool remove_dist;
  chpl_localeID_t call_tmp6;
  _ref_chpl_bool T3 = NULL;
  _ref_chpl_bool T4 = NULL;
  chpl____wide_BaseDom rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDist rvfDerefTmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect;
  chpl____wide__ref_chpl_bool T5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_chpl_bool T6 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn157 _args_foron_fn = NULL;
  _ref_chpl_bool T7 = NULL;
  chpl____wide__ref_chpl_bool T8 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_chpl_bool T9 = NULL;
  chpl____wide__ref_chpl_bool T10 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn;
  chpl____wide__ref_int32_t chpl_macro_tmp_4044;
  int32_t chpl_macro_tmp_4045;
  chpl____wide__ref_int32_t chpl_macro_tmp_4046;
  int32_t chpl_macro_tmp_4047;
  chpl____wide__ref_int32_t chpl_macro_tmp_4048;
  int32_t chpl_macro_tmp_4049;
  chpl____wide_BaseDom chpl_macro_tmp_4050;
  chpl____wide_BaseDist chpl_macro_tmp_4051;
  chpl____wide__ref_int32_t chpl_macro_tmp_4052;
  int32_t chpl_macro_tmp_4053;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_4054;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_4055;
  chpl__class_localson_fn157_object chpl_macro_tmp_4056;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_4057;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_4058;
  chpl_macro_tmp_4044.locale = (&this12)->locale;
  chpl_macro_tmp_4044.addr = &(((object)((&this12)->addr))->chpl__cid);
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_4045)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4044).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4044).addr, sizeof(int32_t), -1, COMMID(3), INT64(197), INT64(29));
  call_tmp2 = ((chpl____wide_BaseDist(*)(chpl____wide_BaseDom))chpl_vmtable[((INT64(9) * chpl_macro_tmp_4045) + INT64(2))])(this12);
  chpl_macro_tmp_4046.locale = (&call_tmp2)->locale;
  chpl_macro_tmp_4046.addr = &(((object)((&call_tmp2)->addr))->chpl__cid);
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_4047)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4046).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4046).addr, sizeof(int32_t), -1, COMMID(4), INT64(197), INT64(29));
  call_tmp3 = ((chpl_bool(*)(chpl____wide_BaseDist))chpl_vmtable[((INT64(9) * chpl_macro_tmp_4047) + INT64(1))])(call_tmp2);
  chpl_macro_tmp_4048.locale = (&this12)->locale;
  chpl_macro_tmp_4048.addr = &(((object)((&this12)->addr))->chpl__cid);
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_4049)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4048).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4048).addr, sizeof(int32_t), -1, COMMID(5), INT64(197), INT64(29));
  call_tmp4 = ((chpl_bool(*)(chpl____wide_BaseDom))chpl_vmtable[((INT64(9) * chpl_macro_tmp_4049) + INT64(1))])(this12);
  assert_chpl((call_tmp3 == call_tmp4));
  T = nil;
  chpl_macro_tmp_4050.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_4050.addr = T;
  ret_dom = chpl_macro_tmp_4050;
  T2 = nil;
  chpl_macro_tmp_4051.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_4051.addr = T2;
  ret_dist = chpl_macro_tmp_4051;
  chpl_macro_tmp_4052.locale = (&this12)->locale;
  chpl_macro_tmp_4052.addr = &(((object)((&this12)->addr))->chpl__cid);
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_4053)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4052).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4052).addr, sizeof(int32_t), -1, COMMID(6), INT64(201), INT64(29));
  call_tmp5 = ((chpl____wide_BaseDist(*)(chpl____wide_BaseDom))chpl_vmtable[((INT64(9) * chpl_macro_tmp_4053) + INT64(2))])(this12);
  free_dom = UINT8(false);
  remove_dist = UINT8(false);
  call_tmp6 = (&this12)->locale;
  T3 = &free_dom;
  T4 = &remove_dist;
  rvfDerefTmp = this12;
  rvfDerefTmp2 = call_tmp5;
  isdirect = chpl_doDirectExecuteOn(&call_tmp6);
  if (isdirect) {
    chpl_macro_tmp_4054.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_4054.addr = T3;
    T5 = chpl_macro_tmp_4054;
    chpl_macro_tmp_4055.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_4055.addr = T4;
    T6 = chpl_macro_tmp_4055;
    on_fn157(rvfDerefTmp, T5, &rvfDerefTmp2, T6);
  } else {
    _args_foron_fn = ((_class_localson_fn157)(&chpl_macro_tmp_4056));
    (_args_foron_fn)->_0_rvfDerefTmp = call_tmp6;
    (_args_foron_fn)->_1_rvfDerefTmp = rvfDerefTmp;
    T7 = &free_dom;
    chpl_macro_tmp_4057.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_4057.addr = T7;
    T8 = chpl_macro_tmp_4057;
    (_args_foron_fn)->_2_tmp = T8;
    (_args_foron_fn)->_3_rvfDerefTmp = rvfDerefTmp2;
    T9 = &remove_dist;
    chpl_macro_tmp_4058.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_4058.addr = T9;
    T10 = chpl_macro_tmp_4058;
    (_args_foron_fn)->_4_tmp = T10;
    _args_vforon_fn = ((void*)(_args_foron_fn));
    /*** wrapon_fn157 ***/ chpl_executeOn(&call_tmp6, INT32(222), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn157_object), INT64(204), INT32(29));
  }
  if (free_dom) {
    ret_dom = this12;
  }
  if (remove_dist) {
    ret_dist = call_tmp5;
  }
  (_retArg)->x1 = ret_dom;
  (_retArg)->x2 = ret_dist;
  return;
}

/* ChapelDistribution.chpl:204 */
static void wrapon_fn157(_class_localson_fn157 c) {
  chpl____wide_BaseDom _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_chpl_bool _2_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDist _3_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_chpl_bool _4_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  _2_tmp = (c)->_2_tmp;
  _3_rvfDerefTmp = (c)->_3_rvfDerefTmp;
  _4_tmp = (c)->_4_tmp;
  on_fn157(_1_rvfDerefTmp, _2_tmp, &_3_rvfDerefTmp, _4_tmp);
  return;
}

/* ChapelDistribution.chpl:204 */
static void on_fn157(chpl____wide_BaseDom this12,
                     chpl____wide__ref_chpl_bool free_dom,
                     _ref__wide_BaseDist dist6,
                     chpl____wide__ref_chpl_bool remove_dist) {
  memory_order local_memory_order_seq_cst;
  int64_t arr_count;
  chpl____wide_BaseDom rvfRerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool T;
  chpl____wide__ref_atomicbool call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  BaseDom local_rvfRerefTmp = NULL;
  memory_order default_argorder;
  chpl_bool ret;
  chpl_localeID_t call_tmp3;
  chpl____wide__ref_atomicbool T2 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_chpl_bool T3 = NULL;
  chpl_bool isdirect;
  chpl____wide__ref_chpl_bool T4 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn3 _args_foron_fn = NULL;
  chpl____wide__ref_atomicbool T5 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_chpl_bool T6 = NULL;
  chpl____wide__ref_chpl_bool T7 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn;
  chpl____wide__ref_atomicbool call_tmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  BaseDom local_rvfRerefTmp2 = NULL;
  memory_order default_argorder2;
  chpl_bool ret2;
  chpl_localeID_t call_tmp5;
  chpl____wide__ref_atomicbool T8 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_chpl_bool T9 = NULL;
  chpl_bool isdirect2;
  chpl____wide__ref_chpl_bool T10 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn3 _args_foron_fn2 = NULL;
  chpl____wide__ref_atomicbool T11 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_chpl_bool T12 = NULL;
  chpl____wide__ref_chpl_bool T13 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn2;
  chpl____wide_BaseDom rvfRerefTmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_list_BaseArr call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  BaseDom local_rvfRerefTmp3 = NULL;
  int64_t call_tmp7;
  chpl____wide_BaseDom rvfRerefTmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t coerce_tmp;
  BaseDom local_rvfRerefTmp4 = NULL;
  _ref_int64_t _ref_tmp_ = NULL;
  chpl____wide_BaseDom rvfRerefTmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  BaseDom local_rvfRerefTmp5 = NULL;
  chpl____wide_BaseDom rvfRerefTmp5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomicbool call_tmp8 = {CHPL_LOCALEID_T_INIT, NULL};
  BaseDom local_rvfRerefTmp6 = NULL;
  memory_order default_argorder3;
  chpl_localeID_t call_tmp9;
  chpl____wide__ref_atomicbool T14 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect3;
  _class_localson_fn4 _args_foron_fn3 = NULL;
  chpl____wide__ref_atomicbool T15 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn3;
  chpl_bool call_tmp10;
  chpl_bool call_tmp11;
  chpl____wide_BaseDist T16 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t count;
  chpl_localeID_t call_tmp12;
  _ref_int64_t T17 = NULL;
  chpl____wide_BaseDist rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDom rvfDerefTmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect4;
  chpl____wide__ref_int64_t T18 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn155 _args_foron_fn4 = NULL;
  _ref_int64_t T19 = NULL;
  chpl____wide__ref_int64_t T20 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn4;
  chpl____wide__ref_atomicbool chpl_macro_tmp_4059;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_4060;
  chpl__class_localson_fn3_object chpl_macro_tmp_4061;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_4062;
  chpl____wide__ref_atomicbool chpl_macro_tmp_4063;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_4064;
  chpl__class_localson_fn3_object chpl_macro_tmp_4065;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_4066;
  chpl____wide__ref_list_BaseArr chpl_macro_tmp_4067;
  chpl____wide__ref_atomicbool chpl_macro_tmp_4068;
  chpl__class_localson_fn4_object chpl_macro_tmp_4069;
  chpl_bool chpl_macro_tmp_4070;
  chpl____wide__ref_int32_t chpl_macro_tmp_4071;
  int32_t chpl_macro_tmp_4072;
  chpl____wide__ref_int64_t chpl_macro_tmp_4073;
  chpl__class_localson_fn155_object chpl_macro_tmp_4074;
  chpl____wide__ref_int64_t chpl_macro_tmp_4075;
  chpl_bool chpl_macro_tmp_4076;
  local_memory_order_seq_cst = memory_order_seq_cst;
  /* local block */
  {
    rvfRerefTmp = this12;
    local_rvfRerefTmp = (&rvfRerefTmp)->addr;
    chpl_macro_tmp_4059.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_4059.addr = &((local_rvfRerefTmp)->_arrsLock);
    call_tmp2 = chpl_macro_tmp_4059;
    default_argorder = local_memory_order_seq_cst;
    ret = UINT8(false);
    call_tmp3 = (&call_tmp2)->locale;
    T2 = call_tmp2;
    T3 = &ret;
    isdirect = _local_chpl_doDirectExecuteOn(&call_tmp3);
    if (isdirect) {
      chpl_macro_tmp_4060.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_4060.addr = T3;
      T4 = chpl_macro_tmp_4060;
      _local_on_fn(T2, default_argorder, T4);
    } else {
      _args_foron_fn = ((_class_localson_fn3)(&chpl_macro_tmp_4061));
      (_args_foron_fn)->_0_rvfDerefTmp = call_tmp3;
      T5 = call_tmp2;
      (_args_foron_fn)->_1_tmp = T5;
      (_args_foron_fn)->_2_rvfDerefTmp = default_argorder;
      T6 = &ret;
      chpl_macro_tmp_4062.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_4062.addr = T6;
      T7 = chpl_macro_tmp_4062;
      (_args_foron_fn)->_3_tmp = T7;
      _args_vforon_fn = ((void*)(_args_foron_fn));
      /*** _local_wrapon_fn ***/ chpl_executeOnFast(&call_tmp3, INT32(2), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn3_object), INT64(384), INT32(12));
    }
    T = ret;
    while (T) {
      chpl_task_yield();
      local_rvfRerefTmp2 = (&rvfRerefTmp)->addr;
      chpl_macro_tmp_4063.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_4063.addr = &((local_rvfRerefTmp2)->_arrsLock);
      call_tmp4 = chpl_macro_tmp_4063;
      default_argorder2 = local_memory_order_seq_cst;
      ret2 = UINT8(false);
      call_tmp5 = (&call_tmp4)->locale;
      T8 = call_tmp4;
      T9 = &ret2;
      isdirect2 = _local_chpl_doDirectExecuteOn(&call_tmp5);
      if (isdirect2) {
        chpl_macro_tmp_4064.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_4064.addr = T9;
        T10 = chpl_macro_tmp_4064;
        _local_on_fn(T8, default_argorder2, T10);
      } else {
        _args_foron_fn2 = ((_class_localson_fn3)(&chpl_macro_tmp_4065));
        (_args_foron_fn2)->_0_rvfDerefTmp = call_tmp5;
        T11 = call_tmp4;
        (_args_foron_fn2)->_1_tmp = T11;
        (_args_foron_fn2)->_2_rvfDerefTmp = default_argorder2;
        T12 = &ret2;
        chpl_macro_tmp_4066.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_4066.addr = T12;
        T13 = chpl_macro_tmp_4066;
        (_args_foron_fn2)->_3_tmp = T13;
        _args_vforon_fn2 = ((void*)(_args_foron_fn2));
        /*** _local_wrapon_fn ***/ chpl_executeOnFast(&call_tmp5, INT32(2), ((chpl_comm_on_bundle_p)(_args_vforon_fn2)), sizeof(chpl__class_localson_fn3_object), INT64(384), INT32(12));
      }
      T = ret2;
    }
    rvfRerefTmp2 = this12;
    local_rvfRerefTmp3 = (&rvfRerefTmp2)->addr;
    chpl_macro_tmp_4067.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_4067.addr = &((local_rvfRerefTmp3)->_arrs);
    call_tmp6 = chpl_macro_tmp_4067;
    call_tmp7 = _local_size_chpl2(call_tmp6);
    arr_count = call_tmp7;
    rvfRerefTmp3 = this12;
    local_rvfRerefTmp4 = (&rvfRerefTmp3)->addr;
    coerce_tmp = (local_rvfRerefTmp4)->_arrs_containing_dom;
    _ref_tmp_ = &arr_count;
    *(_ref_tmp_) += coerce_tmp;
    rvfRerefTmp4 = this12;
    local_rvfRerefTmp5 = (&rvfRerefTmp4)->addr;
    (local_rvfRerefTmp5)->_free_when_no_arrs = UINT8(true);
    rvfRerefTmp5 = this12;
    local_rvfRerefTmp6 = (&rvfRerefTmp5)->addr;
    chpl_macro_tmp_4068.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_4068.addr = &((local_rvfRerefTmp6)->_arrsLock);
    call_tmp8 = chpl_macro_tmp_4068;
    default_argorder3 = local_memory_order_seq_cst;
    call_tmp9 = (&call_tmp8)->locale;
    T14 = call_tmp8;
    isdirect3 = _local_chpl_doDirectExecuteOn(&call_tmp9);
    if (isdirect3) {
      _local_on_fn2(T14, default_argorder3);
    } else {
      _args_foron_fn3 = ((_class_localson_fn4)(&chpl_macro_tmp_4069));
      (_args_foron_fn3)->_0_rvfDerefTmp = call_tmp9;
      T15 = call_tmp8;
      (_args_foron_fn3)->_1_tmp = T15;
      (_args_foron_fn3)->_2_rvfDerefTmp = default_argorder3;
      _args_vforon_fn3 = ((void*)(_args_foron_fn3));
      /*** _local_wrapon_fn2 ***/ chpl_executeOnFast(&call_tmp9, INT32(4), ((chpl_comm_on_bundle_p)(_args_vforon_fn3)), sizeof(chpl__class_localson_fn4_object), INT64(392), INT32(12));
    }
  }
  call_tmp10 = (arr_count == INT64(0));
  if (call_tmp10) {
    chpl_macro_tmp_4070 = UINT8(true);
    chpl_gen_comm_put(((void*)(&chpl_macro_tmp_4070)), chpl_nodeFromLocaleID(&((free_dom).locale), INT64(0), INT32(0)), (free_dom).addr, sizeof(chpl_bool), -1, COMMID(7), INT64(217), INT64(29));
    chpl_macro_tmp_4071.locale = (&this12)->locale;
    chpl_macro_tmp_4071.addr = &(((object)((&this12)->addr))->chpl__cid);
    chpl_gen_comm_get(((void*)(&chpl_macro_tmp_4072)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4071).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4071).addr, sizeof(int32_t), -1, COMMID(8), INT64(219), INT64(29));
    call_tmp11 = ((chpl_bool(*)(chpl____wide_BaseDom))chpl_vmtable[((INT64(9) * chpl_macro_tmp_4072) + INT64(1))])(this12);
    if (call_tmp11) {
      T16 = *(dist6);
      count = INT64(-1);
      call_tmp12 = (&T16)->locale;
      T17 = &count;
      rvfDerefTmp = T16;
      rvfDerefTmp2 = this12;
      isdirect4 = chpl_doDirectExecuteOn(&call_tmp12);
      if (isdirect4) {
        chpl_macro_tmp_4073.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_4073.addr = T17;
        T18 = chpl_macro_tmp_4073;
        on_fn155(rvfDerefTmp, rvfDerefTmp2, T18);
      } else {
        _args_foron_fn4 = ((_class_localson_fn155)(&chpl_macro_tmp_4074));
        (_args_foron_fn4)->_0_rvfDerefTmp = call_tmp12;
        (_args_foron_fn4)->_1_rvfDerefTmp = rvfDerefTmp;
        (_args_foron_fn4)->_2_rvfDerefTmp = rvfDerefTmp2;
        T19 = &count;
        chpl_macro_tmp_4075.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_4075.addr = T19;
        T20 = chpl_macro_tmp_4075;
        (_args_foron_fn4)->_3_tmp = T20;
        _args_vforon_fn4 = ((void*)(_args_foron_fn4));
        /*** wrapon_fn155 ***/ chpl_executeOn(&call_tmp12, INT32(220), ((chpl_comm_on_bundle_p)(_args_vforon_fn4)), sizeof(chpl__class_localson_fn155_object), INT64(75), INT32(29));
      }
      chpl_macro_tmp_4076 = (count == INT64(0));
      chpl_gen_comm_put(((void*)(&chpl_macro_tmp_4076)), chpl_nodeFromLocaleID(&((remove_dist).locale), INT64(0), INT32(0)), (remove_dist).addr, sizeof(chpl_bool), -1, COMMID(9), INT64(222), INT64(29));
    }
  }
  return;
}

/* ChapelDistribution.chpl:236 */
static void wrapon_fn158(_class_localson_fn158 c) {
  chpl____wide_BaseDom _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr _2_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_int64_t _3_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  _2_rvfDerefTmp = (c)->_2_rvfDerefTmp;
  _3_tmp = (c)->_3_tmp;
  on_fn158(_1_rvfDerefTmp, _2_rvfDerefTmp, _3_tmp);
  return;
}

/* ChapelDistribution.chpl:236 */
static void on_fn158(chpl____wide_BaseDom this12,
                     chpl____wide_BaseArr x,
                     chpl____wide__ref_int64_t count) {
  memory_order local_memory_order_seq_cst;
  int64_t cnt;
  chpl____wide_BaseDom rvfRerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool T;
  chpl____wide__ref_atomicbool call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  BaseDom local_rvfRerefTmp = NULL;
  memory_order default_argorder;
  chpl_bool ret;
  chpl_localeID_t call_tmp3;
  chpl____wide__ref_atomicbool T2 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_chpl_bool T3 = NULL;
  chpl_bool isdirect;
  chpl____wide__ref_chpl_bool T4 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn3 _args_foron_fn = NULL;
  chpl____wide__ref_atomicbool T5 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_chpl_bool T6 = NULL;
  chpl____wide__ref_chpl_bool T7 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn;
  chpl____wide__ref_atomicbool call_tmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  BaseDom local_rvfRerefTmp2 = NULL;
  memory_order default_argorder2;
  chpl_bool ret2;
  chpl_localeID_t call_tmp5;
  chpl____wide__ref_atomicbool T8 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_chpl_bool T9 = NULL;
  chpl_bool isdirect2;
  chpl____wide__ref_chpl_bool T10 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn3 _args_foron_fn2 = NULL;
  chpl____wide__ref_atomicbool T11 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_chpl_bool T12 = NULL;
  chpl____wide__ref_chpl_bool T13 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn2;
  chpl____wide_BaseDom rvfRerefTmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_list_BaseArr call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  BaseDom local_rvfRerefTmp3 = NULL;
  chpl____wide_BaseDom rvfRerefTmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_list_BaseArr call_tmp7 = {CHPL_LOCALEID_T_INIT, NULL};
  BaseDom local_rvfRerefTmp4 = NULL;
  int64_t call_tmp8;
  chpl____wide_BaseDom rvfRerefTmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  BaseDom local_rvfRerefTmp5 = NULL;
  _ref_int64_t _ref_tmp_ = NULL;
  chpl____wide_BaseDom rvfRerefTmp5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool coerce_tmp;
  BaseDom local_rvfRerefTmp6 = NULL;
  chpl_bool call_tmp9;
  _ref_int64_t _ref_tmp_2 = NULL;
  chpl____wide_BaseDom rvfRerefTmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomicbool call_tmp10 = {CHPL_LOCALEID_T_INIT, NULL};
  BaseDom local_rvfRerefTmp7 = NULL;
  memory_order default_argorder3;
  chpl_localeID_t call_tmp11;
  chpl____wide__ref_atomicbool T14 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect3;
  _class_localson_fn4 _args_foron_fn3 = NULL;
  chpl____wide__ref_atomicbool T15 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn3;
  chpl____wide__ref_atomicbool chpl_macro_tmp_4077;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_4078;
  chpl__class_localson_fn3_object chpl_macro_tmp_4079;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_4080;
  chpl____wide__ref_atomicbool chpl_macro_tmp_4081;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_4082;
  chpl__class_localson_fn3_object chpl_macro_tmp_4083;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_4084;
  chpl____wide__ref_list_BaseArr chpl_macro_tmp_4085;
  chpl____wide__ref_list_BaseArr chpl_macro_tmp_4086;
  chpl____wide__ref_atomicbool chpl_macro_tmp_4087;
  chpl__class_localson_fn4_object chpl_macro_tmp_4088;
  local_memory_order_seq_cst = memory_order_seq_cst;
  /* local block */
  {
    rvfRerefTmp = this12;
    local_rvfRerefTmp = (&rvfRerefTmp)->addr;
    chpl_macro_tmp_4077.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_4077.addr = &((local_rvfRerefTmp)->_arrsLock);
    call_tmp2 = chpl_macro_tmp_4077;
    default_argorder = local_memory_order_seq_cst;
    ret = UINT8(false);
    call_tmp3 = (&call_tmp2)->locale;
    T2 = call_tmp2;
    T3 = &ret;
    isdirect = _local_chpl_doDirectExecuteOn(&call_tmp3);
    if (isdirect) {
      chpl_macro_tmp_4078.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_4078.addr = T3;
      T4 = chpl_macro_tmp_4078;
      _local_on_fn(T2, default_argorder, T4);
    } else {
      _args_foron_fn = ((_class_localson_fn3)(&chpl_macro_tmp_4079));
      (_args_foron_fn)->_0_rvfDerefTmp = call_tmp3;
      T5 = call_tmp2;
      (_args_foron_fn)->_1_tmp = T5;
      (_args_foron_fn)->_2_rvfDerefTmp = default_argorder;
      T6 = &ret;
      chpl_macro_tmp_4080.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_4080.addr = T6;
      T7 = chpl_macro_tmp_4080;
      (_args_foron_fn)->_3_tmp = T7;
      _args_vforon_fn = ((void*)(_args_foron_fn));
      /*** _local_wrapon_fn ***/ chpl_executeOnFast(&call_tmp3, INT32(2), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn3_object), INT64(384), INT32(12));
    }
    T = ret;
    while (T) {
      chpl_task_yield();
      local_rvfRerefTmp2 = (&rvfRerefTmp)->addr;
      chpl_macro_tmp_4081.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_4081.addr = &((local_rvfRerefTmp2)->_arrsLock);
      call_tmp4 = chpl_macro_tmp_4081;
      default_argorder2 = local_memory_order_seq_cst;
      ret2 = UINT8(false);
      call_tmp5 = (&call_tmp4)->locale;
      T8 = call_tmp4;
      T9 = &ret2;
      isdirect2 = _local_chpl_doDirectExecuteOn(&call_tmp5);
      if (isdirect2) {
        chpl_macro_tmp_4082.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_4082.addr = T9;
        T10 = chpl_macro_tmp_4082;
        _local_on_fn(T8, default_argorder2, T10);
      } else {
        _args_foron_fn2 = ((_class_localson_fn3)(&chpl_macro_tmp_4083));
        (_args_foron_fn2)->_0_rvfDerefTmp = call_tmp5;
        T11 = call_tmp4;
        (_args_foron_fn2)->_1_tmp = T11;
        (_args_foron_fn2)->_2_rvfDerefTmp = default_argorder2;
        T12 = &ret2;
        chpl_macro_tmp_4084.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_4084.addr = T12;
        T13 = chpl_macro_tmp_4084;
        (_args_foron_fn2)->_3_tmp = T13;
        _args_vforon_fn2 = ((void*)(_args_foron_fn2));
        /*** _local_wrapon_fn ***/ chpl_executeOnFast(&call_tmp5, INT32(2), ((chpl_comm_on_bundle_p)(_args_vforon_fn2)), sizeof(chpl__class_localson_fn3_object), INT64(384), INT32(12));
      }
      T = ret2;
    }
    rvfRerefTmp2 = this12;
    local_rvfRerefTmp3 = (&rvfRerefTmp2)->addr;
    chpl_macro_tmp_4085.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_4085.addr = &((local_rvfRerefTmp3)->_arrs);
    call_tmp6 = chpl_macro_tmp_4085;
    _local_remove_chpl2(call_tmp6, x);
    rvfRerefTmp3 = this12;
    local_rvfRerefTmp4 = (&rvfRerefTmp3)->addr;
    chpl_macro_tmp_4086.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_4086.addr = &((local_rvfRerefTmp4)->_arrs);
    call_tmp7 = chpl_macro_tmp_4086;
    call_tmp8 = _local_size_chpl2(call_tmp7);
    cnt = call_tmp8;
    rvfRerefTmp4 = this12;
    local_rvfRerefTmp5 = (&rvfRerefTmp4)->addr;
    _ref_tmp_ = &cnt;
    *(_ref_tmp_) += (local_rvfRerefTmp5)->_arrs_containing_dom;
    rvfRerefTmp5 = this12;
    local_rvfRerefTmp6 = (&rvfRerefTmp5)->addr;
    coerce_tmp = (local_rvfRerefTmp6)->_free_when_no_arrs;
    call_tmp9 = (! coerce_tmp);
    if (call_tmp9) {
      _ref_tmp_2 = &cnt;
      *(_ref_tmp_2) += INT64(1);
    }
    rvfRerefTmp6 = this12;
    local_rvfRerefTmp7 = (&rvfRerefTmp6)->addr;
    chpl_macro_tmp_4087.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_4087.addr = &((local_rvfRerefTmp7)->_arrsLock);
    call_tmp10 = chpl_macro_tmp_4087;
    default_argorder3 = local_memory_order_seq_cst;
    call_tmp11 = (&call_tmp10)->locale;
    T14 = call_tmp10;
    isdirect3 = _local_chpl_doDirectExecuteOn(&call_tmp11);
    if (isdirect3) {
      _local_on_fn2(T14, default_argorder3);
    } else {
      _args_foron_fn3 = ((_class_localson_fn4)(&chpl_macro_tmp_4088));
      (_args_foron_fn3)->_0_rvfDerefTmp = call_tmp11;
      T15 = call_tmp10;
      (_args_foron_fn3)->_1_tmp = T15;
      (_args_foron_fn3)->_2_rvfDerefTmp = default_argorder3;
      _args_vforon_fn3 = ((void*)(_args_foron_fn3));
      /*** _local_wrapon_fn2 ***/ chpl_executeOnFast(&call_tmp11, INT32(4), ((chpl_comm_on_bundle_p)(_args_vforon_fn3)), sizeof(chpl__class_localson_fn4_object), INT64(392), INT32(12));
    }
  }
  chpl_gen_comm_put(((void*)(&cnt)), chpl_nodeFromLocaleID(&((count).locale), INT64(0), INT32(0)), (count).addr, sizeof(int64_t), -1, COMMID(10), INT64(248), INT64(29));
  return;
}

/* ChapelDistribution.chpl:254 */
static void on_fn159(chpl____wide_BaseDom this12,
                     chpl____wide_BaseArr x) {
  memory_order local_memory_order_seq_cst;
  chpl____wide_BaseDom rvfRerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool T;
  chpl____wide__ref_atomicbool call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order default_argorder;
  chpl_bool ret;
  chpl_localeID_t call_tmp3;
  chpl____wide__ref_atomicbool T2 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_chpl_bool T3 = NULL;
  chpl_bool isdirect;
  chpl____wide__ref_chpl_bool T4 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn3 _args_foron_fn = NULL;
  chpl____wide__ref_atomicbool T5 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_chpl_bool T6 = NULL;
  chpl____wide__ref_chpl_bool T7 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn;
  chpl____wide__ref_atomicbool call_tmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order default_argorder2;
  chpl_bool ret2;
  chpl_localeID_t call_tmp5;
  chpl____wide__ref_atomicbool T8 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_chpl_bool T9 = NULL;
  chpl_bool isdirect2;
  chpl____wide__ref_chpl_bool T10 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn3 _args_foron_fn2 = NULL;
  chpl____wide__ref_atomicbool T11 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_chpl_bool T12 = NULL;
  chpl____wide__ref_chpl_bool T13 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn2;
  chpl____wide_BaseDom rvfRerefTmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_list_BaseArr call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDom rvfRerefTmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomicbool call_tmp7 = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order default_argorder3;
  chpl_localeID_t call_tmp8;
  chpl____wide__ref_atomicbool T14 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect3;
  _class_localson_fn4 _args_foron_fn3 = NULL;
  chpl____wide__ref_atomicbool T15 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn3;
  chpl____wide__ref_atomicbool chpl_macro_tmp_4089;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_4090;
  chpl__class_localson_fn3_object chpl_macro_tmp_4091;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_4092;
  chpl____wide__ref_atomicbool chpl_macro_tmp_4093;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_4094;
  chpl__class_localson_fn3_object chpl_macro_tmp_4095;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_4096;
  chpl____wide__ref_list_BaseArr chpl_macro_tmp_4097;
  chpl____wide__ref_atomicbool chpl_macro_tmp_4098;
  chpl__class_localson_fn4_object chpl_macro_tmp_4099;
  local_memory_order_seq_cst = memory_order_seq_cst;
  rvfRerefTmp = this12;
  chpl_macro_tmp_4089.locale = (&rvfRerefTmp)->locale;
  chpl_macro_tmp_4089.addr = &(((&rvfRerefTmp)->addr)->_arrsLock);
  call_tmp2 = chpl_macro_tmp_4089;
  default_argorder = local_memory_order_seq_cst;
  ret = UINT8(false);
  call_tmp3 = (&call_tmp2)->locale;
  T2 = call_tmp2;
  T3 = &ret;
  isdirect = chpl_doDirectExecuteOn(&call_tmp3);
  if (isdirect) {
    chpl_macro_tmp_4090.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_4090.addr = T3;
    T4 = chpl_macro_tmp_4090;
    on_fn3(T2, default_argorder, T4);
  } else {
    _args_foron_fn = ((_class_localson_fn3)(&chpl_macro_tmp_4091));
    (_args_foron_fn)->_0_rvfDerefTmp = call_tmp3;
    T5 = call_tmp2;
    (_args_foron_fn)->_1_tmp = T5;
    (_args_foron_fn)->_2_rvfDerefTmp = default_argorder;
    T6 = &ret;
    chpl_macro_tmp_4092.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_4092.addr = T6;
    T7 = chpl_macro_tmp_4092;
    (_args_foron_fn)->_3_tmp = T7;
    _args_vforon_fn = ((void*)(_args_foron_fn));
    /*** wrapon_fn3 ***/ chpl_executeOn(&call_tmp3, INT32(3), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn3_object), INT64(384), INT32(12));
  }
  T = ret;
  while (T) {
    chpl_task_yield();
    chpl_macro_tmp_4093.locale = (&rvfRerefTmp)->locale;
    chpl_macro_tmp_4093.addr = &(((&rvfRerefTmp)->addr)->_arrsLock);
    call_tmp4 = chpl_macro_tmp_4093;
    default_argorder2 = local_memory_order_seq_cst;
    ret2 = UINT8(false);
    call_tmp5 = (&call_tmp4)->locale;
    T8 = call_tmp4;
    T9 = &ret2;
    isdirect2 = chpl_doDirectExecuteOn(&call_tmp5);
    if (isdirect2) {
      chpl_macro_tmp_4094.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_4094.addr = T9;
      T10 = chpl_macro_tmp_4094;
      on_fn3(T8, default_argorder2, T10);
    } else {
      _args_foron_fn2 = ((_class_localson_fn3)(&chpl_macro_tmp_4095));
      (_args_foron_fn2)->_0_rvfDerefTmp = call_tmp5;
      T11 = call_tmp4;
      (_args_foron_fn2)->_1_tmp = T11;
      (_args_foron_fn2)->_2_rvfDerefTmp = default_argorder2;
      T12 = &ret2;
      chpl_macro_tmp_4096.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_4096.addr = T12;
      T13 = chpl_macro_tmp_4096;
      (_args_foron_fn2)->_3_tmp = T13;
      _args_vforon_fn2 = ((void*)(_args_foron_fn2));
      /*** wrapon_fn3 ***/ chpl_executeOn(&call_tmp5, INT32(3), ((chpl_comm_on_bundle_p)(_args_vforon_fn2)), sizeof(chpl__class_localson_fn3_object), INT64(384), INT32(12));
    }
    T = ret2;
  }
  rvfRerefTmp2 = this12;
  chpl_macro_tmp_4097.locale = (&rvfRerefTmp2)->locale;
  chpl_macro_tmp_4097.addr = &(((&rvfRerefTmp2)->addr)->_arrs);
  call_tmp6 = chpl_macro_tmp_4097;
  append_chpl(call_tmp6, x);
  rvfRerefTmp3 = this12;
  chpl_macro_tmp_4098.locale = (&rvfRerefTmp3)->locale;
  chpl_macro_tmp_4098.addr = &(((&rvfRerefTmp3)->addr)->_arrsLock);
  call_tmp7 = chpl_macro_tmp_4098;
  default_argorder3 = local_memory_order_seq_cst;
  call_tmp8 = (&call_tmp7)->locale;
  T14 = call_tmp7;
  isdirect3 = chpl_doDirectExecuteOn(&call_tmp8);
  if (isdirect3) {
    on_fn4(T14, default_argorder3);
  } else {
    _args_foron_fn3 = ((_class_localson_fn4)(&chpl_macro_tmp_4099));
    (_args_foron_fn3)->_0_rvfDerefTmp = call_tmp8;
    T15 = call_tmp7;
    (_args_foron_fn3)->_1_tmp = T15;
    (_args_foron_fn3)->_2_rvfDerefTmp = default_argorder3;
    _args_vforon_fn3 = ((void*)(_args_foron_fn3));
    /*** wrapon_fn4 ***/ chpl_executeOnFast(&call_tmp8, INT32(5), ((chpl_comm_on_bundle_p)(_args_vforon_fn3)), sizeof(chpl__class_localson_fn4_object), INT64(392), INT32(12));
  }
  return;
}

/* ChapelDistribution.chpl:254 */
static void wrapon_fn159(_class_localson_fn159 c) {
  chpl____wide_BaseDom _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr _2_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  _2_rvfDerefTmp = (c)->_2_rvfDerefTmp;
  on_fn159(_1_rvfDerefTmp, _2_rvfDerefTmp);
  return;
}

/* ChapelDistribution.chpl:265 */
static void wrapon_fn160(_class_localson_fn160 c) {
  chpl____wide_BaseDom _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_int64_t _2_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  _2_tmp = (c)->_2_tmp;
  on_fn160(_1_rvfDerefTmp, _2_tmp);
  return;
}

/* ChapelDistribution.chpl:265 */
static void on_fn160(chpl____wide_BaseDom this12,
                     chpl____wide__ref_int64_t count) {
  memory_order local_memory_order_seq_cst;
  chpl____wide_BaseDom rvfRerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool T;
  chpl____wide__ref_atomicbool call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order default_argorder;
  chpl_bool ret;
  chpl_localeID_t call_tmp3;
  chpl____wide__ref_atomicbool T2 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_chpl_bool T3 = NULL;
  chpl_bool isdirect;
  chpl____wide__ref_chpl_bool T4 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn3 _args_foron_fn = NULL;
  chpl____wide__ref_atomicbool T5 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_chpl_bool T6 = NULL;
  chpl____wide__ref_chpl_bool T7 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn;
  chpl____wide__ref_atomicbool call_tmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order default_argorder2;
  chpl_bool ret2;
  chpl_localeID_t call_tmp5;
  chpl____wide__ref_atomicbool T8 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_chpl_bool T9 = NULL;
  chpl_bool isdirect2;
  chpl____wide__ref_chpl_bool T10 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn3 _args_foron_fn2 = NULL;
  chpl____wide__ref_atomicbool T11 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_chpl_bool T12 = NULL;
  chpl____wide__ref_chpl_bool T13 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn2;
  chpl____wide_BaseDom rvfRerefTmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_int64_t call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDom rvfRerefTmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_list_BaseArr call_tmp7 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp8;
  chpl____wide_BaseDom rvfRerefTmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t T14;
  chpl____wide_BaseDom rvfRerefTmp5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomicbool call_tmp9 = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order default_argorder3;
  chpl_localeID_t call_tmp10;
  chpl____wide__ref_atomicbool T15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect3;
  _class_localson_fn4 _args_foron_fn3 = NULL;
  chpl____wide__ref_atomicbool T16 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn3;
  chpl____wide__ref_atomicbool chpl_macro_tmp_4100;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_4101;
  chpl__class_localson_fn3_object chpl_macro_tmp_4102;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_4103;
  chpl____wide__ref_atomicbool chpl_macro_tmp_4104;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_4105;
  chpl__class_localson_fn3_object chpl_macro_tmp_4106;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_4107;
  chpl____wide__ref_int64_t chpl_macro_tmp_4108;
  int64_t chpl_macro_tmp_4109;
  chpl____wide__ref_list_BaseArr chpl_macro_tmp_4110;
  chpl____wide__ref_int64_t chpl_macro_tmp_4111;
  int64_t chpl_macro_tmp_4112;
  chpl____wide__ref_atomicbool chpl_macro_tmp_4113;
  chpl__class_localson_fn4_object chpl_macro_tmp_4114;
  local_memory_order_seq_cst = memory_order_seq_cst;
  rvfRerefTmp = this12;
  chpl_macro_tmp_4100.locale = (&rvfRerefTmp)->locale;
  chpl_macro_tmp_4100.addr = &(((&rvfRerefTmp)->addr)->_arrsLock);
  call_tmp2 = chpl_macro_tmp_4100;
  default_argorder = local_memory_order_seq_cst;
  ret = UINT8(false);
  call_tmp3 = (&call_tmp2)->locale;
  T2 = call_tmp2;
  T3 = &ret;
  isdirect = chpl_doDirectExecuteOn(&call_tmp3);
  if (isdirect) {
    chpl_macro_tmp_4101.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_4101.addr = T3;
    T4 = chpl_macro_tmp_4101;
    on_fn3(T2, default_argorder, T4);
  } else {
    _args_foron_fn = ((_class_localson_fn3)(&chpl_macro_tmp_4102));
    (_args_foron_fn)->_0_rvfDerefTmp = call_tmp3;
    T5 = call_tmp2;
    (_args_foron_fn)->_1_tmp = T5;
    (_args_foron_fn)->_2_rvfDerefTmp = default_argorder;
    T6 = &ret;
    chpl_macro_tmp_4103.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_4103.addr = T6;
    T7 = chpl_macro_tmp_4103;
    (_args_foron_fn)->_3_tmp = T7;
    _args_vforon_fn = ((void*)(_args_foron_fn));
    /*** wrapon_fn3 ***/ chpl_executeOn(&call_tmp3, INT32(3), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn3_object), INT64(384), INT32(12));
  }
  T = ret;
  while (T) {
    chpl_task_yield();
    chpl_macro_tmp_4104.locale = (&rvfRerefTmp)->locale;
    chpl_macro_tmp_4104.addr = &(((&rvfRerefTmp)->addr)->_arrsLock);
    call_tmp4 = chpl_macro_tmp_4104;
    default_argorder2 = local_memory_order_seq_cst;
    ret2 = UINT8(false);
    call_tmp5 = (&call_tmp4)->locale;
    T8 = call_tmp4;
    T9 = &ret2;
    isdirect2 = chpl_doDirectExecuteOn(&call_tmp5);
    if (isdirect2) {
      chpl_macro_tmp_4105.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_4105.addr = T9;
      T10 = chpl_macro_tmp_4105;
      on_fn3(T8, default_argorder2, T10);
    } else {
      _args_foron_fn2 = ((_class_localson_fn3)(&chpl_macro_tmp_4106));
      (_args_foron_fn2)->_0_rvfDerefTmp = call_tmp5;
      T11 = call_tmp4;
      (_args_foron_fn2)->_1_tmp = T11;
      (_args_foron_fn2)->_2_rvfDerefTmp = default_argorder2;
      T12 = &ret2;
      chpl_macro_tmp_4107.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_4107.addr = T12;
      T13 = chpl_macro_tmp_4107;
      (_args_foron_fn2)->_3_tmp = T13;
      _args_vforon_fn2 = ((void*)(_args_foron_fn2));
      /*** wrapon_fn3 ***/ chpl_executeOn(&call_tmp5, INT32(3), ((chpl_comm_on_bundle_p)(_args_vforon_fn2)), sizeof(chpl__class_localson_fn3_object), INT64(384), INT32(12));
    }
    T = ret2;
  }
  rvfRerefTmp2 = this12;
  chpl_macro_tmp_4108.locale = (&rvfRerefTmp2)->locale;
  chpl_macro_tmp_4108.addr = &(((&rvfRerefTmp2)->addr)->_arrs_containing_dom);
  call_tmp6 = chpl_macro_tmp_4108;
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_4109)), chpl_nodeFromLocaleID(&((call_tmp6).locale), INT64(0), INT32(0)), (call_tmp6).addr, sizeof(int64_t), -1, COMMID(11), INT64(267), INT64(29));
  chpl_macro_tmp_4109 -= INT64(1);
  chpl_gen_comm_put(((void*)(&chpl_macro_tmp_4109)), chpl_nodeFromLocaleID(&((call_tmp6).locale), INT64(0), INT32(0)), (call_tmp6).addr, sizeof(int64_t), -1, COMMID(12), INT64(267), INT64(29));
  rvfRerefTmp3 = this12;
  chpl_macro_tmp_4110.locale = (&rvfRerefTmp3)->locale;
  chpl_macro_tmp_4110.addr = &(((&rvfRerefTmp3)->addr)->_arrs);
  call_tmp7 = chpl_macro_tmp_4110;
  call_tmp8 = size_chpl2(call_tmp7);
  chpl_gen_comm_put(((void*)(&call_tmp8)), chpl_nodeFromLocaleID(&((count).locale), INT64(0), INT32(0)), (count).addr, sizeof(int64_t), -1, COMMID(13), INT64(268), INT64(29));
  rvfRerefTmp4 = this12;
  chpl_macro_tmp_4111.locale = (&rvfRerefTmp4)->locale;
  chpl_macro_tmp_4111.addr = &(((&rvfRerefTmp4)->addr)->_arrs_containing_dom);
  chpl_gen_comm_get(((void*)(&T14)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4111).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4111).addr, sizeof(int64_t), -1, COMMID(14), INT64(269), INT64(29));
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_4112)), chpl_nodeFromLocaleID(&((count).locale), INT64(0), INT32(0)), (count).addr, sizeof(int64_t), -1, COMMID(15), INT64(269), INT64(29));
  chpl_macro_tmp_4112 += T14;
  chpl_gen_comm_put(((void*)(&chpl_macro_tmp_4112)), chpl_nodeFromLocaleID(&((count).locale), INT64(0), INT32(0)), (count).addr, sizeof(int64_t), -1, COMMID(16), INT64(269), INT64(29));
  rvfRerefTmp5 = this12;
  chpl_macro_tmp_4113.locale = (&rvfRerefTmp5)->locale;
  chpl_macro_tmp_4113.addr = &(((&rvfRerefTmp5)->addr)->_arrsLock);
  call_tmp9 = chpl_macro_tmp_4113;
  default_argorder3 = local_memory_order_seq_cst;
  call_tmp10 = (&call_tmp9)->locale;
  T15 = call_tmp9;
  isdirect3 = chpl_doDirectExecuteOn(&call_tmp10);
  if (isdirect3) {
    on_fn4(T15, default_argorder3);
  } else {
    _args_foron_fn3 = ((_class_localson_fn4)(&chpl_macro_tmp_4114));
    (_args_foron_fn3)->_0_rvfDerefTmp = call_tmp10;
    T16 = call_tmp9;
    (_args_foron_fn3)->_1_tmp = T16;
    (_args_foron_fn3)->_2_rvfDerefTmp = default_argorder3;
    _args_vforon_fn3 = ((void*)(_args_foron_fn3));
    /*** wrapon_fn4 ***/ chpl_executeOnFast(&call_tmp10, INT32(5), ((chpl_comm_on_bundle_p)(_args_vforon_fn3)), sizeof(chpl__class_localson_fn4_object), INT64(392), INT32(12));
  }
  return;
}

/* ChapelDistribution.chpl:276 */
static void wrapon_fn161(_class_localson_fn161 c) {
  chpl____wide_BaseDom _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  on_fn161(_1_rvfDerefTmp);
  return;
}

/* ChapelDistribution.chpl:276 */
static void on_fn161(chpl____wide_BaseDom this12) {
  memory_order local_memory_order_seq_cst;
  chpl____wide_BaseDom rvfRerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool T;
  chpl____wide__ref_atomicbool call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order default_argorder;
  chpl_bool ret;
  chpl_localeID_t call_tmp3;
  chpl____wide__ref_atomicbool T2 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_chpl_bool T3 = NULL;
  chpl_bool isdirect;
  chpl____wide__ref_chpl_bool T4 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn3 _args_foron_fn = NULL;
  chpl____wide__ref_atomicbool T5 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_chpl_bool T6 = NULL;
  chpl____wide__ref_chpl_bool T7 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn;
  chpl____wide__ref_atomicbool call_tmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order default_argorder2;
  chpl_bool ret2;
  chpl_localeID_t call_tmp5;
  chpl____wide__ref_atomicbool T8 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_chpl_bool T9 = NULL;
  chpl_bool isdirect2;
  chpl____wide__ref_chpl_bool T10 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn3 _args_foron_fn2 = NULL;
  chpl____wide__ref_atomicbool T11 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_chpl_bool T12 = NULL;
  chpl____wide__ref_chpl_bool T13 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn2;
  chpl____wide_BaseDom rvfRerefTmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_int64_t call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDom rvfRerefTmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomicbool call_tmp7 = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order default_argorder3;
  chpl_localeID_t call_tmp8;
  chpl____wide__ref_atomicbool T14 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect3;
  _class_localson_fn4 _args_foron_fn3 = NULL;
  chpl____wide__ref_atomicbool T15 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn3;
  chpl____wide__ref_atomicbool chpl_macro_tmp_4115;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_4116;
  chpl__class_localson_fn3_object chpl_macro_tmp_4117;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_4118;
  chpl____wide__ref_atomicbool chpl_macro_tmp_4119;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_4120;
  chpl__class_localson_fn3_object chpl_macro_tmp_4121;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_4122;
  chpl____wide__ref_int64_t chpl_macro_tmp_4123;
  int64_t chpl_macro_tmp_4124;
  chpl____wide__ref_atomicbool chpl_macro_tmp_4125;
  chpl__class_localson_fn4_object chpl_macro_tmp_4126;
  local_memory_order_seq_cst = memory_order_seq_cst;
  rvfRerefTmp = this12;
  chpl_macro_tmp_4115.locale = (&rvfRerefTmp)->locale;
  chpl_macro_tmp_4115.addr = &(((&rvfRerefTmp)->addr)->_arrsLock);
  call_tmp2 = chpl_macro_tmp_4115;
  default_argorder = local_memory_order_seq_cst;
  ret = UINT8(false);
  call_tmp3 = (&call_tmp2)->locale;
  T2 = call_tmp2;
  T3 = &ret;
  isdirect = chpl_doDirectExecuteOn(&call_tmp3);
  if (isdirect) {
    chpl_macro_tmp_4116.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_4116.addr = T3;
    T4 = chpl_macro_tmp_4116;
    on_fn3(T2, default_argorder, T4);
  } else {
    _args_foron_fn = ((_class_localson_fn3)(&chpl_macro_tmp_4117));
    (_args_foron_fn)->_0_rvfDerefTmp = call_tmp3;
    T5 = call_tmp2;
    (_args_foron_fn)->_1_tmp = T5;
    (_args_foron_fn)->_2_rvfDerefTmp = default_argorder;
    T6 = &ret;
    chpl_macro_tmp_4118.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_4118.addr = T6;
    T7 = chpl_macro_tmp_4118;
    (_args_foron_fn)->_3_tmp = T7;
    _args_vforon_fn = ((void*)(_args_foron_fn));
    /*** wrapon_fn3 ***/ chpl_executeOn(&call_tmp3, INT32(3), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn3_object), INT64(384), INT32(12));
  }
  T = ret;
  while (T) {
    chpl_task_yield();
    chpl_macro_tmp_4119.locale = (&rvfRerefTmp)->locale;
    chpl_macro_tmp_4119.addr = &(((&rvfRerefTmp)->addr)->_arrsLock);
    call_tmp4 = chpl_macro_tmp_4119;
    default_argorder2 = local_memory_order_seq_cst;
    ret2 = UINT8(false);
    call_tmp5 = (&call_tmp4)->locale;
    T8 = call_tmp4;
    T9 = &ret2;
    isdirect2 = chpl_doDirectExecuteOn(&call_tmp5);
    if (isdirect2) {
      chpl_macro_tmp_4120.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_4120.addr = T9;
      T10 = chpl_macro_tmp_4120;
      on_fn3(T8, default_argorder2, T10);
    } else {
      _args_foron_fn2 = ((_class_localson_fn3)(&chpl_macro_tmp_4121));
      (_args_foron_fn2)->_0_rvfDerefTmp = call_tmp5;
      T11 = call_tmp4;
      (_args_foron_fn2)->_1_tmp = T11;
      (_args_foron_fn2)->_2_rvfDerefTmp = default_argorder2;
      T12 = &ret2;
      chpl_macro_tmp_4122.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_4122.addr = T12;
      T13 = chpl_macro_tmp_4122;
      (_args_foron_fn2)->_3_tmp = T13;
      _args_vforon_fn2 = ((void*)(_args_foron_fn2));
      /*** wrapon_fn3 ***/ chpl_executeOn(&call_tmp5, INT32(3), ((chpl_comm_on_bundle_p)(_args_vforon_fn2)), sizeof(chpl__class_localson_fn3_object), INT64(384), INT32(12));
    }
    T = ret2;
  }
  rvfRerefTmp2 = this12;
  chpl_macro_tmp_4123.locale = (&rvfRerefTmp2)->locale;
  chpl_macro_tmp_4123.addr = &(((&rvfRerefTmp2)->addr)->_arrs_containing_dom);
  call_tmp6 = chpl_macro_tmp_4123;
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_4124)), chpl_nodeFromLocaleID(&((call_tmp6).locale), INT64(0), INT32(0)), (call_tmp6).addr, sizeof(int64_t), -1, COMMID(17), INT64(278), INT64(29));
  chpl_macro_tmp_4124 += INT64(1);
  chpl_gen_comm_put(((void*)(&chpl_macro_tmp_4124)), chpl_nodeFromLocaleID(&((call_tmp6).locale), INT64(0), INT32(0)), (call_tmp6).addr, sizeof(int64_t), -1, COMMID(18), INT64(278), INT64(29));
  rvfRerefTmp3 = this12;
  chpl_macro_tmp_4125.locale = (&rvfRerefTmp3)->locale;
  chpl_macro_tmp_4125.addr = &(((&rvfRerefTmp3)->addr)->_arrsLock);
  call_tmp7 = chpl_macro_tmp_4125;
  default_argorder3 = local_memory_order_seq_cst;
  call_tmp8 = (&call_tmp7)->locale;
  T14 = call_tmp7;
  isdirect3 = chpl_doDirectExecuteOn(&call_tmp8);
  if (isdirect3) {
    on_fn4(T14, default_argorder3);
  } else {
    _args_foron_fn3 = ((_class_localson_fn4)(&chpl_macro_tmp_4126));
    (_args_foron_fn3)->_0_rvfDerefTmp = call_tmp8;
    T15 = call_tmp7;
    (_args_foron_fn3)->_1_tmp = T15;
    (_args_foron_fn3)->_2_rvfDerefTmp = default_argorder3;
    _args_vforon_fn3 = ((void*)(_args_foron_fn3));
    /*** wrapon_fn4 ***/ chpl_executeOnFast(&call_tmp8, INT32(5), ((chpl_comm_on_bundle_p)(_args_vforon_fn3)), sizeof(chpl__class_localson_fn4_object), INT64(392), INT32(12));
  }
  return;
}

/* ChapelDistribution.chpl:296 */
static void _backupArrays(chpl____wide_BaseDom this12) {
  chpl____wide__ref_list_BaseArr call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_list_BaseArr i_x = {CHPL_LOCALEID_T_INIT, NULL};
  list_BaseArr_chpl T;
  list_BaseArr_chpl _ic__F0_this;
  chpl____wide_listNode_BaseArr tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseArr coerce_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool T2;
  chpl____wide_object call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object T3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr _yieldedIndex = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseArr coerce_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object T4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_list_BaseArr chpl_macro_tmp_4127;
  chpl____wide_object chpl_macro_tmp_4128;
  chpl____wide__nilType chpl_macro_tmp_4129;
  chpl____wide_object chpl_macro_tmp_4130;
  chpl____wide__ref__wide_BaseArr chpl_macro_tmp_4131;
  chpl____wide__ref_int32_t chpl_macro_tmp_4132;
  int32_t chpl_macro_tmp_4133;
  chpl____wide__ref__wide_listNode_BaseArr chpl_macro_tmp_4134;
  chpl____wide_object chpl_macro_tmp_4135;
  chpl____wide__nilType chpl_macro_tmp_4136;
  chpl____wide_object chpl_macro_tmp_4137;
  chpl_macro_tmp_4127.locale = (&this12)->locale;
  chpl_macro_tmp_4127.addr = &(((&this12)->addr)->_arrs);
  call_tmp2 = chpl_macro_tmp_4127;
  i_x = call_tmp2;
  chpl_gen_comm_get(((void*)(&T)), chpl_nodeFromLocaleID(&((i_x).locale), INT64(0), INT32(0)), (i_x).addr, sizeof(list_BaseArr_chpl), -1, COMMID(19), INT64(297), INT64(29));
  _ic__F0_this = T;
  coerce_tmp = (&_ic__F0_this)->first_chpl;
  tmp = coerce_tmp;
  chpl_macro_tmp_4128.locale = (&coerce_tmp)->locale;
  chpl_macro_tmp_4128.addr = ((object)((&coerce_tmp)->addr));
  call_tmp3 = chpl_macro_tmp_4128;
  chpl_macro_tmp_4129.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_4129.addr = nil;
  chpl_macro_tmp_4130.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_4130.addr = NULL;
  T3 = chpl_macro_tmp_4130;
  T2 = (((&call_tmp3)->addr != (&T3)->addr) || ((!(! (&call_tmp3)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp3)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&T3)->locale), INT64(0), INT32(0)))));
  while (T2) {
    chpl_macro_tmp_4131.locale = (&tmp)->locale;
    chpl_macro_tmp_4131.addr = &(((&tmp)->addr)->data_chpl);
    chpl_gen_comm_get(((void*)(&_yieldedIndex)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4131).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4131).addr, sizeof(chpl____wide_BaseArr), -1, COMMID(20), INT64(297), INT64(29));
    chpl_macro_tmp_4132.locale = (&_yieldedIndex)->locale;
    chpl_macro_tmp_4132.addr = &(((object)((&_yieldedIndex)->addr))->chpl__cid);
    chpl_gen_comm_get(((void*)(&chpl_macro_tmp_4133)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4132).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4132).addr, sizeof(int32_t), -1, COMMID(21), INT64(298), INT64(29));
    ((void(*)(chpl____wide_BaseArr))chpl_vmtable[((INT64(9) * chpl_macro_tmp_4133) + INT64(3))])(_yieldedIndex);
    chpl_macro_tmp_4134.locale = (&tmp)->locale;
    chpl_macro_tmp_4134.addr = &(((&tmp)->addr)->next_chpl);
    chpl_gen_comm_get(((void*)(&coerce_tmp2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4134).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4134).addr, sizeof(chpl____wide_listNode_BaseArr), -1, COMMID(22), INT64(297), INT64(29));
    tmp = coerce_tmp2;
    chpl_macro_tmp_4135.locale = (&coerce_tmp2)->locale;
    chpl_macro_tmp_4135.addr = ((object)((&coerce_tmp2)->addr));
    call_tmp4 = chpl_macro_tmp_4135;
    chpl_macro_tmp_4136.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_4136.addr = nil;
    chpl_macro_tmp_4137.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_4137.addr = NULL;
    T4 = chpl_macro_tmp_4137;
    T2 = (((&call_tmp4)->addr != (&T4)->addr) || ((!(! (&call_tmp4)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp4)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&T4)->locale), INT64(0), INT32(0)))));
  }
  return;
}

/* ChapelDistribution.chpl:301 */
static void _removeArrayBackups(chpl____wide_BaseDom this12) {
  chpl____wide__ref_list_BaseArr call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_list_BaseArr i_x = {CHPL_LOCALEID_T_INIT, NULL};
  list_BaseArr_chpl T;
  list_BaseArr_chpl _ic__F0_this;
  chpl____wide_listNode_BaseArr tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseArr coerce_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool T2;
  chpl____wide_object call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object T3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr _yieldedIndex = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseArr coerce_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object T4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_list_BaseArr chpl_macro_tmp_4138;
  chpl____wide_object chpl_macro_tmp_4139;
  chpl____wide__nilType chpl_macro_tmp_4140;
  chpl____wide_object chpl_macro_tmp_4141;
  chpl____wide__ref__wide_BaseArr chpl_macro_tmp_4142;
  chpl____wide__ref_int32_t chpl_macro_tmp_4143;
  int32_t chpl_macro_tmp_4144;
  chpl____wide__ref__wide_listNode_BaseArr chpl_macro_tmp_4145;
  chpl____wide_object chpl_macro_tmp_4146;
  chpl____wide__nilType chpl_macro_tmp_4147;
  chpl____wide_object chpl_macro_tmp_4148;
  chpl_macro_tmp_4138.locale = (&this12)->locale;
  chpl_macro_tmp_4138.addr = &(((&this12)->addr)->_arrs);
  call_tmp2 = chpl_macro_tmp_4138;
  i_x = call_tmp2;
  chpl_gen_comm_get(((void*)(&T)), chpl_nodeFromLocaleID(&((i_x).locale), INT64(0), INT32(0)), (i_x).addr, sizeof(list_BaseArr_chpl), -1, COMMID(23), INT64(302), INT64(29));
  _ic__F0_this = T;
  coerce_tmp = (&_ic__F0_this)->first_chpl;
  tmp = coerce_tmp;
  chpl_macro_tmp_4139.locale = (&coerce_tmp)->locale;
  chpl_macro_tmp_4139.addr = ((object)((&coerce_tmp)->addr));
  call_tmp3 = chpl_macro_tmp_4139;
  chpl_macro_tmp_4140.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_4140.addr = nil;
  chpl_macro_tmp_4141.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_4141.addr = NULL;
  T3 = chpl_macro_tmp_4141;
  T2 = (((&call_tmp3)->addr != (&T3)->addr) || ((!(! (&call_tmp3)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp3)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&T3)->locale), INT64(0), INT32(0)))));
  while (T2) {
    chpl_macro_tmp_4142.locale = (&tmp)->locale;
    chpl_macro_tmp_4142.addr = &(((&tmp)->addr)->data_chpl);
    chpl_gen_comm_get(((void*)(&_yieldedIndex)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4142).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4142).addr, sizeof(chpl____wide_BaseArr), -1, COMMID(24), INT64(302), INT64(29));
    chpl_macro_tmp_4143.locale = (&_yieldedIndex)->locale;
    chpl_macro_tmp_4143.addr = &(((object)((&_yieldedIndex)->addr))->chpl__cid);
    chpl_gen_comm_get(((void*)(&chpl_macro_tmp_4144)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4143).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4143).addr, sizeof(int32_t), -1, COMMID(25), INT64(303), INT64(29));
    ((void(*)(chpl____wide_BaseArr))chpl_vmtable[((INT64(9) * chpl_macro_tmp_4144) + INT64(1))])(_yieldedIndex);
    chpl_macro_tmp_4145.locale = (&tmp)->locale;
    chpl_macro_tmp_4145.addr = &(((&tmp)->addr)->next_chpl);
    chpl_gen_comm_get(((void*)(&coerce_tmp2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4145).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4145).addr, sizeof(chpl____wide_listNode_BaseArr), -1, COMMID(26), INT64(302), INT64(29));
    tmp = coerce_tmp2;
    chpl_macro_tmp_4146.locale = (&coerce_tmp2)->locale;
    chpl_macro_tmp_4146.addr = ((object)((&coerce_tmp2)->addr));
    call_tmp4 = chpl_macro_tmp_4146;
    chpl_macro_tmp_4147.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_4147.addr = nil;
    chpl_macro_tmp_4148.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_4148.addr = NULL;
    T4 = chpl_macro_tmp_4148;
    T2 = (((&call_tmp4)->addr != (&T4)->addr) || ((!(! (&call_tmp4)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp4)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&T4)->locale), INT64(0), INT32(0)))));
  }
  return;
}

/* ChapelDistribution.chpl:306 */
static void _preserveArrayElements(chpl____wide_BaseDom this12,
                                   int64_t oldslot,
                                   int64_t newslot) {
  chpl____wide__ref_list_BaseArr call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_list_BaseArr i_x = {CHPL_LOCALEID_T_INIT, NULL};
  list_BaseArr_chpl T;
  list_BaseArr_chpl _ic__F0_this;
  chpl____wide_listNode_BaseArr tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseArr coerce_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool T2;
  chpl____wide_object call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object T3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr _yieldedIndex = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseArr coerce_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object T4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_list_BaseArr chpl_macro_tmp_4149;
  chpl____wide_object chpl_macro_tmp_4150;
  chpl____wide__nilType chpl_macro_tmp_4151;
  chpl____wide_object chpl_macro_tmp_4152;
  chpl____wide__ref__wide_BaseArr chpl_macro_tmp_4153;
  chpl____wide__ref_int32_t chpl_macro_tmp_4154;
  int32_t chpl_macro_tmp_4155;
  chpl____wide__ref__wide_listNode_BaseArr chpl_macro_tmp_4156;
  chpl____wide_object chpl_macro_tmp_4157;
  chpl____wide__nilType chpl_macro_tmp_4158;
  chpl____wide_object chpl_macro_tmp_4159;
  chpl_macro_tmp_4149.locale = (&this12)->locale;
  chpl_macro_tmp_4149.addr = &(((&this12)->addr)->_arrs);
  call_tmp2 = chpl_macro_tmp_4149;
  i_x = call_tmp2;
  chpl_gen_comm_get(((void*)(&T)), chpl_nodeFromLocaleID(&((i_x).locale), INT64(0), INT32(0)), (i_x).addr, sizeof(list_BaseArr_chpl), -1, COMMID(27), INT64(307), INT64(29));
  _ic__F0_this = T;
  coerce_tmp = (&_ic__F0_this)->first_chpl;
  tmp = coerce_tmp;
  chpl_macro_tmp_4150.locale = (&coerce_tmp)->locale;
  chpl_macro_tmp_4150.addr = ((object)((&coerce_tmp)->addr));
  call_tmp3 = chpl_macro_tmp_4150;
  chpl_macro_tmp_4151.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_4151.addr = nil;
  chpl_macro_tmp_4152.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_4152.addr = NULL;
  T3 = chpl_macro_tmp_4152;
  T2 = (((&call_tmp3)->addr != (&T3)->addr) || ((!(! (&call_tmp3)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp3)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&T3)->locale), INT64(0), INT32(0)))));
  while (T2) {
    chpl_macro_tmp_4153.locale = (&tmp)->locale;
    chpl_macro_tmp_4153.addr = &(((&tmp)->addr)->data_chpl);
    chpl_gen_comm_get(((void*)(&_yieldedIndex)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4153).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4153).addr, sizeof(chpl____wide_BaseArr), -1, COMMID(28), INT64(307), INT64(29));
    chpl_macro_tmp_4154.locale = (&_yieldedIndex)->locale;
    chpl_macro_tmp_4154.addr = &(((object)((&_yieldedIndex)->addr))->chpl__cid);
    chpl_gen_comm_get(((void*)(&chpl_macro_tmp_4155)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4154).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4154).addr, sizeof(int32_t), -1, COMMID(29), INT64(308), INT64(29));
    ((void(*)(chpl____wide_BaseArr,
       int64_t,
       int64_t))chpl_vmtable[((INT64(9) * chpl_macro_tmp_4155) + INT64(5))])(_yieldedIndex, oldslot, newslot);
    chpl_macro_tmp_4156.locale = (&tmp)->locale;
    chpl_macro_tmp_4156.addr = &(((&tmp)->addr)->next_chpl);
    chpl_gen_comm_get(((void*)(&coerce_tmp2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4156).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4156).addr, sizeof(chpl____wide_listNode_BaseArr), -1, COMMID(30), INT64(307), INT64(29));
    tmp = coerce_tmp2;
    chpl_macro_tmp_4157.locale = (&coerce_tmp2)->locale;
    chpl_macro_tmp_4157.addr = ((object)((&coerce_tmp2)->addr));
    call_tmp4 = chpl_macro_tmp_4157;
    chpl_macro_tmp_4158.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_4158.addr = nil;
    chpl_macro_tmp_4159.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_4159.addr = NULL;
    T4 = chpl_macro_tmp_4159;
    T2 = (((&call_tmp4)->addr != (&T4)->addr) || ((!(! (&call_tmp4)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp4)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&T4)->locale), INT64(0), INT32(0)))));
  }
  return;
}

/* ChapelDistribution.chpl:319 */
static chpl_bool dsiLinksDistribution(chpl____wide_BaseDom this12) {
  return UINT8(true);
}

/* ChapelDistribution.chpl:339 */
static BaseRectangularDom _construct_BaseRectangularDom(_ref_list_BaseArr _arrs,
                                                        int64_t _arrs_containing_dom,
                                                        _ref_atomicbool _arrsLock,
                                                        chpl_bool _free_when_no_arrs,
                                                        int64_t pid,
                                                        BaseRectangularDom meme) {
  BaseRectangularDom this12 = NULL;
  this12 = meme;
  _construct_BaseDom(_arrs, _arrs_containing_dom, _arrsLock, _free_when_no_arrs, pid, &((this12)->super));
  return meme;
}

/* ChapelDistribution.chpl:340 */
static void deinit37(chpl____wide_BaseRectangularDom this12) {
  chpl____wide_BaseDom _parent_destructor_tmp_ = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDom chpl_macro_tmp_4160;
  chpl_macro_tmp_4160.locale = (&this12)->locale;
  chpl_macro_tmp_4160.addr = ((BaseDom)((&this12)->addr));
  _parent_destructor_tmp_ = chpl_macro_tmp_4160;
  deinit36(_parent_destructor_tmp_);
  return;
}

/* ChapelDistribution.chpl:591 */
static BaseAssociativeDom _construct_BaseAssociativeDom(_ref_list_BaseArr _arrs,
                                                        int64_t _arrs_containing_dom,
                                                        _ref_atomicbool _arrsLock,
                                                        chpl_bool _free_when_no_arrs,
                                                        int64_t pid,
                                                        BaseAssociativeDom meme) {
  BaseAssociativeDom this12 = NULL;
  this12 = meme;
  _construct_BaseDom(_arrs, _arrs_containing_dom, _arrsLock, _free_when_no_arrs, pid, &((this12)->super));
  return meme;
}

/* ChapelDistribution.chpl:592 */
static void deinit38(chpl____wide_BaseAssociativeDom this12) {
  chpl____wide_BaseDom _parent_destructor_tmp_ = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDom chpl_macro_tmp_4161;
  chpl_macro_tmp_4161.locale = (&this12)->locale;
  chpl_macro_tmp_4161.addr = ((BaseDom)((&this12)->addr));
  _parent_destructor_tmp_ = chpl_macro_tmp_4161;
  deinit36(_parent_destructor_tmp_);
  return;
}

/* ChapelDistribution.chpl:622 */
static BaseArr _construct_BaseArr(BaseArr _arrAlias,
                                  int64_t pid,
                                  BaseArr meme) {
  BaseArr this12 = NULL;
  chpl____wide_BaseArr T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr chpl_macro_tmp_4162;
  this12 = meme;
  _construct_object(&((this12)->super));
  chpl_macro_tmp_4162.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_4162.addr = _arrAlias;
  T = chpl_macro_tmp_4162;
  (this12)->_arrAlias = T;
  (this12)->pid = pid;
  return this12;
}

/* ChapelDistribution.chpl:641 */
static void deinit39(chpl____wide_BaseArr this12) {
  return;
}

/* ChapelDistribution.chpl:646 */
static chpl____wide_BaseDom dsiGetBaseDom3(chpl____wide_BaseArr this12) {
  string local__str_literal_1623;
  chpl____wide_BaseDom call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  BaseDom T = NULL;
  chpl____wide_BaseDom chpl_macro_tmp_4163;
  local__str_literal_1623 /* "internal error: dsiGetBaseDom is not implemented" */ = _str_literal_1623 /* "internal error: dsiGetBaseDom is not implemented" */;
  halt(&local__str_literal_1623 /* "internal error: dsiGetBaseDom is not implemented" */, INT64(647), INT32(29));
  T = ((BaseDom)(nil));
  chpl_macro_tmp_4163.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_4163.addr = T;
  call_tmp2 = chpl_macro_tmp_4163;
  return call_tmp2;
}

/* ChapelDistribution.chpl:655 */
static void remove4(chpl____wide_BaseArr this12,
                    _ref__tuple_2_BaseArr_BaseDom _retArg) {
  BaseDom T = NULL;
  chpl____wide_BaseDom ret_dom = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDom call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t count;
  chpl_localeID_t call_tmp3;
  _ref_int64_t T2 = NULL;
  chpl____wide_BaseDom rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr rvfDerefTmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect;
  chpl____wide__ref_int64_t T3 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn158 _args_foron_fn = NULL;
  _ref_int64_t T4 = NULL;
  chpl____wide__ref_int64_t T5 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn;
  chpl_bool call_tmp4;
  chpl____wide_BaseDom chpl_macro_tmp_4164;
  chpl____wide__ref_int32_t chpl_macro_tmp_4165;
  int32_t chpl_macro_tmp_4166;
  chpl____wide__ref_int64_t chpl_macro_tmp_4167;
  chpl__class_localson_fn158_object chpl_macro_tmp_4168;
  chpl____wide__ref_int64_t chpl_macro_tmp_4169;
  T = nil;
  chpl_macro_tmp_4164.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_4164.addr = T;
  ret_dom = chpl_macro_tmp_4164;
  chpl_macro_tmp_4165.locale = (&this12)->locale;
  chpl_macro_tmp_4165.addr = &(((object)((&this12)->addr))->chpl__cid);
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_4166)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4165).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4165).addr, sizeof(int32_t), -1, COMMID(31), INT64(660), INT64(29));
  call_tmp2 = ((chpl____wide_BaseDom(*)(chpl____wide_BaseArr))chpl_vmtable[((INT64(9) * chpl_macro_tmp_4166) + INT64(6))])(this12);
  count = INT64(-1);
  call_tmp3 = (&call_tmp2)->locale;
  T2 = &count;
  rvfDerefTmp = call_tmp2;
  rvfDerefTmp2 = this12;
  isdirect = chpl_doDirectExecuteOn(&call_tmp3);
  if (isdirect) {
    chpl_macro_tmp_4167.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_4167.addr = T2;
    T3 = chpl_macro_tmp_4167;
    on_fn158(rvfDerefTmp, rvfDerefTmp2, T3);
  } else {
    _args_foron_fn = ((_class_localson_fn158)(&chpl_macro_tmp_4168));
    (_args_foron_fn)->_0_rvfDerefTmp = call_tmp3;
    (_args_foron_fn)->_1_rvfDerefTmp = rvfDerefTmp;
    (_args_foron_fn)->_2_rvfDerefTmp = rvfDerefTmp2;
    T4 = &count;
    chpl_macro_tmp_4169.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_4169.addr = T4;
    T5 = chpl_macro_tmp_4169;
    (_args_foron_fn)->_3_tmp = T5;
    _args_vforon_fn = ((void*)(_args_foron_fn));
    /*** wrapon_fn158 ***/ chpl_executeOn(&call_tmp3, INT32(223), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn158_object), INT64(236), INT32(29));
  }
  call_tmp4 = (count == INT64(0));
  if (call_tmp4) {
    ret_dom = call_tmp2;
  }
  (_retArg)->x1 = this12;
  (_retArg)->x2 = ret_dom;
  return;
}

/* ChapelDistribution.chpl:671 */
static void dsiDestroyArr(chpl____wide_BaseArr this12,
                          chpl_bool isalias) {
  return;
}

/* ChapelDistribution.chpl:673 */
static void dsiReallocate2(chpl____wide_BaseArr this12,
                           chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_F d) {
  string local__str_literal_1626;
  local__str_literal_1626 /* "reallocating not supported for this array type" */ = _str_literal_1626 /* "reallocating not supported for this array type" */;
  halt(&local__str_literal_1626 /* "reallocating not supported for this array type" */, INT64(674), INT32(29));
  return;
}

/* ChapelDistribution.chpl:673 */
static void dsiReallocate(chpl____wide_BaseArr this12,
                          chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_T d) {
  string local__str_literal_1626;
  local__str_literal_1626 /* "reallocating not supported for this array type" */ = _str_literal_1626 /* "reallocating not supported for this array type" */;
  halt(&local__str_literal_1626 /* "reallocating not supported for this array type" */, INT64(674), INT32(29));
  return;
}

/* ChapelDistribution.chpl:677 */
static void dsiPostReallocate(chpl____wide_BaseArr this12) {
  return;
}

/* ChapelDistribution.chpl:716 */
static void _backupArray(chpl____wide_BaseArr this12) {
  string local__str_literal_1640;
  local__str_literal_1640 /* "_backupArray() not supported for non-associative arrays" */ = _str_literal_1640 /* "_backupArray() not supported for non-associative arrays" */;
  halt(&local__str_literal_1640 /* "_backupArray() not supported for non-associative arrays" */, INT64(717), INT32(29));
  return;
}

/* ChapelDistribution.chpl:720 */
static void _removeArrayBackup(chpl____wide_BaseArr this12) {
  string local__str_literal_1642;
  local__str_literal_1642 /* "_removeArrayBackup() not supported for non-associative arrays" */ = _str_literal_1642 /* "_removeArrayBackup() not supported for non-associative arrays" */;
  halt(&local__str_literal_1642 /* "_removeArrayBackup() not supported for non-associative arrays" */, INT64(721), INT32(29));
  return;
}

/* ChapelDistribution.chpl:724 */
static void _preserveArrayElement(chpl____wide_BaseArr this12,
                                  int64_t oldslot,
                                  int64_t newslot) {
  string local__str_literal_1644;
  local__str_literal_1644 /* "_preserveArrayElement() not supported for non-associative arrays" */ = _str_literal_1644 /* "_preserveArrayElement() not supported for non-associative arrays" */;
  halt(&local__str_literal_1644 /* "_preserveArrayElement() not supported for non-associative arrays" */, INT64(725), INT32(29));
  return;
}

/* ChapelDistribution.chpl:834 */
static void _delete_dist(chpl____wide_BaseDist dist6) {
  chpl_localeID_t call_tmp2;
  chpl____wide_BaseDist rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect;
  _class_localson_fn123 _args_foron_fn = NULL;
  c_void_ptr _args_vforon_fn;
  chpl____wide__ref_int32_t chpl_macro_tmp_4170;
  int32_t chpl_macro_tmp_4171;
  chpl____wide__ref_int32_t chpl_macro_tmp_4172;
  int32_t chpl_macro_tmp_4173;
  chpl__class_localson_fn123_object chpl_macro_tmp_4174;
  chpl_macro_tmp_4170.locale = (&dist6)->locale;
  chpl_macro_tmp_4170.addr = &(((object)((&dist6)->addr))->chpl__cid);
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_4171)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4170).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4170).addr, sizeof(int32_t), -1, COMMID(32), INT64(835), INT64(29));
  ((void(*)(chpl____wide_BaseDist))chpl_vmtable[((INT64(9) * chpl_macro_tmp_4171) + INT64(2))])(dist6);
  chpl_macro_tmp_4172.locale = (&dist6)->locale;
  chpl_macro_tmp_4172.addr = &(((object)((&dist6)->addr))->chpl__cid);
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_4173)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4172).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4172).addr, sizeof(int32_t), -1, COMMID(33), INT64(841), INT64(29));
  ((void(*)(chpl____wide_BaseDist))chpl_vmtable[((INT64(9) * chpl_macro_tmp_4173) + INT64(0))])(dist6);
  call_tmp2 = (&dist6)->locale;
  rvfDerefTmp = dist6;
  isdirect = chpl_doDirectExecuteOn(&call_tmp2);
  if (isdirect) {
    on_fn122(rvfDerefTmp);
  } else {
    _args_foron_fn = ((_class_localson_fn123)(&chpl_macro_tmp_4174));
    (_args_foron_fn)->_0_rvfDerefTmp = call_tmp2;
    (_args_foron_fn)->_1_rvfDerefTmp = rvfDerefTmp;
    _args_vforon_fn = ((void*)(_args_foron_fn));
    /*** wrapon_fn142 ***/ chpl_executeOn(&call_tmp2, INT32(207), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn123_object), INT64(1227), INT32(2));
  }
  return;
}

/* ChapelDistribution.chpl:834 */
static void _delete_dist2(chpl____wide_BaseDist dist6) {
  int64_t T;
  chpl____wide_object call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp3;
  chpl____wide_BaseDist rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect;
  _class_localson_fn123 _args_foron_fn = NULL;
  c_void_ptr _args_vforon_fn;
  chpl____wide__ref_int32_t chpl_macro_tmp_4175;
  int32_t chpl_macro_tmp_4176;
  chpl____wide__ref_int64_t chpl_macro_tmp_4177;
  chpl____wide_object chpl_macro_tmp_4178;
  chpl____wide__ref_int32_t chpl_macro_tmp_4179;
  int32_t chpl_macro_tmp_4180;
  chpl__class_localson_fn123_object chpl_macro_tmp_4181;
  chpl_macro_tmp_4175.locale = (&dist6)->locale;
  chpl_macro_tmp_4175.addr = &(((object)((&dist6)->addr))->chpl__cid);
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_4176)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4175).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4175).addr, sizeof(int32_t), -1, COMMID(34), INT64(835), INT64(29));
  ((void(*)(chpl____wide_BaseDist))chpl_vmtable[((INT64(9) * chpl_macro_tmp_4176) + INT64(2))])(dist6);
  chpl_macro_tmp_4177.locale = (&dist6)->locale;
  chpl_macro_tmp_4177.addr = &(((&dist6)->addr)->pid);
  chpl_gen_comm_get(((void*)(&T)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4177).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4177).addr, sizeof(int64_t), -1, COMMID(35), INT64(838), INT64(29));
  chpl_macro_tmp_4178.locale = (&dist6)->locale;
  chpl_macro_tmp_4178.addr = ((object)((&dist6)->addr));
  call_tmp2 = chpl_macro_tmp_4178;
  _freePrivatizedClass(T, call_tmp2);
  chpl_macro_tmp_4179.locale = (&dist6)->locale;
  chpl_macro_tmp_4179.addr = &(((object)((&dist6)->addr))->chpl__cid);
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_4180)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4179).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4179).addr, sizeof(int32_t), -1, COMMID(36), INT64(841), INT64(29));
  ((void(*)(chpl____wide_BaseDist))chpl_vmtable[((INT64(9) * chpl_macro_tmp_4180) + INT64(0))])(dist6);
  call_tmp3 = (&dist6)->locale;
  rvfDerefTmp = dist6;
  isdirect = chpl_doDirectExecuteOn(&call_tmp3);
  if (isdirect) {
    on_fn122(rvfDerefTmp);
  } else {
    _args_foron_fn = ((_class_localson_fn123)(&chpl_macro_tmp_4181));
    (_args_foron_fn)->_0_rvfDerefTmp = call_tmp3;
    (_args_foron_fn)->_1_rvfDerefTmp = rvfDerefTmp;
    _args_vforon_fn = ((void*)(_args_foron_fn));
    /*** wrapon_fn142 ***/ chpl_executeOn(&call_tmp3, INT32(207), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn123_object), INT64(1227), INT32(2));
  }
  return;
}

/* ChapelDistribution.chpl:844 */
static void _delete_dom2(chpl____wide_DefaultAssociativeDom_int64_t_T dom) {
  chpl____wide_BaseAssociativeDom call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp3;
  chpl____wide_DefaultAssociativeDom_int64_t_T rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect;
  _class_localson_fn136 _args_foron_fn = NULL;
  c_void_ptr _args_vforon_fn;
  chpl____wide_BaseAssociativeDom chpl_macro_tmp_4182;
  chpl____wide__ref_int32_t chpl_macro_tmp_4183;
  int32_t chpl_macro_tmp_4184;
  chpl__class_localson_fn136_object chpl_macro_tmp_4185;
  chpl_macro_tmp_4182.locale = (&dom)->locale;
  chpl_macro_tmp_4182.addr = ((BaseAssociativeDom)((&dom)->addr));
  call_tmp2 = chpl_macro_tmp_4182;
  chpl_macro_tmp_4183.locale = (&call_tmp2)->locale;
  chpl_macro_tmp_4183.addr = &(((object)((&call_tmp2)->addr))->chpl__cid);
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_4184)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4183).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4183).addr, sizeof(int32_t), -1, COMMID(37), INT64(859), INT64(29));
  ((void(*)(chpl____wide_BaseAssociativeDom))chpl_vmtable[((INT64(9) * chpl_macro_tmp_4184) + INT64(0))])(call_tmp2);
  call_tmp3 = (&dom)->locale;
  rvfDerefTmp = dom;
  isdirect = chpl_doDirectExecuteOn(&call_tmp3);
  if (isdirect) {
    on_fn116(rvfDerefTmp);
  } else {
    _args_foron_fn = ((_class_localson_fn136)(&chpl_macro_tmp_4185));
    (_args_foron_fn)->_0_rvfDerefTmp = call_tmp3;
    (_args_foron_fn)->_1_rvfDerefTmp = rvfDerefTmp;
    _args_vforon_fn = ((void*)(_args_foron_fn));
    /*** wrapon_fn135 ***/ chpl_executeOn(&call_tmp3, INT32(200), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn136_object), INT64(1227), INT32(2));
  }
  return;
}

/* ChapelDistribution.chpl:844 */
static void _delete_dom4(chpl____wide_ReplicatedDom_1_int64_t_F dom) {
  chpl____wide_BaseDom coerce_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDom call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t T;
  chpl____wide_object call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseRectangularDom call_tmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp5;
  chpl____wide_ReplicatedDom_1_int64_t_F rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect;
  _class_localson_fn112 _args_foron_fn = NULL;
  c_void_ptr _args_vforon_fn;
  chpl____wide_BaseDom chpl_macro_tmp_4186;
  chpl____wide__ref_int64_t chpl_macro_tmp_4187;
  chpl____wide_object chpl_macro_tmp_4188;
  chpl____wide_BaseRectangularDom chpl_macro_tmp_4189;
  chpl____wide__ref_int32_t chpl_macro_tmp_4190;
  int32_t chpl_macro_tmp_4191;
  chpl__class_localson_fn112_object chpl_macro_tmp_4192;
  dsiDestroyDom_chpl2(dom);
  chpl_macro_tmp_4186.locale = (&dom)->locale;
  chpl_macro_tmp_4186.addr = ((BaseDom)((&dom)->addr));
  call_tmp2 = chpl_macro_tmp_4186;
  coerce_tmp = call_tmp2;
  chpl_macro_tmp_4187.locale = (&coerce_tmp)->locale;
  chpl_macro_tmp_4187.addr = &(((&coerce_tmp)->addr)->pid);
  chpl_gen_comm_get(((void*)(&T)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4187).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4187).addr, sizeof(int64_t), -1, COMMID(38), INT64(856), INT64(29));
  chpl_macro_tmp_4188.locale = (&dom)->locale;
  chpl_macro_tmp_4188.addr = ((object)((&dom)->addr));
  call_tmp3 = chpl_macro_tmp_4188;
  _freePrivatizedClass(T, call_tmp3);
  chpl_macro_tmp_4189.locale = (&dom)->locale;
  chpl_macro_tmp_4189.addr = ((BaseRectangularDom)((&dom)->addr));
  call_tmp4 = chpl_macro_tmp_4189;
  chpl_macro_tmp_4190.locale = (&call_tmp4)->locale;
  chpl_macro_tmp_4190.addr = &(((object)((&call_tmp4)->addr))->chpl__cid);
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_4191)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4190).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4190).addr, sizeof(int32_t), -1, COMMID(39), INT64(859), INT64(29));
  ((void(*)(chpl____wide_BaseRectangularDom))chpl_vmtable[((INT64(9) * chpl_macro_tmp_4191) + INT64(0))])(call_tmp4);
  call_tmp5 = (&dom)->locale;
  rvfDerefTmp = dom;
  isdirect = chpl_doDirectExecuteOn(&call_tmp5);
  if (isdirect) {
    on_fn136(rvfDerefTmp);
  } else {
    _args_foron_fn = ((_class_localson_fn112)(&chpl_macro_tmp_4192));
    (_args_foron_fn)->_0_rvfDerefTmp = call_tmp5;
    (_args_foron_fn)->_1_rvfDerefTmp = rvfDerefTmp;
    _args_vforon_fn = ((void*)(_args_foron_fn));
    /*** wrapon_fn126 ***/ chpl_executeOn(&call_tmp5, INT32(191), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn112_object), INT64(1227), INT32(2));
  }
  return;
}

/* ChapelDistribution.chpl:844 */
static void _delete_dom(chpl____wide_CyclicDom_1_int64_t_F dom) {
  chpl____wide_BaseDom coerce_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDom call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t T;
  chpl____wide_object call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseRectangularDom call_tmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp5;
  chpl____wide_CyclicDom_1_int64_t_F rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect;
  _class_localson_fn153 _args_foron_fn = NULL;
  c_void_ptr _args_vforon_fn;
  chpl____wide_BaseDom chpl_macro_tmp_4193;
  chpl____wide__ref_int64_t chpl_macro_tmp_4194;
  chpl____wide_object chpl_macro_tmp_4195;
  chpl____wide_BaseRectangularDom chpl_macro_tmp_4196;
  chpl____wide__ref_int32_t chpl_macro_tmp_4197;
  int32_t chpl_macro_tmp_4198;
  chpl__class_localson_fn153_object chpl_macro_tmp_4199;
  dsiDestroyDom_chpl(dom);
  chpl_macro_tmp_4193.locale = (&dom)->locale;
  chpl_macro_tmp_4193.addr = ((BaseDom)((&dom)->addr));
  call_tmp2 = chpl_macro_tmp_4193;
  coerce_tmp = call_tmp2;
  chpl_macro_tmp_4194.locale = (&coerce_tmp)->locale;
  chpl_macro_tmp_4194.addr = &(((&coerce_tmp)->addr)->pid);
  chpl_gen_comm_get(((void*)(&T)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4194).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4194).addr, sizeof(int64_t), -1, COMMID(40), INT64(856), INT64(29));
  chpl_macro_tmp_4195.locale = (&dom)->locale;
  chpl_macro_tmp_4195.addr = ((object)((&dom)->addr));
  call_tmp3 = chpl_macro_tmp_4195;
  _freePrivatizedClass(T, call_tmp3);
  chpl_macro_tmp_4196.locale = (&dom)->locale;
  chpl_macro_tmp_4196.addr = ((BaseRectangularDom)((&dom)->addr));
  call_tmp4 = chpl_macro_tmp_4196;
  chpl_macro_tmp_4197.locale = (&call_tmp4)->locale;
  chpl_macro_tmp_4197.addr = &(((object)((&call_tmp4)->addr))->chpl__cid);
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_4198)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4197).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4197).addr, sizeof(int32_t), -1, COMMID(41), INT64(859), INT64(29));
  ((void(*)(chpl____wide_BaseRectangularDom))chpl_vmtable[((INT64(9) * chpl_macro_tmp_4198) + INT64(0))])(call_tmp4);
  call_tmp5 = (&dom)->locale;
  rvfDerefTmp = dom;
  isdirect = chpl_doDirectExecuteOn(&call_tmp5);
  if (isdirect) {
    on_fn149(rvfDerefTmp);
  } else {
    _args_foron_fn = ((_class_localson_fn153)(&chpl_macro_tmp_4199));
    (_args_foron_fn)->_0_rvfDerefTmp = call_tmp5;
    (_args_foron_fn)->_1_rvfDerefTmp = rvfDerefTmp;
    _args_vforon_fn = ((void*)(_args_foron_fn));
    /*** wrapon_fn134 ***/ chpl_executeOn(&call_tmp5, INT32(199), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn153_object), INT64(1227), INT32(2));
  }
  return;
}

/* ChapelDistribution.chpl:844 */
static void _delete_dom3(chpl____wide_DefaultRectangularDom_1_int64_t_T dom) {
  chpl____wide_BaseRectangularDom call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp3;
  chpl____wide_DefaultRectangularDom_1_int64_t_T rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect;
  _class_localson_fn106 _args_foron_fn = NULL;
  c_void_ptr _args_vforon_fn;
  chpl____wide_BaseRectangularDom chpl_macro_tmp_4200;
  chpl____wide__ref_int32_t chpl_macro_tmp_4201;
  int32_t chpl_macro_tmp_4202;
  chpl__class_localson_fn106_object chpl_macro_tmp_4203;
  chpl_macro_tmp_4200.locale = (&dom)->locale;
  chpl_macro_tmp_4200.addr = ((BaseRectangularDom)((&dom)->addr));
  call_tmp2 = chpl_macro_tmp_4200;
  chpl_macro_tmp_4201.locale = (&call_tmp2)->locale;
  chpl_macro_tmp_4201.addr = &(((object)((&call_tmp2)->addr))->chpl__cid);
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_4202)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4201).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4201).addr, sizeof(int32_t), -1, COMMID(42), INT64(859), INT64(29));
  ((void(*)(chpl____wide_BaseRectangularDom))chpl_vmtable[((INT64(9) * chpl_macro_tmp_4202) + INT64(0))])(call_tmp2);
  call_tmp3 = (&dom)->locale;
  rvfDerefTmp = dom;
  isdirect = chpl_doDirectExecuteOn(&call_tmp3);
  if (isdirect) {
    on_fn153(rvfDerefTmp);
  } else {
    _args_foron_fn = ((_class_localson_fn106)(&chpl_macro_tmp_4203));
    (_args_foron_fn)->_0_rvfDerefTmp = call_tmp3;
    (_args_foron_fn)->_1_rvfDerefTmp = rvfDerefTmp;
    _args_vforon_fn = ((void*)(_args_foron_fn));
    /*** wrapon_fn102 ***/ chpl_executeOn(&call_tmp3, INT32(167), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn106_object), INT64(1227), INT32(2));
  }
  return;
}

/* ChapelDistribution.chpl:844 */
static void _delete_dom5(chpl____wide_DefaultRectangularDom_1_int64_t_F dom) {
  chpl____wide_BaseRectangularDom call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp3;
  chpl____wide_DefaultRectangularDom_1_int64_t_F rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect;
  _class_localson_fn124 _args_foron_fn = NULL;
  c_void_ptr _args_vforon_fn;
  chpl____wide_BaseRectangularDom chpl_macro_tmp_4204;
  chpl____wide__ref_int32_t chpl_macro_tmp_4205;
  int32_t chpl_macro_tmp_4206;
  chpl__class_localson_fn124_object chpl_macro_tmp_4207;
  chpl_macro_tmp_4204.locale = (&dom)->locale;
  chpl_macro_tmp_4204.addr = ((BaseRectangularDom)((&dom)->addr));
  call_tmp2 = chpl_macro_tmp_4204;
  chpl_macro_tmp_4205.locale = (&call_tmp2)->locale;
  chpl_macro_tmp_4205.addr = &(((object)((&call_tmp2)->addr))->chpl__cid);
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_4206)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4205).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4205).addr, sizeof(int32_t), -1, COMMID(43), INT64(859), INT64(29));
  ((void(*)(chpl____wide_BaseRectangularDom))chpl_vmtable[((INT64(9) * chpl_macro_tmp_4206) + INT64(0))])(call_tmp2);
  call_tmp3 = (&dom)->locale;
  rvfDerefTmp = dom;
  isdirect = chpl_doDirectExecuteOn(&call_tmp3);
  if (isdirect) {
    on_fn106(rvfDerefTmp);
  } else {
    _args_foron_fn = ((_class_localson_fn124)(&chpl_macro_tmp_4207));
    (_args_foron_fn)->_0_rvfDerefTmp = call_tmp3;
    (_args_foron_fn)->_1_rvfDerefTmp = rvfDerefTmp;
    _args_vforon_fn = ((void*)(_args_foron_fn));
    /*** wrapon_fn146 ***/ chpl_executeOn(&call_tmp3, INT32(211), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn124_object), INT64(1227), INT32(2));
  }
  return;
}

/* ChapelDistribution.chpl:863 */
static void _delete_arr5(chpl____wide_ReplicatedArr_FCHGlobalNode_ReplicatedDom_1_int64_t_F arr) {
  chpl_bool ret;
  chpl____wide_BaseArr coerce_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr coerce_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp4;
  chpl____wide_object T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp5;
  chpl____wide_BaseArr call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr coerce_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr call_tmp7 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t T2;
  chpl____wide_object call_tmp8 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr call_tmp9 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp10;
  chpl____wide_ReplicatedArr_FCHGlobalNode_ReplicatedDom_1_int64_t_F rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect;
  _class_localson_fn128 _args_foron_fn = NULL;
  c_void_ptr _args_vforon_fn;
  chpl____wide_BaseArr chpl_macro_tmp_4208;
  chpl____wide__ref__wide_BaseArr chpl_macro_tmp_4209;
  chpl____wide_object chpl_macro_tmp_4210;
  chpl____wide__nilType chpl_macro_tmp_4211;
  chpl____wide_object chpl_macro_tmp_4212;
  chpl____wide_BaseArr chpl_macro_tmp_4213;
  chpl____wide_BaseArr chpl_macro_tmp_4214;
  chpl____wide__ref_int64_t chpl_macro_tmp_4215;
  chpl____wide_object chpl_macro_tmp_4216;
  chpl____wide_BaseArr chpl_macro_tmp_4217;
  chpl____wide__ref_int32_t chpl_macro_tmp_4218;
  int32_t chpl_macro_tmp_4219;
  chpl__class_localson_fn128_object chpl_macro_tmp_4220;
  chpl_macro_tmp_4208.locale = (&arr)->locale;
  chpl_macro_tmp_4208.addr = ((BaseArr)((&arr)->addr));
  call_tmp2 = chpl_macro_tmp_4208;
  coerce_tmp = call_tmp2;
  chpl_macro_tmp_4209.locale = (&coerce_tmp)->locale;
  chpl_macro_tmp_4209.addr = &(((&coerce_tmp)->addr)->_arrAlias);
  chpl_gen_comm_get(((void*)(&coerce_tmp2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4209).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4209).addr, sizeof(chpl____wide_BaseArr), -1, COMMID(44), INT64(865), INT64(29));
  chpl_macro_tmp_4210.locale = (&coerce_tmp2)->locale;
  chpl_macro_tmp_4210.addr = ((object)((&coerce_tmp2)->addr));
  call_tmp3 = chpl_macro_tmp_4210;
  chpl_macro_tmp_4211.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_4211.addr = nil;
  chpl_macro_tmp_4212.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_4212.addr = NULL;
  T = chpl_macro_tmp_4212;
  call_tmp4 = (((&call_tmp3)->addr != (&T)->addr) || ((!(! (&call_tmp3)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp3)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&T)->locale), INT64(0), INT32(0)))));
  if (call_tmp4) {
    ret = UINT8(true);
    goto _end__if_fn733;
  } else {
    ret = UINT8(false);
    goto _end__if_fn733;
  }
  _end__if_fn733:;
  dsiDestroyArr_chpl4(arr, ret);
  call_tmp5 = (! ret);
  if (call_tmp5) {
    chpl_macro_tmp_4213.locale = (&arr)->locale;
    chpl_macro_tmp_4213.addr = ((BaseArr)((&arr)->addr));
    call_tmp6 = chpl_macro_tmp_4213;
    chpl_decRefCountsForDomainsInArrayEltTypes17(call_tmp6);
  }
  chpl_macro_tmp_4214.locale = (&arr)->locale;
  chpl_macro_tmp_4214.addr = ((BaseArr)((&arr)->addr));
  call_tmp7 = chpl_macro_tmp_4214;
  coerce_tmp3 = call_tmp7;
  chpl_macro_tmp_4215.locale = (&coerce_tmp3)->locale;
  chpl_macro_tmp_4215.addr = &(((&coerce_tmp3)->addr)->pid);
  chpl_gen_comm_get(((void*)(&T2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4215).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4215).addr, sizeof(int64_t), -1, COMMID(45), INT64(881), INT64(29));
  chpl_macro_tmp_4216.locale = (&arr)->locale;
  chpl_macro_tmp_4216.addr = ((object)((&arr)->addr));
  call_tmp8 = chpl_macro_tmp_4216;
  _freePrivatizedClass(T2, call_tmp8);
  chpl_macro_tmp_4217.locale = (&arr)->locale;
  chpl_macro_tmp_4217.addr = ((BaseArr)((&arr)->addr));
  call_tmp9 = chpl_macro_tmp_4217;
  chpl_macro_tmp_4218.locale = (&call_tmp9)->locale;
  chpl_macro_tmp_4218.addr = &(((object)((&call_tmp9)->addr))->chpl__cid);
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_4219)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4218).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4218).addr, sizeof(int32_t), -1, COMMID(46), INT64(885), INT64(29));
  ((void(*)(chpl____wide_BaseArr))chpl_vmtable[((INT64(9) * chpl_macro_tmp_4219) + INT64(0))])(call_tmp9);
  call_tmp10 = (&arr)->locale;
  rvfDerefTmp = arr;
  isdirect = chpl_doDirectExecuteOn(&call_tmp10);
  if (isdirect) {
    on_fn127(rvfDerefTmp);
  } else {
    _args_foron_fn = ((_class_localson_fn128)(&chpl_macro_tmp_4220));
    (_args_foron_fn)->_0_rvfDerefTmp = call_tmp10;
    (_args_foron_fn)->_1_rvfDerefTmp = rvfDerefTmp;
    _args_vforon_fn = ((void*)(_args_foron_fn));
    /*** wrapon_fn136 ***/ chpl_executeOn(&call_tmp10, INT32(201), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn128_object), INT64(1227), INT32(2));
  }
  return;
}

/* ChapelDistribution.chpl:863 */
static void _delete_arr14(chpl____wide_DefaultRectangularArr_locale_1_int64_t_F_int64_t arr) {
  chpl_bool ret;
  chpl____wide_BaseArr coerce_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr coerce_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp4;
  chpl____wide_object T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp5;
  chpl____wide_BaseArr call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr call_tmp7 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp8;
  chpl____wide_DefaultRectangularArr_locale_1_int64_t_F_int64_t rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect;
  _class_localson_fn103 _args_foron_fn = NULL;
  c_void_ptr _args_vforon_fn;
  chpl____wide_BaseArr chpl_macro_tmp_4221;
  chpl____wide__ref__wide_BaseArr chpl_macro_tmp_4222;
  chpl____wide_object chpl_macro_tmp_4223;
  chpl____wide__nilType chpl_macro_tmp_4224;
  chpl____wide_object chpl_macro_tmp_4225;
  chpl____wide_BaseArr chpl_macro_tmp_4226;
  chpl____wide_BaseArr chpl_macro_tmp_4227;
  chpl____wide__ref_int32_t chpl_macro_tmp_4228;
  int32_t chpl_macro_tmp_4229;
  chpl__class_localson_fn103_object chpl_macro_tmp_4230;
  chpl_macro_tmp_4221.locale = (&arr)->locale;
  chpl_macro_tmp_4221.addr = ((BaseArr)((&arr)->addr));
  call_tmp2 = chpl_macro_tmp_4221;
  coerce_tmp = call_tmp2;
  chpl_macro_tmp_4222.locale = (&coerce_tmp)->locale;
  chpl_macro_tmp_4222.addr = &(((&coerce_tmp)->addr)->_arrAlias);
  chpl_gen_comm_get(((void*)(&coerce_tmp2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4222).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4222).addr, sizeof(chpl____wide_BaseArr), -1, COMMID(47), INT64(865), INT64(29));
  chpl_macro_tmp_4223.locale = (&coerce_tmp2)->locale;
  chpl_macro_tmp_4223.addr = ((object)((&coerce_tmp2)->addr));
  call_tmp3 = chpl_macro_tmp_4223;
  chpl_macro_tmp_4224.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_4224.addr = nil;
  chpl_macro_tmp_4225.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_4225.addr = NULL;
  T = chpl_macro_tmp_4225;
  call_tmp4 = (((&call_tmp3)->addr != (&T)->addr) || ((!(! (&call_tmp3)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp3)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&T)->locale), INT64(0), INT32(0)))));
  if (call_tmp4) {
    ret = UINT8(true);
    goto _end__if_fn733;
  } else {
    ret = UINT8(false);
    goto _end__if_fn733;
  }
  _end__if_fn733:;
  dsiDestroyArr10(arr, ret);
  call_tmp5 = (! ret);
  if (call_tmp5) {
    chpl_macro_tmp_4226.locale = (&arr)->locale;
    chpl_macro_tmp_4226.addr = ((BaseArr)((&arr)->addr));
    call_tmp6 = chpl_macro_tmp_4226;
    chpl_decRefCountsForDomainsInArrayEltTypes3(call_tmp6);
  }
  chpl_macro_tmp_4227.locale = (&arr)->locale;
  chpl_macro_tmp_4227.addr = ((BaseArr)((&arr)->addr));
  call_tmp7 = chpl_macro_tmp_4227;
  chpl_macro_tmp_4228.locale = (&call_tmp7)->locale;
  chpl_macro_tmp_4228.addr = &(((object)((&call_tmp7)->addr))->chpl__cid);
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_4229)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4228).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4228).addr, sizeof(int32_t), -1, COMMID(48), INT64(885), INT64(29));
  ((void(*)(chpl____wide_BaseArr))chpl_vmtable[((INT64(9) * chpl_macro_tmp_4229) + INT64(0))])(call_tmp7);
  call_tmp8 = (&arr)->locale;
  rvfDerefTmp = arr;
  isdirect = chpl_doDirectExecuteOn(&call_tmp8);
  if (isdirect) {
    on_fn107(rvfDerefTmp);
  } else {
    _args_foron_fn = ((_class_localson_fn103)(&chpl_macro_tmp_4230));
    (_args_foron_fn)->_0_rvfDerefTmp = call_tmp8;
    (_args_foron_fn)->_1_rvfDerefTmp = rvfDerefTmp;
    _args_vforon_fn = ((void*)(_args_foron_fn));
    /*** wrapon_fn148 ***/ chpl_executeOn(&call_tmp8, INT32(213), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn103_object), INT64(1227), INT32(2));
  }
  return;
}

/* ChapelDistribution.chpl:863 */
static void _delete_arr24(chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F_int64_t arr) {
  chpl_bool ret;
  chpl____wide_BaseArr coerce_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr coerce_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp4;
  chpl____wide_object T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp5;
  chpl____wide_BaseArr call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr call_tmp7 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp8;
  chpl____wide_DefaultRectangularArr_localesSignal_1_int64_t_F_int64_t rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect;
  _class_localson_fn107 _args_foron_fn = NULL;
  c_void_ptr _args_vforon_fn;
  chpl____wide_BaseArr chpl_macro_tmp_4231;
  chpl____wide__ref__wide_BaseArr chpl_macro_tmp_4232;
  chpl____wide_object chpl_macro_tmp_4233;
  chpl____wide__nilType chpl_macro_tmp_4234;
  chpl____wide_object chpl_macro_tmp_4235;
  chpl____wide_BaseArr chpl_macro_tmp_4236;
  chpl____wide_BaseArr chpl_macro_tmp_4237;
  chpl____wide__ref_int32_t chpl_macro_tmp_4238;
  int32_t chpl_macro_tmp_4239;
  chpl__class_localson_fn107_object chpl_macro_tmp_4240;
  chpl_macro_tmp_4231.locale = (&arr)->locale;
  chpl_macro_tmp_4231.addr = ((BaseArr)((&arr)->addr));
  call_tmp2 = chpl_macro_tmp_4231;
  coerce_tmp = call_tmp2;
  chpl_macro_tmp_4232.locale = (&coerce_tmp)->locale;
  chpl_macro_tmp_4232.addr = &(((&coerce_tmp)->addr)->_arrAlias);
  chpl_gen_comm_get(((void*)(&coerce_tmp2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4232).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4232).addr, sizeof(chpl____wide_BaseArr), -1, COMMID(49), INT64(865), INT64(29));
  chpl_macro_tmp_4233.locale = (&coerce_tmp2)->locale;
  chpl_macro_tmp_4233.addr = ((object)((&coerce_tmp2)->addr));
  call_tmp3 = chpl_macro_tmp_4233;
  chpl_macro_tmp_4234.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_4234.addr = nil;
  chpl_macro_tmp_4235.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_4235.addr = NULL;
  T = chpl_macro_tmp_4235;
  call_tmp4 = (((&call_tmp3)->addr != (&T)->addr) || ((!(! (&call_tmp3)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp3)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&T)->locale), INT64(0), INT32(0)))));
  if (call_tmp4) {
    ret = UINT8(true);
    goto _end__if_fn733;
  } else {
    ret = UINT8(false);
    goto _end__if_fn733;
  }
  _end__if_fn733:;
  dsiDestroyArr15(arr, ret);
  call_tmp5 = (! ret);
  if (call_tmp5) {
    chpl_macro_tmp_4236.locale = (&arr)->locale;
    chpl_macro_tmp_4236.addr = ((BaseArr)((&arr)->addr));
    call_tmp6 = chpl_macro_tmp_4236;
    chpl_decRefCountsForDomainsInArrayEltTypes10(call_tmp6);
  }
  chpl_macro_tmp_4237.locale = (&arr)->locale;
  chpl_macro_tmp_4237.addr = ((BaseArr)((&arr)->addr));
  call_tmp7 = chpl_macro_tmp_4237;
  chpl_macro_tmp_4238.locale = (&call_tmp7)->locale;
  chpl_macro_tmp_4238.addr = &(((object)((&call_tmp7)->addr))->chpl__cid);
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_4239)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4238).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4238).addr, sizeof(int32_t), -1, COMMID(50), INT64(885), INT64(29));
  ((void(*)(chpl____wide_BaseArr))chpl_vmtable[((INT64(9) * chpl_macro_tmp_4239) + INT64(0))])(call_tmp7);
  call_tmp8 = (&arr)->locale;
  rvfDerefTmp = arr;
  isdirect = chpl_doDirectExecuteOn(&call_tmp8);
  if (isdirect) {
    on_fn115(rvfDerefTmp);
  } else {
    _args_foron_fn = ((_class_localson_fn107)(&chpl_macro_tmp_4240));
    (_args_foron_fn)->_0_rvfDerefTmp = call_tmp8;
    (_args_foron_fn)->_1_rvfDerefTmp = rvfDerefTmp;
    _args_vforon_fn = ((void*)(_args_foron_fn));
    /*** wrapon_fn125 ***/ chpl_executeOn(&call_tmp8, INT32(190), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn107_object), INT64(1227), INT32(2));
  }
  return;
}

/* ChapelDistribution.chpl:863 */
static void _delete_arr13(chpl____wide_DefaultRectangularArr_LocCyclic_1_int64_t_1_int64_t_F_int64_t arr) {
  chpl_bool ret;
  chpl____wide_BaseArr coerce_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr coerce_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp4;
  chpl____wide_object T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp5;
  chpl____wide_BaseArr call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr call_tmp7 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp8;
  chpl____wide_DefaultRectangularArr_LocCyclic_1_int64_t_1_int64_t_F_int64_t rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect;
  _class_localson_fn117 _args_foron_fn = NULL;
  c_void_ptr _args_vforon_fn;
  chpl____wide_BaseArr chpl_macro_tmp_4241;
  chpl____wide__ref__wide_BaseArr chpl_macro_tmp_4242;
  chpl____wide_object chpl_macro_tmp_4243;
  chpl____wide__nilType chpl_macro_tmp_4244;
  chpl____wide_object chpl_macro_tmp_4245;
  chpl____wide_BaseArr chpl_macro_tmp_4246;
  chpl____wide_BaseArr chpl_macro_tmp_4247;
  chpl____wide__ref_int32_t chpl_macro_tmp_4248;
  int32_t chpl_macro_tmp_4249;
  chpl__class_localson_fn117_object chpl_macro_tmp_4250;
  chpl_macro_tmp_4241.locale = (&arr)->locale;
  chpl_macro_tmp_4241.addr = ((BaseArr)((&arr)->addr));
  call_tmp2 = chpl_macro_tmp_4241;
  coerce_tmp = call_tmp2;
  chpl_macro_tmp_4242.locale = (&coerce_tmp)->locale;
  chpl_macro_tmp_4242.addr = &(((&coerce_tmp)->addr)->_arrAlias);
  chpl_gen_comm_get(((void*)(&coerce_tmp2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4242).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4242).addr, sizeof(chpl____wide_BaseArr), -1, COMMID(51), INT64(865), INT64(29));
  chpl_macro_tmp_4243.locale = (&coerce_tmp2)->locale;
  chpl_macro_tmp_4243.addr = ((object)((&coerce_tmp2)->addr));
  call_tmp3 = chpl_macro_tmp_4243;
  chpl_macro_tmp_4244.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_4244.addr = nil;
  chpl_macro_tmp_4245.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_4245.addr = NULL;
  T = chpl_macro_tmp_4245;
  call_tmp4 = (((&call_tmp3)->addr != (&T)->addr) || ((!(! (&call_tmp3)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp3)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&T)->locale), INT64(0), INT32(0)))));
  if (call_tmp4) {
    ret = UINT8(true);
    goto _end__if_fn733;
  } else {
    ret = UINT8(false);
    goto _end__if_fn733;
  }
  _end__if_fn733:;
  dsiDestroyArr3(arr, ret);
  call_tmp5 = (! ret);
  if (call_tmp5) {
    chpl_macro_tmp_4246.locale = (&arr)->locale;
    chpl_macro_tmp_4246.addr = ((BaseArr)((&arr)->addr));
    call_tmp6 = chpl_macro_tmp_4246;
    chpl_decRefCountsForDomainsInArrayEltTypes12(call_tmp6);
  }
  chpl_macro_tmp_4247.locale = (&arr)->locale;
  chpl_macro_tmp_4247.addr = ((BaseArr)((&arr)->addr));
  call_tmp7 = chpl_macro_tmp_4247;
  chpl_macro_tmp_4248.locale = (&call_tmp7)->locale;
  chpl_macro_tmp_4248.addr = &(((object)((&call_tmp7)->addr))->chpl__cid);
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_4249)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4248).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4248).addr, sizeof(int32_t), -1, COMMID(52), INT64(885), INT64(29));
  ((void(*)(chpl____wide_BaseArr))chpl_vmtable[((INT64(9) * chpl_macro_tmp_4249) + INT64(0))])(call_tmp7);
  call_tmp8 = (&arr)->locale;
  rvfDerefTmp = arr;
  isdirect = chpl_doDirectExecuteOn(&call_tmp8);
  if (isdirect) {
    on_fn144(rvfDerefTmp);
  } else {
    _args_foron_fn = ((_class_localson_fn117)(&chpl_macro_tmp_4250));
    (_args_foron_fn)->_0_rvfDerefTmp = call_tmp8;
    (_args_foron_fn)->_1_rvfDerefTmp = rvfDerefTmp;
    _args_vforon_fn = ((void*)(_args_foron_fn));
    /*** wrapon_fn108 ***/ chpl_executeOn(&call_tmp8, INT32(173), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn117_object), INT64(1227), INT32(2));
  }
  return;
}

/* ChapelDistribution.chpl:863 */
static void _delete_arr25(chpl____wide_DefaultRectangularArr_LocCyclicDom_1_int64_t_F_1_int64_t_F_int64_t arr) {
  chpl_bool ret;
  chpl____wide_BaseArr coerce_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr coerce_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp4;
  chpl____wide_object T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp5;
  chpl____wide_BaseArr call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr call_tmp7 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp8;
  chpl____wide_DefaultRectangularArr_LocCyclicDom_1_int64_t_F_1_int64_t_F_int64_t rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect;
  _class_localson_fn146 _args_foron_fn = NULL;
  c_void_ptr _args_vforon_fn;
  chpl____wide_BaseArr chpl_macro_tmp_4251;
  chpl____wide__ref__wide_BaseArr chpl_macro_tmp_4252;
  chpl____wide_object chpl_macro_tmp_4253;
  chpl____wide__nilType chpl_macro_tmp_4254;
  chpl____wide_object chpl_macro_tmp_4255;
  chpl____wide_BaseArr chpl_macro_tmp_4256;
  chpl____wide_BaseArr chpl_macro_tmp_4257;
  chpl____wide__ref_int32_t chpl_macro_tmp_4258;
  int32_t chpl_macro_tmp_4259;
  chpl__class_localson_fn146_object chpl_macro_tmp_4260;
  chpl_macro_tmp_4251.locale = (&arr)->locale;
  chpl_macro_tmp_4251.addr = ((BaseArr)((&arr)->addr));
  call_tmp2 = chpl_macro_tmp_4251;
  coerce_tmp = call_tmp2;
  chpl_macro_tmp_4252.locale = (&coerce_tmp)->locale;
  chpl_macro_tmp_4252.addr = &(((&coerce_tmp)->addr)->_arrAlias);
  chpl_gen_comm_get(((void*)(&coerce_tmp2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4252).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4252).addr, sizeof(chpl____wide_BaseArr), -1, COMMID(53), INT64(865), INT64(29));
  chpl_macro_tmp_4253.locale = (&coerce_tmp2)->locale;
  chpl_macro_tmp_4253.addr = ((object)((&coerce_tmp2)->addr));
  call_tmp3 = chpl_macro_tmp_4253;
  chpl_macro_tmp_4254.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_4254.addr = nil;
  chpl_macro_tmp_4255.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_4255.addr = NULL;
  T = chpl_macro_tmp_4255;
  call_tmp4 = (((&call_tmp3)->addr != (&T)->addr) || ((!(! (&call_tmp3)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp3)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&T)->locale), INT64(0), INT32(0)))));
  if (call_tmp4) {
    ret = UINT8(true);
    goto _end__if_fn733;
  } else {
    ret = UINT8(false);
    goto _end__if_fn733;
  }
  _end__if_fn733:;
  dsiDestroyArr6(arr, ret);
  call_tmp5 = (! ret);
  if (call_tmp5) {
    chpl_macro_tmp_4256.locale = (&arr)->locale;
    chpl_macro_tmp_4256.addr = ((BaseArr)((&arr)->addr));
    call_tmp6 = chpl_macro_tmp_4256;
    chpl_decRefCountsForDomainsInArrayEltTypes16(call_tmp6);
  }
  chpl_macro_tmp_4257.locale = (&arr)->locale;
  chpl_macro_tmp_4257.addr = ((BaseArr)((&arr)->addr));
  call_tmp7 = chpl_macro_tmp_4257;
  chpl_macro_tmp_4258.locale = (&call_tmp7)->locale;
  chpl_macro_tmp_4258.addr = &(((object)((&call_tmp7)->addr))->chpl__cid);
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_4259)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4258).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4258).addr, sizeof(int32_t), -1, COMMID(54), INT64(885), INT64(29));
  ((void(*)(chpl____wide_BaseArr))chpl_vmtable[((INT64(9) * chpl_macro_tmp_4259) + INT64(0))])(call_tmp7);
  call_tmp8 = (&arr)->locale;
  rvfDerefTmp = arr;
  isdirect = chpl_doDirectExecuteOn(&call_tmp8);
  if (isdirect) {
    on_fn133(rvfDerefTmp);
  } else {
    _args_foron_fn = ((_class_localson_fn146)(&chpl_macro_tmp_4260));
    (_args_foron_fn)->_0_rvfDerefTmp = call_tmp8;
    (_args_foron_fn)->_1_rvfDerefTmp = rvfDerefTmp;
    _args_vforon_fn = ((void*)(_args_foron_fn));
    /*** wrapon_fn124 ***/ chpl_executeOn(&call_tmp8, INT32(189), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn146_object), INT64(1227), INT32(2));
  }
  return;
}

/* ChapelDistribution.chpl:863 */
static void _delete_arr15(chpl____wide_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t arr) {
  chpl_bool ret;
  chpl____wide_BaseArr coerce_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr coerce_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp4;
  chpl____wide_object T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp5;
  chpl____wide_BaseArr call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr call_tmp7 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp8;
  chpl____wide_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect;
  _class_localson_fn148 _args_foron_fn = NULL;
  c_void_ptr _args_vforon_fn;
  chpl____wide_BaseArr chpl_macro_tmp_4261;
  chpl____wide__ref__wide_BaseArr chpl_macro_tmp_4262;
  chpl____wide_object chpl_macro_tmp_4263;
  chpl____wide__nilType chpl_macro_tmp_4264;
  chpl____wide_object chpl_macro_tmp_4265;
  chpl____wide_BaseArr chpl_macro_tmp_4266;
  chpl____wide_BaseArr chpl_macro_tmp_4267;
  chpl____wide__ref_int32_t chpl_macro_tmp_4268;
  int32_t chpl_macro_tmp_4269;
  chpl__class_localson_fn148_object chpl_macro_tmp_4270;
  chpl_macro_tmp_4261.locale = (&arr)->locale;
  chpl_macro_tmp_4261.addr = ((BaseArr)((&arr)->addr));
  call_tmp2 = chpl_macro_tmp_4261;
  coerce_tmp = call_tmp2;
  chpl_macro_tmp_4262.locale = (&coerce_tmp)->locale;
  chpl_macro_tmp_4262.addr = &(((&coerce_tmp)->addr)->_arrAlias);
  chpl_gen_comm_get(((void*)(&coerce_tmp2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4262).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4262).addr, sizeof(chpl____wide_BaseArr), -1, COMMID(55), INT64(865), INT64(29));
  chpl_macro_tmp_4263.locale = (&coerce_tmp2)->locale;
  chpl_macro_tmp_4263.addr = ((object)((&coerce_tmp2)->addr));
  call_tmp3 = chpl_macro_tmp_4263;
  chpl_macro_tmp_4264.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_4264.addr = nil;
  chpl_macro_tmp_4265.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_4265.addr = NULL;
  T = chpl_macro_tmp_4265;
  call_tmp4 = (((&call_tmp3)->addr != (&T)->addr) || ((!(! (&call_tmp3)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp3)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&T)->locale), INT64(0), INT32(0)))));
  if (call_tmp4) {
    ret = UINT8(true);
    goto _end__if_fn733;
  } else {
    ret = UINT8(false);
    goto _end__if_fn733;
  }
  _end__if_fn733:;
  dsiDestroyArr11(arr, ret);
  call_tmp5 = (! ret);
  if (call_tmp5) {
    chpl_macro_tmp_4266.locale = (&arr)->locale;
    chpl_macro_tmp_4266.addr = ((BaseArr)((&arr)->addr));
    call_tmp6 = chpl_macro_tmp_4266;
    chpl_decRefCountsForDomainsInArrayEltTypes17(call_tmp6);
  }
  chpl_macro_tmp_4267.locale = (&arr)->locale;
  chpl_macro_tmp_4267.addr = ((BaseArr)((&arr)->addr));
  call_tmp7 = chpl_macro_tmp_4267;
  chpl_macro_tmp_4268.locale = (&call_tmp7)->locale;
  chpl_macro_tmp_4268.addr = &(((object)((&call_tmp7)->addr))->chpl__cid);
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_4269)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4268).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4268).addr, sizeof(int32_t), -1, COMMID(56), INT64(885), INT64(29));
  ((void(*)(chpl____wide_BaseArr))chpl_vmtable[((INT64(9) * chpl_macro_tmp_4269) + INT64(0))])(call_tmp7);
  call_tmp8 = (&arr)->locale;
  rvfDerefTmp = arr;
  isdirect = chpl_doDirectExecuteOn(&call_tmp8);
  if (isdirect) {
    on_fn145(rvfDerefTmp);
  } else {
    _args_foron_fn = ((_class_localson_fn148)(&chpl_macro_tmp_4270));
    (_args_foron_fn)->_0_rvfDerefTmp = call_tmp8;
    (_args_foron_fn)->_1_rvfDerefTmp = rvfDerefTmp;
    _args_vforon_fn = ((void*)(_args_foron_fn));
    /*** wrapon_fn152 ***/ chpl_executeOn(&call_tmp8, INT32(217), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn148_object), INT64(1227), INT32(2));
  }
  return;
}

/* ChapelDistribution.chpl:863 */
static void _delete_arr17(chpl____wide_DefaultRectangularArr__remoteAccessData__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F_F_1_int64_t_F_int64_t arr) {
  chpl_bool ret;
  chpl____wide_BaseArr coerce_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr coerce_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp4;
  chpl____wide_object T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp5;
  chpl____wide_BaseArr call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr call_tmp7 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp8;
  chpl____wide_DefaultRectangularArr__remoteAccessData__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F_F_1_int64_t_F_int64_t rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect;
  _class_localson_fn147 _args_foron_fn = NULL;
  c_void_ptr _args_vforon_fn;
  chpl____wide_BaseArr chpl_macro_tmp_4271;
  chpl____wide__ref__wide_BaseArr chpl_macro_tmp_4272;
  chpl____wide_object chpl_macro_tmp_4273;
  chpl____wide__nilType chpl_macro_tmp_4274;
  chpl____wide_object chpl_macro_tmp_4275;
  chpl____wide_BaseArr chpl_macro_tmp_4276;
  chpl____wide_BaseArr chpl_macro_tmp_4277;
  chpl____wide__ref_int32_t chpl_macro_tmp_4278;
  int32_t chpl_macro_tmp_4279;
  chpl__class_localson_fn147_object chpl_macro_tmp_4280;
  chpl_macro_tmp_4271.locale = (&arr)->locale;
  chpl_macro_tmp_4271.addr = ((BaseArr)((&arr)->addr));
  call_tmp2 = chpl_macro_tmp_4271;
  coerce_tmp = call_tmp2;
  chpl_macro_tmp_4272.locale = (&coerce_tmp)->locale;
  chpl_macro_tmp_4272.addr = &(((&coerce_tmp)->addr)->_arrAlias);
  chpl_gen_comm_get(((void*)(&coerce_tmp2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4272).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4272).addr, sizeof(chpl____wide_BaseArr), -1, COMMID(57), INT64(865), INT64(29));
  chpl_macro_tmp_4273.locale = (&coerce_tmp2)->locale;
  chpl_macro_tmp_4273.addr = ((object)((&coerce_tmp2)->addr));
  call_tmp3 = chpl_macro_tmp_4273;
  chpl_macro_tmp_4274.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_4274.addr = nil;
  chpl_macro_tmp_4275.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_4275.addr = NULL;
  T = chpl_macro_tmp_4275;
  call_tmp4 = (((&call_tmp3)->addr != (&T)->addr) || ((!(! (&call_tmp3)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp3)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&T)->locale), INT64(0), INT32(0)))));
  if (call_tmp4) {
    ret = UINT8(true);
    goto _end__if_fn733;
  } else {
    ret = UINT8(false);
    goto _end__if_fn733;
  }
  _end__if_fn733:;
  dsiDestroyArr12(arr, ret);
  call_tmp5 = (! ret);
  if (call_tmp5) {
    chpl_macro_tmp_4276.locale = (&arr)->locale;
    chpl_macro_tmp_4276.addr = ((BaseArr)((&arr)->addr));
    call_tmp6 = chpl_macro_tmp_4276;
    chpl_decRefCountsForDomainsInArrayEltTypes18(call_tmp6);
  }
  chpl_macro_tmp_4277.locale = (&arr)->locale;
  chpl_macro_tmp_4277.addr = ((BaseArr)((&arr)->addr));
  call_tmp7 = chpl_macro_tmp_4277;
  chpl_macro_tmp_4278.locale = (&call_tmp7)->locale;
  chpl_macro_tmp_4278.addr = &(((object)((&call_tmp7)->addr))->chpl__cid);
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_4279)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4278).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4278).addr, sizeof(int32_t), -1, COMMID(58), INT64(885), INT64(29));
  ((void(*)(chpl____wide_BaseArr))chpl_vmtable[((INT64(9) * chpl_macro_tmp_4279) + INT64(0))])(call_tmp7);
  call_tmp8 = (&arr)->locale;
  rvfDerefTmp = arr;
  isdirect = chpl_doDirectExecuteOn(&call_tmp8);
  if (isdirect) {
    on_fn135(rvfDerefTmp);
  } else {
    _args_foron_fn = ((_class_localson_fn147)(&chpl_macro_tmp_4280));
    (_args_foron_fn)->_0_rvfDerefTmp = call_tmp8;
    (_args_foron_fn)->_1_rvfDerefTmp = rvfDerefTmp;
    _args_vforon_fn = ((void*)(_args_foron_fn));
    /*** wrapon_fn144 ***/ chpl_executeOn(&call_tmp8, INT32(209), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn147_object), INT64(1227), INT32(2));
  }
  return;
}

/* ChapelDistribution.chpl:863 */
static void _delete_arr16(chpl____wide_DefaultRectangularArr_atomicbool_1_int64_t_F_int64_t arr) {
  chpl_bool ret;
  chpl____wide_BaseArr coerce_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr coerce_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp4;
  chpl____wide_object T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp5;
  chpl____wide_BaseArr call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr call_tmp7 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp8;
  chpl____wide_DefaultRectangularArr_atomicbool_1_int64_t_F_int64_t rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect;
  _class_localson_fn129 _args_foron_fn = NULL;
  c_void_ptr _args_vforon_fn;
  chpl____wide_BaseArr chpl_macro_tmp_4281;
  chpl____wide__ref__wide_BaseArr chpl_macro_tmp_4282;
  chpl____wide_object chpl_macro_tmp_4283;
  chpl____wide__nilType chpl_macro_tmp_4284;
  chpl____wide_object chpl_macro_tmp_4285;
  chpl____wide_BaseArr chpl_macro_tmp_4286;
  chpl____wide_BaseArr chpl_macro_tmp_4287;
  chpl____wide__ref_int32_t chpl_macro_tmp_4288;
  int32_t chpl_macro_tmp_4289;
  chpl__class_localson_fn129_object chpl_macro_tmp_4290;
  chpl_macro_tmp_4281.locale = (&arr)->locale;
  chpl_macro_tmp_4281.addr = ((BaseArr)((&arr)->addr));
  call_tmp2 = chpl_macro_tmp_4281;
  coerce_tmp = call_tmp2;
  chpl_macro_tmp_4282.locale = (&coerce_tmp)->locale;
  chpl_macro_tmp_4282.addr = &(((&coerce_tmp)->addr)->_arrAlias);
  chpl_gen_comm_get(((void*)(&coerce_tmp2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4282).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4282).addr, sizeof(chpl____wide_BaseArr), -1, COMMID(59), INT64(865), INT64(29));
  chpl_macro_tmp_4283.locale = (&coerce_tmp2)->locale;
  chpl_macro_tmp_4283.addr = ((object)((&coerce_tmp2)->addr));
  call_tmp3 = chpl_macro_tmp_4283;
  chpl_macro_tmp_4284.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_4284.addr = nil;
  chpl_macro_tmp_4285.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_4285.addr = NULL;
  T = chpl_macro_tmp_4285;
  call_tmp4 = (((&call_tmp3)->addr != (&T)->addr) || ((!(! (&call_tmp3)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp3)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&T)->locale), INT64(0), INT32(0)))));
  if (call_tmp4) {
    ret = UINT8(true);
    goto _end__if_fn733;
  } else {
    ret = UINT8(false);
    goto _end__if_fn733;
  }
  _end__if_fn733:;
  dsiDestroyArr4(arr, ret);
  call_tmp5 = (! ret);
  if (call_tmp5) {
    chpl_macro_tmp_4286.locale = (&arr)->locale;
    chpl_macro_tmp_4286.addr = ((BaseArr)((&arr)->addr));
    call_tmp6 = chpl_macro_tmp_4286;
    chpl_decRefCountsForDomainsInArrayEltTypes13(call_tmp6);
  }
  chpl_macro_tmp_4287.locale = (&arr)->locale;
  chpl_macro_tmp_4287.addr = ((BaseArr)((&arr)->addr));
  call_tmp7 = chpl_macro_tmp_4287;
  chpl_macro_tmp_4288.locale = (&call_tmp7)->locale;
  chpl_macro_tmp_4288.addr = &(((object)((&call_tmp7)->addr))->chpl__cid);
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_4289)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4288).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4288).addr, sizeof(int32_t), -1, COMMID(60), INT64(885), INT64(29));
  ((void(*)(chpl____wide_BaseArr))chpl_vmtable[((INT64(9) * chpl_macro_tmp_4289) + INT64(0))])(call_tmp7);
  call_tmp8 = (&arr)->locale;
  rvfDerefTmp = arr;
  isdirect = chpl_doDirectExecuteOn(&call_tmp8);
  if (isdirect) {
    on_fn130(rvfDerefTmp);
  } else {
    _args_foron_fn = ((_class_localson_fn129)(&chpl_macro_tmp_4290));
    (_args_foron_fn)->_0_rvfDerefTmp = call_tmp8;
    (_args_foron_fn)->_1_rvfDerefTmp = rvfDerefTmp;
    _args_vforon_fn = ((void*)(_args_foron_fn));
    /*** wrapon_fn104 ***/ chpl_executeOn(&call_tmp8, INT32(169), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn129_object), INT64(1227), INT32(2));
  }
  return;
}

/* ChapelDistribution.chpl:863 */
static void _delete_arr18(chpl____wide_DefaultAssociativeArr_locale_int64_t_T arr) {
  chpl_bool ret;
  chpl____wide_BaseArr coerce_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr coerce_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp4;
  chpl____wide_object T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr call_tmp5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp6;
  chpl____wide_BaseArr call_tmp7 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr call_tmp8 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp9;
  chpl____wide_DefaultAssociativeArr_locale_int64_t_T rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect;
  _class_localson_fn130 _args_foron_fn = NULL;
  c_void_ptr _args_vforon_fn;
  chpl____wide_BaseArr chpl_macro_tmp_4291;
  chpl____wide__ref__wide_BaseArr chpl_macro_tmp_4292;
  chpl____wide_object chpl_macro_tmp_4293;
  chpl____wide__nilType chpl_macro_tmp_4294;
  chpl____wide_object chpl_macro_tmp_4295;
  chpl____wide_BaseArr chpl_macro_tmp_4296;
  chpl____wide__ref_int32_t chpl_macro_tmp_4297;
  int32_t chpl_macro_tmp_4298;
  chpl____wide_BaseArr chpl_macro_tmp_4299;
  chpl____wide_BaseArr chpl_macro_tmp_4300;
  chpl____wide__ref_int32_t chpl_macro_tmp_4301;
  int32_t chpl_macro_tmp_4302;
  chpl__class_localson_fn130_object chpl_macro_tmp_4303;
  chpl_macro_tmp_4291.locale = (&arr)->locale;
  chpl_macro_tmp_4291.addr = ((BaseArr)((&arr)->addr));
  call_tmp2 = chpl_macro_tmp_4291;
  coerce_tmp = call_tmp2;
  chpl_macro_tmp_4292.locale = (&coerce_tmp)->locale;
  chpl_macro_tmp_4292.addr = &(((&coerce_tmp)->addr)->_arrAlias);
  chpl_gen_comm_get(((void*)(&coerce_tmp2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4292).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4292).addr, sizeof(chpl____wide_BaseArr), -1, COMMID(61), INT64(865), INT64(29));
  chpl_macro_tmp_4293.locale = (&coerce_tmp2)->locale;
  chpl_macro_tmp_4293.addr = ((object)((&coerce_tmp2)->addr));
  call_tmp3 = chpl_macro_tmp_4293;
  chpl_macro_tmp_4294.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_4294.addr = nil;
  chpl_macro_tmp_4295.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_4295.addr = NULL;
  T = chpl_macro_tmp_4295;
  call_tmp4 = (((&call_tmp3)->addr != (&T)->addr) || ((!(! (&call_tmp3)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp3)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&T)->locale), INT64(0), INT32(0)))));
  if (call_tmp4) {
    ret = UINT8(true);
    goto _end__if_fn733;
  } else {
    ret = UINT8(false);
    goto _end__if_fn733;
  }
  _end__if_fn733:;
  chpl_macro_tmp_4296.locale = (&arr)->locale;
  chpl_macro_tmp_4296.addr = ((BaseArr)((&arr)->addr));
  call_tmp5 = chpl_macro_tmp_4296;
  chpl_macro_tmp_4297.locale = (&call_tmp5)->locale;
  chpl_macro_tmp_4297.addr = &(((object)((&call_tmp5)->addr))->chpl__cid);
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_4298)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4297).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4297).addr, sizeof(int32_t), -1, COMMID(62), INT64(868), INT64(29));
  ((void(*)(chpl____wide_BaseArr,
     chpl_bool))chpl_vmtable[((INT64(9) * chpl_macro_tmp_4298) + INT64(7))])(call_tmp5, ret);
  call_tmp6 = (! ret);
  if (call_tmp6) {
    chpl_macro_tmp_4299.locale = (&arr)->locale;
    chpl_macro_tmp_4299.addr = ((BaseArr)((&arr)->addr));
    call_tmp7 = chpl_macro_tmp_4299;
    chpl_decRefCountsForDomainsInArrayEltTypes3(call_tmp7);
  }
  chpl_macro_tmp_4300.locale = (&arr)->locale;
  chpl_macro_tmp_4300.addr = ((BaseArr)((&arr)->addr));
  call_tmp8 = chpl_macro_tmp_4300;
  chpl_macro_tmp_4301.locale = (&call_tmp8)->locale;
  chpl_macro_tmp_4301.addr = &(((object)((&call_tmp8)->addr))->chpl__cid);
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_4302)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4301).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4301).addr, sizeof(int32_t), -1, COMMID(63), INT64(885), INT64(29));
  ((void(*)(chpl____wide_BaseArr))chpl_vmtable[((INT64(9) * chpl_macro_tmp_4302) + INT64(0))])(call_tmp8);
  call_tmp9 = (&arr)->locale;
  rvfDerefTmp = arr;
  isdirect = chpl_doDirectExecuteOn(&call_tmp9);
  if (isdirect) {
    on_fn111(rvfDerefTmp);
  } else {
    _args_foron_fn = ((_class_localson_fn130)(&chpl_macro_tmp_4303));
    (_args_foron_fn)->_0_rvfDerefTmp = call_tmp9;
    (_args_foron_fn)->_1_rvfDerefTmp = rvfDerefTmp;
    _args_vforon_fn = ((void*)(_args_foron_fn));
    /*** wrapon_fn132 ***/ chpl_executeOn(&call_tmp9, INT32(197), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn130_object), INT64(1227), INT32(2));
  }
  return;
}

/* ChapelDistribution.chpl:863 */
static void _delete_arr11(chpl____wide_DefaultRectangularArr_LocCyclicArr__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F_1_int64_t_F_int64_t arr) {
  chpl_bool ret;
  chpl____wide_BaseArr coerce_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr coerce_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp4;
  chpl____wide_object T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp5;
  chpl____wide_BaseArr call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr call_tmp7 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp8;
  chpl____wide_DefaultRectangularArr_LocCyclicArr__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F_1_int64_t_F_int64_t rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect;
  _class_localson_fn133 _args_foron_fn = NULL;
  c_void_ptr _args_vforon_fn;
  chpl____wide_BaseArr chpl_macro_tmp_4304;
  chpl____wide__ref__wide_BaseArr chpl_macro_tmp_4305;
  chpl____wide_object chpl_macro_tmp_4306;
  chpl____wide__nilType chpl_macro_tmp_4307;
  chpl____wide_object chpl_macro_tmp_4308;
  chpl____wide_BaseArr chpl_macro_tmp_4309;
  chpl____wide_BaseArr chpl_macro_tmp_4310;
  chpl____wide__ref_int32_t chpl_macro_tmp_4311;
  int32_t chpl_macro_tmp_4312;
  chpl__class_localson_fn133_object chpl_macro_tmp_4313;
  chpl_macro_tmp_4304.locale = (&arr)->locale;
  chpl_macro_tmp_4304.addr = ((BaseArr)((&arr)->addr));
  call_tmp2 = chpl_macro_tmp_4304;
  coerce_tmp = call_tmp2;
  chpl_macro_tmp_4305.locale = (&coerce_tmp)->locale;
  chpl_macro_tmp_4305.addr = &(((&coerce_tmp)->addr)->_arrAlias);
  chpl_gen_comm_get(((void*)(&coerce_tmp2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4305).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4305).addr, sizeof(chpl____wide_BaseArr), -1, COMMID(64), INT64(865), INT64(29));
  chpl_macro_tmp_4306.locale = (&coerce_tmp2)->locale;
  chpl_macro_tmp_4306.addr = ((object)((&coerce_tmp2)->addr));
  call_tmp3 = chpl_macro_tmp_4306;
  chpl_macro_tmp_4307.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_4307.addr = nil;
  chpl_macro_tmp_4308.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_4308.addr = NULL;
  T = chpl_macro_tmp_4308;
  call_tmp4 = (((&call_tmp3)->addr != (&T)->addr) || ((!(! (&call_tmp3)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp3)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&T)->locale), INT64(0), INT32(0)))));
  if (call_tmp4) {
    ret = UINT8(true);
    goto _end__if_fn733;
  } else {
    ret = UINT8(false);
    goto _end__if_fn733;
  }
  _end__if_fn733:;
  dsiDestroyArr5(arr, ret);
  call_tmp5 = (! ret);
  if (call_tmp5) {
    chpl_macro_tmp_4309.locale = (&arr)->locale;
    chpl_macro_tmp_4309.addr = ((BaseArr)((&arr)->addr));
    call_tmp6 = chpl_macro_tmp_4309;
    chpl_decRefCountsForDomainsInArrayEltTypes15(call_tmp6);
  }
  chpl_macro_tmp_4310.locale = (&arr)->locale;
  chpl_macro_tmp_4310.addr = ((BaseArr)((&arr)->addr));
  call_tmp7 = chpl_macro_tmp_4310;
  chpl_macro_tmp_4311.locale = (&call_tmp7)->locale;
  chpl_macro_tmp_4311.addr = &(((object)((&call_tmp7)->addr))->chpl__cid);
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_4312)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4311).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4311).addr, sizeof(int32_t), -1, COMMID(65), INT64(885), INT64(29));
  ((void(*)(chpl____wide_BaseArr))chpl_vmtable[((INT64(9) * chpl_macro_tmp_4312) + INT64(0))])(call_tmp7);
  call_tmp8 = (&arr)->locale;
  rvfDerefTmp = arr;
  isdirect = chpl_doDirectExecuteOn(&call_tmp8);
  if (isdirect) {
    on_fn150(rvfDerefTmp);
  } else {
    _args_foron_fn = ((_class_localson_fn133)(&chpl_macro_tmp_4313));
    (_args_foron_fn)->_0_rvfDerefTmp = call_tmp8;
    (_args_foron_fn)->_1_rvfDerefTmp = rvfDerefTmp;
    _args_vforon_fn = ((void*)(_args_foron_fn));
    /*** wrapon_fn120 ***/ chpl_executeOn(&call_tmp8, INT32(185), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn133_object), INT64(1227), INT32(2));
  }
  return;
}

/* ChapelDistribution.chpl:863 */
static void _delete_arr20(chpl____wide_CyclicArr__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F arr) {
  chpl_bool ret;
  chpl____wide_BaseArr coerce_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr coerce_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp4;
  chpl____wide_object T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp5;
  chpl___RuntimeTypeInfo12 ret2;
  chpl___RuntimeTypeInfo12 T2;
  chpl____wide_BaseArr call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr coerce_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr call_tmp7 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t T3;
  chpl____wide_object call_tmp8 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr call_tmp9 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp10;
  chpl____wide_CyclicArr__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect;
  _class_localson_fn126 _args_foron_fn = NULL;
  c_void_ptr _args_vforon_fn;
  chpl____wide_BaseArr chpl_macro_tmp_4314;
  chpl____wide__ref__wide_BaseArr chpl_macro_tmp_4315;
  chpl____wide_object chpl_macro_tmp_4316;
  chpl____wide__nilType chpl_macro_tmp_4317;
  chpl____wide_object chpl_macro_tmp_4318;
  chpl____wide__ref__RuntimeTypeInfo23 chpl_macro_tmp_4319;
  chpl____wide_BaseArr chpl_macro_tmp_4320;
  chpl____wide_BaseArr chpl_macro_tmp_4321;
  chpl____wide__ref_int64_t chpl_macro_tmp_4322;
  chpl____wide_object chpl_macro_tmp_4323;
  chpl____wide_BaseArr chpl_macro_tmp_4324;
  chpl____wide__ref_int32_t chpl_macro_tmp_4325;
  int32_t chpl_macro_tmp_4326;
  chpl__class_localson_fn126_object chpl_macro_tmp_4327;
  chpl_macro_tmp_4314.locale = (&arr)->locale;
  chpl_macro_tmp_4314.addr = ((BaseArr)((&arr)->addr));
  call_tmp2 = chpl_macro_tmp_4314;
  coerce_tmp = call_tmp2;
  chpl_macro_tmp_4315.locale = (&coerce_tmp)->locale;
  chpl_macro_tmp_4315.addr = &(((&coerce_tmp)->addr)->_arrAlias);
  chpl_gen_comm_get(((void*)(&coerce_tmp2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4315).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4315).addr, sizeof(chpl____wide_BaseArr), -1, COMMID(66), INT64(865), INT64(29));
  chpl_macro_tmp_4316.locale = (&coerce_tmp2)->locale;
  chpl_macro_tmp_4316.addr = ((object)((&coerce_tmp2)->addr));
  call_tmp3 = chpl_macro_tmp_4316;
  chpl_macro_tmp_4317.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_4317.addr = nil;
  chpl_macro_tmp_4318.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_4318.addr = NULL;
  T = chpl_macro_tmp_4318;
  call_tmp4 = (((&call_tmp3)->addr != (&T)->addr) || ((!(! (&call_tmp3)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp3)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&T)->locale), INT64(0), INT32(0)))));
  if (call_tmp4) {
    ret = UINT8(true);
    goto _end__if_fn733;
  } else {
    ret = UINT8(false);
    goto _end__if_fn733;
  }
  _end__if_fn733:;
  dsiDestroyArr_chpl(arr, ret);
  call_tmp5 = (! ret);
  if (call_tmp5) {
    chpl_macro_tmp_4319.locale = (&arr)->locale;
    chpl_macro_tmp_4319.addr = &(((&arr)->addr)->eltType_chpl);
    chpl_gen_comm_get(((void*)(&T2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4319).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4319).addr, sizeof(chpl___RuntimeTypeInfo12), -1, COMMID(67), INT64(877), INT64(29));
    ret2 = T2;
    chpl_macro_tmp_4320.locale = (&arr)->locale;
    chpl_macro_tmp_4320.addr = ((BaseArr)((&arr)->addr));
    call_tmp6 = chpl_macro_tmp_4320;
    chpl_decRefCountsForDomainsInArrayEltTypes8(call_tmp6, &ret2);
  }
  chpl_macro_tmp_4321.locale = (&arr)->locale;
  chpl_macro_tmp_4321.addr = ((BaseArr)((&arr)->addr));
  call_tmp7 = chpl_macro_tmp_4321;
  coerce_tmp3 = call_tmp7;
  chpl_macro_tmp_4322.locale = (&coerce_tmp3)->locale;
  chpl_macro_tmp_4322.addr = &(((&coerce_tmp3)->addr)->pid);
  chpl_gen_comm_get(((void*)(&T3)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4322).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4322).addr, sizeof(int64_t), -1, COMMID(68), INT64(881), INT64(29));
  chpl_macro_tmp_4323.locale = (&arr)->locale;
  chpl_macro_tmp_4323.addr = ((object)((&arr)->addr));
  call_tmp8 = chpl_macro_tmp_4323;
  _freePrivatizedClass(T3, call_tmp8);
  chpl_macro_tmp_4324.locale = (&arr)->locale;
  chpl_macro_tmp_4324.addr = ((BaseArr)((&arr)->addr));
  call_tmp9 = chpl_macro_tmp_4324;
  chpl_macro_tmp_4325.locale = (&call_tmp9)->locale;
  chpl_macro_tmp_4325.addr = &(((object)((&call_tmp9)->addr))->chpl__cid);
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_4326)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4325).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4325).addr, sizeof(int32_t), -1, COMMID(69), INT64(885), INT64(29));
  ((void(*)(chpl____wide_BaseArr))chpl_vmtable[((INT64(9) * chpl_macro_tmp_4326) + INT64(0))])(call_tmp9);
  call_tmp10 = (&arr)->locale;
  rvfDerefTmp = arr;
  isdirect = chpl_doDirectExecuteOn(&call_tmp10);
  if (isdirect) {
    on_fn132(rvfDerefTmp);
  } else {
    _args_foron_fn = ((_class_localson_fn126)(&chpl_macro_tmp_4327));
    (_args_foron_fn)->_0_rvfDerefTmp = call_tmp10;
    (_args_foron_fn)->_1_rvfDerefTmp = rvfDerefTmp;
    _args_vforon_fn = ((void*)(_args_foron_fn));
    /*** wrapon_fn116 ***/ chpl_executeOn(&call_tmp10, INT32(181), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn126_object), INT64(1227), INT32(2));
  }
  return;
}

/* ChapelDistribution.chpl:863 */
static void _delete_arr23(chpl____wide_DefaultRectangularArr_uint64_t_1_int64_t_F_int64_t arr) {
  chpl_bool ret;
  chpl____wide_BaseArr coerce_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr coerce_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp4;
  chpl____wide_object T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp5;
  chpl____wide_BaseArr call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr call_tmp7 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp8;
  chpl____wide_DefaultRectangularArr_uint64_t_1_int64_t_F_int64_t rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect;
  _class_localson_fn138 _args_foron_fn = NULL;
  c_void_ptr _args_vforon_fn;
  chpl____wide_BaseArr chpl_macro_tmp_4328;
  chpl____wide__ref__wide_BaseArr chpl_macro_tmp_4329;
  chpl____wide_object chpl_macro_tmp_4330;
  chpl____wide__nilType chpl_macro_tmp_4331;
  chpl____wide_object chpl_macro_tmp_4332;
  chpl____wide_BaseArr chpl_macro_tmp_4333;
  chpl____wide_BaseArr chpl_macro_tmp_4334;
  chpl____wide__ref_int32_t chpl_macro_tmp_4335;
  int32_t chpl_macro_tmp_4336;
  chpl__class_localson_fn138_object chpl_macro_tmp_4337;
  chpl_macro_tmp_4328.locale = (&arr)->locale;
  chpl_macro_tmp_4328.addr = ((BaseArr)((&arr)->addr));
  call_tmp2 = chpl_macro_tmp_4328;
  coerce_tmp = call_tmp2;
  chpl_macro_tmp_4329.locale = (&coerce_tmp)->locale;
  chpl_macro_tmp_4329.addr = &(((&coerce_tmp)->addr)->_arrAlias);
  chpl_gen_comm_get(((void*)(&coerce_tmp2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4329).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4329).addr, sizeof(chpl____wide_BaseArr), -1, COMMID(70), INT64(865), INT64(29));
  chpl_macro_tmp_4330.locale = (&coerce_tmp2)->locale;
  chpl_macro_tmp_4330.addr = ((object)((&coerce_tmp2)->addr));
  call_tmp3 = chpl_macro_tmp_4330;
  chpl_macro_tmp_4331.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_4331.addr = nil;
  chpl_macro_tmp_4332.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_4332.addr = NULL;
  T = chpl_macro_tmp_4332;
  call_tmp4 = (((&call_tmp3)->addr != (&T)->addr) || ((!(! (&call_tmp3)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp3)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&T)->locale), INT64(0), INT32(0)))));
  if (call_tmp4) {
    ret = UINT8(true);
    goto _end__if_fn733;
  } else {
    ret = UINT8(false);
    goto _end__if_fn733;
  }
  _end__if_fn733:;
  dsiDestroyArr13(arr, ret);
  call_tmp5 = (! ret);
  if (call_tmp5) {
    chpl_macro_tmp_4333.locale = (&arr)->locale;
    chpl_macro_tmp_4333.addr = ((BaseArr)((&arr)->addr));
    call_tmp6 = chpl_macro_tmp_4333;
    chpl_decRefCountsForDomainsInArrayEltTypes(call_tmp6);
  }
  chpl_macro_tmp_4334.locale = (&arr)->locale;
  chpl_macro_tmp_4334.addr = ((BaseArr)((&arr)->addr));
  call_tmp7 = chpl_macro_tmp_4334;
  chpl_macro_tmp_4335.locale = (&call_tmp7)->locale;
  chpl_macro_tmp_4335.addr = &(((object)((&call_tmp7)->addr))->chpl__cid);
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_4336)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4335).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4335).addr, sizeof(int32_t), -1, COMMID(71), INT64(885), INT64(29));
  ((void(*)(chpl____wide_BaseArr))chpl_vmtable[((INT64(9) * chpl_macro_tmp_4336) + INT64(0))])(call_tmp7);
  call_tmp8 = (&arr)->locale;
  rvfDerefTmp = arr;
  isdirect = chpl_doDirectExecuteOn(&call_tmp8);
  if (isdirect) {
    on_fn138(rvfDerefTmp);
  } else {
    _args_foron_fn = ((_class_localson_fn138)(&chpl_macro_tmp_4337));
    (_args_foron_fn)->_0_rvfDerefTmp = call_tmp8;
    (_args_foron_fn)->_1_rvfDerefTmp = rvfDerefTmp;
    _args_vforon_fn = ((void*)(_args_foron_fn));
    /*** wrapon_fn106 ***/ chpl_executeOn(&call_tmp8, INT32(171), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn138_object), INT64(1227), INT32(2));
  }
  return;
}

/* ChapelDistribution.chpl:863 */
static void _delete_arr10(chpl____wide_DefaultRectangularArr__remoteAccessData_Bitmap_1_int64_t_F_F_1_int64_t_F_int64_t arr) {
  chpl_bool ret;
  chpl____wide_BaseArr coerce_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr coerce_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp4;
  chpl____wide_object T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp5;
  chpl____wide_BaseArr call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr call_tmp7 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp8;
  chpl____wide_DefaultRectangularArr__remoteAccessData_Bitmap_1_int64_t_F_F_1_int64_t_F_int64_t rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect;
  _class_localson_fn139 _args_foron_fn = NULL;
  c_void_ptr _args_vforon_fn;
  chpl____wide_BaseArr chpl_macro_tmp_4338;
  chpl____wide__ref__wide_BaseArr chpl_macro_tmp_4339;
  chpl____wide_object chpl_macro_tmp_4340;
  chpl____wide__nilType chpl_macro_tmp_4341;
  chpl____wide_object chpl_macro_tmp_4342;
  chpl____wide_BaseArr chpl_macro_tmp_4343;
  chpl____wide_BaseArr chpl_macro_tmp_4344;
  chpl____wide__ref_int32_t chpl_macro_tmp_4345;
  int32_t chpl_macro_tmp_4346;
  chpl__class_localson_fn139_object chpl_macro_tmp_4347;
  chpl_macro_tmp_4338.locale = (&arr)->locale;
  chpl_macro_tmp_4338.addr = ((BaseArr)((&arr)->addr));
  call_tmp2 = chpl_macro_tmp_4338;
  coerce_tmp = call_tmp2;
  chpl_macro_tmp_4339.locale = (&coerce_tmp)->locale;
  chpl_macro_tmp_4339.addr = &(((&coerce_tmp)->addr)->_arrAlias);
  chpl_gen_comm_get(((void*)(&coerce_tmp2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4339).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4339).addr, sizeof(chpl____wide_BaseArr), -1, COMMID(72), INT64(865), INT64(29));
  chpl_macro_tmp_4340.locale = (&coerce_tmp2)->locale;
  chpl_macro_tmp_4340.addr = ((object)((&coerce_tmp2)->addr));
  call_tmp3 = chpl_macro_tmp_4340;
  chpl_macro_tmp_4341.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_4341.addr = nil;
  chpl_macro_tmp_4342.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_4342.addr = NULL;
  T = chpl_macro_tmp_4342;
  call_tmp4 = (((&call_tmp3)->addr != (&T)->addr) || ((!(! (&call_tmp3)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp3)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&T)->locale), INT64(0), INT32(0)))));
  if (call_tmp4) {
    ret = UINT8(true);
    goto _end__if_fn733;
  } else {
    ret = UINT8(false);
    goto _end__if_fn733;
  }
  _end__if_fn733:;
  dsiDestroyArr18(arr, ret);
  call_tmp5 = (! ret);
  if (call_tmp5) {
    chpl_macro_tmp_4343.locale = (&arr)->locale;
    chpl_macro_tmp_4343.addr = ((BaseArr)((&arr)->addr));
    call_tmp6 = chpl_macro_tmp_4343;
    chpl_decRefCountsForDomainsInArrayEltTypes11(call_tmp6);
  }
  chpl_macro_tmp_4344.locale = (&arr)->locale;
  chpl_macro_tmp_4344.addr = ((BaseArr)((&arr)->addr));
  call_tmp7 = chpl_macro_tmp_4344;
  chpl_macro_tmp_4345.locale = (&call_tmp7)->locale;
  chpl_macro_tmp_4345.addr = &(((object)((&call_tmp7)->addr))->chpl__cid);
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_4346)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4345).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4345).addr, sizeof(int32_t), -1, COMMID(73), INT64(885), INT64(29));
  ((void(*)(chpl____wide_BaseArr))chpl_vmtable[((INT64(9) * chpl_macro_tmp_4346) + INT64(0))])(call_tmp7);
  call_tmp8 = (&arr)->locale;
  rvfDerefTmp = arr;
  isdirect = chpl_doDirectExecuteOn(&call_tmp8);
  if (isdirect) {
    on_fn101(rvfDerefTmp);
  } else {
    _args_foron_fn = ((_class_localson_fn139)(&chpl_macro_tmp_4347));
    (_args_foron_fn)->_0_rvfDerefTmp = call_tmp8;
    (_args_foron_fn)->_1_rvfDerefTmp = rvfDerefTmp;
    _args_vforon_fn = ((void*)(_args_foron_fn));
    /*** wrapon_fn103 ***/ chpl_executeOn(&call_tmp8, INT32(168), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn139_object), INT64(1227), INT32(2));
  }
  return;
}

/* ChapelDistribution.chpl:863 */
static void _delete_arr21(chpl____wide_DefaultRectangularArr_Bitmap_1_int64_t_T_int64_t arr) {
  chpl_bool ret;
  chpl____wide_BaseArr coerce_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr coerce_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp4;
  chpl____wide_object T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp5;
  chpl____wide_BaseArr call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr call_tmp7 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp8;
  chpl____wide_DefaultRectangularArr_Bitmap_1_int64_t_T_int64_t rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect;
  _class_localson_fn140 _args_foron_fn = NULL;
  c_void_ptr _args_vforon_fn;
  chpl____wide_BaseArr chpl_macro_tmp_4348;
  chpl____wide__ref__wide_BaseArr chpl_macro_tmp_4349;
  chpl____wide_object chpl_macro_tmp_4350;
  chpl____wide__nilType chpl_macro_tmp_4351;
  chpl____wide_object chpl_macro_tmp_4352;
  chpl____wide_BaseArr chpl_macro_tmp_4353;
  chpl____wide_BaseArr chpl_macro_tmp_4354;
  chpl____wide__ref_int32_t chpl_macro_tmp_4355;
  int32_t chpl_macro_tmp_4356;
  chpl__class_localson_fn140_object chpl_macro_tmp_4357;
  chpl_macro_tmp_4348.locale = (&arr)->locale;
  chpl_macro_tmp_4348.addr = ((BaseArr)((&arr)->addr));
  call_tmp2 = chpl_macro_tmp_4348;
  coerce_tmp = call_tmp2;
  chpl_macro_tmp_4349.locale = (&coerce_tmp)->locale;
  chpl_macro_tmp_4349.addr = &(((&coerce_tmp)->addr)->_arrAlias);
  chpl_gen_comm_get(((void*)(&coerce_tmp2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4349).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4349).addr, sizeof(chpl____wide_BaseArr), -1, COMMID(74), INT64(865), INT64(29));
  chpl_macro_tmp_4350.locale = (&coerce_tmp2)->locale;
  chpl_macro_tmp_4350.addr = ((object)((&coerce_tmp2)->addr));
  call_tmp3 = chpl_macro_tmp_4350;
  chpl_macro_tmp_4351.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_4351.addr = nil;
  chpl_macro_tmp_4352.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_4352.addr = NULL;
  T = chpl_macro_tmp_4352;
  call_tmp4 = (((&call_tmp3)->addr != (&T)->addr) || ((!(! (&call_tmp3)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp3)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&T)->locale), INT64(0), INT32(0)))));
  if (call_tmp4) {
    ret = UINT8(true);
    goto _end__if_fn733;
  } else {
    ret = UINT8(false);
    goto _end__if_fn733;
  }
  _end__if_fn733:;
  dsiDestroyArr19(arr, ret);
  call_tmp5 = (! ret);
  if (call_tmp5) {
    chpl_macro_tmp_4353.locale = (&arr)->locale;
    chpl_macro_tmp_4353.addr = ((BaseArr)((&arr)->addr));
    call_tmp6 = chpl_macro_tmp_4353;
    chpl_decRefCountsForDomainsInArrayEltTypes14(call_tmp6);
  }
  chpl_macro_tmp_4354.locale = (&arr)->locale;
  chpl_macro_tmp_4354.addr = ((BaseArr)((&arr)->addr));
  call_tmp7 = chpl_macro_tmp_4354;
  chpl_macro_tmp_4355.locale = (&call_tmp7)->locale;
  chpl_macro_tmp_4355.addr = &(((object)((&call_tmp7)->addr))->chpl__cid);
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_4356)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4355).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4355).addr, sizeof(int32_t), -1, COMMID(75), INT64(885), INT64(29));
  ((void(*)(chpl____wide_BaseArr))chpl_vmtable[((INT64(9) * chpl_macro_tmp_4356) + INT64(0))])(call_tmp7);
  call_tmp8 = (&arr)->locale;
  rvfDerefTmp = arr;
  isdirect = chpl_doDirectExecuteOn(&call_tmp8);
  if (isdirect) {
    on_fn126(rvfDerefTmp);
  } else {
    _args_foron_fn = ((_class_localson_fn140)(&chpl_macro_tmp_4357));
    (_args_foron_fn)->_0_rvfDerefTmp = call_tmp8;
    (_args_foron_fn)->_1_rvfDerefTmp = rvfDerefTmp;
    _args_vforon_fn = ((void*)(_args_foron_fn));
    /*** wrapon_fn105 ***/ chpl_executeOn(&call_tmp8, INT32(170), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn140_object), INT64(1227), INT32(2));
  }
  return;
}

/* ChapelDistribution.chpl:863 */
static void _delete_arr2(chpl____wide_DefaultRectangularArr_LocCyclicArr_Bitmap_1_int64_t_F_1_int64_t_F_int64_t arr) {
  chpl_bool ret;
  chpl____wide_BaseArr coerce_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr coerce_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp4;
  chpl____wide_object T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp5;
  chpl____wide_BaseArr call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr call_tmp7 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp8;
  chpl____wide_DefaultRectangularArr_LocCyclicArr_Bitmap_1_int64_t_F_1_int64_t_F_int64_t rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect;
  _class_localson_fn141 _args_foron_fn = NULL;
  c_void_ptr _args_vforon_fn;
  chpl____wide_BaseArr chpl_macro_tmp_4358;
  chpl____wide__ref__wide_BaseArr chpl_macro_tmp_4359;
  chpl____wide_object chpl_macro_tmp_4360;
  chpl____wide__nilType chpl_macro_tmp_4361;
  chpl____wide_object chpl_macro_tmp_4362;
  chpl____wide_BaseArr chpl_macro_tmp_4363;
  chpl____wide_BaseArr chpl_macro_tmp_4364;
  chpl____wide__ref_int32_t chpl_macro_tmp_4365;
  int32_t chpl_macro_tmp_4366;
  chpl__class_localson_fn141_object chpl_macro_tmp_4367;
  chpl_macro_tmp_4358.locale = (&arr)->locale;
  chpl_macro_tmp_4358.addr = ((BaseArr)((&arr)->addr));
  call_tmp2 = chpl_macro_tmp_4358;
  coerce_tmp = call_tmp2;
  chpl_macro_tmp_4359.locale = (&coerce_tmp)->locale;
  chpl_macro_tmp_4359.addr = &(((&coerce_tmp)->addr)->_arrAlias);
  chpl_gen_comm_get(((void*)(&coerce_tmp2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4359).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4359).addr, sizeof(chpl____wide_BaseArr), -1, COMMID(76), INT64(865), INT64(29));
  chpl_macro_tmp_4360.locale = (&coerce_tmp2)->locale;
  chpl_macro_tmp_4360.addr = ((object)((&coerce_tmp2)->addr));
  call_tmp3 = chpl_macro_tmp_4360;
  chpl_macro_tmp_4361.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_4361.addr = nil;
  chpl_macro_tmp_4362.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_4362.addr = NULL;
  T = chpl_macro_tmp_4362;
  call_tmp4 = (((&call_tmp3)->addr != (&T)->addr) || ((!(! (&call_tmp3)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp3)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&T)->locale), INT64(0), INT32(0)))));
  if (call_tmp4) {
    ret = UINT8(true);
    goto _end__if_fn733;
  } else {
    ret = UINT8(false);
    goto _end__if_fn733;
  }
  _end__if_fn733:;
  dsiDestroyArr9(arr, ret);
  call_tmp5 = (! ret);
  if (call_tmp5) {
    chpl_macro_tmp_4363.locale = (&arr)->locale;
    chpl_macro_tmp_4363.addr = ((BaseArr)((&arr)->addr));
    call_tmp6 = chpl_macro_tmp_4363;
    chpl_decRefCountsForDomainsInArrayEltTypes2(call_tmp6);
  }
  chpl_macro_tmp_4364.locale = (&arr)->locale;
  chpl_macro_tmp_4364.addr = ((BaseArr)((&arr)->addr));
  call_tmp7 = chpl_macro_tmp_4364;
  chpl_macro_tmp_4365.locale = (&call_tmp7)->locale;
  chpl_macro_tmp_4365.addr = &(((object)((&call_tmp7)->addr))->chpl__cid);
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_4366)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4365).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4365).addr, sizeof(int32_t), -1, COMMID(77), INT64(885), INT64(29));
  ((void(*)(chpl____wide_BaseArr))chpl_vmtable[((INT64(9) * chpl_macro_tmp_4366) + INT64(0))])(call_tmp7);
  call_tmp8 = (&arr)->locale;
  rvfDerefTmp = arr;
  isdirect = chpl_doDirectExecuteOn(&call_tmp8);
  if (isdirect) {
    on_fn125(rvfDerefTmp);
  } else {
    _args_foron_fn = ((_class_localson_fn141)(&chpl_macro_tmp_4367));
    (_args_foron_fn)->_0_rvfDerefTmp = call_tmp8;
    (_args_foron_fn)->_1_rvfDerefTmp = rvfDerefTmp;
    _args_vforon_fn = ((void*)(_args_foron_fn));
    /*** wrapon_fn101 ***/ chpl_executeOn(&call_tmp8, INT32(166), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn141_object), INT64(1227), INT32(2));
  }
  return;
}

/* ChapelDistribution.chpl:863 */
static void _delete_arr8(chpl____wide_CyclicArr_Bitmap_1_int64_t_F arr) {
  chpl_bool ret;
  chpl____wide_BaseArr coerce_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr coerce_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp4;
  chpl____wide_object T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp5;
  chpl____wide_BaseArr call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr coerce_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr call_tmp7 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t T2;
  chpl____wide_object call_tmp8 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr call_tmp9 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp10;
  chpl____wide_CyclicArr_Bitmap_1_int64_t_F rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect;
  _class_localson_fn144 _args_foron_fn = NULL;
  c_void_ptr _args_vforon_fn;
  chpl____wide_BaseArr chpl_macro_tmp_4368;
  chpl____wide__ref__wide_BaseArr chpl_macro_tmp_4369;
  chpl____wide_object chpl_macro_tmp_4370;
  chpl____wide__nilType chpl_macro_tmp_4371;
  chpl____wide_object chpl_macro_tmp_4372;
  chpl____wide_BaseArr chpl_macro_tmp_4373;
  chpl____wide_BaseArr chpl_macro_tmp_4374;
  chpl____wide__ref_int64_t chpl_macro_tmp_4375;
  chpl____wide_object chpl_macro_tmp_4376;
  chpl____wide_BaseArr chpl_macro_tmp_4377;
  chpl____wide__ref_int32_t chpl_macro_tmp_4378;
  int32_t chpl_macro_tmp_4379;
  chpl__class_localson_fn144_object chpl_macro_tmp_4380;
  chpl_macro_tmp_4368.locale = (&arr)->locale;
  chpl_macro_tmp_4368.addr = ((BaseArr)((&arr)->addr));
  call_tmp2 = chpl_macro_tmp_4368;
  coerce_tmp = call_tmp2;
  chpl_macro_tmp_4369.locale = (&coerce_tmp)->locale;
  chpl_macro_tmp_4369.addr = &(((&coerce_tmp)->addr)->_arrAlias);
  chpl_gen_comm_get(((void*)(&coerce_tmp2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4369).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4369).addr, sizeof(chpl____wide_BaseArr), -1, COMMID(78), INT64(865), INT64(29));
  chpl_macro_tmp_4370.locale = (&coerce_tmp2)->locale;
  chpl_macro_tmp_4370.addr = ((object)((&coerce_tmp2)->addr));
  call_tmp3 = chpl_macro_tmp_4370;
  chpl_macro_tmp_4371.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_4371.addr = nil;
  chpl_macro_tmp_4372.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_4372.addr = NULL;
  T = chpl_macro_tmp_4372;
  call_tmp4 = (((&call_tmp3)->addr != (&T)->addr) || ((!(! (&call_tmp3)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp3)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&T)->locale), INT64(0), INT32(0)))));
  if (call_tmp4) {
    ret = UINT8(true);
    goto _end__if_fn733;
  } else {
    ret = UINT8(false);
    goto _end__if_fn733;
  }
  _end__if_fn733:;
  dsiDestroyArr_chpl2(arr, ret);
  call_tmp5 = (! ret);
  if (call_tmp5) {
    chpl_macro_tmp_4373.locale = (&arr)->locale;
    chpl_macro_tmp_4373.addr = ((BaseArr)((&arr)->addr));
    call_tmp6 = chpl_macro_tmp_4373;
    chpl_decRefCountsForDomainsInArrayEltTypes14(call_tmp6);
  }
  chpl_macro_tmp_4374.locale = (&arr)->locale;
  chpl_macro_tmp_4374.addr = ((BaseArr)((&arr)->addr));
  call_tmp7 = chpl_macro_tmp_4374;
  coerce_tmp3 = call_tmp7;
  chpl_macro_tmp_4375.locale = (&coerce_tmp3)->locale;
  chpl_macro_tmp_4375.addr = &(((&coerce_tmp3)->addr)->pid);
  chpl_gen_comm_get(((void*)(&T2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4375).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4375).addr, sizeof(int64_t), -1, COMMID(79), INT64(881), INT64(29));
  chpl_macro_tmp_4376.locale = (&arr)->locale;
  chpl_macro_tmp_4376.addr = ((object)((&arr)->addr));
  call_tmp8 = chpl_macro_tmp_4376;
  _freePrivatizedClass(T2, call_tmp8);
  chpl_macro_tmp_4377.locale = (&arr)->locale;
  chpl_macro_tmp_4377.addr = ((BaseArr)((&arr)->addr));
  call_tmp9 = chpl_macro_tmp_4377;
  chpl_macro_tmp_4378.locale = (&call_tmp9)->locale;
  chpl_macro_tmp_4378.addr = &(((object)((&call_tmp9)->addr))->chpl__cid);
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_4379)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4378).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4378).addr, sizeof(int32_t), -1, COMMID(80), INT64(885), INT64(29));
  ((void(*)(chpl____wide_BaseArr))chpl_vmtable[((INT64(9) * chpl_macro_tmp_4379) + INT64(0))])(call_tmp9);
  call_tmp10 = (&arr)->locale;
  rvfDerefTmp = arr;
  isdirect = chpl_doDirectExecuteOn(&call_tmp10);
  if (isdirect) {
    on_fn110(rvfDerefTmp);
  } else {
    _args_foron_fn = ((_class_localson_fn144)(&chpl_macro_tmp_4380));
    (_args_foron_fn)->_0_rvfDerefTmp = call_tmp10;
    (_args_foron_fn)->_1_rvfDerefTmp = rvfDerefTmp;
    _args_vforon_fn = ((void*)(_args_foron_fn));
    /*** wrapon_fn110 ***/ chpl_executeOn(&call_tmp10, INT32(175), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn144_object), INT64(1227), INT32(2));
  }
  return;
}

/* ChapelDistribution.chpl:863 */
static void _delete_arr9(chpl____wide_DefaultRectangularArr_chpl_TableEntry_int64_t_1_int64_t_F_int64_t arr) {
  chpl_bool ret;
  chpl____wide_BaseArr coerce_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr coerce_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp4;
  chpl____wide_object T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp5;
  chpl____wide_BaseArr call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr call_tmp7 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp8;
  chpl____wide_DefaultRectangularArr_chpl_TableEntry_int64_t_1_int64_t_F_int64_t rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect;
  _class_localson_fn132 _args_foron_fn = NULL;
  c_void_ptr _args_vforon_fn;
  chpl____wide_BaseArr chpl_macro_tmp_4381;
  chpl____wide__ref__wide_BaseArr chpl_macro_tmp_4382;
  chpl____wide_object chpl_macro_tmp_4383;
  chpl____wide__nilType chpl_macro_tmp_4384;
  chpl____wide_object chpl_macro_tmp_4385;
  chpl____wide_BaseArr chpl_macro_tmp_4386;
  chpl____wide_BaseArr chpl_macro_tmp_4387;
  chpl____wide__ref_int32_t chpl_macro_tmp_4388;
  int32_t chpl_macro_tmp_4389;
  chpl__class_localson_fn132_object chpl_macro_tmp_4390;
  chpl_macro_tmp_4381.locale = (&arr)->locale;
  chpl_macro_tmp_4381.addr = ((BaseArr)((&arr)->addr));
  call_tmp2 = chpl_macro_tmp_4381;
  coerce_tmp = call_tmp2;
  chpl_macro_tmp_4382.locale = (&coerce_tmp)->locale;
  chpl_macro_tmp_4382.addr = &(((&coerce_tmp)->addr)->_arrAlias);
  chpl_gen_comm_get(((void*)(&coerce_tmp2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4382).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4382).addr, sizeof(chpl____wide_BaseArr), -1, COMMID(81), INT64(865), INT64(29));
  chpl_macro_tmp_4383.locale = (&coerce_tmp2)->locale;
  chpl_macro_tmp_4383.addr = ((object)((&coerce_tmp2)->addr));
  call_tmp3 = chpl_macro_tmp_4383;
  chpl_macro_tmp_4384.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_4384.addr = nil;
  chpl_macro_tmp_4385.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_4385.addr = NULL;
  T = chpl_macro_tmp_4385;
  call_tmp4 = (((&call_tmp3)->addr != (&T)->addr) || ((!(! (&call_tmp3)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp3)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&T)->locale), INT64(0), INT32(0)))));
  if (call_tmp4) {
    ret = UINT8(true);
    goto _end__if_fn733;
  } else {
    ret = UINT8(false);
    goto _end__if_fn733;
  }
  _end__if_fn733:;
  dsiDestroyArr2(arr, ret);
  call_tmp5 = (! ret);
  if (call_tmp5) {
    chpl_macro_tmp_4386.locale = (&arr)->locale;
    chpl_macro_tmp_4386.addr = ((BaseArr)((&arr)->addr));
    call_tmp6 = chpl_macro_tmp_4386;
    chpl_decRefCountsForDomainsInArrayEltTypes7(call_tmp6);
  }
  chpl_macro_tmp_4387.locale = (&arr)->locale;
  chpl_macro_tmp_4387.addr = ((BaseArr)((&arr)->addr));
  call_tmp7 = chpl_macro_tmp_4387;
  chpl_macro_tmp_4388.locale = (&call_tmp7)->locale;
  chpl_macro_tmp_4388.addr = &(((object)((&call_tmp7)->addr))->chpl__cid);
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_4389)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4388).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4388).addr, sizeof(int32_t), -1, COMMID(82), INT64(885), INT64(29));
  ((void(*)(chpl____wide_BaseArr))chpl_vmtable[((INT64(9) * chpl_macro_tmp_4389) + INT64(0))])(call_tmp7);
  call_tmp8 = (&arr)->locale;
  rvfDerefTmp = arr;
  isdirect = chpl_doDirectExecuteOn(&call_tmp8);
  if (isdirect) {
    on_fn119(rvfDerefTmp);
  } else {
    _args_foron_fn = ((_class_localson_fn132)(&chpl_macro_tmp_4390));
    (_args_foron_fn)->_0_rvfDerefTmp = call_tmp8;
    (_args_foron_fn)->_1_rvfDerefTmp = rvfDerefTmp;
    _args_vforon_fn = ((void*)(_args_foron_fn));
    /*** wrapon_fn141 ***/ chpl_executeOn(&call_tmp8, INT32(206), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn132_object), INT64(1227), INT32(2));
  }
  return;
}

/* ChapelDistribution.chpl:863 */
static void _delete_arr12(chpl____wide_DefaultRectangularArr__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_T_int64_t arr) {
  chpl_bool ret;
  chpl____wide_BaseArr coerce_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr coerce_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp4;
  chpl____wide_object T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp5;
  chpl___RuntimeTypeInfo12 ret2;
  chpl___RuntimeTypeInfo12 T2;
  chpl____wide_BaseArr call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr call_tmp7 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp8;
  chpl____wide_DefaultRectangularArr__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_T_int64_t rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect;
  _class_localson_fn131 _args_foron_fn = NULL;
  c_void_ptr _args_vforon_fn;
  chpl____wide_BaseArr chpl_macro_tmp_4391;
  chpl____wide__ref__wide_BaseArr chpl_macro_tmp_4392;
  chpl____wide_object chpl_macro_tmp_4393;
  chpl____wide__nilType chpl_macro_tmp_4394;
  chpl____wide_object chpl_macro_tmp_4395;
  chpl____wide__ref__RuntimeTypeInfo23 chpl_macro_tmp_4396;
  chpl____wide_BaseArr chpl_macro_tmp_4397;
  chpl____wide_BaseArr chpl_macro_tmp_4398;
  chpl____wide__ref_int32_t chpl_macro_tmp_4399;
  int32_t chpl_macro_tmp_4400;
  chpl__class_localson_fn131_object chpl_macro_tmp_4401;
  chpl_macro_tmp_4391.locale = (&arr)->locale;
  chpl_macro_tmp_4391.addr = ((BaseArr)((&arr)->addr));
  call_tmp2 = chpl_macro_tmp_4391;
  coerce_tmp = call_tmp2;
  chpl_macro_tmp_4392.locale = (&coerce_tmp)->locale;
  chpl_macro_tmp_4392.addr = &(((&coerce_tmp)->addr)->_arrAlias);
  chpl_gen_comm_get(((void*)(&coerce_tmp2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4392).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4392).addr, sizeof(chpl____wide_BaseArr), -1, COMMID(83), INT64(865), INT64(29));
  chpl_macro_tmp_4393.locale = (&coerce_tmp2)->locale;
  chpl_macro_tmp_4393.addr = ((object)((&coerce_tmp2)->addr));
  call_tmp3 = chpl_macro_tmp_4393;
  chpl_macro_tmp_4394.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_4394.addr = nil;
  chpl_macro_tmp_4395.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_4395.addr = NULL;
  T = chpl_macro_tmp_4395;
  call_tmp4 = (((&call_tmp3)->addr != (&T)->addr) || ((!(! (&call_tmp3)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp3)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&T)->locale), INT64(0), INT32(0)))));
  if (call_tmp4) {
    ret = UINT8(true);
    goto _end__if_fn733;
  } else {
    ret = UINT8(false);
    goto _end__if_fn733;
  }
  _end__if_fn733:;
  dsiDestroyArr14(arr, ret);
  call_tmp5 = (! ret);
  if (call_tmp5) {
    chpl_macro_tmp_4396.locale = (&arr)->locale;
    chpl_macro_tmp_4396.addr = &(((&arr)->addr)->eltType);
    chpl_gen_comm_get(((void*)(&T2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4396).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4396).addr, sizeof(chpl___RuntimeTypeInfo12), -1, COMMID(84), INT64(877), INT64(29));
    ret2 = T2;
    chpl_macro_tmp_4397.locale = (&arr)->locale;
    chpl_macro_tmp_4397.addr = ((BaseArr)((&arr)->addr));
    call_tmp6 = chpl_macro_tmp_4397;
    chpl_decRefCountsForDomainsInArrayEltTypes8(call_tmp6, &ret2);
  }
  chpl_macro_tmp_4398.locale = (&arr)->locale;
  chpl_macro_tmp_4398.addr = ((BaseArr)((&arr)->addr));
  call_tmp7 = chpl_macro_tmp_4398;
  chpl_macro_tmp_4399.locale = (&call_tmp7)->locale;
  chpl_macro_tmp_4399.addr = &(((object)((&call_tmp7)->addr))->chpl__cid);
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_4400)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4399).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4399).addr, sizeof(int32_t), -1, COMMID(85), INT64(885), INT64(29));
  ((void(*)(chpl____wide_BaseArr))chpl_vmtable[((INT64(9) * chpl_macro_tmp_4400) + INT64(0))])(call_tmp7);
  call_tmp8 = (&arr)->locale;
  rvfDerefTmp = arr;
  isdirect = chpl_doDirectExecuteOn(&call_tmp8);
  if (isdirect) {
    on_fn147(rvfDerefTmp);
  } else {
    _args_foron_fn = ((_class_localson_fn131)(&chpl_macro_tmp_4401));
    (_args_foron_fn)->_0_rvfDerefTmp = call_tmp8;
    (_args_foron_fn)->_1_rvfDerefTmp = rvfDerefTmp;
    _args_vforon_fn = ((void*)(_args_foron_fn));
    /*** wrapon_fn114 ***/ chpl_executeOn(&call_tmp8, INT32(179), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn131_object), INT64(1227), INT32(2));
  }
  return;
}

/* ChapelDistribution.chpl:863 */
static void _delete_arr22(chpl____wide_DefaultRectangularArr_LocReplicatedDom_1_int64_t_F_1_int64_t_F_int64_t arr) {
  chpl_bool ret;
  chpl____wide_BaseArr coerce_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr coerce_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp4;
  chpl____wide_object T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp5;
  chpl____wide_BaseArr call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr call_tmp7 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp8;
  chpl____wide_DefaultRectangularArr_LocReplicatedDom_1_int64_t_F_1_int64_t_F_int64_t rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect;
  _class_localson_fn127 _args_foron_fn = NULL;
  c_void_ptr _args_vforon_fn;
  chpl____wide_BaseArr chpl_macro_tmp_4402;
  chpl____wide__ref__wide_BaseArr chpl_macro_tmp_4403;
  chpl____wide_object chpl_macro_tmp_4404;
  chpl____wide__nilType chpl_macro_tmp_4405;
  chpl____wide_object chpl_macro_tmp_4406;
  chpl____wide_BaseArr chpl_macro_tmp_4407;
  chpl____wide_BaseArr chpl_macro_tmp_4408;
  chpl____wide__ref_int32_t chpl_macro_tmp_4409;
  int32_t chpl_macro_tmp_4410;
  chpl__class_localson_fn127_object chpl_macro_tmp_4411;
  chpl_macro_tmp_4402.locale = (&arr)->locale;
  chpl_macro_tmp_4402.addr = ((BaseArr)((&arr)->addr));
  call_tmp2 = chpl_macro_tmp_4402;
  coerce_tmp = call_tmp2;
  chpl_macro_tmp_4403.locale = (&coerce_tmp)->locale;
  chpl_macro_tmp_4403.addr = &(((&coerce_tmp)->addr)->_arrAlias);
  chpl_gen_comm_get(((void*)(&coerce_tmp2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4403).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4403).addr, sizeof(chpl____wide_BaseArr), -1, COMMID(86), INT64(865), INT64(29));
  chpl_macro_tmp_4404.locale = (&coerce_tmp2)->locale;
  chpl_macro_tmp_4404.addr = ((object)((&coerce_tmp2)->addr));
  call_tmp3 = chpl_macro_tmp_4404;
  chpl_macro_tmp_4405.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_4405.addr = nil;
  chpl_macro_tmp_4406.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_4406.addr = NULL;
  T = chpl_macro_tmp_4406;
  call_tmp4 = (((&call_tmp3)->addr != (&T)->addr) || ((!(! (&call_tmp3)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp3)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&T)->locale), INT64(0), INT32(0)))));
  if (call_tmp4) {
    ret = UINT8(true);
    goto _end__if_fn733;
  } else {
    ret = UINT8(false);
    goto _end__if_fn733;
  }
  _end__if_fn733:;
  dsiDestroyArr16(arr, ret);
  call_tmp5 = (! ret);
  if (call_tmp5) {
    chpl_macro_tmp_4407.locale = (&arr)->locale;
    chpl_macro_tmp_4407.addr = ((BaseArr)((&arr)->addr));
    call_tmp6 = chpl_macro_tmp_4407;
    chpl_decRefCountsForDomainsInArrayEltTypes5(call_tmp6);
  }
  chpl_macro_tmp_4408.locale = (&arr)->locale;
  chpl_macro_tmp_4408.addr = ((BaseArr)((&arr)->addr));
  call_tmp7 = chpl_macro_tmp_4408;
  chpl_macro_tmp_4409.locale = (&call_tmp7)->locale;
  chpl_macro_tmp_4409.addr = &(((object)((&call_tmp7)->addr))->chpl__cid);
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_4410)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4409).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4409).addr, sizeof(int32_t), -1, COMMID(87), INT64(885), INT64(29));
  ((void(*)(chpl____wide_BaseArr))chpl_vmtable[((INT64(9) * chpl_macro_tmp_4410) + INT64(0))])(call_tmp7);
  call_tmp8 = (&arr)->locale;
  rvfDerefTmp = arr;
  isdirect = chpl_doDirectExecuteOn(&call_tmp8);
  if (isdirect) {
    on_fn152(rvfDerefTmp);
  } else {
    _args_foron_fn = ((_class_localson_fn127)(&chpl_macro_tmp_4411));
    (_args_foron_fn)->_0_rvfDerefTmp = call_tmp8;
    (_args_foron_fn)->_1_rvfDerefTmp = rvfDerefTmp;
    _args_vforon_fn = ((void*)(_args_foron_fn));
    /*** wrapon_fn129 ***/ chpl_executeOn(&call_tmp8, INT32(194), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn127_object), INT64(1227), INT32(2));
  }
  return;
}

/* ChapelDistribution.chpl:863 */
static void _delete_arr(chpl____wide_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T arr) {
  chpl_bool ret;
  chpl____wide_BaseArr coerce_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr coerce_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp4;
  chpl____wide_object T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr call_tmp5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp6;
  chpl____wide_BaseArr call_tmp7 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr call_tmp8 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp9;
  chpl____wide_DefaultAssociativeArr_LocReplicatedDom_1_int64_t_F_int64_t_T rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect;
  _class_localson_fn152 _args_foron_fn = NULL;
  c_void_ptr _args_vforon_fn;
  chpl____wide_BaseArr chpl_macro_tmp_4412;
  chpl____wide__ref__wide_BaseArr chpl_macro_tmp_4413;
  chpl____wide_object chpl_macro_tmp_4414;
  chpl____wide__nilType chpl_macro_tmp_4415;
  chpl____wide_object chpl_macro_tmp_4416;
  chpl____wide_BaseArr chpl_macro_tmp_4417;
  chpl____wide__ref_int32_t chpl_macro_tmp_4418;
  int32_t chpl_macro_tmp_4419;
  chpl____wide_BaseArr chpl_macro_tmp_4420;
  chpl____wide_BaseArr chpl_macro_tmp_4421;
  chpl____wide__ref_int32_t chpl_macro_tmp_4422;
  int32_t chpl_macro_tmp_4423;
  chpl__class_localson_fn152_object chpl_macro_tmp_4424;
  chpl_macro_tmp_4412.locale = (&arr)->locale;
  chpl_macro_tmp_4412.addr = ((BaseArr)((&arr)->addr));
  call_tmp2 = chpl_macro_tmp_4412;
  coerce_tmp = call_tmp2;
  chpl_macro_tmp_4413.locale = (&coerce_tmp)->locale;
  chpl_macro_tmp_4413.addr = &(((&coerce_tmp)->addr)->_arrAlias);
  chpl_gen_comm_get(((void*)(&coerce_tmp2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4413).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4413).addr, sizeof(chpl____wide_BaseArr), -1, COMMID(88), INT64(865), INT64(29));
  chpl_macro_tmp_4414.locale = (&coerce_tmp2)->locale;
  chpl_macro_tmp_4414.addr = ((object)((&coerce_tmp2)->addr));
  call_tmp3 = chpl_macro_tmp_4414;
  chpl_macro_tmp_4415.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_4415.addr = nil;
  chpl_macro_tmp_4416.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_4416.addr = NULL;
  T = chpl_macro_tmp_4416;
  call_tmp4 = (((&call_tmp3)->addr != (&T)->addr) || ((!(! (&call_tmp3)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp3)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&T)->locale), INT64(0), INT32(0)))));
  if (call_tmp4) {
    ret = UINT8(true);
    goto _end__if_fn733;
  } else {
    ret = UINT8(false);
    goto _end__if_fn733;
  }
  _end__if_fn733:;
  chpl_macro_tmp_4417.locale = (&arr)->locale;
  chpl_macro_tmp_4417.addr = ((BaseArr)((&arr)->addr));
  call_tmp5 = chpl_macro_tmp_4417;
  chpl_macro_tmp_4418.locale = (&call_tmp5)->locale;
  chpl_macro_tmp_4418.addr = &(((object)((&call_tmp5)->addr))->chpl__cid);
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_4419)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4418).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4418).addr, sizeof(int32_t), -1, COMMID(89), INT64(868), INT64(29));
  ((void(*)(chpl____wide_BaseArr,
     chpl_bool))chpl_vmtable[((INT64(9) * chpl_macro_tmp_4419) + INT64(7))])(call_tmp5, ret);
  call_tmp6 = (! ret);
  if (call_tmp6) {
    chpl_macro_tmp_4420.locale = (&arr)->locale;
    chpl_macro_tmp_4420.addr = ((BaseArr)((&arr)->addr));
    call_tmp7 = chpl_macro_tmp_4420;
    chpl_decRefCountsForDomainsInArrayEltTypes5(call_tmp7);
  }
  chpl_macro_tmp_4421.locale = (&arr)->locale;
  chpl_macro_tmp_4421.addr = ((BaseArr)((&arr)->addr));
  call_tmp8 = chpl_macro_tmp_4421;
  chpl_macro_tmp_4422.locale = (&call_tmp8)->locale;
  chpl_macro_tmp_4422.addr = &(((object)((&call_tmp8)->addr))->chpl__cid);
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_4423)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4422).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4422).addr, sizeof(int32_t), -1, COMMID(90), INT64(885), INT64(29));
  ((void(*)(chpl____wide_BaseArr))chpl_vmtable[((INT64(9) * chpl_macro_tmp_4423) + INT64(0))])(call_tmp8);
  call_tmp9 = (&arr)->locale;
  rvfDerefTmp = arr;
  isdirect = chpl_doDirectExecuteOn(&call_tmp9);
  if (isdirect) {
    on_fn141(rvfDerefTmp);
  } else {
    _args_foron_fn = ((_class_localson_fn152)(&chpl_macro_tmp_4424));
    (_args_foron_fn)->_0_rvfDerefTmp = call_tmp9;
    (_args_foron_fn)->_1_rvfDerefTmp = rvfDerefTmp;
    _args_vforon_fn = ((void*)(_args_foron_fn));
    /*** wrapon_fn130 ***/ chpl_executeOn(&call_tmp9, INT32(195), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn152_object), INT64(1227), INT32(2));
  }
  return;
}

/* ChapelDistribution.chpl:863 */
static void _delete_arr3(chpl____wide_DefaultRectangularArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t arr) {
  chpl_bool ret;
  chpl____wide_BaseArr coerce_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr coerce_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp4;
  chpl____wide_object T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp5;
  chpl____wide_BaseArr call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr call_tmp7 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp8;
  chpl____wide_DefaultRectangularArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect;
  _class_localson_fn120 _args_foron_fn = NULL;
  c_void_ptr _args_vforon_fn;
  chpl____wide_BaseArr chpl_macro_tmp_4425;
  chpl____wide__ref__wide_BaseArr chpl_macro_tmp_4426;
  chpl____wide_object chpl_macro_tmp_4427;
  chpl____wide__nilType chpl_macro_tmp_4428;
  chpl____wide_object chpl_macro_tmp_4429;
  chpl____wide_BaseArr chpl_macro_tmp_4430;
  chpl____wide_BaseArr chpl_macro_tmp_4431;
  chpl____wide__ref_int32_t chpl_macro_tmp_4432;
  int32_t chpl_macro_tmp_4433;
  chpl__class_localson_fn120_object chpl_macro_tmp_4434;
  chpl_macro_tmp_4425.locale = (&arr)->locale;
  chpl_macro_tmp_4425.addr = ((BaseArr)((&arr)->addr));
  call_tmp2 = chpl_macro_tmp_4425;
  coerce_tmp = call_tmp2;
  chpl_macro_tmp_4426.locale = (&coerce_tmp)->locale;
  chpl_macro_tmp_4426.addr = &(((&coerce_tmp)->addr)->_arrAlias);
  chpl_gen_comm_get(((void*)(&coerce_tmp2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4426).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4426).addr, sizeof(chpl____wide_BaseArr), -1, COMMID(91), INT64(865), INT64(29));
  chpl_macro_tmp_4427.locale = (&coerce_tmp2)->locale;
  chpl_macro_tmp_4427.addr = ((object)((&coerce_tmp2)->addr));
  call_tmp3 = chpl_macro_tmp_4427;
  chpl_macro_tmp_4428.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_4428.addr = nil;
  chpl_macro_tmp_4429.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_4429.addr = NULL;
  T = chpl_macro_tmp_4429;
  call_tmp4 = (((&call_tmp3)->addr != (&T)->addr) || ((!(! (&call_tmp3)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp3)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&T)->locale), INT64(0), INT32(0)))));
  if (call_tmp4) {
    ret = UINT8(true);
    goto _end__if_fn733;
  } else {
    ret = UINT8(false);
    goto _end__if_fn733;
  }
  _end__if_fn733:;
  dsiDestroyArr8(arr, ret);
  call_tmp5 = (! ret);
  if (call_tmp5) {
    chpl_macro_tmp_4430.locale = (&arr)->locale;
    chpl_macro_tmp_4430.addr = ((BaseArr)((&arr)->addr));
    call_tmp6 = chpl_macro_tmp_4430;
    chpl_decRefCountsForDomainsInArrayEltTypes6(call_tmp6);
  }
  chpl_macro_tmp_4431.locale = (&arr)->locale;
  chpl_macro_tmp_4431.addr = ((BaseArr)((&arr)->addr));
  call_tmp7 = chpl_macro_tmp_4431;
  chpl_macro_tmp_4432.locale = (&call_tmp7)->locale;
  chpl_macro_tmp_4432.addr = &(((object)((&call_tmp7)->addr))->chpl__cid);
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_4433)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4432).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4432).addr, sizeof(int32_t), -1, COMMID(92), INT64(885), INT64(29));
  ((void(*)(chpl____wide_BaseArr))chpl_vmtable[((INT64(9) * chpl_macro_tmp_4433) + INT64(0))])(call_tmp7);
  call_tmp8 = (&arr)->locale;
  rvfDerefTmp = arr;
  isdirect = chpl_doDirectExecuteOn(&call_tmp8);
  if (isdirect) {
    on_fn113(rvfDerefTmp);
  } else {
    _args_foron_fn = ((_class_localson_fn120)(&chpl_macro_tmp_4434));
    (_args_foron_fn)->_0_rvfDerefTmp = call_tmp8;
    (_args_foron_fn)->_1_rvfDerefTmp = rvfDerefTmp;
    _args_vforon_fn = ((void*)(_args_foron_fn));
    /*** wrapon_fn143 ***/ chpl_executeOn(&call_tmp8, INT32(208), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn120_object), INT64(1227), INT32(2));
  }
  return;
}

/* ChapelDistribution.chpl:863 */
static void _delete_arr7(chpl____wide_DefaultRectangularArr_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_1_int64_t_F_int64_t arr) {
  chpl_bool ret;
  chpl____wide_BaseArr coerce_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr coerce_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp4;
  chpl____wide_object T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp5;
  chpl____wide_BaseArr call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr call_tmp7 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp8;
  chpl____wide_DefaultRectangularArr_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_1_int64_t_F_int64_t rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect;
  _class_localson_fn105 _args_foron_fn = NULL;
  c_void_ptr _args_vforon_fn;
  chpl____wide_BaseArr chpl_macro_tmp_4435;
  chpl____wide__ref__wide_BaseArr chpl_macro_tmp_4436;
  chpl____wide_object chpl_macro_tmp_4437;
  chpl____wide__nilType chpl_macro_tmp_4438;
  chpl____wide_object chpl_macro_tmp_4439;
  chpl____wide_BaseArr chpl_macro_tmp_4440;
  chpl____wide_BaseArr chpl_macro_tmp_4441;
  chpl____wide__ref_int32_t chpl_macro_tmp_4442;
  int32_t chpl_macro_tmp_4443;
  chpl__class_localson_fn105_object chpl_macro_tmp_4444;
  chpl_macro_tmp_4435.locale = (&arr)->locale;
  chpl_macro_tmp_4435.addr = ((BaseArr)((&arr)->addr));
  call_tmp2 = chpl_macro_tmp_4435;
  coerce_tmp = call_tmp2;
  chpl_macro_tmp_4436.locale = (&coerce_tmp)->locale;
  chpl_macro_tmp_4436.addr = &(((&coerce_tmp)->addr)->_arrAlias);
  chpl_gen_comm_get(((void*)(&coerce_tmp2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4436).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4436).addr, sizeof(chpl____wide_BaseArr), -1, COMMID(93), INT64(865), INT64(29));
  chpl_macro_tmp_4437.locale = (&coerce_tmp2)->locale;
  chpl_macro_tmp_4437.addr = ((object)((&coerce_tmp2)->addr));
  call_tmp3 = chpl_macro_tmp_4437;
  chpl_macro_tmp_4438.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_4438.addr = nil;
  chpl_macro_tmp_4439.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_4439.addr = NULL;
  T = chpl_macro_tmp_4439;
  call_tmp4 = (((&call_tmp3)->addr != (&T)->addr) || ((!(! (&call_tmp3)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp3)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&T)->locale), INT64(0), INT32(0)))));
  if (call_tmp4) {
    ret = UINT8(true);
    goto _end__if_fn733;
  } else {
    ret = UINT8(false);
    goto _end__if_fn733;
  }
  _end__if_fn733:;
  dsiDestroyArr17(arr, ret);
  call_tmp5 = (! ret);
  if (call_tmp5) {
    chpl_macro_tmp_4440.locale = (&arr)->locale;
    chpl_macro_tmp_4440.addr = ((BaseArr)((&arr)->addr));
    call_tmp6 = chpl_macro_tmp_4440;
    chpl_decRefCountsForDomainsInArrayEltTypes4(call_tmp6);
  }
  chpl_macro_tmp_4441.locale = (&arr)->locale;
  chpl_macro_tmp_4441.addr = ((BaseArr)((&arr)->addr));
  call_tmp7 = chpl_macro_tmp_4441;
  chpl_macro_tmp_4442.locale = (&call_tmp7)->locale;
  chpl_macro_tmp_4442.addr = &(((object)((&call_tmp7)->addr))->chpl__cid);
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_4443)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4442).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4442).addr, sizeof(int32_t), -1, COMMID(94), INT64(885), INT64(29));
  ((void(*)(chpl____wide_BaseArr))chpl_vmtable[((INT64(9) * chpl_macro_tmp_4443) + INT64(0))])(call_tmp7);
  call_tmp8 = (&arr)->locale;
  rvfDerefTmp = arr;
  isdirect = chpl_doDirectExecuteOn(&call_tmp8);
  if (isdirect) {
    on_fn128(rvfDerefTmp);
  } else {
    _args_foron_fn = ((_class_localson_fn105)(&chpl_macro_tmp_4444));
    (_args_foron_fn)->_0_rvfDerefTmp = call_tmp8;
    (_args_foron_fn)->_1_rvfDerefTmp = rvfDerefTmp;
    _args_vforon_fn = ((void*)(_args_foron_fn));
    /*** wrapon_fn153 ***/ chpl_executeOn(&call_tmp8, INT32(218), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn105_object), INT64(1227), INT32(2));
  }
  return;
}

/* ChapelDistribution.chpl:863 */
static void _delete_arr4(chpl____wide_DefaultAssociativeArr_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t_T arr) {
  chpl_bool ret;
  chpl____wide_BaseArr coerce_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr coerce_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp4;
  chpl____wide_object T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr call_tmp5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp6;
  chpl____wide_BaseArr call_tmp7 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr call_tmp8 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp9;
  chpl____wide_DefaultAssociativeArr_LocReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_1_int64_t_F_int64_t_T rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect;
  _class_localson_fn150 _args_foron_fn = NULL;
  c_void_ptr _args_vforon_fn;
  chpl____wide_BaseArr chpl_macro_tmp_4445;
  chpl____wide__ref__wide_BaseArr chpl_macro_tmp_4446;
  chpl____wide_object chpl_macro_tmp_4447;
  chpl____wide__nilType chpl_macro_tmp_4448;
  chpl____wide_object chpl_macro_tmp_4449;
  chpl____wide_BaseArr chpl_macro_tmp_4450;
  chpl____wide__ref_int32_t chpl_macro_tmp_4451;
  int32_t chpl_macro_tmp_4452;
  chpl____wide_BaseArr chpl_macro_tmp_4453;
  chpl____wide_BaseArr chpl_macro_tmp_4454;
  chpl____wide__ref_int32_t chpl_macro_tmp_4455;
  int32_t chpl_macro_tmp_4456;
  chpl__class_localson_fn150_object chpl_macro_tmp_4457;
  chpl_macro_tmp_4445.locale = (&arr)->locale;
  chpl_macro_tmp_4445.addr = ((BaseArr)((&arr)->addr));
  call_tmp2 = chpl_macro_tmp_4445;
  coerce_tmp = call_tmp2;
  chpl_macro_tmp_4446.locale = (&coerce_tmp)->locale;
  chpl_macro_tmp_4446.addr = &(((&coerce_tmp)->addr)->_arrAlias);
  chpl_gen_comm_get(((void*)(&coerce_tmp2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4446).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4446).addr, sizeof(chpl____wide_BaseArr), -1, COMMID(95), INT64(865), INT64(29));
  chpl_macro_tmp_4447.locale = (&coerce_tmp2)->locale;
  chpl_macro_tmp_4447.addr = ((object)((&coerce_tmp2)->addr));
  call_tmp3 = chpl_macro_tmp_4447;
  chpl_macro_tmp_4448.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_4448.addr = nil;
  chpl_macro_tmp_4449.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_4449.addr = NULL;
  T = chpl_macro_tmp_4449;
  call_tmp4 = (((&call_tmp3)->addr != (&T)->addr) || ((!(! (&call_tmp3)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp3)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&T)->locale), INT64(0), INT32(0)))));
  if (call_tmp4) {
    ret = UINT8(true);
    goto _end__if_fn733;
  } else {
    ret = UINT8(false);
    goto _end__if_fn733;
  }
  _end__if_fn733:;
  chpl_macro_tmp_4450.locale = (&arr)->locale;
  chpl_macro_tmp_4450.addr = ((BaseArr)((&arr)->addr));
  call_tmp5 = chpl_macro_tmp_4450;
  chpl_macro_tmp_4451.locale = (&call_tmp5)->locale;
  chpl_macro_tmp_4451.addr = &(((object)((&call_tmp5)->addr))->chpl__cid);
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_4452)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4451).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4451).addr, sizeof(int32_t), -1, COMMID(96), INT64(868), INT64(29));
  ((void(*)(chpl____wide_BaseArr,
     chpl_bool))chpl_vmtable[((INT64(9) * chpl_macro_tmp_4452) + INT64(7))])(call_tmp5, ret);
  call_tmp6 = (! ret);
  if (call_tmp6) {
    chpl_macro_tmp_4453.locale = (&arr)->locale;
    chpl_macro_tmp_4453.addr = ((BaseArr)((&arr)->addr));
    call_tmp7 = chpl_macro_tmp_4453;
    chpl_decRefCountsForDomainsInArrayEltTypes4(call_tmp7);
  }
  chpl_macro_tmp_4454.locale = (&arr)->locale;
  chpl_macro_tmp_4454.addr = ((BaseArr)((&arr)->addr));
  call_tmp8 = chpl_macro_tmp_4454;
  chpl_macro_tmp_4455.locale = (&call_tmp8)->locale;
  chpl_macro_tmp_4455.addr = &(((object)((&call_tmp8)->addr))->chpl__cid);
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_4456)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4455).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4455).addr, sizeof(int32_t), -1, COMMID(97), INT64(885), INT64(29));
  ((void(*)(chpl____wide_BaseArr))chpl_vmtable[((INT64(9) * chpl_macro_tmp_4456) + INT64(0))])(call_tmp8);
  call_tmp9 = (&arr)->locale;
  rvfDerefTmp = arr;
  isdirect = chpl_doDirectExecuteOn(&call_tmp9);
  if (isdirect) {
    on_fn103(rvfDerefTmp);
  } else {
    _args_foron_fn = ((_class_localson_fn150)(&chpl_macro_tmp_4457));
    (_args_foron_fn)->_0_rvfDerefTmp = call_tmp9;
    (_args_foron_fn)->_1_rvfDerefTmp = rvfDerefTmp;
    _args_vforon_fn = ((void*)(_args_foron_fn));
    /*** wrapon_fn151 ***/ chpl_executeOn(&call_tmp9, INT32(216), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn150_object), INT64(1227), INT32(2));
  }
  return;
}

/* ChapelDistribution.chpl:863 */
static void _delete_arr26(chpl____wide_ReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_ReplicatedDom_1_int64_t_F arr) {
  chpl_bool ret;
  chpl____wide_BaseArr coerce_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr coerce_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp4;
  chpl____wide_object T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp5;
  chpl____wide_BaseArr call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr coerce_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr call_tmp7 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t T2;
  chpl____wide_object call_tmp8 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr call_tmp9 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp10;
  chpl____wide_ReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_ReplicatedDom_1_int64_t_F rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect;
  _class_localson_fn121 _args_foron_fn = NULL;
  c_void_ptr _args_vforon_fn;
  chpl____wide_BaseArr chpl_macro_tmp_4458;
  chpl____wide__ref__wide_BaseArr chpl_macro_tmp_4459;
  chpl____wide_object chpl_macro_tmp_4460;
  chpl____wide__nilType chpl_macro_tmp_4461;
  chpl____wide_object chpl_macro_tmp_4462;
  chpl____wide_BaseArr chpl_macro_tmp_4463;
  chpl____wide_BaseArr chpl_macro_tmp_4464;
  chpl____wide__ref_int64_t chpl_macro_tmp_4465;
  chpl____wide_object chpl_macro_tmp_4466;
  chpl____wide_BaseArr chpl_macro_tmp_4467;
  chpl____wide__ref_int32_t chpl_macro_tmp_4468;
  int32_t chpl_macro_tmp_4469;
  chpl__class_localson_fn121_object chpl_macro_tmp_4470;
  chpl_macro_tmp_4458.locale = (&arr)->locale;
  chpl_macro_tmp_4458.addr = ((BaseArr)((&arr)->addr));
  call_tmp2 = chpl_macro_tmp_4458;
  coerce_tmp = call_tmp2;
  chpl_macro_tmp_4459.locale = (&coerce_tmp)->locale;
  chpl_macro_tmp_4459.addr = &(((&coerce_tmp)->addr)->_arrAlias);
  chpl_gen_comm_get(((void*)(&coerce_tmp2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4459).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4459).addr, sizeof(chpl____wide_BaseArr), -1, COMMID(98), INT64(865), INT64(29));
  chpl_macro_tmp_4460.locale = (&coerce_tmp2)->locale;
  chpl_macro_tmp_4460.addr = ((object)((&coerce_tmp2)->addr));
  call_tmp3 = chpl_macro_tmp_4460;
  chpl_macro_tmp_4461.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_4461.addr = nil;
  chpl_macro_tmp_4462.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_4462.addr = NULL;
  T = chpl_macro_tmp_4462;
  call_tmp4 = (((&call_tmp3)->addr != (&T)->addr) || ((!(! (&call_tmp3)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp3)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&T)->locale), INT64(0), INT32(0)))));
  if (call_tmp4) {
    ret = UINT8(true);
    goto _end__if_fn733;
  } else {
    ret = UINT8(false);
    goto _end__if_fn733;
  }
  _end__if_fn733:;
  dsiDestroyArr_chpl3(arr, ret);
  call_tmp5 = (! ret);
  if (call_tmp5) {
    chpl_macro_tmp_4463.locale = (&arr)->locale;
    chpl_macro_tmp_4463.addr = ((BaseArr)((&arr)->addr));
    call_tmp6 = chpl_macro_tmp_4463;
    chpl_decRefCountsForDomainsInArrayEltTypes6(call_tmp6);
  }
  chpl_macro_tmp_4464.locale = (&arr)->locale;
  chpl_macro_tmp_4464.addr = ((BaseArr)((&arr)->addr));
  call_tmp7 = chpl_macro_tmp_4464;
  coerce_tmp3 = call_tmp7;
  chpl_macro_tmp_4465.locale = (&coerce_tmp3)->locale;
  chpl_macro_tmp_4465.addr = &(((&coerce_tmp3)->addr)->pid);
  chpl_gen_comm_get(((void*)(&T2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4465).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4465).addr, sizeof(int64_t), -1, COMMID(99), INT64(881), INT64(29));
  chpl_macro_tmp_4466.locale = (&arr)->locale;
  chpl_macro_tmp_4466.addr = ((object)((&arr)->addr));
  call_tmp8 = chpl_macro_tmp_4466;
  _freePrivatizedClass(T2, call_tmp8);
  chpl_macro_tmp_4467.locale = (&arr)->locale;
  chpl_macro_tmp_4467.addr = ((BaseArr)((&arr)->addr));
  call_tmp9 = chpl_macro_tmp_4467;
  chpl_macro_tmp_4468.locale = (&call_tmp9)->locale;
  chpl_macro_tmp_4468.addr = &(((object)((&call_tmp9)->addr))->chpl__cid);
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_4469)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4468).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4468).addr, sizeof(int32_t), -1, COMMID(100), INT64(885), INT64(29));
  ((void(*)(chpl____wide_BaseArr))chpl_vmtable[((INT64(9) * chpl_macro_tmp_4469) + INT64(0))])(call_tmp9);
  call_tmp10 = (&arr)->locale;
  rvfDerefTmp = arr;
  isdirect = chpl_doDirectExecuteOn(&call_tmp10);
  if (isdirect) {
    on_fn118(rvfDerefTmp);
  } else {
    _args_foron_fn = ((_class_localson_fn121)(&chpl_macro_tmp_4470));
    (_args_foron_fn)->_0_rvfDerefTmp = call_tmp10;
    (_args_foron_fn)->_1_rvfDerefTmp = rvfDerefTmp;
    _args_vforon_fn = ((void*)(_args_foron_fn));
    /*** wrapon_fn147 ***/ chpl_executeOn(&call_tmp10, INT32(212), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn121_object), INT64(1227), INT32(2));
  }
  return;
}

/* ChapelDistribution.chpl:863 */
static void _delete_arr6(chpl____wide_DefaultRectangularArr_LocReplicatedArr_FCHGlobalNode_1_int64_t_F_1_int64_t_F_int64_t arr) {
  chpl_bool ret;
  chpl____wide_BaseArr coerce_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr coerce_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp4;
  chpl____wide_object T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp5;
  chpl____wide_BaseArr call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr call_tmp7 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp8;
  chpl____wide_DefaultRectangularArr_LocReplicatedArr_FCHGlobalNode_1_int64_t_F_1_int64_t_F_int64_t rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect;
  _class_localson_fn125 _args_foron_fn = NULL;
  c_void_ptr _args_vforon_fn;
  chpl____wide_BaseArr chpl_macro_tmp_4471;
  chpl____wide__ref__wide_BaseArr chpl_macro_tmp_4472;
  chpl____wide_object chpl_macro_tmp_4473;
  chpl____wide__nilType chpl_macro_tmp_4474;
  chpl____wide_object chpl_macro_tmp_4475;
  chpl____wide_BaseArr chpl_macro_tmp_4476;
  chpl____wide_BaseArr chpl_macro_tmp_4477;
  chpl____wide__ref_int32_t chpl_macro_tmp_4478;
  int32_t chpl_macro_tmp_4479;
  chpl__class_localson_fn125_object chpl_macro_tmp_4480;
  chpl_macro_tmp_4471.locale = (&arr)->locale;
  chpl_macro_tmp_4471.addr = ((BaseArr)((&arr)->addr));
  call_tmp2 = chpl_macro_tmp_4471;
  coerce_tmp = call_tmp2;
  chpl_macro_tmp_4472.locale = (&coerce_tmp)->locale;
  chpl_macro_tmp_4472.addr = &(((&coerce_tmp)->addr)->_arrAlias);
  chpl_gen_comm_get(((void*)(&coerce_tmp2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4472).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4472).addr, sizeof(chpl____wide_BaseArr), -1, COMMID(101), INT64(865), INT64(29));
  chpl_macro_tmp_4473.locale = (&coerce_tmp2)->locale;
  chpl_macro_tmp_4473.addr = ((object)((&coerce_tmp2)->addr));
  call_tmp3 = chpl_macro_tmp_4473;
  chpl_macro_tmp_4474.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_4474.addr = nil;
  chpl_macro_tmp_4475.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_4475.addr = NULL;
  T = chpl_macro_tmp_4475;
  call_tmp4 = (((&call_tmp3)->addr != (&T)->addr) || ((!(! (&call_tmp3)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp3)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&T)->locale), INT64(0), INT32(0)))));
  if (call_tmp4) {
    ret = UINT8(true);
    goto _end__if_fn733;
  } else {
    ret = UINT8(false);
    goto _end__if_fn733;
  }
  _end__if_fn733:;
  dsiDestroyArr7(arr, ret);
  call_tmp5 = (! ret);
  if (call_tmp5) {
    chpl_macro_tmp_4476.locale = (&arr)->locale;
    chpl_macro_tmp_4476.addr = ((BaseArr)((&arr)->addr));
    call_tmp6 = chpl_macro_tmp_4476;
    chpl_decRefCountsForDomainsInArrayEltTypes9(call_tmp6);
  }
  chpl_macro_tmp_4477.locale = (&arr)->locale;
  chpl_macro_tmp_4477.addr = ((BaseArr)((&arr)->addr));
  call_tmp7 = chpl_macro_tmp_4477;
  chpl_macro_tmp_4478.locale = (&call_tmp7)->locale;
  chpl_macro_tmp_4478.addr = &(((object)((&call_tmp7)->addr))->chpl__cid);
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_4479)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4478).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4478).addr, sizeof(int32_t), -1, COMMID(102), INT64(885), INT64(29));
  ((void(*)(chpl____wide_BaseArr))chpl_vmtable[((INT64(9) * chpl_macro_tmp_4479) + INT64(0))])(call_tmp7);
  call_tmp8 = (&arr)->locale;
  rvfDerefTmp = arr;
  isdirect = chpl_doDirectExecuteOn(&call_tmp8);
  if (isdirect) {
    on_fn105(rvfDerefTmp);
  } else {
    _args_foron_fn = ((_class_localson_fn125)(&chpl_macro_tmp_4480));
    (_args_foron_fn)->_0_rvfDerefTmp = call_tmp8;
    (_args_foron_fn)->_1_rvfDerefTmp = rvfDerefTmp;
    _args_vforon_fn = ((void*)(_args_foron_fn));
    /*** wrapon_fn139 ***/ chpl_executeOn(&call_tmp8, INT32(204), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn125_object), INT64(1227), INT32(2));
  }
  return;
}

/* ChapelDistribution.chpl:863 */
static void _delete_arr19(chpl____wide_DefaultAssociativeArr_LocReplicatedArr_FCHGlobalNode_1_int64_t_F_int64_t_T arr) {
  chpl_bool ret;
  chpl____wide_BaseArr coerce_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr coerce_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp4;
  chpl____wide_object T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr call_tmp5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp6;
  chpl____wide_BaseArr call_tmp7 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr call_tmp8 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp9;
  chpl____wide_DefaultAssociativeArr_LocReplicatedArr_FCHGlobalNode_1_int64_t_F_int64_t_T rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect;
  _class_localson_fn122 _args_foron_fn = NULL;
  c_void_ptr _args_vforon_fn;
  chpl____wide_BaseArr chpl_macro_tmp_4481;
  chpl____wide__ref__wide_BaseArr chpl_macro_tmp_4482;
  chpl____wide_object chpl_macro_tmp_4483;
  chpl____wide__nilType chpl_macro_tmp_4484;
  chpl____wide_object chpl_macro_tmp_4485;
  chpl____wide_BaseArr chpl_macro_tmp_4486;
  chpl____wide__ref_int32_t chpl_macro_tmp_4487;
  int32_t chpl_macro_tmp_4488;
  chpl____wide_BaseArr chpl_macro_tmp_4489;
  chpl____wide_BaseArr chpl_macro_tmp_4490;
  chpl____wide__ref_int32_t chpl_macro_tmp_4491;
  int32_t chpl_macro_tmp_4492;
  chpl__class_localson_fn122_object chpl_macro_tmp_4493;
  chpl_macro_tmp_4481.locale = (&arr)->locale;
  chpl_macro_tmp_4481.addr = ((BaseArr)((&arr)->addr));
  call_tmp2 = chpl_macro_tmp_4481;
  coerce_tmp = call_tmp2;
  chpl_macro_tmp_4482.locale = (&coerce_tmp)->locale;
  chpl_macro_tmp_4482.addr = &(((&coerce_tmp)->addr)->_arrAlias);
  chpl_gen_comm_get(((void*)(&coerce_tmp2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4482).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4482).addr, sizeof(chpl____wide_BaseArr), -1, COMMID(103), INT64(865), INT64(29));
  chpl_macro_tmp_4483.locale = (&coerce_tmp2)->locale;
  chpl_macro_tmp_4483.addr = ((object)((&coerce_tmp2)->addr));
  call_tmp3 = chpl_macro_tmp_4483;
  chpl_macro_tmp_4484.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_4484.addr = nil;
  chpl_macro_tmp_4485.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_4485.addr = NULL;
  T = chpl_macro_tmp_4485;
  call_tmp4 = (((&call_tmp3)->addr != (&T)->addr) || ((!(! (&call_tmp3)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp3)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&T)->locale), INT64(0), INT32(0)))));
  if (call_tmp4) {
    ret = UINT8(true);
    goto _end__if_fn733;
  } else {
    ret = UINT8(false);
    goto _end__if_fn733;
  }
  _end__if_fn733:;
  chpl_macro_tmp_4486.locale = (&arr)->locale;
  chpl_macro_tmp_4486.addr = ((BaseArr)((&arr)->addr));
  call_tmp5 = chpl_macro_tmp_4486;
  chpl_macro_tmp_4487.locale = (&call_tmp5)->locale;
  chpl_macro_tmp_4487.addr = &(((object)((&call_tmp5)->addr))->chpl__cid);
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_4488)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4487).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4487).addr, sizeof(int32_t), -1, COMMID(104), INT64(868), INT64(29));
  ((void(*)(chpl____wide_BaseArr,
     chpl_bool))chpl_vmtable[((INT64(9) * chpl_macro_tmp_4488) + INT64(7))])(call_tmp5, ret);
  call_tmp6 = (! ret);
  if (call_tmp6) {
    chpl_macro_tmp_4489.locale = (&arr)->locale;
    chpl_macro_tmp_4489.addr = ((BaseArr)((&arr)->addr));
    call_tmp7 = chpl_macro_tmp_4489;
    chpl_decRefCountsForDomainsInArrayEltTypes9(call_tmp7);
  }
  chpl_macro_tmp_4490.locale = (&arr)->locale;
  chpl_macro_tmp_4490.addr = ((BaseArr)((&arr)->addr));
  call_tmp8 = chpl_macro_tmp_4490;
  chpl_macro_tmp_4491.locale = (&call_tmp8)->locale;
  chpl_macro_tmp_4491.addr = &(((object)((&call_tmp8)->addr))->chpl__cid);
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_4492)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_4491).locale), INT64(0), INT32(0)), (chpl_macro_tmp_4491).addr, sizeof(int32_t), -1, COMMID(105), INT64(885), INT64(29));
  ((void(*)(chpl____wide_BaseArr))chpl_vmtable[((INT64(9) * chpl_macro_tmp_4492) + INT64(0))])(call_tmp8);
  call_tmp9 = (&arr)->locale;
  rvfDerefTmp = arr;
  isdirect = chpl_doDirectExecuteOn(&call_tmp9);
  if (isdirect) {
    on_fn124(rvfDerefTmp);
  } else {
    _args_foron_fn = ((_class_localson_fn122)(&chpl_macro_tmp_4493));
    (_args_foron_fn)->_0_rvfDerefTmp = call_tmp9;
    (_args_foron_fn)->_1_rvfDerefTmp = rvfDerefTmp;
    _args_vforon_fn = ((void*)(_args_foron_fn));
    /*** wrapon_fn138 ***/ chpl_executeOn(&call_tmp9, INT32(203), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn122_object), INT64(1227), INT32(2));
  }
  return;
}

