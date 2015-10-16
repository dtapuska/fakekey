#include "KeyboardInjector.h"

#include <iostream>
#include <stdio.h>
#include <string>
#include <map>
#include <chrono>
#include <thread>
#include <windows.h>

#define MAP_FIELD(x) m_keyMap.emplace(#x, x);

KeyboardInjector::~KeyboardInjector()
{
}

bool KeyboardInjector::Init()
{
  MAP_FIELD(VK_LBUTTON)
  MAP_FIELD(VK_RBUTTON)
  MAP_FIELD(VK_CANCEL)
  MAP_FIELD(VK_MBUTTON)
  MAP_FIELD(VK_XBUTTON1)
  MAP_FIELD(VK_XBUTTON2)
  MAP_FIELD(VK_BACK)
  MAP_FIELD(VK_TAB)
  MAP_FIELD(VK_CLEAR)
  MAP_FIELD(VK_RETURN)
  MAP_FIELD(VK_SHIFT)
  MAP_FIELD(VK_CONTROL)
  MAP_FIELD(VK_MENU)
  MAP_FIELD(VK_PAUSE)
  MAP_FIELD(VK_CAPITAL)
  MAP_FIELD(VK_KANA)
  MAP_FIELD(VK_HANGUL)
  MAP_FIELD(VK_JUNJA)
  MAP_FIELD(VK_FINAL)
  MAP_FIELD(VK_HANJA)
  MAP_FIELD(VK_KANJI)
  MAP_FIELD(VK_ESCAPE)
  MAP_FIELD(VK_CONVERT)
  MAP_FIELD(VK_NONCONVERT)
  MAP_FIELD(VK_ACCEPT)
  MAP_FIELD(VK_MODECHANGE)
  MAP_FIELD(VK_SPACE)
  MAP_FIELD(VK_PRIOR)
  MAP_FIELD(VK_NEXT)
  MAP_FIELD(VK_END)
  MAP_FIELD(VK_HOME)
  MAP_FIELD(VK_LEFT)
  MAP_FIELD(VK_UP)
  MAP_FIELD(VK_RIGHT)
  MAP_FIELD(VK_DOWN)
  MAP_FIELD(VK_SELECT)
  MAP_FIELD(VK_PRINT)
  MAP_FIELD(VK_EXECUTE)
  MAP_FIELD(VK_SNAPSHOT)
  MAP_FIELD(VK_INSERT)
  MAP_FIELD(VK_DELETE)
  MAP_FIELD(VK_HELP)
  MAP_FIELD(VK_LWIN)
  MAP_FIELD(VK_RWIN)
  MAP_FIELD(VK_APPS)
  MAP_FIELD(VK_SLEEP)
  MAP_FIELD(VK_NUMPAD0)
  MAP_FIELD(VK_NUMPAD1)
  MAP_FIELD(VK_NUMPAD2)
  MAP_FIELD(VK_NUMPAD3)
  MAP_FIELD(VK_NUMPAD4)
  MAP_FIELD(VK_NUMPAD5)
  MAP_FIELD(VK_NUMPAD6)
  MAP_FIELD(VK_NUMPAD7)
  MAP_FIELD(VK_NUMPAD8)
  MAP_FIELD(VK_NUMPAD9)
  MAP_FIELD(VK_MULTIPLY)
  MAP_FIELD(VK_ADD)
  MAP_FIELD(VK_SEPARATOR)
  MAP_FIELD(VK_SUBTRACT)
  MAP_FIELD(VK_DECIMAL)
  MAP_FIELD(VK_DIVIDE)
  MAP_FIELD(VK_F1)
  MAP_FIELD(VK_F2)
  MAP_FIELD(VK_F3)
  MAP_FIELD(VK_F4)
  MAP_FIELD(VK_F5)
  MAP_FIELD(VK_F6)
  MAP_FIELD(VK_F7)
  MAP_FIELD(VK_F8)
  MAP_FIELD(VK_F9)
  MAP_FIELD(VK_F10)
  MAP_FIELD(VK_F11)
  MAP_FIELD(VK_F12)
  MAP_FIELD(VK_F13)
  MAP_FIELD(VK_F14)
  MAP_FIELD(VK_F15)
  MAP_FIELD(VK_F16)
  MAP_FIELD(VK_F17)
  MAP_FIELD(VK_F18)
  MAP_FIELD(VK_F19)
  MAP_FIELD(VK_F20)
  MAP_FIELD(VK_F21)
  MAP_FIELD(VK_F22)
  MAP_FIELD(VK_F23)
  MAP_FIELD(VK_F24)
  MAP_FIELD(VK_NUMLOCK)
  MAP_FIELD(VK_SCROLL)
  MAP_FIELD(VK_OEM_NEC_EQUAL)
  MAP_FIELD(VK_OEM_FJ_JISHO)
  MAP_FIELD(VK_OEM_FJ_MASSHOU)
  MAP_FIELD(VK_OEM_FJ_TOUROKU)
  MAP_FIELD(VK_OEM_FJ_LOYA)
  MAP_FIELD(VK_OEM_FJ_ROYA)
  MAP_FIELD(VK_LSHIFT)
  MAP_FIELD(VK_RSHIFT)
  MAP_FIELD(VK_LCONTROL)
  MAP_FIELD(VK_RCONTROL)
  MAP_FIELD(VK_LMENU)
  MAP_FIELD(VK_RMENU)
  MAP_FIELD(VK_BROWSER_BACK)
  MAP_FIELD(VK_BROWSER_FORWARD)
  MAP_FIELD(VK_BROWSER_REFRESH)
  MAP_FIELD(VK_BROWSER_STOP)
  MAP_FIELD(VK_BROWSER_SEARCH)
  MAP_FIELD(VK_BROWSER_FAVORITES)
  MAP_FIELD(VK_BROWSER_HOME)
  MAP_FIELD(VK_VOLUME_MUTE)
  MAP_FIELD(VK_VOLUME_DOWN)
  MAP_FIELD(VK_VOLUME_UP)
  MAP_FIELD(VK_MEDIA_NEXT_TRACK)
  MAP_FIELD(VK_MEDIA_PREV_TRACK)
  MAP_FIELD(VK_MEDIA_STOP)
  MAP_FIELD(VK_MEDIA_PLAY_PAUSE)
  MAP_FIELD(VK_LAUNCH_MAIL)
  MAP_FIELD(VK_LAUNCH_MEDIA_SELECT)
  MAP_FIELD(VK_LAUNCH_APP1)
  MAP_FIELD(VK_LAUNCH_APP2)
  MAP_FIELD(VK_OEM_1)
  MAP_FIELD(VK_OEM_PLUS)
  MAP_FIELD(VK_OEM_COMMA)
  MAP_FIELD(VK_OEM_MINUS)
  MAP_FIELD(VK_OEM_PERIOD)
  MAP_FIELD(VK_OEM_2)
  MAP_FIELD(VK_OEM_3)
  MAP_FIELD(VK_OEM_4)
  MAP_FIELD(VK_OEM_5)
  MAP_FIELD(VK_OEM_6)
  MAP_FIELD(VK_OEM_7)
  MAP_FIELD(VK_OEM_8)
  MAP_FIELD(VK_OEM_AX)
  MAP_FIELD(VK_OEM_102)
  MAP_FIELD(VK_ICO_HELP)
  MAP_FIELD(VK_ICO_00)
  MAP_FIELD(VK_PROCESSKEY)
  MAP_FIELD(VK_ICO_CLEAR)
  MAP_FIELD(VK_PACKET)
  MAP_FIELD(VK_OEM_RESET)
  MAP_FIELD(VK_OEM_JUMP)
  MAP_FIELD(VK_OEM_PA1)
  MAP_FIELD(VK_OEM_PA2)
  MAP_FIELD(VK_OEM_PA3)
  MAP_FIELD(VK_OEM_WSCTRL)
  MAP_FIELD(VK_OEM_CUSEL)
  MAP_FIELD(VK_OEM_ATTN)
  MAP_FIELD(VK_OEM_FINISH)
  MAP_FIELD(VK_OEM_COPY)
  MAP_FIELD(VK_OEM_AUTO)
  MAP_FIELD(VK_OEM_ENLW)
  MAP_FIELD(VK_OEM_BACKTAB)
  MAP_FIELD(VK_ATTN)
  MAP_FIELD(VK_CRSEL)
  MAP_FIELD(VK_EXSEL)
  MAP_FIELD(VK_EREOF)
  MAP_FIELD(VK_PLAY)
  MAP_FIELD(VK_ZOOM)
  MAP_FIELD(VK_NONAME)
  MAP_FIELD(VK_PA1)
  MAP_FIELD(VK_OEM_CLEAR)

  return true;
}

