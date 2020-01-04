
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
*  @file gsiDeclQPen.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QPen>
#include <QBrush>
#include <QColor>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include "gsiDeclQtGuiTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QPen

//  Constructor QPen::QPen()


static void _init_ctor_QPen_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QPen> ();
}

static void _call_ctor_QPen_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QPen *> (new QPen ());
}


//  Constructor QPen::QPen(Qt::PenStyle)


static void _init_ctor_QPen_1569 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const qt_gsi::Converter<Qt::PenStyle>::target_type & > (argspec_0);
  decl->set_return_new<QPen> ();
}

static void _call_ctor_QPen_1569 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<Qt::PenStyle>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<Qt::PenStyle>::target_type & >() (args, heap);
  ret.write<QPen *> (new QPen (qt_gsi::QtToCppAdaptor<Qt::PenStyle>(arg1).cref()));
}


//  Constructor QPen::QPen(const QColor &color)


static void _init_ctor_QPen_1905 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("color");
  decl->add_arg<const QColor & > (argspec_0);
  decl->set_return_new<QPen> ();
}

static void _call_ctor_QPen_1905 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QColor &arg1 = gsi::arg_reader<const QColor & >() (args, heap);
  ret.write<QPen *> (new QPen (arg1));
}


//  Constructor QPen::QPen(const QBrush &brush, double width, Qt::PenStyle s, Qt::PenCapStyle c, Qt::PenJoinStyle j)


static void _init_ctor_QPen_7932 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("brush");
  decl->add_arg<const QBrush & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("width");
  decl->add_arg<double > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("s", true, "Qt::SolidLine");
  decl->add_arg<const qt_gsi::Converter<Qt::PenStyle>::target_type & > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("c", true, "Qt::SquareCap");
  decl->add_arg<const qt_gsi::Converter<Qt::PenCapStyle>::target_type & > (argspec_3);
  static gsi::ArgSpecBase argspec_4 ("j", true, "Qt::BevelJoin");
  decl->add_arg<const qt_gsi::Converter<Qt::PenJoinStyle>::target_type & > (argspec_4);
  decl->set_return_new<QPen> ();
}

static void _call_ctor_QPen_7932 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QBrush &arg1 = gsi::arg_reader<const QBrush & >() (args, heap);
  double arg2 = gsi::arg_reader<double >() (args, heap);
  const qt_gsi::Converter<Qt::PenStyle>::target_type & arg3 = args ? gsi::arg_reader<const qt_gsi::Converter<Qt::PenStyle>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<Qt::PenStyle>::target_type & >() (qt_gsi::CppToQtReadAdaptor<Qt::PenStyle>(heap, Qt::SolidLine), heap);
  const qt_gsi::Converter<Qt::PenCapStyle>::target_type & arg4 = args ? gsi::arg_reader<const qt_gsi::Converter<Qt::PenCapStyle>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<Qt::PenCapStyle>::target_type & >() (qt_gsi::CppToQtReadAdaptor<Qt::PenCapStyle>(heap, Qt::SquareCap), heap);
  const qt_gsi::Converter<Qt::PenJoinStyle>::target_type & arg5 = args ? gsi::arg_reader<const qt_gsi::Converter<Qt::PenJoinStyle>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<Qt::PenJoinStyle>::target_type & >() (qt_gsi::CppToQtReadAdaptor<Qt::PenJoinStyle>(heap, Qt::BevelJoin), heap);
  ret.write<QPen *> (new QPen (arg1, arg2, qt_gsi::QtToCppAdaptor<Qt::PenStyle>(arg3).cref(), qt_gsi::QtToCppAdaptor<Qt::PenCapStyle>(arg4).cref(), qt_gsi::QtToCppAdaptor<Qt::PenJoinStyle>(arg5).cref()));
}


//  Constructor QPen::QPen(const QPen &pen)


static void _init_ctor_QPen_1685 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pen");
  decl->add_arg<const QPen & > (argspec_0);
  decl->set_return_new<QPen> ();
}

static void _call_ctor_QPen_1685 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPen &arg1 = gsi::arg_reader<const QPen & >() (args, heap);
  ret.write<QPen *> (new QPen (arg1));
}


// QBrush QPen::brush()


static void _init_f_brush_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QBrush > ();
}

static void _call_f_brush_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QBrush > ((QBrush)((QPen *)cls)->brush ());
}


// Qt::PenCapStyle QPen::capStyle()


static void _init_f_capStyle_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<Qt::PenCapStyle>::target_type > ();
}

