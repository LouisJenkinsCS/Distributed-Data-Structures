/* ChapelRange.chpl:86 */
static void chpl__init_ChapelRange(int64_t _ln,
                                   int32_t _fn) {
  _ref_int32_t refIndentLevel = NULL;
  if (chpl__init_ChapelRange_p) {
    goto _exit_chpl__init_ChapelRange;
  }
  printModuleInit("%*s\n", "ChapelRange", INT64(11));
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_ChapelRange_p = UINT8(true);
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_ChapelRange:;
  return;
}

/* ChapelRange.chpl:139 */
static void _construct_range2(int64_t _low,
                              int64_t _high,
                              int64_t _alignment,
                              chpl_bool _aligned,
                              _ref_range_int64_t_boundedLow_F meme,
                              _ref_range_int64_t_boundedLow_F _retArg) {
  range_int64_t_boundedLow_F this12;
  this12 = *(meme);
  (&this12)->_low = _low;
  (&this12)->_high = _high;
  (&this12)->_alignment = _alignment;
  (&this12)->_aligned = _aligned;
  *(_retArg) = this12;
  return;
}

/* ChapelRange.chpl:139 */
static void _construct_range3(int64_t _low,
                              int64_t _high,
                              int64_t _alignment,
                              chpl_bool _aligned,
                              _ref_range_int64_t_bounded_F meme,
                              _ref_range_int64_t_bounded_F _retArg) {
  range_int64_t_bounded_F this12;
  this12 = *(meme);
  (&this12)->_low = _low;
  (&this12)->_high = _high;
  (&this12)->_alignment = _alignment;
  (&this12)->_aligned = _aligned;
  *(_retArg) = this12;
  return;
}

/* ChapelRange.chpl:139 */
static void _construct_range(int64_t _low,
                             int64_t _high,
                             int64_t _stride,
                             int64_t _alignment,
                             chpl_bool _aligned,
                             _ref_range_int64_t_bounded_T meme,
                             _ref_range_int64_t_bounded_T _retArg) {
  range_int64_t_bounded_T this12;
  this12 = *(meme);
  (&this12)->_low = _low;
  (&this12)->_high = _high;
  (&this12)->_stride = _stride;
  (&this12)->_alignment = _alignment;
  (&this12)->_aligned = _aligned;
  *(_retArg) = this12;
  return;
}

/* ChapelRange.chpl:169 */
static void range2(int64_t _low,
                   int64_t _high,
                   int64_t _stride,
                   int64_t _alignment,
                   chpl_bool _aligned,
                   _ref_range_int64_t_boundedLow_F _retArg) {
  range_int64_t_boundedLow_F this12;
  range_int64_t_boundedLow_F this13;
  range_int64_t_boundedLow_F ret_tmp;
  _ref_range_int64_t_boundedLow_F ret_to_arg_ref_tmp_ = NULL;
  (&this13)->_low = INT64(0);
  (&this13)->_high = INT64(0);
  (&this13)->_alignment = INT64(0);
  (&this13)->_aligned = UINT8(false);
  (&this13)->_low = INT64(1);
  (&this13)->_high = INT64(0);
  (&this13)->_alignment = INT64(0);
  (&this13)->_aligned = UINT8(false);
  ret_to_arg_ref_tmp_ = &ret_tmp;
  _construct_range2(INT64(1), INT64(0), INT64(0), UINT8(false), &this13, ret_to_arg_ref_tmp_);
  this12 = ret_tmp;
  (&this12)->_low = _low;
  (&this12)->_high = _high;
  (&this12)->_alignment = _alignment;
  (&this12)->_aligned = _aligned;
  *(_retArg) = this12;
  return;
}

/* ChapelRange.chpl:169 */
static void range(int64_t _low,
                  int64_t _high,
                  int64_t _stride,
                  int64_t _alignment,
                  chpl_bool _aligned,
                  _ref_range_int64_t_bounded_F _retArg) {
  range_int64_t_bounded_F this12;
  range_int64_t_bounded_F this13;
  range_int64_t_bounded_F ret_tmp;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
  (&this13)->_low = INT64(0);
  (&this13)->_high = INT64(0);
  (&this13)->_alignment = INT64(0);
  (&this13)->_aligned = UINT8(false);
  (&this13)->_low = INT64(1);
  (&this13)->_high = INT64(0);
  (&this13)->_alignment = INT64(0);
  (&this13)->_aligned = UINT8(false);
  ret_to_arg_ref_tmp_ = &ret_tmp;
  _construct_range3(INT64(1), INT64(0), INT64(0), UINT8(false), &this13, ret_to_arg_ref_tmp_);
  this12 = ret_tmp;
  (&this12)->_low = _low;
  (&this12)->_high = _high;
  (&this12)->_alignment = _alignment;
  (&this12)->_aligned = _aligned;
  *(_retArg) = this12;
  return;
}

/* ChapelRange.chpl:169 */
static void range3(int64_t _low,
                   int64_t _high,
                   int64_t _stride,
                   int64_t _alignment,
                   chpl_bool _aligned,
                   _ref_range_int64_t_bounded_T _retArg) {
  range_int64_t_bounded_T this12;
  range_int64_t_bounded_T this13;
  range_int64_t_bounded_T ret_tmp;
  _ref_range_int64_t_bounded_T ret_to_arg_ref_tmp_ = NULL;
  (&this13)->_low = INT64(0);
  (&this13)->_high = INT64(0);
  (&this13)->_stride = INT64(0);
  (&this13)->_alignment = INT64(0);
  (&this13)->_aligned = UINT8(false);
  (&this13)->_low = INT64(1);
  (&this13)->_high = INT64(0);
  (&this13)->_stride = INT64(1);
  (&this13)->_alignment = INT64(0);
  (&this13)->_aligned = UINT8(false);
  ret_to_arg_ref_tmp_ = &ret_tmp;
  _construct_range(INT64(1), INT64(0), INT64(1), INT64(0), UINT8(false), &this13, ret_to_arg_ref_tmp_);
  this12 = ret_tmp;
  (&this12)->_low = _low;
  (&this12)->_high = _high;
  (&this12)->_stride = _stride;
  (&this12)->_alignment = _alignment;
  (&this12)->_aligned = _aligned;
  *(_retArg) = this12;
  return;
}

/* ChapelRange.chpl:204 */
static void chpl_build_bounded_range(int64_t low2,
                                     int64_t high2,
                                     _ref_range_int64_t_bounded_F _retArg) {
  range_int64_t_bounded_F ret_tmp;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
  ret_to_arg_ref_tmp_ = &ret_tmp;
  range(low2, high2, INT64(1), INT64(0), UINT8(false), ret_to_arg_ref_tmp_);
  *(_retArg) = ret_tmp;
  return;
}

