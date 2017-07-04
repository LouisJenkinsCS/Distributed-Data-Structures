/* List.chpl:27 */
static void chpl__init_List(int64_t _ln_chpl,
                            int32_t _fn_chpl) {
  _ref_int32_t refIndentLevel_chpl = NULL;
  if (chpl__init_List_p) {
    goto _exit_chpl__init_List_chpl;
  }
  printModuleInit("%*s\n", "List", INT64(4));
  refIndentLevel_chpl = &moduleInitLevel;
  *(refIndentLevel_chpl) += INT64(1);
  chpl__init_List_p = UINT8(true);
  *(refIndentLevel_chpl) -= INT64(1);
  _exit_chpl__init_List_chpl:;
  return;
}

/* List.chpl:30 */
static listNode_BaseArr_chpl _construct_listNode_chpl(chpl____wide_BaseArr data_chpl,
                                                      listNode_BaseArr_chpl next_chpl2,
                                                      listNode_BaseArr_chpl meme_chpl) {
  listNode_BaseArr_chpl this_chpl6 = NULL;
  object tmp_chpl = NULL;
  chpl____wide_listNode_BaseArr tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseArr chpl_macro_tmp_5683;
  this_chpl6 = meme_chpl;
  tmp_chpl = &((this_chpl6)->super_chpl);
  _construct_object(tmp_chpl);
  (this_chpl6)->data_chpl = data_chpl;
  chpl_macro_tmp_5683.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5683.addr = next_chpl2;
  tmp_chpl2 = chpl_macro_tmp_5683;
  (this_chpl6)->next_chpl = tmp_chpl2;
  return this_chpl6;
}

/* List.chpl:30 */
static listNode_BaseDom_chpl _construct_listNode_chpl2(chpl____wide_BaseDom data_chpl,
                                                       listNode_BaseDom_chpl next_chpl2,
                                                       listNode_BaseDom_chpl meme_chpl) {
  listNode_BaseDom_chpl this_chpl6 = NULL;
  chpl____wide_listNode_BaseDom tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseDom chpl_macro_tmp_5684;
  this_chpl6 = meme_chpl;
  _construct_object(&((this_chpl6)->super_chpl));
  (this_chpl6)->data_chpl = data_chpl;
  chpl_macro_tmp_5684.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5684.addr = next_chpl2;
  tmp_chpl = chpl_macro_tmp_5684;
  (this_chpl6)->next_chpl = tmp_chpl;
  return this_chpl6;
}

/* List.chpl:30 */
static listNode_int64_t_chpl _construct_listNode_chpl3(int64_t data_chpl,
                                                       listNode_int64_t_chpl next_chpl2,
                                                       listNode_int64_t_chpl meme_chpl) {
  listNode_int64_t_chpl this_chpl6 = NULL;
  chpl____wide_listNode_int64_t tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_int64_t chpl_macro_tmp_5685;
  this_chpl6 = meme_chpl;
  _construct_object(&((this_chpl6)->super_chpl));
  (this_chpl6)->data_chpl = data_chpl;
  chpl_macro_tmp_5685.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5685.addr = next_chpl2;
  tmp_chpl = chpl_macro_tmp_5685;
  (this_chpl6)->next_chpl = tmp_chpl;
  return this_chpl6;
}

/* List.chpl:30 */
static void chpl__auto_destroy_listNode(chpl____wide_listNode_BaseArr this_chpl6) {
  return;
}

/* List.chpl:30 */
static void chpl__auto_destroy_listNode3(chpl____wide_listNode_BaseDom this_chpl6) {
  return;
}

/* List.chpl:30 */
static void chpl__auto_destroy_listNode2(chpl____wide_listNode_int64_t this_chpl6) {
  return;
}

/* List.chpl:62 */
static void _construct_list_chpl(listNode_int64_t_chpl first_chpl,
                                 listNode_int64_t_chpl last_chpl,
                                 int64_t length_chpl,
                                 _ref_list_int64_t meme_chpl,
                                 _ref_list_int64_t _retArg_chpl) {
  list_int64_t_chpl this_chpl6;
  chpl____wide_listNode_int64_t tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_int64_t tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_int64_t chpl_macro_tmp_5686;
  chpl____wide_listNode_int64_t chpl_macro_tmp_5687;
  this_chpl6 = *(meme_chpl);
  chpl_macro_tmp_5686.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5686.addr = first_chpl;
  tmp_chpl = chpl_macro_tmp_5686;
  (&this_chpl6)->first_chpl = tmp_chpl;
  chpl_macro_tmp_5687.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5687.addr = last_chpl;
  tmp_chpl2 = chpl_macro_tmp_5687;
  (&this_chpl6)->last_chpl = tmp_chpl2;
  (&this_chpl6)->length_chpl = length_chpl;
  *(_retArg_chpl) = this_chpl6;
  return;
}

/* List.chpl:62 */
static void _construct_list_chpl3(listNode_BaseDom_chpl first_chpl,
                                  listNode_BaseDom_chpl last_chpl,
                                  int64_t length_chpl,
                                  _ref_list_BaseDom meme_chpl,
                                  _ref_list_BaseDom _retArg_chpl) {
  list_BaseDom_chpl this_chpl6;
  chpl____wide_listNode_BaseDom tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseDom tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseDom chpl_macro_tmp_5688;
  chpl____wide_listNode_BaseDom chpl_macro_tmp_5689;
  this_chpl6 = *(meme_chpl);
  chpl_macro_tmp_5688.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5688.addr = first_chpl;
  tmp_chpl = chpl_macro_tmp_5688;
  (&this_chpl6)->first_chpl = tmp_chpl;
  chpl_macro_tmp_5689.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5689.addr = last_chpl;
  tmp_chpl2 = chpl_macro_tmp_5689;
  (&this_chpl6)->last_chpl = tmp_chpl2;
  (&this_chpl6)->length_chpl = length_chpl;
  *(_retArg_chpl) = this_chpl6;
  return;
}

/* List.chpl:62 */
static void _construct_list_chpl2(listNode_BaseArr_chpl first_chpl,
                                  listNode_BaseArr_chpl last_chpl,
                                  int64_t length_chpl,
                                  _ref_list_BaseArr meme_chpl,
                                  _ref_list_BaseArr _retArg_chpl) {
  list_BaseArr_chpl this_chpl6;
  chpl____wide_listNode_BaseArr tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseArr tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseArr chpl_macro_tmp_5690;
  chpl____wide_listNode_BaseArr chpl_macro_tmp_5691;
  this_chpl6 = *(meme_chpl);
  chpl_macro_tmp_5690.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5690.addr = first_chpl;
  tmp_chpl = chpl_macro_tmp_5690;
  (&this_chpl6)->first_chpl = tmp_chpl;
  chpl_macro_tmp_5691.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5691.addr = last_chpl;
  tmp_chpl2 = chpl_macro_tmp_5691;
  (&this_chpl6)->last_chpl = tmp_chpl2;
  (&this_chpl6)->length_chpl = length_chpl;
  *(_retArg_chpl) = this_chpl6;
  return;
}

/* List.chpl:79 */
static int64_t size_chpl2(chpl____wide__ref_list_BaseArr this_chpl6) {
  int64_t ret_chpl;
  int64_t tmp_chpl;
  chpl____wide__ref_int64_t chpl_macro_tmp_5692;
  chpl_macro_tmp_5692.locale = (this_chpl6).locale;
  chpl_macro_tmp_5692.addr = &(((this_chpl6).addr)->length_chpl);
  chpl_gen_comm_get(((void*)(&tmp_chpl)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5692).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5692).addr, sizeof(int64_t), -1, COMMID(0), INT64(80), INT64(57));
  ret_chpl = tmp_chpl;
  return ret_chpl;
}

/* List.chpl:79 */
static int64_t _local_size_chpl(chpl____wide__ref_list_BaseDom this_chpl6) {
  int64_t ret_chpl;
  _ref_list_BaseDom local_this_chpl = NULL;
  local_this_chpl = (&this_chpl6)->addr;
  ret_chpl = (local_this_chpl)->length_chpl;
  return ret_chpl;
}

/* List.chpl:79 */
static int64_t size_chpl(chpl____wide__ref_list_BaseDom this_chpl6) {
  int64_t ret_chpl;
  int64_t tmp_chpl;
  chpl____wide__ref_int64_t chpl_macro_tmp_5693;
  chpl_macro_tmp_5693.locale = (this_chpl6).locale;
  chpl_macro_tmp_5693.addr = &(((this_chpl6).addr)->length_chpl);
  chpl_gen_comm_get(((void*)(&tmp_chpl)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5693).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5693).addr, sizeof(int64_t), -1, COMMID(1), INT64(80), INT64(57));
  ret_chpl = tmp_chpl;
  return ret_chpl;
}

/* List.chpl:79 */
static int64_t _local_size_chpl2(chpl____wide__ref_list_BaseArr this_chpl6) {
  int64_t ret_chpl;
  _ref_list_BaseArr local_this_chpl = NULL;
  local_this_chpl = (&this_chpl6)->addr;
  ret_chpl = (local_this_chpl)->length_chpl;
  return ret_chpl;
}

/* List.chpl:99 */
static void append_chpl(chpl____wide__ref_list_BaseArr this_chpl6,
                        chpl____wide_BaseArr e_chpl) {
  chpl____wide_listNode_BaseArr coerce_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp_chpl2;
  chpl____wide_object tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseArr coerce_tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  listNode_BaseArr_chpl this_chpl7 = NULL;
  c_void_ptr cast_tmp_chpl;
  chpl____wide_BaseArr tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseArr tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  listNode_BaseArr_chpl call_tmp_chpl3 = NULL;
  chpl____wide_listNode_BaseArr tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  listNode_BaseArr_chpl wrap_call_tmp_chpl = NULL;
  chpl____wide_listNode_BaseArr tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseArr coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseArr coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  listNode_BaseArr_chpl this_chpl8 = NULL;
  c_void_ptr cast_tmp_chpl2;
  chpl____wide_BaseArr tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseArr tmp_chpl7 = {CHPL_LOCALEID_T_INIT, NULL};
  listNode_BaseArr_chpl call_tmp_chpl4 = NULL;
  chpl____wide_listNode_BaseArr tmp_chpl8 = {CHPL_LOCALEID_T_INIT, NULL};
  listNode_BaseArr_chpl wrap_call_tmp_chpl2 = NULL;
  chpl____wide_listNode_BaseArr tmp_chpl9 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseArr coerce_tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_int64_t call_tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide_listNode_BaseArr chpl_macro_tmp_5694;
  chpl____wide_object chpl_macro_tmp_5695;
  chpl____wide__nilType chpl_macro_tmp_5696;
  chpl____wide_object chpl_macro_tmp_5697;
  chpl____wide__ref__wide_listNode_BaseArr chpl_macro_tmp_5698;
  chpl____wide__nilType chpl_macro_tmp_5699;
  chpl____wide_BaseArr chpl_macro_tmp_5700;
  chpl____wide__nilType chpl_macro_tmp_5701;
  chpl____wide_listNode_BaseArr chpl_macro_tmp_5702;
  chpl____wide_listNode_BaseArr chpl_macro_tmp_5703;
  chpl____wide_listNode_BaseArr chpl_macro_tmp_5704;
  chpl____wide__ref__wide_listNode_BaseArr chpl_macro_tmp_5705;
  chpl____wide__ref__wide_listNode_BaseArr chpl_macro_tmp_5706;
  chpl____wide__ref__wide_listNode_BaseArr chpl_macro_tmp_5707;
  chpl____wide__ref__wide_listNode_BaseArr chpl_macro_tmp_5708;
  chpl____wide__nilType chpl_macro_tmp_5709;
  chpl____wide_BaseArr chpl_macro_tmp_5710;
  chpl____wide__nilType chpl_macro_tmp_5711;
  chpl____wide_listNode_BaseArr chpl_macro_tmp_5712;
  chpl____wide_listNode_BaseArr chpl_macro_tmp_5713;
  chpl____wide_listNode_BaseArr chpl_macro_tmp_5714;
  chpl____wide__ref__wide_listNode_BaseArr chpl_macro_tmp_5715;
  chpl____wide__ref__wide_listNode_BaseArr chpl_macro_tmp_5716;
  chpl____wide__ref__wide_listNode_BaseArr chpl_macro_tmp_5717;
  chpl____wide__ref_int64_t chpl_macro_tmp_5718;
  int64_t chpl_macro_tmp_5719;
  chpl_macro_tmp_5694.locale = (this_chpl6).locale;
  chpl_macro_tmp_5694.addr = &(((this_chpl6).addr)->last_chpl);
  chpl_gen_comm_get(((void*)(&coerce_tmp_chpl)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5694).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5694).addr, sizeof(chpl____wide_listNode_BaseArr), -1, COMMID(2), INT64(100), INT64(57));
  chpl_macro_tmp_5695.locale = (&coerce_tmp_chpl)->locale;
  chpl_macro_tmp_5695.addr = ((object)((&coerce_tmp_chpl)->addr));
  call_tmp_chpl = chpl_macro_tmp_5695;
  chpl_macro_tmp_5696.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5696.addr = nil;
  chpl_macro_tmp_5697.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5697.addr = NULL;
  tmp_chpl = chpl_macro_tmp_5697;
  call_tmp_chpl2 = (((&call_tmp_chpl)->addr != (&tmp_chpl)->addr) || ((!(! (&call_tmp_chpl)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp_chpl)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&tmp_chpl)->locale), INT64(0), INT32(0)))));
  if (call_tmp_chpl2) {
    chpl_macro_tmp_5698.locale = (this_chpl6).locale;
    chpl_macro_tmp_5698.addr = &(((this_chpl6).addr)->last_chpl);
    chpl_gen_comm_get(((void*)(&coerce_tmp_chpl2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5698).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5698).addr, sizeof(chpl____wide_listNode_BaseArr), -1, COMMID(3), INT64(101), INT64(57));
    cast_tmp_chpl = chpl_here_alloc(sizeof(chpl_listNode_BaseArr_chpl_object), INT16(10));
    this_chpl7 = ((listNode_BaseArr_chpl)(cast_tmp_chpl));
    ((object)(this_chpl7))->chpl__cid = chpl__cid_listNode_BaseArr_chpl;
    chpl_macro_tmp_5699.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5699.addr = nil;
    chpl_macro_tmp_5700.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5700.addr = NULL;
    tmp_chpl2 = chpl_macro_tmp_5700;
    (this_chpl7)->data_chpl = tmp_chpl2;
    chpl_macro_tmp_5701.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5701.addr = nil;
    chpl_macro_tmp_5702.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5702.addr = NULL;
    tmp_chpl3 = chpl_macro_tmp_5702;
    (this_chpl7)->next_chpl = tmp_chpl3;
    (this_chpl7)->data_chpl = e_chpl;
    call_tmp_chpl3 = ((listNode_BaseArr_chpl)(nil));
    chpl_macro_tmp_5703.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5703.addr = call_tmp_chpl3;
    tmp_chpl4 = chpl_macro_tmp_5703;
    (this_chpl7)->next_chpl = tmp_chpl4;
    wrap_call_tmp_chpl = _construct_listNode_chpl(e_chpl, call_tmp_chpl3, this_chpl7);
    chpl_macro_tmp_5704.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5704.addr = wrap_call_tmp_chpl;
    tmp_chpl5 = chpl_macro_tmp_5704;
    chpl_macro_tmp_5705.locale = (&coerce_tmp_chpl2)->locale;
    chpl_macro_tmp_5705.addr = &(((&coerce_tmp_chpl2)->addr)->next_chpl);
    chpl_gen_comm_put(((void*)(&tmp_chpl5)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5705).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5705).addr, sizeof(chpl____wide_listNode_BaseArr), -1, COMMID(4), INT64(101), INT64(57));
    chpl_macro_tmp_5706.locale = (this_chpl6).locale;
    chpl_macro_tmp_5706.addr = &(((this_chpl6).addr)->last_chpl);
    chpl_gen_comm_get(((void*)(&coerce_tmp_chpl3)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5706).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5706).addr, sizeof(chpl____wide_listNode_BaseArr), -1, COMMID(5), INT64(102), INT64(57));
    chpl_macro_tmp_5707.locale = (&coerce_tmp_chpl3)->locale;
    chpl_macro_tmp_5707.addr = &(((&coerce_tmp_chpl3)->addr)->next_chpl);
    chpl_gen_comm_get(((void*)(&coerce_tmp_chpl4)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5707).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5707).addr, sizeof(chpl____wide_listNode_BaseArr), -1, COMMID(6), INT64(102), INT64(57));
    chpl_macro_tmp_5708.locale = (this_chpl6).locale;
    chpl_macro_tmp_5708.addr = &(((this_chpl6).addr)->last_chpl);
    chpl_gen_comm_put(((void*)(&coerce_tmp_chpl4)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5708).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5708).addr, sizeof(chpl____wide_listNode_BaseArr), -1, COMMID(7), INT64(102), INT64(57));
  } else {
    cast_tmp_chpl2 = chpl_here_alloc(sizeof(chpl_listNode_BaseArr_chpl_object), INT16(10));
    this_chpl8 = ((listNode_BaseArr_chpl)(cast_tmp_chpl2));
    ((object)(this_chpl8))->chpl__cid = chpl__cid_listNode_BaseArr_chpl;
    chpl_macro_tmp_5709.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5709.addr = nil;
    chpl_macro_tmp_5710.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5710.addr = NULL;
    tmp_chpl6 = chpl_macro_tmp_5710;
    (this_chpl8)->data_chpl = tmp_chpl6;
    chpl_macro_tmp_5711.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5711.addr = nil;
    chpl_macro_tmp_5712.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5712.addr = NULL;
    tmp_chpl7 = chpl_macro_tmp_5712;
    (this_chpl8)->next_chpl = tmp_chpl7;
    (this_chpl8)->data_chpl = e_chpl;
    call_tmp_chpl4 = ((listNode_BaseArr_chpl)(nil));
    chpl_macro_tmp_5713.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5713.addr = call_tmp_chpl4;
    tmp_chpl8 = chpl_macro_tmp_5713;
    (this_chpl8)->next_chpl = tmp_chpl8;
    wrap_call_tmp_chpl2 = _construct_listNode_chpl(e_chpl, call_tmp_chpl4, this_chpl8);
    chpl_macro_tmp_5714.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5714.addr = wrap_call_tmp_chpl2;
    tmp_chpl9 = chpl_macro_tmp_5714;
    chpl_macro_tmp_5715.locale = (this_chpl6).locale;
    chpl_macro_tmp_5715.addr = &(((this_chpl6).addr)->first_chpl);
    chpl_gen_comm_put(((void*)(&tmp_chpl9)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5715).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5715).addr, sizeof(chpl____wide_listNode_BaseArr), -1, COMMID(8), INT64(104), INT64(57));
    chpl_macro_tmp_5716.locale = (this_chpl6).locale;
    chpl_macro_tmp_5716.addr = &(((this_chpl6).addr)->first_chpl);
    chpl_gen_comm_get(((void*)(&coerce_tmp_chpl5)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5716).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5716).addr, sizeof(chpl____wide_listNode_BaseArr), -1, COMMID(9), INT64(105), INT64(57));
    chpl_macro_tmp_5717.locale = (this_chpl6).locale;
    chpl_macro_tmp_5717.addr = &(((this_chpl6).addr)->last_chpl);
    chpl_gen_comm_put(((void*)(&coerce_tmp_chpl5)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5717).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5717).addr, sizeof(chpl____wide_listNode_BaseArr), -1, COMMID(10), INT64(105), INT64(57));
  }
  chpl_macro_tmp_5718.locale = (this_chpl6).locale;
  chpl_macro_tmp_5718.addr = &(((this_chpl6).addr)->length_chpl);
  call_tmp_chpl5 = chpl_macro_tmp_5718;
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_5719)), chpl_nodeFromLocaleID(&((call_tmp_chpl5).locale), INT64(0), INT32(0)), (call_tmp_chpl5).addr, sizeof(int64_t), -1, COMMID(11), INT64(107), INT64(57));
  chpl_macro_tmp_5719 += INT64(1);
  chpl_gen_comm_put(((void*)(&chpl_macro_tmp_5719)), chpl_nodeFromLocaleID(&((call_tmp_chpl5).locale), INT64(0), INT32(0)), (call_tmp_chpl5).addr, sizeof(int64_t), -1, COMMID(12), INT64(107), INT64(57));
  return;
}

