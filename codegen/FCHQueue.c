/* FCHQueue.chpl:1 */
static void chpl__init_FCHQueue(int64_t _ln_chpl,
                                int32_t _fn_chpl) {
  _ref_int32_t refIndentLevel_chpl = NULL;
  int64_t tmp_chpl;
  chpl_bool call_tmp_chpl;
  chpl_bool call_tmp_chpl2;
  c_string call_tmp_chpl3;
  if (chpl__init_FCHQueue_p) {
    goto _exit_chpl__init_FCHQueue_chpl;
  }
  printModuleInit("%*s\n", "FCHQueue", INT64(8));
  refIndentLevel_chpl = &moduleInitLevel;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_FCHQueue_p = UINT8(true);
  {
    chpl__init_FCHLock(INT64(1), INT32(51));
    chpl__init_Queue(INT64(1), INT32(51));
    chpl__init_List(INT64(1), INT32(51));
  }
  call_tmp_chpl = chpl_config_has_value("nElementForFCHQueue", "FCHQueue");
  call_tmp_chpl2 = (! call_tmp_chpl);
  if (call_tmp_chpl2) {
    tmp_chpl = INT64(1000000);
  } else {
    call_tmp_chpl3 = chpl_config_get_value("nElementForFCHQueue", "FCHQueue");
    tmp_chpl = _command_line_cast6(call_tmp_chpl3);
  }
  nElementForFCHQueue_chpl = tmp_chpl;
  chpl_comm_broadcast_private(INT64(32), sizeof(int64_t), -1);
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_FCHQueue_chpl:;
  return;
}

/* FCHQueue.chpl:5 */
static EnqueueFunctor_FCHQueue_int64_t_int64_t_chpl _construct_EnqueueFunctor_chpl(int64_t elem_chpl,
                                                                                   EnqueueFunctor_FCHQueue_int64_t_int64_t_chpl meme_chpl) {
  EnqueueFunctor_FCHQueue_int64_t_int64_t_chpl this_chpl6 = NULL;
  FCHFunctor_FCHQueue_int64_t_chpl tmp_chpl = NULL;
  this_chpl6 = meme_chpl;
  tmp_chpl = &((this_chpl6)->super_chpl);
  _construct_FCHFunctor_chpl(tmp_chpl);
  (this_chpl6)->elem_chpl = elem_chpl;
  return this_chpl6;
}

/* FCHQueue.chpl:5 */
static void chpl__auto_destroy_EnqueueFunctor(chpl____wide_EnqueueFunctor_FCHQueue_int64_t_int64_t this_chpl6) {
  return;
}

/* FCHQueue.chpl:8 */
static void this_chpl4(chpl____wide_EnqueueFunctor_FCHQueue_int64_t_int64_t this_chpl6,
                       chpl____wide__ref__wide_FCHQueue_int64_t data_chpl) {
  chpl____wide_FCHQueue_int64_t coerce_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_list_int64_t call_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t tmp_chpl;
  chpl____wide__ref_list_int64_t chpl_macro_tmp_5447;
  chpl____wide__ref_int64_t chpl_macro_tmp_5448;
  chpl_gen_comm_get(((void*)(&coerce_tmp_chpl)), chpl_nodeFromLocaleID(&((data_chpl).locale), INT64(0), INT32(0)), (data_chpl).addr, sizeof(chpl____wide_FCHQueue_int64_t), -1, COMMID(0), INT64(9), INT64(51));
  chpl_macro_tmp_5447.locale = (&coerce_tmp_chpl)->locale;
  chpl_macro_tmp_5447.addr = &(((&coerce_tmp_chpl)->addr)->_list_chpl);
  call_tmp_chpl = chpl_macro_tmp_5447;
  chpl_macro_tmp_5448.locale = (&this_chpl6)->locale;
  chpl_macro_tmp_5448.addr = &(((&this_chpl6)->addr)->elem_chpl);
  chpl_gen_comm_get(((void*)(&tmp_chpl)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5448).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5448).addr, sizeof(int64_t), -1, COMMID(1), INT64(9), INT64(51));
  append_chpl2(call_tmp_chpl, tmp_chpl);
  return;
}

/* FCHQueue.chpl:13 */
static DequeueFunctor_FCHQueue_int64_t_int64_t_chpl _construct_DequeueFunctor_chpl(int64_t retval_chpl,
                                                                                   chpl_bool hasElem_chpl,
                                                                                   DequeueFunctor_FCHQueue_int64_t_int64_t_chpl meme_chpl) {
  DequeueFunctor_FCHQueue_int64_t_int64_t_chpl this_chpl6 = NULL;
  FCHFunctor_FCHQueue_int64_t_chpl tmp_chpl = NULL;
  this_chpl6 = meme_chpl;
  tmp_chpl = &((this_chpl6)->super_chpl);
  _construct_FCHFunctor_chpl(tmp_chpl);
  (this_chpl6)->retval_chpl = retval_chpl;
  (this_chpl6)->hasElem_chpl = hasElem_chpl;
  return this_chpl6;
}

/* FCHQueue.chpl:13 */
static void chpl__auto_destroy_DequeueFunctor(chpl____wide_DequeueFunctor_FCHQueue_int64_t_int64_t this_chpl6) {
  return;
}

/* FCHQueue.chpl:18 */
static void this_chpl5(chpl____wide_DequeueFunctor_FCHQueue_int64_t_int64_t this_chpl6,
                       chpl____wide__ref__wide_FCHQueue_int64_t data_chpl) {
  chpl____wide_FCHQueue_int64_t coerce_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_list_int64_t call_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t tmp_chpl;
  chpl_bool call_tmp_chpl2;
  chpl____wide_FCHQueue_int64_t coerce_tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_list_int64_t call_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp_chpl4;
  chpl____wide__ref_list_int64_t chpl_macro_tmp_5449;
  chpl____wide__ref_int64_t chpl_macro_tmp_5450;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_5451;
  chpl_bool chpl_macro_tmp_5452;
  chpl____wide__ref_list_int64_t chpl_macro_tmp_5453;
  chpl____wide__ref_int64_t chpl_macro_tmp_5454;
  chpl_gen_comm_get(((void*)(&coerce_tmp_chpl)), chpl_nodeFromLocaleID(&((data_chpl).locale), INT64(0), INT32(0)), (data_chpl).addr, sizeof(chpl____wide_FCHQueue_int64_t), -1, COMMID(2), INT64(19), INT64(51));
  chpl_macro_tmp_5449.locale = (&coerce_tmp_chpl)->locale;
  chpl_macro_tmp_5449.addr = &(((&coerce_tmp_chpl)->addr)->_list_chpl);
  call_tmp_chpl = chpl_macro_tmp_5449;
  chpl_macro_tmp_5450.locale = (call_tmp_chpl).locale;
  chpl_macro_tmp_5450.addr = &(((call_tmp_chpl).addr)->length_chpl);
  chpl_gen_comm_get(((void*)(&tmp_chpl)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5450).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5450).addr, sizeof(int64_t), -1, COMMID(3), INT64(19), INT64(51));
  call_tmp_chpl2 = (tmp_chpl != INT64(0));
  if (call_tmp_chpl2) {
    chpl_macro_tmp_5451.locale = (&this_chpl6)->locale;
    chpl_macro_tmp_5451.addr = &(((&this_chpl6)->addr)->hasElem_chpl);
    chpl_macro_tmp_5452 = UINT8(true);
    chpl_gen_comm_put(((void*)(&chpl_macro_tmp_5452)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5451).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5451).addr, sizeof(chpl_bool), -1, COMMID(4), INT64(20), INT64(51));
    chpl_gen_comm_get(((void*)(&coerce_tmp_chpl2)), chpl_nodeFromLocaleID(&((data_chpl).locale), INT64(0), INT32(0)), (data_chpl).addr, sizeof(chpl____wide_FCHQueue_int64_t), -1, COMMID(5), INT64(21), INT64(51));
    chpl_macro_tmp_5453.locale = (&coerce_tmp_chpl2)->locale;
    chpl_macro_tmp_5453.addr = &(((&coerce_tmp_chpl2)->addr)->_list_chpl);
    call_tmp_chpl3 = chpl_macro_tmp_5453;
    call_tmp_chpl4 = pop_front_chpl(call_tmp_chpl3);
    chpl_macro_tmp_5454.locale = (&this_chpl6)->locale;
    chpl_macro_tmp_5454.addr = &(((&this_chpl6)->addr)->retval_chpl);
    chpl_gen_comm_put(((void*)(&call_tmp_chpl4)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5454).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5454).addr, sizeof(int64_t), -1, COMMID(6), INT64(21), INT64(51));
  }
  return;
}

