#pragma once

#include <map>

#ifdef TARGET_LINUX
#include <linux/input.h>
#include <libevdev/libevdev.h>
#include <libevdev/libevdev-uinput.h>
#endif

class KeyboardInjector
{
public:
  KeyboardInjector() = default;
  ~KeyboardInjector();
  bool Init();
  void Run();

private:
  bool ProcessCommand(const char* command, unsigned int code, const char* codeStr);

#ifdef TARGET_LINUX
  struct libevdev* m_dev = 0;
  struct libevdev_uinput* m_uidev = 0;
#endif
  using KeyMap = std::map<std::string, unsigned int>;
  KeyMap m_keyMap;
};