/* ChapelRange.chpl:213 */
static void chpl_build_low_bounded_range(int64_t low2,
                                         _ref_range_int64_t_boundedLow_F _retArg) {
  range_int64_t_boundedLow_F ret_tmp;
  _ref_range_int64_t_boundedLow_F ret_to_arg_ref_tmp_ = NULL;
  ret_to_arg_ref_tmp_ = &ret_tmp;
  range2(low2, INT64(0), INT64(1), INT64(0), UINT8(false), ret_to_arg_ref_tmp_);
  *(_retArg) = ret_tmp;
  return;
}

/* ChapelRange.chpl:335 */
static int64_t length2(chpl____wide__ref_range_int64_t_bounded_F this12) {
  int64_t ret;
  int64_t T;
  int64_t T2;
  chpl_bool call_tmp2;
  int64_t T3;
  int64_t T4;
  int64_t call_tmp3;
  chpl____wide__ref_int64_t chpl_macro_tmp_624;
  chpl____wide__ref_int64_t chpl_macro_tmp_625;
  chpl____wide__ref_int64_t chpl_macro_tmp_626;
  chpl____wide__ref_int64_t chpl_macro_tmp_627;
  chpl_macro_tmp_624.locale = (this12).locale;
  chpl_macro_tmp_624.addr = &(((this12).addr)->_low);
  chpl_gen_comm_get(((void*)(&T)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_624).locale), INT64(0), INT32(0)), (chpl_macro_tmp_624).addr, sizeof(int64_t), -1, COMMID(0), INT64(351), INT64(21));
  chpl_macro_tmp_625.locale = (this12).locale;
  chpl_macro_tmp_625.addr = &(((this12).addr)->_high);
  chpl_gen_comm_get(((void*)(&T2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_625).locale), INT64(0), INT32(0)), (chpl_macro_tmp_625).addr, sizeof(int64_t), -1, COMMID(1), INT64(351), INT64(21));
  call_tmp2 = (T > T2);
  if (call_tmp2) {
    ret = INT64(0);
    goto _end_length;
  }
  chpl_macro_tmp_626.locale = (this12).locale;
  chpl_macro_tmp_626.addr = &(((this12).addr)->_high);
  chpl_gen_comm_get(((void*)(&T3)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_626).locale), INT64(0), INT32(0)), (chpl_macro_tmp_626).addr, sizeof(int64_t), -1, COMMID(2), INT64(353), INT64(21));
  chpl_macro_tmp_627.locale = (this12).locale;
  chpl_macro_tmp_627.addr = &(((this12).addr)->_low);
  chpl_gen_comm_get(((void*)(&T4)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_627).locale), INT64(0), INT32(0)), (chpl_macro_tmp_627).addr, sizeof(int64_t), -1, COMMID(3), INT64(353), INT64(21));
  call_tmp3 = (((int64_t)((T3 - T4))) / INT64(1));
  ret = ((int64_t)((call_tmp3 + INT64(1))));
  _end_length:;
  return ret;
}

/* ChapelRange.chpl:335 */
static int64_t length(chpl____wide__ref_range_int64_t_bounded_T this12) {
  int64_t ret;
  int64_t T;
  int64_t T2;
  chpl_bool call_tmp2;
  int64_t ret2;
  int64_t T3;
  int64_t ret3;
  chpl_bool call_tmp3;
  int64_t T4;
  int64_t call_tmp4;
  int64_t T5;
  int64_t T6;
  int64_t T7;
  int64_t call_tmp5;
  int64_t T8;
  int64_t call_tmp6;
  int64_t T9;
  int64_t T10;
  int64_t T11;
  int64_t call_tmp7;
  chpl____wide__ref_int64_t chpl_macro_tmp_628;
  chpl____wide__ref_int64_t chpl_macro_tmp_629;
  chpl____wide__ref_int64_t chpl_macro_tmp_630;
  chpl____wide__ref_int64_t chpl_macro_tmp_631;
  chpl____wide__ref_int64_t chpl_macro_tmp_632;
  chpl____wide__ref_int64_t chpl_macro_tmp_633;
  chpl____wide__ref_int64_t chpl_macro_tmp_634;
  chpl____wide__ref_int64_t chpl_macro_tmp_635;
  chpl____wide__ref_int64_t chpl_macro_tmp_636;
  chpl____wide__ref_int64_t chpl_macro_tmp_637;
  chpl____wide__ref_int64_t chpl_macro_tmp_638;
  chpl_macro_tmp_628.locale = (this12).locale;
  chpl_macro_tmp_628.addr = &(((this12).addr)->_low);
  chpl_gen_comm_get(((void*)(&T)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_628).locale), INT64(0), INT32(0)), (chpl_macro_tmp_628).addr, sizeof(int64_t), -1, COMMID(4), INT64(351), INT64(21));
  chpl_macro_tmp_629.locale = (this12).locale;
  chpl_macro_tmp_629.addr = &(((this12).addr)->_high);
  chpl_gen_comm_get(((void*)(&T2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_629).locale), INT64(0), INT32(0)), (chpl_macro_tmp_629).addr, sizeof(int64_t), -1, COMMID(5), INT64(351), INT64(21));
  call_tmp2 = (T > T2);
  if (call_tmp2) {
    ret = INT64(0);
    goto _end_length;
  }
  chpl_macro_tmp_630.locale = (this12).locale;
  chpl_macro_tmp_630.addr = &(((this12).addr)->_stride);
  chpl_gen_comm_get(((void*)(&T3)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_630).locale), INT64(0), INT32(0)), (chpl_macro_tmp_630).addr, sizeof(int64_t), -1, COMMID(6), INT64(352), INT64(21));
  ret2 = T3;
  call_tmp3 = (ret2 < INT64(0));
  if (call_tmp3) {
    ret3 = (-ret2);
    goto _end__if_fn154;
  } else {
    ret3 = ret2;
    goto _end__if_fn154;
  }
  _end__if_fn154:;
  chpl_macro_tmp_631.locale = (this12).locale;
  chpl_macro_tmp_631.addr = &(((this12).addr)->_stride);
  chpl_gen_comm_get(((void*)(&T4)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_631).locale), INT64(0), INT32(0)), (chpl_macro_tmp_631).addr, sizeof(int64_t), -1, COMMID(7), INT64(353), INT64(21));
  chpl_macro_tmp_632.locale = (this12).locale;
  chpl_macro_tmp_632.addr = &(((this12).addr)->_high);
  chpl_gen_comm_get(((void*)(&T5)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_632).locale), INT64(0), INT32(0)), (chpl_macro_tmp_632).addr, sizeof(int64_t), -1, COMMID(8), INT64(353), INT64(21));
  chpl_macro_tmp_633.locale = (this12).locale;
  chpl_macro_tmp_633.addr = &(((this12).addr)->_alignment);
  chpl_gen_comm_get(((void*)(&T6)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_633).locale), INT64(0), INT32(0)), (chpl_macro_tmp_633).addr, sizeof(int64_t), -1, COMMID(9), INT64(353), INT64(21));
  call_tmp4 = chpl__diffMod(T5, T6, T4);
  chpl_macro_tmp_634.locale = (this12).locale;
  chpl_macro_tmp_634.addr = &(((this12).addr)->_high);
  chpl_gen_comm_get(((void*)(&T7)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_634).locale), INT64(0), INT32(0)), (chpl_macro_tmp_634).addr, sizeof(int64_t), -1, COMMID(10), INT64(353), INT64(21));
  call_tmp5 = (T7 - call_tmp4);
  chpl_macro_tmp_635.locale = (this12).locale;
  chpl_macro_tmp_635.addr = &(((this12).addr)->_stride);
  chpl_gen_comm_get(((void*)(&T8)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_635).locale), INT64(0), INT32(0)), (chpl_macro_tmp_635).addr, sizeof(int64_t), -1, COMMID(11), INT64(353), INT64(21));
  chpl_macro_tmp_636.locale = (this12).locale;
  chpl_macro_tmp_636.addr = &(((this12).addr)->_alignment);
  chpl_gen_comm_get(((void*)(&T9)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_636).locale), INT64(0), INT32(0)), (chpl_macro_tmp_636).addr, sizeof(int64_t), -1, COMMID(12), INT64(353), INT64(21));
  chpl_macro_tmp_637.locale = (this12).locale;
  chpl_macro_tmp_637.addr = &(((this12).addr)->_low);
  chpl_gen_comm_get(((void*)(&T10)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_637).locale), INT64(0), INT32(0)), (chpl_macro_tmp_637).addr, sizeof(int64_t), -1, COMMID(13), INT64(353), INT64(21));
  call_tmp6 = chpl__diffMod(T9, T10, T8);
  chpl_macro_tmp_638.locale = (this12).locale;
  chpl_macro_tmp_638.addr = &(((this12).addr)->_low);
  chpl_gen_comm_get(((void*)(&T11)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_638).locale), INT64(0), INT32(0)), (chpl_macro_tmp_638).addr, sizeof(int64_t), -1, COMMID(14), INT64(353), INT64(21));
  call_tmp7 = (((int64_t)((call_tmp5 - ((int64_t)((T11 + call_tmp6)))))) / ret3);
  ret = ((int64_t)((call_tmp7 + INT64(1))));
  _end_length:;
  return ret;
}

