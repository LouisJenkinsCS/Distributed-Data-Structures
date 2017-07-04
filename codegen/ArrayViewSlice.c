/* ArrayViewSlice.chpl:25 */
static void chpl__init_ArrayViewSlice(int64_t _ln,
                                      int32_t _fn) {
  _ref_int32_t refIndentLevel = NULL;
  if (chpl__init_ArrayViewSlice_p) {
    goto _exit_chpl__init_ArrayViewSlice;
  }
  printModuleInit("%*s\n", "ArrayViewSlice", INT64(14));
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_ArrayViewSlice_p = UINT8(true);
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_ArrayViewSlice:;
  return;
}

/* ArrayViewSlice.chpl:32 */
static void chpl__auto_destroy_ArrayViewSliceArr2(chpl____wide_ArrayViewSliceArr__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_int64_t_DefaultRectangularDom_1_int64_t_T_int64_t_DefaultRectangularArr__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_T_int64_t this12) {
  chpl____wide_BaseArr _parent_destructor_tmp_ = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr chpl_macro_tmp_5369;
  chpl_macro_tmp_5369.locale = (&this12)->locale;
  chpl_macro_tmp_5369.addr = ((BaseArr)((&this12)->addr));
  _parent_destructor_tmp_ = chpl_macro_tmp_5369;
  deinit39(_parent_destructor_tmp_);
  return;
}

/* ArrayViewSlice.chpl:32 */
static void chpl__auto_destroy_ArrayViewSliceArr(chpl____wide_ArrayViewSliceArr_Bitmap_int64_t_DefaultRectangularDom_1_int64_t_T_int64_t_DefaultRectangularArr_Bitmap_1_int64_t_T_int64_t this12) {
  chpl____wide_BaseArr _parent_destructor_tmp_ = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr chpl_macro_tmp_5370;
  chpl_macro_tmp_5370.locale = (&this12)->locale;
  chpl_macro_tmp_5370.addr = ((BaseArr)((&this12)->addr));
  _parent_destructor_tmp_ = chpl_macro_tmp_5370;
  deinit39(_parent_destructor_tmp_);
  return;
}

/* ArrayViewSlice.chpl:361 */
static chpl____wide_DefaultRectangularDom_1_int64_t_T dsiGetBaseDom2(chpl____wide_ArrayViewSliceArr__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_int64_t_DefaultRectangularDom_1_int64_t_T_int64_t_DefaultRectangularArr__array_DefaultRectangularArr_FCHGlobalNode_1_int64_t_F_int64_t_1_int64_t_T_int64_t this12) {
  chpl____wide_DefaultRectangularDom_1_int64_t_T ret = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide_DefaultRectangularDom_1_int64_t_T chpl_macro_tmp_5371;
  chpl_macro_tmp_5371.locale = (&this12)->locale;
  chpl_macro_tmp_5371.addr = &(((&this12)->addr)->dom);
  chpl_gen_comm_get(((void*)(&ret)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5371).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5371).addr, sizeof(chpl____wide_DefaultRectangularDom_1_int64_t_T), -1, COMMID(0), INT64(362), INT64(45));
  return ret;
}

/* ArrayViewSlice.chpl:361 */
static chpl____wide_DefaultRectangularDom_1_int64_t_T dsiGetBaseDom(chpl____wide_ArrayViewSliceArr_Bitmap_int64_t_DefaultRectangularDom_1_int64_t_T_int64_t_DefaultRectangularArr_Bitmap_1_int64_t_T_int64_t this12) {
  chpl____wide_DefaultRectangularDom_1_int64_t_T ret = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide_DefaultRectangularDom_1_int64_t_T chpl_macro_tmp_5372;
  chpl_macro_tmp_5372.locale = (&this12)->locale;
  chpl_macro_tmp_5372.addr = &(((&this12)->addr)->dom);
  chpl_gen_comm_get(((void*)(&ret)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5372).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5372).addr, sizeof(chpl____wide_DefaultRectangularDom_1_int64_t_T), -1, COMMID(1), INT64(362), INT64(45));
  return ret;
}

