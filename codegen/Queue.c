/* Queue.chpl:1 */
static void chpl__init_Queue(int64_t _ln_chpl,
                             int32_t _fn_chpl) {
  _ref_int32_t refIndentLevel_chpl = NULL;
  if (chpl__init_Queue_p) {
    goto _exit_chpl__init_Queue_chpl;
  }
  printModuleInit("%*s\n", "Queue", INT64(5));
  refIndentLevel_chpl = &moduleInitLevel;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_Queue_p = UINT8(true);
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_Queue_chpl:;
  return;
}

/* Queue.chpl:1 */
static Queue_int64_t_chpl _construct_Queue_chpl(Queue_int64_t_chpl meme_chpl) {
  Queue_int64_t_chpl this_chpl6 = NULL;
  this_chpl6 = meme_chpl;
  _construct_object(&((this_chpl6)->super_chpl));
  return meme_chpl;
}

/* Queue.chpl:1 */
static void chpl__auto_destroy_Queue(chpl____wide_Queue_int64_t this_chpl6) {
  return;
}

