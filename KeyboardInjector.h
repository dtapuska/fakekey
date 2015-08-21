#pragma once

#include <map>
#include <linux/input.h>
#include <libevdev/libevdev.h>
#include <libevdev/libevdev-uinput.h>

class KeyboardInjector
{
public:
  KeyboardInjector() = default;
  ~KeyboardInjector();
  bool Init();
  void Run();

private:
  bool ProcessCommand(const char* command, unsigned int code, const char* codeStr);

  struct libevdev* m_dev = 0;
  struct libevdev_uinput* m_uidev = 0;
  using KeyMap = std::map<std::string, unsigned int>;
  KeyMap m_keyMap;
};
