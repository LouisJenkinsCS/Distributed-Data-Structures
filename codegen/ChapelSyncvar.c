/* ChapelSyncvar.chpl:41 */
static void chpl__init_ChapelSyncvar(int64_t _ln,
                                     int32_t _fn) {
  _ref_int32_t refIndentLevel = NULL;
  if (chpl__init_ChapelSyncvar_p) {
    goto _exit_chpl__init_ChapelSyncvar;
  }
  printModuleInit("%*s\n", "ChapelSyncvar", INT64(13));
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_ChapelSyncvar_p = UINT8(true);
  {
    chpl__init_AlignedTSupport(INT64(41), INT32(23));
    chpl__init_MemConsistency(INT64(41), INT32(23));
    chpl__init_SyncVarRuntimeSupport(INT64(41), INT32(23));
  }
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_ChapelSyncvar:;
  return;
}

/* ChapelSyncvar.chpl:79 */
static void ensureFEType(void) {
  return;
}

/* ChapelSyncvar.chpl:108 */
static void _construct__syncvar(_qthreads_synccls_uint64_t wrapped,
                                chpl_bool isOwned,
                                _ref__syncvar_uint64_t meme,
                                _ref__syncvar_uint64_t _retArg) {
  _syncvar_uint64_t this12;
  chpl____wide__qthreads_synccls_uint64_t T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__qthreads_synccls_uint64_t chpl_macro_tmp_644;
  this12 = *(meme);
  chpl_macro_tmp_644.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_644.addr = wrapped;
  T = chpl_macro_tmp_644;
  (&this12)->wrapped = T;
  (&this12)->isOwned = isOwned;
  *(_retArg) = this12;
  return;
}

/* ChapelSyncvar.chpl:114 */
static void _syncvar(_ref__syncvar_uint64_t _retArg) {
  _syncvar_uint64_t this12;
  _syncvar_uint64_t this13;
  chpl____wide__qthreads_synccls_uint64_t T = {CHPL_LOCALEID_T_INIT, NULL};
  _qthreads_synccls_uint64_t call_tmp2 = NULL;
  chpl____wide__qthreads_synccls_uint64_t T2 = {CHPL_LOCALEID_T_INIT, NULL};
  _syncvar_uint64_t ret_tmp;
  _ref__syncvar_uint64_t ret_to_arg_ref_tmp_ = NULL;
  _qthreads_synccls_uint64_t call_tmp3 = NULL;
  chpl____wide__qthreads_synccls_uint64_t T3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__nilType chpl_macro_tmp_645;
  chpl____wide__qthreads_synccls_uint64_t chpl_macro_tmp_646;
  chpl____wide__qthreads_synccls_uint64_t chpl_macro_tmp_647;
  chpl____wide__qthreads_synccls_uint64_t chpl_macro_tmp_648;
  chpl_macro_tmp_645.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_645.addr = nil;
  chpl_macro_tmp_646.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_646.addr = NULL;
  T = chpl_macro_tmp_646;
  (&this13)->wrapped = T;
  (&this13)->isOwned = UINT8(false);
  call_tmp2 = ((_qthreads_synccls_uint64_t)(nil));
  chpl_macro_tmp_647.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_647.addr = call_tmp2;
  T2 = chpl_macro_tmp_647;
  (&this13)->wrapped = T2;
  (&this13)->isOwned = UINT8(true);
  ret_to_arg_ref_tmp_ = &ret_tmp;
  _construct__syncvar(call_tmp2, UINT8(true), &this13, ret_to_arg_ref_tmp_);
  this12 = ret_tmp;
  ensureFEType();
  call_tmp3 = _qthreads_synccls();
  chpl_macro_tmp_648.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_648.addr = call_tmp3;
  T3 = chpl_macro_tmp_648;
  (&this12)->wrapped = T3;
  (&this12)->isOwned = UINT8(true);
  *(_retArg) = this12;
  return;
}

