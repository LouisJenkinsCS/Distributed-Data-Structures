/* Atomics.chpl:83 */
static void chpl__init_Atomics(int64_t _ln,
                               int32_t _fn) {
  _ref_int32_t refIndentLevel = NULL;
  if (chpl__init_Atomics_p) {
    goto _exit_chpl__init_Atomics;
  }
  printModuleInit("%*s\n", "Atomics", INT64(7));
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_Atomics_p = UINT8(true);
  {
    chpl__init_MemConsistency(INT64(83), INT32(12));
  }
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_Atomics:;
  return;
}

/* Atomics.chpl:276 */
static void atomic_fence(memory_order order) {
  atomic_thread_fence(order);
  chpl_rmem_consist_fence(order, INT64(278), INT32(12));
  return;
}

/* Atomics.chpl:319 */
static void _construct_atomicbool(atomic_bool _v,
                                  _ref_atomicbool meme,
                                  _ref_atomicbool _retArg) {
  atomicbool this12;
  this12 = *(meme);
  (&this12)->_v = _v;
  *(_retArg) = this12;
  return;
}

/* Atomics.chpl:333 */
static void on_fn(chpl____wide__ref_atomicbool this12,
                  memory_order order,
                  chpl____wide__ref_chpl_bool ret) {
  chpl____wide__ref_atomic_bool call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp3;
  _ref_atomic_bool T = NULL;
  chpl____wide__ref_atomic_bool chpl_macro_tmp_562;
  chpl____wide__ref_atomic_bool chpl_macro_tmp_563;
  chpl_macro_tmp_562.locale = (this12).locale;
  chpl_macro_tmp_562.addr = &(((this12).addr)->_v);
  call_tmp2 = chpl_macro_tmp_562;
  T = (&call_tmp2)->addr;
  call_tmp3 = atomic_load_explicit_bool(T, order);
  chpl_macro_tmp_563.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_563.addr = T;
  call_tmp2 = chpl_macro_tmp_563;
  chpl_gen_comm_put(((void*)(&call_tmp3)), chpl_nodeFromLocaleID(&((ret).locale), INT64(0), INT32(0)), (ret).addr, sizeof(chpl_bool), -1, COMMID(0), INT64(333), INT64(12));
  return;
}

/* Atomics.chpl:333 */
static void wrapon_fn(_class_localson_fn c) {
  chpl____wide__ref_atomicbool _1_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order _2_rvfDerefTmp;
  memory_order T;
  chpl____wide__ref_chpl_bool _3_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  _1_tmp = (c)->_1_tmp;
  T = (c)->_2_rvfDerefTmp;
  _2_rvfDerefTmp = T;
  _3_tmp = (c)->_3_tmp;
  on_fn(_1_tmp, _2_rvfDerefTmp, _3_tmp);
  return;
}

/* Atomics.chpl:341 */
static void on_fn2(chpl____wide__ref_atomicbool this12,
                   chpl_bool value,
                   memory_order order) {
  chpl____wide__ref_atomic_bool call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_atomic_bool T = NULL;
  chpl____wide__ref_atomic_bool chpl_macro_tmp_564;
  chpl____wide__ref_atomic_bool chpl_macro_tmp_565;
  chpl_macro_tmp_564.locale = (this12).locale;
  chpl_macro_tmp_564.addr = &(((this12).addr)->_v);
  call_tmp2 = chpl_macro_tmp_564;
  T = (&call_tmp2)->addr;
  atomic_store_explicit_bool(T, value, order);
  chpl_macro_tmp_565.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_565.addr = T;
  call_tmp2 = chpl_macro_tmp_565;
  return;
}

/* Atomics.chpl:341 */
static void wrapon_fn2(_class_localson_fn2 c) {
  chpl____wide__ref_atomicbool _1_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order _3_rvfDerefTmp;
  memory_order T;
  _1_tmp = (c)->_1_tmp;
  T = (c)->_3_rvfDerefTmp;
  _3_rvfDerefTmp = T;
  on_fn2(_1_tmp, (c)->_2_rvfDerefTmp, _3_rvfDerefTmp);
  return;
}