/* FCHQueue.chpl:26 */
static FCHQueue_int64_t_chpl _construct_FCHQueue_chpl(_ref_list_int64_t _list_chpl,
                                                      FCHLock_FCHQueue_int64_t_chpl fchLock_chpl,
                                                      FCHQueue_int64_t_chpl meme_chpl) {
  FCHQueue_int64_t_chpl this_chpl6 = NULL;
  this_chpl6 = meme_chpl;
  _construct_Queue_chpl(&((this_chpl6)->super_chpl));
  (this_chpl6)->_list_chpl = *(_list_chpl);
  (this_chpl6)->fchLock_chpl = fchLock_chpl;
  return this_chpl6;
}

/* FCHQueue.chpl:26 */
static void chpl__auto_destroy_FCHQueue(chpl____wide_FCHQueue_int64_t this_chpl6) {
  chpl____wide__ref_list_int64_t _field_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_list_int64_t chpl_macro_tmp_5455;
  chpl_macro_tmp_5455.locale = (&this_chpl6)->locale;
  chpl_macro_tmp_5455.addr = &(((&this_chpl6)->addr)->_list_chpl);
  _field_destructor_tmp__chpl = chpl_macro_tmp_5455;
  deinit_chpl7(_field_destructor_tmp__chpl);
  return;
}

