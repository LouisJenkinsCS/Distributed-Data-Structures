/* ChapelUtil.chpl:24 */
static void chpl__init_ChapelUtil(int64_t _ln,
                                  int32_t _fn) {
  _ref_int32_t refIndentLevel = NULL;
  if (chpl__init_ChapelUtil_p) {
    goto _exit_chpl__init_ChapelUtil;
  }
  printModuleInit("%*s\n", "ChapelUtil", INT64(10));
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_ChapelUtil_p = UINT8(true);
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_ChapelUtil:;
  return;
}

/* ChapelUtil.chpl:136 */
static void chpl_addModule(c_string moduleName,
                           c_fn_ptr deinitFun) {
  chpl____wide_chpl_ModuleDeinit T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_ModuleDeinit this12 = NULL;
  c_void_ptr cast_tmp;
  chpl____wide_chpl_ModuleDeinit T2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_ModuleDeinit wrap_call_tmp = NULL;
  chpl____wide_chpl_ModuleDeinit T3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide_chpl_ModuleDeinit chpl_macro_tmp_5341;
  chpl____wide__nilType chpl_macro_tmp_5342;
  chpl____wide_chpl_ModuleDeinit chpl_macro_tmp_5343;
  chpl____wide_chpl_ModuleDeinit chpl_macro_tmp_5344;
  chpl____wide__ref__wide_chpl_ModuleDeinit chpl_macro_tmp_5345;
  chpl_macro_tmp_5341.locale = (&chpl_moduleDeinitFuns)->locale;
  chpl_macro_tmp_5341.addr = &(((&chpl_moduleDeinitFuns)->addr)->value);
  chpl_gen_comm_get(((void*)(&T)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5341).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5341).addr, sizeof(chpl____wide_chpl_ModuleDeinit), -1, COMMID(6), INT64(1695), INT64(2));
  cast_tmp = chpl_here_alloc(sizeof(chpl_chpl_ModuleDeinit_object), INT16(185));
  this12 = ((chpl_ModuleDeinit)(cast_tmp));
  ((object)(this12))->chpl__cid = chpl__cid_chpl_ModuleDeinit;
  (this12)->moduleName = "";
  chpl_macro_tmp_5342.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5342.addr = nil;
  chpl_macro_tmp_5343.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5343.addr = NULL;
  T2 = chpl_macro_tmp_5343;
  (this12)->prevModule = T2;
  (this12)->moduleName = moduleName;
  (this12)->deinitFun = deinitFun;
  (this12)->prevModule = T;
  wrap_call_tmp = _construct_chpl_ModuleDeinit(moduleName, deinitFun, T, this12);
  chpl_macro_tmp_5344.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5344.addr = wrap_call_tmp;
  T3 = chpl_macro_tmp_5344;
  chpl_macro_tmp_5345.locale = (&chpl_moduleDeinitFuns)->locale;
  chpl_macro_tmp_5345.addr = &(((&chpl_moduleDeinitFuns)->addr)->value);
  chpl_gen_comm_put(((void*)(&T3)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5345).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5345).addr, sizeof(chpl____wide_chpl_ModuleDeinit), -1, COMMID(0), INT64(137), INT64(38));
  return;
}

