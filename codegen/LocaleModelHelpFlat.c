/* LocaleModelHelpFlat.chpl:20 */
static void chpl__init_LocaleModelHelpFlat(int64_t _ln,
                                           int32_t _fn) {
  _ref_int32_t refIndentLevel = NULL;
  if (chpl__init_LocaleModelHelpFlat_p) {
    goto _exit_chpl__init_LocaleModelHelpFlat;
  }
  printModuleInit("%*s\n", "LocaleModelHelpFlat", INT64(19));
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_LocaleModelHelpFlat_p = UINT8(true);
  {
    chpl__init_LocaleModelHelpSetup(INT64(20), INT32(43));
    chpl__init_LocaleModelHelpRuntime(INT64(20), INT32(43));
  }
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_LocaleModelHelpFlat:;
  return;
}

/* LocaleModelHelpFlat.chpl:44 */
chpl_bool _local_chpl_doDirectExecuteOn(_ref_chpl_localeID_t loc) {
  int32_t call_tmp2;
  chpl_bool call_tmp3;
  call_tmp2 = _local_chpl_nodeFromLocaleID(loc, INT64(46), INT32(43));
  call_tmp3 = (call_tmp2 == chpl_nodeID);
  return call_tmp3;
}

/* LocaleModelHelpFlat.chpl:44 */
chpl_bool chpl_doDirectExecuteOn(_ref_chpl_localeID_t loc) {
  int32_t call_tmp2;
  chpl_bool call_tmp3;
  call_tmp2 = chpl_nodeFromLocaleID(loc, INT64(46), INT32(43));
  call_tmp3 = (call_tmp2 == chpl_nodeID);
  return call_tmp3;
}

/* LocaleModelHelpFlat.chpl:55 */
void chpl_executeOn(_ref_chpl_localeID_t loc,
                    int64_t fn,
                    chpl_comm_on_bundle_p args,
                    uint64_t args_size,
                    int64_t _ln,
                    int32_t _fn) {
  int32_t call_tmp2;
  chpl_bool call_tmp3;
  int32_t call_tmp4;
  call_tmp2 = chpl_nodeFromLocaleID(loc, INT64(60), INT32(43));
  call_tmp3 = (call_tmp2 == chpl_nodeID);
  if (call_tmp3) {
    chpl_ftable_call(fn, args);
  } else {
    call_tmp4 = chpl_sublocFromLocaleID(loc, INT64(68), INT32(43));
    chpl_comm_execute_on(((int64_t)(call_tmp2)), ((int64_t)(call_tmp4)), fn, args, args_size);
  }
  return;
}

/* LocaleModelHelpFlat.chpl:79 */
void chpl_executeOnFast(_ref_chpl_localeID_t loc,
                        int64_t fn,
                        chpl_comm_on_bundle_p args,
                        uint64_t args_size,
                        int64_t _ln,
                        int32_t _fn) {
  int32_t call_tmp2;
  chpl_bool call_tmp3;
  int32_t call_tmp4;
  call_tmp2 = chpl_nodeFromLocaleID(loc, INT64(84), INT32(43));
  call_tmp3 = (call_tmp2 == chpl_nodeID);
  if (call_tmp3) {
    chpl_ftable_call(fn, args);
  } else {
    call_tmp4 = chpl_sublocFromLocaleID(loc, INT64(89), INT32(43));
    chpl_comm_execute_on_fast(((int64_t)(call_tmp2)), ((int64_t)(call_tmp4)), fn, args, args_size);
  }
  return;
}

/* LocaleModelHelpFlat.chpl:99 */
void chpl_executeOnNB(_ref_chpl_localeID_t loc,
                      int64_t fn,
                      chpl_comm_on_bundle_p args,
                      uint64_t args_size,
                      int64_t _ln,
                      int32_t _fn) {
  int32_t local_c_sublocid_any;
  int32_t call_tmp2;
  chpl_bool call_tmp3;
  chpl_bool call_tmp4;
  chpl_bool call_tmp5;
  local_c_sublocid_any = c_sublocid_any;
  call_tmp2 = chpl_nodeFromLocaleID(loc, INT64(108), INT32(43));
  call_tmp3 = (call_tmp2 == chpl_nodeID);
  if (call_tmp3) {
    call_tmp4 = chpl_task_getSerial();
    if (call_tmp4) {
      chpl_ftable_call(fn, args);
    } else {
      chpl_comm_taskCallFTable(fn, args, args_size, ((int64_t)(local_c_sublocid_any)), INT64(114), INT32(43));
    }
  } else {
    call_tmp5 = chpl_task_getSerial();
    if (call_tmp5) {
      chpl_comm_execute_on(((int64_t)(call_tmp2)), ((int64_t)(local_c_sublocid_any)), fn, args, args_size);
    } else {
      chpl_comm_execute_on_nb(((int64_t)(call_tmp2)), ((int64_t)(local_c_sublocid_any)), fn, args, args_size);
    }
  }
  return;
}

