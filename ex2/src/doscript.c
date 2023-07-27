#include "lauxlib.h"
#include "lua.h"
#include "lualib.h"

int main() {
  lua_State *L = luaL_newstate();
  luaL_openlibs(L);
  luaL_dostring(L, "print('Hello World')");

  return 0;
}