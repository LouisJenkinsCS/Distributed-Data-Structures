/* FCHLock.chpl:1 */
static void chpl__init_FCHLock(int64_t _ln_chpl,
                               int32_t _fn_chpl) {
  _ref_int32_t refIndentLevel_chpl = NULL;
  if (chpl__init_FCHLock_p) {
    goto _exit_chpl__init_FCHLock_chpl;
  }
  printModuleInit("%*s\n", "FCHLock", INT64(7));
  refIndentLevel_chpl = &moduleInitLevel;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_FCHLock_p = UINT8(true);
  {
    chpl__init_GDT(INT64(1), INT32(54));
    chpl__init_LocalAtomicObject(INT64(1), INT32(54));
    chpl__init_ReplicatedDist(INT64(1), INT32(54));
  }
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_FCHLock_chpl:;
  return;
}

/* FCHLock.chpl:9 */
static FCHFunctor_FCHQueue_int64_t_chpl _construct_FCHFunctor_chpl(FCHFunctor_FCHQueue_int64_t_chpl meme_chpl) {
  FCHFunctor_FCHQueue_int64_t_chpl this_chpl6 = NULL;
  object tmp_chpl = NULL;
  this_chpl6 = meme_chpl;
  tmp_chpl = &((this_chpl6)->super_chpl);
  _construct_object(tmp_chpl);
  return meme_chpl;
}

/* FCHLock.chpl:9 */
static void chpl__auto_destroy_FCHFunctor(chpl____wide_FCHFunctor_FCHQueue_int64_t this_chpl6) {
  return;
}

/* FCHLock.chpl:12 */
static void this_chpl3(chpl____wide_FCHFunctor_FCHQueue_int64_t this_chpl6,
                       chpl____wide__ref__wide_FCHQueue_int64_t data_chpl) {
  string local__str_literal_1966_chpl;
  local__str_literal_1966_chpl /* "Bad Functor (by Ref)..." */ = _str_literal_1966 /* "Bad Functor (by Ref)..." */;
  halt(&local__str_literal_1966_chpl /* "Bad Functor (by Ref)..." */, INT64(13), INT32(54));
  return;
}

/* FCHLock.chpl:17 */
static FCHLocalNode_FCHQueue_int64_t_chpl _construct_FCHLocalNode_chpl(FCHFunctor_FCHQueue_int64_t_chpl request_chpl,
                                                                       _ref_atomicbool wait_chpl,
                                                                       chpl_bool completed_chpl,
                                                                       FCHLocalNode_FCHQueue_int64_t_chpl next_chpl2,
                                                                       FCHLocalNode_FCHQueue_int64_t_chpl meme_chpl) {
  FCHLocalNode_FCHQueue_int64_t_chpl this_chpl6 = NULL;
  this_chpl6 = meme_chpl;
  _construct_object(&((this_chpl6)->super_chpl));
  (this_chpl6)->request_chpl = request_chpl;
  (this_chpl6)->wait_chpl = *(wait_chpl);
  (this_chpl6)->completed_chpl = completed_chpl;
  (this_chpl6)->next_chpl = next_chpl2;
  return this_chpl6;
}

/* FCHLock.chpl:17 */
static void chpl__auto_destroy_FCHLocalNode(chpl____wide_FCHLocalNode_FCHQueue_int64_t this_chpl6) {
  chpl____wide__ref_atomicbool _field_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_bool call_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_atomic_bool tmp_chpl = NULL;
  chpl____wide__ref_atomicbool chpl_macro_tmp_5498;
  chpl____wide__ref_atomic_bool chpl_macro_tmp_5499;
  chpl____wide__ref_atomic_bool chpl_macro_tmp_5500;
  chpl_macro_tmp_5498.locale = (&this_chpl6)->locale;
  chpl_macro_tmp_5498.addr = &(((&this_chpl6)->addr)->wait_chpl);
  _field_destructor_tmp__chpl = chpl_macro_tmp_5498;
  chpl_macro_tmp_5499.locale = (_field_destructor_tmp__chpl).locale;
  chpl_macro_tmp_5499.addr = &(((_field_destructor_tmp__chpl).addr)->_v);
  call_tmp_chpl = chpl_macro_tmp_5499;
  tmp_chpl = (&call_tmp_chpl)->addr;
  atomic_destroy_bool(tmp_chpl);
  chpl_macro_tmp_5500.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5500.addr = tmp_chpl;
  call_tmp_chpl = chpl_macro_tmp_5500;
  return;
}

/* FCHLock.chpl:25 */
static FCHGlobalNode_chpl _construct_FCHGlobalNode_chpl(_ref_atomicbool isCombiner_chpl,
                                                        _ref_atomic_uint64 nextDescr_chpl,
                                                        FCHGlobalNode_chpl meme_chpl) {
  FCHGlobalNode_chpl this_chpl6 = NULL;
  this_chpl6 = meme_chpl;
  _construct_object(&((this_chpl6)->super_chpl));
  (this_chpl6)->isCombiner_chpl = *(isCombiner_chpl);
  (this_chpl6)->nextDescr_chpl = *(nextDescr_chpl);
  return this_chpl6;
}

/* FCHLock.chpl:25 */
static void chpl__auto_destroy_FCHGlobalNode(chpl____wide_FCHGlobalNode this_chpl6) {
  chpl____wide__ref_atomic_uint64 _field_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_uint_least64_t call_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_atomic_uint_least64_t tmp_chpl = NULL;
  chpl____wide__ref_atomicbool _field_destructor_tmp__chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_bool call_tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_atomic_bool tmp_chpl2 = NULL;
  chpl____wide__ref_atomic_uint64 chpl_macro_tmp_5501;
  chpl____wide__ref_atomic_uint_least64_t chpl_macro_tmp_5502;
  chpl____wide__ref_atomic_uint_least64_t chpl_macro_tmp_5503;
  chpl____wide__ref_atomicbool chpl_macro_tmp_5504;
  chpl____wide__ref_atomic_bool chpl_macro_tmp_5505;
  chpl____wide__ref_atomic_bool chpl_macro_tmp_5506;
  chpl_macro_tmp_5501.locale = (&this_chpl6)->locale;
  chpl_macro_tmp_5501.addr = &(((&this_chpl6)->addr)->nextDescr_chpl);
  _field_destructor_tmp__chpl = chpl_macro_tmp_5501;
  chpl_macro_tmp_5502.locale = (_field_destructor_tmp__chpl).locale;
  chpl_macro_tmp_5502.addr = &(((_field_destructor_tmp__chpl).addr)->_v);
  call_tmp_chpl = chpl_macro_tmp_5502;
  tmp_chpl = (&call_tmp_chpl)->addr;
  atomic_destroy_uint_least64_t(tmp_chpl);
  chpl_macro_tmp_5503.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5503.addr = tmp_chpl;
  call_tmp_chpl = chpl_macro_tmp_5503;
  chpl_macro_tmp_5504.locale = (&this_chpl6)->locale;
  chpl_macro_tmp_5504.addr = &(((&this_chpl6)->addr)->isCombiner_chpl);
  _field_destructor_tmp__chpl2 = chpl_macro_tmp_5504;
  chpl_macro_tmp_5505.locale = (_field_destructor_tmp__chpl2).locale;
  chpl_macro_tmp_5505.addr = &(((_field_destructor_tmp__chpl2).addr)->_v);
  call_tmp_chpl2 = chpl_macro_tmp_5505;
  tmp_chpl2 = (&call_tmp_chpl2)->addr;
  atomic_destroy_bool(tmp_chpl2);
  chpl_macro_tmp_5506.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5506.addr = tmp_chpl2;
  call_tmp_chpl2 = chpl_macro_tmp_5506;
  return;
}

/* FCHLock.chpl:30 */
static FCHLock_FCHQueue_int64_t_chpl _construct_FCHLock_chpl(FCHQueue_int64_t_chpl data_chpl,
                                                             GDT_FCHGlobalNode_chpl nodeGDT_chpl,
                                                             _ref_atomic_uint64 combinerList_chpl,
                                                             _ref__domain_DefaultRectangularDom_1_int64_t_F perLocaleSpace_chpl,
                                                             _ref__domain_ReplicatedDom_1_int64_t_F perLocaleDomain_chpl,
                                                             _ref__array_ReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_ReplicatedDom_1_int64_t_F publicationList_chpl,
                                                             _ref__array_ReplicatedArr_FCHGlobalNode_ReplicatedDom_1_int64_t_F recycledCombinerNode_chpl,
                                                             FCHLock_FCHQueue_int64_t_chpl meme_chpl) {
  FCHLock_FCHQueue_int64_t_chpl this_chpl6 = NULL;
  this_chpl6 = meme_chpl;
  _construct_object(&((this_chpl6)->super_chpl));
  (this_chpl6)->data_chpl = data_chpl;
  (this_chpl6)->nodeGDT_chpl = nodeGDT_chpl;
  (this_chpl6)->combinerList_chpl = *(combinerList_chpl);
  (this_chpl6)->perLocaleSpace_chpl = *(perLocaleSpace_chpl);
  (this_chpl6)->perLocaleDomain_chpl = *(perLocaleDomain_chpl);
  (this_chpl6)->publicationList_chpl = *(publicationList_chpl);
  (this_chpl6)->recycledCombinerNode_chpl = *(recycledCombinerNode_chpl);
  return this_chpl6;
}

