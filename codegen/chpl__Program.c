/* <internal>:0 */
static object _construct_object(object meme) {
  object this12 = NULL;
  return meme;
}

/* <internal>:0 */
static void chpl__auto_destroy_object(chpl____wide_object this12) {
  return;
}

/* ChapelBase.chpl:23 */
void chpl__heapAllocateGlobals(void) {
  chpl_bool T;
  c_void_ptr chpl_here_alloc_tmp;
  c_void_ptr chpl_here_alloc_tmp2;
  c_void_ptr chpl_here_alloc_tmp3;
  c_void_ptr chpl_here_alloc_tmp4;
  c_void_ptr chpl_here_alloc_tmp5;
  c_void_ptr chpl_here_alloc_tmp6;
  c_void_ptr chpl_here_alloc_tmp7;
  c_void_ptr chpl_here_alloc_tmp8;
  c_void_ptr chpl_here_alloc_tmp9;
  c_void_ptr chpl_here_alloc_tmp10;
  c_void_ptr chpl_here_alloc_tmp11;
  c_void_ptr chpl_here_alloc_tmp12;
  c_void_ptr chpl_here_alloc_tmp13;
  c_void_ptr chpl_here_alloc_tmp14;
  c_void_ptr chpl_here_alloc_tmp15;
  c_void_ptr chpl_here_alloc_tmp16;
  chpl____wide_heap_ArrayInit chpl_macro_tmp_1;
  chpl____wide_heap_chpl_ModuleDeinit chpl_macro_tmp_2;
  chpl____wide_heap_chpl_bool chpl_macro_tmp_3;
  chpl____wide_heap_locale chpl_macro_tmp_4;
  chpl____wide_heap_DummyLocale chpl_macro_tmp_5;
  chpl____wide_heap_atomic_int64 chpl_macro_tmp_6;
  chpl____wide_heap_string chpl_macro_tmp_7;
  chpl____wide_heap_string chpl_macro_tmp_8;
  chpl____wide_heap_string chpl_macro_tmp_9;
  chpl____wide_heap_chpl_bool chpl_macro_tmp_10;
  chpl____wide_heap_string chpl_macro_tmp_11;
  chpl____wide_heap_string chpl_macro_tmp_12;
  chpl____wide_heap_string chpl_macro_tmp_13;
  chpl____wide_heap_string chpl_macro_tmp_14;
  chpl____wide_heap__tuple_6_star_string chpl_macro_tmp_15;
  chpl____wide_heap__ref__array_DefaultRectangularArr_locale_1_int64_t_F_int64_t chpl_macro_tmp_16;
  T = (chpl_nodeID == INT64(0));
  if (T) {
    chpl_here_alloc_tmp = chpl_here_alloc(sizeof(chpl_heap_ArrayInit_object), INT16(256));
    chpl_macro_tmp_1.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_1.addr = ((heap_ArrayInit)(chpl_here_alloc_tmp));
    chpl_arrayInitMethod = chpl_macro_tmp_1;
    chpl_here_alloc_tmp2 = chpl_here_alloc(sizeof(chpl_heap_chpl_ModuleDeinit_object), INT16(256));
    chpl_macro_tmp_2.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_2.addr = ((heap_chpl_ModuleDeinit)(chpl_here_alloc_tmp2));
    chpl_moduleDeinitFuns = chpl_macro_tmp_2;
    chpl_here_alloc_tmp3 = chpl_here_alloc(sizeof(chpl_heap_chpl_bool_object), INT16(256));
    chpl_macro_tmp_3.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_3.addr = ((heap_chpl_bool)(chpl_here_alloc_tmp3));
    chpl__testParOn = chpl_macro_tmp_3;
    chpl_here_alloc_tmp4 = chpl_here_alloc(sizeof(chpl_heap_locale_object), INT16(256));
    chpl_macro_tmp_4.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_4.addr = ((heap_locale)(chpl_here_alloc_tmp4));
    origRootLocale = chpl_macro_tmp_4;
    chpl_here_alloc_tmp5 = chpl_here_alloc(sizeof(chpl_heap_DummyLocale_object), INT16(256));
    chpl_macro_tmp_5.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5.addr = ((heap_DummyLocale)(chpl_here_alloc_tmp5));
    dummyLocale = chpl_macro_tmp_5;
    chpl_here_alloc_tmp6 = chpl_here_alloc(sizeof(chpl_heap_atomic_int64_object), INT16(256));
    chpl_macro_tmp_6.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_6.addr = ((heap_atomic_int64)(chpl_here_alloc_tmp6));
    numPrivateObjects = chpl_macro_tmp_6;
    chpl_here_alloc_tmp7 = chpl_here_alloc(sizeof(chpl_heap_string_object), INT16(256));
    chpl_macro_tmp_7.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_7.addr = ((heap_string)(chpl_here_alloc_tmp7));
    memLog = chpl_macro_tmp_7;
    chpl_here_alloc_tmp8 = chpl_here_alloc(sizeof(chpl_heap_string_object), INT16(256));
    chpl_macro_tmp_8.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_8.addr = ((heap_string)(chpl_here_alloc_tmp8));
    memLeaksLog = chpl_macro_tmp_8;
    chpl_here_alloc_tmp9 = chpl_here_alloc(sizeof(chpl_heap_string_object), INT16(256));
    chpl_macro_tmp_9.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_9.addr = ((heap_string)(chpl_here_alloc_tmp9));
    memLeaksByDesc = chpl_macro_tmp_9;
    chpl_here_alloc_tmp10 = chpl_here_alloc(sizeof(chpl_heap_chpl_bool_object), INT16(256));
    chpl_macro_tmp_10.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_10.addr = ((heap_chpl_bool)(chpl_here_alloc_tmp10));
    doneCreatingLocales = chpl_macro_tmp_10;
    chpl_here_alloc_tmp11 = chpl_here_alloc(sizeof(chpl_heap_string_object), INT16(256));
    chpl_macro_tmp_11.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_11.addr = ((heap_string)(chpl_here_alloc_tmp11));
    _r_chpl = chpl_macro_tmp_11;
    chpl_here_alloc_tmp12 = chpl_here_alloc(sizeof(chpl_heap_string_object), INT16(256));
    chpl_macro_tmp_12.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_12.addr = ((heap_string)(chpl_here_alloc_tmp12));
    _rw_chpl = chpl_macro_tmp_12;
    chpl_here_alloc_tmp13 = chpl_here_alloc(sizeof(chpl_heap_string_object), INT16(256));
    chpl_macro_tmp_13.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_13.addr = ((heap_string)(chpl_here_alloc_tmp13));
    _cw_chpl = chpl_macro_tmp_13;
    chpl_here_alloc_tmp14 = chpl_here_alloc(sizeof(chpl_heap_string_object), INT16(256));
    chpl_macro_tmp_14.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_14.addr = ((heap_string)(chpl_here_alloc_tmp14));
    _cwr_chpl = chpl_macro_tmp_14;
    chpl_here_alloc_tmp15 = chpl_here_alloc(sizeof(chpl_heap__tuple_6_star_string_object), INT16(256));
    chpl_macro_tmp_15.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_15.addr = ((heap__tuple_6_star_string)(chpl_here_alloc_tmp15));
    _arg_to_proto_names_chpl = chpl_macro_tmp_15;
    chpl_here_alloc_tmp16 = chpl_here_alloc(sizeof(chpl_heap__ref__array_DefaultRectangularArr_locale_1_int64_t_F_int64_t_object), INT16(256));
    chpl_macro_tmp_16.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_16.addr = ((heap__ref__array_DefaultRectangularArr_locale_1_int64_t_F_int64_t)(chpl_here_alloc_tmp16));
    call_tmp = chpl_macro_tmp_16;
  }
  chpl_heap_register_global_var(INT64(0), ((ptr_wide_ptr_t)(&chpl_arrayInitMethod)));
  chpl_heap_register_global_var(INT64(1), ((ptr_wide_ptr_t)(&chpl_moduleDeinitFuns)));
  chpl_heap_register_global_var(INT64(2), ((ptr_wide_ptr_t)(&chpl__testParOn)));
  chpl_heap_register_global_var(INT64(3), ((ptr_wide_ptr_t)(&origRootLocale)));
  chpl_heap_register_global_var(INT64(4), ((ptr_wide_ptr_t)(&dummyLocale)));
  chpl_heap_register_global_var(INT64(5), ((ptr_wide_ptr_t)(&numPrivateObjects)));
  chpl_heap_register_global_var(INT64(6), ((ptr_wide_ptr_t)(&memLog)));
  chpl_heap_register_global_var(INT64(7), ((ptr_wide_ptr_t)(&memLeaksLog)));
  chpl_heap_register_global_var(INT64(8), ((ptr_wide_ptr_t)(&memLeaksByDesc)));
  chpl_heap_register_global_var(INT64(9), ((ptr_wide_ptr_t)(&doneCreatingLocales)));
  chpl_heap_register_global_var(INT64(10), ((ptr_wide_ptr_t)(&_r_chpl)));
  chpl_heap_register_global_var(INT64(11), ((ptr_wide_ptr_t)(&_rw_chpl)));
  chpl_heap_register_global_var(INT64(12), ((ptr_wide_ptr_t)(&_cw_chpl)));
  chpl_heap_register_global_var(INT64(13), ((ptr_wide_ptr_t)(&_cwr_chpl)));
  chpl_heap_register_global_var(INT64(14), ((ptr_wide_ptr_t)(&_arg_to_proto_names_chpl)));
  chpl_heap_register_global_var(INT64(15), ((ptr_wide_ptr_t)(&call_tmp)));
  chpl_gen_comm_broadcast_global_vars(INT64(16));
  return;
}

