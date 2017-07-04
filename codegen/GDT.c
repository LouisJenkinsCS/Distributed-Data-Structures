/* GDT.chpl:1 */
static void chpl__init_GDT(int64_t _ln_chpl,
                           int32_t _fn_chpl) {
  _ref_int32_t refIndentLevel_chpl = NULL;
  int64_t tmp_chpl;
  chpl_bool call_tmp_chpl;
  chpl_bool call_tmp_chpl2;
  c_string call_tmp_chpl3;
  chpl_bool tmp_chpl2;
  chpl_bool call_tmp_chpl4;
  chpl_bool call_tmp_chpl5;
  c_string call_tmp_chpl6;
  chpl_bool tmp_chpl3;
  chpl_bool call_tmp_chpl7;
  chpl_bool call_tmp_chpl8;
  c_string call_tmp_chpl9;
  chpl_bool tmp_chpl4;
  chpl_bool call_tmp_chpl10;
  chpl_bool call_tmp_chpl11;
  c_string call_tmp_chpl12;
  int64_t tmp_chpl5;
  chpl_bool call_tmp_chpl13;
  chpl_bool call_tmp_chpl14;
  c_string call_tmp_chpl15;
  if (chpl__init_GDT_p) {
    goto _exit_chpl__init_GDT_chpl;
  }
  printModuleInit("%*s\n", "GDT", INT64(3));
  refIndentLevel_chpl = &moduleInitLevel;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_GDT_p = UINT8(true);
  {
    chpl__init_Bitmap(INT64(1), INT32(56));
    chpl__init_CyclicDist(INT64(1), INT32(56));
    chpl__init_Time(INT64(1), INT32(56));
  }
  call_tmp_chpl = chpl_config_has_value("GDT_NUM_ENTRIES", "GDT");
  call_tmp_chpl2 = (! call_tmp_chpl);
  if (call_tmp_chpl2) {
    tmp_chpl = INT64(1024);
  } else {
    call_tmp_chpl3 = chpl_config_get_value("GDT_NUM_ENTRIES", "GDT");
    tmp_chpl = _command_line_cast5(call_tmp_chpl3);
  }
  GDT_NUM_ENTRIES_chpl = tmp_chpl;
  chpl_comm_broadcast_private(INT64(33), sizeof(int64_t), -1);
  call_tmp_chpl4 = chpl_config_has_value("isGDT", "GDT");
  call_tmp_chpl5 = (! call_tmp_chpl4);
  if (call_tmp_chpl5) {
    tmp_chpl2 = UINT8(false);
  } else {
    call_tmp_chpl6 = chpl_config_get_value("isGDT", "GDT");
    tmp_chpl2 = _command_line_cast19(call_tmp_chpl6);
  }
  isGDT_chpl = tmp_chpl2;
  chpl_comm_broadcast_private(INT64(34), sizeof(chpl_bool), -1);
  call_tmp_chpl7 = chpl_config_has_value("isSync", "GDT");
  call_tmp_chpl8 = (! call_tmp_chpl7);
  if (call_tmp_chpl8) {
    tmp_chpl3 = UINT8(false);
  } else {
    call_tmp_chpl9 = chpl_config_get_value("isSync", "GDT");
    tmp_chpl3 = _command_line_cast20(call_tmp_chpl9);
  }
  isSync_chpl = tmp_chpl3;
  chpl_comm_broadcast_private(INT64(35), sizeof(chpl_bool), -1);
  call_tmp_chpl10 = chpl_config_has_value("logNodes", "GDT");
  call_tmp_chpl11 = (! call_tmp_chpl10);
  if (call_tmp_chpl11) {
    tmp_chpl4 = UINT8(false);
  } else {
    call_tmp_chpl12 = chpl_config_get_value("logNodes", "GDT");
    tmp_chpl4 = _command_line_cast3(call_tmp_chpl12);
  }
  logNodes_chpl = tmp_chpl4;
  chpl_comm_broadcast_private(INT64(36), sizeof(chpl_bool), -1);
  call_tmp_chpl13 = chpl_config_has_value("nTrials", "GDT");
  call_tmp_chpl14 = (! call_tmp_chpl13);
  if (call_tmp_chpl14) {
    tmp_chpl5 = INT64(4);
  } else {
    call_tmp_chpl15 = chpl_config_get_value("nTrials", "GDT");
    tmp_chpl5 = _command_line_cast2(call_tmp_chpl15);
  }
  nTrials_chpl = tmp_chpl5;
  chpl_comm_broadcast_private(INT64(37), sizeof(int64_t), -1);
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_GDT_chpl:;
  return;
}