/* List.chpl:99 */
static void append_chpl2(chpl____wide__ref_list_int64_t this_chpl6,
                         int64_t e_chpl) {
  chpl____wide_listNode_int64_t coerce_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp_chpl2;
  chpl____wide_object tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_int64_t coerce_tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  listNode_int64_t_chpl this_chpl7 = NULL;
  c_void_ptr cast_tmp_chpl;
  chpl____wide_listNode_int64_t tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  listNode_int64_t_chpl call_tmp_chpl3 = NULL;
  chpl____wide_listNode_int64_t tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  listNode_int64_t_chpl wrap_call_tmp_chpl = NULL;
  chpl____wide_listNode_int64_t tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_int64_t coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_int64_t coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  listNode_int64_t_chpl this_chpl8 = NULL;
  c_void_ptr cast_tmp_chpl2;
  chpl____wide_listNode_int64_t tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  listNode_int64_t_chpl call_tmp_chpl4 = NULL;
  chpl____wide_listNode_int64_t tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  listNode_int64_t_chpl wrap_call_tmp_chpl2 = NULL;
  chpl____wide_listNode_int64_t tmp_chpl7 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_int64_t coerce_tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_int64_t call_tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide_listNode_int64_t chpl_macro_tmp_5720;
  chpl____wide_object chpl_macro_tmp_5721;
  chpl____wide__nilType chpl_macro_tmp_5722;
  chpl____wide_object chpl_macro_tmp_5723;
  chpl____wide__ref__wide_listNode_int64_t chpl_macro_tmp_5724;
  chpl____wide__nilType chpl_macro_tmp_5725;
  chpl____wide_listNode_int64_t chpl_macro_tmp_5726;
  chpl____wide_listNode_int64_t chpl_macro_tmp_5727;
  chpl____wide_listNode_int64_t chpl_macro_tmp_5728;
  chpl____wide__ref__wide_listNode_int64_t chpl_macro_tmp_5729;
  chpl____wide__ref__wide_listNode_int64_t chpl_macro_tmp_5730;
  chpl____wide__ref__wide_listNode_int64_t chpl_macro_tmp_5731;
  chpl____wide__ref__wide_listNode_int64_t chpl_macro_tmp_5732;
  chpl____wide__nilType chpl_macro_tmp_5733;
  chpl____wide_listNode_int64_t chpl_macro_tmp_5734;
  chpl____wide_listNode_int64_t chpl_macro_tmp_5735;
  chpl____wide_listNode_int64_t chpl_macro_tmp_5736;
  chpl____wide__ref__wide_listNode_int64_t chpl_macro_tmp_5737;
  chpl____wide__ref__wide_listNode_int64_t chpl_macro_tmp_5738;
  chpl____wide__ref__wide_listNode_int64_t chpl_macro_tmp_5739;
  chpl____wide__ref_int64_t chpl_macro_tmp_5740;
  int64_t chpl_macro_tmp_5741;
  chpl_macro_tmp_5720.locale = (this_chpl6).locale;
  chpl_macro_tmp_5720.addr = &(((this_chpl6).addr)->last_chpl);
  chpl_gen_comm_get(((void*)(&coerce_tmp_chpl)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5720).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5720).addr, sizeof(chpl____wide_listNode_int64_t), -1, COMMID(13), INT64(100), INT64(57));
  chpl_macro_tmp_5721.locale = (&coerce_tmp_chpl)->locale;
  chpl_macro_tmp_5721.addr = ((object)((&coerce_tmp_chpl)->addr));
  call_tmp_chpl = chpl_macro_tmp_5721;
  chpl_macro_tmp_5722.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5722.addr = nil;
  chpl_macro_tmp_5723.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5723.addr = NULL;
  tmp_chpl = chpl_macro_tmp_5723;
  call_tmp_chpl2 = (((&call_tmp_chpl)->addr != (&tmp_chpl)->addr) || ((!(! (&call_tmp_chpl)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp_chpl)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&tmp_chpl)->locale), INT64(0), INT32(0)))));
  if (call_tmp_chpl2) {
    chpl_macro_tmp_5724.locale = (this_chpl6).locale;
    chpl_macro_tmp_5724.addr = &(((this_chpl6).addr)->last_chpl);
    chpl_gen_comm_get(((void*)(&coerce_tmp_chpl2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5724).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5724).addr, sizeof(chpl____wide_listNode_int64_t), -1, COMMID(14), INT64(101), INT64(57));
    cast_tmp_chpl = chpl_here_alloc(sizeof(chpl_listNode_int64_t_chpl_object), INT16(35));
    this_chpl7 = ((listNode_int64_t_chpl)(cast_tmp_chpl));
    ((object)(this_chpl7))->chpl__cid = chpl__cid_listNode_int64_t_chpl;
    (this_chpl7)->data_chpl = INT64(0);
    chpl_macro_tmp_5725.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5725.addr = nil;
    chpl_macro_tmp_5726.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5726.addr = NULL;
    tmp_chpl2 = chpl_macro_tmp_5726;
    (this_chpl7)->next_chpl = tmp_chpl2;
    (this_chpl7)->data_chpl = e_chpl;
    call_tmp_chpl3 = ((listNode_int64_t_chpl)(nil));
    chpl_macro_tmp_5727.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5727.addr = call_tmp_chpl3;
    tmp_chpl3 = chpl_macro_tmp_5727;
    (this_chpl7)->next_chpl = tmp_chpl3;
    wrap_call_tmp_chpl = _construct_listNode_chpl3(e_chpl, call_tmp_chpl3, this_chpl7);
    chpl_macro_tmp_5728.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5728.addr = wrap_call_tmp_chpl;
    tmp_chpl4 = chpl_macro_tmp_5728;
    chpl_macro_tmp_5729.locale = (&coerce_tmp_chpl2)->locale;
    chpl_macro_tmp_5729.addr = &(((&coerce_tmp_chpl2)->addr)->next_chpl);
    chpl_gen_comm_put(((void*)(&tmp_chpl4)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5729).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5729).addr, sizeof(chpl____wide_listNode_int64_t), -1, COMMID(15), INT64(101), INT64(57));
    chpl_macro_tmp_5730.locale = (this_chpl6).locale;
    chpl_macro_tmp_5730.addr = &(((this_chpl6).addr)->last_chpl);
    chpl_gen_comm_get(((void*)(&coerce_tmp_chpl3)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5730).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5730).addr, sizeof(chpl____wide_listNode_int64_t), -1, COMMID(16), INT64(102), INT64(57));
    chpl_macro_tmp_5731.locale = (&coerce_tmp_chpl3)->locale;
    chpl_macro_tmp_5731.addr = &(((&coerce_tmp_chpl3)->addr)->next_chpl);
    chpl_gen_comm_get(((void*)(&coerce_tmp_chpl4)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5731).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5731).addr, sizeof(chpl____wide_listNode_int64_t), -1, COMMID(17), INT64(102), INT64(57));
    chpl_macro_tmp_5732.locale = (this_chpl6).locale;
    chpl_macro_tmp_5732.addr = &(((this_chpl6).addr)->last_chpl);
    chpl_gen_comm_put(((void*)(&coerce_tmp_chpl4)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5732).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5732).addr, sizeof(chpl____wide_listNode_int64_t), -1, COMMID(18), INT64(102), INT64(57));
  } else {
    cast_tmp_chpl2 = chpl_here_alloc(sizeof(chpl_listNode_int64_t_chpl_object), INT16(35));
    this_chpl8 = ((listNode_int64_t_chpl)(cast_tmp_chpl2));
    ((object)(this_chpl8))->chpl__cid = chpl__cid_listNode_int64_t_chpl;
    (this_chpl8)->data_chpl = INT64(0);
    chpl_macro_tmp_5733.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5733.addr = nil;
    chpl_macro_tmp_5734.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5734.addr = NULL;
    tmp_chpl5 = chpl_macro_tmp_5734;
    (this_chpl8)->next_chpl = tmp_chpl5;
    (this_chpl8)->data_chpl = e_chpl;
    call_tmp_chpl4 = ((listNode_int64_t_chpl)(nil));
    chpl_macro_tmp_5735.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5735.addr = call_tmp_chpl4;
    tmp_chpl6 = chpl_macro_tmp_5735;
    (this_chpl8)->next_chpl = tmp_chpl6;
    wrap_call_tmp_chpl2 = _construct_listNode_chpl3(e_chpl, call_tmp_chpl4, this_chpl8);
    chpl_macro_tmp_5736.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5736.addr = wrap_call_tmp_chpl2;
    tmp_chpl7 = chpl_macro_tmp_5736;
    chpl_macro_tmp_5737.locale = (this_chpl6).locale;
    chpl_macro_tmp_5737.addr = &(((this_chpl6).addr)->first_chpl);
    chpl_gen_comm_put(((void*)(&tmp_chpl7)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5737).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5737).addr, sizeof(chpl____wide_listNode_int64_t), -1, COMMID(19), INT64(104), INT64(57));
    chpl_macro_tmp_5738.locale = (this_chpl6).locale;
    chpl_macro_tmp_5738.addr = &(((this_chpl6).addr)->first_chpl);
    chpl_gen_comm_get(((void*)(&coerce_tmp_chpl5)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5738).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5738).addr, sizeof(chpl____wide_listNode_int64_t), -1, COMMID(20), INT64(105), INT64(57));
    chpl_macro_tmp_5739.locale = (this_chpl6).locale;
    chpl_macro_tmp_5739.addr = &(((this_chpl6).addr)->last_chpl);
    chpl_gen_comm_put(((void*)(&coerce_tmp_chpl5)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5739).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5739).addr, sizeof(chpl____wide_listNode_int64_t), -1, COMMID(21), INT64(105), INT64(57));
  }
  chpl_macro_tmp_5740.locale = (this_chpl6).locale;
  chpl_macro_tmp_5740.addr = &(((this_chpl6).addr)->length_chpl);
  call_tmp_chpl5 = chpl_macro_tmp_5740;
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_5741)), chpl_nodeFromLocaleID(&((call_tmp_chpl5).locale), INT64(0), INT32(0)), (call_tmp_chpl5).addr, sizeof(int64_t), -1, COMMID(22), INT64(107), INT64(57));
  chpl_macro_tmp_5741 += INT64(1);
  chpl_gen_comm_put(((void*)(&chpl_macro_tmp_5741)), chpl_nodeFromLocaleID(&((call_tmp_chpl5).locale), INT64(0), INT32(0)), (call_tmp_chpl5).addr, sizeof(int64_t), -1, COMMID(23), INT64(107), INT64(57));
  return;
}