/* FCHLock.chpl:30 */
static void chpl__auto_destroy_FCHLock(chpl____wide_FCHLock_FCHQueue_int64_t this_chpl6) {
  _array_ReplicatedArr_FCHGlobalNode_ReplicatedDom_1_int64_t_F _field_destructor_tmp__chpl;
  _array_ReplicatedArr_FCHGlobalNode_ReplicatedDom_1_int64_t_F tmp_chpl;
  _array_ReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_ReplicatedDom_1_int64_t_F _field_destructor_tmp__chpl2;
  _array_ReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_ReplicatedDom_1_int64_t_F tmp_chpl2;
  _domain_ReplicatedDom_1_int64_t_F _field_destructor_tmp__chpl3;
  _domain_ReplicatedDom_1_int64_t_F tmp_chpl3;
  _domain_DefaultRectangularDom_1_int64_t_F _field_destructor_tmp__chpl4;
  _domain_DefaultRectangularDom_1_int64_t_F tmp_chpl4;
  chpl____wide__ref_atomic_uint64 _field_destructor_tmp__chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_uint_least64_t call_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_atomic_uint_least64_t tmp_chpl5 = NULL;
  chpl____wide__ref__wide__array_ReplicatedArr_FCHGlobalNode_ReplicatedDom_1_int64_t_F chpl_macro_tmp_5507;
  chpl____wide__ref__wide__array_ReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_ReplicatedDom_1_int64_t_F chpl_macro_tmp_5508;
  chpl____wide__ref__domain_ReplicatedDom_1_int64_t_F chpl_macro_tmp_5509;
  chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_5510;
  chpl____wide__ref_atomic_uint64 chpl_macro_tmp_5511;
  chpl____wide__ref_atomic_uint_least64_t chpl_macro_tmp_5512;
  chpl____wide__ref_atomic_uint_least64_t chpl_macro_tmp_5513;
  chpl_macro_tmp_5507.locale = (&this_chpl6)->locale;
  chpl_macro_tmp_5507.addr = &(((&this_chpl6)->addr)->recycledCombinerNode_chpl);
  chpl_gen_comm_get(((void*)(&tmp_chpl)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5507).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5507).addr, sizeof(_array_ReplicatedArr_FCHGlobalNode_ReplicatedDom_1_int64_t_F), -1, COMMID(0), INT64(40), INT64(54));
  _field_destructor_tmp__chpl = tmp_chpl;
  chpl__autoDestroy15(&_field_destructor_tmp__chpl);
  chpl_macro_tmp_5508.locale = (&this_chpl6)->locale;
  chpl_macro_tmp_5508.addr = &(((&this_chpl6)->addr)->publicationList_chpl);
  chpl_gen_comm_get(((void*)(&tmp_chpl2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5508).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5508).addr, sizeof(_array_ReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_ReplicatedDom_1_int64_t_F), -1, COMMID(1), INT64(39), INT64(54));
  _field_destructor_tmp__chpl2 = tmp_chpl2;
  chpl__autoDestroy18(&_field_destructor_tmp__chpl2);
  chpl_macro_tmp_5509.locale = (&this_chpl6)->locale;
  chpl_macro_tmp_5509.addr = &(((&this_chpl6)->addr)->perLocaleDomain_chpl);
  chpl_gen_comm_get(((void*)(&tmp_chpl3)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5509).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5509).addr, sizeof(_domain_ReplicatedDom_1_int64_t_F), -1, COMMID(2), INT64(38), INT64(54));
  _field_destructor_tmp__chpl3 = tmp_chpl3;
  chpl__autoDestroy7(&_field_destructor_tmp__chpl3);
  chpl_macro_tmp_5510.locale = (&this_chpl6)->locale;
  chpl_macro_tmp_5510.addr = &(((&this_chpl6)->addr)->perLocaleSpace_chpl);
  chpl_gen_comm_get(((void*)(&tmp_chpl4)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5510).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5510).addr, sizeof(_domain_DefaultRectangularDom_1_int64_t_F), -1, COMMID(3), INT64(37), INT64(54));
  _field_destructor_tmp__chpl4 = tmp_chpl4;
  chpl__autoDestroy5(&_field_destructor_tmp__chpl4);
  chpl_macro_tmp_5511.locale = (&this_chpl6)->locale;
  chpl_macro_tmp_5511.addr = &(((&this_chpl6)->addr)->combinerList_chpl);
  _field_destructor_tmp__chpl5 = chpl_macro_tmp_5511;
  chpl_macro_tmp_5512.locale = (_field_destructor_tmp__chpl5).locale;
  chpl_macro_tmp_5512.addr = &(((_field_destructor_tmp__chpl5).addr)->_v);
  call_tmp_chpl = chpl_macro_tmp_5512;
  tmp_chpl5 = (&call_tmp_chpl)->addr;
  atomic_destroy_uint_least64_t(tmp_chpl5);
  chpl_macro_tmp_5513.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5513.addr = tmp_chpl5;
  call_tmp_chpl = chpl_macro_tmp_5513;
  return;
}

