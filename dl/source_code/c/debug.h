// ---- DEBUG.H

#ifndef _DEBUG_H
#define _DEBUG_H

#ifdef DEBUGBUILD
  #define msg(a) {msg_proc(a);}
#else 
  #define msg(a) {}
#endif

void msg_proc(char* strMessage);

#endif