/* ChapelRange.chpl:413 */
static chpl_bool _local_isAmbiguous(chpl____wide__ref_range_int64_t_bounded_T this12) {
  chpl_bool ret;
  _ref_range_int64_t_bounded_T local_this = NULL;
  chpl_bool call_tmp2;
  chpl_bool ret2;
  _ref_range_int64_t_bounded_T local_this2 = NULL;
  chpl_bool call_tmp3;
  int64_t ret3;
  _ref_range_int64_t_bounded_T local_this3 = NULL;
  local_this = (&this12)->addr;
  call_tmp2 = (! (local_this)->_aligned);
  if (call_tmp2) {
    local_this2 = (&this12)->addr;
    call_tmp3 = ((local_this2)->_stride > INT64(1));
    if (call_tmp3) {
      ret2 = UINT8(true);
      goto _end__if_fn360;
    } else {
      local_this3 = (&this12)->addr;
      ret3 = (local_this3)->_stride;
      ret2 = (ret3 < INT64(-1));
      goto _end__if_fn360;
    }
    _end__if_fn360:;
    ret = ret2;
    goto _end__if_fn361;
  } else {
    ret = UINT8(false);
    goto _end__if_fn361;
  }
  _end__if_fn361:;
  return ret;
}

/* ChapelRange.chpl:413 */
static chpl_bool isAmbiguous(chpl____wide__ref_range_int64_t_bounded_T this12) {
  chpl_bool ret;
  chpl_bool T;
  chpl_bool call_tmp2;
  chpl_bool ret2;
  int64_t T2;
  chpl_bool call_tmp3;
  int64_t T3;
  chpl____wide__ref_chpl_bool chpl_macro_tmp_639;
  chpl____wide__ref_int64_t chpl_macro_tmp_640;
  chpl____wide__ref_int64_t chpl_macro_tmp_641;
  chpl_macro_tmp_639.locale = (this12).locale;
  chpl_macro_tmp_639.addr = &(((this12).addr)->_aligned);
  chpl_gen_comm_get(((void*)(&T)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_639).locale), INT64(0), INT32(0)), (chpl_macro_tmp_639).addr, sizeof(chpl_bool), -1, COMMID(15), INT64(414), INT64(21));
  call_tmp2 = (! T);
  if (call_tmp2) {
    chpl_macro_tmp_640.locale = (this12).locale;
    chpl_macro_tmp_640.addr = &(((this12).addr)->_stride);
    chpl_gen_comm_get(((void*)(&T2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_640).locale), INT64(0), INT32(0)), (chpl_macro_tmp_640).addr, sizeof(int64_t), -1, COMMID(16), INT64(414), INT64(21));
    call_tmp3 = (T2 > INT64(1));
    if (call_tmp3) {
      ret2 = UINT8(true);
      goto _end__if_fn360;
    } else {
      chpl_macro_tmp_641.locale = (this12).locale;
      chpl_macro_tmp_641.addr = &(((this12).addr)->_stride);
      chpl_gen_comm_get(((void*)(&T3)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_641).locale), INT64(0), INT32(0)), (chpl_macro_tmp_641).addr, sizeof(int64_t), -1, COMMID(17), INT64(414), INT64(21));
      ret2 = (T3 < INT64(-1));
      goto _end__if_fn360;
    }
    _end__if_fn360:;
    ret = ret2;
    goto _end__if_fn361;
  } else {
    ret = UINT8(false);
    goto _end__if_fn361;
  }
  _end__if_fn361:;
  return ret;
}

