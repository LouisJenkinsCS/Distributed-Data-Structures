/* LocalAtomicObject.chpl:1 */
static void chpl__init_LocalAtomicObject(int64_t _ln_chpl,
                                         int32_t _fn_chpl) {
  _ref_int32_t refIndentLevel_chpl = NULL;
  if (chpl__init_LocalAtomicObject_p) {
    goto _exit_chpl__init_LocalAtomicObject_chpl;
  }
  printModuleInit("%*s\n", "LocalAtomicObject", INT64(17));
  refIndentLevel_chpl = &moduleInitLevel;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_LocalAtomicObject_p = UINT8(true);
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_LocalAtomicObject_chpl:;
  return;
}

/* LocalAtomicObject.chpl:1 */
static void _construct_LocalAtomicObject_chpl(_ref_atomic_uint64 _atomicVar_chpl,
                                              _ref_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t meme_chpl,
                                              _ref_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t _retArg_chpl) {
  LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_chpl this_chpl6;
  this_chpl6 = *(meme_chpl);
  (&this_chpl6)->_atomicVar_chpl = *(_atomicVar_chpl);
  *(_retArg_chpl) = this_chpl6;
  return;
}

/* LocalAtomicObject.chpl:1 */
static void chpl___ASSIGN_20(_ref_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t _arg1_chpl,
                             chpl____wide__ref_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t _arg2_chpl) {
  memory_order local_memory_order_seq_cst_chpl;
  _ref_atomic_uint64 call_tmp_chpl = NULL;
  chpl____wide__ref_atomic_uint64 call_tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order default_argorder_chpl;
  uint64_t ret_chpl;
  chpl_localeID_t call_tmp_chpl3;
  chpl____wide__ref_atomic_uint64 tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_uint64_t tmp_chpl2 = NULL;
  chpl_bool isdirect_chpl;
  chpl____wide__ref_uint64_t tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn6 _args_foron_fn_chpl = NULL;
  chpl____wide__ref_atomic_uint64 tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_uint64_t tmp_chpl5 = NULL;
  chpl____wide__ref_uint64_t tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  memory_order default_argorder_chpl2;
  chpl_localeID_t call_tmp_chpl4;
  _ref_atomic_uint64 tmp_chpl7 = NULL;
  chpl_bool isdirect_chpl2;
  chpl____wide__ref_atomic_uint64 tmp_chpl8 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn7 _args_foron_fn_chpl2 = NULL;
  _ref_atomic_uint64 tmp_chpl9 = NULL;
  chpl____wide__ref_atomic_uint64 tmp_chpl10 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl2;
  chpl____wide__ref_atomic_uint64 chpl_macro_tmp_5491;
  chpl____wide__ref_uint64_t chpl_macro_tmp_5492;
  chpl__class_localson_fn6_object chpl_macro_tmp_5493;
  chpl____wide__ref_uint64_t chpl_macro_tmp_5494;
  chpl____wide__ref_atomic_uint64 chpl_macro_tmp_5495;
  chpl__class_localson_fn7_object chpl_macro_tmp_5496;
  chpl____wide__ref_atomic_uint64 chpl_macro_tmp_5497;
  local_memory_order_seq_cst_chpl = memory_order_seq_cst;
  call_tmp_chpl = &((_arg1_chpl)->_atomicVar_chpl);
  chpl_macro_tmp_5491.locale = (_arg2_chpl).locale;
  chpl_macro_tmp_5491.addr = &(((_arg2_chpl).addr)->_atomicVar_chpl);
  call_tmp_chpl2 = chpl_macro_tmp_5491;
  default_argorder_chpl = local_memory_order_seq_cst_chpl;
  ret_chpl = UINT64(0);
  call_tmp_chpl3 = (&call_tmp_chpl2)->locale;
  tmp_chpl = call_tmp_chpl2;
  tmp_chpl2 = &ret_chpl;
  isdirect_chpl = chpl_doDirectExecuteOn(&call_tmp_chpl3);
  if (isdirect_chpl) {
    chpl_macro_tmp_5492.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5492.addr = tmp_chpl2;
    tmp_chpl3 = chpl_macro_tmp_5492;
    on_fn6(tmp_chpl, default_argorder_chpl, tmp_chpl3);
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn6)(&chpl_macro_tmp_5493));
    (_args_foron_fn_chpl)->_0_rvfDerefTmp = call_tmp_chpl3;
    tmp_chpl4 = call_tmp_chpl2;
    (_args_foron_fn_chpl)->_1_tmp = tmp_chpl4;
    (_args_foron_fn_chpl)->_2_rvfDerefTmp = default_argorder_chpl;
    tmp_chpl5 = &ret_chpl;
    chpl_macro_tmp_5494.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5494.addr = tmp_chpl5;
    tmp_chpl6 = chpl_macro_tmp_5494;
    (_args_foron_fn_chpl)->_3_tmp = tmp_chpl6;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    /*** wrapon_fn6 ***/ chpl_executeOn(&call_tmp_chpl3, INT32(7), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), sizeof(chpl__class_localson_fn6_object), INT64(758), INT32(12));
  }
  default_argorder_chpl2 = local_memory_order_seq_cst_chpl;
  call_tmp_chpl4 = chpl_gen_getLocaleID();
  tmp_chpl7 = call_tmp_chpl;
  isdirect_chpl2 = chpl_doDirectExecuteOn(&call_tmp_chpl4);
  if (isdirect_chpl2) {
    chpl_macro_tmp_5495.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5495.addr = tmp_chpl7;
    tmp_chpl8 = chpl_macro_tmp_5495;
    on_fn7(tmp_chpl8, ret_chpl, default_argorder_chpl2);
  } else {
    _args_foron_fn_chpl2 = ((_class_localson_fn7)(&chpl_macro_tmp_5496));
    (_args_foron_fn_chpl2)->_0_rvfDerefTmp = call_tmp_chpl4;
    tmp_chpl9 = call_tmp_chpl;
    chpl_macro_tmp_5497.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5497.addr = tmp_chpl9;
    tmp_chpl10 = chpl_macro_tmp_5497;
    (_args_foron_fn_chpl2)->_1_tmp = tmp_chpl10;
    (_args_foron_fn_chpl2)->_2_rvfDerefTmp = ret_chpl;
    (_args_foron_fn_chpl2)->_3_rvfDerefTmp = default_argorder_chpl2;
    _args_vforon_fn_chpl2 = ((void*)(_args_foron_fn_chpl2));
    /*** wrapon_fn7 ***/ chpl_executeOnFast(&call_tmp_chpl4, INT32(8), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl2)), sizeof(chpl__class_localson_fn7_object), INT64(762), INT32(12));
  }
  return;
}

