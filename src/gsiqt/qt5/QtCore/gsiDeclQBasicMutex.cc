
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2020 Matthias Koefferlein

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

*/

/**
*  @file gsiDeclQBasicMutex.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QBasicMutex>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include "gsiDeclQtCoreTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QBasicMutex

//  Constructor QBasicMutex::QBasicMutex()


static void _init_ctor_QBasicMutex_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QBasicMutex> ();
}

static void _call_ctor_QBasicMutex_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QBasicMutex *> (new QBasicMutex ());
}


// bool QBasicMutex::isRecursive()


static void _init_f_isRecursive_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isRecursive_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QBasicMutex *)cls)->isRecursive ());
}


// void QBasicMutex::lock()


static void _init_f_lock_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_lock_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QBasicMutex *)cls)->lock ();
}


// bool QBasicMutex::tryLock()


static void _init_f_tryLock_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_tryLock_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QBasicMutex *)cls)->tryLock ());
}


// void QBasicMutex::unlock()


static void _init_f_unlock_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_unlock_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QBasicMutex *)cls)->unlock ();
}



namespace gsi
{

static gsi::Methods methods_QBasicMutex () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QBasicMutex::QBasicMutex()\nThis method creates an object of class QBasicMutex.", &_init_ctor_QBasicMutex_0, &_call_ctor_QBasicMutex_0);
  methods += new qt_gsi::GenericMethod ("isRecursive?", "@brief Method bool QBasicMutex::isRecursive()\n", false, &_init_f_isRecursive_0, &_call_f_isRecursive_0);
  methods += new qt_gsi::GenericMethod ("lock", "@brief Method void QBasicMutex::lock()\n", false, &_init_f_lock_0, &_call_f_lock_0);
  methods += new qt_gsi::GenericMethod ("tryLock", "@brief Method bool QBasicMutex::tryLock()\n", false, &_init_f_tryLock_0, &_call_f_tryLock_0);
  methods += new qt_gsi::GenericMethod ("unlock", "@brief Method void QBasicMutex::unlock()\n", false, &_init_f_unlock_0, &_call_f_unlock_0);
  return methods;
}

gsi::Class<QBasicMutex> decl_QBasicMutex ("QtCore", "QBasicMutex",
  methods_QBasicMutex (),
  "@qt\n@brief Binding of QBasicMutex");


GSI_QTCORE_PUBLIC gsi::Class<QBasicMutex> &qtdecl_QBasicMutex () { return decl_QBasicMutex; }

}