/* ChapelRange.chpl:636 */
static void alignHigh(_ref_range_int64_t_bounded_T this12,
                      _ref_range_int64_t_bounded_T _retArg) {
  range_int64_t_bounded_T ret;
  chpl_bool call_tmp2;
  chpl____wide__ref_range_int64_t_bounded_T T = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t ret2;
  int64_t call_tmp3;
  int64_t coerce_tmp;
  int64_t coerce_tmp2;
  int64_t coerce_tmp3;
  chpl____wide__ref_range_int64_t_bounded_T chpl_macro_tmp_642;
  chpl_macro_tmp_642.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_642.addr = this12;
  T = chpl_macro_tmp_642;
  call_tmp2 = isAmbiguous(T);
  if (call_tmp2) {
    chpl_error("alignHigh -- Cannot be applied to a range with ambiguous alignment.", INT64(639), INT32(21));
  }
  ret2 = (this12)->_stride;
  coerce_tmp = (this12)->_high;
  coerce_tmp2 = (this12)->_alignment;
  call_tmp3 = chpl__diffMod(coerce_tmp, coerce_tmp2, ret2);
  coerce_tmp3 = (this12)->_high;
  (this12)->_high = ((int64_t)((coerce_tmp3 - call_tmp3)));
  ret = *(this12);
  *(_retArg) = ret;
  return;
}

/* ChapelRange.chpl:966 */
static void chpl_by_help(_ref_range_int64_t_bounded_F r,
                         int64_t step,
                         _ref_range_int64_t_bounded_T _retArg) {
  int64_t ret;
  int64_t ret2;
  int64_t call_tmp2;
  chpl_bool ret_x1;
  int64_t ret_x2;
  chpl_bool call_tmp3;
  chpl_bool ret_x12;
  int64_t ret_x22;
  chpl_bool call_tmp4;
  chpl_bool ret3;
  int64_t ret4;
  range_int64_t_bounded_T ret_tmp;
  _ref_range_int64_t_bounded_T ret_to_arg_ref_tmp_ = NULL;
  ret = (r)->_low;
  ret2 = (r)->_high;
  call_tmp2 = (INT64(1) * step);
  call_tmp3 = (call_tmp2 > INT64(0));
  if (call_tmp3) {
    ret_x1 = UINT8(true);
    ret_x2 = (r)->_low;
    goto _end__if_fn38;
  } else {
    call_tmp4 = (call_tmp2 < INT64(0));
    if (call_tmp4) {
      ret_x12 = UINT8(true);
      ret_x22 = (r)->_high;
      goto _end__if_fn37;
    } else {
      ret3 = (r)->_aligned;
      ret4 = (r)->_alignment;
      ret_x12 = ret3;
      ret_x22 = ret4;
      goto _end__if_fn37;
    }
    _end__if_fn37:;
    ret_x1 = ret_x12;
    ret_x2 = ret_x22;
    goto _end__if_fn38;
  }
  _end__if_fn38:;
  ret_to_arg_ref_tmp_ = &ret_tmp;
  range3(ret, ret2, call_tmp2, ret_x2, ret_x1, ret_to_arg_ref_tmp_);
  *(_retArg) = ret_tmp;
  return;
}

/* ChapelRange.chpl:1067 */
static void this7(_ref_range_int64_t_bounded_F this12,
                  _ref_range_int64_t_bounded_F other,
                  _ref_range_int64_t_bounded_F _retArg) {
  int64_t coerce_tmp;
  int64_t coerce_tmp2;
  int64_t coerce_tmp3;
  int64_t coerce_tmp4;
  int64_t newlo;
  int64_t ret;
  chpl_bool call_tmp2;
  int64_t ret2;
  chpl_bool call_tmp3;
  chpl_bool ret3;
  chpl_bool call_tmp4;
  chpl_bool ret4;
  chpl_bool coerce_tmp5;
  chpl_bool coerce_tmp6;
  range_int64_t_bounded_F ret_tmp;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
  coerce_tmp = (this12)->_low;
  coerce_tmp2 = (this12)->_high;
  coerce_tmp3 = (other)->_low;
  coerce_tmp4 = (other)->_high;
  call_tmp2 = (coerce_tmp > coerce_tmp3);
  if (call_tmp2) {
    ret = coerce_tmp;
    goto _end__if_fn3;
  } else {
    ret = coerce_tmp3;
    goto _end__if_fn3;
  }
  _end__if_fn3:;
  newlo = ret;
  call_tmp3 = (coerce_tmp2 < coerce_tmp4);
  if (call_tmp3) {
    ret2 = coerce_tmp2;
    goto _end__if_fn2;
  } else {
    ret2 = coerce_tmp4;
    goto _end__if_fn2;
  }
  _end__if_fn2:;
  call_tmp4 = (! UINT8(false));
  if (call_tmp4) {
    coerce_tmp5 = (this12)->_aligned;
    if (coerce_tmp5) {
      ret4 = UINT8(true);
      goto _end__if_fn385;
    } else {
      coerce_tmp6 = (other)->_aligned;
      ret4 = coerce_tmp6;
      goto _end__if_fn385;
    }
    _end__if_fn385:;
    ret3 = ret4;
    goto _end__if_fn386;
  } else {
    ret3 = UINT8(false);
    goto _end__if_fn386;
  }
  _end__if_fn386:;
  ret_to_arg_ref_tmp_ = &ret_tmp;
  range(newlo, ret2, INT64(1), INT64(0), ret3, ret_to_arg_ref_tmp_);
  *(_retArg) = ret_tmp;
  return;
}