/* FCHLock.chpl:46 */
static void waitForCombiner_chpl(FCHLock_FCHQueue_int64_t_chpl this_chpl6,
                                 _ref__tuple_2_FCHGlobalNode_uint64_t _retArg_chpl) {
  string local__str_literal_1993_chpl;
  memory_order local_memory_order_seq_cst_chpl;
  chpl____wide_FCHGlobalNode node_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__array_ReplicatedArr_FCHGlobalNode_ReplicatedDom_1_int64_t_F call_tmp_chpl = NULL;
  _tuple_1_star_int64_t this_chpl7;
  chpl____wide_FCHGlobalNode ret_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  ReplicatedArr_FCHGlobalNode_ReplicatedDom_1_int64_t_F_chpl call_tmp_chpl2 = NULL;
  chpl____wide__ref__wide_FCHGlobalNode call_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp_chpl5;
  chpl____wide_object tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  FCHGlobalNode_chpl this_chpl8 = NULL;
  c_void_ptr cast_tmp_chpl;
  atomicbool _init_class_tmp__chpl;
  atomic_uint64 _init_class_tmp__chpl2;
  atomicbool this_chpl9;
  atomic_bool ret_chpl2;
  atomic_bool type_tmp_chpl;
  _ref_atomic_bool _ref_tmp__chpl = NULL;
  atomicbool ret_tmp_chpl;
  _ref_atomicbool ret_to_arg_ref_tmp__chpl = NULL;
  atomic_uint64 this_chpl10;
  atomic_uint_least64_t ret_chpl3;
  atomic_uint_least64_t type_tmp_chpl2;
  _ref_atomic_uint_least64_t _ref_tmp__chpl2 = NULL;
  atomic_uint64 ret_tmp_chpl2;
  _ref_atomic_uint64 ret_to_arg_ref_tmp__chpl2 = NULL;
  FCHGlobalNode_chpl wrap_call_tmp_chpl = NULL;
  _ref__array_ReplicatedArr_FCHGlobalNode_ReplicatedDom_1_int64_t_F call_tmp_chpl6 = NULL;
  _tuple_1_star_int64_t this_chpl11;
  ReplicatedArr_FCHGlobalNode_ReplicatedDom_1_int64_t_F_chpl call_tmp_chpl7 = NULL;
  chpl____wide__ref__wide_FCHGlobalNode call_tmp_chpl8 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_FCHGlobalNode tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomicbool call_tmp_chpl9 = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order default_argorder_chpl;
  chpl_localeID_t call_tmp_chpl10;
  chpl____wide__ref_atomicbool tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect_chpl;
  _class_localson_fn2 _args_foron_fn_chpl = NULL;
  chpl____wide__ref_atomicbool tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  uint64_t call_tmp_chpl11;
  _ref_atomic_uint64 call_tmp_chpl12 = NULL;
  memory_order default_argorder_chpl2;
  uint64_t ret_chpl4;
  chpl_localeID_t call_tmp_chpl13;
  _ref_atomic_uint64 tmp_chpl5 = NULL;
  _ref_uint64_t tmp_chpl6 = NULL;
  chpl_bool isdirect_chpl2;
  chpl____wide__ref_atomic_uint64 tmp_chpl7 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_uint64_t tmp_chpl8 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn8 _args_foron_fn_chpl2 = NULL;
  _ref_atomic_uint64 tmp_chpl9 = NULL;
  chpl____wide__ref_atomic_uint64 tmp_chpl10 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_uint64_t tmp_chpl11 = NULL;
  chpl____wide__ref_uint64_t tmp_chpl12 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl2;
  chpl_bool call_tmp_chpl14;
  chpl____wide_FCHGlobalNode prevNode_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  GDT_FCHGlobalNode_chpl coerce_tmp_chpl = NULL;
  chpl_bool call_tmp_chpl15;
  _ref__array_CyclicArr__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F call_tmp_chpl16 = NULL;
  _tuple_1_star_int64_t this_chpl12;
  CyclicArr__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F_chpl call_tmp_chpl17 = NULL;
  int64_t coerce_tmp_chpl2;
  chpl____wide__ref__wide__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t call_tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp_chpl19;
  chpl____wide_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t call_tmp_chpl20 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t ret_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_FCHGlobalNode ret_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ddata_FCHGlobalNode coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide_FCHGlobalNode call_tmp_chpl21 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_uint64 call_tmp_chpl22 = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order default_argorder_chpl3;
  chpl_localeID_t call_tmp_chpl23;
  chpl____wide__ref_atomic_uint64 tmp_chpl13 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect_chpl3;
  _class_localson_fn7 _args_foron_fn_chpl3 = NULL;
  chpl____wide__ref_atomic_uint64 tmp_chpl14 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl3;
  chpl____wide__ref_atomicbool call_tmp_chpl24 = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order default_argorder_chpl4;
  chpl_localeID_t call_tmp_chpl25;
  chpl____wide__ref_atomicbool tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect_chpl4;
  _class_localson_fn5 _args_foron_fn_chpl4 = NULL;
  chpl____wide__ref_atomicbool tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl4;
  chpl____wide_object chpl_macro_tmp_5514;
  chpl____wide__nilType chpl_macro_tmp_5515;
  chpl____wide_object chpl_macro_tmp_5516;
  chpl____wide_FCHGlobalNode chpl_macro_tmp_5517;
  chpl____wide_FCHGlobalNode chpl_macro_tmp_5518;
  chpl____wide__ref_atomicbool chpl_macro_tmp_5519;
  chpl__class_localson_fn2_object chpl_macro_tmp_5520;
  chpl____wide__ref_atomic_uint64 chpl_macro_tmp_5521;
  chpl____wide__ref_uint64_t chpl_macro_tmp_5522;
  chpl__class_localson_fn8_object chpl_macro_tmp_5523;
  chpl____wide__ref_atomic_uint64 chpl_macro_tmp_5524;
  chpl____wide__ref_uint64_t chpl_macro_tmp_5525;
  chpl____wide__ref__wide_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t chpl_macro_tmp_5526;
  chpl____wide__ref__wide__ddata_FCHGlobalNode chpl_macro_tmp_5527;
  chpl____wide__ref__wide_FCHGlobalNode chpl_macro_tmp_5528;
  chpl____wide__ref_atomic_uint64 chpl_macro_tmp_5529;
  chpl__class_localson_fn7_object chpl_macro_tmp_5530;
  chpl____wide__ref_atomicbool chpl_macro_tmp_5531;
  chpl__class_localson_fn5_object chpl_macro_tmp_5532;
  local__str_literal_1993_chpl /* "Descriptor is 0!" */ = _str_literal_1993 /* "Descriptor is 0!" */;
  local_memory_order_seq_cst_chpl = memory_order_seq_cst;
  call_tmp_chpl = &((this_chpl6)->recycledCombinerNode_chpl);
  *(this_chpl7 + INT64(0)) = INT64(0);
  call_tmp_chpl2 = chpl_getPrivatizedCopy5((call_tmp_chpl)->_pid);
  call_tmp_chpl3 = dsiAccess_chpl3(call_tmp_chpl2, &this_chpl7);
  chpl_gen_comm_get(((void*)(&ret_chpl)), chpl_nodeFromLocaleID(&((call_tmp_chpl3).locale), INT64(0), INT32(0)), (call_tmp_chpl3).addr, sizeof(chpl____wide_FCHGlobalNode), -1, COMMID(4), INT64(48), INT64(54));
  node_chpl = ret_chpl;
  chpl_macro_tmp_5514.locale = (&ret_chpl)->locale;
  chpl_macro_tmp_5514.addr = ((object)((&ret_chpl)->addr));
  call_tmp_chpl4 = chpl_macro_tmp_5514;
  chpl_macro_tmp_5515.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5515.addr = nil;
  chpl_macro_tmp_5516.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5516.addr = NULL;
  tmp_chpl = chpl_macro_tmp_5516;
  call_tmp_chpl5 = (! (((&call_tmp_chpl4)->addr != (&tmp_chpl)->addr) || ((!(! (&call_tmp_chpl4)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp_chpl4)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&tmp_chpl)->locale), INT64(0), INT32(0))))));
  if (call_tmp_chpl5) {
    cast_tmp_chpl = chpl_here_alloc(sizeof(chpl_FCHGlobalNode_chpl_object), INT16(171));
    this_chpl8 = ((FCHGlobalNode_chpl)(cast_tmp_chpl));
    ((object)(this_chpl8))->chpl__cid = chpl__cid_FCHGlobalNode_chpl;
    (this_chpl8)->isCombiner_chpl = _init_class_tmp__chpl;
    (this_chpl8)->nextDescr_chpl = _init_class_tmp__chpl2;
    ret_chpl2 = type_tmp_chpl;
    _ref_tmp__chpl = &ret_chpl2;
    atomic_init_bool(_ref_tmp__chpl, UINT8(false));
    (&this_chpl9)->_v = ret_chpl2;
    ret_to_arg_ref_tmp__chpl = &ret_tmp_chpl;
    _construct_atomicbool(ret_chpl2, &this_chpl9, ret_to_arg_ref_tmp__chpl);
    (this_chpl8)->isCombiner_chpl = ret_tmp_chpl;
    ret_chpl3 = type_tmp_chpl2;
    _ref_tmp__chpl2 = &ret_chpl3;
    atomic_init_uint_least64_t(_ref_tmp__chpl2, ((uint64_t)(INT64(0))));
    (&this_chpl10)->_v = ret_chpl3;
    ret_to_arg_ref_tmp__chpl2 = &ret_tmp_chpl2;
    _construct_atomic_uint64(ret_chpl3, &this_chpl10, ret_to_arg_ref_tmp__chpl2);
    (this_chpl8)->nextDescr_chpl = ret_tmp_chpl2;
    wrap_call_tmp_chpl = _construct_FCHGlobalNode_chpl(&ret_tmp_chpl, &ret_tmp_chpl2, this_chpl8);
    chpl_macro_tmp_5517.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5517.addr = wrap_call_tmp_chpl;
    node_chpl = chpl_macro_tmp_5517;
    call_tmp_chpl6 = &((this_chpl6)->recycledCombinerNode_chpl);
    *(this_chpl11 + INT64(0)) = INT64(0);
    call_tmp_chpl7 = chpl_getPrivatizedCopy5((call_tmp_chpl6)->_pid);
    call_tmp_chpl8 = dsiAccess_chpl3(call_tmp_chpl7, &this_chpl11);
    chpl_macro_tmp_5518.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5518.addr = wrap_call_tmp_chpl;
    tmp_chpl2 = chpl_macro_tmp_5518;
    chpl_gen_comm_put(((void*)(&tmp_chpl2)), chpl_nodeFromLocaleID(&((call_tmp_chpl8).locale), INT64(0), INT32(0)), (call_tmp_chpl8).addr, sizeof(chpl____wide_FCHGlobalNode), -1, COMMID(5), INT64(51), INT64(54));
  }
  chpl_macro_tmp_5519.locale = (&node_chpl)->locale;
  chpl_macro_tmp_5519.addr = &(((&node_chpl)->addr)->isCombiner_chpl);
  call_tmp_chpl9 = chpl_macro_tmp_5519;
  default_argorder_chpl = local_memory_order_seq_cst_chpl;
  call_tmp_chpl10 = (&call_tmp_chpl9)->locale;
  tmp_chpl3 = call_tmp_chpl9;
  isdirect_chpl = chpl_doDirectExecuteOn(&call_tmp_chpl10);
  if (isdirect_chpl) {
    on_fn2(tmp_chpl3, UINT8(false), default_argorder_chpl);
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn2)(&chpl_macro_tmp_5520));
    (_args_foron_fn_chpl)->_0_rvfDerefTmp = call_tmp_chpl10;
    tmp_chpl4 = call_tmp_chpl9;
    (_args_foron_fn_chpl)->_1_tmp = tmp_chpl4;
    (_args_foron_fn_chpl)->_2_rvfDerefTmp = UINT8(false);
    (_args_foron_fn_chpl)->_3_rvfDerefTmp = default_argorder_chpl;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    /*** wrapon_fn2 ***/ chpl_executeOnFast(&call_tmp_chpl10, INT32(1), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), sizeof(chpl__class_localson_fn2_object), INT64(341), INT32(12));
  }
  call_tmp_chpl11 = register_chpl((this_chpl6)->nodeGDT_chpl, node_chpl);
  call_tmp_chpl12 = &((this_chpl6)->combinerList_chpl);
  default_argorder_chpl2 = local_memory_order_seq_cst_chpl;
  ret_chpl4 = UINT64(0);
  call_tmp_chpl13 = chpl_gen_getLocaleID();
  tmp_chpl5 = call_tmp_chpl12;
  tmp_chpl6 = &ret_chpl4;
  isdirect_chpl2 = chpl_doDirectExecuteOn(&call_tmp_chpl13);
  if (isdirect_chpl2) {
    chpl_macro_tmp_5521.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5521.addr = tmp_chpl5;
    tmp_chpl7 = chpl_macro_tmp_5521;
    chpl_macro_tmp_5522.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5522.addr = tmp_chpl6;
    tmp_chpl8 = chpl_macro_tmp_5522;
    on_fn8(tmp_chpl7, call_tmp_chpl11, default_argorder_chpl2, tmp_chpl8);
  } else {
    _args_foron_fn_chpl2 = ((_class_localson_fn8)(&chpl_macro_tmp_5523));
    (_args_foron_fn_chpl2)->_0_rvfDerefTmp = call_tmp_chpl13;
    tmp_chpl9 = call_tmp_chpl12;
    chpl_macro_tmp_5524.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5524.addr = tmp_chpl9;
    tmp_chpl10 = chpl_macro_tmp_5524;
    (_args_foron_fn_chpl2)->_1_tmp = tmp_chpl10;
    (_args_foron_fn_chpl2)->_2_rvfDerefTmp = call_tmp_chpl11;
    (_args_foron_fn_chpl2)->_3_rvfDerefTmp = default_argorder_chpl2;
    tmp_chpl11 = &ret_chpl4;
    chpl_macro_tmp_5525.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5525.addr = tmp_chpl11;
    tmp_chpl12 = chpl_macro_tmp_5525;
    (_args_foron_fn_chpl2)->_4_tmp = tmp_chpl12;
    _args_vforon_fn_chpl2 = ((void*)(_args_foron_fn_chpl2));
    /*** wrapon_fn8 ***/ chpl_executeOn(&call_tmp_chpl13, INT32(9), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl2)), sizeof(chpl__class_localson_fn8_object), INT64(766), INT32(12));
  }
  call_tmp_chpl14 = (ret_chpl4 != UINT64(0));
  if (call_tmp_chpl14) {
    coerce_tmp_chpl = (this_chpl6)->nodeGDT_chpl;
    call_tmp_chpl15 = (ret_chpl4 == UINT64(0));
    if (call_tmp_chpl15) {
      halt(&local__str_literal_1993_chpl /* "Descriptor is 0!" */, INT64(60), INT32(54));
    }
    call_tmp_chpl16 = &((coerce_tmp_chpl)->gdtEntries_chpl);
    *(this_chpl12 + INT64(0)) = ((int64_t)(((uint64_t)((ret_chpl4 >> INT64(32))))));
    coerce_tmp_chpl2 = (call_tmp_chpl16)->_pid;
    call_tmp_chpl17 = chpl_getPrivatizedCopy(coerce_tmp_chpl2);
    call_tmp_chpl18 = dsiAccess_chpl(call_tmp_chpl17, &this_chpl12);
    call_tmp_chpl19 = ((int64_t)((ret_chpl4 & ((uint64_t)(INT64(4294967295))))));
    chpl_macro_tmp_5526.locale = (call_tmp_chpl18).locale;
    chpl_macro_tmp_5526.addr = &(((call_tmp_chpl18).addr)->_instance);
    chpl_gen_comm_get(((void*)(&ret_chpl5)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5526).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5526).addr, sizeof(chpl____wide_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t), -1, COMMID(6), INT64(60), INT64(54));
    call_tmp_chpl20 = ret_chpl5;
    chpl_macro_tmp_5527.locale = (&call_tmp_chpl20)->locale;
    chpl_macro_tmp_5527.addr = &(((&call_tmp_chpl20)->addr)->shiftedData);
    chpl_gen_comm_get(((void*)(&coerce_tmp_chpl3)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5527).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5527).addr, sizeof(chpl____wide__ddata_FCHGlobalNode), -1, COMMID(7), INT64(60), INT64(54));
    chpl_macro_tmp_5528.locale = (&coerce_tmp_chpl3)->locale;
    chpl_macro_tmp_5528.addr = ((&coerce_tmp_chpl3)->addr + call_tmp_chpl19);
    call_tmp_chpl21 = chpl_macro_tmp_5528;
    chpl_gen_comm_get(((void*)(&ret_chpl6)), chpl_nodeFromLocaleID(&((call_tmp_chpl21).locale), INT64(0), INT32(0)), (call_tmp_chpl21).addr, sizeof(chpl____wide_FCHGlobalNode), -1, COMMID(8), INT64(60), INT64(54));
    prevNode_chpl = ret_chpl6;
    chpl_macro_tmp_5529.locale = (&prevNode_chpl)->locale;
    chpl_macro_tmp_5529.addr = &(((&prevNode_chpl)->addr)->nextDescr_chpl);
    call_tmp_chpl22 = chpl_macro_tmp_5529;
    default_argorder_chpl3 = local_memory_order_seq_cst_chpl;
    call_tmp_chpl23 = (&call_tmp_chpl22)->locale;
    tmp_chpl13 = call_tmp_chpl22;
    isdirect_chpl3 = chpl_doDirectExecuteOn(&call_tmp_chpl23);
    if (isdirect_chpl3) {
      on_fn7(tmp_chpl13, call_tmp_chpl11, default_argorder_chpl3);
    } else {
      _args_foron_fn_chpl3 = ((_class_localson_fn7)(&chpl_macro_tmp_5530));
      (_args_foron_fn_chpl3)->_0_rvfDerefTmp = call_tmp_chpl23;
      tmp_chpl14 = call_tmp_chpl22;
      (_args_foron_fn_chpl3)->_1_tmp = tmp_chpl14;
      (_args_foron_fn_chpl3)->_2_rvfDerefTmp = call_tmp_chpl11;
      (_args_foron_fn_chpl3)->_3_rvfDerefTmp = default_argorder_chpl3;
      _args_vforon_fn_chpl3 = ((void*)(_args_foron_fn_chpl3));
      /*** wrapon_fn7 ***/ chpl_executeOnFast(&call_tmp_chpl23, INT32(8), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl3)), sizeof(chpl__class_localson_fn7_object), INT64(762), INT32(12));
    }
    chpl_macro_tmp_5531.locale = (&node_chpl)->locale;
    chpl_macro_tmp_5531.addr = &(((&node_chpl)->addr)->isCombiner_chpl);
    call_tmp_chpl24 = chpl_macro_tmp_5531;
    default_argorder_chpl4 = local_memory_order_seq_cst_chpl;
    call_tmp_chpl25 = (&call_tmp_chpl24)->locale;
    tmp_chpl15 = call_tmp_chpl24;
    isdirect_chpl4 = chpl_doDirectExecuteOn(&call_tmp_chpl25);
    if (isdirect_chpl4) {
      on_fn5(tmp_chpl15, UINT8(true), default_argorder_chpl4);
    } else {
      _args_foron_fn_chpl4 = ((_class_localson_fn5)(&chpl_macro_tmp_5532));
      (_args_foron_fn_chpl4)->_0_rvfDerefTmp = call_tmp_chpl25;
      tmp_chpl16 = call_tmp_chpl24;
      (_args_foron_fn_chpl4)->_1_tmp = tmp_chpl16;
      (_args_foron_fn_chpl4)->_2_rvfDerefTmp = UINT8(true);
      (_args_foron_fn_chpl4)->_3_rvfDerefTmp = default_argorder_chpl4;
      _args_vforon_fn_chpl4 = ((void*)(_args_foron_fn_chpl4));
      /*** wrapon_fn5 ***/ chpl_executeOn(&call_tmp_chpl25, INT32(6), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl4)), sizeof(chpl__class_localson_fn5_object), INT64(402), INT32(12));
    }
  }
  (_retArg_chpl)->x1 = node_chpl;
  (_retArg_chpl)->x2 = call_tmp_chpl11;
  return;
}