/* FCHQueue.chpl:30 */
static FCHQueue_int64_t_chpl FCHQueue_chpl(void) {
  _domain_DefaultRectangularDom_1_int64_t_F local_LocaleSpace_chpl;
  chpl____wide__ref__wide__array_DefaultRectangularArr_locale_1_int64_t_F_int64_t local_Locales_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t local_dataParMinGranularity_chpl;
  chpl_bool local_dataParIgnoreRunningTasks_chpl;
  int64_t local_dataParTasksPerLocale_chpl;
  int64_t local_GDT_NUM_ENTRIES_chpl;
  FCHQueue_int64_t_chpl this_chpl6 = NULL;
  FCHQueue_int64_t_chpl this_chpl7 = NULL;
  c_void_ptr cast_tmp_chpl;
  list_int64_t_chpl _init_class_tmp__chpl;
  chpl____wide_listNode_int64_t tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_int64_t tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  list_int64_t_chpl this_chpl8;
  chpl____wide_listNode_int64_t tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_int64_t tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  listNode_int64_t_chpl call_tmp_chpl = NULL;
  chpl____wide_listNode_int64_t tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  listNode_int64_t_chpl call_tmp_chpl2 = NULL;
  chpl____wide_listNode_int64_t tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  list_int64_t_chpl ret_tmp_chpl;
  _ref_list_int64_t ret_to_arg_ref_tmp__chpl = NULL;
  FCHLock_FCHQueue_int64_t_chpl call_tmp_chpl3 = NULL;
  FCHQueue_int64_t_chpl wrap_call_tmp_chpl = NULL;
  FCHLock_FCHQueue_int64_t_chpl this_chpl9 = NULL;
  c_void_ptr cast_tmp_chpl2;
  atomic_uint64 _init_class_tmp__chpl2;
  _domain_DefaultRectangularDom_1_int64_t_F _init_class_tmp__chpl3;
  chpl____wide_DefaultRectangularDom_1_int64_t_F tmp_chpl7 = {CHPL_LOCALEID_T_INIT, NULL};
  _domain_ReplicatedDom_1_int64_t_F _init_class_tmp__chpl4;
  chpl____wide_ReplicatedDom_1_int64_t_F tmp_chpl8 = {CHPL_LOCALEID_T_INIT, NULL};
  _array_ReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_ReplicatedDom_1_int64_t_F _init_class_tmp__chpl5;
  chpl____wide_ReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_ReplicatedDom_1_int64_t_F tmp_chpl9 = {CHPL_LOCALEID_T_INIT, NULL};
  _array_ReplicatedArr_FCHGlobalNode_ReplicatedDom_1_int64_t_F _init_class_tmp__chpl6;
  chpl____wide_ReplicatedArr_FCHGlobalNode_ReplicatedDom_1_int64_t_F tmp_chpl10 = {CHPL_LOCALEID_T_INIT, NULL};
  GDT_FCHGlobalNode_chpl this_chpl10 = NULL;
  c_void_ptr cast_tmp_chpl3;
  _domain_DefaultRectangularDom_1_int64_t_F _init_class_tmp__chpl7;
  chpl____wide_DefaultRectangularDom_1_int64_t_F tmp_chpl11 = {CHPL_LOCALEID_T_INIT, NULL};
  _domain_CyclicDom_1_int64_t_F _init_class_tmp__chpl8;
  chpl____wide_CyclicDom_1_int64_t_F tmp_chpl12 = {CHPL_LOCALEID_T_INIT, NULL};
  _array_CyclicArr__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F _init_class_tmp__chpl9;
  chpl____wide_CyclicArr__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F tmp_chpl13 = {CHPL_LOCALEID_T_INIT, NULL};
  _array_CyclicArr_Bitmap_1_int64_t_F _init_class_tmp__chpl10;
  chpl____wide_CyclicArr_Bitmap_1_int64_t_F tmp_chpl14 = {CHPL_LOCALEID_T_INIT, NULL};
  _domain_DefaultRectangularDom_1_int64_t_F default_arggdtSpace_chpl;
  range_int64_t_bounded_F ret_tmp_chpl2;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp__chpl2 = NULL;
  _domain_DefaultRectangularDom_1_int64_t_F ret_tmp_chpl3;
  _ref__domain_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp__chpl3 = NULL;
  _ref__domain_DefaultRectangularDom_1_int64_t_F i_x_chpl = NULL;
  _domain_DefaultRectangularDom_1_int64_t_F ret_chpl;
  chpl_bool coerce_tmp_chpl;
  _domain_DefaultRectangularDom_1_int64_t_F ret_chpl2;
  _ref__domain_DefaultRectangularDom_1_int64_t_F _ref_tmp__chpl = NULL;
  chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_F tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  _domain_CyclicDom_1_int64_t_F default_arglocDom_chpl;
  int64_t call_tmp_chpl4;
  Cyclic_1_int64_t_chpl wrap_call_tmp_chpl2 = NULL;
  chpl____wide__ref__wide__array_DefaultRectangularArr_locale_1_int64_t_F_int64_t i_targetLocales_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _distribution_Cyclic_1_int64_t call_tmp_chpl5;
  _distribution_Cyclic_1_int64_t ret_tmp_chpl4;
  _ref__distribution_Cyclic_1_int64_t ret_to_arg_ref_tmp__chpl4 = NULL;
  _domain_CyclicDom_1_int64_t_F ret_tmp_chpl5;
  _ref__domain_CyclicDom_1_int64_t_F ret_to_arg_ref_tmp__chpl5 = NULL;
  _ref__domain_CyclicDom_1_int64_t_F i_x_chpl2 = NULL;
  _domain_CyclicDom_1_int64_t_F ret_chpl3;
  chpl_bool coerce_tmp_chpl2;
  _domain_CyclicDom_1_int64_t_F ret_chpl4;
  _ref__domain_CyclicDom_1_int64_t_F call_tmp_chpl6 = NULL;
  chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_F call_tmp_chpl7 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref__domain_DefaultRectangularDom_1_int64_t_F _ref_tmp__chpl2 = NULL;
  chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_F tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl___RuntimeTypeInfo12 call_tmp_chpl8;
  chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_F i_dom_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl___RuntimeTypeInfo13 call_tmp_chpl9;
  _ref__domain_CyclicDom_1_int64_t_F i_dom_chpl2 = NULL;
  _domain_CyclicDom_1_int64_t_F _runtime_type_tmp__chpl;
  _domain_CyclicDom_1_int64_t_F tmp_chpl17;
  chpl___RuntimeTypeInfo12 _runtime_type_tmp__chpl2;
  chpl___RuntimeTypeInfo12 tmp_chpl18;
  _array_CyclicArr__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F ret_tmp_chpl6;
  _ref__array_CyclicArr__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F ret_to_arg_ref_tmp__chpl6 = NULL;
  _array_CyclicArr__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F retarg_tmp_chpl;
  _ref__domain_CyclicDom_1_int64_t_F call_tmp_chpl10 = NULL;
  chpl___RuntimeTypeInfo31 call_tmp_chpl11;
  _ref__domain_CyclicDom_1_int64_t_F i_dom_chpl3 = NULL;
  _domain_CyclicDom_1_int64_t_F _runtime_type_tmp__chpl3;
  _domain_CyclicDom_1_int64_t_F tmp_chpl19;
  _array_CyclicArr_Bitmap_1_int64_t_F ret_tmp_chpl7;
  _ref__array_CyclicArr_Bitmap_1_int64_t_F ret_to_arg_ref_tmp__chpl7 = NULL;
  _array_CyclicArr_Bitmap_1_int64_t_F retarg_tmp_chpl2;
  GDT_FCHGlobalNode_chpl wrap_call_tmp_chpl3 = NULL;
  atomic_uint64 this_chpl11;
  atomic_uint_least64_t ret_chpl5;
  atomic_uint_least64_t type_tmp_chpl;
  _ref_atomic_uint_least64_t _ref_tmp__chpl3 = NULL;
  atomic_uint64 ret_tmp_chpl8;
  _ref_atomic_uint64 ret_to_arg_ref_tmp__chpl8 = NULL;
  _domain_DefaultRectangularDom_1_int64_t_F default_argperLocaleSpace_chpl;
  range_int64_t_bounded_F ret_tmp_chpl9;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp__chpl9 = NULL;
  _domain_DefaultRectangularDom_1_int64_t_F ret_tmp_chpl10;
  _ref__domain_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp__chpl10 = NULL;
  _ref__domain_DefaultRectangularDom_1_int64_t_F i_x_chpl3 = NULL;
  _domain_DefaultRectangularDom_1_int64_t_F ret_chpl6;
  chpl_bool coerce_tmp_chpl3;
  _domain_DefaultRectangularDom_1_int64_t_F ret_chpl7;
  _ref__domain_DefaultRectangularDom_1_int64_t_F _ref_tmp__chpl4 = NULL;
  chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_F tmp_chpl20 = {CHPL_LOCALEID_T_INIT, NULL};
  _domain_ReplicatedDom_1_int64_t_F default_argperLocaleDomain_chpl;
  Replicated_chpl wrap_call_tmp_chpl4 = NULL;
  chpl____wide__ref__wide__array_DefaultRectangularArr_locale_1_int64_t_F_int64_t i_targetLocales_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_string i_purposeMessage_chpl = NULL;
  _distribution_Replicated call_tmp_chpl12;
  _distribution_Replicated ret_tmp_chpl11;
  _ref__distribution_Replicated ret_to_arg_ref_tmp__chpl11 = NULL;
  _domain_ReplicatedDom_1_int64_t_F ret_tmp_chpl12;
  _ref__domain_ReplicatedDom_1_int64_t_F ret_to_arg_ref_tmp__chpl12 = NULL;
  _ref__domain_ReplicatedDom_1_int64_t_F i_x_chpl4 = NULL;
  _domain_ReplicatedDom_1_int64_t_F ret_chpl8;
  chpl_bool coerce_tmp_chpl4;
  _domain_ReplicatedDom_1_int64_t_F ret_chpl9;
  _ref__domain_ReplicatedDom_1_int64_t_F call_tmp_chpl13 = NULL;
  chpl___RuntimeTypeInfo23 call_tmp_chpl14;
  _ref__domain_ReplicatedDom_1_int64_t_F i_dom_chpl4 = NULL;
  _domain_ReplicatedDom_1_int64_t_F _runtime_type_tmp__chpl4;
  _domain_ReplicatedDom_1_int64_t_F tmp_chpl21;
  _array_ReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_ReplicatedDom_1_int64_t_F ret_tmp_chpl13;
  _ref__array_ReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_ReplicatedDom_1_int64_t_F ret_to_arg_ref_tmp__chpl13 = NULL;
  _array_ReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_ReplicatedDom_1_int64_t_F retarg_tmp_chpl3;
  _ref__domain_ReplicatedDom_1_int64_t_F call_tmp_chpl15 = NULL;
  chpl___RuntimeTypeInfo7 call_tmp_chpl16;
  _ref__domain_ReplicatedDom_1_int64_t_F i_dom_chpl5 = NULL;
  _domain_ReplicatedDom_1_int64_t_F _runtime_type_tmp__chpl5;
  _domain_ReplicatedDom_1_int64_t_F tmp_chpl22;
  _array_ReplicatedArr_FCHGlobalNode_ReplicatedDom_1_int64_t_F ret_tmp_chpl14;
  _ref__array_ReplicatedArr_FCHGlobalNode_ReplicatedDom_1_int64_t_F ret_to_arg_ref_tmp__chpl14 = NULL;
  _array_ReplicatedArr_FCHGlobalNode_ReplicatedDom_1_int64_t_F retarg_tmp_chpl4;
  FCHLock_FCHQueue_int64_t_chpl wrap_call_tmp_chpl5 = NULL;
  chpl____wide__nilType chpl_macro_tmp_5456;
  chpl____wide_listNode_int64_t chpl_macro_tmp_5457;
  chpl____wide__nilType chpl_macro_tmp_5458;
  chpl____wide_listNode_int64_t chpl_macro_tmp_5459;
  chpl____wide__nilType chpl_macro_tmp_5460;
  chpl____wide_listNode_int64_t chpl_macro_tmp_5461;
  chpl____wide__nilType chpl_macro_tmp_5462;
  chpl____wide_listNode_int64_t chpl_macro_tmp_5463;
  chpl____wide_listNode_int64_t chpl_macro_tmp_5464;
  chpl____wide_listNode_int64_t chpl_macro_tmp_5465;
  chpl____wide__nilType chpl_macro_tmp_5466;
  chpl____wide_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_5467;
  chpl____wide__nilType chpl_macro_tmp_5468;
  chpl____wide_ReplicatedDom_1_int64_t_F chpl_macro_tmp_5469;
  chpl____wide__nilType chpl_macro_tmp_5470;
  chpl____wide_ReplicatedArr_LocalAtomicObject_FCHLocalNode_FCHQueue_int64_t_uint64_t_ReplicatedDom_1_int64_t_F chpl_macro_tmp_5471;
  chpl____wide__nilType chpl_macro_tmp_5472;
  chpl____wide_ReplicatedArr_FCHGlobalNode_ReplicatedDom_1_int64_t_F chpl_macro_tmp_5473;
  chpl____wide__nilType chpl_macro_tmp_5474;
  chpl____wide_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_5475;
  chpl____wide__nilType chpl_macro_tmp_5476;
  chpl____wide_CyclicDom_1_int64_t_F chpl_macro_tmp_5477;
  chpl____wide__nilType chpl_macro_tmp_5478;
  chpl____wide_CyclicArr__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F chpl_macro_tmp_5479;
  chpl____wide__nilType chpl_macro_tmp_5480;
  chpl____wide_CyclicArr_Bitmap_1_int64_t_F chpl_macro_tmp_5481;
  chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_5482;
  chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_5483;
  chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_5484;
  local_LocaleSpace_chpl = LocaleSpace;
  local_Locales_chpl = Locales;
  local_dataParMinGranularity_chpl = dataParMinGranularity;
  local_dataParIgnoreRunningTasks_chpl = dataParIgnoreRunningTasks;
  local_dataParTasksPerLocale_chpl = dataParTasksPerLocale;
  local_GDT_NUM_ENTRIES_chpl = GDT_NUM_ENTRIES_chpl;
  cast_tmp_chpl = chpl_here_alloc(sizeof(chpl_FCHQueue_int64_t_chpl_object), INT16(169));
  this_chpl7 = ((FCHQueue_int64_t_chpl)(cast_tmp_chpl));
  ((object)(this_chpl7))->chpl__cid = chpl__cid_FCHQueue_int64_t_chpl;
  chpl_macro_tmp_5456.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5456.addr = nil;
  chpl_macro_tmp_5457.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5457.addr = NULL;
  tmp_chpl = chpl_macro_tmp_5457;
  (&_init_class_tmp__chpl)->first_chpl = tmp_chpl;
  chpl_macro_tmp_5458.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5458.addr = nil;
  chpl_macro_tmp_5459.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5459.addr = NULL;
  tmp_chpl2 = chpl_macro_tmp_5459;
  (&_init_class_tmp__chpl)->last_chpl = tmp_chpl2;
  (&_init_class_tmp__chpl)->length_chpl = INT64(0);
  (this_chpl7)->_list_chpl = _init_class_tmp__chpl;
  (this_chpl7)->fchLock_chpl = nil;
  chpl_macro_tmp_5460.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5460.addr = nil;
  chpl_macro_tmp_5461.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5461.addr = NULL;
  tmp_chpl3 = chpl_macro_tmp_5461;
  (&this_chpl8)->first_chpl = tmp_chpl3;
  chpl_macro_tmp_5462.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5462.addr = nil;
  chpl_macro_tmp_5463.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5463.addr = NULL;
  tmp_chpl4 = chpl_macro_tmp_5463;
  (&this_chpl8)->last_chpl = tmp_chpl4;
  (&this_chpl8)->length_chpl = INT64(0);
  call_tmp_chpl = ((listNode_int64_t_chpl)(nil));
  chpl_macro_tmp_5464.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5464.addr = call_tmp_chpl;
  tmp_chpl5 = chpl_macro_tmp_5464;
  (&this_chpl8)->first_chpl = tmp_chpl5;
  call_tmp_chpl2 = ((listNode_int64_t_chpl)(nil));
  chpl_macro_tmp_5465.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5465.addr = call_tmp_chpl2;
  tmp_chpl6 = chpl_macro_tmp_5465;
  (&this_chpl8)->last_chpl = tmp_chpl6;
  (&this_chpl8)->length_chpl = INT64(0);
  ret_to_arg_ref_tmp__chpl = &ret_tmp_chpl;
  _construct_list_chpl(call_tmp_chpl, call_tmp_chpl2, INT64(0), &this_chpl8, ret_to_arg_ref_tmp__chpl);
  (this_chpl7)->_list_chpl = ret_tmp_chpl;
  call_tmp_chpl3 = ((FCHLock_FCHQueue_int64_t_chpl)(nil));
  (this_chpl7)->fchLock_chpl = call_tmp_chpl3;
  wrap_call_tmp_chpl = _construct_FCHQueue_chpl(&ret_tmp_chpl, call_tmp_chpl3, this_chpl7);
  this_chpl6 = wrap_call_tmp_chpl;
  cast_tmp_chpl2 = chpl_here_alloc(sizeof(chpl_FCHLock_FCHQueue_int64_t_chpl_object), INT16(168));
  this_chpl9 = ((FCHLock_FCHQueue_int64_t_chpl)(cast_tmp_chpl2));
  ((object)(this_chpl9))->chpl__cid = chpl__cid_FCHLock_FCHQueue_int64_t_chpl;
  (this_chpl9)->data_chpl = nil;
  (this_chpl9)->nodeGDT_chpl = nil;
  (this_chpl9)->combinerList_chpl = _init_class_tmp__chpl2;
  (&_init_class_tmp__chpl3)->_pid = INT64(0);
  chpl_macro_tmp_5466.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5466.addr = nil;
  chpl_macro_tmp_5467.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5467.addr = NULL;
  tmp_chpl7 = chpl_macro_tmp_5467;
  (&_init_class_tmp__chpl3)->_instance = tmp_chpl7;
  (&_init_class_tmp__chpl3)->_unowned = UINT8(false);
  (this_chpl9)->perLocaleSpace_chpl = _init_class_tmp__chpl3;
  (&_init_class_tmp__chpl4)->_pid = INT64(0);
  chpl_macro_tmp_5468.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5468.addr = nil;
  chpl_macro_tmp_5469.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5469.addr = NULL;
  tmp_chpl8 = chpl_macro_tmp_5469;
  (&_init_class_tmp__chpl4)->_instance = tmp_chpl8;
  (&_init_class_tmp__chpl4)->_unowned = UINT8(false);
  (this_chpl9)->perLocaleDomain_chpl = _init_class_tmp__chpl4;
  (&_init_class_tmp__chpl5)->_pid = INT64(0);
  chpl_macro_tmp_5470.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5470.addr = nil;
  chpl_macro_tmp_5471.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5471.addr = NULL;
  tmp_chpl9 = chpl_macro_tmp_5471;
  (&_init_class_tmp__chpl5)->_instance = tmp_chpl9;
  (&_init_class_tmp__chpl5)->_unowned = UINT8(false);
  (this_chpl9)->publicationList_chpl = _init_class_tmp__chpl5;
  (&_init_class_tmp__chpl6)->_pid = INT64(0);
  chpl_macro_tmp_5472.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5472.addr = nil;
  chpl_macro_tmp_5473.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5473.addr = NULL;
  tmp_chpl10 = chpl_macro_tmp_5473;
  (&_init_class_tmp__chpl6)->_instance = tmp_chpl10;
  (&_init_class_tmp__chpl6)->_unowned = UINT8(false);
  (this_chpl9)->recycledCombinerNode_chpl = _init_class_tmp__chpl6;
  (this_chpl9)->data_chpl = this_chpl6;
  cast_tmp_chpl3 = chpl_here_alloc(sizeof(chpl_GDT_FCHGlobalNode_chpl_object), INT16(109));
  this_chpl10 = ((GDT_FCHGlobalNode_chpl)(cast_tmp_chpl3));
  ((object)(this_chpl10))->chpl__cid = chpl__cid_GDT_FCHGlobalNode_chpl;
  (&_init_class_tmp__chpl7)->_pid = INT64(0);
  chpl_macro_tmp_5474.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5474.addr = nil;
  chpl_macro_tmp_5475.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5475.addr = NULL;
  tmp_chpl11 = chpl_macro_tmp_5475;
  (&_init_class_tmp__chpl7)->_instance = tmp_chpl11;
  (&_init_class_tmp__chpl7)->_unowned = UINT8(false);
  (this_chpl10)->gdtSpace_chpl = _init_class_tmp__chpl7;
  (&_init_class_tmp__chpl8)->_pid = INT64(0);
  chpl_macro_tmp_5476.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5476.addr = nil;
  chpl_macro_tmp_5477.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5477.addr = NULL;
  tmp_chpl12 = chpl_macro_tmp_5477;
  (&_init_class_tmp__chpl8)->_instance = tmp_chpl12;
  (&_init_class_tmp__chpl8)->_unowned = UINT8(false);
  (this_chpl10)->locDom_chpl = _init_class_tmp__chpl8;
  (&_init_class_tmp__chpl9)->_pid = INT64(0);
  chpl_macro_tmp_5478.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5478.addr = nil;
  chpl_macro_tmp_5479.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5479.addr = NULL;
  tmp_chpl13 = chpl_macro_tmp_5479;
  (&_init_class_tmp__chpl9)->_instance = tmp_chpl13;
  (&_init_class_tmp__chpl9)->_unowned = UINT8(false);
  (this_chpl10)->gdtEntries_chpl = _init_class_tmp__chpl9;
  (&_init_class_tmp__chpl10)->_pid = INT64(0);
  chpl_macro_tmp_5480.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5480.addr = nil;
  chpl_macro_tmp_5481.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5481.addr = NULL;
  tmp_chpl14 = chpl_macro_tmp_5481;
  (&_init_class_tmp__chpl10)->_instance = tmp_chpl14;
  (&_init_class_tmp__chpl10)->_unowned = UINT8(false);
  (this_chpl10)->gdtBitmap_chpl = _init_class_tmp__chpl10;
  ret_to_arg_ref_tmp__chpl2 = &ret_tmp_chpl2;
  chpl_build_bounded_range(INT64(1), local_GDT_NUM_ENTRIES_chpl, ret_to_arg_ref_tmp__chpl2);
  ret_to_arg_ref_tmp__chpl3 = &ret_tmp_chpl3;
  chpl__buildDomainExpr2(&ret_tmp_chpl2, ret_to_arg_ref_tmp__chpl3);
  i_x_chpl = &ret_tmp_chpl3;
  coerce_tmp_chpl = (i_x_chpl)->_unowned;
  if (coerce_tmp_chpl) {
    _ref_tmp__chpl = i_x_chpl;
    chpl_macro_tmp_5482.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5482.addr = _ref_tmp__chpl;
    tmp_chpl15 = chpl_macro_tmp_5482;
    ret_chpl2 = chpl__initCopy2(tmp_chpl15);
    ret_chpl = ret_chpl2;
    goto _end_chpl__unalias_chpl;
  } else {
    ret_chpl = ret_tmp_chpl3;
    goto _end_chpl__unalias_chpl;
  }
  _end_chpl__unalias_chpl:;
  default_arggdtSpace_chpl = ret_chpl;
  (this_chpl10)->gdtSpace_chpl = ret_chpl;
  call_tmp_chpl4 = low(&LocaleSpace);
  i_targetLocales_chpl = local_Locales_chpl;
  wrap_call_tmp_chpl2 = Cyclic_chpl(call_tmp_chpl4, i_targetLocales_chpl, local_dataParTasksPerLocale_chpl, local_dataParIgnoreRunningTasks_chpl, local_dataParMinGranularity_chpl);
  ret_to_arg_ref_tmp__chpl4 = &ret_tmp_chpl4;
  chpl__buildDistValue3(wrap_call_tmp_chpl2, ret_to_arg_ref_tmp__chpl4);
  call_tmp_chpl5 = ret_tmp_chpl4;
  ret_to_arg_ref_tmp__chpl5 = &ret_tmp_chpl5;
  chpl__distributed2(&ret_tmp_chpl4, &local_LocaleSpace_chpl, ret_to_arg_ref_tmp__chpl5);
  i_x_chpl2 = &ret_tmp_chpl5;
  coerce_tmp_chpl2 = (i_x_chpl2)->_unowned;
  if (coerce_tmp_chpl2) {
    ret_chpl4 = chpl__initCopy4(i_x_chpl2);
    ret_chpl3 = ret_chpl4;
    goto _end_chpl__unalias_chpl2;
  } else {
    ret_chpl3 = ret_tmp_chpl5;
    goto _end_chpl__unalias_chpl2;
  }
  _end_chpl__unalias_chpl2:;
  default_arglocDom_chpl = ret_chpl3;
  (this_chpl10)->locDom_chpl = ret_chpl3;
  call_tmp_chpl6 = chpl__ensureDomainExpr3(&default_arglocDom_chpl);
  _ref_tmp__chpl2 = &default_arggdtSpace_chpl;
  chpl_macro_tmp_5483.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5483.addr = _ref_tmp__chpl2;
  tmp_chpl16 = chpl_macro_tmp_5483;
  call_tmp_chpl7 = chpl__ensureDomainExpr5(tmp_chpl16);
  i_dom_chpl = call_tmp_chpl7;
  call_tmp_chpl8 = chpl__buildArrayRuntimeType19(i_dom_chpl);
  i_dom_chpl2 = call_tmp_chpl6;
  call_tmp_chpl9 = chpl__buildArrayRuntimeType6(i_dom_chpl2, &call_tmp_chpl8);
  tmp_chpl17 = (&call_tmp_chpl9)->dom;
  _runtime_type_tmp__chpl = tmp_chpl17;
  tmp_chpl18 = (&call_tmp_chpl9)->eltType;
  _runtime_type_tmp__chpl2 = tmp_chpl18;
  ret_to_arg_ref_tmp__chpl6 = &retarg_tmp_chpl;
  chpl__convertRuntimeTypeToValue16(&_runtime_type_tmp__chpl, &_runtime_type_tmp__chpl2, ret_to_arg_ref_tmp__chpl6);
  ret_tmp_chpl6 = retarg_tmp_chpl;
  (this_chpl10)->gdtEntries_chpl = ret_tmp_chpl6;
  call_tmp_chpl10 = chpl__ensureDomainExpr3(&default_arglocDom_chpl);
  i_dom_chpl3 = call_tmp_chpl10;
  call_tmp_chpl11 = chpl__buildArrayRuntimeType26(i_dom_chpl3);
  tmp_chpl19 = (&call_tmp_chpl11)->dom;
  _runtime_type_tmp__chpl3 = tmp_chpl19;
  ret_to_arg_ref_tmp__chpl7 = &retarg_tmp_chpl2;
  chpl__convertRuntimeTypeToValue29(&_runtime_type_tmp__chpl3, ret_to_arg_ref_tmp__chpl7);
  ret_tmp_chpl7 = retarg_tmp_chpl2;
  (this_chpl10)->gdtBitmap_chpl = ret_tmp_chpl7;
  wrap_call_tmp_chpl3 = _construct_GDT_chpl(&default_arggdtSpace_chpl, &default_arglocDom_chpl, &ret_tmp_chpl6, &ret_tmp_chpl7, this_chpl10);
  chpl__autoDestroy(&call_tmp_chpl5);
  (this_chpl9)->nodeGDT_chpl = wrap_call_tmp_chpl3;
  ret_chpl5 = type_tmp_chpl;
  _ref_tmp__chpl3 = &ret_chpl5;
  atomic_init_uint_least64_t(_ref_tmp__chpl3, ((uint64_t)(INT64(0))));
  (&this_chpl11)->_v = ret_chpl5;
  ret_to_arg_ref_tmp__chpl8 = &ret_tmp_chpl8;
  _construct_atomic_uint64(ret_chpl5, &this_chpl11, ret_to_arg_ref_tmp__chpl8);
  (this_chpl9)->combinerList_chpl = ret_tmp_chpl8;
  ret_to_arg_ref_tmp__chpl9 = &ret_tmp_chpl9;
  chpl_build_bounded_range(INT64(0), INT64(0), ret_to_arg_ref_tmp__chpl9);
  ret_to_arg_ref_tmp__chpl10 = &ret_tmp_chpl10;
  chpl__buildDomainExpr2(&ret_tmp_chpl9, ret_to_arg_ref_tmp__chpl10);
  i_x_chpl3 = &ret_tmp_chpl10;
  coerce_tmp_chpl3 = (i_x_chpl3)->_unowned;
  if (coerce_tmp_chpl3) {
    _ref_tmp__chpl4 = i_x_chpl3;
    chpl_macro_tmp_5484.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5484.addr = _ref_tmp__chpl4;
    tmp_chpl20 = chpl_macro_tmp_5484;
    ret_chpl7 = chpl__initCopy2(tmp_chpl20);
    ret_chpl6 = ret_chpl7;
    goto _end_chpl__unalias_chpl3;
  } else {
    ret_chpl6 = ret_tmp_chpl10;
    goto _end_chpl__unalias_chpl3;
  }
  _end_chpl__unalias_chpl3:;
  default_argperLocaleSpace_chpl = ret_chpl6;
  (this_chpl9)->perLocaleSpace_chpl = ret_chpl6;
  i_targetLocales_chpl2 = local_Locales_chpl;
  i_purposeMessage_chpl = &_str_literal_2011 /* "used to create a Replicated" */;
  wrap_call_tmp_chpl4 = Replicated_chpl3(i_targetLocales_chpl2, i_purposeMessage_chpl);
  ret_to_arg_ref_tmp__chpl11 = &ret_tmp_chpl11;
  chpl__buildDistValue2(wrap_call_tmp_chpl4, ret_to_arg_ref_tmp__chpl11);
  call_tmp_chpl12 = ret_tmp_chpl11;
  ret_to_arg_ref_tmp__chpl12 = &ret_tmp_chpl12;
  chpl__distributed(&ret_tmp_chpl11, &ret_chpl6, ret_to_arg_ref_tmp__chpl12);
  i_x_chpl4 = &ret_tmp_chpl12;
  coerce_tmp_chpl4 = (i_x_chpl4)->_unowned;
  if (coerce_tmp_chpl4) {
    ret_chpl9 = chpl__initCopy5(i_x_chpl4);
    ret_chpl8 = ret_chpl9;
    goto _end_chpl__unalias_chpl4;
  } else {
    ret_chpl8 = ret_tmp_chpl12;
    goto _end_chpl__unalias_chpl4;
  }
  _end_chpl__unalias_chpl4:;
  default_argperLocaleDomain_chpl = ret_chpl8;
  (this_chpl9)->perLocaleDomain_chpl = ret_chpl8;
  call_tmp_chpl13 = chpl__ensureDomainExpr2(&default_argperLocaleDomain_chpl);
  i_dom_chpl4 = call_tmp_chpl13;
  call_tmp_chpl14 = chpl__buildArrayRuntimeType12(i_dom_chpl4);
  tmp_chpl21 = (&call_tmp_chpl14)->dom;
  _runtime_type_tmp__chpl4 = tmp_chpl21;
  ret_to_arg_ref_tmp__chpl13 = &retarg_tmp_chpl3;
  chpl__convertRuntimeTypeToValue15(&_runtime_type_tmp__chpl4, ret_to_arg_ref_tmp__chpl13);
  ret_tmp_chpl13 = retarg_tmp_chpl3;
  (this_chpl9)->publicationList_chpl = ret_tmp_chpl13;
  call_tmp_chpl15 = chpl__ensureDomainExpr2(&default_argperLocaleDomain_chpl);
  i_dom_chpl5 = call_tmp_chpl15;
  call_tmp_chpl16 = chpl__buildArrayRuntimeType8(i_dom_chpl5);
  tmp_chpl22 = (&call_tmp_chpl16)->dom;
  _runtime_type_tmp__chpl5 = tmp_chpl22;
  ret_to_arg_ref_tmp__chpl14 = &retarg_tmp_chpl4;
  chpl__convertRuntimeTypeToValue8(&_runtime_type_tmp__chpl5, ret_to_arg_ref_tmp__chpl14);
  ret_tmp_chpl14 = retarg_tmp_chpl4;
  (this_chpl9)->recycledCombinerNode_chpl = ret_tmp_chpl14;
  wrap_call_tmp_chpl5 = _construct_FCHLock_chpl(this_chpl6, wrap_call_tmp_chpl3, &ret_tmp_chpl8, &default_argperLocaleSpace_chpl, &default_argperLocaleDomain_chpl, &ret_tmp_chpl13, &ret_tmp_chpl14, this_chpl9);
  chpl__autoDestroy2(&call_tmp_chpl12);
  (this_chpl6)->fchLock_chpl = wrap_call_tmp_chpl5;
  return this_chpl6;
}