/* ChapelRange.chpl:1067 */
static void this6(_ref_range_int64_t_bounded_F this12,
                  _ref_range_int64_t_bounded_T other,
                  _ref_range_int64_t_bounded_T _retArg) {
  chpl_bool ambig;
  _ref_range_int64_t_bounded_T T = NULL;
  chpl_bool call_tmp2;
  chpl____wide__ref_range_int64_t_bounded_T T2 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t ret;
  int64_t ret2;
  chpl_bool call_tmp3;
  _tuple_2_star_int64_t ret_tmp;
  _ref__tuple_2_star_int64_t ret_to_arg_ref_tmp_ = NULL;
  chpl_bool call_tmp4;
  int64_t coerce_tmp;
  int64_t coerce_tmp2;
  int64_t coerce_tmp3;
  int64_t coerce_tmp4;
  int64_t ret3;
  int64_t ret4;
  chpl_bool call_tmp5;
  int64_t newStride;
  int64_t lcm;
  int64_t g;
  int64_t x;
  chpl_bool ret5;
  int64_t ret6;
  chpl_bool call_tmp6;
  int64_t ret7;
  int64_t ret_tmp_x1;
  int64_t ret_tmp_x2;
  _tuple_2_star_int64_t ret_tmp2;
  _ref__tuple_2_star_int64_t ret_to_arg_ref_tmp_2 = NULL;
  int64_t call_tmp7;
  int64_t newlo;
  int64_t ret8;
  chpl_bool call_tmp8;
  int64_t ret9;
  chpl_bool call_tmp9;
  range_int64_t_bounded_T result;
  chpl_bool ret10;
  chpl_bool call_tmp10;
  chpl_bool ret11;
  chpl_bool coerce_tmp5;
  chpl_bool coerce_tmp6;
  range_int64_t_bounded_T ret_tmp3;
  _ref_range_int64_t_bounded_T ret_to_arg_ref_tmp_3 = NULL;
  int64_t coerce_tmp7;
  int64_t call_tmp11;
  int64_t call_tmp12;
  chpl_bool call_tmp13;
  int64_t offset;
  int64_t call_tmp14;
  chpl_bool call_tmp15;
  _ref_int64_t _ref_tmp_ = NULL;
  int64_t call_tmp16;
  chpl____wide__ref_range_int64_t_bounded_T chpl_macro_tmp_643;
  ambig = UINT8(false);
  T = other;
  chpl_macro_tmp_643.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_643.addr = T;
  T2 = chpl_macro_tmp_643;
  call_tmp2 = isAmbiguous(T2);
  if (call_tmp2) {
    ret = (other)->_stride;
    call_tmp3 = (ret < INT64(0));
    if (call_tmp3) {
      ret2 = (-ret);
      goto _end__if_fn154;
    } else {
      ret2 = ret;
      goto _end__if_fn154;
    }
    _end__if_fn154:;
    ret_to_arg_ref_tmp_ = &ret_tmp;
    chpl__extendedEuclidHelper(INT64(1), ret2, ret_to_arg_ref_tmp_);
    call_tmp4 = (*(ret_tmp + INT64(0)) > INT64(1));
    if (call_tmp4) {
      chpl_error("Cannot slice ranges with ambiguous alignments unless their strides are relatively prime.", INT64(1082), INT32(21));
    }
    ambig = UINT8(true);
  }
  coerce_tmp = (this12)->_low;
  coerce_tmp2 = (this12)->_high;
  coerce_tmp3 = (other)->_low;
  coerce_tmp4 = (other)->_high;
  ret3 = (other)->_stride;
  call_tmp5 = (ret3 < INT64(0));
  if (call_tmp5) {
    ret4 = (-ret3);
    goto _end__if_fn1542;
  } else {
    ret4 = ret3;
    goto _end__if_fn1542;
  }
  _end__if_fn1542:;
  newStride = INT64(1);
  lcm = INT64(1);
  g = INT64(1);
  x = INT64(0);
  ret6 = (other)->_stride;
  call_tmp6 = (INT64(1) != ret6);
  if (call_tmp6) {
    ret7 = (other)->_stride;
    ret5 = (INT64(1) != (-ret7));
    goto _end__if_fn384;
  } else {
    ret5 = UINT8(false);
    goto _end__if_fn384;
  }
  _end__if_fn384:;
  if (ret5) {
    ret_to_arg_ref_tmp_2 = &ret_tmp2;
    chpl__extendedEuclidHelper(INT64(1), ret4, ret_to_arg_ref_tmp_2);
    ret_tmp_x1 = *(ret_tmp2 + INT64(0));
    ret_tmp_x2 = *(ret_tmp2 + INT64(1));
    g = ret_tmp_x1;
    x = ret_tmp_x2;
    call_tmp7 = (INT64(1) / ret_tmp_x1);
    lcm = ((int64_t)((call_tmp7 * ret4)));
    newStride = lcm;
  }
  call_tmp8 = (coerce_tmp > coerce_tmp3);
  if (call_tmp8) {
    ret8 = coerce_tmp;
    goto _end__if_fn3;
  } else {
    ret8 = coerce_tmp3;
    goto _end__if_fn3;
  }
  _end__if_fn3:;
  newlo = ret8;
  call_tmp9 = (coerce_tmp2 < coerce_tmp4);
  if (call_tmp9) {
    ret9 = coerce_tmp2;
    goto _end__if_fn2;
  } else {
    ret9 = coerce_tmp4;
    goto _end__if_fn2;
  }
  _end__if_fn2:;
  call_tmp10 = (! ambig);
  if (call_tmp10) {
    coerce_tmp5 = (this12)->_aligned;
    if (coerce_tmp5) {
      ret11 = UINT8(true);
      goto _end__if_fn385;
    } else {
      coerce_tmp6 = (other)->_aligned;
      ret11 = coerce_tmp6;
      goto _end__if_fn385;
    }
    _end__if_fn385:;
    ret10 = ret11;
    goto _end__if_fn386;
  } else {
    ret10 = UINT8(false);
    goto _end__if_fn386;
  }
  _end__if_fn386:;
  ret_to_arg_ref_tmp_3 = &ret_tmp3;
  range3(newlo, ret9, newStride, INT64(0), ret10, ret_to_arg_ref_tmp_3);
  result = ret_tmp3;
  coerce_tmp7 = (this12)->_alignment;
  call_tmp11 = (coerce_tmp7 % INT64(1));
  call_tmp12 = ((other)->_alignment % ret4);
  call_tmp13 = (((int64_t)((((int64_t)((call_tmp12 - call_tmp11))) % g))) != INT64(0));
  if (call_tmp13) {
    (&result)->_low = INT64(1);
    (&result)->_high = INT64(0);
    (&result)->_alignment = INT64(1);
  } else {
    call_tmp14 = (((int64_t)((call_tmp12 - call_tmp11))) * x);
    offset = call_tmp14;
    call_tmp15 = (call_tmp14 < INT64(0));
    if (call_tmp15) {
      _ref_tmp_ = &offset;
      *(_ref_tmp_) += lcm;
    }
    call_tmp16 = (((int64_t)((offset * INT64(1)))) / g);
    (&result)->_alignment = ((int64_t)((call_tmp11 + call_tmp16)));
  }
  *(_retArg) = result;
  return;
}