/* List.chpl:99 */
static void append_chpl3(chpl____wide__ref_list_BaseDom this_chpl6,
                         chpl____wide_BaseDom e_chpl) {
  chpl____wide_listNode_BaseDom coerce_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp_chpl2;
  chpl____wide_object tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseDom coerce_tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  listNode_BaseDom_chpl this_chpl7 = NULL;
  c_void_ptr cast_tmp_chpl;
  chpl____wide_BaseDom tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseDom tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  listNode_BaseDom_chpl call_tmp_chpl3 = NULL;
  chpl____wide_listNode_BaseDom tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  listNode_BaseDom_chpl wrap_call_tmp_chpl = NULL;
  chpl____wide_listNode_BaseDom tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseDom coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseDom coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  listNode_BaseDom_chpl this_chpl8 = NULL;
  c_void_ptr cast_tmp_chpl2;
  chpl____wide_BaseDom tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseDom tmp_chpl7 = {CHPL_LOCALEID_T_INIT, NULL};
  listNode_BaseDom_chpl call_tmp_chpl4 = NULL;
  chpl____wide_listNode_BaseDom tmp_chpl8 = {CHPL_LOCALEID_T_INIT, NULL};
  listNode_BaseDom_chpl wrap_call_tmp_chpl2 = NULL;
  chpl____wide_listNode_BaseDom tmp_chpl9 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseDom coerce_tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_int64_t call_tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide_listNode_BaseDom chpl_macro_tmp_5742;
  chpl____wide_object chpl_macro_tmp_5743;
  chpl____wide__nilType chpl_macro_tmp_5744;
  chpl____wide_object chpl_macro_tmp_5745;
  chpl____wide__ref__wide_listNode_BaseDom chpl_macro_tmp_5746;
  chpl____wide__nilType chpl_macro_tmp_5747;
  chpl____wide_BaseDom chpl_macro_tmp_5748;
  chpl____wide__nilType chpl_macro_tmp_5749;
  chpl____wide_listNode_BaseDom chpl_macro_tmp_5750;
  chpl____wide_listNode_BaseDom chpl_macro_tmp_5751;
  chpl____wide_listNode_BaseDom chpl_macro_tmp_5752;
  chpl____wide__ref__wide_listNode_BaseDom chpl_macro_tmp_5753;
  chpl____wide__ref__wide_listNode_BaseDom chpl_macro_tmp_5754;
  chpl____wide__ref__wide_listNode_BaseDom chpl_macro_tmp_5755;
  chpl____wide__ref__wide_listNode_BaseDom chpl_macro_tmp_5756;
  chpl____wide__nilType chpl_macro_tmp_5757;
  chpl____wide_BaseDom chpl_macro_tmp_5758;
  chpl____wide__nilType chpl_macro_tmp_5759;
  chpl____wide_listNode_BaseDom chpl_macro_tmp_5760;
  chpl____wide_listNode_BaseDom chpl_macro_tmp_5761;
  chpl____wide_listNode_BaseDom chpl_macro_tmp_5762;
  chpl____wide__ref__wide_listNode_BaseDom chpl_macro_tmp_5763;
  chpl____wide__ref__wide_listNode_BaseDom chpl_macro_tmp_5764;
  chpl____wide__ref__wide_listNode_BaseDom chpl_macro_tmp_5765;
  chpl____wide__ref_int64_t chpl_macro_tmp_5766;
  int64_t chpl_macro_tmp_5767;
  chpl_macro_tmp_5742.locale = (this_chpl6).locale;
  chpl_macro_tmp_5742.addr = &(((this_chpl6).addr)->last_chpl);
  chpl_gen_comm_get(((void*)(&coerce_tmp_chpl)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5742).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5742).addr, sizeof(chpl____wide_listNode_BaseDom), -1, COMMID(24), INT64(100), INT64(57));
  chpl_macro_tmp_5743.locale = (&coerce_tmp_chpl)->locale;
  chpl_macro_tmp_5743.addr = ((object)((&coerce_tmp_chpl)->addr));
  call_tmp_chpl = chpl_macro_tmp_5743;
  chpl_macro_tmp_5744.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5744.addr = nil;
  chpl_macro_tmp_5745.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5745.addr = NULL;
  tmp_chpl = chpl_macro_tmp_5745;
  call_tmp_chpl2 = (((&call_tmp_chpl)->addr != (&tmp_chpl)->addr) || ((!(! (&call_tmp_chpl)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp_chpl)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&tmp_chpl)->locale), INT64(0), INT32(0)))));
  if (call_tmp_chpl2) {
    chpl_macro_tmp_5746.locale = (this_chpl6).locale;
    chpl_macro_tmp_5746.addr = &(((this_chpl6).addr)->last_chpl);
    chpl_gen_comm_get(((void*)(&coerce_tmp_chpl2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5746).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5746).addr, sizeof(chpl____wide_listNode_BaseDom), -1, COMMID(25), INT64(101), INT64(57));
    cast_tmp_chpl = chpl_here_alloc(sizeof(chpl_listNode_BaseDom_chpl_object), INT16(11));
    this_chpl7 = ((listNode_BaseDom_chpl)(cast_tmp_chpl));
    ((object)(this_chpl7))->chpl__cid = chpl__cid_listNode_BaseDom_chpl;
    chpl_macro_tmp_5747.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5747.addr = nil;
    chpl_macro_tmp_5748.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5748.addr = NULL;
    tmp_chpl2 = chpl_macro_tmp_5748;
    (this_chpl7)->data_chpl = tmp_chpl2;
    chpl_macro_tmp_5749.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5749.addr = nil;
    chpl_macro_tmp_5750.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5750.addr = NULL;
    tmp_chpl3 = chpl_macro_tmp_5750;
    (this_chpl7)->next_chpl = tmp_chpl3;
    (this_chpl7)->data_chpl = e_chpl;
    call_tmp_chpl3 = ((listNode_BaseDom_chpl)(nil));
    chpl_macro_tmp_5751.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5751.addr = call_tmp_chpl3;
    tmp_chpl4 = chpl_macro_tmp_5751;
    (this_chpl7)->next_chpl = tmp_chpl4;
    wrap_call_tmp_chpl = _construct_listNode_chpl2(e_chpl, call_tmp_chpl3, this_chpl7);
    chpl_macro_tmp_5752.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5752.addr = wrap_call_tmp_chpl;
    tmp_chpl5 = chpl_macro_tmp_5752;
    chpl_macro_tmp_5753.locale = (&coerce_tmp_chpl2)->locale;
    chpl_macro_tmp_5753.addr = &(((&coerce_tmp_chpl2)->addr)->next_chpl);
    chpl_gen_comm_put(((void*)(&tmp_chpl5)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5753).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5753).addr, sizeof(chpl____wide_listNode_BaseDom), -1, COMMID(26), INT64(101), INT64(57));
    chpl_macro_tmp_5754.locale = (this_chpl6).locale;
    chpl_macro_tmp_5754.addr = &(((this_chpl6).addr)->last_chpl);
    chpl_gen_comm_get(((void*)(&coerce_tmp_chpl3)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5754).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5754).addr, sizeof(chpl____wide_listNode_BaseDom), -1, COMMID(27), INT64(102), INT64(57));
    chpl_macro_tmp_5755.locale = (&coerce_tmp_chpl3)->locale;
    chpl_macro_tmp_5755.addr = &(((&coerce_tmp_chpl3)->addr)->next_chpl);
    chpl_gen_comm_get(((void*)(&coerce_tmp_chpl4)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5755).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5755).addr, sizeof(chpl____wide_listNode_BaseDom), -1, COMMID(28), INT64(102), INT64(57));
    chpl_macro_tmp_5756.locale = (this_chpl6).locale;
    chpl_macro_tmp_5756.addr = &(((this_chpl6).addr)->last_chpl);
    chpl_gen_comm_put(((void*)(&coerce_tmp_chpl4)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5756).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5756).addr, sizeof(chpl____wide_listNode_BaseDom), -1, COMMID(29), INT64(102), INT64(57));
  } else {
    cast_tmp_chpl2 = chpl_here_alloc(sizeof(chpl_listNode_BaseDom_chpl_object), INT16(11));
    this_chpl8 = ((listNode_BaseDom_chpl)(cast_tmp_chpl2));
    ((object)(this_chpl8))->chpl__cid = chpl__cid_listNode_BaseDom_chpl;
    chpl_macro_tmp_5757.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5757.addr = nil;
    chpl_macro_tmp_5758.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5758.addr = NULL;
    tmp_chpl6 = chpl_macro_tmp_5758;
    (this_chpl8)->data_chpl = tmp_chpl6;
    chpl_macro_tmp_5759.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5759.addr = nil;
    chpl_macro_tmp_5760.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5760.addr = NULL;
    tmp_chpl7 = chpl_macro_tmp_5760;
    (this_chpl8)->next_chpl = tmp_chpl7;
    (this_chpl8)->data_chpl = e_chpl;
    call_tmp_chpl4 = ((listNode_BaseDom_chpl)(nil));
    chpl_macro_tmp_5761.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5761.addr = call_tmp_chpl4;
    tmp_chpl8 = chpl_macro_tmp_5761;
    (this_chpl8)->next_chpl = tmp_chpl8;
    wrap_call_tmp_chpl2 = _construct_listNode_chpl2(e_chpl, call_tmp_chpl4, this_chpl8);
    chpl_macro_tmp_5762.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5762.addr = wrap_call_tmp_chpl2;
    tmp_chpl9 = chpl_macro_tmp_5762;
    chpl_macro_tmp_5763.locale = (this_chpl6).locale;
    chpl_macro_tmp_5763.addr = &(((this_chpl6).addr)->first_chpl);
    chpl_gen_comm_put(((void*)(&tmp_chpl9)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5763).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5763).addr, sizeof(chpl____wide_listNode_BaseDom), -1, COMMID(30), INT64(104), INT64(57));
    chpl_macro_tmp_5764.locale = (this_chpl6).locale;
    chpl_macro_tmp_5764.addr = &(((this_chpl6).addr)->first_chpl);
    chpl_gen_comm_get(((void*)(&coerce_tmp_chpl5)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5764).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5764).addr, sizeof(chpl____wide_listNode_BaseDom), -1, COMMID(31), INT64(105), INT64(57));
    chpl_macro_tmp_5765.locale = (this_chpl6).locale;
    chpl_macro_tmp_5765.addr = &(((this_chpl6).addr)->last_chpl);
    chpl_gen_comm_put(((void*)(&coerce_tmp_chpl5)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5765).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5765).addr, sizeof(chpl____wide_listNode_BaseDom), -1, COMMID(32), INT64(105), INT64(57));
  }
  chpl_macro_tmp_5766.locale = (this_chpl6).locale;
  chpl_macro_tmp_5766.addr = &(((this_chpl6).addr)->length_chpl);
  call_tmp_chpl5 = chpl_macro_tmp_5766;
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_5767)), chpl_nodeFromLocaleID(&((call_tmp_chpl5).locale), INT64(0), INT32(0)), (call_tmp_chpl5).addr, sizeof(int64_t), -1, COMMID(33), INT64(107), INT64(57));
  chpl_macro_tmp_5767 += INT64(1);
  chpl_gen_comm_put(((void*)(&chpl_macro_tmp_5767)), chpl_nodeFromLocaleID(&((call_tmp_chpl5).locale), INT64(0), INT32(0)), (call_tmp_chpl5).addr, sizeof(int64_t), -1, COMMID(34), INT64(107), INT64(57));
  return;
}