/* FCHQueue.chpl:34 */
static void enqueue_chpl(FCHQueue_int64_t_chpl this_chpl6,
                         int64_t elt_chpl) {
  EnqueueFunctor_FCHQueue_int64_t_int64_t_chpl this_chpl7 = NULL;
  c_void_ptr cast_tmp_chpl;
  EnqueueFunctor_FCHQueue_int64_t_int64_t_chpl wrap_call_tmp_chpl = NULL;
  chpl_localeID_t call_tmp_chpl;
  EnqueueFunctor_FCHQueue_int64_t_int64_t_chpl rvfDerefTmp_chpl = NULL;
  chpl_bool isdirect_chpl;
  chpl____wide_EnqueueFunctor_FCHQueue_int64_t_int64_t tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn113 _args_foron_fn_chpl = NULL;
  chpl____wide_EnqueueFunctor_FCHQueue_int64_t_int64_t tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  chpl____wide_EnqueueFunctor_FCHQueue_int64_t_int64_t chpl_macro_tmp_5485;
  chpl__class_localson_fn113_object chpl_macro_tmp_5486;
  chpl____wide_EnqueueFunctor_FCHQueue_int64_t_int64_t chpl_macro_tmp_5487;
  cast_tmp_chpl = chpl_here_alloc(sizeof(chpl_EnqueueFunctor_FCHQueue_int64_t_int64_t_chpl_object), INT16(170));
  this_chpl7 = ((EnqueueFunctor_FCHQueue_int64_t_int64_t_chpl)(cast_tmp_chpl));
  ((object)(this_chpl7))->chpl__cid = chpl__cid_EnqueueFunctor_FCHQueue_int64_t_int64_t_chpl;
  (this_chpl7)->elem_chpl = INT64(0);
  (this_chpl7)->elem_chpl = elt_chpl;
  wrap_call_tmp_chpl = _construct_EnqueueFunctor_chpl(elt_chpl, this_chpl7);
  synchronize_chpl((this_chpl6)->fchLock_chpl, ((FCHFunctor_FCHQueue_int64_t_chpl)(wrap_call_tmp_chpl)));
  call_tmp_chpl = chpl_gen_getLocaleID();
  rvfDerefTmp_chpl = wrap_call_tmp_chpl;
  isdirect_chpl = chpl_doDirectExecuteOn(&call_tmp_chpl);
  if (isdirect_chpl) {
    chpl_macro_tmp_5485.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5485.addr = rvfDerefTmp_chpl;
    tmp_chpl = chpl_macro_tmp_5485;
    on_fn148(tmp_chpl);
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn113)(&chpl_macro_tmp_5486));
    (_args_foron_fn_chpl)->_0_rvfDerefTmp = call_tmp_chpl;
    chpl_macro_tmp_5487.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5487.addr = rvfDerefTmp_chpl;
    tmp_chpl2 = chpl_macro_tmp_5487;
    (_args_foron_fn_chpl)->_1_rvfDerefTmp = tmp_chpl2;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    /*** wrapon_fn150 ***/ chpl_executeOn(&call_tmp_chpl, INT32(215), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), sizeof(chpl__class_localson_fn113_object), INT64(1227), INT32(2));
  }
  return;
}