/* FCHLock.chpl:73 */
static void giveUpCombiner_chpl(FCHLock_FCHQueue_int64_t_chpl this_chpl6,
                                chpl____wide_FCHGlobalNode node_chpl,
                                uint64_t descr_chpl) {
  string local__str_literal_1993_chpl;
  memory_order local_memory_order_seq_cst_chpl;
  chpl____wide__ref_atomic_uint64 call_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order default_argorder_chpl;
  uint64_t ret_chpl;
  chpl_localeID_t call_tmp_chpl2;
  chpl____wide__ref_atomic_uint64 tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_uint64_t tmp_chpl2 = NULL;
  chpl_bool isdirect_chpl;
  chpl____wide__ref_uint64_t tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn6 _args_foron_fn_chpl = NULL;
  chpl____wide__ref_atomic_uint64 tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_uint64_t tmp_chpl5 = NULL;
  chpl____wide__ref_uint64_t tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  chpl_bool call_tmp_chpl3;
  _ref_atomic_uint64 call_tmp_chpl4 = NULL;
  uint64_t call_tmp_chpl5;
  memory_order default_argorder_chpl2;
  chpl_bool ret_chpl2;
  chpl_localeID_t call_tmp_chpl6;
  _ref_chpl_bool tmp_chpl7 = NULL;
  _ref_atomic_uint64 tmp_chpl8 = NULL;
  chpl_bool isdirect_chpl2;
  chpl____wide__ref_chpl_bool tmp_chpl9 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_uint64 tmp_chpl10 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn9 _args_foron_fn_chpl2 = NULL;
  _ref_chpl_bool tmp_chpl11 = NULL;
  chpl____wide__ref_chpl_bool tmp_chpl12 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_atomic_uint64 tmp_chpl13 = NULL;
  chpl____wide__ref_atomic_uint64 tmp_chpl14 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl2;
  GDT_FCHGlobalNode_chpl coerce_tmp_chpl = NULL;
  chpl_bool call_tmp_chpl7;
  _ref__array_CyclicArr_Bitmap_1_int64_t_F call_tmp_chpl8 = NULL;
  _tuple_1_star_int64_t this_chpl7;
  CyclicArr_Bitmap_1_int64_t_F_chpl call_tmp_chpl9 = NULL;
  int64_t coerce_tmp_chpl2;
  chpl____wide__ref_Bitmap call_tmp_chpl10 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool tmp_chpl15;
  chpl____wide__ref_atomic_uint64 call_tmp_chpl11 = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order default_argorder_chpl3;
  uint64_t ret_chpl3;
  chpl_localeID_t call_tmp_chpl12;
  chpl____wide__ref_atomic_uint64 tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_uint64_t tmp_chpl17 = NULL;
  chpl_bool isdirect_chpl3;
  chpl____wide__ref_uint64_t tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn6 _args_foron_fn_chpl3 = NULL;
  chpl____wide__ref_atomic_uint64 tmp_chpl19 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_uint64_t tmp_chpl20 = NULL;
  chpl____wide__ref_uint64_t tmp_chpl21 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl3;
  chpl_bool call_tmp_chpl13;
  chpl____wide_FCHGlobalNode call_tmp_chpl14 = {CHPL_LOCALEID_T_INIT, NULL};
  GDT_FCHGlobalNode_chpl coerce_tmp_chpl3 = NULL;
  chpl_bool call_tmp_chpl15;
  _ref__array_CyclicArr__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F call_tmp_chpl16 = NULL;
  _tuple_1_star_int64_t this_chpl8;
  CyclicArr__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F_chpl call_tmp_chpl17 = NULL;
  int64_t coerce_tmp_chpl4;
  chpl____wide__ref__wide__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t call_tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp_chpl19;
  chpl____wide_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t call_tmp_chpl20 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t ret_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_FCHGlobalNode ret_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ddata_FCHGlobalNode coerce_tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide_FCHGlobalNode call_tmp_chpl21 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomicbool call_tmp_chpl22 = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order default_argorder_chpl4;
  chpl_localeID_t call_tmp_chpl23;
  chpl____wide__ref_atomicbool tmp_chpl22 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect_chpl4;
  _class_localson_fn2 _args_foron_fn_chpl4 = NULL;
  chpl____wide__ref_atomicbool tmp_chpl23 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl4;
  GDT_FCHGlobalNode_chpl coerce_tmp_chpl6 = NULL;
  chpl_bool call_tmp_chpl24;
  _ref__array_CyclicArr_Bitmap_1_int64_t_F call_tmp_chpl25 = NULL;
  _tuple_1_star_int64_t this_chpl9;
  CyclicArr_Bitmap_1_int64_t_F_chpl call_tmp_chpl26 = NULL;
  int64_t coerce_tmp_chpl7;
  chpl____wide__ref_Bitmap call_tmp_chpl27 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_uint64 chpl_macro_tmp_5533;
  chpl____wide__ref_uint64_t chpl_macro_tmp_5534;
  chpl__class_localson_fn6_object chpl_macro_tmp_5535;
  chpl____wide__ref_uint64_t chpl_macro_tmp_5536;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_5537;
  chpl____wide__ref_atomic_uint64 chpl_macro_tmp_5538;
  chpl__class_localson_fn9_object chpl_macro_tmp_5539;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_5540;
  chpl____wide__ref_atomic_uint64 chpl_macro_tmp_5541;
  chpl____wide__ref_atomic_uint64 chpl_macro_tmp_5542;
  chpl____wide__ref_uint64_t chpl_macro_tmp_5543;
  chpl__class_localson_fn6_object chpl_macro_tmp_5544;
  chpl____wide__ref_uint64_t chpl_macro_tmp_5545;
  chpl____wide__ref__wide_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t chpl_macro_tmp_5546;
  chpl____wide__ref__wide__ddata_FCHGlobalNode chpl_macro_tmp_5547;
  chpl____wide__ref__wide_FCHGlobalNode chpl_macro_tmp_5548;
  chpl____wide__ref_atomicbool chpl_macro_tmp_5549;
  chpl__class_localson_fn2_object chpl_macro_tmp_5550;
  local__str_literal_1993_chpl /* "Descriptor is 0!" */ = _str_literal_1993 /* "Descriptor is 0!" */;
  local_memory_order_seq_cst_chpl = memory_order_seq_cst;
  chpl_macro_tmp_5533.locale = (&node_chpl)->locale;
  chpl_macro_tmp_5533.addr = &(((&node_chpl)->addr)->nextDescr_chpl);
  call_tmp_chpl = chpl_macro_tmp_5533;
  default_argorder_chpl = local_memory_order_seq_cst_chpl;
  ret_chpl = UINT64(0);
  call_tmp_chpl2 = (&call_tmp_chpl)->locale;
  tmp_chpl = call_tmp_chpl;
  tmp_chpl2 = &ret_chpl;
  isdirect_chpl = chpl_doDirectExecuteOn(&call_tmp_chpl2);
  if (isdirect_chpl) {
    chpl_macro_tmp_5534.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5534.addr = tmp_chpl2;
    tmp_chpl3 = chpl_macro_tmp_5534;
    on_fn6(tmp_chpl, default_argorder_chpl, tmp_chpl3);
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn6)(&chpl_macro_tmp_5535));
    (_args_foron_fn_chpl)->_0_rvfDerefTmp = call_tmp_chpl2;
    tmp_chpl4 = call_tmp_chpl;
    (_args_foron_fn_chpl)->_1_tmp = tmp_chpl4;
    (_args_foron_fn_chpl)->_2_rvfDerefTmp = default_argorder_chpl;
    tmp_chpl5 = &ret_chpl;
    chpl_macro_tmp_5536.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5536.addr = tmp_chpl5;
    tmp_chpl6 = chpl_macro_tmp_5536;
    (_args_foron_fn_chpl)->_3_tmp = tmp_chpl6;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    /*** wrapon_fn6 ***/ chpl_executeOn(&call_tmp_chpl2, INT32(7), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), sizeof(chpl__class_localson_fn6_object), INT64(758), INT32(12));
  }
  call_tmp_chpl3 = (ret_chpl == UINT64(0));
  if (call_tmp_chpl3) {
    call_tmp_chpl4 = &((this_chpl6)->combinerList_chpl);
    call_tmp_chpl5 = ((uint64_t)(INT64(0)));
    default_argorder_chpl2 = local_memory_order_seq_cst_chpl;
    ret_chpl2 = UINT8(false);
    call_tmp_chpl6 = chpl_gen_getLocaleID();
    tmp_chpl7 = &ret_chpl2;
    tmp_chpl8 = call_tmp_chpl4;
    isdirect_chpl2 = chpl_doDirectExecuteOn(&call_tmp_chpl6);
    if (isdirect_chpl2) {
      chpl_macro_tmp_5537.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_5537.addr = tmp_chpl7;
      tmp_chpl9 = chpl_macro_tmp_5537;
      chpl_macro_tmp_5538.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_5538.addr = tmp_chpl8;
      tmp_chpl10 = chpl_macro_tmp_5538;
      on_fn9(tmp_chpl9, tmp_chpl10, descr_chpl, call_tmp_chpl5, default_argorder_chpl2);
    } else {
      _args_foron_fn_chpl2 = ((_class_localson_fn9)(&chpl_macro_tmp_5539));
      (_args_foron_fn_chpl2)->_0_rvfDerefTmp = call_tmp_chpl6;
      tmp_chpl11 = &ret_chpl2;
      chpl_macro_tmp_5540.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_5540.addr = tmp_chpl11;
      tmp_chpl12 = chpl_macro_tmp_5540;
      (_args_foron_fn_chpl2)->_1_tmp = tmp_chpl12;
      tmp_chpl13 = call_tmp_chpl4;
      chpl_macro_tmp_5541.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_5541.addr = tmp_chpl13;
      tmp_chpl14 = chpl_macro_tmp_5541;
      (_args_foron_fn_chpl2)->_2_tmp = tmp_chpl14;
      (_args_foron_fn_chpl2)->_3_rvfDerefTmp = descr_chpl;
      (_args_foron_fn_chpl2)->_4_rvfDerefTmp = call_tmp_chpl5;
      (_args_foron_fn_chpl2)->_5_rvfDerefTmp = default_argorder_chpl2;
      _args_vforon_fn_chpl2 = ((void*)(_args_foron_fn_chpl2));
      /*** wrapon_fn9 ***/ chpl_executeOn(&call_tmp_chpl6, INT32(10), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl2)), sizeof(chpl__class_localson_fn9_object), INT64(779), INT32(12));
    }
    if (ret_chpl2) {
      coerce_tmp_chpl = (this_chpl6)->nodeGDT_chpl;
      call_tmp_chpl7 = (descr_chpl == UINT64(0));
      if (call_tmp_chpl7) {
        halt(&local__str_literal_1993_chpl /* "Descriptor is 0!" */, INT64(81), INT32(54));
      }
      call_tmp_chpl8 = &((coerce_tmp_chpl)->gdtBitmap_chpl);
      *(this_chpl7 + INT64(0)) = ((int64_t)(((uint64_t)((descr_chpl >> INT64(32))))));
      coerce_tmp_chpl2 = (call_tmp_chpl8)->_pid;
      call_tmp_chpl9 = chpl_getPrivatizedCopy8(coerce_tmp_chpl2);
      call_tmp_chpl10 = dsiAccess_chpl2(call_tmp_chpl9, &this_chpl7);
      clear_chpl(call_tmp_chpl10, ((uint64_t)(((descr_chpl & ((uint64_t)(INT64(4294967295)))) - UINT64(1)))));
      goto _end_giveUpCombiner_chpl;
    }
    tmp_chpl15 = UINT8(true);
    while (tmp_chpl15) {
      chpl_macro_tmp_5542.locale = (&node_chpl)->locale;
      chpl_macro_tmp_5542.addr = &(((&node_chpl)->addr)->nextDescr_chpl);
      call_tmp_chpl11 = chpl_macro_tmp_5542;
      default_argorder_chpl3 = local_memory_order_seq_cst_chpl;
      ret_chpl3 = UINT64(0);
      call_tmp_chpl12 = (&call_tmp_chpl11)->locale;
      tmp_chpl16 = call_tmp_chpl11;
      tmp_chpl17 = &ret_chpl3;
      isdirect_chpl3 = chpl_doDirectExecuteOn(&call_tmp_chpl12);
      if (isdirect_chpl3) {
        chpl_macro_tmp_5543.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_5543.addr = tmp_chpl17;
        tmp_chpl18 = chpl_macro_tmp_5543;
        on_fn6(tmp_chpl16, default_argorder_chpl3, tmp_chpl18);
      } else {
        _args_foron_fn_chpl3 = ((_class_localson_fn6)(&chpl_macro_tmp_5544));
        (_args_foron_fn_chpl3)->_0_rvfDerefTmp = call_tmp_chpl12;
        tmp_chpl19 = call_tmp_chpl11;
        (_args_foron_fn_chpl3)->_1_tmp = tmp_chpl19;
        (_args_foron_fn_chpl3)->_2_rvfDerefTmp = default_argorder_chpl3;
        tmp_chpl20 = &ret_chpl3;
        chpl_macro_tmp_5545.locale = chpl_gen_getLocaleID();
        chpl_macro_tmp_5545.addr = tmp_chpl20;
        tmp_chpl21 = chpl_macro_tmp_5545;
        (_args_foron_fn_chpl3)->_3_tmp = tmp_chpl21;
        _args_vforon_fn_chpl3 = ((void*)(_args_foron_fn_chpl3));
        /*** wrapon_fn6 ***/ chpl_executeOn(&call_tmp_chpl12, INT32(7), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl3)), sizeof(chpl__class_localson_fn6_object), INT64(758), INT32(12));
      }
      call_tmp_chpl13 = (ret_chpl3 != UINT64(0));
      if (call_tmp_chpl13) {
        coerce_tmp_chpl3 = (this_chpl6)->nodeGDT_chpl;
        call_tmp_chpl15 = (ret_chpl3 == UINT64(0));
        if (call_tmp_chpl15) {
          halt(&local__str_literal_1993_chpl /* "Descriptor is 0!" */, INT64(93), INT32(54));
        }
        call_tmp_chpl16 = &((coerce_tmp_chpl3)->gdtEntries_chpl);
        *(this_chpl8 + INT64(0)) = ((int64_t)(((uint64_t)((ret_chpl3 >> INT64(32))))));
        coerce_tmp_chpl4 = (call_tmp_chpl16)->_pid;
        call_tmp_chpl17 = chpl_getPrivatizedCopy(coerce_tmp_chpl4);
        call_tmp_chpl18 = dsiAccess_chpl(call_tmp_chpl17, &this_chpl8);
        call_tmp_chpl19 = ((int64_t)((ret_chpl3 & ((uint64_t)(INT64(4294967295))))));
        chpl_macro_tmp_5546.locale = (call_tmp_chpl18).locale;
        chpl_macro_tmp_5546.addr = &(((call_tmp_chpl18).addr)->_instance);
        chpl_gen_comm_get(((void*)(&ret_chpl4)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5546).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5546).addr, sizeof(chpl____wide_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t), -1, COMMID(9), INT64(93), INT64(54));
        call_tmp_chpl20 = ret_chpl4;
        chpl_macro_tmp_5547.locale = (&call_tmp_chpl20)->locale;
        chpl_macro_tmp_5547.addr = &(((&call_tmp_chpl20)->addr)->shiftedData);
        chpl_gen_comm_get(((void*)(&coerce_tmp_chpl5)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5547).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5547).addr, sizeof(chpl____wide__ddata_FCHGlobalNode), -1, COMMID(10), INT64(93), INT64(54));
        chpl_macro_tmp_5548.locale = (&coerce_tmp_chpl5)->locale;
        chpl_macro_tmp_5548.addr = ((&coerce_tmp_chpl5)->addr + call_tmp_chpl19);
        call_tmp_chpl21 = chpl_macro_tmp_5548;
        chpl_gen_comm_get(((void*)(&ret_chpl5)), chpl_nodeFromLocaleID(&((call_tmp_chpl21).locale), INT64(0), INT32(0)), (call_tmp_chpl21).addr, sizeof(chpl____wide_FCHGlobalNode), -1, COMMID(11), INT64(93), INT64(54));
        call_tmp_chpl14 = ret_chpl5;
        chpl_macro_tmp_5549.locale = (&call_tmp_chpl14)->locale;
        chpl_macro_tmp_5549.addr = &(((&call_tmp_chpl14)->addr)->isCombiner_chpl);
        call_tmp_chpl22 = chpl_macro_tmp_5549;
        default_argorder_chpl4 = local_memory_order_seq_cst_chpl;
        call_tmp_chpl23 = (&call_tmp_chpl22)->locale;
        tmp_chpl22 = call_tmp_chpl22;
        isdirect_chpl4 = chpl_doDirectExecuteOn(&call_tmp_chpl23);
        if (isdirect_chpl4) {
          on_fn2(tmp_chpl22, UINT8(true), default_argorder_chpl4);
        } else {
          _args_foron_fn_chpl4 = ((_class_localson_fn2)(&chpl_macro_tmp_5550));
          (_args_foron_fn_chpl4)->_0_rvfDerefTmp = call_tmp_chpl23;
          tmp_chpl23 = call_tmp_chpl22;
          (_args_foron_fn_chpl4)->_1_tmp = tmp_chpl23;
          (_args_foron_fn_chpl4)->_2_rvfDerefTmp = UINT8(true);
          (_args_foron_fn_chpl4)->_3_rvfDerefTmp = default_argorder_chpl4;
          _args_vforon_fn_chpl4 = ((void*)(_args_foron_fn_chpl4));
          /*** wrapon_fn2 ***/ chpl_executeOnFast(&call_tmp_chpl23, INT32(1), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl4)), sizeof(chpl__class_localson_fn2_object), INT64(341), INT32(12));
        }
        coerce_tmp_chpl6 = (this_chpl6)->nodeGDT_chpl;
        call_tmp_chpl24 = (descr_chpl == UINT64(0));
        if (call_tmp_chpl24) {
          halt(&local__str_literal_1993_chpl /* "Descriptor is 0!" */, INT64(95), INT32(54));
        }
        call_tmp_chpl25 = &((coerce_tmp_chpl6)->gdtBitmap_chpl);
        *(this_chpl9 + INT64(0)) = ((int64_t)(((uint64_t)((descr_chpl >> INT64(32))))));
        coerce_tmp_chpl7 = (call_tmp_chpl25)->_pid;
        call_tmp_chpl26 = chpl_getPrivatizedCopy8(coerce_tmp_chpl7);
        call_tmp_chpl27 = dsiAccess_chpl2(call_tmp_chpl26, &this_chpl9);
        clear_chpl(call_tmp_chpl27, ((uint64_t)(((descr_chpl & ((uint64_t)(INT64(4294967295)))) - UINT64(1)))));
        goto _end_giveUpCombiner_chpl;
      }
      chpl_task_yield();
      tmp_chpl15 = UINT8(true);
    }
  }
  _end_giveUpCombiner_chpl:;
  return;
}