/* Atomics.chpl:384 */
static void _local_on_fn(chpl____wide__ref_atomicbool this12,
                         memory_order order,
                         chpl____wide__ref_chpl_bool ret) {
  chpl____wide__ref_atomic_bool call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_atomicbool local_this = NULL;
  chpl_bool call_tmp3;
  _ref_atomic_bool T = NULL;
  _ref_chpl_bool local_ret = NULL;
  chpl____wide__ref_atomic_bool chpl_macro_tmp_566;
  chpl____wide__ref_atomic_bool chpl_macro_tmp_567;
  local_this = (&this12)->addr;
  chpl_macro_tmp_566.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_566.addr = &((local_this)->_v);
  call_tmp2 = chpl_macro_tmp_566;
  T = (&call_tmp2)->addr;
  call_tmp3 = atomic_exchange_explicit_bool(T, UINT8(true), order);
  chpl_macro_tmp_567.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_567.addr = T;
  call_tmp2 = chpl_macro_tmp_567;
  local_ret = (&ret)->addr;
  *(local_ret) = call_tmp3;
  return;
}

/* Atomics.chpl:384 */
static void on_fn3(chpl____wide__ref_atomicbool this12,
                   memory_order order,
                   chpl____wide__ref_chpl_bool ret) {
  chpl____wide__ref_atomic_bool call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp3;
  _ref_atomic_bool T = NULL;
  chpl____wide__ref_atomic_bool chpl_macro_tmp_568;
  chpl____wide__ref_atomic_bool chpl_macro_tmp_569;
  chpl_macro_tmp_568.locale = (this12).locale;
  chpl_macro_tmp_568.addr = &(((this12).addr)->_v);
  call_tmp2 = chpl_macro_tmp_568;
  T = (&call_tmp2)->addr;
  call_tmp3 = atomic_exchange_explicit_bool(T, UINT8(true), order);
  chpl_macro_tmp_569.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_569.addr = T;
  call_tmp2 = chpl_macro_tmp_569;
  chpl_gen_comm_put(((void*)(&call_tmp3)), chpl_nodeFromLocaleID(&((ret).locale), INT64(0), INT32(0)), (ret).addr, sizeof(chpl_bool), -1, COMMID(1), INT64(384), INT64(12));
  return;
}

/* Atomics.chpl:384 */
static void wrapon_fn3(_class_localson_fn3 c) {
  chpl____wide__ref_atomicbool _1_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order _2_rvfDerefTmp;
  memory_order T;
  chpl____wide__ref_chpl_bool _3_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  _1_tmp = (c)->_1_tmp;
  T = (c)->_2_rvfDerefTmp;
  _2_rvfDerefTmp = T;
  _3_tmp = (c)->_3_tmp;
  on_fn3(_1_tmp, _2_rvfDerefTmp, _3_tmp);
  return;
}

/* Atomics.chpl:384 */
static void _local_wrapon_fn(_class_localson_fn3 c) {
  chpl____wide__ref_atomicbool _1_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order _2_rvfDerefTmp;
  memory_order T;
  chpl____wide__ref_chpl_bool _3_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  _1_tmp = (c)->_1_tmp;
  T = (c)->_2_rvfDerefTmp;
  _2_rvfDerefTmp = T;
  _3_tmp = (c)->_3_tmp;
  _local_on_fn(_1_tmp, _2_rvfDerefTmp, _3_tmp);
  return;
}

/* Atomics.chpl:392 */
static void _local_on_fn2(chpl____wide__ref_atomicbool this12,
                          memory_order order) {
  chpl____wide__ref_atomic_bool call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_atomicbool local_this = NULL;
  _ref_atomic_bool T = NULL;
  chpl____wide__ref_atomic_bool chpl_macro_tmp_570;
  chpl____wide__ref_atomic_bool chpl_macro_tmp_571;
  local_this = (&this12)->addr;
  chpl_macro_tmp_570.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_570.addr = &((local_this)->_v);
  call_tmp2 = chpl_macro_tmp_570;
  T = (&call_tmp2)->addr;
  atomic_store_explicit_bool(T, UINT8(false), order);
  chpl_macro_tmp_571.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_571.addr = T;
  call_tmp2 = chpl_macro_tmp_571;
  return;
}