/* GDT.chpl:17 */
static GDT_FCHGlobalNode_chpl _construct_GDT_chpl(_ref__domain_DefaultRectangularDom_1_int64_t_F gdtSpace_chpl,
                                                  _ref__domain_CyclicDom_1_int64_t_F locDom_chpl,
                                                  _ref__array_CyclicArr__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F gdtEntries_chpl,
                                                  _ref__array_CyclicArr_Bitmap_1_int64_t_F gdtBitmap_chpl,
                                                  GDT_FCHGlobalNode_chpl meme_chpl) {
  GDT_FCHGlobalNode_chpl this_chpl6 = NULL;
  object tmp_chpl = NULL;
  this_chpl6 = meme_chpl;
  tmp_chpl = &((this_chpl6)->super_chpl);
  _construct_object(tmp_chpl);
  (this_chpl6)->gdtSpace_chpl = *(gdtSpace_chpl);
  (this_chpl6)->locDom_chpl = *(locDom_chpl);
  (this_chpl6)->gdtEntries_chpl = *(gdtEntries_chpl);
  (this_chpl6)->gdtBitmap_chpl = *(gdtBitmap_chpl);
  return this_chpl6;
}

/* GDT.chpl:17 */
static void chpl__auto_destroy_GDT(chpl____wide_GDT_FCHGlobalNode this_chpl6) {
  _array_CyclicArr_Bitmap_1_int64_t_F _field_destructor_tmp__chpl;
  _array_CyclicArr_Bitmap_1_int64_t_F tmp_chpl;
  _array_CyclicArr__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F _field_destructor_tmp__chpl2;
  _array_CyclicArr__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F tmp_chpl2;
  _domain_CyclicDom_1_int64_t_F _field_destructor_tmp__chpl3;
  _domain_CyclicDom_1_int64_t_F tmp_chpl3;
  _domain_DefaultRectangularDom_1_int64_t_F _field_destructor_tmp__chpl4;
  _domain_DefaultRectangularDom_1_int64_t_F tmp_chpl4;
  chpl____wide__ref__wide__array_CyclicArr_Bitmap_1_int64_t_F chpl_macro_tmp_5676;
  chpl____wide__ref__wide__array_CyclicArr__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F chpl_macro_tmp_5677;
  chpl____wide__ref__domain_CyclicDom_1_int64_t_F chpl_macro_tmp_5678;
  chpl____wide__ref__domain_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_5679;
  chpl_macro_tmp_5676.locale = (&this_chpl6)->locale;
  chpl_macro_tmp_5676.addr = &(((&this_chpl6)->addr)->gdtBitmap_chpl);
  chpl_gen_comm_get(((void*)(&tmp_chpl)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5676).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5676).addr, sizeof(_array_CyclicArr_Bitmap_1_int64_t_F), -1, COMMID(0), INT64(22), INT64(56));
  _field_destructor_tmp__chpl = tmp_chpl;
  chpl__autoDestroy31(&_field_destructor_tmp__chpl);
  chpl_macro_tmp_5677.locale = (&this_chpl6)->locale;
  chpl_macro_tmp_5677.addr = &(((&this_chpl6)->addr)->gdtEntries_chpl);
  chpl_gen_comm_get(((void*)(&tmp_chpl2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5677).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5677).addr, sizeof(_array_CyclicArr__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F), -1, COMMID(1), INT64(21), INT64(56));
  _field_destructor_tmp__chpl2 = tmp_chpl2;
  chpl__autoDestroy30(&_field_destructor_tmp__chpl2);
  chpl_macro_tmp_5678.locale = (&this_chpl6)->locale;
  chpl_macro_tmp_5678.addr = &(((&this_chpl6)->addr)->locDom_chpl);
  chpl_gen_comm_get(((void*)(&tmp_chpl3)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5678).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5678).addr, sizeof(_domain_CyclicDom_1_int64_t_F), -1, COMMID(2), INT64(20), INT64(56));
  _field_destructor_tmp__chpl3 = tmp_chpl3;
  chpl__autoDestroy4(&_field_destructor_tmp__chpl3);
  chpl_macro_tmp_5679.locale = (&this_chpl6)->locale;
  chpl_macro_tmp_5679.addr = &(((&this_chpl6)->addr)->gdtSpace_chpl);
  chpl_gen_comm_get(((void*)(&tmp_chpl4)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5679).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5679).addr, sizeof(_domain_DefaultRectangularDom_1_int64_t_F), -1, COMMID(3), INT64(19), INT64(56));
  _field_destructor_tmp__chpl4 = tmp_chpl4;
  chpl__autoDestroy5(&_field_destructor_tmp__chpl4);
  return;
}