/* FCHLock.chpl:104 */
static void synchronize_chpl(FCHLock_FCHQueue_int64_t_chpl this_chpl6,
                             FCHFunctor_FCHQueue_int64_t_chpl request_chpl) {
  int32_t local_c_sublocid_any_chpl;
  memory_order local_memory_order_seq_cst_chpl;
  FCHLocalNode_FCHQueue_int64_t_chpl node_chpl = NULL;
  FCHLocalNode_FCHQueue_int64_t_chpl this_chpl7 = NULL;
  c_void_ptr cast_tmp_chpl;
  atomicbool _init_class_tmp__chpl;
  FCHFunctor_FCHQueue_int64_t_chpl call_tmp_chpl = NULL;
  atomicbool this_chpl8;
  atomic_bool ret_chpl;
  atomic_bool type_tmp_chpl;
  _ref_atomic_bool _ref_tmp__chpl = NULL;
  atomicbool ret_tmp_chpl;
  _ref_atomicbool ret_to_arg_ref_tmp__chpl = NULL;
  FCHLocalNode_FCHQueue_int64_t_chpl call_tmp_chpl2 = NULL;
  FCHLocalNode_FCHQueue_int64_t_chpl wrap_call_tmp_chpl = NULL;
  _ref_atomicbool call_tmp_chpl3 = NULL;
  memory_order default_argorder_chpl;
  chpl_localeID_t call_tmp_chpl4;
  _ref_atomicbool tmp_chpl = NULL;
  chpl_bool isdirect_chpl;
  chpl____wide__ref_atomicbool tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn2 _args_foron_fn_chpl = NULL;
  _ref_atomicbool tmp_chpl3 = NULL;
  chpl____wide__ref_atomicbool tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  _ref__array_ReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_ReplicatedDom_1_int64_t_F call_tmp_chpl5 = NULL;
  _tuple_1_star_int64_t this_chpl9;
  ReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_ReplicatedDom_1_int64_t_F_chpl call_tmp_chpl6 = NULL;
  chpl____wide__ref_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t call_tmp_chpl7 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_uint64 call_tmp_chpl8 = {CHPL_LOCALEID_T_INIT, NULL};
  uint64_t call_tmp_chpl9;
  memory_order default_argorder_chpl2;
  uint64_t ret_chpl2;
  chpl_localeID_t call_tmp_chpl10;
  chpl____wide__ref_atomic_uint64 tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_uint64_t tmp_chpl6 = NULL;
  chpl_bool isdirect_chpl2;
  chpl____wide__ref_uint64_t tmp_chpl7 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn8 _args_foron_fn_chpl2 = NULL;
  chpl____wide__ref_atomic_uint64 tmp_chpl8 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_uint64_t tmp_chpl9 = NULL;
  chpl____wide__ref_uint64_t tmp_chpl10 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl2;
  FCHLocalNode_FCHQueue_int64_t_chpl call_tmp_chpl11 = NULL;
  chpl_bool call_tmp_chpl12;
  _ref_atomicbool call_tmp_chpl13 = NULL;
  memory_order default_argorder_chpl3;
  chpl_localeID_t call_tmp_chpl14;
  _ref_atomicbool tmp_chpl11 = NULL;
  chpl_bool isdirect_chpl3;
  chpl____wide__ref_atomicbool tmp_chpl12 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn5 _args_foron_fn_chpl3 = NULL;
  _ref_atomicbool tmp_chpl13 = NULL;
  chpl____wide__ref_atomicbool tmp_chpl14 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl3;
  chpl_bool coerce_tmp_chpl;
  chpl____wide_FCHGlobalNode call_tmp_x1_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  uint64_t call_tmp_x2_chpl;
  _tuple_2_FCHGlobalNode_uint64_t ret_tmp_chpl2;
  _ref__tuple_2_FCHGlobalNode_uint64_t ret_to_arg_ref_tmp__chpl2 = NULL;
  chpl____wide_FCHGlobalNode combinerNode_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  uint64_t combinerDescr_chpl;
  FCHLocalNode_FCHQueue_int64_t_chpl tmpNode_chpl = NULL;
  int64_t served_chpl;
  int64_t maxServed_chpl;
  chpl____wide_locale call_tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t _autoCopy_tmp__chpl;
  chpl____wide_locale call_tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t tmp_chpl15;
  chpl_bool tmp_chpl16;
  int64_t call_tmp_chpl17;
  _ref_FCHQueue_int64_t call_tmp_chpl18 = NULL;
  FCHFunctor_FCHQueue_int64_t_chpl coerce_tmp_chpl2 = NULL;
  chpl____wide_FCHFunctor_FCHQueue_int64_t tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide_FCHQueue_int64_t tmp_chpl18 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_atomicbool call_tmp_chpl19 = NULL;
  memory_order default_argorder_chpl4;
  chpl_localeID_t call_tmp_chpl20;
  _ref_atomicbool tmp_chpl19 = NULL;
  chpl_bool isdirect_chpl4;
  chpl____wide__ref_atomicbool tmp_chpl20 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn2 _args_foron_fn_chpl4 = NULL;
  _ref_atomicbool tmp_chpl21 = NULL;
  chpl____wide__ref_atomicbool tmp_chpl22 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl4;
  chpl_bool ret_chpl3;
  chpl_bool ret_chpl4;
  FCHLocalNode_FCHQueue_int64_t_chpl tmp_chpl23 = NULL;
  chpl_bool call_tmp_chpl21;
  FCHLocalNode_FCHQueue_int64_t_chpl tmp_chpl24 = NULL;
  FCHLocalNode_FCHQueue_int64_t_chpl coerce_tmp_chpl3 = NULL;
  FCHLocalNode_FCHQueue_int64_t_chpl coerce_tmp_chpl4 = NULL;
  FCHLocalNode_FCHQueue_int64_t_chpl coerce_tmp_chpl5 = NULL;
  chpl_bool call_tmp_chpl22;
  _ref__array_ReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_ReplicatedDom_1_int64_t_F call_tmp_chpl23 = NULL;
  _tuple_1_star_int64_t this_chpl10;
  ReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_ReplicatedDom_1_int64_t_F_chpl call_tmp_chpl24 = NULL;
  chpl____wide__ref_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t call_tmp_chpl25 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_uint64 call_tmp_chpl26 = {CHPL_LOCALEID_T_INIT, NULL};
  uint64_t call_tmp_chpl27;
  uint64_t call_tmp_chpl28;
  memory_order default_argorder_chpl5;
  chpl_bool ret_chpl5;
  chpl_localeID_t call_tmp_chpl29;
  _ref_chpl_bool tmp_chpl25 = NULL;
  chpl____wide__ref_atomic_uint64 tmp_chpl26 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect_chpl5;
  chpl____wide__ref_chpl_bool tmp_chpl27 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn9 _args_foron_fn_chpl5 = NULL;
  _ref_chpl_bool tmp_chpl28 = NULL;
  chpl____wide__ref_chpl_bool tmp_chpl29 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_uint64 tmp_chpl30 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl5;
  chpl_bool tmp_chpl31;
  FCHLocalNode_FCHQueue_int64_t_chpl coerce_tmp_chpl6 = NULL;
  FCHLocalNode_FCHQueue_int64_t_chpl coerce_tmp_chpl7 = NULL;
  FCHLocalNode_FCHQueue_int64_t_chpl coerce_tmp_chpl8 = NULL;
  _ref_atomicbool call_tmp_chpl30 = NULL;
  memory_order default_argorder_chpl6;
  chpl_localeID_t call_tmp_chpl31;
  _ref_atomicbool tmp_chpl32 = NULL;
  chpl_bool isdirect_chpl6;
  chpl____wide__ref_atomicbool tmp_chpl33 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn2 _args_foron_fn_chpl6 = NULL;
  _ref_atomicbool tmp_chpl34 = NULL;
  chpl____wide__ref_atomicbool tmp_chpl35 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl6;
  chpl____wide__ref_atomicbool chpl_macro_tmp_5551;
  chpl__class_localson_fn2_object chpl_macro_tmp_5552;
  chpl____wide__ref_atomicbool chpl_macro_tmp_5553;
  chpl____wide__ref_atomic_uint64 chpl_macro_tmp_5554;
  chpl____wide__ref_uint64_t chpl_macro_tmp_5555;
  chpl__class_localson_fn8_object chpl_macro_tmp_5556;
  chpl____wide__ref_uint64_t chpl_macro_tmp_5557;
  chpl____wide__ref_atomicbool chpl_macro_tmp_5558;
  chpl__class_localson_fn5_object chpl_macro_tmp_5559;
  chpl____wide__ref_atomicbool chpl_macro_tmp_5560;
  chpl____wide__ref_int64_t chpl_macro_tmp_5561;
  chpl____wide_FCHFunctor_FCHQueue_int64_t chpl_macro_tmp_5562;
  chpl____wide__ref__wide_FCHQueue_int64_t chpl_macro_tmp_5563;
  chpl____wide__ref_atomicbool chpl_macro_tmp_5564;
  chpl__class_localson_fn2_object chpl_macro_tmp_5565;
  chpl____wide__ref_atomicbool chpl_macro_tmp_5566;
  chpl____wide__ref_atomic_uint64 chpl_macro_tmp_5567;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_5568;
  chpl__class_localson_fn9_object chpl_macro_tmp_5569;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_5570;
  chpl____wide__ref_atomicbool chpl_macro_tmp_5571;
  chpl__class_localson_fn2_object chpl_macro_tmp_5572;
  chpl____wide__ref_atomicbool chpl_macro_tmp_5573;
  local_c_sublocid_any_chpl = c_sublocid_any;
  local_memory_order_seq_cst_chpl = memory_order_seq_cst;
  cast_tmp_chpl = chpl_here_alloc(sizeof(chpl_FCHLocalNode_FCHQueue_int64_t_chpl_object), INT16(143));
  this_chpl7 = ((FCHLocalNode_FCHQueue_int64_t_chpl)(cast_tmp_chpl));
  ((object)(this_chpl7))->chpl__cid = chpl__cid_FCHLocalNode_FCHQueue_int64_t_chpl;
  (this_chpl7)->request_chpl = nil;
  (this_chpl7)->wait_chpl = _init_class_tmp__chpl;
  (this_chpl7)->completed_chpl = UINT8(false);
  (this_chpl7)->next_chpl = nil;
  call_tmp_chpl = ((FCHFunctor_FCHQueue_int64_t_chpl)(nil));
  (this_chpl7)->request_chpl = call_tmp_chpl;
  ret_chpl = type_tmp_chpl;
  _ref_tmp__chpl = &ret_chpl;
  atomic_init_bool(_ref_tmp__chpl, UINT8(false));
  (&this_chpl8)->_v = ret_chpl;
  ret_to_arg_ref_tmp__chpl = &ret_tmp_chpl;
  _construct_atomicbool(ret_chpl, &this_chpl8, ret_to_arg_ref_tmp__chpl);
  (this_chpl7)->wait_chpl = ret_tmp_chpl;
  (this_chpl7)->completed_chpl = UINT8(false);
  call_tmp_chpl2 = ((FCHLocalNode_FCHQueue_int64_t_chpl)(nil));
  (this_chpl7)->next_chpl = call_tmp_chpl2;
  wrap_call_tmp_chpl = _construct_FCHLocalNode_chpl(call_tmp_chpl, &ret_tmp_chpl, UINT8(false), call_tmp_chpl2, this_chpl7);
  node_chpl = wrap_call_tmp_chpl;
  (node_chpl)->request_chpl = request_chpl;
  call_tmp_chpl3 = &((node_chpl)->wait_chpl);
  default_argorder_chpl = local_memory_order_seq_cst_chpl;
  call_tmp_chpl4 = chpl_gen_getLocaleID();
  tmp_chpl = call_tmp_chpl3;
  isdirect_chpl = chpl_doDirectExecuteOn(&call_tmp_chpl4);
  if (isdirect_chpl) {
    chpl_macro_tmp_5551.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5551.addr = tmp_chpl;
    tmp_chpl2 = chpl_macro_tmp_5551;
    on_fn2(tmp_chpl2, UINT8(true), default_argorder_chpl);
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn2)(&chpl_macro_tmp_5552));
    (_args_foron_fn_chpl)->_0_rvfDerefTmp = call_tmp_chpl4;
    tmp_chpl3 = call_tmp_chpl3;
    chpl_macro_tmp_5553.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5553.addr = tmp_chpl3;
    tmp_chpl4 = chpl_macro_tmp_5553;
    (_args_foron_fn_chpl)->_1_tmp = tmp_chpl4;
    (_args_foron_fn_chpl)->_2_rvfDerefTmp = UINT8(true);
    (_args_foron_fn_chpl)->_3_rvfDerefTmp = default_argorder_chpl;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    /*** wrapon_fn2 ***/ chpl_executeOnFast(&call_tmp_chpl4, INT32(1), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), sizeof(chpl__class_localson_fn2_object), INT64(341), INT32(12));
  }
  call_tmp_chpl5 = &((this_chpl6)->publicationList_chpl);
  *(this_chpl9 + INT64(0)) = INT64(0);
  call_tmp_chpl6 = chpl_getPrivatizedCopy6((call_tmp_chpl5)->_pid);
  call_tmp_chpl7 = dsiAccess_chpl4(call_tmp_chpl6, &this_chpl9);
  chpl_macro_tmp_5554.locale = (call_tmp_chpl7).locale;
  chpl_macro_tmp_5554.addr = &(((call_tmp_chpl7).addr)->_atomicVar_chpl);
  call_tmp_chpl8 = chpl_macro_tmp_5554;
  call_tmp_chpl9 = ((uint64_t)(node_chpl));
  default_argorder_chpl2 = local_memory_order_seq_cst_chpl;
  ret_chpl2 = UINT64(0);
  call_tmp_chpl10 = (&call_tmp_chpl8)->locale;
  tmp_chpl5 = call_tmp_chpl8;
  tmp_chpl6 = &ret_chpl2;
  isdirect_chpl2 = chpl_doDirectExecuteOn(&call_tmp_chpl10);
  if (isdirect_chpl2) {
    chpl_macro_tmp_5555.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5555.addr = tmp_chpl6;
    tmp_chpl7 = chpl_macro_tmp_5555;
    on_fn8(tmp_chpl5, call_tmp_chpl9, default_argorder_chpl2, tmp_chpl7);
  } else {
    _args_foron_fn_chpl2 = ((_class_localson_fn8)(&chpl_macro_tmp_5556));
    (_args_foron_fn_chpl2)->_0_rvfDerefTmp = call_tmp_chpl10;
    tmp_chpl8 = call_tmp_chpl8;
    (_args_foron_fn_chpl2)->_1_tmp = tmp_chpl8;
    (_args_foron_fn_chpl2)->_2_rvfDerefTmp = call_tmp_chpl9;
    (_args_foron_fn_chpl2)->_3_rvfDerefTmp = default_argorder_chpl2;
    tmp_chpl9 = &ret_chpl2;
    chpl_macro_tmp_5557.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5557.addr = tmp_chpl9;
    tmp_chpl10 = chpl_macro_tmp_5557;
    (_args_foron_fn_chpl2)->_4_tmp = tmp_chpl10;
    _args_vforon_fn_chpl2 = ((void*)(_args_foron_fn_chpl2));
    /*** wrapon_fn8 ***/ chpl_executeOn(&call_tmp_chpl10, INT32(9), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl2)), sizeof(chpl__class_localson_fn8_object), INT64(766), INT32(12));
  }
  call_tmp_chpl11 = ((FCHLocalNode_FCHQueue_int64_t_chpl)(ret_chpl2));
  call_tmp_chpl12 = (((object)(call_tmp_chpl11)) != nil);
  if (call_tmp_chpl12) {
    (call_tmp_chpl11)->next_chpl = node_chpl;
    call_tmp_chpl13 = &((node_chpl)->wait_chpl);
    default_argorder_chpl3 = local_memory_order_seq_cst_chpl;
    call_tmp_chpl14 = chpl_gen_getLocaleID();
    tmp_chpl11 = call_tmp_chpl13;
    isdirect_chpl3 = chpl_doDirectExecuteOn(&call_tmp_chpl14);
    if (isdirect_chpl3) {
      chpl_macro_tmp_5558.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_5558.addr = tmp_chpl11;
      tmp_chpl12 = chpl_macro_tmp_5558;
      on_fn5(tmp_chpl12, UINT8(false), default_argorder_chpl3);
    } else {
      _args_foron_fn_chpl3 = ((_class_localson_fn5)(&chpl_macro_tmp_5559));
      (_args_foron_fn_chpl3)->_0_rvfDerefTmp = call_tmp_chpl14;
      tmp_chpl13 = call_tmp_chpl13;
      chpl_macro_tmp_5560.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_5560.addr = tmp_chpl13;
      tmp_chpl14 = chpl_macro_tmp_5560;
      (_args_foron_fn_chpl3)->_1_tmp = tmp_chpl14;
      (_args_foron_fn_chpl3)->_2_rvfDerefTmp = UINT8(false);
      (_args_foron_fn_chpl3)->_3_rvfDerefTmp = default_argorder_chpl3;
      _args_vforon_fn_chpl3 = ((void*)(_args_foron_fn_chpl3));
      /*** wrapon_fn5 ***/ chpl_executeOn(&call_tmp_chpl14, INT32(6), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl3)), sizeof(chpl__class_localson_fn5_object), INT64(402), INT32(12));
    }
    coerce_tmp_chpl = (node_chpl)->completed_chpl;
    if (coerce_tmp_chpl) {
      goto _end_synchronize_chpl;
    }
  }
  ret_to_arg_ref_tmp__chpl2 = &ret_tmp_chpl2;
  waitForCombiner_chpl(this_chpl6, ret_to_arg_ref_tmp__chpl2);
  call_tmp_x1_chpl = (&ret_tmp_chpl2)->x1;
  call_tmp_x2_chpl = (&ret_tmp_chpl2)->x2;
  combinerNode_chpl = call_tmp_x1_chpl;
  combinerDescr_chpl = call_tmp_x2_chpl;
  tmpNode_chpl = node_chpl;
  served_chpl = INT64(0);
  _autoCopy_tmp__chpl = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any_chpl);
  call_tmp_chpl16 = chpl_localeID_to_locale(&_autoCopy_tmp__chpl);
  call_tmp_chpl15 = call_tmp_chpl16;
  chpl_macro_tmp_5561.locale = (&call_tmp_chpl15)->locale;
  chpl_macro_tmp_5561.addr = &(((&call_tmp_chpl15)->addr)->maxTaskPar);
  chpl_gen_comm_get(((void*)(&tmp_chpl15)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5561).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5561).addr, sizeof(int64_t), -1, COMMID(12), INT64(131), INT64(54));
  maxServed_chpl = tmp_chpl15;
  tmp_chpl16 = UINT8(true);
  while (tmp_chpl16) {
    call_tmp_chpl17 = (served_chpl + INT64(1));
    served_chpl = call_tmp_chpl17;
    call_tmp_chpl18 = &((this_chpl6)->data_chpl);
    coerce_tmp_chpl2 = (tmpNode_chpl)->request_chpl;
    chpl_macro_tmp_5562.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5562.addr = coerce_tmp_chpl2;
    tmp_chpl17 = chpl_macro_tmp_5562;
    chpl_macro_tmp_5563.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5563.addr = call_tmp_chpl18;
    tmp_chpl18 = chpl_macro_tmp_5563;
    ((void(*)(chpl____wide_FCHFunctor_FCHQueue_int64_t,
       chpl____wide__ref__wide_FCHQueue_int64_t))chpl_vmtable[((INT64(9) * ((object)(coerce_tmp_chpl2))->chpl__cid) + INT64(1))])(tmp_chpl17, tmp_chpl18);
    (tmpNode_chpl)->completed_chpl = UINT8(true);
    call_tmp_chpl19 = &((tmpNode_chpl)->wait_chpl);
    default_argorder_chpl4 = local_memory_order_seq_cst_chpl;
    call_tmp_chpl20 = chpl_gen_getLocaleID();
    tmp_chpl19 = call_tmp_chpl19;
    isdirect_chpl4 = chpl_doDirectExecuteOn(&call_tmp_chpl20);
    if (isdirect_chpl4) {
      chpl_macro_tmp_5564.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_5564.addr = tmp_chpl19;
      tmp_chpl20 = chpl_macro_tmp_5564;
      on_fn2(tmp_chpl20, UINT8(false), default_argorder_chpl4);
    } else {
      _args_foron_fn_chpl4 = ((_class_localson_fn2)(&chpl_macro_tmp_5565));
      (_args_foron_fn_chpl4)->_0_rvfDerefTmp = call_tmp_chpl20;
      tmp_chpl21 = call_tmp_chpl19;
      chpl_macro_tmp_5566.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_5566.addr = tmp_chpl21;
      tmp_chpl22 = chpl_macro_tmp_5566;
      (_args_foron_fn_chpl4)->_1_tmp = tmp_chpl22;
      (_args_foron_fn_chpl4)->_2_rvfDerefTmp = UINT8(false);
      (_args_foron_fn_chpl4)->_3_rvfDerefTmp = default_argorder_chpl4;
      _args_vforon_fn_chpl4 = ((void*)(_args_foron_fn_chpl4));
      /*** wrapon_fn2 ***/ chpl_executeOnFast(&call_tmp_chpl20, INT32(1), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl4)), sizeof(chpl__class_localson_fn2_object), INT64(341), INT32(12));
    }
    tmp_chpl23 = tmpNode_chpl;
    call_tmp_chpl21 = (((object)((tmp_chpl23)->next_chpl)) == nil);
    if (call_tmp_chpl21) {
      ret_chpl4 = UINT8(true);
      goto _end__if_fn805_chpl;
    } else {
      tmp_chpl24 = tmpNode_chpl;
      coerce_tmp_chpl3 = (tmp_chpl24)->next_chpl;
      ret_chpl4 = (((object)((coerce_tmp_chpl3)->next_chpl)) == nil);
      goto _end__if_fn805_chpl;
    }
    _end__if_fn805_chpl:;
    if (ret_chpl4) {
      ret_chpl3 = UINT8(true);
      goto _end__if_fn806_chpl;
    } else {
      ret_chpl3 = (call_tmp_chpl17 >= maxServed_chpl);
      goto _end__if_fn806_chpl;
    }
    _end__if_fn806_chpl:;
    if (ret_chpl3) {
      goto _breakLabel_chpl;
    }
    coerce_tmp_chpl4 = (tmpNode_chpl)->next_chpl;
    tmpNode_chpl = coerce_tmp_chpl4;
    tmp_chpl16 = UINT8(true);
  }
  _breakLabel_chpl:;
  giveUpCombiner_chpl(this_chpl6, combinerNode_chpl, combinerDescr_chpl);
  coerce_tmp_chpl5 = (tmpNode_chpl)->next_chpl;
  call_tmp_chpl22 = (((object)(coerce_tmp_chpl5)) == nil);
  if (call_tmp_chpl22) {
    call_tmp_chpl23 = &((this_chpl6)->publicationList_chpl);
    *(this_chpl10 + INT64(0)) = INT64(0);
    call_tmp_chpl24 = chpl_getPrivatizedCopy6((call_tmp_chpl23)->_pid);
    call_tmp_chpl25 = dsiAccess_chpl4(call_tmp_chpl24, &this_chpl10);
    chpl_macro_tmp_5567.locale = (call_tmp_chpl25).locale;
    chpl_macro_tmp_5567.addr = &(((call_tmp_chpl25).addr)->_atomicVar_chpl);
    call_tmp_chpl26 = chpl_macro_tmp_5567;
    call_tmp_chpl27 = ((uint64_t)(tmpNode_chpl));
    call_tmp_chpl28 = ((uint64_t)(nil));
    default_argorder_chpl5 = local_memory_order_seq_cst_chpl;
    ret_chpl5 = UINT8(false);
    call_tmp_chpl29 = (&call_tmp_chpl26)->locale;
    tmp_chpl25 = &ret_chpl5;
    tmp_chpl26 = call_tmp_chpl26;
    isdirect_chpl5 = chpl_doDirectExecuteOn(&call_tmp_chpl29);
    if (isdirect_chpl5) {
      chpl_macro_tmp_5568.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_5568.addr = tmp_chpl25;
      tmp_chpl27 = chpl_macro_tmp_5568;
      on_fn9(tmp_chpl27, tmp_chpl26, call_tmp_chpl27, call_tmp_chpl28, default_argorder_chpl5);
    } else {
      _args_foron_fn_chpl5 = ((_class_localson_fn9)(&chpl_macro_tmp_5569));
      (_args_foron_fn_chpl5)->_0_rvfDerefTmp = call_tmp_chpl29;
      tmp_chpl28 = &ret_chpl5;
      chpl_macro_tmp_5570.locale = chpl_gen_getLocaleID();
      chpl_macro_tmp_5570.addr = tmp_chpl28;
      tmp_chpl29 = chpl_macro_tmp_5570;
      (_args_foron_fn_chpl5)->_1_tmp = tmp_chpl29;
      tmp_chpl30 = call_tmp_chpl26;
      (_args_foron_fn_chpl5)->_2_tmp = tmp_chpl30;
      (_args_foron_fn_chpl5)->_3_rvfDerefTmp = call_tmp_chpl27;
      (_args_foron_fn_chpl5)->_4_rvfDerefTmp = call_tmp_chpl28;
      (_args_foron_fn_chpl5)->_5_rvfDerefTmp = default_argorder_chpl5;
      _args_vforon_fn_chpl5 = ((void*)(_args_foron_fn_chpl5));
      /*** wrapon_fn9 ***/ chpl_executeOn(&call_tmp_chpl29, INT32(10), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl5)), sizeof(chpl__class_localson_fn9_object), INT64(779), INT32(12));
    }
    if (ret_chpl5) {
      goto _end_synchronize_chpl;
    }
    coerce_tmp_chpl6 = (tmpNode_chpl)->next_chpl;
    tmp_chpl31 = (((object)(coerce_tmp_chpl6)) == nil);
    coerce_tmp_chpl7 = (tmpNode_chpl)->next_chpl;
    while (tmp_chpl31) {
      chpl_task_yield();
      tmp_chpl31 = (((object)(coerce_tmp_chpl7)) == nil);
    }
  }
  coerce_tmp_chpl8 = (tmpNode_chpl)->next_chpl;
  call_tmp_chpl30 = &((coerce_tmp_chpl8)->wait_chpl);
  default_argorder_chpl6 = local_memory_order_seq_cst_chpl;
  call_tmp_chpl31 = chpl_gen_getLocaleID();
  tmp_chpl32 = call_tmp_chpl30;
  isdirect_chpl6 = chpl_doDirectExecuteOn(&call_tmp_chpl31);
  if (isdirect_chpl6) {
    chpl_macro_tmp_5571.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5571.addr = tmp_chpl32;
    tmp_chpl33 = chpl_macro_tmp_5571;
    on_fn2(tmp_chpl33, UINT8(false), default_argorder_chpl6);
  } else {
    _args_foron_fn_chpl6 = ((_class_localson_fn2)(&chpl_macro_tmp_5572));
    (_args_foron_fn_chpl6)->_0_rvfDerefTmp = call_tmp_chpl31;
    tmp_chpl34 = call_tmp_chpl30;
    chpl_macro_tmp_5573.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5573.addr = tmp_chpl34;
    tmp_chpl35 = chpl_macro_tmp_5573;
    (_args_foron_fn_chpl6)->_1_tmp = tmp_chpl35;
    (_args_foron_fn_chpl6)->_2_rvfDerefTmp = UINT8(false);
    (_args_foron_fn_chpl6)->_3_rvfDerefTmp = default_argorder_chpl6;
    _args_vforon_fn_chpl6 = ((void*)(_args_foron_fn_chpl6));
    /*** wrapon_fn2 ***/ chpl_executeOnFast(&call_tmp_chpl31, INT32(1), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl6)), sizeof(chpl__class_localson_fn2_object), INT64(341), INT32(12));
  }
  _end_synchronize_chpl:;
  return;
}