/* ChapelRange.chpl:1067 */
static void this5(_ref_range_int64_t_bounded_T this12,
                  _ref_range_int64_t_bounded_T other,
                  _ref_range_int64_t_bounded_T _retArg) {
  chpl_bool ambig;
  _ref_range_int64_t_bounded_T T = NULL;
  _ref_range_int64_t_bounded_T T2 = NULL;
  chpl_bool ret;
  chpl_bool T3;
  chpl____wide__ref_range_int64_t_bounded_T T4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp2;
  chpl____wide__ref_range_int64_t_bounded_T T5 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t ret2;
  int64_t ret3;
  chpl_bool call_tmp3;
  int64_t ret4;
  int64_t ret5;
  chpl_bool call_tmp4;
  _tuple_2_star_int64_t ret_tmp;
  _ref__tuple_2_star_int64_t ret_to_arg_ref_tmp_ = NULL;
  chpl_bool call_tmp5;
  int64_t coerce_tmp;
  int64_t coerce_tmp2;
  int64_t ret6;
  int64_t ret7;
  chpl_bool call_tmp6;
  int64_t coerce_tmp3;
  int64_t coerce_tmp4;
  int64_t ret8;
  int64_t ret9;
  chpl_bool call_tmp7;
  int64_t newStride;
  int64_t ret10;
  int64_t lcm;
  int64_t ret11;
  int64_t ret12;
  chpl_bool call_tmp8;
  int64_t g;
  int64_t x;
  chpl_bool ret13;
  int64_t ret14;
  chpl_bool call_tmp9;
  int64_t ret15;
  int64_t ret16;
  int64_t ret_tmp_x1;
  int64_t ret_tmp_x2;
  _tuple_2_star_int64_t ret_tmp2;
  _ref__tuple_2_star_int64_t ret_to_arg_ref_tmp_2 = NULL;
  int64_t call_tmp10;
  int64_t call_tmp11;
  int64_t ret17;
  chpl_bool call_tmp12;
  int64_t newlo;
  int64_t ret18;
  chpl_bool call_tmp13;
  int64_t ret19;
  chpl_bool call_tmp14;
  range_int64_t_bounded_T result;
  chpl_bool ret20;
  chpl_bool call_tmp15;
  chpl_bool ret21;
  chpl_bool coerce_tmp5;
  range_int64_t_bounded_T ret_tmp3;
  _ref_range_int64_t_bounded_T ret_to_arg_ref_tmp_3 = NULL;
  int64_t coerce_tmp6;
  int64_t call_tmp16;
  int64_t coerce_tmp7;
  int64_t call_tmp17;
  chpl_bool call_tmp18;
  int64_t ret22;
  chpl_bool call_tmp19;
  int64_t offset;
  int64_t call_tmp20;
  chpl_bool call_tmp21;
  _ref_int64_t _ref_tmp_ = NULL;
  int64_t call_tmp22;
  chpl____wide__ref_range_int64_t_bounded_T chpl_macro_tmp_644;
  chpl____wide__ref_range_int64_t_bounded_T chpl_macro_tmp_645;
  ambig = UINT8(false);
  T = this12;
  T2 = other;
  chpl_macro_tmp_644.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_644.addr = T;
  T4 = chpl_macro_tmp_644;
  T3 = isAmbiguous(T4);
  if (T3) {
    ret = UINT8(true);
    goto _end__if_fn380;
  } else {
    chpl_macro_tmp_645.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_645.addr = T2;
    T5 = chpl_macro_tmp_645;
    call_tmp2 = isAmbiguous(T5);
    ret = call_tmp2;
    goto _end__if_fn380;
  }
  _end__if_fn380:;
  if (ret) {
    ret2 = (this12)->_stride;
    call_tmp3 = (ret2 < INT64(0));
    if (call_tmp3) {
      ret3 = (-ret2);
      goto _end__if_fn154;
    } else {
      ret3 = ret2;
      goto _end__if_fn154;
    }
    _end__if_fn154:;
    ret4 = (other)->_stride;
    call_tmp4 = (ret4 < INT64(0));
    if (call_tmp4) {
      ret5 = (-ret4);
      goto _end__if_fn1542;
    } else {
      ret5 = ret4;
      goto _end__if_fn1542;
    }
    _end__if_fn1542:;
    ret_to_arg_ref_tmp_ = &ret_tmp;
    chpl__extendedEuclidHelper(ret3, ret5, ret_to_arg_ref_tmp_);
    call_tmp5 = (*(ret_tmp + INT64(0)) > INT64(1));
    if (call_tmp5) {
      chpl_error("Cannot slice ranges with ambiguous alignments unless their strides are relatively prime.", INT64(1082), INT32(21));
    }
    ambig = UINT8(true);
  }
  coerce_tmp = (this12)->_low;
  coerce_tmp2 = (this12)->_high;
  ret6 = (this12)->_stride;
  call_tmp6 = (ret6 < INT64(0));
  if (call_tmp6) {
    ret7 = (-ret6);
    goto _end__if_fn1543;
  } else {
    ret7 = ret6;
    goto _end__if_fn1543;
  }
  _end__if_fn1543:;
  coerce_tmp3 = (other)->_low;
  coerce_tmp4 = (other)->_high;
  ret8 = (other)->_stride;
  call_tmp7 = (ret8 < INT64(0));
  if (call_tmp7) {
    ret9 = (-ret8);
    goto _end__if_fn1544;
  } else {
    ret9 = ret8;
    goto _end__if_fn1544;
  }
  _end__if_fn1544:;
  ret10 = (this12)->_stride;
  newStride = ret10;
  ret11 = (this12)->_stride;
  call_tmp8 = (ret11 < INT64(0));
  if (call_tmp8) {
    ret12 = (-ret11);
    goto _end__if_fn1545;
  } else {
    ret12 = ret11;
    goto _end__if_fn1545;
  }
  _end__if_fn1545:;
  lcm = ret12;
  g = ret12;
  x = INT64(0);
  ret14 = (this12)->_stride;
  call_tmp9 = (ret14 != (other)->_stride);
  if (call_tmp9) {
    ret15 = (this12)->_stride;
    ret16 = (other)->_stride;
    ret13 = (ret15 != (-ret16));
    goto _end__if_fn384;
  } else {
    ret13 = UINT8(false);
    goto _end__if_fn384;
  }
  _end__if_fn384:;
  if (ret13) {
    ret_to_arg_ref_tmp_2 = &ret_tmp2;
    chpl__extendedEuclidHelper(ret7, ret9, ret_to_arg_ref_tmp_2);
    ret_tmp_x1 = *(ret_tmp2 + INT64(0));
    ret_tmp_x2 = *(ret_tmp2 + INT64(1));
    g = ret_tmp_x1;
    x = ret_tmp_x2;
    call_tmp10 = (ret7 / ret_tmp_x1);
    call_tmp11 = (call_tmp10 * ret9);
    lcm = call_tmp11;
    call_tmp12 = ((this12)->_stride > INT64(0));
    if (call_tmp12) {
      ret17 = call_tmp11;
      goto _end__if_fn44;
    } else {
      ret17 = (-call_tmp11);
      goto _end__if_fn44;
    }
    _end__if_fn44:;
    newStride = ret17;
  }
  call_tmp13 = (coerce_tmp > coerce_tmp3);
  if (call_tmp13) {
    ret18 = coerce_tmp;
    goto _end__if_fn3;
  } else {
    ret18 = coerce_tmp3;
    goto _end__if_fn3;
  }
  _end__if_fn3:;
  newlo = ret18;
  call_tmp14 = (coerce_tmp2 < coerce_tmp4);
  if (call_tmp14) {
    ret19 = coerce_tmp2;
    goto _end__if_fn2;
  } else {
    ret19 = coerce_tmp4;
    goto _end__if_fn2;
  }
  _end__if_fn2:;
  call_tmp15 = (! ambig);
  if (call_tmp15) {
    coerce_tmp5 = (this12)->_aligned;
    if (coerce_tmp5) {
      ret21 = UINT8(true);
      goto _end__if_fn385;
    } else {
      ret21 = (other)->_aligned;
      goto _end__if_fn385;
    }
    _end__if_fn385:;
    ret20 = ret21;
    goto _end__if_fn386;
  } else {
    ret20 = UINT8(false);
    goto _end__if_fn386;
  }
  _end__if_fn386:;
  ret_to_arg_ref_tmp_3 = &ret_tmp3;
  range3(newlo, ret19, newStride, INT64(0), ret20, ret_to_arg_ref_tmp_3);
  result = ret_tmp3;
  coerce_tmp6 = (this12)->_alignment;
  call_tmp16 = (coerce_tmp6 % ret7);
  coerce_tmp7 = (other)->_alignment;
  call_tmp17 = (coerce_tmp7 % ret9);
  call_tmp18 = (((int64_t)((((int64_t)((call_tmp17 - call_tmp16))) % g))) != INT64(0));
  if (call_tmp18) {
    (&result)->_low = INT64(1);
    (&result)->_high = INT64(0);
    call_tmp19 = ((this12)->_stride > INT64(0));
    if (call_tmp19) {
      ret22 = INT64(1);
      goto _end__if_fn45;
    } else {
      ret22 = INT64(0);
      goto _end__if_fn45;
    }
    _end__if_fn45:;
    (&result)->_alignment = ret22;
  } else {
    call_tmp20 = (((int64_t)((call_tmp17 - call_tmp16))) * x);
    offset = call_tmp20;
    call_tmp21 = (call_tmp20 < INT64(0));
    if (call_tmp21) {
      _ref_tmp_ = &offset;
      *(_ref_tmp_) += lcm;
    }
    call_tmp22 = (((int64_t)((offset * ret7))) / g);
    (&result)->_alignment = ((int64_t)((call_tmp16 + call_tmp22)));
  }
  *(_retArg) = result;
  return;
}

