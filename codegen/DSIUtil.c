/* DSIUtil.chpl:1 */
static void chpl__init_DSIUtil(int64_t _ln_chpl,
                               int32_t _fn_chpl) {
  _ref_int32_t refIndentLevel_chpl = NULL;
  if (chpl__init_DSIUtil_p) {
    goto _exit_chpl__init_DSIUtil_chpl;
  }
  printModuleInit("%*s\n", "DSIUtil", INT64(7));
  refIndentLevel_chpl = &moduleInitLevel;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_DSIUtil_p = UINT8(true);
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_DSIUtil_chpl:;
  return;
}

/* DSIUtil.chpl:37 */
static void createTuple_chpl(int64_t val_chpl,
                             _ref__tuple_1_star_int64_t _retArg_chpl) {
  *(*(_retArg_chpl) + INT64(0)) = val_chpl;
  return;
}

/* DSIUtil.chpl:47 */
static void _computeChunkStuff_chpl(int64_t maxTasks_chpl,
                                    chpl_bool ignoreRunning_chpl,
                                    int64_t minSize_chpl,
                                    chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F ranges_chpl,
                                    _ref__tuple_2_star_int64_t _retArg_chpl) {
  int64_t ret_x1_chpl;
  int64_t ret_x2_chpl;
  uint64_t numElems_chpl;
  chpl____wide__ref_range_int64_t_bounded_F call_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp_chpl2;
  _ref_uint64_t _ref_tmp__chpl = NULL;
  int64_t numChunks_chpl;
  int64_t call_tmp_chpl3;
  chpl_bool call_tmp_chpl4;
  int64_t parDim_chpl;
  int64_t maxDim_chpl;
  uint64_t maxElems_chpl;
  int64_t _ic__F1_high_chpl;
  int64_t i_chpl;
  chpl____wide__ref_range_int64_t_bounded_F call_tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__tuple_1_star_range_int64_t_bounded_F _ref_tmp__chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp_chpl6;
  uint64_t call_tmp_chpl7;
  chpl_bool call_tmp_chpl8;
  chpl_bool call_tmp_chpl9;
  chpl_bool call_tmp_chpl10;
  chpl_bool call_tmp_chpl11;
  chpl____wide__ref_range_int64_t_bounded_F chpl_macro_tmp_7200;
  numElems_chpl = UINT64(1);
  chpl_macro_tmp_7200.locale = (ranges_chpl).locale;
  chpl_macro_tmp_7200.addr = (*((ranges_chpl).addr) + INT64(0));
  call_tmp_chpl = chpl_macro_tmp_7200;
  call_tmp_chpl2 = length2(call_tmp_chpl);
  _ref_tmp__chpl = &numElems_chpl;
  *(_ref_tmp__chpl) *= ((uint64_t)(call_tmp_chpl2));
  call_tmp_chpl3 = _computeNumChunks_chpl2(maxTasks_chpl, ignoreRunning_chpl, minSize_chpl, numElems_chpl);
  numChunks_chpl = call_tmp_chpl3;
  call_tmp_chpl4 = (call_tmp_chpl3 == INT64(0));
  if (call_tmp_chpl4) {
    ret_x1_chpl = INT64(0);
    ret_x2_chpl = INT64(-1);
    goto _end__computeChunkStuff_chpl;
  }
  assert_chpl((call_tmp_chpl3 > INT64(0)));
  parDim_chpl = INT64(-1);
  maxDim_chpl = INT64(-1);
  maxElems_chpl = UINT64(0);
  _ic__F1_high_chpl = INT64(1);
  for (i_chpl = INT64(1); ((i_chpl <= _ic__F1_high_chpl)); i_chpl += INT64(1)) {
    _ref_tmp__chpl2 = ranges_chpl;
    call_tmp_chpl5 = this10(_ref_tmp__chpl2, i_chpl);
    call_tmp_chpl6 = length2(call_tmp_chpl5);
    call_tmp_chpl7 = ((uint64_t)(call_tmp_chpl6));
    call_tmp_chpl8 = (call_tmp_chpl7 >= ((uint64_t)(numChunks_chpl)));
    if (call_tmp_chpl8) {
      parDim_chpl = i_chpl;
      goto _breakLabel_chpl;
    }
    call_tmp_chpl9 = (call_tmp_chpl7 > maxElems_chpl);
    if (call_tmp_chpl9) {
      maxElems_chpl = call_tmp_chpl7;
      maxDim_chpl = i_chpl;
    }
  }
  _breakLabel_chpl:;
  call_tmp_chpl10 = (parDim_chpl == INT64(-1));
  if (call_tmp_chpl10) {
    parDim_chpl = maxDim_chpl;
    call_tmp_chpl11 = (maxElems_chpl < ((uint64_t)(numChunks_chpl)));
    if (call_tmp_chpl11) {
      numChunks_chpl = ((int64_t)(maxElems_chpl));
    }
  }
  ret_x1_chpl = numChunks_chpl;
  ret_x2_chpl = parDim_chpl;
  _end__computeChunkStuff_chpl:;
  *(*(_retArg_chpl) + INT64(0)) = ret_x1_chpl;
  *(*(_retArg_chpl) + INT64(1)) = ret_x2_chpl;
  return;
}

