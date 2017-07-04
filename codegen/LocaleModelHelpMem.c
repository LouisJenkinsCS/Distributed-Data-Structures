/* LocaleModelHelpMem.chpl:29 */
static void chpl__init_LocaleModelHelpMem(int64_t _ln,
                                          int32_t _fn) {
  _ref_int32_t refIndentLevel = NULL;
  if (chpl__init_LocaleModelHelpMem_p) {
    goto _exit_chpl__init_LocaleModelHelpMem;
  }
  printModuleInit("%*s\n", "LocaleModelHelpMem", INT64(18));
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_LocaleModelHelpMem_p = UINT8(true);
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_LocaleModelHelpMem:;
  return;
}

/* LocaleModelHelpMem.chpl:50 */
static c_void_ptr chpl_here_alloc(int64_t size18,
                                  int16_t md) {
  uint64_t call_tmp2;
  int16_t call_tmp3;
  c_void_ptr call_tmp4;
  call_tmp2 = ((uint64_t)(size18));
  call_tmp3 = chpl_memhook_md_num();
  call_tmp4 = chpl_mem_alloc(call_tmp2, ((int16_t)((md + call_tmp3))), INT64(53), INT32(44));
  return call_tmp4;
}

/* LocaleModelHelpMem.chpl:57 */
static c_void_ptr chpl_here_alloc2(uint64_t size18,
                                   int16_t md) {
  int16_t call_tmp2;
  c_void_ptr call_tmp3;
  call_tmp2 = chpl_memhook_md_num();
  call_tmp3 = chpl_mem_alloc(size18, ((int16_t)((md + call_tmp2))), INT64(60), INT32(44));
  return call_tmp3;
}

/* LocaleModelHelpMem.chpl:71 */
static c_void_ptr chpl_here_realloc(c_void_ptr ptr,
                                    int64_t size18,
                                    int16_t md) {
  uint64_t call_tmp2;
  int16_t call_tmp3;
  c_void_ptr call_tmp4;
  call_tmp2 = ((uint64_t)(size18));
  call_tmp3 = chpl_memhook_md_num();
  call_tmp4 = chpl_mem_realloc(ptr, call_tmp2, ((int16_t)((md + call_tmp3))), INT64(74), INT32(44));
  return call_tmp4;
}

/* LocaleModelHelpMem.chpl:77 */
static int64_t chpl_here_good_alloc_size(int64_t min_size) {
  uint64_t call_tmp2;
  int64_t call_tmp3;
  call_tmp2 = chpl_mem_good_alloc_size(((uint64_t)(min_size)), INT64(80), INT32(44));
  call_tmp3 = ((int64_t)(call_tmp2));
  return call_tmp3;
}

/* LocaleModelHelpMem.chpl:84 */
static void _local_chpl_here_free(c_void_ptr ptr) {
  chpl_mem_free(ptr, INT64(87), INT32(44));
  return;
}

/* LocaleModelHelpMem.chpl:84 */
static void chpl_here_free(c_void_ptr ptr) {
  chpl_mem_free(ptr, INT64(87), INT32(44));
  return;
}