/* ChapelRange.chpl:1261 */
static void chpl_count_help(_ref_range_int64_t_boundedLow_F r,
                            int64_t count,
                            _ref_range_int64_t_bounded_F _retArg) {
  string local__str_literal_723;
  range_int64_t_bounded_F ret;
  chpl_bool call_tmp2;
  range_int64_t_bounded_F ret_tmp;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
  chpl_bool ret2;
  chpl_bool call_tmp3;
  int64_t call_tmp4;
  int64_t ret3;
  chpl_bool call_tmp5;
  int64_t call_tmp6;
  int64_t coerce_tmp;
  int64_t ret4;
  chpl_bool call_tmp7;
  int64_t call_tmp8;
  range_int64_t_bounded_F ret_tmp2;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_2 = NULL;
  local__str_literal_723 /* "With a negative count, the range must have a last index." */ = _str_literal_723 /* "With a negative count, the range must have a last index." */;
  call_tmp2 = (count == INT64(0));
  if (call_tmp2) {
    ret_to_arg_ref_tmp_ = &ret_tmp;
    range(INT64(1), INT64(0), INT64(1), INT64(0), UINT8(false), ret_to_arg_ref_tmp_);
    ret = ret_tmp;
    goto _end_chpl_count_help;
  }
  call_tmp3 = (! UINT8(false));
  if (call_tmp3) {
    ret2 = (count < INT64(0));
    goto _end__if_fn311;
  } else {
    ret2 = UINT8(false);
    goto _end__if_fn311;
  }
  _end__if_fn311:;
  if (ret2) {
    halt(&local__str_literal_723 /* "With a negative count, the range must have a last index." */, INT64(1282), INT32(21));
  }
  call_tmp4 = (count * INT64(1));
  call_tmp5 = (call_tmp4 > INT64(0));
  if (call_tmp5) {
    ret3 = (r)->_low;
    goto _end__if_fn46;
  } else {
    coerce_tmp = (r)->_high;
    call_tmp6 = chpl__add(coerce_tmp, ((int64_t)((call_tmp4 + INT64(1)))));
    ret3 = call_tmp6;
    goto _end__if_fn46;
  }
  _end__if_fn46:;
  call_tmp7 = (call_tmp4 < INT64(0));
  if (call_tmp7) {
    ret4 = (r)->_high;
    goto _end__if_fn47;
  } else {
    call_tmp8 = chpl__add((r)->_low, ((int64_t)((call_tmp4 - INT64(1)))));
    ret4 = call_tmp8;
    goto _end__if_fn47;
  }
  _end__if_fn47:;
  ret_to_arg_ref_tmp_2 = &ret_tmp2;
  range(ret3, ret4, INT64(1), (r)->_alignment, (r)->_aligned, ret_to_arg_ref_tmp_2);
  ret = ret_tmp2;
  _end_chpl_count_help:;
  *(_retArg) = ret;
  return;
}

/* ChapelRange.chpl:1333 */
static void chpl___POUND_(_ref_range_int64_t_boundedLow_F r,
                          int64_t count,
                          _ref_range_int64_t_bounded_F _retArg) {
  range_int64_t_bounded_F ret_tmp;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
  ret_to_arg_ref_tmp_ = &ret_tmp;
  chpl_count_help(r, count, ret_to_arg_ref_tmp_);
  *(_retArg) = ret_tmp;
  return;
}

/* ChapelRange.chpl:2034 */
static int64_t _local_chpl__mod(int64_t dividend,
                                int64_t modulus) {
  int64_t ret;
  chpl_bool call_tmp2;
  int64_t tmp;
  int64_t call_tmp3;
  chpl_bool call_tmp4;
  _ref_int64_t _ref_tmp_ = NULL;
  call_tmp2 = (modulus < INT64(0));
  if (call_tmp2) {
    ret = (-modulus);
    goto _end__if_fn154;
  } else {
    ret = modulus;
    goto _end__if_fn154;
  }
  _end__if_fn154:;
  modulus = ret;
  call_tmp3 = (dividend % ret);
  tmp = call_tmp3;
  call_tmp4 = (call_tmp3 < INT64(0));
  if (call_tmp4) {
    _ref_tmp_ = &tmp;
    *(_ref_tmp_) += ret;
  }
  return tmp;
}

