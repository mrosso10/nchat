// apputil.h
//
// Copyright (c) 2020-2024 Kristofer Berggren
// All rights reserved.
//
// nchat is distributed under the MIT license, see LICENSE for details.

#pragma once

#include <string>

class AppUtil
{
public:
  static std::string GetAppName(bool p_WithVersion);
  static std::string GetAppVersion();
  static void SetDeveloperMode(bool p_DeveloperMode);
  static bool GetDeveloperMode();
  static void SetForceShowMutedChats(bool p_ForceShowMutedChats);
  static bool GetForceShowMutedChats();
  static void SetForceShowHiddenChats(bool p_ForceShowHiddenChats);
  static bool GetForceShowHiddenChats();
  static void InitCoredump();
  static void InitSignalHandler();
  static void SignalHandler(int p_Signal);

private:
  static bool m_DeveloperMode;
  static bool m_ForceShowMutedChats;
  static bool m_ForceShowHiddenChats;
};