/* ChapelUtil.chpl:141 */
static void chpl_deinitModules(void) {
  chpl____wide_chpl_ModuleDeinit prev = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_chpl_ModuleDeinit T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool T2;
  chpl____wide_object call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object T3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_chpl_ModuleDeinit curr = {CHPL_LOCALEID_T_INIT, NULL};
  c_fn_ptr T4;
  chpl____wide_chpl_ModuleDeinit coerce_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp3;
  chpl____wide_chpl_ModuleDeinit rvfDerefTmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect;
  _class_localson_fn119 _args_foron_fn = NULL;
  c_void_ptr _args_vforon_fn;
  chpl____wide_object call_tmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object T5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_chpl_ModuleDeinit T6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide_chpl_ModuleDeinit chpl_macro_tmp_5346;
  chpl____wide_object chpl_macro_tmp_5347;
  chpl____wide__nilType chpl_macro_tmp_5348;
  chpl____wide_object chpl_macro_tmp_5349;
  chpl____wide__ref_c_fn_ptr chpl_macro_tmp_5350;
  chpl____wide__ref__wide_chpl_ModuleDeinit chpl_macro_tmp_5351;
  chpl__class_localson_fn119_object chpl_macro_tmp_5352;
  chpl____wide_object chpl_macro_tmp_5353;
  chpl____wide__nilType chpl_macro_tmp_5354;
  chpl____wide_object chpl_macro_tmp_5355;
  chpl____wide__nilType chpl_macro_tmp_5356;
  chpl____wide_chpl_ModuleDeinit chpl_macro_tmp_5357;
  chpl____wide__ref__wide_chpl_ModuleDeinit chpl_macro_tmp_5358;
  chpl_macro_tmp_5346.locale = (&chpl_moduleDeinitFuns)->locale;
  chpl_macro_tmp_5346.addr = &(((&chpl_moduleDeinitFuns)->addr)->value);
  chpl_gen_comm_get(((void*)(&T)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5346).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5346).addr, sizeof(chpl____wide_chpl_ModuleDeinit), -1, COMMID(7), INT64(1695), INT64(2));
  prev = T;
  chpl_macro_tmp_5347.locale = (&T)->locale;
  chpl_macro_tmp_5347.addr = ((object)((&T)->addr));
  call_tmp2 = chpl_macro_tmp_5347;
  chpl_macro_tmp_5348.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5348.addr = nil;
  chpl_macro_tmp_5349.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5349.addr = NULL;
  T3 = chpl_macro_tmp_5349;
  T2 = (((&call_tmp2)->addr != (&T3)->addr) || ((!(! (&call_tmp2)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp2)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&T3)->locale), INT64(0), INT32(0)))));
  while (T2) {
    curr = prev;
    chpl_macro_tmp_5350.locale = (&curr)->locale;
    chpl_macro_tmp_5350.addr = &(((&curr)->addr)->deinitFun);
    chpl_gen_comm_get(((void*)(&T4)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5350).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5350).addr, sizeof(c_fn_ptr), -1, COMMID(1), INT64(153), INT64(38));
    chpl_execute_module_deinit(T4);
    chpl_macro_tmp_5351.locale = (&curr)->locale;
    chpl_macro_tmp_5351.addr = &(((&curr)->addr)->prevModule);
    chpl_gen_comm_get(((void*)(&coerce_tmp)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5351).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5351).addr, sizeof(chpl____wide_chpl_ModuleDeinit), -1, COMMID(2), INT64(154), INT64(38));
    prev = coerce_tmp;
    call_tmp3 = (&curr)->locale;
    rvfDerefTmp = curr;
    isdirect = chpl_doDirectExecuteOn(&call_tmp3);
    if (isdirect) {
      on_fn129(rvfDerefTmp);
    } else {
      _args_foron_fn = ((_class_localson_fn119)(&chpl_macro_tmp_5352));
      (_args_foron_fn)->_0_rvfDerefTmp = call_tmp3;
      (_args_foron_fn)->_1_rvfDerefTmp = rvfDerefTmp;
      _args_vforon_fn = ((void*)(_args_foron_fn));
      /*** wrapon_fn111 ***/ chpl_executeOn(&call_tmp3, INT32(176), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn119_object), INT64(1227), INT32(2));
    }
    chpl_macro_tmp_5353.locale = (&coerce_tmp)->locale;
    chpl_macro_tmp_5353.addr = ((object)((&coerce_tmp)->addr));
    call_tmp4 = chpl_macro_tmp_5353;
    chpl_macro_tmp_5354.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5354.addr = nil;
    chpl_macro_tmp_5355.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5355.addr = NULL;
    T5 = chpl_macro_tmp_5355;
    T2 = (((&call_tmp4)->addr != (&T5)->addr) || ((!(! (&call_tmp4)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp4)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&T5)->locale), INT64(0), INT32(0)))));
  }
  chpl_macro_tmp_5356.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5356.addr = nil;
  chpl_macro_tmp_5357.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5357.addr = NULL;
  T6 = chpl_macro_tmp_5357;
  chpl_macro_tmp_5358.locale = (&chpl_moduleDeinitFuns)->locale;
  chpl_macro_tmp_5358.addr = &(((&chpl_moduleDeinitFuns)->addr)->value);
  chpl_gen_comm_put(((void*)(&T6)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5358).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5358).addr, sizeof(chpl____wide_chpl_ModuleDeinit), -1, COMMID(3), INT64(158), INT64(38));
  return;
}

