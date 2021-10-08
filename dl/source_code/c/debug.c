// ---- DEBUG.C

#include <debug.h>

typedef void (*DEBUG)();
char strDebug[127];

void msg_proc(char* strMessage)
{
char *pstrS = strMessage;
char *pstrD = strDebug + 7;



while ((*pstrD++ = *pstrS++) != '\0')
;

*--pstrD = (char)0xC9; // RET

strDebug[0] = 0x52U; // LD D,D
strDebug[1] = 0x18U; // JR ...
strDebug[2] = (pstrD - strDebug) - 3;
strDebug[3] = 0x64U;
strDebug[4] = 0x64U;
strDebug[5] = 0x00U;
strDebug[6] = 0x00U;

((DEBUG)strDebug)(); // execute the debug code
}