/* ChapelSyncvar.chpl:128 */
static void deinit41(_ref__syncvar_uint64_t this12) {
  chpl_bool coerce_tmp;
  chpl_bool call_tmp2;
  chpl____wide__qthreads_synccls_uint64_t coerce_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp3;
  chpl____wide__qthreads_synccls_uint64_t rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect;
  _class_localson_fn137 _args_foron_fn = NULL;
  c_void_ptr _args_vforon_fn;
  chpl__class_localson_fn137_object chpl_macro_tmp_649;
  coerce_tmp = (this12)->isOwned;
  call_tmp2 = (coerce_tmp == UINT8(true));
  if (call_tmp2) {
    coerce_tmp2 = (this12)->wrapped;
    deinit42(coerce_tmp2);
    call_tmp3 = (&coerce_tmp2)->locale;
    rvfDerefTmp = coerce_tmp2;
    isdirect = chpl_doDirectExecuteOn(&call_tmp3);
    if (isdirect) {
      on_fn134(rvfDerefTmp);
    } else {
      _args_foron_fn = ((_class_localson_fn137)(&chpl_macro_tmp_649));
      (_args_foron_fn)->_0_rvfDerefTmp = call_tmp3;
      (_args_foron_fn)->_1_rvfDerefTmp = rvfDerefTmp;
      _args_vforon_fn = ((void*)(_args_foron_fn));
      /*** wrapon_fn115 ***/ chpl_executeOn(&call_tmp3, INT32(180), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn137_object), INT64(1227), INT32(2));
    }
  }
  return;
}

/* ChapelSyncvar.chpl:167 */
static uint64_t readFE(chpl____wide__ref__syncvar_uint64_t this12) {
  uint64_t call_tmp2;
  chpl____wide__qthreads_synccls_uint64_t coerce_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide__qthreads_synccls_uint64_t chpl_macro_tmp_650;
  chpl_macro_tmp_650.locale = (this12).locale;
  chpl_macro_tmp_650.addr = &(((this12).addr)->wrapped);
  chpl_gen_comm_get(((void*)(&coerce_tmp)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_650).locale), INT64(0), INT32(0)), (chpl_macro_tmp_650).addr, sizeof(chpl____wide__qthreads_synccls_uint64_t), -1, COMMID(0), INT64(168), INT64(23));
  call_tmp2 = readFE2(coerce_tmp);
  return call_tmp2;
}

/* ChapelSyncvar.chpl:239 */
static void chpl___ASSIGN_7(chpl____wide__ref__syncvar_uint64_t lhs,
                            uint64_t rhs) {
  chpl____wide__qthreads_synccls_uint64_t coerce_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide__qthreads_synccls_uint64_t chpl_macro_tmp_651;
  chpl_macro_tmp_651.locale = (lhs).locale;
  chpl_macro_tmp_651.addr = &(((lhs).addr)->wrapped);
  chpl_gen_comm_get(((void*)(&coerce_tmp)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_651).locale), INT64(0), INT32(0)), (chpl_macro_tmp_651).addr, sizeof(chpl____wide__qthreads_synccls_uint64_t), -1, COMMID(1), INT64(240), INT64(23));
  writeEF(coerce_tmp, rhs);
  return;
}

/* ChapelSyncvar.chpl:288 */
static uint64_t chpl__initCopy12(chpl____wide__ref__syncvar_uint64_t sv) {
  uint64_t call_tmp2;
  chpl____wide__ref__syncvar_uint64_t _ref_tmp_ = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_tmp_ = sv;
  call_tmp2 = readFE(_ref_tmp_);
  return call_tmp2;
}

/* ChapelSyncvar.chpl:480 */
static _qthreads_synccls_uint64_t _construct__qthreads_synccls(aligned_t alignedValue,
                                                               _qthreads_synccls_uint64_t meme) {
  _qthreads_synccls_uint64_t this12 = NULL;
  this12 = meme;
  _construct_object(&((this12)->super));
  (this12)->alignedValue = alignedValue;
  return this12;
}

