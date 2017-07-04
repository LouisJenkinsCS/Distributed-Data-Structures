/* ChapelError.chpl:20 */
static void chpl__init_ChapelError(int64_t _ln,
                                   int32_t _fn) {
  _ref_int32_t refIndentLevel = NULL;
  if (chpl__init_ChapelError_p) {
    goto _exit_chpl__init_ChapelError;
  }
  printModuleInit("%*s\n", "ChapelError", INT64(11));
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_ChapelError_p = UINT8(true);
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_ChapelError:;
  return;
}

/* ChapelError.chpl:23 */
static void chpl__auto_destroy_Error(chpl____wide_Error this12) {
  chpl____wide__ref_string _field_destructor_tmp_ = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_string chpl_macro_tmp_5361;
  chpl_macro_tmp_5361.locale = (&this12)->locale;
  chpl_macro_tmp_5361.addr = &(((&this12)->addr)->msg);
  _field_destructor_tmp_ = chpl_macro_tmp_5361;
  deinit44(_field_destructor_tmp_);
  return;
}

/* ChapelError.chpl:31 */
void chpl_delete_error(Error err) {
  _ref_string _field_destructor_tmp_ = NULL;
  chpl____wide__ref_string T = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp2;
  Error rvfDerefTmp = NULL;
  chpl_bool isdirect;
  chpl____wide_Error T2 = {CHPL_LOCALEID_T_INIT, NULL};
  _class_localson_fn118 _args_foron_fn = NULL;
  chpl____wide_Error T3 = {CHPL_LOCALEID_T_INIT, NULL};
  c_void_ptr _args_vforon_fn;
  chpl____wide__ref_string chpl_macro_tmp_5362;
  chpl____wide_Error chpl_macro_tmp_5363;
  chpl__class_localson_fn118_object chpl_macro_tmp_5364;
  chpl____wide_Error chpl_macro_tmp_5365;
  _field_destructor_tmp_ = &((err)->msg);
  chpl_macro_tmp_5362.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5362.addr = _field_destructor_tmp_;
  T = chpl_macro_tmp_5362;
  deinit44(T);
  call_tmp2 = chpl_gen_getLocaleID();
  rvfDerefTmp = err;
  isdirect = chpl_doDirectExecuteOn(&call_tmp2);
  if (isdirect) {
    chpl_macro_tmp_5363.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5363.addr = rvfDerefTmp;
    T2 = chpl_macro_tmp_5363;
    on_fn146(T2);
  } else {
    _args_foron_fn = ((_class_localson_fn118)(&chpl_macro_tmp_5364));
    (_args_foron_fn)->_0_rvfDerefTmp = call_tmp2;
    chpl_macro_tmp_5365.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5365.addr = rvfDerefTmp;
    T3 = chpl_macro_tmp_5365;
    (_args_foron_fn)->_1_rvfDerefTmp = T3;
    _args_vforon_fn = ((void*)(_args_foron_fn));
    /*** wrapon_fn112 ***/ chpl_executeOn(&call_tmp2, INT32(177), ((chpl_comm_on_bundle_p)(_args_vforon_fn)), sizeof(chpl__class_localson_fn118_object), INT64(1227), INT32(2));
  }
  return;
}