static void _call_f_capStyle_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<Qt::PenCapStyle>::target_type > ((qt_gsi::Converter<Qt::PenCapStyle>::target_type)qt_gsi::CppToQtAdaptor<Qt::PenCapStyle>(((QPen *)cls)->capStyle ()));
}


// QColor QPen::color()


static void _init_f_color_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QColor > ();
}

static void _call_f_color_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QColor > ((QColor)((QPen *)cls)->color ());
}


// double QPen::dashOffset()


static void _init_f_dashOffset_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_dashOffset_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QPen *)cls)->dashOffset ());
}


// QVector<qreal> QPen::dashPattern()


static void _init_f_dashPattern_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QVector<qreal> > ();
}

static void _call_f_dashPattern_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QVector<qreal> > ((QVector<qreal>)((QPen *)cls)->dashPattern ());
}


// bool QPen::isCosmetic()


static void _init_f_isCosmetic_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isCosmetic_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QPen *)cls)->isCosmetic ());
}


// bool QPen::isDetached()


static void _init_f_isDetached_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isDetached_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QPen *)cls)->isDetached ());
}


// bool QPen::isSolid()


static void _init_f_isSolid_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isSolid_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QPen *)cls)->isSolid ());
}


// Qt::PenJoinStyle QPen::joinStyle()


static void _init_f_joinStyle_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<Qt::PenJoinStyle>::target_type > ();
}

static void _call_f_joinStyle_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<Qt::PenJoinStyle>::target_type > ((qt_gsi::Converter<Qt::PenJoinStyle>::target_type)qt_gsi::CppToQtAdaptor<Qt::PenJoinStyle>(((QPen *)cls)->joinStyle ()));
}


// double QPen::miterLimit()


static void _init_f_miterLimit_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_miterLimit_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QPen *)cls)->miterLimit ());
}


// bool QPen::operator!=(const QPen &p)


static void _init_f_operator_excl__eq__c1685 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("p");
  decl->add_arg<const QPen & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c1685 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPen &arg1 = gsi::arg_reader<const QPen & >() (args, heap);
  ret.write<bool > ((bool)((QPen *)cls)->operator!= (arg1));
}


// QPen &QPen::operator=(const QPen &pen)


static void _init_f_operator_eq__1685 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pen");
  decl->add_arg<const QPen & > (argspec_0);
  decl->set_return<QPen & > ();
}

static void _call_f_operator_eq__1685 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPen &arg1 = gsi::arg_reader<const QPen & >() (args, heap);
  ret.write<QPen & > ((QPen &)((QPen *)cls)->operator= (arg1));
}


// bool QPen::operator==(const QPen &p)


static void _init_f_operator_eq__eq__c1685 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("p");
  decl->add_arg<const QPen & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c1685 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QPen &arg1 = gsi::arg_reader<const QPen & >() (args, heap);
  ret.write<bool > ((bool)((QPen *)cls)->operator== (arg1));
}


// void QPen::setBrush(const QBrush &brush)


static void _init_f_setBrush_1910 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("brush");
  decl->add_arg<const QBrush & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setBrush_1910 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QBrush &arg1 = gsi::arg_reader<const QBrush & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPen *)cls)->setBrush (arg1);
}


// void QPen::setCapStyle(Qt::PenCapStyle pcs)


static void _init_f_setCapStyle_1845 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pcs");
  decl->add_arg<const qt_gsi::Converter<Qt::PenCapStyle>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setCapStyle_1845 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<Qt::PenCapStyle>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<Qt::PenCapStyle>::target_type & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPen *)cls)->setCapStyle (qt_gsi::QtToCppAdaptor<Qt::PenCapStyle>(arg1).cref());
}


// void QPen::setColor(const QColor &color)


static void _init_f_setColor_1905 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("color");
  decl->add_arg<const QColor & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setColor_1905 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QColor &arg1 = gsi::arg_reader<const QColor & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPen *)cls)->setColor (arg1);
}


// void QPen::setCosmetic(bool cosmetic)


static void _init_f_setCosmetic_864 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("cosmetic");
  decl->add_arg<bool > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setCosmetic_864 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  bool arg1 = gsi::arg_reader<bool >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPen *)cls)->setCosmetic (arg1);
}


// void QPen::setDashOffset(double doffset)


static void _init_f_setDashOffset_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("doffset");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setDashOffset_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPen *)cls)->setDashOffset (arg1);
}


// void QPen::setDashPattern(const QVector<qreal> &pattern)


static void _init_f_setDashPattern_2676 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pattern");
  decl->add_arg<const QVector<qreal> & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setDashPattern_2676 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QVector<qreal> &arg1 = gsi::arg_reader<const QVector<qreal> & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPen *)cls)->setDashPattern (arg1);
}