/* Atomics.chpl:392 */
static void on_fn4(chpl____wide__ref_atomicbool this12,
                   memory_order order) {
  chpl____wide__ref_atomic_bool call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_atomic_bool T = NULL;
  chpl____wide__ref_atomic_bool chpl_macro_tmp_572;
  chpl____wide__ref_atomic_bool chpl_macro_tmp_573;
  chpl_macro_tmp_572.locale = (this12).locale;
  chpl_macro_tmp_572.addr = &(((this12).addr)->_v);
  call_tmp2 = chpl_macro_tmp_572;
  T = (&call_tmp2)->addr;
  atomic_store_explicit_bool(T, UINT8(false), order);
  chpl_macro_tmp_573.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_573.addr = T;
  call_tmp2 = chpl_macro_tmp_573;
  return;
}

/* Atomics.chpl:392 */
static void wrapon_fn4(_class_localson_fn4 c) {
  chpl____wide__ref_atomicbool _1_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order _2_rvfDerefTmp;
  memory_order T;
  _1_tmp = (c)->_1_tmp;
  T = (c)->_2_rvfDerefTmp;
  _2_rvfDerefTmp = T;
  on_fn4(_1_tmp, _2_rvfDerefTmp);
  return;
}

/* Atomics.chpl:392 */
static void _local_wrapon_fn2(_class_localson_fn4 c) {
  chpl____wide__ref_atomicbool _1_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order _2_rvfDerefTmp;
  memory_order T;
  _1_tmp = (c)->_1_tmp;
  T = (c)->_2_rvfDerefTmp;
  _2_rvfDerefTmp = T;
  _local_on_fn2(_1_tmp, _2_rvfDerefTmp);
  return;
}

/* Atomics.chpl:402 */
static void wrapon_fn5(_class_localson_fn5 c) {
  chpl____wide__ref_atomicbool _1_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order _3_rvfDerefTmp;
  memory_order T;
  _1_tmp = (c)->_1_tmp;
  T = (c)->_3_rvfDerefTmp;
  _3_rvfDerefTmp = T;
  on_fn5(_1_tmp, (c)->_2_rvfDerefTmp, _3_rvfDerefTmp);
  return;
}

/* Atomics.chpl:402 */
static void on_fn5(chpl____wide__ref_atomicbool this12,
                   chpl_bool val,
                   memory_order order) {
  memory_order local_memory_order_relaxed;
  chpl_bool T;
  chpl____wide__ref_atomic_bool call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp3;
  _ref_atomic_bool T2 = NULL;
  chpl____wide__ref_atomic_bool call_tmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp5;
  _ref_atomic_bool T3 = NULL;
  chpl____wide__ref_atomic_bool chpl_macro_tmp_574;
  chpl____wide__ref_atomic_bool chpl_macro_tmp_575;
  chpl____wide__ref_atomic_bool chpl_macro_tmp_576;
  chpl____wide__ref_atomic_bool chpl_macro_tmp_577;
  local_memory_order_relaxed = memory_order_relaxed;
  chpl_macro_tmp_574.locale = (this12).locale;
  chpl_macro_tmp_574.addr = &(((this12).addr)->_v);
  call_tmp2 = chpl_macro_tmp_574;
  T2 = (&call_tmp2)->addr;
  call_tmp3 = atomic_load_explicit_bool(T2, local_memory_order_relaxed);
  chpl_macro_tmp_575.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_575.addr = T2;
  call_tmp2 = chpl_macro_tmp_575;
  T = (call_tmp3 != val);
  while (T) {
    chpl_task_yield();
    chpl_macro_tmp_576.locale = (this12).locale;
    chpl_macro_tmp_576.addr = &(((this12).addr)->_v);
    call_tmp4 = chpl_macro_tmp_576;
    T3 = (&call_tmp4)->addr;
    call_tmp5 = atomic_load_explicit_bool(T3, local_memory_order_relaxed);
    chpl_macro_tmp_577.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_577.addr = T3;
    call_tmp4 = chpl_macro_tmp_577;
    T = (call_tmp5 != val);
  }
  atomic_thread_fence(order);
  return;
}

/* Atomics.chpl:751 */
static void _construct_atomic_uint64(atomic_uint_least64_t _v,
                                     _ref_atomic_uint64 meme,
                                     _ref_atomic_uint64 _retArg) {
  atomic_uint64 this12;
  this12 = *(meme);
  (&this12)->_v = _v;
  *(_retArg) = this12;
  return;
}