/* List.chpl:156 */
static void remove_chpl(chpl____wide__ref_list_BaseDom this_chpl6,
                        chpl____wide_BaseDom x_chpl) {
  chpl____wide_listNode_BaseDom tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseDom coerce_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseDom prev_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  listNode_BaseDom_chpl type_tmp_chpl = NULL;
  chpl_bool tmp_chpl2;
  chpl_bool ret_chpl;
  chpl____wide_object call_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp_chpl2;
  chpl____wide_object tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseDom tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDom coerce_tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseDom coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool ret_chpl2;
  chpl____wide_object call_tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp_chpl6;
  chpl____wide_object tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseDom tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDom coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp_chpl7 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp_chpl8 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp_chpl9 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp_chpl10;
  chpl____wide_object tmp_chpl7 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp_chpl11 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp_chpl12;
  chpl____wide_object tmp_chpl8 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseDom coerce_tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseDom coerce_tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp_chpl13 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp_chpl14 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp_chpl15;
  chpl____wide_listNode_BaseDom coerce_tmp_chpl7 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseDom coerce_tmp_chpl8 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp_chpl18;
  chpl_localeID_t call_tmp_chpl19;
  chpl____wide_listNode_BaseDom rvfDerefTmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect_chpl;
  _class_localson_fn108 _args_foron_fn_chpl = NULL;
  c_void_ptr _args_vforon_fn_chpl;
  chpl____wide__ref_int64_t call_tmp_chpl20 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide_listNode_BaseDom chpl_macro_tmp_5768;
  chpl____wide_listNode_BaseDom chpl_macro_tmp_5769;
  chpl____wide_object chpl_macro_tmp_5770;
  chpl____wide__nilType chpl_macro_tmp_5771;
  chpl____wide_object chpl_macro_tmp_5772;
  chpl____wide__ref__wide_BaseDom chpl_macro_tmp_5773;
  chpl____wide_object chpl_macro_tmp_5774;
  chpl____wide_object chpl_macro_tmp_5775;
  chpl____wide__ref__wide_listNode_BaseDom chpl_macro_tmp_5776;
  chpl____wide_object chpl_macro_tmp_5777;
  chpl____wide__nilType chpl_macro_tmp_5778;
  chpl____wide_object chpl_macro_tmp_5779;
  chpl____wide__ref__wide_BaseDom chpl_macro_tmp_5780;
  chpl____wide_object chpl_macro_tmp_5781;
  chpl____wide_object chpl_macro_tmp_5782;
  chpl____wide_object chpl_macro_tmp_5783;
  chpl____wide__nilType chpl_macro_tmp_5784;
  chpl____wide_object chpl_macro_tmp_5785;
  chpl____wide_object chpl_macro_tmp_5786;
  chpl____wide__nilType chpl_macro_tmp_5787;
  chpl____wide_object chpl_macro_tmp_5788;
  chpl____wide__ref__wide_listNode_BaseDom chpl_macro_tmp_5789;
  chpl____wide__ref__wide_listNode_BaseDom chpl_macro_tmp_5790;
  chpl____wide__ref__wide_listNode_BaseDom chpl_macro_tmp_5791;
  chpl____wide_object chpl_macro_tmp_5792;
  chpl____wide_object chpl_macro_tmp_5793;
  chpl____wide__ref__wide_listNode_BaseDom chpl_macro_tmp_5794;
  chpl____wide__ref__wide_listNode_BaseDom chpl_macro_tmp_5795;
  chpl____wide__ref__wide_listNode_BaseDom chpl_macro_tmp_5796;
  chpl____wide_object chpl_macro_tmp_5797;
  chpl____wide_object chpl_macro_tmp_5798;
  chpl____wide__ref__wide_listNode_BaseDom chpl_macro_tmp_5799;
  chpl__class_localson_fn108_object chpl_macro_tmp_5800;
  chpl____wide__ref_int64_t chpl_macro_tmp_5801;
  int64_t chpl_macro_tmp_5802;
  chpl_macro_tmp_5768.locale = (this_chpl6).locale;
  chpl_macro_tmp_5768.addr = &(((this_chpl6).addr)->first_chpl);
  chpl_gen_comm_get(((void*)(&coerce_tmp_chpl)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5768).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5768).addr, sizeof(chpl____wide_listNode_BaseDom), -1, COMMID(35), INT64(157), INT64(57));
  tmp_chpl = coerce_tmp_chpl;
  type_tmp_chpl = nil;
  chpl_macro_tmp_5769.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5769.addr = type_tmp_chpl;
  prev_chpl = chpl_macro_tmp_5769;
  chpl_macro_tmp_5770.locale = (&coerce_tmp_chpl)->locale;
  chpl_macro_tmp_5770.addr = ((object)((&coerce_tmp_chpl)->addr));
  call_tmp_chpl = chpl_macro_tmp_5770;
  chpl_macro_tmp_5771.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5771.addr = nil;
  chpl_macro_tmp_5772.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5772.addr = NULL;
  tmp_chpl3 = chpl_macro_tmp_5772;
  call_tmp_chpl2 = (((&call_tmp_chpl)->addr != (&tmp_chpl3)->addr) || ((!(! (&call_tmp_chpl)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp_chpl)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&tmp_chpl3)->locale), INT64(0), INT32(0)))));
  if (call_tmp_chpl2) {
    tmp_chpl4 = coerce_tmp_chpl;
    chpl_macro_tmp_5773.locale = (&tmp_chpl4)->locale;
    chpl_macro_tmp_5773.addr = &(((&tmp_chpl4)->addr)->data_chpl);
    chpl_gen_comm_get(((void*)(&coerce_tmp_chpl2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5773).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5773).addr, sizeof(chpl____wide_BaseDom), -1, COMMID(36), INT64(159), INT64(57));
    chpl_macro_tmp_5774.locale = (&coerce_tmp_chpl2)->locale;
    chpl_macro_tmp_5774.addr = ((object)((&coerce_tmp_chpl2)->addr));
    call_tmp_chpl3 = chpl_macro_tmp_5774;
    chpl_macro_tmp_5775.locale = (&x_chpl)->locale;
    chpl_macro_tmp_5775.addr = ((object)((&x_chpl)->addr));
    call_tmp_chpl4 = chpl_macro_tmp_5775;
    ret_chpl = (((&call_tmp_chpl3)->addr != (&call_tmp_chpl4)->addr) || ((!(! (&call_tmp_chpl3)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp_chpl3)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&call_tmp_chpl4)->locale), INT64(0), INT32(0)))));
    goto _end__if_fn453_chpl;
  } else {
    ret_chpl = UINT8(false);
    goto _end__if_fn453_chpl;
  }
  _end__if_fn453_chpl:;
  tmp_chpl2 = ret_chpl;
  while (tmp_chpl2) {
    prev_chpl = tmp_chpl;
    chpl_macro_tmp_5776.locale = (&tmp_chpl)->locale;
    chpl_macro_tmp_5776.addr = &(((&tmp_chpl)->addr)->next_chpl);
    chpl_gen_comm_get(((void*)(&coerce_tmp_chpl3)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5776).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5776).addr, sizeof(chpl____wide_listNode_BaseDom), -1, COMMID(37), INT64(161), INT64(57));
    tmp_chpl = coerce_tmp_chpl3;
    chpl_macro_tmp_5777.locale = (&coerce_tmp_chpl3)->locale;
    chpl_macro_tmp_5777.addr = ((object)((&coerce_tmp_chpl3)->addr));
    call_tmp_chpl5 = chpl_macro_tmp_5777;
    chpl_macro_tmp_5778.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5778.addr = nil;
    chpl_macro_tmp_5779.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5779.addr = NULL;
    tmp_chpl5 = chpl_macro_tmp_5779;
    call_tmp_chpl6 = (((&call_tmp_chpl5)->addr != (&tmp_chpl5)->addr) || ((!(! (&call_tmp_chpl5)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp_chpl5)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&tmp_chpl5)->locale), INT64(0), INT32(0)))));
    if (call_tmp_chpl6) {
      tmp_chpl6 = coerce_tmp_chpl3;
      chpl_macro_tmp_5780.locale = (&tmp_chpl6)->locale;
      chpl_macro_tmp_5780.addr = &(((&tmp_chpl6)->addr)->data_chpl);
      chpl_gen_comm_get(((void*)(&coerce_tmp_chpl4)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5780).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5780).addr, sizeof(chpl____wide_BaseDom), -1, COMMID(38), INT64(159), INT64(57));
      chpl_macro_tmp_5781.locale = (&coerce_tmp_chpl4)->locale;
      chpl_macro_tmp_5781.addr = ((object)((&coerce_tmp_chpl4)->addr));
      call_tmp_chpl7 = chpl_macro_tmp_5781;
      chpl_macro_tmp_5782.locale = (&x_chpl)->locale;
      chpl_macro_tmp_5782.addr = ((object)((&x_chpl)->addr));
      call_tmp_chpl8 = chpl_macro_tmp_5782;
      ret_chpl2 = (((&call_tmp_chpl7)->addr != (&call_tmp_chpl8)->addr) || ((!(! (&call_tmp_chpl7)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp_chpl7)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&call_tmp_chpl8)->locale), INT64(0), INT32(0)))));
      goto _end__if_fn452_chpl;
    } else {
      ret_chpl2 = UINT8(false);
      goto _end__if_fn452_chpl;
    }
    _end__if_fn452_chpl:;
    tmp_chpl2 = ret_chpl2;
  }
  chpl_macro_tmp_5783.locale = (&tmp_chpl)->locale;
  chpl_macro_tmp_5783.addr = ((object)((&tmp_chpl)->addr));
  call_tmp_chpl9 = chpl_macro_tmp_5783;
  chpl_macro_tmp_5784.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5784.addr = nil;
  chpl_macro_tmp_5785.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5785.addr = NULL;
  tmp_chpl7 = chpl_macro_tmp_5785;
  call_tmp_chpl10 = (((&call_tmp_chpl9)->addr != (&tmp_chpl7)->addr) || ((!(! (&call_tmp_chpl9)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp_chpl9)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&tmp_chpl7)->locale), INT64(0), INT32(0)))));
  if (call_tmp_chpl10) {
    chpl_macro_tmp_5786.locale = (&prev_chpl)->locale;
    chpl_macro_tmp_5786.addr = ((object)((&prev_chpl)->addr));
    call_tmp_chpl11 = chpl_macro_tmp_5786;
    chpl_macro_tmp_5787.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5787.addr = nil;
    chpl_macro_tmp_5788.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5788.addr = NULL;
    tmp_chpl8 = chpl_macro_tmp_5788;
    call_tmp_chpl12 = (((&call_tmp_chpl11)->addr != (&tmp_chpl8)->addr) || ((!(! (&call_tmp_chpl11)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp_chpl11)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&tmp_chpl8)->locale), INT64(0), INT32(0)))));
    if (call_tmp_chpl12) {
      chpl_macro_tmp_5789.locale = (&tmp_chpl)->locale;
      chpl_macro_tmp_5789.addr = &(((&tmp_chpl)->addr)->next_chpl);
      chpl_gen_comm_get(((void*)(&coerce_tmp_chpl5)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5789).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5789).addr, sizeof(chpl____wide_listNode_BaseDom), -1, COMMID(39), INT64(165), INT64(57));
      chpl_macro_tmp_5790.locale = (&prev_chpl)->locale;
      chpl_macro_tmp_5790.addr = &(((&prev_chpl)->addr)->next_chpl);
      chpl_gen_comm_put(((void*)(&coerce_tmp_chpl5)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5790).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5790).addr, sizeof(chpl____wide_listNode_BaseDom), -1, COMMID(40), INT64(165), INT64(57));
    }
    chpl_macro_tmp_5791.locale = (this_chpl6).locale;
    chpl_macro_tmp_5791.addr = &(((this_chpl6).addr)->first_chpl);
    chpl_gen_comm_get(((void*)(&coerce_tmp_chpl6)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5791).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5791).addr, sizeof(chpl____wide_listNode_BaseDom), -1, COMMID(41), INT64(166), INT64(57));
    chpl_macro_tmp_5792.locale = (&coerce_tmp_chpl6)->locale;
    chpl_macro_tmp_5792.addr = ((object)((&coerce_tmp_chpl6)->addr));
    call_tmp_chpl13 = chpl_macro_tmp_5792;
    chpl_macro_tmp_5793.locale = (&tmp_chpl)->locale;
    chpl_macro_tmp_5793.addr = ((object)((&tmp_chpl)->addr));
    call_tmp_chpl14 = chpl_macro_tmp_5793;
    call_tmp_chpl15 = (! (((&call_tmp_chpl13)->addr != (&call_tmp_chpl14)->addr) || ((!(! (&call_tmp_chpl13)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp_chpl13)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&call_tmp_chpl14)->locale), INT64(0), INT32(0))))));
    if (call_tmp_chpl15) {
      chpl_macro_tmp_5794.locale = (&tmp_chpl)->locale;
      chpl_macro_tmp_5794.addr = &(((&tmp_chpl)->addr)->next_chpl);
      chpl_gen_comm_get(((void*)(&coerce_tmp_chpl7)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5794).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5794).addr, sizeof(chpl____wide_listNode_BaseDom), -1, COMMID(42), INT64(167), INT64(57));
      chpl_macro_tmp_5795.locale = (this_chpl6).locale;
      chpl_macro_tmp_5795.addr = &(((this_chpl6).addr)->first_chpl);
      chpl_gen_comm_put(((void*)(&coerce_tmp_chpl7)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5795).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5795).addr, sizeof(chpl____wide_listNode_BaseDom), -1, COMMID(43), INT64(167), INT64(57));
    }
    chpl_macro_tmp_5796.locale = (this_chpl6).locale;
    chpl_macro_tmp_5796.addr = &(((this_chpl6).addr)->last_chpl);
    chpl_gen_comm_get(((void*)(&coerce_tmp_chpl8)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5796).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5796).addr, sizeof(chpl____wide_listNode_BaseDom), -1, COMMID(44), INT64(168), INT64(57));
    chpl_macro_tmp_5797.locale = (&coerce_tmp_chpl8)->locale;
    chpl_macro_tmp_5797.addr = ((object)((&coerce_tmp_chpl8)->addr));
    call_tmp_chpl16 = chpl_macro_tmp_5797;
    chpl_macro_tmp_5798.locale = (&tmp_chpl)->locale;
    chpl_macro_tmp_5798.addr = ((object)((&tmp_chpl)->addr));
    call_tmp_chpl17 = chpl_macro_tmp_5798;
    call_tmp_chpl18 = (! (((&call_tmp_chpl16)->addr != (&call_tmp_chpl17)->addr) || ((!(! (&call_tmp_chpl16)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp_chpl16)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&call_tmp_chpl17)->locale), INT64(0), INT32(0))))));
    if (call_tmp_chpl18) {
      chpl_macro_tmp_5799.locale = (this_chpl6).locale;
      chpl_macro_tmp_5799.addr = &(((this_chpl6).addr)->last_chpl);
      chpl_gen_comm_put(((void*)(&prev_chpl)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5799).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5799).addr, sizeof(chpl____wide_listNode_BaseDom), -1, COMMID(45), INT64(169), INT64(57));
    }
    call_tmp_chpl19 = (&tmp_chpl)->locale;
    rvfDerefTmp_chpl = tmp_chpl;
    isdirect_chpl = chpl_doDirectExecuteOn(&call_tmp_chpl19);
    if (isdirect_chpl) {
      on_fn121(rvfDerefTmp_chpl);
    } else {
      _args_foron_fn_chpl = ((_class_localson_fn108)(&chpl_macro_tmp_5800));
      (_args_foron_fn_chpl)->_0_rvfDerefTmp = call_tmp_chpl19;
      (_args_foron_fn_chpl)->_1_rvfDerefTmp = rvfDerefTmp_chpl;
      _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
      /*** wrapon_fn140 ***/ chpl_executeOn(&call_tmp_chpl19, INT32(205), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), sizeof(chpl__class_localson_fn108_object), INT64(1227), INT32(2));
    }
    chpl_macro_tmp_5801.locale = (this_chpl6).locale;
    chpl_macro_tmp_5801.addr = &(((this_chpl6).addr)->length_chpl);
    call_tmp_chpl20 = chpl_macro_tmp_5801;
    chpl_gen_comm_get(((void*)(&chpl_macro_tmp_5802)), chpl_nodeFromLocaleID(&((call_tmp_chpl20).locale), INT64(0), INT32(0)), (call_tmp_chpl20).addr, sizeof(int64_t), -1, COMMID(46), INT64(171), INT64(57));
    chpl_macro_tmp_5802 -= INT64(1);
    chpl_gen_comm_put(((void*)(&chpl_macro_tmp_5802)), chpl_nodeFromLocaleID(&((call_tmp_chpl20).locale), INT64(0), INT32(0)), (call_tmp_chpl20).addr, sizeof(int64_t), -1, COMMID(47), INT64(171), INT64(57));
  }
  return;
}

