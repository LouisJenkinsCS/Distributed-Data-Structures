/* OldReplicatedDist.chpl:1 */
static void chpl__init_OldReplicatedDist(int64_t _ln_chpl,
                                         int32_t _fn_chpl) {
  _ref_int32_t refIndentLevel_chpl = NULL;
  if (chpl__init_OldReplicatedDist_p) {
    goto _exit_chpl__init_OldReplicatedDist_chpl;
  }
  printModuleInit("%*s\n", "OldReplicatedDist", INT64(17));
  refIndentLevel_chpl = &moduleInitLevel;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_OldReplicatedDist_p = UINT8(true);
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_OldReplicatedDist_chpl:;
  return;
}

/* OldReplicatedDist.chpl:176 */
static void chpl__auto_destroy_ReplicatedDist(chpl____wide_ReplicatedDist this_chpl6) {
  _array_DefaultAssociativeArr_locale_int64_t_T _field_destructor_tmp__chpl;
  _array_DefaultAssociativeArr_locale_int64_t_T tmp_chpl;
  _domain_DefaultAssociativeDom_int64_t_T _field_destructor_tmp__chpl2;
  _domain_DefaultAssociativeDom_int64_t_T tmp_chpl2;
  chpl____wide_BaseDist _parent_destructor_tmp__chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide__array_DefaultAssociativeArr_locale_int64_t_T chpl_macro_tmp_7197;
  chpl____wide__ref__domain_DefaultAssociativeDom_int64_t_T chpl_macro_tmp_7198;
  chpl____wide_BaseDist chpl_macro_tmp_7199;
  chpl_macro_tmp_7197.locale = (&this_chpl6)->locale;
  chpl_macro_tmp_7197.addr = &(((&this_chpl6)->addr)->targetLocales_chpl);
  chpl_gen_comm_get(((void*)(&tmp_chpl)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_7197).locale), INT64(0), INT32(0)), (chpl_macro_tmp_7197).addr, sizeof(_array_DefaultAssociativeArr_locale_int64_t_T), -1, COMMID(0), INT64(180), INT64(61));
  _field_destructor_tmp__chpl = tmp_chpl;
  chpl__autoDestroy26(&_field_destructor_tmp__chpl);
  chpl_macro_tmp_7198.locale = (&this_chpl6)->locale;
  chpl_macro_tmp_7198.addr = &(((&this_chpl6)->addr)->targetLocDom_chpl);
  chpl_gen_comm_get(((void*)(&tmp_chpl2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_7198).locale), INT64(0), INT32(0)), (chpl_macro_tmp_7198).addr, sizeof(_domain_DefaultAssociativeDom_int64_t_T), -1, COMMID(1), INT64(177), INT64(61));
  _field_destructor_tmp__chpl2 = tmp_chpl2;
  chpl__autoDestroy8(&_field_destructor_tmp__chpl2);
  chpl_macro_tmp_7199.locale = (&this_chpl6)->locale;
  chpl_macro_tmp_7199.addr = ((BaseDist)((&this_chpl6)->addr));
  _parent_destructor_tmp__chpl = chpl_macro_tmp_7199;
  deinit35(_parent_destructor_tmp__chpl);
  return;
}

/* OldReplicatedDist.chpl:222 */
static void dsiDestroyDist_chpl2(chpl____wide_ReplicatedDist this_chpl6) {
  return;
}

