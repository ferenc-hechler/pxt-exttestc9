#ifndef ETUTILS_H
#define ETUTILS_H

#include <stdint.h>
#include <stddef.h>

//size_t float2char(char* buf, float number, uint8_t digits);
//float char2float(const char* buf);

//void throwError(const char *errMsg);

void et_log(const char *msg);
//void logFloat(float f);
void et_log_int(int i);


#endif // ETUTILS_H