/* DSIUtil.chpl:92 */
static int64_t _computeNumChunks_chpl(int64_t maxTasks_chpl,
                                      chpl_bool ignoreRunning_chpl,
                                      int64_t minSize_chpl,
                                      int64_t numElems_chpl) {
  int64_t ret_chpl;
  chpl_bool call_tmp_chpl;
  uint64_t unumElems_chpl;
  uint64_t call_tmp_chpl2;
  int64_t numChunks_chpl;
  chpl_bool call_tmp_chpl3;
  chpl_localeID_t _autoCopy_tmp__chpl;
  chpl____wide_locale call_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp_chpl5;
  int64_t call_tmp_chpl6;
  int64_t ret_chpl2;
  chpl_bool call_tmp_chpl7;
  chpl_bool call_tmp_chpl8;
  chpl_bool tmp_chpl;
  chpl_bool ret_chpl3;
  chpl_bool call_tmp_chpl9;
  _ref_int64_t _ref_tmp__chpl = NULL;
  chpl_bool ret_chpl4;
  chpl_bool call_tmp_chpl10;
  chpl_bool call_tmp_chpl11;
  call_tmp_chpl = (numElems_chpl <= INT64(0));
  if (call_tmp_chpl) {
    ret_chpl = INT64(0);
    goto _end__computeNumChunks_chpl;
  }
  call_tmp_chpl2 = ((uint64_t)(numElems_chpl));
  unumElems_chpl = call_tmp_chpl2;
  numChunks_chpl = maxTasks_chpl;
  call_tmp_chpl3 = (! ignoreRunning_chpl);
  if (call_tmp_chpl3) {
    _autoCopy_tmp__chpl = chpl_rt_buildLocaleID(chpl_nodeID, c_sublocid_any);
    call_tmp_chpl4 = chpl_localeID_to_locale(&_autoCopy_tmp__chpl);
    call_tmp_chpl5 = runningTasks(call_tmp_chpl4);
    call_tmp_chpl6 = (call_tmp_chpl5 - INT64(1));
    call_tmp_chpl7 = (call_tmp_chpl6 < maxTasks_chpl);
    if (call_tmp_chpl7) {
      ret_chpl2 = ((int64_t)((maxTasks_chpl - call_tmp_chpl6)));
      goto _end__if_fn147_chpl;
    } else {
      ret_chpl2 = INT64(1);
      goto _end__if_fn147_chpl;
    }
    _end__if_fn147_chpl:;
    numChunks_chpl = ret_chpl2;
  }
  call_tmp_chpl8 = (minSize_chpl > INT64(0));
  if (call_tmp_chpl8) {
    call_tmp_chpl9 = (call_tmp_chpl2 < ((uint64_t)(((int64_t)((minSize_chpl * numChunks_chpl))))));
    if (call_tmp_chpl9) {
      ret_chpl3 = (numChunks_chpl > INT64(1));
      goto _end__if_fn886_chpl;
    } else {
      ret_chpl3 = UINT8(false);
      goto _end__if_fn886_chpl;
    }
    _end__if_fn886_chpl:;
    tmp_chpl = ret_chpl3;
    while (tmp_chpl) {
      _ref_tmp__chpl = &numChunks_chpl;
      *(_ref_tmp__chpl) -= INT64(1);
      call_tmp_chpl10 = (unumElems_chpl < ((uint64_t)(((int64_t)((minSize_chpl * numChunks_chpl))))));
      if (call_tmp_chpl10) {
        ret_chpl4 = (numChunks_chpl > INT64(1));
        goto _end__if_fn885_chpl;
      } else {
        ret_chpl4 = UINT8(false);
        goto _end__if_fn885_chpl;
      }
      _end__if_fn885_chpl:;
      tmp_chpl = ret_chpl4;
    }
  }
  call_tmp_chpl11 = (((uint64_t)(numChunks_chpl)) > unumElems_chpl);
  if (call_tmp_chpl11) {
    numChunks_chpl = ((int64_t)(unumElems_chpl));
  }
  ret_chpl = numChunks_chpl;
  _end__computeNumChunks_chpl:;
  return ret_chpl;
}