/* Atomics.chpl:758 */
static void wrapon_fn6(_class_localson_fn6 c) {
  chpl____wide__ref_atomic_uint64 _1_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order _2_rvfDerefTmp;
  memory_order T;
  chpl____wide__ref_uint64_t _3_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  _1_tmp = (c)->_1_tmp;
  T = (c)->_2_rvfDerefTmp;
  _2_rvfDerefTmp = T;
  _3_tmp = (c)->_3_tmp;
  on_fn6(_1_tmp, _2_rvfDerefTmp, _3_tmp);
  return;
}

/* Atomics.chpl:758 */
static void on_fn6(chpl____wide__ref_atomic_uint64 this12,
                   memory_order order,
                   chpl____wide__ref_uint64_t ret) {
  chpl____wide__ref_atomic_uint_least64_t call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  uint64_t call_tmp3;
  _ref_atomic_uint_least64_t T = NULL;
  chpl____wide__ref_atomic_uint_least64_t chpl_macro_tmp_578;
  chpl____wide__ref_atomic_uint_least64_t chpl_macro_tmp_579;
  chpl_macro_tmp_578.locale = (this12).locale;
  chpl_macro_tmp_578.addr = &(((this12).addr)->_v);
  call_tmp2 = chpl_macro_tmp_578;
  T = (&call_tmp2)->addr;
  call_tmp3 = atomic_load_explicit_uint_least64_t(T, order);
  chpl_macro_tmp_579.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_579.addr = T;
  call_tmp2 = chpl_macro_tmp_579;
  chpl_gen_comm_put(((void*)(&call_tmp3)), chpl_nodeFromLocaleID(&((ret).locale), INT64(0), INT32(0)), (ret).addr, sizeof(uint64_t), -1, COMMID(2), INT64(758), INT64(12));
  return;
}

/* Atomics.chpl:762 */
static void wrapon_fn7(_class_localson_fn7 c) {
  chpl____wide__ref_atomic_uint64 _1_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  uint64_t _2_rvfDerefTmp;
  memory_order _3_rvfDerefTmp;
  memory_order T;
  _1_tmp = (c)->_1_tmp;
  _2_rvfDerefTmp = (c)->_2_rvfDerefTmp;
  T = (c)->_3_rvfDerefTmp;
  _3_rvfDerefTmp = T;
  on_fn7(_1_tmp, _2_rvfDerefTmp, _3_rvfDerefTmp);
  return;
}

/* Atomics.chpl:762 */
static void on_fn7(chpl____wide__ref_atomic_uint64 this12,
                   uint64_t value,
                   memory_order order) {
  chpl____wide__ref_atomic_uint_least64_t call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_atomic_uint_least64_t T = NULL;
  chpl____wide__ref_atomic_uint_least64_t chpl_macro_tmp_580;
  chpl____wide__ref_atomic_uint_least64_t chpl_macro_tmp_581;
  chpl_macro_tmp_580.locale = (this12).locale;
  chpl_macro_tmp_580.addr = &(((this12).addr)->_v);
  call_tmp2 = chpl_macro_tmp_580;
  T = (&call_tmp2)->addr;
  atomic_store_explicit_uint_least64_t(T, value, order);
  chpl_macro_tmp_581.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_581.addr = T;
  call_tmp2 = chpl_macro_tmp_581;
  return;
}

/* Atomics.chpl:766 */
static void wrapon_fn8(_class_localson_fn8 c) {
  chpl____wide__ref_atomic_uint64 _1_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  uint64_t _2_rvfDerefTmp;
  memory_order _3_rvfDerefTmp;
  memory_order T;
  chpl____wide__ref_uint64_t _4_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  _1_tmp = (c)->_1_tmp;
  _2_rvfDerefTmp = (c)->_2_rvfDerefTmp;
  T = (c)->_3_rvfDerefTmp;
  _3_rvfDerefTmp = T;
  _4_tmp = (c)->_4_tmp;
  on_fn8(_1_tmp, _2_rvfDerefTmp, _3_rvfDerefTmp, _4_tmp);
  return;
}

