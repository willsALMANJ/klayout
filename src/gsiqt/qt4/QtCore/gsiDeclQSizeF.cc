
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
*  @file gsiDeclQSizeF.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QSizeF>
#include <QSize>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include "gsiDeclQtCoreTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QSizeF

//  Constructor QSizeF::QSizeF()


static void _init_ctor_QSizeF_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QSizeF> ();
}

static void _call_ctor_QSizeF_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSizeF *> (new QSizeF ());
}


//  Constructor QSizeF::QSizeF(const QSize &sz)


static void _init_ctor_QSizeF_1805 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("sz");
  decl->add_arg<const QSize & > (argspec_0);
  decl->set_return_new<QSizeF> ();
}

static void _call_ctor_QSizeF_1805 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QSize &arg1 = gsi::arg_reader<const QSize & >() (args, heap);
  ret.write<QSizeF *> (new QSizeF (arg1));
}


//  Constructor QSizeF::QSizeF(double w, double h)


static void _init_ctor_QSizeF_2034 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("w");
  decl->add_arg<double > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("h");
  decl->add_arg<double > (argspec_1);
  decl->set_return_new<QSizeF> ();
}

static void _call_ctor_QSizeF_2034 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  double arg2 = gsi::arg_reader<double >() (args, heap);
  ret.write<QSizeF *> (new QSizeF (arg1, arg2));
}


// QSizeF QSizeF::boundedTo(const QSizeF &)


static void _init_f_boundedTo_c1875 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QSizeF & > (argspec_0);
  decl->set_return<QSizeF > ();
}

static void _call_f_boundedTo_c1875 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QSizeF &arg1 = gsi::arg_reader<const QSizeF & >() (args, heap);
  ret.write<QSizeF > ((QSizeF)((QSizeF *)cls)->boundedTo (arg1));
}


// QSizeF QSizeF::expandedTo(const QSizeF &)


static void _init_f_expandedTo_c1875 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QSizeF & > (argspec_0);
  decl->set_return<QSizeF > ();
}

static void _call_f_expandedTo_c1875 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QSizeF &arg1 = gsi::arg_reader<const QSizeF & >() (args, heap);
  ret.write<QSizeF > ((QSizeF)((QSizeF *)cls)->expandedTo (arg1));
}


// double QSizeF::height()


static void _init_f_height_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_height_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QSizeF *)cls)->height ());
}


// bool QSizeF::isEmpty()


static void _init_f_isEmpty_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isEmpty_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QSizeF *)cls)->isEmpty ());
}


// bool QSizeF::isNull()


static void _init_f_isNull_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isNull_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QSizeF *)cls)->isNull ());
}


// bool QSizeF::isValid()


static void _init_f_isValid_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isValid_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QSizeF *)cls)->isValid ());
}


// QSizeF &QSizeF::operator*=(double c)


static void _init_f_operator_star__eq__1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("c");
  decl->add_arg<double > (argspec_0);
  decl->set_return<QSizeF & > ();
}

static void _call_f_operator_star__eq__1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  ret.write<QSizeF & > ((QSizeF &)((QSizeF *)cls)->operator*= (arg1));
}


// QSizeF &QSizeF::operator+=(const QSizeF &)


static void _init_f_operator_plus__eq__1875 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QSizeF & > (argspec_0);
  decl->set_return<QSizeF & > ();
}

static void _call_f_operator_plus__eq__1875 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QSizeF &arg1 = gsi::arg_reader<const QSizeF & >() (args, heap);
  ret.write<QSizeF & > ((QSizeF &)((QSizeF *)cls)->operator+= (arg1));
}


// QSizeF &QSizeF::operator-=(const QSizeF &)


static void _init_f_operator_minus__eq__1875 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QSizeF & > (argspec_0);
  decl->set_return<QSizeF & > ();
}

static void _call_f_operator_minus__eq__1875 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QSizeF &arg1 = gsi::arg_reader<const QSizeF & >() (args, heap);
  ret.write<QSizeF & > ((QSizeF &)((QSizeF *)cls)->operator-= (arg1));
}


// QSizeF &QSizeF::operator/=(double c)


static void _init_f_operator_slash__eq__1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("c");
  decl->add_arg<double > (argspec_0);
  decl->set_return<QSizeF & > ();
}

static void _call_f_operator_slash__eq__1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  ret.write<QSizeF & > ((QSizeF &)((QSizeF *)cls)->operator/= (arg1));
}


// double &QSizeF::rheight()


static void _init_f_rheight_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double & > ();
}

static void _call_f_rheight_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double & > ((double &)((QSizeF *)cls)->rheight ());
}


// double &QSizeF::rwidth()


static void _init_f_rwidth_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double & > ();
}

static void _call_f_rwidth_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double & > ((double &)((QSizeF *)cls)->rwidth ());
}


// void QSizeF::scale(double w, double h, Qt::AspectRatioMode mode)


static void _init_f_scale_4183 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("w");
  decl->add_arg<double > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("h");
  decl->add_arg<double > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("mode");
  decl->add_arg<const qt_gsi::Converter<Qt::AspectRatioMode>::target_type & > (argspec_2);
  decl->set_return<void > ();
}