/* DSIUtil.chpl:92 */
static int64_t _computeNumChunks_chpl2(int64_t maxTasks_chpl,
                                       chpl_bool ignoreRunning_chpl,
                                       int64_t minSize_chpl,
                                       uint64_t numElems_chpl) {
  int64_t ret_chpl;
  chpl_bool call_tmp_chpl;
  uint64_t unumElems_chpl;
  int64_t numChunks_chpl;
  chpl_bool call_tmp_chpl2;
  chpl_localeID_t _autoCopy_tmp__chpl;
  chpl____wide_locale call_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp_chpl4;
  int64_t call_tmp_chpl5;
  int64_t ret_chpl2;
  chpl_bool call_tmp_chpl6;
  chpl_bool call_tmp_chpl7;
  chpl_bool tmp_chpl;
  chpl_bool ret_chpl3;
  chpl_bool call_tmp_chpl8;
  _ref_int64_t _ref_tmp__chpl = NULL;
  chpl_bool ret_chpl4;
  chpl_bool call_tmp_chpl9;
  chpl_bool call_tmp_chpl10;
  call_tmp_chpl = (numElems_chpl <= UINT64(0));
  if (call_tmp_chpl) {
    ret_chpl = INT64(0);
    goto _end__computeNumChunks_chpl;
  }
  unumElems_chpl = numElems_chpl;
  numChunks_chpl = maxTasks_chpl;
  call_tmp_chpl2 = (! ignoreRunning_chpl);
  if (call_tmp_chpl2) {
    _autoCopy_tmp__chpl = chpl_rt_buildLocaleID(chpl_nodeID, c_sublocid_any);
    call_tmp_chpl3 = chpl_localeID_to_locale(&_autoCopy_tmp__chpl);
    call_tmp_chpl4 = runningTasks(call_tmp_chpl3);
    call_tmp_chpl5 = (call_tmp_chpl4 - INT64(1));
    call_tmp_chpl6 = (call_tmp_chpl5 < maxTasks_chpl);
    if (call_tmp_chpl6) {
      ret_chpl2 = ((int64_t)((maxTasks_chpl - call_tmp_chpl5)));
      goto _end__if_fn147_chpl;
    } else {
      ret_chpl2 = INT64(1);
      goto _end__if_fn147_chpl;
    }
    _end__if_fn147_chpl:;
    numChunks_chpl = ret_chpl2;
  }
  call_tmp_chpl7 = (minSize_chpl > INT64(0));
  if (call_tmp_chpl7) {
    call_tmp_chpl8 = (numElems_chpl < ((uint64_t)(((int64_t)((minSize_chpl * numChunks_chpl))))));
    if (call_tmp_chpl8) {
      ret_chpl3 = (numChunks_chpl > INT64(1));
      goto _end__if_fn886_chpl;
    } else {
      ret_chpl3 = UINT8(false);
      goto _end__if_fn886_chpl;
    }
    _end__if_fn886_chpl:;
    tmp_chpl = ret_chpl3;
    while (tmp_chpl) {
      _ref_tmp__chpl = &numChunks_chpl;
      *(_ref_tmp__chpl) -= INT64(1);
      call_tmp_chpl9 = (unumElems_chpl < ((uint64_t)(((int64_t)((minSize_chpl * numChunks_chpl))))));
      if (call_tmp_chpl9) {
        ret_chpl4 = (numChunks_chpl > INT64(1));
        goto _end__if_fn885_chpl;
      } else {
        ret_chpl4 = UINT8(false);
        goto _end__if_fn885_chpl;
      }
      _end__if_fn885_chpl:;
      tmp_chpl = ret_chpl4;
    }
  }
  call_tmp_chpl10 = (((uint64_t)(numChunks_chpl)) > unumElems_chpl);
  if (call_tmp_chpl10) {
    numChunks_chpl = ((int64_t)(unumElems_chpl));
  }
  ret_chpl = numChunks_chpl;
  _end__computeNumChunks_chpl:;
  return ret_chpl;
}