/* ChapelBase.chpl:23 */
void chpl__init_preInit(int64_t _ln,
                        int32_t _fn) {
  chpl__init_ChapelStringLiterals_p = UINT8(false);
  chpl__init_ChapelBase_p = UINT8(false);
  chpl__init_ChapelStandard_p = UINT8(false);
  chpl__init_PrintModuleInitOrder_p = UINT8(false);
  chpl__init_CPtr_p = UINT8(false);
  chpl__init_CString_p = UINT8(false);
  chpl__init_BaseStringType_p = UINT8(false);
  chpl__init_String_p = UINT8(false);
  chpl__init_ChapelDebugPrint_p = UINT8(false);
  chpl__init_MemConsistency_p = UINT8(false);
  chpl__init_Atomics_p = UINT8(false);
  chpl__init_ChapelIteratorSupport_p = UINT8(false);
  chpl__init_ChapelThreads_p = UINT8(false);
  chpl__init_ChapelTuple_p = UINT8(false);
  chpl__init_ChapelRange_p = UINT8(false);
  chpl__init_ChapelSyncvar_p = UINT8(false);
  chpl__init_SyncVarRuntimeSupport_p = UINT8(false);
  chpl__init_AlignedTSupport_p = UINT8(false);
  chpl__init_LocaleModel_p = UINT8(false);
  chpl__init_ChapelLocale_p = UINT8(false);
  chpl__init_DefaultRectangular_p = UINT8(false);
  chpl__init_LocalesArray_p = UINT8(false);
  chpl__init_ChapelArray_p = UINT8(false);
  chpl__init_ChapelDistribution_p = UINT8(false);
  chpl__init_ChapelIO_p = UINT8(false);
  chpl__init_LocaleTree_p = UINT8(false);
  chpl__init_DefaultAssociative_p = UINT8(false);
  chpl__init_ChapelTaskTable_p = UINT8(false);
  chpl__init_MemTracking_p = UINT8(false);
  chpl__init_ChapelUtil_p = UINT8(false);
  chpl__init_ChapelError_p = UINT8(false);
  chpl__init_ChapelDynDispHack_p = UINT8(false);
  chpl__init_StringCasts_p = UINT8(false);
  chpl__init_LocaleModelHelpFlat_p = UINT8(false);
  chpl__init_LocaleModelHelpMem_p = UINT8(false);
  chpl__init_ArrayViewSlice_p = UINT8(false);
  chpl__init_LocaleModelHelpSetup_p = UINT8(false);
  chpl__init_LocaleModelHelpRuntime_p = UINT8(false);
  chpl__init_ChapelNumLocales_p = UINT8(false);
  chpl__init_FCHQueue_p = UINT8(false);
  chpl__init_Queue_p = UINT8(false);
  chpl__init_LocalAtomicObject_p = UINT8(false);
  chpl__init_FCHLock_p = UINT8(false);
  chpl__init_Bitmap_p = UINT8(false);
  chpl__init_GDT_p = UINT8(false);
  chpl__init_List_p = UINT8(false);
  chpl__init_ReplicatedDist_p = UINT8(false);
  chpl__init_CyclicDist_p = UINT8(false);
  chpl__init_Time_p = UINT8(false);
  chpl__init_OldReplicatedDist_p = UINT8(false);
  chpl__init_DSIUtil_p = UINT8(false);
  chpl__init_Assert_p = UINT8(false);
  chpl__init_SysCTypes_p = UINT8(false);
  chpl__init_Sort_p = UINT8(false);
  chpl__init_SysBasic_p = UINT8(false);
  chpl__init_IO_p = UINT8(false);
  chpl__init_RangeChunk_p = UINT8(false);
  chpl__init_Sys_p = UINT8(false);
  chpl__init_SysError_p = UINT8(false);
  chpl__init_Regexp_p = UINT8(false);
  return;
}