/* Atomics.chpl:766 */
static void on_fn8(chpl____wide__ref_atomic_uint64 this12,
                   uint64_t value,
                   memory_order order,
                   chpl____wide__ref_uint64_t ret) {
  chpl____wide__ref_atomic_uint_least64_t call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  uint64_t call_tmp3;
  _ref_atomic_uint_least64_t T = NULL;
  chpl____wide__ref_atomic_uint_least64_t chpl_macro_tmp_582;
  chpl____wide__ref_atomic_uint_least64_t chpl_macro_tmp_583;
  chpl_macro_tmp_582.locale = (this12).locale;
  chpl_macro_tmp_582.addr = &(((this12).addr)->_v);
  call_tmp2 = chpl_macro_tmp_582;
  T = (&call_tmp2)->addr;
  call_tmp3 = atomic_exchange_explicit_uint_least64_t(T, value, order);
  chpl_macro_tmp_583.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_583.addr = T;
  call_tmp2 = chpl_macro_tmp_583;
  chpl_gen_comm_put(((void*)(&call_tmp3)), chpl_nodeFromLocaleID(&((ret).locale), INT64(0), INT32(0)), (ret).addr, sizeof(uint64_t), -1, COMMID(3), INT64(766), INT64(12));
  return;
}

/* Atomics.chpl:779 */
static void wrapon_fn9(_class_localson_fn9 c) {
  chpl____wide__ref_chpl_bool _1_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  chpl____wide__ref_atomic_uint64 _2_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  uint64_t _3_rvfDerefTmp;
  memory_order _5_rvfDerefTmp;
  memory_order T;
  _1_tmp = (c)->_1_tmp;
  _2_tmp = (c)->_2_tmp;
  _3_rvfDerefTmp = (c)->_3_rvfDerefTmp;
  T = (c)->_5_rvfDerefTmp;
  _5_rvfDerefTmp = T;
  on_fn9(_1_tmp, _2_tmp, _3_rvfDerefTmp, (c)->_4_rvfDerefTmp, _5_rvfDerefTmp);
  return;
}

/* Atomics.chpl:779 */
static void on_fn9(chpl____wide__ref_chpl_bool ret,
                   chpl____wide__ref_atomic_uint64 this12,
                   uint64_t expected,
                   uint64_t desired,
                   memory_order order) {
  chpl____wide__ref_atomic_uint_least64_t call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  chpl_bool call_tmp3;
  _ref_atomic_uint_least64_t T = NULL;
  chpl____wide__ref_atomic_uint_least64_t chpl_macro_tmp_584;
  chpl____wide__ref_atomic_uint_least64_t chpl_macro_tmp_585;
  chpl_macro_tmp_584.locale = (this12).locale;
  chpl_macro_tmp_584.addr = &(((this12).addr)->_v);
  call_tmp2 = chpl_macro_tmp_584;
  T = (&call_tmp2)->addr;
  call_tmp3 = atomic_compare_exchange_strong_explicit_uint_least64_t(T, expected, desired, order);
  chpl_macro_tmp_585.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_585.addr = T;
  call_tmp2 = chpl_macro_tmp_585;
  chpl_gen_comm_put(((void*)(&call_tmp3)), chpl_nodeFromLocaleID(&((ret).locale), INT64(0), INT32(0)), (ret).addr, sizeof(chpl_bool), -1, COMMID(4), INT64(779), INT64(12));
  return;
}

/* Atomics.chpl:1161 */
static void _construct_atomic_int64(atomic_int_least64_t _v,
                                    _ref_atomic_int64 meme,
                                    _ref_atomic_int64 _retArg) {
  atomic_int64 this12;
  this12 = *(meme);
  (&this12)->_v = _v;
  *(_retArg) = this12;
  return;
}

/* Atomics.chpl:1175 */
static void wrapon_fn10(_class_localson_fn10 c) {
  chpl____wide__ref_atomic_int64 _1_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order _2_rvfDerefTmp;
  memory_order T;
  chpl____wide__ref_int64_t _3_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  _1_tmp = (c)->_1_tmp;
  T = (c)->_2_rvfDerefTmp;
  _2_rvfDerefTmp = T;
  _3_tmp = (c)->_3_tmp;
  on_fn10(_1_tmp, _2_rvfDerefTmp, _3_tmp);
  return;
}