/* DSIUtil.chpl:118 */
static int64_t _computeNumChunks_chpl3(int64_t numElems_chpl) {
  int64_t local_dataParMinGranularity_chpl;
  chpl_bool local_dataParIgnoreRunningTasks_chpl;
  int64_t local_dataParTasksPerLocale_chpl;
  int64_t ret_chpl;
  chpl_bool call_tmp_chpl;
  chpl____wide_locale call_tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t _autoCopy_tmp__chpl;
  chpl____wide_locale call_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t tmp_chpl;
  int64_t call_tmp_chpl4;
  chpl____wide__ref_int64_t chpl_macro_tmp_7201;
  local_dataParMinGranularity_chpl = dataParMinGranularity;
  local_dataParIgnoreRunningTasks_chpl = dataParIgnoreRunningTasks;
  local_dataParTasksPerLocale_chpl = dataParTasksPerLocale;
  call_tmp_chpl = (local_dataParTasksPerLocale_chpl == INT64(0));
  if (call_tmp_chpl) {
    _autoCopy_tmp__chpl = chpl_rt_buildLocaleID(chpl_nodeID, c_sublocid_any);
    call_tmp_chpl3 = chpl_localeID_to_locale(&_autoCopy_tmp__chpl);
    call_tmp_chpl2 = call_tmp_chpl3;
    chpl_macro_tmp_7201.locale = (&call_tmp_chpl2)->locale;
    chpl_macro_tmp_7201.addr = &(((&call_tmp_chpl2)->addr)->maxTaskPar);
    chpl_gen_comm_get(((void*)(&tmp_chpl)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_7201).locale), INT64(0), INT32(0)), (chpl_macro_tmp_7201).addr, sizeof(int64_t), -1, COMMID(0), INT64(120), INT64(62));
    ret_chpl = tmp_chpl;
    goto _end__if_fn148_chpl;
  } else {
    ret_chpl = local_dataParTasksPerLocale_chpl;
    goto _end__if_fn148_chpl;
  }
  _end__if_fn148_chpl:;
  call_tmp_chpl4 = _computeNumChunks_chpl(ret_chpl, local_dataParIgnoreRunningTasks_chpl, local_dataParMinGranularity_chpl, numElems_chpl);
  return call_tmp_chpl4;
}

/* DSIUtil.chpl:163 */
static uint64_t intCeilXDivByY_chpl(uint64_t x_chpl,
                                    uint64_t y_chpl) {
  uint64_t call_tmp_chpl;
  uint64_t call_tmp_chpl2;
  call_tmp_chpl = (((uint64_t)((x_chpl - UINT64(1)))) / y_chpl);
  call_tmp_chpl2 = (UINT64(1) + call_tmp_chpl);
  return call_tmp_chpl2;
}

/* DSIUtil.chpl:165 */
static void _computeBlock_chpl(int64_t numelems_chpl,
                               int64_t numblocks_chpl,
                               int64_t blocknum_chpl,
                               int64_t wayhi_chpl,
                               int64_t waylo_chpl,
                               int64_t lo_chpl,
                               _ref__tuple_2_star_int64_t _retArg_chpl) {
  int64_t ret_x1_chpl;
  int64_t ret_x2_chpl;
  chpl_bool call_tmp_chpl;
  int64_t ret_chpl;
  chpl_bool call_tmp_chpl2;
  uint64_t call_tmp_chpl3;
  int64_t ret_chpl2;
  chpl_bool call_tmp_chpl4;
  uint64_t call_tmp_chpl5;
  call_tmp_chpl = (numelems_chpl == INT64(0));
  if (call_tmp_chpl) {
    ret_x1_chpl = INT64(1);
    ret_x2_chpl = INT64(0);
    goto _end__computeBlock_chpl;
  }
  call_tmp_chpl2 = (blocknum_chpl == INT64(0));
  if (call_tmp_chpl2) {
    ret_chpl = waylo_chpl;
    goto _end__if_fn150_chpl;
  } else {
    call_tmp_chpl3 = intCeilXDivByY_chpl(((uint64_t)((((uint64_t)(numelems_chpl)) * ((uint64_t)(blocknum_chpl))))), ((uint64_t)(numblocks_chpl)));
    ret_chpl = ((int64_t)((lo_chpl + ((int64_t)(call_tmp_chpl3)))));
    goto _end__if_fn150_chpl;
  }
  _end__if_fn150_chpl:;
  call_tmp_chpl4 = (blocknum_chpl == ((int64_t)((numblocks_chpl - INT64(1)))));
  if (call_tmp_chpl4) {
    ret_chpl2 = wayhi_chpl;
    goto _end__if_fn151_chpl;
  } else {
    call_tmp_chpl5 = intCeilXDivByY_chpl(((uint64_t)((((uint64_t)(numelems_chpl)) * ((uint64_t)(((int64_t)((blocknum_chpl + INT64(1))))))))), ((uint64_t)(numblocks_chpl)));
    ret_chpl2 = ((int64_t)((((int64_t)((lo_chpl + ((int64_t)(call_tmp_chpl5))))) - INT64(1))));
    goto _end__if_fn151_chpl;
  }
  _end__if_fn151_chpl:;
  ret_x1_chpl = ret_chpl;
  ret_x2_chpl = ret_chpl2;
  _end__computeBlock_chpl:;
  *(*(_retArg_chpl) + INT64(0)) = ret_x1_chpl;
  *(*(_retArg_chpl) + INT64(1)) = ret_x2_chpl;
  return;
}

