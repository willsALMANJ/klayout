
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
*  @file gsiDeclQXmlStreamNotationDeclaration.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QXmlStreamNotationDeclaration>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include "gsiDeclQtCoreTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QXmlStreamNotationDeclaration

//  Constructor QXmlStreamNotationDeclaration::QXmlStreamNotationDeclaration()


static void _init_ctor_QXmlStreamNotationDeclaration_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QXmlStreamNotationDeclaration> ();
}

static void _call_ctor_QXmlStreamNotationDeclaration_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QXmlStreamNotationDeclaration *> (new QXmlStreamNotationDeclaration ());
}


//  Constructor QXmlStreamNotationDeclaration::QXmlStreamNotationDeclaration(const QXmlStreamNotationDeclaration &)


static void _init_ctor_QXmlStreamNotationDeclaration_4289 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QXmlStreamNotationDeclaration & > (argspec_0);
  decl->set_return_new<QXmlStreamNotationDeclaration> ();
}

static void _call_ctor_QXmlStreamNotationDeclaration_4289 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlStreamNotationDeclaration &arg1 = gsi::arg_reader<const QXmlStreamNotationDeclaration & >() (args, heap);
  ret.write<QXmlStreamNotationDeclaration *> (new QXmlStreamNotationDeclaration (arg1));
}


// QStringRef QXmlStreamNotationDeclaration::name()


static void _init_f_name_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QStringRef > ();
}

static void _call_f_name_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStringRef > ((QStringRef)((QXmlStreamNotationDeclaration *)cls)->name ());
}


// bool QXmlStreamNotationDeclaration::operator!=(const QXmlStreamNotationDeclaration &other)


static void _init_f_operator_excl__eq__c4289 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QXmlStreamNotationDeclaration & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c4289 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlStreamNotationDeclaration &arg1 = gsi::arg_reader<const QXmlStreamNotationDeclaration & >() (args, heap);
  ret.write<bool > ((bool)((QXmlStreamNotationDeclaration *)cls)->operator!= (arg1));
}


// QXmlStreamNotationDeclaration &QXmlStreamNotationDeclaration::operator=(const QXmlStreamNotationDeclaration &)


static void _init_f_operator_eq__4289 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QXmlStreamNotationDeclaration & > (argspec_0);
  decl->set_return<QXmlStreamNotationDeclaration & > ();
}

static void _call_f_operator_eq__4289 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlStreamNotationDeclaration &arg1 = gsi::arg_reader<const QXmlStreamNotationDeclaration & >() (args, heap);
  ret.write<QXmlStreamNotationDeclaration & > ((QXmlStreamNotationDeclaration &)((QXmlStreamNotationDeclaration *)cls)->operator= (arg1));
}


// bool QXmlStreamNotationDeclaration::operator==(const QXmlStreamNotationDeclaration &other)


static void _init_f_operator_eq__eq__c4289 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QXmlStreamNotationDeclaration & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c4289 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QXmlStreamNotationDeclaration &arg1 = gsi::arg_reader<const QXmlStreamNotationDeclaration & >() (args, heap);
  ret.write<bool > ((bool)((QXmlStreamNotationDeclaration *)cls)->operator== (arg1));
}


// QStringRef QXmlStreamNotationDeclaration::publicId()


static void _init_f_publicId_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QStringRef > ();
}

static void _call_f_publicId_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStringRef > ((QStringRef)((QXmlStreamNotationDeclaration *)cls)->publicId ());
}


// QStringRef QXmlStreamNotationDeclaration::systemId()


static void _init_f_systemId_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QStringRef > ();
}

static void _call_f_systemId_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStringRef > ((QStringRef)((QXmlStreamNotationDeclaration *)cls)->systemId ());
}



namespace gsi
{

static gsi::Methods methods_QXmlStreamNotationDeclaration () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QXmlStreamNotationDeclaration::QXmlStreamNotationDeclaration()\nThis method creates an object of class QXmlStreamNotationDeclaration.", &_init_ctor_QXmlStreamNotationDeclaration_0, &_call_ctor_QXmlStreamNotationDeclaration_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QXmlStreamNotationDeclaration::QXmlStreamNotationDeclaration(const QXmlStreamNotationDeclaration &)\nThis method creates an object of class QXmlStreamNotationDeclaration.", &_init_ctor_QXmlStreamNotationDeclaration_4289, &_call_ctor_QXmlStreamNotationDeclaration_4289);
  methods += new qt_gsi::GenericMethod ("name", "@brief Method QStringRef QXmlStreamNotationDeclaration::name()\n", true, &_init_f_name_c0, &_call_f_name_c0);
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QXmlStreamNotationDeclaration::operator!=(const QXmlStreamNotationDeclaration &other)\n", true, &_init_f_operator_excl__eq__c4289, &_call_f_operator_excl__eq__c4289);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QXmlStreamNotationDeclaration &QXmlStreamNotationDeclaration::operator=(const QXmlStreamNotationDeclaration &)\n", false, &_init_f_operator_eq__4289, &_call_f_operator_eq__4289);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QXmlStreamNotationDeclaration::operator==(const QXmlStreamNotationDeclaration &other)\n", true, &_init_f_operator_eq__eq__c4289, &_call_f_operator_eq__eq__c4289);
  methods += new qt_gsi::GenericMethod ("publicId", "@brief Method QStringRef QXmlStreamNotationDeclaration::publicId()\n", true, &_init_f_publicId_c0, &_call_f_publicId_c0);
  methods += new qt_gsi::GenericMethod ("systemId", "@brief Method QStringRef QXmlStreamNotationDeclaration::systemId()\n", true, &_init_f_systemId_c0, &_call_f_systemId_c0);
  return methods;
}

gsi::Class<QXmlStreamNotationDeclaration> decl_QXmlStreamNotationDeclaration ("QtCore", "QXmlStreamNotationDeclaration",
  methods_QXmlStreamNotationDeclaration (),
  "@qt\n@brief Binding of QXmlStreamNotationDeclaration");


GSI_QTCORE_PUBLIC gsi::Class<QXmlStreamNotationDeclaration> &qtdecl_QXmlStreamNotationDeclaration () { return decl_QXmlStreamNotationDeclaration; }

}

