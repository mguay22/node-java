
#include "java.h"
#include "javaObject.h"

extern "C" {
  static void init(v8::Local<v8::Object> target, v8::Local<v8::Value>, void*) {
    Java::Init(target);
    JavaObject::Init(target);
  }
  adfsasdfasd
  NODE_MODULE_INIT() {
    Init(exports);
  }
}

#ifdef WIN32

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved) {
  return TRUE;
}

#endif