/* FCHQueue.chpl:40 */
static void dequeue_chpl(FCHQueue_int64_t_chpl this_chpl6,
                         _ref__tuple_2_chpl_bool_int64_t _retArg_chpl) {
  DequeueFunctor_FCHQueue_int64_t_int64_t_chpl f_chpl = NULL;
  DequeueFunctor_FCHQueue_int64_t_int64_t_chpl this_chpl7 = NULL;
  c_void_ptr cast_tmp_chpl;
  DequeueFunctor_FCHQueue_int64_t_int64_t_chpl wrap_call_tmp_chpl = NULL;
  FCHLock_FCHQueue_int64_t_chpl coerce_tmp_chpl = NULL;
  chpl_bool coerce_tmp_chpl2;
  int64_t coerce_tmp_chpl3;
  chpl_localeID_t call_tmp_chpl;
  DequeueFunctor_FCHQueue_int64_t_int64_t_chpl rvfDerefTmp_chpl = NULL;
  chpl_bool isdirect_chpl;
  chpl____wide_DequeueFunctor_FCHQueue_int64_t_int64_t tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn115 _args_foron_fn_chpl = NULL;
  chpl____wide_DequeueFunctor_FCHQueue_int64_t_int64_t tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn_chpl;
  chpl____wide_DequeueFunctor_FCHQueue_int64_t_int64_t chpl_macro_tmp_5488;
  chpl__class_localson_fn115_object chpl_macro_tmp_5489;
  chpl____wide_DequeueFunctor_FCHQueue_int64_t_int64_t chpl_macro_tmp_5490;
  cast_tmp_chpl = chpl_here_alloc(sizeof(chpl_DequeueFunctor_FCHQueue_int64_t_int64_t_chpl_object), INT16(184));
  this_chpl7 = ((DequeueFunctor_FCHQueue_int64_t_int64_t_chpl)(cast_tmp_chpl));
  ((object)(this_chpl7))->chpl__cid = chpl__cid_DequeueFunctor_FCHQueue_int64_t_int64_t_chpl;
  (this_chpl7)->retval_chpl = INT64(0);
  (this_chpl7)->hasElem_chpl = UINT8(false);
  (this_chpl7)->retval_chpl = INT64(0);
  (this_chpl7)->hasElem_chpl = UINT8(false);
  wrap_call_tmp_chpl = _construct_DequeueFunctor_chpl(INT64(0), UINT8(false), this_chpl7);
  f_chpl = wrap_call_tmp_chpl;
  coerce_tmp_chpl = (this_chpl6)->fchLock_chpl;
  synchronize_chpl(coerce_tmp_chpl, ((FCHFunctor_FCHQueue_int64_t_chpl)(wrap_call_tmp_chpl)));
  coerce_tmp_chpl2 = (f_chpl)->hasElem_chpl;
  coerce_tmp_chpl3 = (f_chpl)->retval_chpl;
  call_tmp_chpl = chpl_gen_getLocaleID();
  rvfDerefTmp_chpl = f_chpl;
  isdirect_chpl = chpl_doDirectExecuteOn(&call_tmp_chpl);
  if (isdirect_chpl) {
    chpl_macro_tmp_5488.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5488.addr = rvfDerefTmp_chpl;
    tmp_chpl = chpl_macro_tmp_5488;
    on_fn151(tmp_chpl);
  } else {
    _args_foron_fn_chpl = ((_class_localson_fn115)(&chpl_macro_tmp_5489));
    (_args_foron_fn_chpl)->_0_rvfDerefTmp = call_tmp_chpl;
    chpl_macro_tmp_5490.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5490.addr = rvfDerefTmp_chpl;
    tmp_chpl2 = chpl_macro_tmp_5490;
    (_args_foron_fn_chpl)->_1_rvfDerefTmp = tmp_chpl2;
    _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
    /*** wrapon_fn149 ***/ chpl_executeOn(&call_tmp_chpl, INT32(214), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), sizeof(chpl__class_localson_fn115_object), INT64(1227), INT32(2));
  }
  (_retArg_chpl)->x1 = coerce_tmp_chpl2;
  (_retArg_chpl)->x2 = coerce_tmp_chpl3;
  return;
}