/* List.chpl:156 */
static void _local_remove_chpl2(chpl____wide__ref_list_BaseArr this_chpl6,
                                chpl____wide_BaseArr x_chpl) {
  chpl____wide_listNode_BaseArr tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseArr coerce_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_list_BaseArr local_this_chpl = NULL;
  chpl____wide_listNode_BaseArr prev_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  listNode_BaseArr_chpl type_tmp_chpl = NULL;
  chpl_bool tmp_chpl2;
  chpl_bool ret_chpl;
  chpl____wide_object call_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp_chpl2;
  chpl____wide_object tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseArr tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr coerce_tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  listNode_BaseArr_chpl local_tmp_chpl = NULL;
  chpl____wide_object call_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseArr coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  listNode_BaseArr_chpl local_tmp_chpl2 = NULL;
  chpl_bool ret_chpl2;
  chpl____wide_object call_tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp_chpl6;
  chpl____wide_object tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseArr tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  listNode_BaseArr_chpl local_tmp_chpl3 = NULL;
  chpl____wide_object call_tmp_chpl7 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp_chpl8 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp_chpl9 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp_chpl10;
  chpl____wide_object tmp_chpl7 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp_chpl11 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp_chpl12;
  chpl____wide_object tmp_chpl8 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseArr coerce_tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  listNode_BaseArr_chpl local_tmp_chpl4 = NULL;
  listNode_BaseArr_chpl local_prev_chpl = NULL;
  chpl____wide_listNode_BaseArr coerce_tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_list_BaseArr local_this_chpl2 = NULL;
  chpl____wide_object call_tmp_chpl13 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp_chpl14 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp_chpl15;
  chpl____wide_listNode_BaseArr coerce_tmp_chpl7 = {CHPL_LOCALEID_T_INIT, NULL};
  listNode_BaseArr_chpl local_tmp_chpl5 = NULL;
  _ref_list_BaseArr local_this_chpl3 = NULL;
  chpl____wide_listNode_BaseArr coerce_tmp_chpl8 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_list_BaseArr local_this_chpl4 = NULL;
  chpl____wide_object call_tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp_chpl18;
  _ref_list_BaseArr local_this_chpl5 = NULL;
  chpl_localeID_t call_tmp_chpl19;
  chpl____wide_listNode_BaseArr rvfDerefTmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect_chpl;
  _class_localson_fn109 _args_foron_fn_chpl = NULL;
  c_void_ptr _args_vforon_fn_chpl;
  chpl____wide__ref_int64_t call_tmp_chpl20 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_list_BaseArr local_this_chpl6 = NULL;
  _ref_int64_t local_call_tmp_chpl = NULL;
  chpl____wide_listNode_BaseArr chpl_macro_tmp_5803;
  chpl____wide_object chpl_macro_tmp_5804;
  chpl____wide__nilType chpl_macro_tmp_5805;
  chpl____wide_object chpl_macro_tmp_5806;
  chpl____wide_object chpl_macro_tmp_5807;
  chpl____wide_object chpl_macro_tmp_5808;
  chpl____wide_object chpl_macro_tmp_5809;
  chpl____wide__nilType chpl_macro_tmp_5810;
  chpl____wide_object chpl_macro_tmp_5811;
  chpl____wide_object chpl_macro_tmp_5812;
  chpl____wide_object chpl_macro_tmp_5813;
  chpl____wide_object chpl_macro_tmp_5814;
  chpl____wide__nilType chpl_macro_tmp_5815;
  chpl____wide_object chpl_macro_tmp_5816;
  chpl____wide_object chpl_macro_tmp_5817;
  chpl____wide__nilType chpl_macro_tmp_5818;
  chpl____wide_object chpl_macro_tmp_5819;
  chpl____wide_object chpl_macro_tmp_5820;
  chpl____wide_object chpl_macro_tmp_5821;
  chpl____wide_object chpl_macro_tmp_5822;
  chpl____wide_object chpl_macro_tmp_5823;
  chpl__class_localson_fn109_object chpl_macro_tmp_5824;
  chpl____wide__ref_int64_t chpl_macro_tmp_5825;
  local_this_chpl = (&this_chpl6)->addr;
  coerce_tmp_chpl = (local_this_chpl)->first_chpl;
  tmp_chpl = coerce_tmp_chpl;
  type_tmp_chpl = nil;
  chpl_macro_tmp_5803.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5803.addr = type_tmp_chpl;
  prev_chpl = chpl_macro_tmp_5803;
  chpl_macro_tmp_5804.locale = (&coerce_tmp_chpl)->locale;
  chpl_macro_tmp_5804.addr = ((object)((&coerce_tmp_chpl)->addr));
  call_tmp_chpl = chpl_macro_tmp_5804;
  chpl_macro_tmp_5805.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5805.addr = nil;
  chpl_macro_tmp_5806.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5806.addr = NULL;
  tmp_chpl3 = chpl_macro_tmp_5806;
  call_tmp_chpl2 = (((&call_tmp_chpl)->addr != (&tmp_chpl3)->addr) || ((!(! (&call_tmp_chpl)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp_chpl)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&tmp_chpl3)->locale), INT64(0), INT32(0)))));
  if (call_tmp_chpl2) {
    tmp_chpl4 = coerce_tmp_chpl;
    local_tmp_chpl = (&tmp_chpl4)->addr;
    coerce_tmp_chpl2 = (local_tmp_chpl)->data_chpl;
    chpl_macro_tmp_5807.locale = (&coerce_tmp_chpl2)->locale;
    chpl_macro_tmp_5807.addr = ((object)((&coerce_tmp_chpl2)->addr));
    call_tmp_chpl3 = chpl_macro_tmp_5807;
    chpl_macro_tmp_5808.locale = (&x_chpl)->locale;
    chpl_macro_tmp_5808.addr = ((object)((&x_chpl)->addr));
    call_tmp_chpl4 = chpl_macro_tmp_5808;
    ret_chpl = (((&call_tmp_chpl3)->addr != (&call_tmp_chpl4)->addr) || ((!(! (&call_tmp_chpl3)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp_chpl3)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&call_tmp_chpl4)->locale), INT64(0), INT32(0)))));
    goto _end__if_fn453_chpl;
  } else {
    ret_chpl = UINT8(false);
    goto _end__if_fn453_chpl;
  }
  _end__if_fn453_chpl:;
  tmp_chpl2 = ret_chpl;
  while (tmp_chpl2) {
    prev_chpl = tmp_chpl;
    local_tmp_chpl2 = (&tmp_chpl)->addr;
    coerce_tmp_chpl3 = (local_tmp_chpl2)->next_chpl;
    tmp_chpl = coerce_tmp_chpl3;
    chpl_macro_tmp_5809.locale = (&coerce_tmp_chpl3)->locale;
    chpl_macro_tmp_5809.addr = ((object)((&coerce_tmp_chpl3)->addr));
    call_tmp_chpl5 = chpl_macro_tmp_5809;
    chpl_macro_tmp_5810.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5810.addr = nil;
    chpl_macro_tmp_5811.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5811.addr = NULL;
    tmp_chpl5 = chpl_macro_tmp_5811;
    call_tmp_chpl6 = (((&call_tmp_chpl5)->addr != (&tmp_chpl5)->addr) || ((!(! (&call_tmp_chpl5)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp_chpl5)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&tmp_chpl5)->locale), INT64(0), INT32(0)))));
    if (call_tmp_chpl6) {
      tmp_chpl6 = coerce_tmp_chpl3;
      local_tmp_chpl3 = (&tmp_chpl6)->addr;
      coerce_tmp_chpl4 = (local_tmp_chpl3)->data_chpl;
      chpl_macro_tmp_5812.locale = (&coerce_tmp_chpl4)->locale;
      chpl_macro_tmp_5812.addr = ((object)((&coerce_tmp_chpl4)->addr));
      call_tmp_chpl7 = chpl_macro_tmp_5812;
      chpl_macro_tmp_5813.locale = (&x_chpl)->locale;
      chpl_macro_tmp_5813.addr = ((object)((&x_chpl)->addr));
      call_tmp_chpl8 = chpl_macro_tmp_5813;
      ret_chpl2 = (((&call_tmp_chpl7)->addr != (&call_tmp_chpl8)->addr) || ((!(! (&call_tmp_chpl7)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp_chpl7)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&call_tmp_chpl8)->locale), INT64(0), INT32(0)))));
      goto _end__if_fn452_chpl;
    } else {
      ret_chpl2 = UINT8(false);
      goto _end__if_fn452_chpl;
    }
    _end__if_fn452_chpl:;
    tmp_chpl2 = ret_chpl2;
  }
  chpl_macro_tmp_5814.locale = (&tmp_chpl)->locale;
  chpl_macro_tmp_5814.addr = ((object)((&tmp_chpl)->addr));
  call_tmp_chpl9 = chpl_macro_tmp_5814;
  chpl_macro_tmp_5815.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5815.addr = nil;
  chpl_macro_tmp_5816.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5816.addr = NULL;
  tmp_chpl7 = chpl_macro_tmp_5816;
  call_tmp_chpl10 = (((&call_tmp_chpl9)->addr != (&tmp_chpl7)->addr) || ((!(! (&call_tmp_chpl9)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp_chpl9)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&tmp_chpl7)->locale), INT64(0), INT32(0)))));
  if (call_tmp_chpl10) {
    chpl_macro_tmp_5817.locale = (&prev_chpl)->locale;
    chpl_macro_tmp_5817.addr = ((object)((&prev_chpl)->addr));
    call_tmp_chpl11 = chpl_macro_tmp_5817;
    chpl_macro_tmp_5818.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5818.addr = nil;
    chpl_macro_tmp_5819.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5819.addr = NULL;
    tmp_chpl8 = chpl_macro_tmp_5819;
    call_tmp_chpl12 = (((&call_tmp_chpl11)->addr != (&tmp_chpl8)->addr) || ((!(! (&call_tmp_chpl11)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp_chpl11)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&tmp_chpl8)->locale), INT64(0), INT32(0)))));
    if (call_tmp_chpl12) {
      local_tmp_chpl4 = (&tmp_chpl)->addr;
      coerce_tmp_chpl5 = (local_tmp_chpl4)->next_chpl;
      local_prev_chpl = (&prev_chpl)->addr;
      (local_prev_chpl)->next_chpl = coerce_tmp_chpl5;
    }
    local_this_chpl2 = (&this_chpl6)->addr;
    coerce_tmp_chpl6 = (local_this_chpl2)->first_chpl;
    chpl_macro_tmp_5820.locale = (&coerce_tmp_chpl6)->locale;
    chpl_macro_tmp_5820.addr = ((object)((&coerce_tmp_chpl6)->addr));
    call_tmp_chpl13 = chpl_macro_tmp_5820;
    chpl_macro_tmp_5821.locale = (&tmp_chpl)->locale;
    chpl_macro_tmp_5821.addr = ((object)((&tmp_chpl)->addr));
    call_tmp_chpl14 = chpl_macro_tmp_5821;
    call_tmp_chpl15 = (! (((&call_tmp_chpl13)->addr != (&call_tmp_chpl14)->addr) || ((!(! (&call_tmp_chpl13)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp_chpl13)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&call_tmp_chpl14)->locale), INT64(0), INT32(0))))));
    if (call_tmp_chpl15) {
      local_tmp_chpl5 = (&tmp_chpl)->addr;
      coerce_tmp_chpl7 = (local_tmp_chpl5)->next_chpl;
      local_this_chpl3 = (&this_chpl6)->addr;
      (local_this_chpl3)->first_chpl = coerce_tmp_chpl7;
    }
    local_this_chpl4 = (&this_chpl6)->addr;
    coerce_tmp_chpl8 = (local_this_chpl4)->last_chpl;
    chpl_macro_tmp_5822.locale = (&coerce_tmp_chpl8)->locale;
    chpl_macro_tmp_5822.addr = ((object)((&coerce_tmp_chpl8)->addr));
    call_tmp_chpl16 = chpl_macro_tmp_5822;
    chpl_macro_tmp_5823.locale = (&tmp_chpl)->locale;
    chpl_macro_tmp_5823.addr = ((object)((&tmp_chpl)->addr));
    call_tmp_chpl17 = chpl_macro_tmp_5823;
    call_tmp_chpl18 = (! (((&call_tmp_chpl16)->addr != (&call_tmp_chpl17)->addr) || ((!(! (&call_tmp_chpl16)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp_chpl16)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&call_tmp_chpl17)->locale), INT64(0), INT32(0))))));
    if (call_tmp_chpl18) {
      local_this_chpl5 = (&this_chpl6)->addr;
      (local_this_chpl5)->last_chpl = prev_chpl;
    }
    call_tmp_chpl19 = (&tmp_chpl)->locale;
    rvfDerefTmp_chpl = tmp_chpl;
    isdirect_chpl = _local_chpl_doDirectExecuteOn(&call_tmp_chpl19);
    if (isdirect_chpl) {
      _local_on_fn4(rvfDerefTmp_chpl);
    } else {
      _args_foron_fn_chpl = ((_class_localson_fn109)(&chpl_macro_tmp_5824));
      (_args_foron_fn_chpl)->_0_rvfDerefTmp = call_tmp_chpl19;
      (_args_foron_fn_chpl)->_1_rvfDerefTmp = rvfDerefTmp_chpl;
      _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
      /*** _local_wrapon_fn3 ***/ chpl_executeOn(&call_tmp_chpl19, INT32(164), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), sizeof(chpl__class_localson_fn109_object), INT64(1227), INT32(2));
    }
    local_this_chpl6 = (&this_chpl6)->addr;
    chpl_macro_tmp_5825.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5825.addr = &((local_this_chpl6)->length_chpl);
    call_tmp_chpl20 = chpl_macro_tmp_5825;
    local_call_tmp_chpl = (&call_tmp_chpl20)->addr;
    *(local_call_tmp_chpl) -= INT64(1);
  }
  return;
}

/* List.chpl:156 */
static void remove_chpl2(chpl____wide__ref_list_BaseArr this_chpl6,
                         chpl____wide_BaseArr x_chpl) {
  chpl____wide_listNode_BaseArr tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseArr coerce_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseArr prev_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  listNode_BaseArr_chpl type_tmp_chpl = NULL;
  chpl_bool tmp_chpl2;
  chpl_bool ret_chpl;
  chpl____wide_object call_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp_chpl2;
  chpl____wide_object tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseArr tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr coerce_tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseArr coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool ret_chpl2;
  chpl____wide_object call_tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp_chpl6;
  chpl____wide_object tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseArr tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseArr coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp_chpl7 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp_chpl8 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp_chpl9 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp_chpl10;
  chpl____wide_object tmp_chpl7 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp_chpl11 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp_chpl12;
  chpl____wide_object tmp_chpl8 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseArr coerce_tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseArr coerce_tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp_chpl13 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp_chpl14 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp_chpl15;
  chpl____wide_listNode_BaseArr coerce_tmp_chpl7 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseArr coerce_tmp_chpl8 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp_chpl18;
  chpl_localeID_t call_tmp_chpl19;
  chpl____wide_listNode_BaseArr rvfDerefTmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect_chpl;
  _class_localson_fn109 _args_foron_fn_chpl = NULL;
  c_void_ptr _args_vforon_fn_chpl;
  chpl____wide__ref_int64_t call_tmp_chpl20 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide_listNode_BaseArr chpl_macro_tmp_5826;
  chpl____wide_listNode_BaseArr chpl_macro_tmp_5827;
  chpl____wide_object chpl_macro_tmp_5828;
  chpl____wide__nilType chpl_macro_tmp_5829;
  chpl____wide_object chpl_macro_tmp_5830;
  chpl____wide__ref__wide_BaseArr chpl_macro_tmp_5831;
  chpl____wide_object chpl_macro_tmp_5832;
  chpl____wide_object chpl_macro_tmp_5833;
  chpl____wide__ref__wide_listNode_BaseArr chpl_macro_tmp_5834;
  chpl____wide_object chpl_macro_tmp_5835;
  chpl____wide__nilType chpl_macro_tmp_5836;
  chpl____wide_object chpl_macro_tmp_5837;
  chpl____wide__ref__wide_BaseArr chpl_macro_tmp_5838;
  chpl____wide_object chpl_macro_tmp_5839;
  chpl____wide_object chpl_macro_tmp_5840;
  chpl____wide_object chpl_macro_tmp_5841;
  chpl____wide__nilType chpl_macro_tmp_5842;
  chpl____wide_object chpl_macro_tmp_5843;
  chpl____wide_object chpl_macro_tmp_5844;
  chpl____wide__nilType chpl_macro_tmp_5845;
  chpl____wide_object chpl_macro_tmp_5846;
  chpl____wide__ref__wide_listNode_BaseArr chpl_macro_tmp_5847;
  chpl____wide__ref__wide_listNode_BaseArr chpl_macro_tmp_5848;
  chpl____wide__ref__wide_listNode_BaseArr chpl_macro_tmp_5849;
  chpl____wide_object chpl_macro_tmp_5850;
  chpl____wide_object chpl_macro_tmp_5851;
  chpl____wide__ref__wide_listNode_BaseArr chpl_macro_tmp_5852;
  chpl____wide__ref__wide_listNode_BaseArr chpl_macro_tmp_5853;
  chpl____wide__ref__wide_listNode_BaseArr chpl_macro_tmp_5854;
  chpl____wide_object chpl_macro_tmp_5855;
  chpl____wide_object chpl_macro_tmp_5856;
  chpl____wide__ref__wide_listNode_BaseArr chpl_macro_tmp_5857;
  chpl__class_localson_fn109_object chpl_macro_tmp_5858;
  chpl____wide__ref_int64_t chpl_macro_tmp_5859;
  int64_t chpl_macro_tmp_5860;
  chpl_macro_tmp_5826.locale = (this_chpl6).locale;
  chpl_macro_tmp_5826.addr = &(((this_chpl6).addr)->first_chpl);
  chpl_gen_comm_get(((void*)(&coerce_tmp_chpl)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5826).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5826).addr, sizeof(chpl____wide_listNode_BaseArr), -1, COMMID(48), INT64(157), INT64(57));
  tmp_chpl = coerce_tmp_chpl;
  type_tmp_chpl = nil;
  chpl_macro_tmp_5827.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5827.addr = type_tmp_chpl;
  prev_chpl = chpl_macro_tmp_5827;
  chpl_macro_tmp_5828.locale = (&coerce_tmp_chpl)->locale;
  chpl_macro_tmp_5828.addr = ((object)((&coerce_tmp_chpl)->addr));
  call_tmp_chpl = chpl_macro_tmp_5828;
  chpl_macro_tmp_5829.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5829.addr = nil;
  chpl_macro_tmp_5830.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5830.addr = NULL;
  tmp_chpl3 = chpl_macro_tmp_5830;
  call_tmp_chpl2 = (((&call_tmp_chpl)->addr != (&tmp_chpl3)->addr) || ((!(! (&call_tmp_chpl)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp_chpl)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&tmp_chpl3)->locale), INT64(0), INT32(0)))));
  if (call_tmp_chpl2) {
    tmp_chpl4 = coerce_tmp_chpl;
    chpl_macro_tmp_5831.locale = (&tmp_chpl4)->locale;
    chpl_macro_tmp_5831.addr = &(((&tmp_chpl4)->addr)->data_chpl);
    chpl_gen_comm_get(((void*)(&coerce_tmp_chpl2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5831).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5831).addr, sizeof(chpl____wide_BaseArr), -1, COMMID(49), INT64(159), INT64(57));
    chpl_macro_tmp_5832.locale = (&coerce_tmp_chpl2)->locale;
    chpl_macro_tmp_5832.addr = ((object)((&coerce_tmp_chpl2)->addr));
    call_tmp_chpl3 = chpl_macro_tmp_5832;
    chpl_macro_tmp_5833.locale = (&x_chpl)->locale;
    chpl_macro_tmp_5833.addr = ((object)((&x_chpl)->addr));
    call_tmp_chpl4 = chpl_macro_tmp_5833;
    ret_chpl = (((&call_tmp_chpl3)->addr != (&call_tmp_chpl4)->addr) || ((!(! (&call_tmp_chpl3)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp_chpl3)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&call_tmp_chpl4)->locale), INT64(0), INT32(0)))));
    goto _end__if_fn453_chpl;
  } else {
    ret_chpl = UINT8(false);
    goto _end__if_fn453_chpl;
  }
  _end__if_fn453_chpl:;
  tmp_chpl2 = ret_chpl;
  while (tmp_chpl2) {
    prev_chpl = tmp_chpl;
    chpl_macro_tmp_5834.locale = (&tmp_chpl)->locale;
    chpl_macro_tmp_5834.addr = &(((&tmp_chpl)->addr)->next_chpl);
    chpl_gen_comm_get(((void*)(&coerce_tmp_chpl3)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5834).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5834).addr, sizeof(chpl____wide_listNode_BaseArr), -1, COMMID(50), INT64(161), INT64(57));
    tmp_chpl = coerce_tmp_chpl3;
    chpl_macro_tmp_5835.locale = (&coerce_tmp_chpl3)->locale;
    chpl_macro_tmp_5835.addr = ((object)((&coerce_tmp_chpl3)->addr));
    call_tmp_chpl5 = chpl_macro_tmp_5835;
    chpl_macro_tmp_5836.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5836.addr = nil;
    chpl_macro_tmp_5837.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5837.addr = NULL;
    tmp_chpl5 = chpl_macro_tmp_5837;
    call_tmp_chpl6 = (((&call_tmp_chpl5)->addr != (&tmp_chpl5)->addr) || ((!(! (&call_tmp_chpl5)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp_chpl5)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&tmp_chpl5)->locale), INT64(0), INT32(0)))));
    if (call_tmp_chpl6) {
      tmp_chpl6 = coerce_tmp_chpl3;
      chpl_macro_tmp_5838.locale = (&tmp_chpl6)->locale;
      chpl_macro_tmp_5838.addr = &(((&tmp_chpl6)->addr)->data_chpl);
      chpl_gen_comm_get(((void*)(&coerce_tmp_chpl4)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5838).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5838).addr, sizeof(chpl____wide_BaseArr), -1, COMMID(51), INT64(159), INT64(57));
      chpl_macro_tmp_5839.locale = (&coerce_tmp_chpl4)->locale;
      chpl_macro_tmp_5839.addr = ((object)((&coerce_tmp_chpl4)->addr));
      call_tmp_chpl7 = chpl_macro_tmp_5839;
      chpl_macro_tmp_5840.locale = (&x_chpl)->locale;
      chpl_macro_tmp_5840.addr = ((object)((&x_chpl)->addr));
      call_tmp_chpl8 = chpl_macro_tmp_5840;
      ret_chpl2 = (((&call_tmp_chpl7)->addr != (&call_tmp_chpl8)->addr) || ((!(! (&call_tmp_chpl7)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp_chpl7)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&call_tmp_chpl8)->locale), INT64(0), INT32(0)))));
      goto _end__if_fn452_chpl;
    } else {
      ret_chpl2 = UINT8(false);
      goto _end__if_fn452_chpl;
    }
    _end__if_fn452_chpl:;
    tmp_chpl2 = ret_chpl2;
  }
  chpl_macro_tmp_5841.locale = (&tmp_chpl)->locale;
  chpl_macro_tmp_5841.addr = ((object)((&tmp_chpl)->addr));
  call_tmp_chpl9 = chpl_macro_tmp_5841;
  chpl_macro_tmp_5842.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5842.addr = nil;
  chpl_macro_tmp_5843.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5843.addr = NULL;
  tmp_chpl7 = chpl_macro_tmp_5843;
  call_tmp_chpl10 = (((&call_tmp_chpl9)->addr != (&tmp_chpl7)->addr) || ((!(! (&call_tmp_chpl9)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp_chpl9)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&tmp_chpl7)->locale), INT64(0), INT32(0)))));
  if (call_tmp_chpl10) {
    chpl_macro_tmp_5844.locale = (&prev_chpl)->locale;
    chpl_macro_tmp_5844.addr = ((object)((&prev_chpl)->addr));
    call_tmp_chpl11 = chpl_macro_tmp_5844;
    chpl_macro_tmp_5845.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5845.addr = nil;
    chpl_macro_tmp_5846.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5846.addr = NULL;
    tmp_chpl8 = chpl_macro_tmp_5846;
    call_tmp_chpl12 = (((&call_tmp_chpl11)->addr != (&tmp_chpl8)->addr) || ((!(! (&call_tmp_chpl11)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp_chpl11)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&tmp_chpl8)->locale), INT64(0), INT32(0)))));
    if (call_tmp_chpl12) {
      chpl_macro_tmp_5847.locale = (&tmp_chpl)->locale;
      chpl_macro_tmp_5847.addr = &(((&tmp_chpl)->addr)->next_chpl);
      chpl_gen_comm_get(((void*)(&coerce_tmp_chpl5)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5847).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5847).addr, sizeof(chpl____wide_listNode_BaseArr), -1, COMMID(52), INT64(165), INT64(57));
      chpl_macro_tmp_5848.locale = (&prev_chpl)->locale;
      chpl_macro_tmp_5848.addr = &(((&prev_chpl)->addr)->next_chpl);
      chpl_gen_comm_put(((void*)(&coerce_tmp_chpl5)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5848).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5848).addr, sizeof(chpl____wide_listNode_BaseArr), -1, COMMID(53), INT64(165), INT64(57));
    }
    chpl_macro_tmp_5849.locale = (this_chpl6).locale;
    chpl_macro_tmp_5849.addr = &(((this_chpl6).addr)->first_chpl);
    chpl_gen_comm_get(((void*)(&coerce_tmp_chpl6)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5849).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5849).addr, sizeof(chpl____wide_listNode_BaseArr), -1, COMMID(54), INT64(166), INT64(57));
    chpl_macro_tmp_5850.locale = (&coerce_tmp_chpl6)->locale;
    chpl_macro_tmp_5850.addr = ((object)((&coerce_tmp_chpl6)->addr));
    call_tmp_chpl13 = chpl_macro_tmp_5850;
    chpl_macro_tmp_5851.locale = (&tmp_chpl)->locale;
    chpl_macro_tmp_5851.addr = ((object)((&tmp_chpl)->addr));
    call_tmp_chpl14 = chpl_macro_tmp_5851;
    call_tmp_chpl15 = (! (((&call_tmp_chpl13)->addr != (&call_tmp_chpl14)->addr) || ((!(! (&call_tmp_chpl13)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp_chpl13)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&call_tmp_chpl14)->locale), INT64(0), INT32(0))))));
    if (call_tmp_chpl15) {
      chpl_macro_tmp_5852.locale = (&tmp_chpl)->locale;
      chpl_macro_tmp_5852.addr = &(((&tmp_chpl)->addr)->next_chpl);
      chpl_gen_comm_get(((void*)(&coerce_tmp_chpl7)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5852).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5852).addr, sizeof(chpl____wide_listNode_BaseArr), -1, COMMID(55), INT64(167), INT64(57));
      chpl_macro_tmp_5853.locale = (this_chpl6).locale;
      chpl_macro_tmp_5853.addr = &(((this_chpl6).addr)->first_chpl);
      chpl_gen_comm_put(((void*)(&coerce_tmp_chpl7)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5853).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5853).addr, sizeof(chpl____wide_listNode_BaseArr), -1, COMMID(56), INT64(167), INT64(57));
    }
    chpl_macro_tmp_5854.locale = (this_chpl6).locale;
    chpl_macro_tmp_5854.addr = &(((this_chpl6).addr)->last_chpl);
    chpl_gen_comm_get(((void*)(&coerce_tmp_chpl8)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5854).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5854).addr, sizeof(chpl____wide_listNode_BaseArr), -1, COMMID(57), INT64(168), INT64(57));
    chpl_macro_tmp_5855.locale = (&coerce_tmp_chpl8)->locale;
    chpl_macro_tmp_5855.addr = ((object)((&coerce_tmp_chpl8)->addr));
    call_tmp_chpl16 = chpl_macro_tmp_5855;
    chpl_macro_tmp_5856.locale = (&tmp_chpl)->locale;
    chpl_macro_tmp_5856.addr = ((object)((&tmp_chpl)->addr));
    call_tmp_chpl17 = chpl_macro_tmp_5856;
    call_tmp_chpl18 = (! (((&call_tmp_chpl16)->addr != (&call_tmp_chpl17)->addr) || ((!(! (&call_tmp_chpl16)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp_chpl16)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&call_tmp_chpl17)->locale), INT64(0), INT32(0))))));
    if (call_tmp_chpl18) {
      chpl_macro_tmp_5857.locale = (this_chpl6).locale;
      chpl_macro_tmp_5857.addr = &(((this_chpl6).addr)->last_chpl);
      chpl_gen_comm_put(((void*)(&prev_chpl)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5857).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5857).addr, sizeof(chpl____wide_listNode_BaseArr), -1, COMMID(58), INT64(169), INT64(57));
    }
    call_tmp_chpl19 = (&tmp_chpl)->locale;
    rvfDerefTmp_chpl = tmp_chpl;
    isdirect_chpl = chpl_doDirectExecuteOn(&call_tmp_chpl19);
    if (isdirect_chpl) {
      on_fn120(rvfDerefTmp_chpl);
    } else {
      _args_foron_fn_chpl = ((_class_localson_fn109)(&chpl_macro_tmp_5858));
      (_args_foron_fn_chpl)->_0_rvfDerefTmp = call_tmp_chpl19;
      (_args_foron_fn_chpl)->_1_rvfDerefTmp = rvfDerefTmp_chpl;
      _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
      /*** wrapon_fn128 ***/ chpl_executeOn(&call_tmp_chpl19, INT32(193), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), sizeof(chpl__class_localson_fn109_object), INT64(1227), INT32(2));
    }
    chpl_macro_tmp_5859.locale = (this_chpl6).locale;
    chpl_macro_tmp_5859.addr = &(((this_chpl6).addr)->length_chpl);
    call_tmp_chpl20 = chpl_macro_tmp_5859;
    chpl_gen_comm_get(((void*)(&chpl_macro_tmp_5860)), chpl_nodeFromLocaleID(&((call_tmp_chpl20).locale), INT64(0), INT32(0)), (call_tmp_chpl20).addr, sizeof(int64_t), -1, COMMID(59), INT64(171), INT64(57));
    chpl_macro_tmp_5860 -= INT64(1);
    chpl_gen_comm_put(((void*)(&chpl_macro_tmp_5860)), chpl_nodeFromLocaleID(&((call_tmp_chpl20).locale), INT64(0), INT32(0)), (call_tmp_chpl20).addr, sizeof(int64_t), -1, COMMID(60), INT64(171), INT64(57));
  }
  return;
}