/* ChapelSyncvar.chpl:485 */
static _qthreads_synccls_uint64_t _qthreads_synccls(void) {
  _qthreads_synccls_uint64_t this12 = NULL;
  _qthreads_synccls_uint64_t this13 = NULL;
  c_void_ptr cast_tmp;
  aligned_t default_argalignedValue;
  _qthreads_synccls_uint64_t wrap_call_tmp = NULL;
  _ref_aligned_t call_tmp2 = NULL;
  aligned_t call_tmp3;
  aligned_t call_tmp4;
  cast_tmp = chpl_here_alloc(sizeof(chpl__qthreads_synccls_uint64_t_object), INT16(85));
  this13 = ((_qthreads_synccls_uint64_t)(cast_tmp));
  ((object)(this13))->chpl__cid = chpl__cid__qthreads_synccls_uint64_t;
  (this13)->alignedValue = default_argalignedValue;
  wrap_call_tmp = _construct__qthreads_synccls(default_argalignedValue, this13);
  this12 = wrap_call_tmp;
  call_tmp2 = &((this12)->alignedValue);
  call_tmp4 = ((aligned_t)(UINT64(0)));
  call_tmp3 = call_tmp4;
  qthread_purge_to(call_tmp2, &call_tmp3);
  return this12;
}

/* ChapelSyncvar.chpl:489 */
static void deinit42(chpl____wide__qthreads_synccls_uint64_t this12) {
  chpl____wide__ref_aligned_t call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_aligned_t T = NULL;
  chpl____wide__ref_aligned_t chpl_macro_tmp_652;
  chpl____wide__ref_aligned_t chpl_macro_tmp_653;
  chpl_macro_tmp_652.locale = (&this12)->locale;
  chpl_macro_tmp_652.addr = &(((&this12)->addr)->alignedValue);
  call_tmp2 = chpl_macro_tmp_652;
  T = (&call_tmp2)->addr;
  qthread_fill(T);
  chpl_macro_tmp_653.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_653.addr = T;
  call_tmp2 = chpl_macro_tmp_653;
  return;
}

/* ChapelSyncvar.chpl:495 */
static uint64_t readFE2(chpl____wide__qthreads_synccls_uint64_t this12) {
  uint64_t ret;
  chpl_localeID_t call_tmp2;
  _ref_uint64_t T = NULL;
  chpl____wide__qthreads_synccls_uint64_t rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect;
  chpl____wide__ref_uint64_t T2 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn162 _args_foron_fn = NULL;
  _ref_uint64_t T3 = NULL;
  chpl____wide__ref_uint64_t T4 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn;
  chpl____wide__ref_uint64_t chpl_macro_tmp_654;
  chpl__class_localson_fn162_object chpl_macro_tmp_655;
  chpl____wide__ref_uint64_t chpl_macro_tmp_656;
  ret = UINT64(0);
  call_tmp2 = (&this12)->locale;
  T = &ret;
  rvfDerefTmp = this12;
  isdirect = chpl_doDirectExecuteOn(&call_tmp2);
  if (isdirect) {
    chpl_macro_tmp_654.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_654.addr = T;
    T2 = chpl_macro_tmp_654;
    on_fn162(rvfDerefTmp, T2);
  } else {
    _args_foron_fn = ((_class_localson_fn162)(&chpl_macro_tmp_655));
    (_args_foron_fn)->_0_rvfDerefTmp = call_tmp2;
    (_args_foron_fn)->_1_rvfDerefTmp = rvfDerefTmp;
    T3 = &ret;
    chpl_macro_tmp_656.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_656.addr = T3;
    T4 = chpl_macro_tmp_656;
    (_args_foron_fn)->_2_tmp = T4;
    _args_vforon_fn = ((void*)(_args_foron_fn));
    /*** wrapon_fn162 ***/ chpl_executeOn(&call_tmp2, INT32(227), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn162_object), INT64(498), INT32(23));
  }
  return ret;
}