// void QPen::setJoinStyle(Qt::PenJoinStyle pcs)


static void _init_f_setJoinStyle_1969 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("pcs");
  decl->add_arg<const qt_gsi::Converter<Qt::PenJoinStyle>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setJoinStyle_1969 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<Qt::PenJoinStyle>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<Qt::PenJoinStyle>::target_type & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPen *)cls)->setJoinStyle (qt_gsi::QtToCppAdaptor<Qt::PenJoinStyle>(arg1).cref());
}


// void QPen::setMiterLimit(double limit)


static void _init_f_setMiterLimit_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("limit");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setMiterLimit_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPen *)cls)->setMiterLimit (arg1);
}


// void QPen::setStyle(Qt::PenStyle)


static void _init_f_setStyle_1569u1 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const qt_gsi::Converter<Qt::PenStyle>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setStyle_1569u1 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<Qt::PenStyle>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<Qt::PenStyle>::target_type & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPen *)cls)->setStyle (qt_gsi::QtToCppAdaptor<Qt::PenStyle>(arg1).cref());
}


// void QPen::setWidth(int width)


static void _init_f_setWidth_767 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("width");
  decl->add_arg<int > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setWidth_767 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPen *)cls)->setWidth (arg1);
}


// void QPen::setWidthF(double width)


static void _init_f_setWidthF_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("width");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setWidthF_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPen *)cls)->setWidthF (arg1);
}


// Qt::PenStyle QPen::style()


static void _init_f_style_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<Qt::PenStyle>::target_type > ();
}

static void _call_f_style_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<Qt::PenStyle>::target_type > ((qt_gsi::Converter<Qt::PenStyle>::target_type)qt_gsi::CppToQtAdaptor<Qt::PenStyle>(((QPen *)cls)->style ()));
}


// void QPen::swap(QPen &other)


static void _init_f_swap_990 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<QPen & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_swap_990 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QPen &arg1 = gsi::arg_reader<QPen & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPen *)cls)->swap (arg1);
}


// int QPen::width()


static void _init_f_width_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_f_width_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QPen *)cls)->width ());
}


// double QPen::widthF()


static void _init_f_widthF_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_widthF_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QPen *)cls)->widthF ());
}



