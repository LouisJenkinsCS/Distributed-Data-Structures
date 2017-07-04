/* ChapelIteratorSupport.chpl:38 */
static void chpl__init_ChapelIteratorSupport(int64_t _ln,
                                             int32_t _fn) {
  _ref_int32_t refIndentLevel = NULL;
  if (chpl__init_ChapelIteratorSupport_p) {
    goto _exit_chpl__init_ChapelIteratorSupport;
  }
  printModuleInit("%*s\n", "ChapelIteratorSupport", INT64(21));
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_ChapelIteratorSupport_p = UINT8(true);
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_ChapelIteratorSupport:;
  return;
}

/* ChapelIteratorSupport.chpl:91 */
static void chpl___ASSIGN_6(_ref__ir_blk__ref__array_DefaultRectangularArr__remoteAccessData_Bitmap_1_int64_t_F_F_1_int64_t_F_int64_t ic,
                            _ref__tuple_1_star_int64_t x) {
  _ir_blk__ref__array_DefaultRectangularArr__remoteAccessData_Bitmap_1_int64_t_F_F_1_int64_t_F_int64_t coerce_tmp;
  _array_DefaultRectangularArr__remoteAccessData_Bitmap_1_int64_t_F_F_1_int64_t_F_int64_t T;
  _array_DefaultRectangularArr__remoteAccessData_Bitmap_1_int64_t_F_F_1_int64_t_F_int64_t T2;
  _array_DefaultRectangularArr__remoteAccessData_Bitmap_1_int64_t_F_F_1_int64_t_F_int64_t this12;
  chpl____wide_DefaultRectangularArr__remoteAccessData_Bitmap_1_int64_t_F_F_1_int64_t_F_int64_t ret = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr__remoteAccessData_Bitmap_1_int64_t_F_F_1_int64_t_F_int64_t this13 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularDom_1_int64_t_F coerce_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularDom_1_int64_t_F _ic__F1_viewDom = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr__remoteAccessData_Bitmap_1_int64_t_F_F_1_int64_t_F_int64_t info = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp2;
  int64_t call_tmp3;
  int64_t call_tmp4;
  int64_t call_tmp5;
  int64_t _ic__F1_high;
  int64_t _ic__F2_stride;
  int64_t i;
  chpl____wide__ddata__remoteAccessData_Bitmap_1_int64_t_F_F coerce_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__remoteAccessData_Bitmap_1_int64_t_F_F call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__tuple_1_star_int64_t e = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_598;
  chpl____wide__ref__wide__ddata__remoteAccessData_Bitmap_1_int64_t_F_F chpl_macro_tmp_599;
  chpl____wide__ref__remoteAccessData_Bitmap_1_int64_t_F_F chpl_macro_tmp_600;
  chpl____wide__ref__tuple_1_star_int64_t chpl_macro_tmp_601;
  coerce_tmp = *(ic);
  T2 = (&coerce_tmp)->F0_this;
  T = T2;
  this12 = T;
  ret = (&this12)->_instance;
  this13 = ret;
  chpl_macro_tmp_598.locale = (&this13)->locale;
  chpl_macro_tmp_598.addr = &(((&this13)->addr)->dom);
  chpl_gen_comm_get(((void*)(&coerce_tmp2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_598).locale), INT64(0), INT32(0)), (chpl_macro_tmp_598).addr, sizeof(chpl____wide_DefaultRectangularDom_1_int64_t_F), -1, COMMID(0), INT64(92), INT64(16));
  _ic__F1_viewDom = coerce_tmp2;
  info = ret;
  call_tmp2 = dsiLow(coerce_tmp2);
  call_tmp3 = dsiLow(_ic__F1_viewDom);
  call_tmp4 = (((int64_t)((call_tmp3 + INT64(1)))) - call_tmp2);
  call_tmp5 = dsiNumIndices(_ic__F1_viewDom);
  _ic__F1_high = ((int64_t)((call_tmp2 + ((int64_t)((((int64_t)((call_tmp5 - INT64(1)))) * call_tmp4))))));
  _ic__F2_stride = call_tmp4;
  chpl_macro_tmp_599.locale = (&info)->locale;
  chpl_macro_tmp_599.addr = &(((&info)->addr)->shiftedData);
  chpl_gen_comm_get(((void*)(&coerce_tmp3)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_599).locale), INT64(0), INT32(0)), (chpl_macro_tmp_599).addr, sizeof(chpl____wide__ddata__remoteAccessData_Bitmap_1_int64_t_F_F), -1, COMMID(1), INT64(92), INT64(16));
  for (i = call_tmp2; ((i <= _ic__F1_high)); i += _ic__F2_stride) {
    chpl_macro_tmp_600.locale = (&coerce_tmp3)->locale;
    chpl_macro_tmp_600.addr = ((&coerce_tmp3)->addr + i);
    call_tmp6 = chpl_macro_tmp_600;
    chpl_macro_tmp_601.locale = (call_tmp6).locale;
    chpl_macro_tmp_601.addr = &(((call_tmp6).addr)->blk);
    e = chpl_macro_tmp_601;
    chpl_gen_comm_put(((void*)(x)), chpl_nodeFromLocaleID(&((e).locale), INT64(0), INT32(0)), (e).addr, sizeof(_tuple_1_star_int64_t), -1, COMMID(2), INT64(93), INT64(16));
  }
  return;
}