/* List.chpl:156 */
static void _local_remove_chpl(chpl____wide__ref_list_BaseDom this_chpl6,
                               chpl____wide_BaseDom x_chpl) {
  chpl____wide_listNode_BaseDom tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseDom coerce_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_list_BaseDom local_this_chpl = NULL;
  chpl____wide_listNode_BaseDom prev_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  listNode_BaseDom_chpl type_tmp_chpl = NULL;
  chpl_bool tmp_chpl2;
  chpl_bool ret_chpl;
  chpl____wide_object call_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp_chpl2;
  chpl____wide_object tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseDom tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDom coerce_tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  listNode_BaseDom_chpl local_tmp_chpl = NULL;
  chpl____wide_object call_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseDom coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  listNode_BaseDom_chpl local_tmp_chpl2 = NULL;
  chpl_bool ret_chpl2;
  chpl____wide_object call_tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp_chpl6;
  chpl____wide_object tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseDom tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_BaseDom coerce_tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  listNode_BaseDom_chpl local_tmp_chpl3 = NULL;
  chpl____wide_object call_tmp_chpl7 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp_chpl8 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp_chpl9 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp_chpl10;
  chpl____wide_object tmp_chpl7 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp_chpl11 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp_chpl12;
  chpl____wide_object tmp_chpl8 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseDom coerce_tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  listNode_BaseDom_chpl local_tmp_chpl4 = NULL;
  listNode_BaseDom_chpl local_prev_chpl = NULL;
  chpl____wide_listNode_BaseDom coerce_tmp_chpl6 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_list_BaseDom local_this_chpl2 = NULL;
  chpl____wide_object call_tmp_chpl13 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp_chpl14 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp_chpl15;
  chpl____wide_listNode_BaseDom coerce_tmp_chpl7 = {CHPL_LOCALEID_T_INIT, NULL};
  listNode_BaseDom_chpl local_tmp_chpl5 = NULL;
  _ref_list_BaseDom local_this_chpl3 = NULL;
  chpl____wide_listNode_BaseDom coerce_tmp_chpl8 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_list_BaseDom local_this_chpl4 = NULL;
  chpl____wide_object call_tmp_chpl16 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp_chpl17 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp_chpl18;
  _ref_list_BaseDom local_this_chpl5 = NULL;
  chpl_localeID_t call_tmp_chpl19;
  chpl____wide_listNode_BaseDom rvfDerefTmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect_chpl;
  _class_localson_fn108 _args_foron_fn_chpl = NULL;
  c_void_ptr _args_vforon_fn_chpl;
  chpl____wide__ref_int64_t call_tmp_chpl20 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_list_BaseDom local_this_chpl6 = NULL;
  _ref_int64_t local_call_tmp_chpl = NULL;
  chpl____wide_listNode_BaseDom chpl_macro_tmp_5861;
  chpl____wide_object chpl_macro_tmp_5862;
  chpl____wide__nilType chpl_macro_tmp_5863;
  chpl____wide_object chpl_macro_tmp_5864;
  chpl____wide_object chpl_macro_tmp_5865;
  chpl____wide_object chpl_macro_tmp_5866;
  chpl____wide_object chpl_macro_tmp_5867;
  chpl____wide__nilType chpl_macro_tmp_5868;
  chpl____wide_object chpl_macro_tmp_5869;
  chpl____wide_object chpl_macro_tmp_5870;
  chpl____wide_object chpl_macro_tmp_5871;
  chpl____wide_object chpl_macro_tmp_5872;
  chpl____wide__nilType chpl_macro_tmp_5873;
  chpl____wide_object chpl_macro_tmp_5874;
  chpl____wide_object chpl_macro_tmp_5875;
  chpl____wide__nilType chpl_macro_tmp_5876;
  chpl____wide_object chpl_macro_tmp_5877;
  chpl____wide_object chpl_macro_tmp_5878;
  chpl____wide_object chpl_macro_tmp_5879;
  chpl____wide_object chpl_macro_tmp_5880;
  chpl____wide_object chpl_macro_tmp_5881;
  chpl__class_localson_fn108_object chpl_macro_tmp_5882;
  chpl____wide__ref_int64_t chpl_macro_tmp_5883;
  local_this_chpl = (&this_chpl6)->addr;
  coerce_tmp_chpl = (local_this_chpl)->first_chpl;
  tmp_chpl = coerce_tmp_chpl;
  type_tmp_chpl = nil;
  chpl_macro_tmp_5861.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5861.addr = type_tmp_chpl;
  prev_chpl = chpl_macro_tmp_5861;
  chpl_macro_tmp_5862.locale = (&coerce_tmp_chpl)->locale;
  chpl_macro_tmp_5862.addr = ((object)((&coerce_tmp_chpl)->addr));
  call_tmp_chpl = chpl_macro_tmp_5862;
  chpl_macro_tmp_5863.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5863.addr = nil;
  chpl_macro_tmp_5864.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5864.addr = NULL;
  tmp_chpl3 = chpl_macro_tmp_5864;
  call_tmp_chpl2 = (((&call_tmp_chpl)->addr != (&tmp_chpl3)->addr) || ((!(! (&call_tmp_chpl)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp_chpl)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&tmp_chpl3)->locale), INT64(0), INT32(0)))));
  if (call_tmp_chpl2) {
    tmp_chpl4 = coerce_tmp_chpl;
    local_tmp_chpl = (&tmp_chpl4)->addr;
    coerce_tmp_chpl2 = (local_tmp_chpl)->data_chpl;
    chpl_macro_tmp_5865.locale = (&coerce_tmp_chpl2)->locale;
    chpl_macro_tmp_5865.addr = ((object)((&coerce_tmp_chpl2)->addr));
    call_tmp_chpl3 = chpl_macro_tmp_5865;
    chpl_macro_tmp_5866.locale = (&x_chpl)->locale;
    chpl_macro_tmp_5866.addr = ((object)((&x_chpl)->addr));
    call_tmp_chpl4 = chpl_macro_tmp_5866;
    ret_chpl = (((&call_tmp_chpl3)->addr != (&call_tmp_chpl4)->addr) || ((!(! (&call_tmp_chpl3)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp_chpl3)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&call_tmp_chpl4)->locale), INT64(0), INT32(0)))));
    goto _end__if_fn453_chpl;
  } else {
    ret_chpl = UINT8(false);
    goto _end__if_fn453_chpl;
  }
  _end__if_fn453_chpl:;
  tmp_chpl2 = ret_chpl;
  while (tmp_chpl2) {
    prev_chpl = tmp_chpl;
    local_tmp_chpl2 = (&tmp_chpl)->addr;
    coerce_tmp_chpl3 = (local_tmp_chpl2)->next_chpl;
    tmp_chpl = coerce_tmp_chpl3;
    chpl_macro_tmp_5867.locale = (&coerce_tmp_chpl3)->locale;
    chpl_macro_tmp_5867.addr = ((object)((&coerce_tmp_chpl3)->addr));
    call_tmp_chpl5 = chpl_macro_tmp_5867;
    chpl_macro_tmp_5868.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5868.addr = nil;
    chpl_macro_tmp_5869.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5869.addr = NULL;
    tmp_chpl5 = chpl_macro_tmp_5869;
    call_tmp_chpl6 = (((&call_tmp_chpl5)->addr != (&tmp_chpl5)->addr) || ((!(! (&call_tmp_chpl5)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp_chpl5)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&tmp_chpl5)->locale), INT64(0), INT32(0)))));
    if (call_tmp_chpl6) {
      tmp_chpl6 = coerce_tmp_chpl3;
      local_tmp_chpl3 = (&tmp_chpl6)->addr;
      coerce_tmp_chpl4 = (local_tmp_chpl3)->data_chpl;
      chpl_macro_tmp_5870.locale = (&coerce_tmp_chpl4)->locale;
      chpl_macro_tmp_5870.addr = ((object)((&coerce_tmp_chpl4)->addr));
      call_tmp_chpl7 = chpl_macro_tmp_5870;
      chpl_macro_tmp_5871.locale = (&x_chpl)->locale;
      chpl_macro_tmp_5871.addr = ((object)((&x_chpl)->addr));
      call_tmp_chpl8 = chpl_macro_tmp_5871;
      ret_chpl2 = (((&call_tmp_chpl7)->addr != (&call_tmp_chpl8)->addr) || ((!(! (&call_tmp_chpl7)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp_chpl7)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&call_tmp_chpl8)->locale), INT64(0), INT32(0)))));
      goto _end__if_fn452_chpl;
    } else {
      ret_chpl2 = UINT8(false);
      goto _end__if_fn452_chpl;
    }
    _end__if_fn452_chpl:;
    tmp_chpl2 = ret_chpl2;
  }
  chpl_macro_tmp_5872.locale = (&tmp_chpl)->locale;
  chpl_macro_tmp_5872.addr = ((object)((&tmp_chpl)->addr));
  call_tmp_chpl9 = chpl_macro_tmp_5872;
  chpl_macro_tmp_5873.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5873.addr = nil;
  chpl_macro_tmp_5874.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5874.addr = NULL;
  tmp_chpl7 = chpl_macro_tmp_5874;
  call_tmp_chpl10 = (((&call_tmp_chpl9)->addr != (&tmp_chpl7)->addr) || ((!(! (&call_tmp_chpl9)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp_chpl9)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&tmp_chpl7)->locale), INT64(0), INT32(0)))));
  if (call_tmp_chpl10) {
    chpl_macro_tmp_5875.locale = (&prev_chpl)->locale;
    chpl_macro_tmp_5875.addr = ((object)((&prev_chpl)->addr));
    call_tmp_chpl11 = chpl_macro_tmp_5875;
    chpl_macro_tmp_5876.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5876.addr = nil;
    chpl_macro_tmp_5877.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5877.addr = NULL;
    tmp_chpl8 = chpl_macro_tmp_5877;
    call_tmp_chpl12 = (((&call_tmp_chpl11)->addr != (&tmp_chpl8)->addr) || ((!(! (&call_tmp_chpl11)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp_chpl11)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&tmp_chpl8)->locale), INT64(0), INT32(0)))));
    if (call_tmp_chpl12) {
      local_tmp_chpl4 = (&tmp_chpl)->addr;
      coerce_tmp_chpl5 = (local_tmp_chpl4)->next_chpl;
      local_prev_chpl = (&prev_chpl)->addr;
      (local_prev_chpl)->next_chpl = coerce_tmp_chpl5;
    }
    local_this_chpl2 = (&this_chpl6)->addr;
    coerce_tmp_chpl6 = (local_this_chpl2)->first_chpl;
    chpl_macro_tmp_5878.locale = (&coerce_tmp_chpl6)->locale;
    chpl_macro_tmp_5878.addr = ((object)((&coerce_tmp_chpl6)->addr));
    call_tmp_chpl13 = chpl_macro_tmp_5878;
    chpl_macro_tmp_5879.locale = (&tmp_chpl)->locale;
    chpl_macro_tmp_5879.addr = ((object)((&tmp_chpl)->addr));
    call_tmp_chpl14 = chpl_macro_tmp_5879;
    call_tmp_chpl15 = (! (((&call_tmp_chpl13)->addr != (&call_tmp_chpl14)->addr) || ((!(! (&call_tmp_chpl13)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp_chpl13)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&call_tmp_chpl14)->locale), INT64(0), INT32(0))))));
    if (call_tmp_chpl15) {
      local_tmp_chpl5 = (&tmp_chpl)->addr;
      coerce_tmp_chpl7 = (local_tmp_chpl5)->next_chpl;
      local_this_chpl3 = (&this_chpl6)->addr;
      (local_this_chpl3)->first_chpl = coerce_tmp_chpl7;
    }
    local_this_chpl4 = (&this_chpl6)->addr;
    coerce_tmp_chpl8 = (local_this_chpl4)->last_chpl;
    chpl_macro_tmp_5880.locale = (&coerce_tmp_chpl8)->locale;
    chpl_macro_tmp_5880.addr = ((object)((&coerce_tmp_chpl8)->addr));
    call_tmp_chpl16 = chpl_macro_tmp_5880;
    chpl_macro_tmp_5881.locale = (&tmp_chpl)->locale;
    chpl_macro_tmp_5881.addr = ((object)((&tmp_chpl)->addr));
    call_tmp_chpl17 = chpl_macro_tmp_5881;
    call_tmp_chpl18 = (! (((&call_tmp_chpl16)->addr != (&call_tmp_chpl17)->addr) || ((!(! (&call_tmp_chpl16)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp_chpl16)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&call_tmp_chpl17)->locale), INT64(0), INT32(0))))));
    if (call_tmp_chpl18) {
      local_this_chpl5 = (&this_chpl6)->addr;
      (local_this_chpl5)->last_chpl = prev_chpl;
    }
    call_tmp_chpl19 = (&tmp_chpl)->locale;
    rvfDerefTmp_chpl = tmp_chpl;
    isdirect_chpl = _local_chpl_doDirectExecuteOn(&call_tmp_chpl19);
    if (isdirect_chpl) {
      _local_on_fn3(rvfDerefTmp_chpl);
    } else {
      _args_foron_fn_chpl = ((_class_localson_fn108)(&chpl_macro_tmp_5882));
      (_args_foron_fn_chpl)->_0_rvfDerefTmp = call_tmp_chpl19;
      (_args_foron_fn_chpl)->_1_rvfDerefTmp = rvfDerefTmp_chpl;
      _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
      /*** _local_wrapon_fn4 ***/ chpl_executeOn(&call_tmp_chpl19, INT32(165), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), sizeof(chpl__class_localson_fn108_object), INT64(1227), INT32(2));
    }
    local_this_chpl6 = (&this_chpl6)->addr;
    chpl_macro_tmp_5883.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5883.addr = &((local_this_chpl6)->length_chpl);
    call_tmp_chpl20 = chpl_macro_tmp_5883;
    local_call_tmp_chpl = (&call_tmp_chpl20)->addr;
    *(local_call_tmp_chpl) -= INT64(1);
  }
  return;
}