namespace gsi
{

static gsi::Methods methods_QPen () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QPen::QPen()\nThis method creates an object of class QPen.", &_init_ctor_QPen_0, &_call_ctor_QPen_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QPen::QPen(Qt::PenStyle)\nThis method creates an object of class QPen.", &_init_ctor_QPen_1569, &_call_ctor_QPen_1569);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QPen::QPen(const QColor &color)\nThis method creates an object of class QPen.", &_init_ctor_QPen_1905, &_call_ctor_QPen_1905);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QPen::QPen(const QBrush &brush, double width, Qt::PenStyle s, Qt::PenCapStyle c, Qt::PenJoinStyle j)\nThis method creates an object of class QPen.", &_init_ctor_QPen_7932, &_call_ctor_QPen_7932);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QPen::QPen(const QPen &pen)\nThis method creates an object of class QPen.", &_init_ctor_QPen_1685, &_call_ctor_QPen_1685);
  methods += new qt_gsi::GenericMethod (":brush", "@brief Method QBrush QPen::brush()\n", true, &_init_f_brush_c0, &_call_f_brush_c0);
  methods += new qt_gsi::GenericMethod (":capStyle", "@brief Method Qt::PenCapStyle QPen::capStyle()\n", true, &_init_f_capStyle_c0, &_call_f_capStyle_c0);
  methods += new qt_gsi::GenericMethod (":color", "@brief Method QColor QPen::color()\n", true, &_init_f_color_c0, &_call_f_color_c0);
  methods += new qt_gsi::GenericMethod (":dashOffset", "@brief Method double QPen::dashOffset()\n", true, &_init_f_dashOffset_c0, &_call_f_dashOffset_c0);
  methods += new qt_gsi::GenericMethod (":dashPattern", "@brief Method QVector<qreal> QPen::dashPattern()\n", true, &_init_f_dashPattern_c0, &_call_f_dashPattern_c0);
  methods += new qt_gsi::GenericMethod ("isCosmetic?|:cosmetic", "@brief Method bool QPen::isCosmetic()\n", true, &_init_f_isCosmetic_c0, &_call_f_isCosmetic_c0);
  methods += new qt_gsi::GenericMethod ("isDetached?", "@brief Method bool QPen::isDetached()\n", false, &_init_f_isDetached_0, &_call_f_isDetached_0);
  methods += new qt_gsi::GenericMethod ("isSolid?", "@brief Method bool QPen::isSolid()\n", true, &_init_f_isSolid_c0, &_call_f_isSolid_c0);
  methods += new qt_gsi::GenericMethod (":joinStyle", "@brief Method Qt::PenJoinStyle QPen::joinStyle()\n", true, &_init_f_joinStyle_c0, &_call_f_joinStyle_c0);
  methods += new qt_gsi::GenericMethod (":miterLimit", "@brief Method double QPen::miterLimit()\n", true, &_init_f_miterLimit_c0, &_call_f_miterLimit_c0);
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QPen::operator!=(const QPen &p)\n", true, &_init_f_operator_excl__eq__c1685, &_call_f_operator_excl__eq__c1685);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QPen &QPen::operator=(const QPen &pen)\n", false, &_init_f_operator_eq__1685, &_call_f_operator_eq__1685);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QPen::operator==(const QPen &p)\n", true, &_init_f_operator_eq__eq__c1685, &_call_f_operator_eq__eq__c1685);
  methods += new qt_gsi::GenericMethod ("setBrush|brush=", "@brief Method void QPen::setBrush(const QBrush &brush)\n", false, &_init_f_setBrush_1910, &_call_f_setBrush_1910);
  methods += new qt_gsi::GenericMethod ("setCapStyle|capStyle=", "@brief Method void QPen::setCapStyle(Qt::PenCapStyle pcs)\n", false, &_init_f_setCapStyle_1845, &_call_f_setCapStyle_1845);
  methods += new qt_gsi::GenericMethod ("setColor|color=", "@brief Method void QPen::setColor(const QColor &color)\n", false, &_init_f_setColor_1905, &_call_f_setColor_1905);
  methods += new qt_gsi::GenericMethod ("setCosmetic|cosmetic=", "@brief Method void QPen::setCosmetic(bool cosmetic)\n", false, &_init_f_setCosmetic_864, &_call_f_setCosmetic_864);
  methods += new qt_gsi::GenericMethod ("setDashOffset|dashOffset=", "@brief Method void QPen::setDashOffset(double doffset)\n", false, &_init_f_setDashOffset_1071, &_call_f_setDashOffset_1071);
  methods += new qt_gsi::GenericMethod ("setDashPattern|dashPattern=", "@brief Method void QPen::setDashPattern(const QVector<qreal> &pattern)\n", false, &_init_f_setDashPattern_2676, &_call_f_setDashPattern_2676);
  methods += new qt_gsi::GenericMethod ("setJoinStyle|joinStyle=", "@brief Method void QPen::setJoinStyle(Qt::PenJoinStyle pcs)\n", false, &_init_f_setJoinStyle_1969, &_call_f_setJoinStyle_1969);
  methods += new qt_gsi::GenericMethod ("setMiterLimit|miterLimit=", "@brief Method void QPen::setMiterLimit(double limit)\n", false, &_init_f_setMiterLimit_1071, &_call_f_setMiterLimit_1071);
  methods += new qt_gsi::GenericMethod ("setStyle|style=", "@brief Method void QPen::setStyle(Qt::PenStyle)\n", false, &_init_f_setStyle_1569u1, &_call_f_setStyle_1569u1);
  methods += new qt_gsi::GenericMethod ("setWidth|width=", "@brief Method void QPen::setWidth(int width)\n", false, &_init_f_setWidth_767, &_call_f_setWidth_767);
  methods += new qt_gsi::GenericMethod ("setWidthF|widthF=", "@brief Method void QPen::setWidthF(double width)\n", false, &_init_f_setWidthF_1071, &_call_f_setWidthF_1071);
  methods += new qt_gsi::GenericMethod (":style", "@brief Method Qt::PenStyle QPen::style()\n", true, &_init_f_style_c0, &_call_f_style_c0);
  methods += new qt_gsi::GenericMethod ("swap", "@brief Method void QPen::swap(QPen &other)\n", false, &_init_f_swap_990, &_call_f_swap_990);
  methods += new qt_gsi::GenericMethod (":width", "@brief Method int QPen::width()\n", true, &_init_f_width_c0, &_call_f_width_c0);
  methods += new qt_gsi::GenericMethod (":widthF", "@brief Method double QPen::widthF()\n", true, &_init_f_widthF_c0, &_call_f_widthF_c0);
  return methods;
}

gsi::Class<QPen> decl_QPen ("QtGui", "QPen",
  methods_QPen (),
  "@qt\n@brief Binding of QPen");


GSI_QTGUI_PUBLIC gsi::Class<QPen> &qtdecl_QPen () { return decl_QPen; }

}