/* ChapelRange.chpl:2034 */
static int64_t chpl__mod(int64_t dividend,
                         int64_t modulus) {
  int64_t ret;
  chpl_bool call_tmp2;
  int64_t tmp;
  int64_t call_tmp3;
  chpl_bool call_tmp4;
  _ref_int64_t _ref_tmp_ = NULL;
  call_tmp2 = (modulus < INT64(0));
  if (call_tmp2) {
    ret = (-modulus);
    goto _end__if_fn154;
  } else {
    ret = modulus;
    goto _end__if_fn154;
  }
  _end__if_fn154:;
  modulus = ret;
  call_tmp3 = (dividend % ret);
  tmp = call_tmp3;
  call_tmp4 = (call_tmp3 < INT64(0));
  if (call_tmp4) {
    _ref_tmp_ = &tmp;
    *(_ref_tmp_) += ret;
  }
  return tmp;
}

/* ChapelRange.chpl:2061 */
static int64_t _local_chpl__diffMod(int64_t minuend,
                                    int64_t subtrahend,
                                    int64_t modulus) {
  int64_t ret;
  chpl_bool call_tmp2;
  int64_t call_tmp3;
  int64_t call_tmp4;
  int64_t ret2;
  chpl_bool call_tmp5;
  call_tmp2 = (modulus < INT64(0));
  if (call_tmp2) {
    ret = (-modulus);
    goto _end__if_fn154;
  } else {
    ret = modulus;
    goto _end__if_fn154;
  }
  _end__if_fn154:;
  modulus = ret;
  call_tmp3 = _local_chpl__mod(minuend, ret);
  call_tmp4 = _local_chpl__mod(subtrahend, ret);
  call_tmp5 = (call_tmp3 < call_tmp4);
  if (call_tmp5) {
    ret2 = ((int64_t)((ret - ((int64_t)((call_tmp4 - call_tmp3))))));
    goto _end__if_fn60;
  } else {
    ret2 = ((int64_t)((call_tmp3 - call_tmp4)));
    goto _end__if_fn60;
  }
  _end__if_fn60:;
  return ret2;
}

/* ChapelRange.chpl:2061 */
static int64_t chpl__diffMod(int64_t minuend,
                             int64_t subtrahend,
                             int64_t modulus) {
  int64_t ret;
  chpl_bool call_tmp2;
  int64_t call_tmp3;
  int64_t call_tmp4;
  int64_t ret2;
  chpl_bool call_tmp5;
  call_tmp2 = (modulus < INT64(0));
  if (call_tmp2) {
    ret = (-modulus);
    goto _end__if_fn154;
  } else {
    ret = modulus;
    goto _end__if_fn154;
  }
  _end__if_fn154:;
  modulus = ret;
  call_tmp3 = chpl__mod(minuend, ret);
  call_tmp4 = chpl__mod(subtrahend, ret);
  call_tmp5 = (call_tmp3 < call_tmp4);
  if (call_tmp5) {
    ret2 = ((int64_t)((ret - ((int64_t)((call_tmp4 - call_tmp3))))));
    goto _end__if_fn60;
  } else {
    ret2 = ((int64_t)((call_tmp3 - call_tmp4)));
    goto _end__if_fn60;
  }
  _end__if_fn60:;
  return ret2;
}

/* ChapelRange.chpl:2093 */
static int64_t chpl__add(int64_t a,
                         int64_t b) {
  int64_t ret;
  chpl_bool ret2;
  chpl_bool ret3;
  chpl_bool call_tmp2;
  chpl_bool ret4;
  chpl_bool ret5;
  chpl_bool call_tmp3;
  call_tmp2 = (a > INT64(0));
  if (call_tmp2) {
    ret3 = (b > INT64(0));
    goto _end__if_fn424;
  } else {
    ret3 = UINT8(false);
    goto _end__if_fn424;
  }
  _end__if_fn424:;
  if (ret3) {
    ret2 = (b > ((int64_t)((INT64(9223372036854775807) - a))));
    goto _end__if_fn425;
  } else {
    ret2 = UINT8(false);
    goto _end__if_fn425;
  }
  _end__if_fn425:;
  if (ret2) {
    ret = INT64(9223372036854775807);
    goto _end_chpl__add;
  }
  call_tmp3 = (a < INT64(0));
  if (call_tmp3) {
    ret5 = (b < INT64(0));
    goto _end__if_fn426;
  } else {
    ret5 = UINT8(false);
    goto _end__if_fn426;
  }
  _end__if_fn426:;
  if (ret5) {
    ret4 = (b < ((int64_t)((-INT64(9223372036854775807) - INT64(1) - a))));
    goto _end__if_fn427;
  } else {
    ret4 = UINT8(false);
    goto _end__if_fn427;
  }
  _end__if_fn427:;
  if (ret4) {
    ret = -INT64(9223372036854775807) - INT64(1);
    goto _end_chpl__add;
  }
  ret = ((int64_t)((a + b)));
  _end_chpl__add:;
  return ret;
}

/* ChapelRange.chpl:2131 */
static void chpl__extendedEuclidHelper(int64_t u,
                                       int64_t v,
                                       _ref__tuple_2_star_int64_t _retArg) {
  int64_t U_x1;
  int64_t U_x3;
  int64_t V_x1;
  int64_t V_x3;
  chpl_bool T;
  int64_t oldU_x1;
  int64_t oldU_x3;
  int64_t call_tmp2;
  int64_t call_tmp3;
  U_x1 = INT64(1);
  U_x3 = u;
  V_x1 = INT64(0);
  V_x3 = v;
  T = (v != INT64(0));
  while (T) {
    oldU_x1 = U_x1;
    oldU_x3 = U_x3;
    call_tmp2 = (U_x3 / V_x3);
    U_x1 = V_x1;
    U_x3 = V_x3;
    call_tmp3 = (oldU_x3 - ((int64_t)((V_x3 * call_tmp2))));
    V_x1 = ((int64_t)((oldU_x1 - ((int64_t)((V_x1 * call_tmp2))))));
    V_x3 = call_tmp3;
    T = (call_tmp3 != INT64(0));
  }
  *(*(_retArg) + INT64(0)) = U_x3;
  *(*(_retArg) + INT64(1)) = U_x1;
  return;
}