/* List.chpl:179 */
static int64_t pop_front_chpl(chpl____wide__ref_list_int64_t this_chpl6) {
  string local__str_literal_2009_chpl;
  int64_t tmp_chpl;
  chpl_bool call_tmp_chpl;
  chpl____wide_listNode_int64_t oldfirst_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_int64_t coerce_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_int64_t coerce_tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_int64_t coerce_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t coerce_tmp_chpl4;
  int64_t tmp_chpl2;
  chpl____wide_listNode_int64_t coerce_tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object call_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp_chpl4;
  chpl____wide__ref_int64_t call_tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_int64_t chpl_macro_tmp_5884;
  chpl____wide__ref__wide_listNode_int64_t chpl_macro_tmp_5885;
  chpl____wide__ref__wide_listNode_int64_t chpl_macro_tmp_5886;
  chpl____wide__ref__wide_listNode_int64_t chpl_macro_tmp_5887;
  chpl____wide__ref_int64_t chpl_macro_tmp_5888;
  chpl____wide__ref__wide_listNode_int64_t chpl_macro_tmp_5889;
  chpl____wide__ref__wide_listNode_int64_t chpl_macro_tmp_5890;
  chpl____wide_object chpl_macro_tmp_5891;
  chpl____wide_object chpl_macro_tmp_5892;
  chpl____wide__ref__wide_listNode_int64_t chpl_macro_tmp_5893;
  chpl____wide__ref_int64_t chpl_macro_tmp_5894;
  int64_t chpl_macro_tmp_5895;
  local__str_literal_2009_chpl /* "pop_front on empty list" */ = _str_literal_2009 /* "pop_front on empty list" */;
  chpl_macro_tmp_5884.locale = (this_chpl6).locale;
  chpl_macro_tmp_5884.addr = &(((this_chpl6).addr)->length_chpl);
  chpl_gen_comm_get(((void*)(&tmp_chpl)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5884).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5884).addr, sizeof(int64_t), -1, COMMID(61), INT64(180), INT64(57));
  call_tmp_chpl = (tmp_chpl < INT64(1));
  if (call_tmp_chpl) {
    halt(&local__str_literal_2009_chpl /* "pop_front on empty list" */, INT64(180), INT32(57));
  }
  chpl_macro_tmp_5885.locale = (this_chpl6).locale;
  chpl_macro_tmp_5885.addr = &(((this_chpl6).addr)->first_chpl);
  chpl_gen_comm_get(((void*)(&coerce_tmp_chpl)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5885).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5885).addr, sizeof(chpl____wide_listNode_int64_t), -1, COMMID(62), INT64(181), INT64(57));
  oldfirst_chpl = coerce_tmp_chpl;
  chpl_macro_tmp_5886.locale = (this_chpl6).locale;
  chpl_macro_tmp_5886.addr = &(((this_chpl6).addr)->first_chpl);
  chpl_gen_comm_get(((void*)(&coerce_tmp_chpl2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5886).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5886).addr, sizeof(chpl____wide_listNode_int64_t), -1, COMMID(63), INT64(182), INT64(57));
  chpl_macro_tmp_5887.locale = (&coerce_tmp_chpl2)->locale;
  chpl_macro_tmp_5887.addr = &(((&coerce_tmp_chpl2)->addr)->next_chpl);
  chpl_gen_comm_get(((void*)(&coerce_tmp_chpl3)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5887).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5887).addr, sizeof(chpl____wide_listNode_int64_t), -1, COMMID(64), INT64(182), INT64(57));
  chpl_macro_tmp_5888.locale = (&oldfirst_chpl)->locale;
  chpl_macro_tmp_5888.addr = &(((&oldfirst_chpl)->addr)->data_chpl);
  chpl_gen_comm_get(((void*)(&tmp_chpl2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5888).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5888).addr, sizeof(int64_t), -1, COMMID(65), INT64(183), INT64(57));
  coerce_tmp_chpl4 = tmp_chpl2;
  chpl_macro_tmp_5889.locale = (this_chpl6).locale;
  chpl_macro_tmp_5889.addr = &(((this_chpl6).addr)->first_chpl);
  chpl_gen_comm_put(((void*)(&coerce_tmp_chpl3)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5889).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5889).addr, sizeof(chpl____wide_listNode_int64_t), -1, COMMID(66), INT64(184), INT64(57));
  chpl_macro_tmp_5890.locale = (this_chpl6).locale;
  chpl_macro_tmp_5890.addr = &(((this_chpl6).addr)->last_chpl);
  chpl_gen_comm_get(((void*)(&coerce_tmp_chpl5)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5890).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5890).addr, sizeof(chpl____wide_listNode_int64_t), -1, COMMID(67), INT64(185), INT64(57));
  chpl_macro_tmp_5891.locale = (&coerce_tmp_chpl5)->locale;
  chpl_macro_tmp_5891.addr = ((object)((&coerce_tmp_chpl5)->addr));
  call_tmp_chpl2 = chpl_macro_tmp_5891;
  chpl_macro_tmp_5892.locale = (&oldfirst_chpl)->locale;
  chpl_macro_tmp_5892.addr = ((object)((&oldfirst_chpl)->addr));
  call_tmp_chpl3 = chpl_macro_tmp_5892;
  call_tmp_chpl4 = (! (((&call_tmp_chpl2)->addr != (&call_tmp_chpl3)->addr) || ((!(! (&call_tmp_chpl2)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp_chpl2)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&call_tmp_chpl3)->locale), INT64(0), INT32(0))))));
  if (call_tmp_chpl4) {
    chpl_macro_tmp_5893.locale = (this_chpl6).locale;
    chpl_macro_tmp_5893.addr = &(((this_chpl6).addr)->last_chpl);
    chpl_gen_comm_put(((void*)(&coerce_tmp_chpl3)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5893).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5893).addr, sizeof(chpl____wide_listNode_int64_t), -1, COMMID(68), INT64(185), INT64(57));
  }
  chpl_macro_tmp_5894.locale = (this_chpl6).locale;
  chpl_macro_tmp_5894.addr = &(((this_chpl6).addr)->length_chpl);
  call_tmp_chpl5 = chpl_macro_tmp_5894;
  chpl_gen_comm_get(((void*)(&chpl_macro_tmp_5895)), chpl_nodeFromLocaleID(&((call_tmp_chpl5).locale), INT64(0), INT32(0)), (call_tmp_chpl5).addr, sizeof(int64_t), -1, COMMID(69), INT64(186), INT64(57));
  chpl_macro_tmp_5895 -= INT64(1);
  chpl_gen_comm_put(((void*)(&chpl_macro_tmp_5895)), chpl_nodeFromLocaleID(&((call_tmp_chpl5).locale), INT64(0), INT32(0)), (call_tmp_chpl5).addr, sizeof(int64_t), -1, COMMID(70), INT64(186), INT64(57));
  return coerce_tmp_chpl4;
}

/* List.chpl:193 */
static void destroy_chpl3(chpl____wide__ref_list_BaseArr this_chpl6) {
  chpl____wide_listNode_BaseArr current_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseArr coerce_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool tmp_chpl;
  chpl____wide_object call_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseArr coerce_tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp_chpl2;
  chpl____wide_listNode_BaseArr rvfDerefTmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect_chpl;
  _class_localson_fn109 _args_foron_fn_chpl = NULL;
  c_void_ptr _args_vforon_fn_chpl;
  chpl____wide_object call_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseArr tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseArr tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide_listNode_BaseArr chpl_macro_tmp_5896;
  chpl____wide_object chpl_macro_tmp_5897;
  chpl____wide__nilType chpl_macro_tmp_5898;
  chpl____wide_object chpl_macro_tmp_5899;
  chpl____wide__ref__wide_listNode_BaseArr chpl_macro_tmp_5900;
  chpl__class_localson_fn109_object chpl_macro_tmp_5901;
  chpl____wide_object chpl_macro_tmp_5902;
  chpl____wide__nilType chpl_macro_tmp_5903;
  chpl____wide_object chpl_macro_tmp_5904;
  chpl____wide__nilType chpl_macro_tmp_5905;
  chpl____wide_listNode_BaseArr chpl_macro_tmp_5906;
  chpl____wide__ref__wide_listNode_BaseArr chpl_macro_tmp_5907;
  chpl____wide__nilType chpl_macro_tmp_5908;
  chpl____wide_listNode_BaseArr chpl_macro_tmp_5909;
  chpl____wide__ref__wide_listNode_BaseArr chpl_macro_tmp_5910;
  chpl____wide__ref_int64_t chpl_macro_tmp_5911;
  int64_t chpl_macro_tmp_5912;
  chpl_macro_tmp_5896.locale = (this_chpl6).locale;
  chpl_macro_tmp_5896.addr = &(((this_chpl6).addr)->first_chpl);
  chpl_gen_comm_get(((void*)(&coerce_tmp_chpl)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5896).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5896).addr, sizeof(chpl____wide_listNode_BaseArr), -1, COMMID(71), INT64(194), INT64(57));
  current_chpl = coerce_tmp_chpl;
  chpl_macro_tmp_5897.locale = (&coerce_tmp_chpl)->locale;
  chpl_macro_tmp_5897.addr = ((object)((&coerce_tmp_chpl)->addr));
  call_tmp_chpl = chpl_macro_tmp_5897;
  chpl_macro_tmp_5898.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5898.addr = nil;
  chpl_macro_tmp_5899.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5899.addr = NULL;
  tmp_chpl2 = chpl_macro_tmp_5899;
  tmp_chpl = (((&call_tmp_chpl)->addr != (&tmp_chpl2)->addr) || ((!(! (&call_tmp_chpl)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp_chpl)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&tmp_chpl2)->locale), INT64(0), INT32(0)))));
  while (tmp_chpl) {
    chpl_macro_tmp_5900.locale = (&current_chpl)->locale;
    chpl_macro_tmp_5900.addr = &(((&current_chpl)->addr)->next_chpl);
    chpl_gen_comm_get(((void*)(&coerce_tmp_chpl2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5900).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5900).addr, sizeof(chpl____wide_listNode_BaseArr), -1, COMMID(72), INT64(196), INT64(57));
    call_tmp_chpl2 = (&current_chpl)->locale;
    rvfDerefTmp_chpl = current_chpl;
    isdirect_chpl = chpl_doDirectExecuteOn(&call_tmp_chpl2);
    if (isdirect_chpl) {
      on_fn120(rvfDerefTmp_chpl);
    } else {
      _args_foron_fn_chpl = ((_class_localson_fn109)(&chpl_macro_tmp_5901));
      (_args_foron_fn_chpl)->_0_rvfDerefTmp = call_tmp_chpl2;
      (_args_foron_fn_chpl)->_1_rvfDerefTmp = rvfDerefTmp_chpl;
      _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
      /*** wrapon_fn128 ***/ chpl_executeOn(&call_tmp_chpl2, INT32(193), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), sizeof(chpl__class_localson_fn109_object), INT64(1227), INT32(2));
    }
    current_chpl = coerce_tmp_chpl2;
    chpl_macro_tmp_5902.locale = (&coerce_tmp_chpl2)->locale;
    chpl_macro_tmp_5902.addr = ((object)((&coerce_tmp_chpl2)->addr));
    call_tmp_chpl3 = chpl_macro_tmp_5902;
    chpl_macro_tmp_5903.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5903.addr = nil;
    chpl_macro_tmp_5904.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5904.addr = NULL;
    tmp_chpl3 = chpl_macro_tmp_5904;
    tmp_chpl = (((&call_tmp_chpl3)->addr != (&tmp_chpl3)->addr) || ((!(! (&call_tmp_chpl3)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp_chpl3)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&tmp_chpl3)->locale), INT64(0), INT32(0)))));
  }
  chpl_macro_tmp_5905.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5905.addr = nil;
  chpl_macro_tmp_5906.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5906.addr = NULL;
  tmp_chpl4 = chpl_macro_tmp_5906;
  chpl_macro_tmp_5907.locale = (this_chpl6).locale;
  chpl_macro_tmp_5907.addr = &(((this_chpl6).addr)->first_chpl);
  chpl_gen_comm_put(((void*)(&tmp_chpl4)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5907).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5907).addr, sizeof(chpl____wide_listNode_BaseArr), -1, COMMID(73), INT64(200), INT64(57));
  chpl_macro_tmp_5908.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5908.addr = nil;
  chpl_macro_tmp_5909.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5909.addr = NULL;
  tmp_chpl5 = chpl_macro_tmp_5909;
  chpl_macro_tmp_5910.locale = (this_chpl6).locale;
  chpl_macro_tmp_5910.addr = &(((this_chpl6).addr)->last_chpl);
  chpl_gen_comm_put(((void*)(&tmp_chpl5)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5910).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5910).addr, sizeof(chpl____wide_listNode_BaseArr), -1, COMMID(74), INT64(201), INT64(57));
  chpl_macro_tmp_5911.locale = (this_chpl6).locale;
  chpl_macro_tmp_5911.addr = &(((this_chpl6).addr)->length_chpl);
  chpl_macro_tmp_5912 = INT64(0);
  chpl_gen_comm_put(((void*)(&chpl_macro_tmp_5912)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5911).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5911).addr, sizeof(int64_t), -1, COMMID(75), INT64(202), INT64(57));
  return;
}