/* FCHQueue.chpl:51 */
static void chpl_user_main(void) {
  string local__str_literal_1944_chpl;
  string local__str_literal_1942_chpl;
  string local__str_literal_1940_chpl;
  int64_t local_nElementForFCHQueue_chpl;
  string local__str_literal_1936_chpl;
  FCHQueue_int64_t_chpl queue_chpl = NULL;
  int64_t _ic__F1_high_chpl;
  int64_t i_chpl;
  int64_t _ic__F1_high_chpl2;
  int64_t i_chpl2;
  _tuple_2_chpl_bool_int64_t retval_chpl;
  chpl_bool call_tmp_x1_chpl;
  int64_t call_tmp_x2_chpl;
  _tuple_2_chpl_bool_int64_t ret_tmp_chpl;
  _ref__tuple_2_chpl_bool_int64_t ret_to_arg_ref_tmp__chpl = NULL;
  int64_t coerce_tmp_chpl;
  chpl_bool call_tmp_chpl;
  local__str_literal_1944_chpl /* "PASSED!" */ = _str_literal_1944 /* "PASSED!" */;
  local__str_literal_1942_chpl /* ", Received " */ = _str_literal_1942 /* ", Received " */;
  local__str_literal_1940_chpl /* "BAD RESULT! Expected " */ = _str_literal_1940 /* "BAD RESULT! Expected " */;
  local_nElementForFCHQueue_chpl = nElementForFCHQueue_chpl;
  local__str_literal_1936_chpl /* "Starting FCHQueue Proof-Of-Correctness Test ~ nElementForFCHQueue=" */ = _str_literal_1936 /* "Starting FCHQueue Proof-Of-Correctness Test ~ nElementForFCHQueue=" */;
  writeln_chpl5(&local__str_literal_1936_chpl /* "Starting FCHQueue Proof-Of-Correctness Test ~ nElementForFCHQueue=" */, local_nElementForFCHQueue_chpl);
  queue_chpl = FCHQueue_chpl();
  _ic__F1_high_chpl = local_nElementForFCHQueue_chpl;
  for (i_chpl = INT64(1); ((i_chpl <= _ic__F1_high_chpl)); i_chpl += INT64(1)) {
    enqueue_chpl(queue_chpl, i_chpl);
  }
  _ic__F1_high_chpl2 = local_nElementForFCHQueue_chpl;
  for (i_chpl2 = INT64(1); ((i_chpl2 <= _ic__F1_high_chpl2)); i_chpl2 += INT64(1)) {
    ret_to_arg_ref_tmp__chpl = &ret_tmp_chpl;
    dequeue_chpl(queue_chpl, ret_to_arg_ref_tmp__chpl);
    call_tmp_x1_chpl = (&ret_tmp_chpl)->x1;
    call_tmp_x2_chpl = (&ret_tmp_chpl)->x2;
    (&retval_chpl)->x1 = call_tmp_x1_chpl;
    (&retval_chpl)->x2 = call_tmp_x2_chpl;
    coerce_tmp_chpl = (&retval_chpl)->x2;
    call_tmp_chpl = (coerce_tmp_chpl != i_chpl2);
    if (call_tmp_chpl) {
      writeln_chpl6(&local__str_literal_1940_chpl /* "BAD RESULT! Expected " */, i_chpl2, &local__str_literal_1942_chpl /* ", Received " */, &retval_chpl);
      goto _end_main_chpl;
    }
  }
  writeln_chpl4(&local__str_literal_1944_chpl /* "PASSED!" */);
  _end_main_chpl:;
  return;
}

