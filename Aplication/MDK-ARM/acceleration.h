#include "lis2dw12_reg.h"

int32_t lis2dw12_acceleration_raw_get(stmdev_ctx_t *ctx, uint8_t *buff)//=================================================================================================================================================================================================================================================================================================================== isso pode dar um baita erro brabo.
{
  int32_t ret;
  ret = lis2dw12_read_reg(ctx, LIS2DW12_OUT_X_L, buff, 6);
  return ret;
}