/* Atomics.chpl:1175 */
static void on_fn10(chpl____wide__ref_atomic_int64 this12,
                    memory_order order,
                    chpl____wide__ref_int64_t ret) {
  chpl____wide__ref_atomic_int_least64_t call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp3;
  _ref_atomic_int_least64_t T = NULL;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_586;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_587;
  chpl_macro_tmp_586.locale = (this12).locale;
  chpl_macro_tmp_586.addr = &(((this12).addr)->_v);
  call_tmp2 = chpl_macro_tmp_586;
  T = (&call_tmp2)->addr;
  call_tmp3 = atomic_load_explicit_int_least64_t(T, order);
  chpl_macro_tmp_587.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_587.addr = T;
  call_tmp2 = chpl_macro_tmp_587;
  chpl_gen_comm_put(((void*)(&call_tmp3)), chpl_nodeFromLocaleID(&((ret).locale), INT64(0), INT32(0)), (ret).addr, sizeof(int64_t), -1, COMMID(5), INT64(1175), INT64(12));
  return;
}

/* Atomics.chpl:1183 */
static void wrapon_fn11(_class_localson_fn11 c) {
  chpl____wide__ref_atomic_int64 _1_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order _3_rvfDerefTmp;
  memory_order T;
  _1_tmp = (c)->_1_tmp;
  T = (c)->_3_rvfDerefTmp;
  _3_rvfDerefTmp = T;
  on_fn11(_1_tmp, (c)->_2_rvfDerefTmp, _3_rvfDerefTmp);
  return;
}

/* Atomics.chpl:1183 */
static void on_fn11(chpl____wide__ref_atomic_int64 this12,
                    int64_t value,
                    memory_order order) {
  chpl____wide__ref_atomic_int_least64_t call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_atomic_int_least64_t T = NULL;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_588;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_589;
  chpl_macro_tmp_588.locale = (this12).locale;
  chpl_macro_tmp_588.addr = &(((this12).addr)->_v);
  call_tmp2 = chpl_macro_tmp_588;
  T = (&call_tmp2)->addr;
  atomic_store_explicit_int_least64_t(T, value, order);
  chpl_macro_tmp_589.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_589.addr = T;
  call_tmp2 = chpl_macro_tmp_589;
  return;
}

/* Atomics.chpl:1229 */
static void wrapon_fn12(_class_localson_fn12 c) {
  chpl____wide__ref_atomic_int64 _1_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order _3_rvfDerefTmp;
  memory_order T;
  chpl____wide__ref_int64_t _4_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  _1_tmp = (c)->_1_tmp;
  T = (c)->_3_rvfDerefTmp;
  _3_rvfDerefTmp = T;
  _4_tmp = (c)->_4_tmp;
  on_fn12(_1_tmp, (c)->_2_rvfDerefTmp, _3_rvfDerefTmp, _4_tmp);
  return;
}

/* Atomics.chpl:1229 */
static void on_fn12(chpl____wide__ref_atomic_int64 this12,
                    int64_t value,
                    memory_order order,
                    chpl____wide__ref_int64_t ret) {
  chpl____wide__ref_atomic_int_least64_t call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp3;
  _ref_atomic_int_least64_t T = NULL;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_590;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_591;
  chpl_macro_tmp_590.locale = (this12).locale;
  chpl_macro_tmp_590.addr = &(((this12).addr)->_v);
  call_tmp2 = chpl_macro_tmp_590;
  T = (&call_tmp2)->addr;
  call_tmp3 = atomic_fetch_add_explicit_int_least64_t(T, value, order);
  chpl_macro_tmp_591.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_591.addr = T;
  call_tmp2 = chpl_macro_tmp_591;
  chpl_gen_comm_put(((void*)(&call_tmp3)), chpl_nodeFromLocaleID(&((ret).locale), INT64(0), INT32(0)), (ret).addr, sizeof(int64_t), -1, COMMID(6), INT64(1229), INT64(12));
  return;
}

/* Atomics.chpl:1238 */
static void wrapon_fn13(_class_localson_fn13 c) {
  chpl____wide__ref_atomic_int64 _1_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  memory_order _3_rvfDerefTmp;
  memory_order T;
  _1_tmp = (c)->_1_tmp;
  T = (c)->_3_rvfDerefTmp;
  _3_rvfDerefTmp = T;
  on_fn13(_1_tmp, (c)->_2_rvfDerefTmp, _3_rvfDerefTmp);
  return;
}

/* Atomics.chpl:1238 */
static void on_fn13(chpl____wide__ref_atomic_int64 this12,
                    int64_t value,
                    memory_order order) {
  chpl____wide__ref_atomic_int_least64_t call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_atomic_int_least64_t T = NULL;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_592;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_593;
  chpl_macro_tmp_592.locale = (this12).locale;
  chpl_macro_tmp_592.addr = &(((this12).addr)->_v);
  call_tmp2 = chpl_macro_tmp_592;
  T = (&call_tmp2)->addr;
  atomic_fetch_add_explicit_int_least64_t(T, value, order);
  chpl_macro_tmp_593.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_593.addr = T;
  call_tmp2 = chpl_macro_tmp_593;
  return;
}

