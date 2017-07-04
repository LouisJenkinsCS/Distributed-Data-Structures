/* PrintModuleInitOrder.chpl:29 */
void chpl__init_PrintModuleInitOrder(int64_t _ln,
                                     int32_t _fn) {
  _ref_int32_t refIndentLevel = NULL;
  chpl_bool T;
  chpl_bool call_tmp2;
  chpl_bool call_tmp3;
  c_string call_tmp4;
  chpl_bool call_tmp5;
  if (chpl__init_PrintModuleInitOrder_p) {
    goto _exit_chpl__init_PrintModuleInitOrder;
  }
  printModuleInit("%*s\n", "PrintModuleInitOrder", INT64(20));
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_PrintModuleInitOrder_p = UINT8(true);
  call_tmp2 = chpl_config_has_value("printModuleInitOrder", "Built-in");
  call_tmp3 = (! call_tmp2);
  if (call_tmp3) {
    T = UINT8(false);
  } else {
    call_tmp4 = chpl_config_get_value("printModuleInitOrder", "Built-in");
    T = _command_line_cast4(call_tmp4);
  }
  printModuleInitOrder = T;
  chpl_comm_broadcast_private(INT64(3), sizeof(chpl_bool), -1);
  moduleInitLevel = INT32(2);
  call_tmp5 = printModuleInitOrder;
  if (call_tmp5) {
    initPrint();
  }
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_PrintModuleInitOrder:;
  return;
}

/* PrintModuleInitOrder.chpl:37 */
static void printModuleInit(c_string s1,
                            c_string s2,
                            int64_t len) {
  chpl_bool call_tmp2;
  call_tmp2 = printModuleInitOrder;
  if (call_tmp2) {
    printf(s1, ((int32_t)((((int32_t)((moduleInitLevel + ((int32_t)(len))))) + INT32(2)))), s2);
  }
  return;
}

/* PrintModuleInitOrder.chpl:43 */
static void initPrint(void) {
  printf("Initializing Modules:\n");
  return;
}