void KeyboardInjector::Run()
{
  unsigned int code = 0;
  char command[1024];
  char codeStr[1024];
  std::string line;
  while(std::getline(std::cin, line)) {
    if (line.length() >= sizeof(command) ||
		line.length() == 0 ||
        sscanf_s(line.c_str(), "%s %s", command, sizeof(command), codeStr, sizeof(codeStr)) != 2)
      break;
    code = strtoul(codeStr, NULL, 0);
    if (errno == ERANGE) code = 0;
    if (!ProcessCommand(command, code, codeStr))
      break;
  }
}

bool KeyboardInjector::ProcessCommand(const char* command, unsigned int code, const char* codeStr)
{
  if (command[0] == '#') {
    return true;
  } else if (strcmp(command, "sleep") == 0) {
    std::this_thread::sleep_for(std::chrono::microseconds(code));
    return true;
  } else if (strcmp(command, "sleepms") == 0) {
    std::this_thread::sleep_for(std::chrono::microseconds(code * 1000));
    return true;
  } else if (strcmp(command, "up") == 0 ||
             strcmp(command, "down") == 0 ||
             strcmp(command, "downup") == 0) {
    if (code == 0) {
      KeyMap::const_iterator it = m_keyMap.find(codeStr);
      if (it != m_keyMap.end()) {
        code = it->second;
      } else {
        printf("Failed to find key mapping for %s\n", codeStr);
        return false;
      }
    }

	HKL khl = LoadKeyboardLayout("00000411", KLF_ACTIVATE);
    printf("Locale is %x\n", khl);

    int scan_code = MapVirtualKey(code, MAPVK_VK_TO_VSC);
    //int scan_code = MapVirtualKeyEx(code, MAPVK_VSC_TO_VK, khl);
    if (!scan_code) {
      printf("No scancode mapping for %s\n", codeStr);
      //return false;
    }
	printf("Scan code is %x\n", scan_code);
    
    //keybd_event(code, scan_code, command[0] == 'd' ? KEYEVENTF_KEYUP : 0, 0);
    keybd_event(code, scan_code, command[0] == 'd' ? KEYEVENTF_KEYUP : 0, 0);

    if (strcmp(command, "downup") == 0) {
      std::this_thread::sleep_for(std::chrono::microseconds(60 * 1000));
      //keybd_event(code, scan_code, KEYEVENTF_KEYUP, 0);
      keybd_event(code, scan_code, KEYEVENTF_KEYUP, 0);
    }
    return true;
  }
  printf("Invalid command %s\n", command);
  return false;
}