/* ChapelSyncvar.chpl:498 */
static void on_fn162(chpl____wide__qthreads_synccls_uint64_t this12,
                     chpl____wide__ref_uint64_t ret) {
  aligned_t alignedLocalRet;
  aligned_t type_tmp;
  chpl____wide__qthreads_synccls_uint64_t rvfRerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_aligned_t call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_aligned_t _ref_tmp_ = NULL;
  _ref_aligned_t T = NULL;
  chpl____wide__ref_aligned_t chpl_macro_tmp_657;
  chpl____wide__ref_aligned_t chpl_macro_tmp_658;
  uint64_t chpl_macro_tmp_659;
  alignedLocalRet = type_tmp;
  chpl_rmem_consist_release(INT64(501), INT32(23));
  rvfRerefTmp = this12;
  chpl_macro_tmp_657.locale = (&rvfRerefTmp)->locale;
  chpl_macro_tmp_657.addr = &(((&rvfRerefTmp)->addr)->alignedValue);
  call_tmp2 = chpl_macro_tmp_657;
  _ref_tmp_ = &alignedLocalRet;
  T = (&call_tmp2)->addr;
  qthread_readFE(_ref_tmp_, T);
  chpl_macro_tmp_658.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_658.addr = T;
  call_tmp2 = chpl_macro_tmp_658;
  chpl_rmem_consist_acquire(INT64(503), INT32(23));
  chpl_macro_tmp_659 = ((uint64_t)(alignedLocalRet));
  chpl_gen_comm_put(((void*)(&chpl_macro_tmp_659)), chpl_nodeFromLocaleID(&((ret).locale), INT64(0), INT32(0)), (ret).addr, sizeof(uint64_t), -1, COMMID(2), INT64(505), INT64(23));
  return;
}

/* ChapelSyncvar.chpl:498 */
static void wrapon_fn162(_class_localson_fn162 c) {
  chpl____wide__qthreads_synccls_uint64_t _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_uint64_t _2_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  _2_tmp = (c)->_2_tmp;
  on_fn162(_1_rvfDerefTmp, _2_tmp);
  return;
}

/* ChapelSyncvar.chpl:546 */
static void writeEF(chpl____wide__qthreads_synccls_uint64_t this12,
                    uint64_t val) {
  chpl_localeID_t call_tmp2;
  chpl____wide__qthreads_synccls_uint64_t rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect;
  _class_localson_fn163 _args_foron_fn = NULL;
  c_void_ptr _args_vforon_fn;
  chpl__class_localson_fn163_object chpl_macro_tmp_660;
  call_tmp2 = (&this12)->locale;
  rvfDerefTmp = this12;
  isdirect = chpl_doDirectExecuteOn(&call_tmp2);
  if (isdirect) {
    on_fn163(rvfDerefTmp, val);
  } else {
    _args_foron_fn = ((_class_localson_fn163)(&chpl_macro_tmp_660));
    (_args_foron_fn)->_0_rvfDerefTmp = call_tmp2;
    (_args_foron_fn)->_1_rvfDerefTmp = rvfDerefTmp;
    (_args_foron_fn)->_2_rvfDerefTmp = val;
    _args_vforon_fn = ((void*)(_args_foron_fn));
    /*** wrapon_fn163 ***/ chpl_executeOn(&call_tmp2, INT32(228), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn163_object), INT64(547), INT32(23));
  }
  return;
}

/* ChapelSyncvar.chpl:547 */
static void on_fn163(chpl____wide__qthreads_synccls_uint64_t this12,
                     uint64_t val) {
  chpl____wide__qthreads_synccls_uint64_t rvfRerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_aligned_t call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  aligned_t call_tmp3;
  aligned_t call_tmp4;
  _ref_aligned_t T = NULL;
  chpl____wide__ref_aligned_t chpl_macro_tmp_661;
  chpl____wide__ref_aligned_t chpl_macro_tmp_662;
  chpl_rmem_consist_release(INT64(548), INT32(23));
  rvfRerefTmp = this12;
  chpl_macro_tmp_661.locale = (&rvfRerefTmp)->locale;
  chpl_macro_tmp_661.addr = &(((&rvfRerefTmp)->addr)->alignedValue);
  call_tmp2 = chpl_macro_tmp_661;
  call_tmp4 = ((aligned_t)(val));
  call_tmp3 = call_tmp4;
  T = (&call_tmp2)->addr;
  qthread_writeEF(T, &call_tmp3);
  chpl_macro_tmp_662.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_662.addr = T;
  call_tmp2 = chpl_macro_tmp_662;
  chpl_rmem_consist_acquire(INT64(550), INT32(23));
  return;
}

/* ChapelSyncvar.chpl:547 */
static void wrapon_fn163(_class_localson_fn163 c) {
  chpl____wide__qthreads_synccls_uint64_t _1_rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  _1_rvfDerefTmp = (c)->_1_rvfDerefTmp;
  on_fn163(_1_rvfDerefTmp, (c)->_2_rvfDerefTmp);
  return;
}

