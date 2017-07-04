/* ChapelDynDispHack.chpl:20 */
static void chpl__init_ChapelDynDispHack(int64_t _ln,
                                         int32_t _fn) {
  _ref_int32_t refIndentLevel = NULL;
  chpl_localeID_t _autoCopy_tmp_;
  chpl____wide_locale call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp3;
  if (chpl__init_ChapelDynDispHack_p) {
    goto _exit_chpl__init_ChapelDynDispHack;
  }
  printModuleInit("%*s\n", "ChapelDynDispHack", INT64(17));
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_ChapelDynDispHack_p = UINT8(true);
  _autoCopy_tmp_ = chpl_rt_buildLocaleID(chpl_nodeID, c_sublocid_any);
  call_tmp2 = chpl_localeID_to_locale(&_autoCopy_tmp_);
  call_tmp3 = id(call_tmp2);
  assert_chpl((call_tmp3 >= INT64(0)));
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_ChapelDynDispHack:;
  return;
}

