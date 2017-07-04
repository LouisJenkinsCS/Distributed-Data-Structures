/* Sort.chpl:177 */
static void chpl__init_Sort(int64_t _ln_chpl,
                            int32_t _fn_chpl) {
  _ref_int32_t refIndentLevel_chpl = NULL;
  DefaultComparator_chpl this_chpl6;
  DefaultComparator_chpl ret_tmp_chpl;
  _ref_DefaultComparator ret_to_arg_ref_tmp__chpl = NULL;
  DefaultComparator_chpl this_chpl7;
  DefaultComparator_chpl ret_tmp_chpl2;
  _ref_DefaultComparator ret_to_arg_ref_tmp__chpl2 = NULL;
  ReverseComparator_DefaultComparator_chpl ret_tmp_chpl3;
  _ref_ReverseComparator_DefaultComparator ret_to_arg_ref_tmp__chpl3 = NULL;
  if (chpl__init_Sort_p) {
    goto _exit_chpl__init_Sort_chpl;
  }
  printModuleInit("%*s\n", "Sort", INT64(4));
  refIndentLevel_chpl = &moduleInitLevel;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_Sort_p = UINT8(true);
  chpl_addModule("Sort", ((c_fn_ptr)(chpl__deinit_Sort)));
  ret_to_arg_ref_tmp__chpl = &ret_tmp_chpl;
  _construct_DefaultComparator_chpl(&this_chpl6, ret_to_arg_ref_tmp__chpl);
  defaultComparator_chpl = ret_tmp_chpl;
  chpl_comm_broadcast_private(INT64(38), sizeof(DefaultComparator_chpl), -1);
  ret_to_arg_ref_tmp__chpl2 = &ret_tmp_chpl2;
  _construct_DefaultComparator_chpl(&this_chpl7, ret_to_arg_ref_tmp__chpl2);
  ret_to_arg_ref_tmp__chpl3 = &ret_tmp_chpl3;
  ReverseComparator_chpl(&ret_tmp_chpl2, ret_to_arg_ref_tmp__chpl3);
  reverseComparator_chpl = ret_tmp_chpl3;
  chpl_comm_broadcast_private(INT64(39), sizeof(ReverseComparator_DefaultComparator_chpl), -1);
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_Sort_chpl:;
  return;
}

/* Sort.chpl:177 */
static void chpl__deinit_Sort(void) {
  return;
}

/* Sort.chpl:741 */
static void _construct_DefaultComparator_chpl(_ref_DefaultComparator meme_chpl,
                                              _ref_DefaultComparator _retArg_chpl) {
  DefaultComparator_chpl this_chpl6;
  this_chpl6 = *(meme_chpl);
  *(_retArg_chpl) = this_chpl6;
  return;
}

/* Sort.chpl:763 */
static void _construct_ReverseComparator_chpl(_ref_DefaultComparator comparator_chpl,
                                              _ref_ReverseComparator_DefaultComparator meme_chpl,
                                              _ref_ReverseComparator_DefaultComparator _retArg_chpl) {
  ReverseComparator_DefaultComparator_chpl this_chpl6;
  DefaultComparator_chpl call_tmp_chpl;
  this_chpl6 = *(meme_chpl);
  call_tmp_chpl = *(comparator_chpl);
  (&this_chpl6)->comparator_chpl = call_tmp_chpl;
  *(_retArg_chpl) = this_chpl6;
  return;
}

/* Sort.chpl:776 */
static void ReverseComparator_chpl(_ref_DefaultComparator comparator_chpl,
                                   _ref_ReverseComparator_DefaultComparator _retArg_chpl) {
  ReverseComparator_DefaultComparator_chpl this_chpl6;
  ReverseComparator_DefaultComparator_chpl this_chpl7;
  DefaultComparator_chpl _init_class_tmp__chpl;
  DefaultComparator_chpl wrap_arg_chpl;
  ReverseComparator_DefaultComparator_chpl ret_tmp_chpl;
  _ref_ReverseComparator_DefaultComparator ret_to_arg_ref_tmp__chpl = NULL;
  (&this_chpl7)->comparator_chpl = _init_class_tmp__chpl;
  wrap_arg_chpl = *(comparator_chpl);
  (&this_chpl7)->comparator_chpl = wrap_arg_chpl;
  ret_to_arg_ref_tmp__chpl = &ret_tmp_chpl;
  _construct_ReverseComparator_chpl(&wrap_arg_chpl, &this_chpl7, ret_to_arg_ref_tmp__chpl);
  *(_retArg_chpl) = ret_tmp_chpl;
  return;
}

