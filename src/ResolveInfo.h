#pragma once
/*
 *      Copyright (C) 2017 Christian Browet
 *      http://xbmc.org
 *
 *  This Program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *
 *  This Program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with XBMC; see the file COPYING.  If not, see
 *  <http://www.gnu.org/licenses/>.
 *
 */

#include "JNIBase.h"

#include "ActivityInfo.h"

class CJNICharSequence;
class CJNIPackageManager;

namespace jni
{

class CJNIResolveInfo : public CJNIBase
{
public:
  CJNIResolveInfo(const jni::jhobject &object);
  virtual ~CJNIResolveInfo() {}

  CJNIActivityInfo activityInfo;

  CJNICharSequence loadLabel(const CJNIPackageManager& pm);
};

typedef std::vector<CJNIResolveInfo> CJNIResolveInfos;

}
