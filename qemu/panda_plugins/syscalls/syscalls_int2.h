
#include "syscalls_common.hpp"

//typedef void ReturnPoint;
//typedef void pre_exec_callback_t;

void appendReturnPoint(ReturnPoint&& rp);

void registerExecPreCallback(pre_exec_callback_t callback);