/* GDT.chpl:24 */
static uint64_t register_chpl(GDT_FCHGlobalNode_chpl this_chpl6,
                              chpl____wide_FCHGlobalNode entry_chpl) {
  int32_t local_c_sublocid_any_chpl;
  _domain_CyclicDom_1_int64_t_F call_tmp_chpl;
  _domain_CyclicDom_1_int64_t_F ret_tmp_chpl;
  _ref__domain_CyclicDom_1_int64_t_F ret_to_arg_ref_tmp__chpl = NULL;
  _domain_DefaultRectangularDom_1_int64_t_T call_tmp_chpl2;
  _domain_DefaultRectangularDom_1_int64_t_T ret_tmp_chpl2;
  _ref__domain_DefaultRectangularDom_1_int64_t_T ret_to_arg_ref_tmp__chpl2 = NULL;
  int64_t call_tmp_chpl3;
  _ref__array_CyclicArr_Bitmap_1_int64_t_F call_tmp_chpl4 = NULL;
  _tuple_1_star_int64_t this_chpl7;
  CyclicArr_Bitmap_1_int64_t_F_chpl call_tmp_chpl5 = NULL;
  chpl____wide__ref_Bitmap call_tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp_chpl7;
  int64_t call_tmp_chpl8;
  _domain_CyclicDom_1_int64_t_F call_tmp_chpl9;
  _domain_CyclicDom_1_int64_t_F ret_tmp_chpl3;
  _ref__domain_CyclicDom_1_int64_t_F ret_to_arg_ref_tmp__chpl3 = NULL;
  _domain_DefaultRectangularDom_1_int64_t_T call_tmp_chpl10;
  _domain_DefaultRectangularDom_1_int64_t_T ret_tmp_chpl4;
  _ref__domain_DefaultRectangularDom_1_int64_t_T ret_to_arg_ref_tmp__chpl4 = NULL;
  int64_t call_tmp_chpl11;
  _ref__array_CyclicArr__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F call_tmp_chpl12 = NULL;
  _tuple_1_star_int64_t this_chpl8;
  CyclicArr__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F_chpl call_tmp_chpl13 = NULL;
  int64_t coerce_tmp_chpl;
  chpl____wide__ref__wide__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t call_tmp_chpl14 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t call_tmp_chpl15 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t ret_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ddata_FCHGlobalNode coerce_tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide_FCHGlobalNode call_tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t _autoCopy_tmp__chpl;
  chpl____wide_locale call_tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp_chpl18;
  uint64_t call_tmp_chpl19;
  chpl____wide__ref__wide_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t chpl_macro_tmp_5680;
  chpl____wide__ref__wide__ddata_FCHGlobalNode chpl_macro_tmp_5681;
  chpl____wide__ref__wide_FCHGlobalNode chpl_macro_tmp_5682;
  local_c_sublocid_any_chpl = c_sublocid_any;
  ret_to_arg_ref_tmp__chpl = &ret_tmp_chpl;
  _dom10(&((this_chpl6)->gdtBitmap_chpl), ret_to_arg_ref_tmp__chpl);
  call_tmp_chpl = ret_tmp_chpl;
  ret_to_arg_ref_tmp__chpl2 = &ret_tmp_chpl2;
  localSubdomain(&call_tmp_chpl, ret_to_arg_ref_tmp__chpl2);
  call_tmp_chpl2 = ret_tmp_chpl2;
  call_tmp_chpl3 = first(&call_tmp_chpl2);
  call_tmp_chpl4 = &((this_chpl6)->gdtBitmap_chpl);
  *(this_chpl7 + INT64(0)) = call_tmp_chpl3;
  call_tmp_chpl5 = chpl_getPrivatizedCopy8((call_tmp_chpl4)->_pid);
  call_tmp_chpl6 = dsiAccess_chpl2(call_tmp_chpl5, &this_chpl7);
  call_tmp_chpl7 = next_chpl(call_tmp_chpl6);
  call_tmp_chpl8 = (call_tmp_chpl7 + INT64(1));
  ret_to_arg_ref_tmp__chpl3 = &ret_tmp_chpl3;
  _dom5(&((this_chpl6)->gdtEntries_chpl), ret_to_arg_ref_tmp__chpl3);
  call_tmp_chpl9 = ret_tmp_chpl3;
  ret_to_arg_ref_tmp__chpl4 = &ret_tmp_chpl4;
  localSubdomain(&call_tmp_chpl9, ret_to_arg_ref_tmp__chpl4);
  call_tmp_chpl10 = ret_tmp_chpl4;
  call_tmp_chpl11 = first(&call_tmp_chpl10);
  call_tmp_chpl12 = &((this_chpl6)->gdtEntries_chpl);
  *(this_chpl8 + INT64(0)) = call_tmp_chpl11;
  coerce_tmp_chpl = (call_tmp_chpl12)->_pid;
  call_tmp_chpl13 = chpl_getPrivatizedCopy(coerce_tmp_chpl);
  call_tmp_chpl14 = dsiAccess_chpl(call_tmp_chpl13, &this_chpl8);
  chpl_macro_tmp_5680.locale = (call_tmp_chpl14).locale;
  chpl_macro_tmp_5680.addr = &(((call_tmp_chpl14).addr)->_instance);
  chpl_gen_comm_get(((void*)(&ret_chpl)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5680).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5680).addr, sizeof(chpl____wide_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t), -1, COMMID(4), INT64(27), INT64(56));
  call_tmp_chpl15 = ret_chpl;
  chpl_macro_tmp_5681.locale = (&call_tmp_chpl15)->locale;
  chpl_macro_tmp_5681.addr = &(((&call_tmp_chpl15)->addr)->shiftedData);
  chpl_gen_comm_get(((void*)(&coerce_tmp_chpl2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5681).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5681).addr, sizeof(chpl____wide__ddata_FCHGlobalNode), -1, COMMID(5), INT64(27), INT64(56));
  chpl_macro_tmp_5682.locale = (&coerce_tmp_chpl2)->locale;
  chpl_macro_tmp_5682.addr = ((&coerce_tmp_chpl2)->addr + call_tmp_chpl8);
  call_tmp_chpl16 = chpl_macro_tmp_5682;
  chpl_gen_comm_put(((void*)(&entry_chpl)), chpl_nodeFromLocaleID(&((call_tmp_chpl16).locale), INT64(0), INT32(0)), (call_tmp_chpl16).addr, sizeof(chpl____wide_FCHGlobalNode), -1, COMMID(6), INT64(27), INT64(56));
  _autoCopy_tmp__chpl = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any_chpl);
  call_tmp_chpl17 = chpl_localeID_to_locale(&_autoCopy_tmp__chpl);
  call_tmp_chpl18 = id(call_tmp_chpl17);
  call_tmp_chpl19 = ((uint64_t)((((int64_t)((call_tmp_chpl18 << INT64(32)))) | call_tmp_chpl8)));
  chpl__autoDestroy6(&call_tmp_chpl10);
  chpl__autoDestroy4(&call_tmp_chpl9);
  chpl__autoDestroy6(&call_tmp_chpl2);
  chpl__autoDestroy4(&call_tmp_chpl);
  return call_tmp_chpl19;
}