/* Atomics.chpl:1258 */
static void on_fn14(chpl____wide__ref_atomic_int64 this12,
                    int64_t value,
                    memory_order order) {
  chpl____wide__ref_atomic_int_least64_t call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  _ref_atomic_int_least64_t T = NULL;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_594;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_595;
  chpl_macro_tmp_594.locale = (this12).locale;
  chpl_macro_tmp_594.addr = &(((this12).addr)->_v);
  call_tmp2 = chpl_macro_tmp_594;
  T = (&call_tmp2)->addr;
  atomic_fetch_sub_explicit_int_least64_t(T, value, order);
  chpl_macro_tmp_595.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_595.addr = T;
  call_tmp2 = chpl_macro_tmp_595;
  return;
}

/* Atomics.chpl:1258 */
static void wrapon_fn14(_class_localson_fn14 c) {
  chpl____wide__ref_atomic_int64 _1_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t _2_rvfDerefTmp;
  memory_order _3_rvfDerefTmp;
  memory_order T;
  _1_tmp = (c)->_1_tmp;
  _2_rvfDerefTmp = (c)->_2_rvfDerefTmp;
  T = (c)->_3_rvfDerefTmp;
  _3_rvfDerefTmp = T;
  on_fn14(_1_tmp, _2_rvfDerefTmp, _3_rvfDerefTmp);
  return;
}

/* Atomics.chpl:1338 */
static void on_fn15(chpl____wide__ref_atomic_int64 this12,
                    int64_t val,
                    memory_order order) {
  memory_order local_memory_order_relaxed;
  chpl_bool T;
  chpl____wide__ref_atomic_int_least64_t call_tmp2 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp3;
  _ref_atomic_int_least64_t T2 = NULL;
  chpl____wide__ref_atomic_int_least64_t call_tmp4 = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t call_tmp5;
  _ref_atomic_int_least64_t T3 = NULL;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_596;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_597;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_598;
  chpl____wide__ref_atomic_int_least64_t chpl_macro_tmp_599;
  local_memory_order_relaxed = memory_order_relaxed;
  chpl_macro_tmp_596.locale = (this12).locale;
  chpl_macro_tmp_596.addr = &(((this12).addr)->_v);
  call_tmp2 = chpl_macro_tmp_596;
  T2 = (&call_tmp2)->addr;
  call_tmp3 = atomic_load_explicit_int_least64_t(T2, local_memory_order_relaxed);
  chpl_macro_tmp_597.locale = chpl_gen_getLocaleID();
  chpl_macro_tmp_597.addr = T2;
  call_tmp2 = chpl_macro_tmp_597;
  T = (call_tmp3 != val);
  while (T) {
    chpl_task_yield();
    chpl_macro_tmp_598.locale = (this12).locale;
    chpl_macro_tmp_598.addr = &(((this12).addr)->_v);
    call_tmp4 = chpl_macro_tmp_598;
    T3 = (&call_tmp4)->addr;
    call_tmp5 = atomic_load_explicit_int_least64_t(T3, local_memory_order_relaxed);
    chpl_macro_tmp_599.locale = chpl_gen_getLocaleID();
    chpl_macro_tmp_599.addr = T3;
    call_tmp4 = chpl_macro_tmp_599;
    T = (call_tmp5 != val);
  }
  atomic_thread_fence(order);
  return;
}

/* Atomics.chpl:1338 */
static void wrapon_fn15(_class_localson_fn15 c) {
  chpl____wide__ref_atomic_int64 _1_tmp = {CHPL_LOCALEID_T_INIT, NULL};
  int64_t _2_rvfDerefTmp;
  memory_order _3_rvfDerefTmp;
  memory_order T;
  _1_tmp = (c)->_1_tmp;
  _2_rvfDerefTmp = (c)->_2_rvfDerefTmp;
  T = (c)->_3_rvfDerefTmp;
  _3_rvfDerefTmp = T;
  on_fn15(_1_tmp, _2_rvfDerefTmp, _3_rvfDerefTmp);
  return;
}

