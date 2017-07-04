/* LocaleModelHelpRuntime.chpl:29 */
static void chpl__init_LocaleModelHelpRuntime(int64_t _ln,
                                              int32_t _fn) {
  _ref_int32_t refIndentLevel = NULL;
  if (chpl__init_LocaleModelHelpRuntime_p) {
    goto _exit_chpl__init_LocaleModelHelpRuntime;
  }
  printModuleInit("%*s\n", "LocaleModelHelpRuntime", INT64(22));
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_LocaleModelHelpRuntime_p = UINT8(true);
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_LocaleModelHelpRuntime:;
  return;
}

/* LocaleModelHelpRuntime.chpl:76 */
void chpl_buildLocaleID(int32_t node,
                        int32_t subloc,
                        _ref_chpl_localeID_t _retArg,
                        int64_t _ln,
                        int32_t _fn) {
  chpl_localeID_t _autoCopy_tmp_;
  _autoCopy_tmp_ = chpl_rt_buildLocaleID(node, subloc);
  *(_retArg) = _autoCopy_tmp_;
  return;
}

/* LocaleModelHelpRuntime.chpl:81 */
int32_t _local_chpl_nodeFromLocaleID(_ref_chpl_localeID_t loc,
                                     int64_t _ln,
                                     int32_t _fn) {
  int32_t call_tmp2;
  call_tmp2 = chpl_rt_nodeFromLocaleID(*(loc));
  return call_tmp2;
}

/* LocaleModelHelpRuntime.chpl:81 */
int32_t chpl_nodeFromLocaleID(_ref_chpl_localeID_t loc,
                              int64_t _ln,
                              int32_t _fn) {
  int32_t call_tmp2;
  call_tmp2 = chpl_rt_nodeFromLocaleID(*(loc));
  return call_tmp2;
}

/* LocaleModelHelpRuntime.chpl:86 */
int32_t chpl_sublocFromLocaleID(_ref_chpl_localeID_t loc,
                                int64_t _ln,
                                int32_t _fn) {
  int32_t call_tmp2;
  call_tmp2 = chpl_rt_sublocFromLocaleID(*(loc));
  return call_tmp2;
}

/* LocaleModelHelpRuntime.chpl:130 */
void chpl_taskListAddBegin(int64_t subloc_id,
                           int64_t fn,
                           chpl_task_bundle_p args,
                           uint64_t args_size,
                           _ref_c_void_ptr tlist,
                           int64_t tlist_node_id,
                           int64_t _ln,
                           int32_t _fn) {
  chpl_task_addToTaskList(fn, args, args_size, subloc_id, tlist, tlist_node_id, UINT8(true), INT64(137), INT32(49));
  return;
}

/* LocaleModelHelpRuntime.chpl:147 */
void chpl_taskListAddCoStmt(int64_t subloc_id,
                            int64_t fn,
                            chpl_task_bundle_p args,
                            uint64_t args_size,
                            _ref_c_void_ptr tlist,
                            int64_t tlist_node_id,
                            int64_t _ln,
                            int32_t _fn) {
  chpl_task_addToTaskList(fn, args, args_size, subloc_id, tlist, tlist_node_id, UINT8(false), INT64(154), INT32(49));
  return;
}

/* LocaleModelHelpRuntime.chpl:163 */
void chpl_taskListExecute(_ref_c_void_ptr task_list,
                          int64_t _ln,
                          int32_t _fn) {
  chpl_task_executeTasksInList(task_list);
  return;
}