/* ChapelIteratorSupport.chpl:91 */
static void chpl___ASSIGN_5(_ref__ir_blk__ref__array_DefaultRectangularArr__remoteAccessData__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F_F_1_int64_t_F_int64_t ic,
                            _ref__tuple_1_star_int64_t x) {
  _ir_blk__ref__array_DefaultRectangularArr__remoteAccessData__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F_F_1_int64_t_F_int64_t coerce_tmp;
  _array_DefaultRectangularArr__remoteAccessData__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F_F_1_int64_t_F_int64_t T;
  _array_DefaultRectangularArr__remoteAccessData__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F_F_1_int64_t_F_int64_t T2;
  _array_DefaultRectangularArr__remoteAccessData__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F_F_1_int64_t_F_int64_t this12;
  chpl____wide_DefaultRectangularArr__remoteAccessData__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F_F_1_int64_t_F_int64_t ret = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr__remoteAccessData__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F_F_1_int64_t_F_int64_t this13 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularDom_1_int64_t_F coerce_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularDom_1_int64_t_F _ic__F1_viewDom = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_DefaultRectangularArr__remoteAccessData__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F_F_1_int64_t_F_int64_t info = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp2;
  int64_t call_tmp3;
  int64_t call_tmp4;
  int64_t call_tmp5;
  int64_t _ic__F1_high;
  int64_t _ic__F2_stride;
  int64_t i;
  chpl____wide__ddata__remoteAccessData__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F_F coerce_tmp3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__remoteAccessData__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F_F call_tmp6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__tuple_1_star_int64_t e = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide_DefaultRectangularDom_1_int64_t_F chpl_macro_tmp_602;
  chpl____wide__ref__wide__ddata__remoteAccessData__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F_F chpl_macro_tmp_603;
  chpl____wide__ref__remoteAccessData__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F_F chpl_macro_tmp_604;
  chpl____wide__ref__tuple_1_star_int64_t chpl_macro_tmp_605;
  coerce_tmp = *(ic);
  T2 = (&coerce_tmp)->F0_this;
  T = T2;
  this12 = T;
  ret = (&this12)->_instance;
  this13 = ret;
  chpl_macro_tmp_602.locale = (&this13)->locale;
  chpl_macro_tmp_602.addr = &(((&this13)->addr)->dom);
  chpl_gen_comm_get(((void*)(&coerce_tmp2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_602).locale), INT64(0), INT32(0)), (chpl_macro_tmp_602).addr, sizeof(chpl____wide_DefaultRectangularDom_1_int64_t_F), -1, COMMID(3), INT64(92), INT64(16));
  _ic__F1_viewDom = coerce_tmp2;
  info = ret;
  call_tmp2 = dsiLow(coerce_tmp2);
  call_tmp3 = dsiLow(_ic__F1_viewDom);
  call_tmp4 = (((int64_t)((call_tmp3 + INT64(1)))) - call_tmp2);
  call_tmp5 = dsiNumIndices(_ic__F1_viewDom);
  _ic__F1_high = ((int64_t)((call_tmp2 + ((int64_t)((((int64_t)((call_tmp5 - INT64(1)))) * call_tmp4))))));
  _ic__F2_stride = call_tmp4;
  chpl_macro_tmp_603.locale = (&info)->locale;
  chpl_macro_tmp_603.addr = &(((&info)->addr)->shiftedData);
  chpl_gen_comm_get(((void*)(&coerce_tmp3)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_603).locale), INT64(0), INT32(0)), (chpl_macro_tmp_603).addr, sizeof(chpl____wide__ddata__remoteAccessData__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_F_F), -1, COMMID(4), INT64(92), INT64(16));
  for (i = call_tmp2; ((i <= _ic__F1_high)); i += _ic__F2_stride) {
    chpl_macro_tmp_604.locale = (&coerce_tmp3)->locale;
    chpl_macro_tmp_604.addr = ((&coerce_tmp3)->addr + i);
    call_tmp6 = chpl_macro_tmp_604;
    chpl_macro_tmp_605.locale = (call_tmp6).locale;
    chpl_macro_tmp_605.addr = &(((call_tmp6).addr)->blk);
    e = chpl_macro_tmp_605;
    chpl_gen_comm_put(((void*)(x)), chpl_nodeFromLocaleID(&((e).locale), INT64(0), INT32(0)), (e).addr, sizeof(_tuple_1_star_int64_t), -1, COMMID(5), INT64(93), INT64(16));
  }
  return;
}