/* FCHQueue.chpl:51 */
int64_t chpl_gen_main(_ref_chpl_main_argument _arg) {
  chpl___EndCount_atomic_int64_int64_t this_chpl6 = NULL;
  c_void_ptr cast_tmp_chpl;
  atomic_int64 _init_class_tmp__chpl;
  atomic_int64 this_chpl7;
  atomic_int_least64_t ret_chpl;
  atomic_int_least64_t type_tmp_chpl;
  _ref_atomic_int_least64_t _ref_tmp__chpl = NULL;
  atomic_int64 ret_tmp_chpl;
  _ref_atomic_int64 ret_to_arg_ref_tmp__chpl = NULL;
  c_void_ptr call_tmp_chpl;
  chpl___EndCount_atomic_int64_int64_t wrap_call_tmp_chpl = NULL;
  cast_tmp_chpl = chpl_here_alloc(sizeof(chpl_chpl___EndCount_atomic_int64_int64_t_object), INT16(2));
  this_chpl6 = ((chpl___EndCount_atomic_int64_int64_t)(cast_tmp_chpl));
  ((object)(this_chpl6))->chpl__cid = chpl__cid_chpl___EndCount_atomic_int64_int64_t;
  (this_chpl6)->i = _init_class_tmp__chpl;
  (this_chpl6)->taskCnt = INT64(0);
  (this_chpl6)->taskList = NULL;
  ret_chpl = type_tmp_chpl;
  _ref_tmp__chpl = &ret_chpl;
  atomic_init_int_least64_t(_ref_tmp__chpl, INT64(0));
  (&this_chpl7)->_v = ret_chpl;
  ret_to_arg_ref_tmp__chpl = &ret_tmp_chpl;
  _construct_atomic_int64(ret_chpl, &this_chpl7, ret_to_arg_ref_tmp__chpl);
  (this_chpl6)->i = ret_tmp_chpl;
  (this_chpl6)->taskCnt = INT64(0);
  call_tmp_chpl = ((c_void_ptr)(nil));
  (this_chpl6)->taskList = call_tmp_chpl;
  wrap_call_tmp_chpl = _construct__EndCount(&ret_tmp_chpl, INT64(0), call_tmp_chpl, this_chpl6);
  chpl_rt_preUserCodeHook();
  chpl__init_FCHQueue(INT64(51), INT32(51));
  chpl_user_main();
  chpl_rt_postUserCodeHook();
  _waitEndCount5(wrap_call_tmp_chpl);
  chpl_deinitModules();
  return INT64(0);
}