static void _call_f_scale_4183 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  double arg2 = gsi::arg_reader<double >() (args, heap);
  const qt_gsi::Converter<Qt::AspectRatioMode>::target_type & arg3 = gsi::arg_reader<const qt_gsi::Converter<Qt::AspectRatioMode>::target_type & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSizeF *)cls)->scale (arg1, arg2, qt_gsi::QtToCppAdaptor<Qt::AspectRatioMode>(arg3).cref());
}


// void QSizeF::scale(const QSizeF &s, Qt::AspectRatioMode mode)


static void _init_f_scale_4024 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const QSizeF & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("mode");
  decl->add_arg<const qt_gsi::Converter<Qt::AspectRatioMode>::target_type & > (argspec_1);
  decl->set_return<void > ();
}

static void _call_f_scale_4024 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QSizeF &arg1 = gsi::arg_reader<const QSizeF & >() (args, heap);
  const qt_gsi::Converter<Qt::AspectRatioMode>::target_type & arg2 = gsi::arg_reader<const qt_gsi::Converter<Qt::AspectRatioMode>::target_type & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSizeF *)cls)->scale (arg1, qt_gsi::QtToCppAdaptor<Qt::AspectRatioMode>(arg2).cref());
}


// void QSizeF::setHeight(double h)


static void _init_f_setHeight_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("h");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setHeight_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSizeF *)cls)->setHeight (arg1);
}


// void QSizeF::setWidth(double w)


static void _init_f_setWidth_1071 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("w");
  decl->add_arg<double > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setWidth_1071 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  double arg1 = gsi::arg_reader<double >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSizeF *)cls)->setWidth (arg1);
}


// QSize QSizeF::toSize()


static void _init_f_toSize_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QSize > ();
}

static void _call_f_toSize_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QSize > ((QSize)((QSizeF *)cls)->toSize ());
}


// void QSizeF::transpose()


static void _init_f_transpose_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<void > ();
}

static void _call_f_transpose_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QSizeF *)cls)->transpose ();
}


// double QSizeF::width()


static void _init_f_width_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<double > ();
}

static void _call_f_width_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<double > ((double)((QSizeF *)cls)->width ());
}


//  bool ::operator==(const QSizeF &s1, const QSizeF &s2)
static bool op_QSizeF_operator_eq__eq__3642(const QSizeF *_self, const QSizeF &s2) {
  return ::operator==(*_self, s2);
}

//  bool ::operator!=(const QSizeF &s1, const QSizeF &s2)
static bool op_QSizeF_operator_excl__eq__3642(const QSizeF *_self, const QSizeF &s2) {
  return ::operator!=(*_self, s2);
}

//  const QSizeF ::operator+(const QSizeF &s1, const QSizeF &s2)
static const QSizeF op_QSizeF_operator_plus__3642(const QSizeF *_self, const QSizeF &s2) {
  return ::operator+(*_self, s2);
}

//  const QSizeF ::operator-(const QSizeF &s1, const QSizeF &s2)
static const QSizeF op_QSizeF_operator_minus__3642(const QSizeF *_self, const QSizeF &s2) {
  return ::operator-(*_self, s2);
}

//  const QSizeF ::operator*(const QSizeF &s, qreal c)
static const QSizeF op_QSizeF_operator_star__2736(const QSizeF *_self, qreal c) {
  return ::operator*(*_self, c);
}

//  const QSizeF ::operator/(const QSizeF &s, qreal c)
static const QSizeF op_QSizeF_operator_slash__2736(const QSizeF *_self, qreal c) {
  return ::operator/(*_self, c);
}