/* List.chpl:193 */
static void destroy_chpl(chpl____wide__ref_list_BaseDom this_chpl6) {
  chpl____wide_listNode_BaseDom current_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseDom coerce_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool tmp_chpl;
  chpl____wide_object call_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseDom coerce_tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp_chpl2;
  chpl____wide_listNode_BaseDom rvfDerefTmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect_chpl;
  _class_localson_fn108 _args_foron_fn_chpl = NULL;
  c_void_ptr _args_vforon_fn_chpl;
  chpl____wide_object call_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseDom tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_BaseDom tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide_listNode_BaseDom chpl_macro_tmp_5913;
  chpl____wide_object chpl_macro_tmp_5914;
  chpl____wide__nilType chpl_macro_tmp_5915;
  chpl____wide_object chpl_macro_tmp_5916;
  chpl____wide__ref__wide_listNode_BaseDom chpl_macro_tmp_5917;
  chpl__class_localson_fn108_object chpl_macro_tmp_5918;
  chpl____wide_object chpl_macro_tmp_5919;
  chpl____wide__nilType chpl_macro_tmp_5920;
  chpl____wide_object chpl_macro_tmp_5921;
  chpl____wide__nilType chpl_macro_tmp_5922;
  chpl____wide_listNode_BaseDom chpl_macro_tmp_5923;
  chpl____wide__ref__wide_listNode_BaseDom chpl_macro_tmp_5924;
  chpl____wide__nilType chpl_macro_tmp_5925;
  chpl____wide_listNode_BaseDom chpl_macro_tmp_5926;
  chpl____wide__ref__wide_listNode_BaseDom chpl_macro_tmp_5927;
  chpl____wide__ref_int64_t chpl_macro_tmp_5928;
  int64_t chpl_macro_tmp_5929;
  chpl_macro_tmp_5913.locale = (this_chpl6).locale;
  chpl_macro_tmp_5913.addr = &(((this_chpl6).addr)->first_chpl);
  chpl_gen_comm_get(((void*)(&coerce_tmp_chpl)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5913).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5913).addr, sizeof(chpl____wide_listNode_BaseDom), -1, COMMID(76), INT64(194), INT64(57));
  current_chpl = coerce_tmp_chpl;
  chpl_macro_tmp_5914.locale = (&coerce_tmp_chpl)->locale;
  chpl_macro_tmp_5914.addr = ((object)((&coerce_tmp_chpl)->addr));
  call_tmp_chpl = chpl_macro_tmp_5914;
  chpl_macro_tmp_5915.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5915.addr = nil;
  chpl_macro_tmp_5916.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5916.addr = NULL;
  tmp_chpl2 = chpl_macro_tmp_5916;
  tmp_chpl = (((&call_tmp_chpl)->addr != (&tmp_chpl2)->addr) || ((!(! (&call_tmp_chpl)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp_chpl)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&tmp_chpl2)->locale), INT64(0), INT32(0)))));
  while (tmp_chpl) {
    chpl_macro_tmp_5917.locale = (&current_chpl)->locale;
    chpl_macro_tmp_5917.addr = &(((&current_chpl)->addr)->next_chpl);
    chpl_gen_comm_get(((void*)(&coerce_tmp_chpl2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5917).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5917).addr, sizeof(chpl____wide_listNode_BaseDom), -1, COMMID(77), INT64(196), INT64(57));
    call_tmp_chpl2 = (&current_chpl)->locale;
    rvfDerefTmp_chpl = current_chpl;
    isdirect_chpl = chpl_doDirectExecuteOn(&call_tmp_chpl2);
    if (isdirect_chpl) {
      on_fn121(rvfDerefTmp_chpl);
    } else {
      _args_foron_fn_chpl = ((_class_localson_fn108)(&chpl_macro_tmp_5918));
      (_args_foron_fn_chpl)->_0_rvfDerefTmp = call_tmp_chpl2;
      (_args_foron_fn_chpl)->_1_rvfDerefTmp = rvfDerefTmp_chpl;
      _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
      /*** wrapon_fn140 ***/ chpl_executeOn(&call_tmp_chpl2, INT32(205), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), sizeof(chpl__class_localson_fn108_object), INT64(1227), INT32(2));
    }
    current_chpl = coerce_tmp_chpl2;
    chpl_macro_tmp_5919.locale = (&coerce_tmp_chpl2)->locale;
    chpl_macro_tmp_5919.addr = ((object)((&coerce_tmp_chpl2)->addr));
    call_tmp_chpl3 = chpl_macro_tmp_5919;
    chpl_macro_tmp_5920.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5920.addr = nil;
    chpl_macro_tmp_5921.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5921.addr = NULL;
    tmp_chpl3 = chpl_macro_tmp_5921;
    tmp_chpl = (((&call_tmp_chpl3)->addr != (&tmp_chpl3)->addr) || ((!(! (&call_tmp_chpl3)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp_chpl3)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&tmp_chpl3)->locale), INT64(0), INT32(0)))));
  }
  chpl_macro_tmp_5922.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5922.addr = nil;
  chpl_macro_tmp_5923.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5923.addr = NULL;
  tmp_chpl4 = chpl_macro_tmp_5923;
  chpl_macro_tmp_5924.locale = (this_chpl6).locale;
  chpl_macro_tmp_5924.addr = &(((this_chpl6).addr)->first_chpl);
  chpl_gen_comm_put(((void*)(&tmp_chpl4)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5924).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5924).addr, sizeof(chpl____wide_listNode_BaseDom), -1, COMMID(78), INT64(200), INT64(57));
  chpl_macro_tmp_5925.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5925.addr = nil;
  chpl_macro_tmp_5926.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5926.addr = NULL;
  tmp_chpl5 = chpl_macro_tmp_5926;
  chpl_macro_tmp_5927.locale = (this_chpl6).locale;
  chpl_macro_tmp_5927.addr = &(((this_chpl6).addr)->last_chpl);
  chpl_gen_comm_put(((void*)(&tmp_chpl5)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5927).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5927).addr, sizeof(chpl____wide_listNode_BaseDom), -1, COMMID(79), INT64(201), INT64(57));
  chpl_macro_tmp_5928.locale = (this_chpl6).locale;
  chpl_macro_tmp_5928.addr = &(((this_chpl6).addr)->length_chpl);
  chpl_macro_tmp_5929 = INT64(0);
  chpl_gen_comm_put(((void*)(&chpl_macro_tmp_5929)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5928).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5928).addr, sizeof(int64_t), -1, COMMID(80), INT64(202), INT64(57));
  return;
}

/* List.chpl:193 */
static void destroy_chpl2(chpl____wide__ref_list_int64_t this_chpl6) {
  chpl____wide_listNode_int64_t current_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_int64_t coerce_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool tmp_chpl;
  chpl____wide_object call_tmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_int64_t coerce_tmp_chpl2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_localeID_t call_tmp_chpl2;
  chpl____wide_listNode_int64_t rvfDerefTmp_chpl = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool isdirect_chpl;
  _class_localson_fn101 _args_foron_fn_chpl = NULL;
  c_void_ptr _args_vforon_fn_chpl;
  chpl____wide_object call_tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_object tmp_chpl3 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_int64_t tmp_chpl4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide_listNode_int64_t tmp_chpl5 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref__wide_listNode_int64_t chpl_macro_tmp_5930;
  chpl____wide_object chpl_macro_tmp_5931;
  chpl____wide__nilType chpl_macro_tmp_5932;
  chpl____wide_object chpl_macro_tmp_5933;
  chpl____wide__ref__wide_listNode_int64_t chpl_macro_tmp_5934;
  chpl__class_localson_fn101_object chpl_macro_tmp_5935;
  chpl____wide_object chpl_macro_tmp_5936;
  chpl____wide__nilType chpl_macro_tmp_5937;
  chpl____wide_object chpl_macro_tmp_5938;
  chpl____wide__nilType chpl_macro_tmp_5939;
  chpl____wide_listNode_int64_t chpl_macro_tmp_5940;
  chpl____wide__ref__wide_listNode_int64_t chpl_macro_tmp_5941;
  chpl____wide__nilType chpl_macro_tmp_5942;
  chpl____wide_listNode_int64_t chpl_macro_tmp_5943;
  chpl____wide__ref__wide_listNode_int64_t chpl_macro_tmp_5944;
  chpl____wide__ref_int64_t chpl_macro_tmp_5945;
  int64_t chpl_macro_tmp_5946;
  chpl_macro_tmp_5930.locale = (this_chpl6).locale;
  chpl_macro_tmp_5930.addr = &(((this_chpl6).addr)->first_chpl);
  chpl_gen_comm_get(((void*)(&coerce_tmp_chpl)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5930).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5930).addr, sizeof(chpl____wide_listNode_int64_t), -1, COMMID(81), INT64(194), INT64(57));
  current_chpl = coerce_tmp_chpl;
  chpl_macro_tmp_5931.locale = (&coerce_tmp_chpl)->locale;
  chpl_macro_tmp_5931.addr = ((object)((&coerce_tmp_chpl)->addr));
  call_tmp_chpl = chpl_macro_tmp_5931;
  chpl_macro_tmp_5932.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5932.addr = nil;
  chpl_macro_tmp_5933.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5933.addr = NULL;
  tmp_chpl2 = chpl_macro_tmp_5933;
  tmp_chpl = (((&call_tmp_chpl)->addr != (&tmp_chpl2)->addr) || ((!(! (&call_tmp_chpl)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp_chpl)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&tmp_chpl2)->locale), INT64(0), INT32(0)))));
  while (tmp_chpl) {
    chpl_macro_tmp_5934.locale = (&current_chpl)->locale;
    chpl_macro_tmp_5934.addr = &(((&current_chpl)->addr)->next_chpl);
    chpl_gen_comm_get(((void*)(&coerce_tmp_chpl2)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5934).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5934).addr, sizeof(chpl____wide_listNode_int64_t), -1, COMMID(82), INT64(196), INT64(57));
    call_tmp_chpl2 = (&current_chpl)->locale;
    rvfDerefTmp_chpl = current_chpl;
    isdirect_chpl = chpl_doDirectExecuteOn(&call_tmp_chpl2);
    if (isdirect_chpl) {
      on_fn137(rvfDerefTmp_chpl);
    } else {
      _args_foron_fn_chpl = ((_class_localson_fn101)(&chpl_macro_tmp_5935));
      (_args_foron_fn_chpl)->_0_rvfDerefTmp = call_tmp_chpl2;
      (_args_foron_fn_chpl)->_1_rvfDerefTmp = rvfDerefTmp_chpl;
      _args_vforon_fn_chpl = ((void*)(_args_foron_fn_chpl));
      /*** wrapon_fn122 ***/ chpl_executeOn(&call_tmp_chpl2, INT32(187), ((chpl_comm_on_bundle_p)(_args_vforon_fn_chpl)), sizeof(chpl__class_localson_fn101_object), INT64(1227), INT32(2));
    }
    current_chpl = coerce_tmp_chpl2;
    chpl_macro_tmp_5936.locale = (&coerce_tmp_chpl2)->locale;
    chpl_macro_tmp_5936.addr = ((object)((&coerce_tmp_chpl2)->addr));
    call_tmp_chpl3 = chpl_macro_tmp_5936;
    chpl_macro_tmp_5937.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5937.addr = nil;
    chpl_macro_tmp_5938.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_5938.addr = NULL;
    tmp_chpl3 = chpl_macro_tmp_5938;
    tmp_chpl = (((&call_tmp_chpl3)->addr != (&tmp_chpl3)->addr) || ((!(! (&call_tmp_chpl3)->addr)) && (chpl_nodeFromLocaleID(&((&call_tmp_chpl3)->locale), INT64(0), INT32(0)) != chpl_nodeFromLocaleID(&((&tmp_chpl3)->locale), INT64(0), INT32(0)))));
  }
  chpl_macro_tmp_5939.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5939.addr = nil;
  chpl_macro_tmp_5940.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5940.addr = NULL;
  tmp_chpl4 = chpl_macro_tmp_5940;
  chpl_macro_tmp_5941.locale = (this_chpl6).locale;
  chpl_macro_tmp_5941.addr = &(((this_chpl6).addr)->first_chpl);
  chpl_gen_comm_put(((void*)(&tmp_chpl4)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5941).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5941).addr, sizeof(chpl____wide_listNode_int64_t), -1, COMMID(83), INT64(200), INT64(57));
  chpl_macro_tmp_5942.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5942.addr = nil;
  chpl_macro_tmp_5943.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_5943.addr = NULL;
  tmp_chpl5 = chpl_macro_tmp_5943;
  chpl_macro_tmp_5944.locale = (this_chpl6).locale;
  chpl_macro_tmp_5944.addr = &(((this_chpl6).addr)->last_chpl);
  chpl_gen_comm_put(((void*)(&tmp_chpl5)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5944).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5944).addr, sizeof(chpl____wide_listNode_int64_t), -1, COMMID(84), INT64(201), INT64(57));
  chpl_macro_tmp_5945.locale = (this_chpl6).locale;
  chpl_macro_tmp_5945.addr = &(((this_chpl6).addr)->length_chpl);
  chpl_macro_tmp_5946 = INT64(0);
  chpl_gen_comm_put(((void*)(&chpl_macro_tmp_5946)), chpl_nodeFromLocaleID(&((chpl_macro_tmp_5945).locale), INT64(0), INT32(0)), (chpl_macro_tmp_5945).addr, sizeof(int64_t), -1, COMMID(85), INT64(202), INT64(57));
  return;
}

/* List.chpl:208 */
static void deinit_chpl6(chpl____wide__ref_list_BaseArr this_chpl6) {
  destroy_chpl3(this_chpl6);
  return;
}

/* List.chpl:208 */
static void deinit_chpl8(chpl____wide__ref_list_BaseDom this_chpl6) {
  destroy_chpl(this_chpl6);
  return;
}

/* List.chpl:208 */
static void deinit_chpl7(chpl____wide__ref_list_int64_t this_chpl6) {
  destroy_chpl2(this_chpl6);
  return;
}

