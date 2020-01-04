
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
*  @file gsiDeclQStyleOptionSizeGrip.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QStyleOptionSizeGrip>
#include <QStyleOption>
#include <QWidget>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include "gsiDeclQtGuiTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QStyleOptionSizeGrip

//  Constructor QStyleOptionSizeGrip::QStyleOptionSizeGrip()


static void _init_ctor_QStyleOptionSizeGrip_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QStyleOptionSizeGrip> ();
}

static void _call_ctor_QStyleOptionSizeGrip_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStyleOptionSizeGrip *> (new QStyleOptionSizeGrip ());
}


//  Constructor QStyleOptionSizeGrip::QStyleOptionSizeGrip(const QStyleOptionSizeGrip &other)


static void _init_ctor_QStyleOptionSizeGrip_3369 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QStyleOptionSizeGrip & > (argspec_0);
  decl->set_return_new<QStyleOptionSizeGrip> ();
}

static void _call_ctor_QStyleOptionSizeGrip_3369 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QStyleOptionSizeGrip &arg1 = gsi::arg_reader<const QStyleOptionSizeGrip & >() (args, heap);
  ret.write<QStyleOptionSizeGrip *> (new QStyleOptionSizeGrip (arg1));
}



namespace gsi
{

static gsi::Methods methods_QStyleOptionSizeGrip () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStyleOptionSizeGrip::QStyleOptionSizeGrip()\nThis method creates an object of class QStyleOptionSizeGrip.", &_init_ctor_QStyleOptionSizeGrip_0, &_call_ctor_QStyleOptionSizeGrip_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStyleOptionSizeGrip::QStyleOptionSizeGrip(const QStyleOptionSizeGrip &other)\nThis method creates an object of class QStyleOptionSizeGrip.", &_init_ctor_QStyleOptionSizeGrip_3369, &_call_ctor_QStyleOptionSizeGrip_3369);
  return methods;
}

gsi::Class<QStyleOptionComplex> &qtdecl_QStyleOptionComplex ();

gsi::Class<QStyleOptionSizeGrip> decl_QStyleOptionSizeGrip (qtdecl_QStyleOptionComplex (), "QtGui", "QStyleOptionSizeGrip",
  methods_QStyleOptionSizeGrip (),
  "@qt\n@brief Binding of QStyleOptionSizeGrip");


GSI_QTGUI_PUBLIC gsi::Class<QStyleOptionSizeGrip> &qtdecl_QStyleOptionSizeGrip () { return decl_QStyleOptionSizeGrip; }

}