namespace gsi
{

static gsi::Methods methods_QSizeF () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QSizeF::QSizeF()\nThis method creates an object of class QSizeF.", &_init_ctor_QSizeF_0, &_call_ctor_QSizeF_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QSizeF::QSizeF(const QSize &sz)\nThis method creates an object of class QSizeF.", &_init_ctor_QSizeF_1805, &_call_ctor_QSizeF_1805);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QSizeF::QSizeF(double w, double h)\nThis method creates an object of class QSizeF.", &_init_ctor_QSizeF_2034, &_call_ctor_QSizeF_2034);
  methods += new qt_gsi::GenericMethod ("boundedTo", "@brief Method QSizeF QSizeF::boundedTo(const QSizeF &)\n", true, &_init_f_boundedTo_c1875, &_call_f_boundedTo_c1875);
  methods += new qt_gsi::GenericMethod ("expandedTo", "@brief Method QSizeF QSizeF::expandedTo(const QSizeF &)\n", true, &_init_f_expandedTo_c1875, &_call_f_expandedTo_c1875);
  methods += new qt_gsi::GenericMethod (":height", "@brief Method double QSizeF::height()\n", true, &_init_f_height_c0, &_call_f_height_c0);
  methods += new qt_gsi::GenericMethod ("isEmpty?", "@brief Method bool QSizeF::isEmpty()\n", true, &_init_f_isEmpty_c0, &_call_f_isEmpty_c0);
  methods += new qt_gsi::GenericMethod ("isNull?", "@brief Method bool QSizeF::isNull()\n", true, &_init_f_isNull_c0, &_call_f_isNull_c0);
  methods += new qt_gsi::GenericMethod ("isValid?", "@brief Method bool QSizeF::isValid()\n", true, &_init_f_isValid_c0, &_call_f_isValid_c0);
  methods += new qt_gsi::GenericMethod ("*=", "@brief Method QSizeF &QSizeF::operator*=(double c)\n", false, &_init_f_operator_star__eq__1071, &_call_f_operator_star__eq__1071);
  methods += new qt_gsi::GenericMethod ("+=", "@brief Method QSizeF &QSizeF::operator+=(const QSizeF &)\n", false, &_init_f_operator_plus__eq__1875, &_call_f_operator_plus__eq__1875);
  methods += new qt_gsi::GenericMethod ("-=", "@brief Method QSizeF &QSizeF::operator-=(const QSizeF &)\n", false, &_init_f_operator_minus__eq__1875, &_call_f_operator_minus__eq__1875);
  methods += new qt_gsi::GenericMethod ("/=", "@brief Method QSizeF &QSizeF::operator/=(double c)\n", false, &_init_f_operator_slash__eq__1071, &_call_f_operator_slash__eq__1071);
  methods += new qt_gsi::GenericMethod ("rheight", "@brief Method double &QSizeF::rheight()\n", false, &_init_f_rheight_0, &_call_f_rheight_0);
  methods += new qt_gsi::GenericMethod ("rwidth", "@brief Method double &QSizeF::rwidth()\n", false, &_init_f_rwidth_0, &_call_f_rwidth_0);
  methods += new qt_gsi::GenericMethod ("scale", "@brief Method void QSizeF::scale(double w, double h, Qt::AspectRatioMode mode)\n", false, &_init_f_scale_4183, &_call_f_scale_4183);
  methods += new qt_gsi::GenericMethod ("scale", "@brief Method void QSizeF::scale(const QSizeF &s, Qt::AspectRatioMode mode)\n", false, &_init_f_scale_4024, &_call_f_scale_4024);
  methods += new qt_gsi::GenericMethod ("setHeight|height=", "@brief Method void QSizeF::setHeight(double h)\n", false, &_init_f_setHeight_1071, &_call_f_setHeight_1071);
  methods += new qt_gsi::GenericMethod ("setWidth|width=", "@brief Method void QSizeF::setWidth(double w)\n", false, &_init_f_setWidth_1071, &_call_f_setWidth_1071);
  methods += new qt_gsi::GenericMethod ("toSize", "@brief Method QSize QSizeF::toSize()\n", true, &_init_f_toSize_c0, &_call_f_toSize_c0);
  methods += new qt_gsi::GenericMethod ("transpose", "@brief Method void QSizeF::transpose()\n", false, &_init_f_transpose_0, &_call_f_transpose_0);
  methods += new qt_gsi::GenericMethod (":width", "@brief Method double QSizeF::width()\n", true, &_init_f_width_c0, &_call_f_width_c0);
  methods += gsi::method_ext("==", &::op_QSizeF_operator_eq__eq__3642, gsi::arg ("s2"), "@brief Operator bool ::operator==(const QSizeF &s1, const QSizeF &s2)\nThis is the mapping of the global operator to the instance method.");
  methods += gsi::method_ext("!=", &::op_QSizeF_operator_excl__eq__3642, gsi::arg ("s2"), "@brief Operator bool ::operator!=(const QSizeF &s1, const QSizeF &s2)\nThis is the mapping of the global operator to the instance method.");
  methods += gsi::method_ext("+", &::op_QSizeF_operator_plus__3642, gsi::arg ("s2"), "@brief Operator const QSizeF ::operator+(const QSizeF &s1, const QSizeF &s2)\nThis is the mapping of the global operator to the instance method.");
  methods += gsi::method_ext("-", &::op_QSizeF_operator_minus__3642, gsi::arg ("s2"), "@brief Operator const QSizeF ::operator-(const QSizeF &s1, const QSizeF &s2)\nThis is the mapping of the global operator to the instance method.");
  methods += gsi::method_ext("*", &::op_QSizeF_operator_star__2736, gsi::arg ("c"), "@brief Operator const QSizeF ::operator*(const QSizeF &s, qreal c)\nThis is the mapping of the global operator to the instance method.");
  methods += gsi::method_ext("/", &::op_QSizeF_operator_slash__2736, gsi::arg ("c"), "@brief Operator const QSizeF ::operator/(const QSizeF &s, qreal c)\nThis is the mapping of the global operator to the instance method.");
  return methods;
}

gsi::Class<QSizeF> decl_QSizeF ("QtCore", "QSizeF",
  methods_QSizeF (),
  "@qt\n@brief Binding of QSizeF");


GSI_QTCORE_PUBLIC gsi::Class<QSizeF> &qtdecl_QSizeF () { return decl_QSizeF; }

}

