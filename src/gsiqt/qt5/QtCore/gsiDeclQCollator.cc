
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
*  @file gsiDeclQCollator.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QCollator>
#include <QCollatorSortKey>
#include <QLocale>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include "gsiDeclQtCoreTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QCollator

//  Constructor QCollator::QCollator(const QLocale &locale)


static void _init_ctor_QCollator_1986 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("locale", true, "QLocale()");
  decl->add_arg<const QLocale & > (argspec_0);
  decl->set_return_new<QCollator> ();
}

static void _call_ctor_QCollator_1986 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QLocale &arg1 = args ? gsi::arg_reader<const QLocale & >() (args, heap) : gsi::arg_maker<const QLocale & >() (QLocale(), heap);
  ret.write<QCollator *> (new QCollator (arg1));
}


//  Constructor QCollator::QCollator(const QCollator &)


static void _init_ctor_QCollator_2226 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QCollator & > (argspec_0);
  decl->set_return_new<QCollator> ();
}

static void _call_ctor_QCollator_2226 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QCollator &arg1 = gsi::arg_reader<const QCollator & >() (args, heap);
  ret.write<QCollator *> (new QCollator (arg1));
}


// Qt::CaseSensitivity QCollator::caseSensitivity()


static void _init_f_caseSensitivity_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<Qt::CaseSensitivity>::target_type > ();
}

static void _call_f_caseSensitivity_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<Qt::CaseSensitivity>::target_type > ((qt_gsi::Converter<Qt::CaseSensitivity>::target_type)qt_gsi::CppToQtAdaptor<Qt::CaseSensitivity>(((QCollator *)cls)->caseSensitivity ()));
}


// int QCollator::compare(const QString &s1, const QString &s2)


static void _init_f_compare_c3942 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s1");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("s2");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<int > ();
}

static void _call_f_compare_c3942 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  const QString &arg2 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<int > ((int)((QCollator *)cls)->compare (arg1, arg2));
}


// int QCollator::compare(const QStringRef &s1, const QStringRef &s2)


static void _init_f_compare_c4512 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s1");
  decl->add_arg<const QStringRef & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("s2");
  decl->add_arg<const QStringRef & > (argspec_1);
  decl->set_return<int > ();
}

static void _call_f_compare_c4512 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QStringRef &arg1 = gsi::arg_reader<const QStringRef & >() (args, heap);
  const QStringRef &arg2 = gsi::arg_reader<const QStringRef & >() (args, heap);
  ret.write<int > ((int)((QCollator *)cls)->compare (arg1, arg2));
}


// int QCollator::compare(const QChar *s1, int len1, const QChar *s2, int len2)


static void _init_f_compare_c4770 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s1");
  decl->add_arg<const qt_gsi::Converter<QChar>::target_type * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("len1");
  decl->add_arg<int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("s2");
  decl->add_arg<const qt_gsi::Converter<QChar>::target_type * > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("len2");
  decl->add_arg<int > (argspec_3);
  decl->set_return<int > ();
}

static void _call_f_compare_c4770 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QChar>::target_type * arg1 = gsi::arg_reader<const qt_gsi::Converter<QChar>::target_type * >() (args, heap);
  int arg2 = gsi::arg_reader<int >() (args, heap);
  const qt_gsi::Converter<QChar>::target_type * arg3 = gsi::arg_reader<const qt_gsi::Converter<QChar>::target_type * >() (args, heap);
  int arg4 = gsi::arg_reader<int >() (args, heap);
  ret.write<int > ((int)((QCollator *)cls)->compare (qt_gsi::QtToCppAdaptor<QChar>(arg1).cptr(), arg2, qt_gsi::QtToCppAdaptor<QChar>(arg3).cptr(), arg4));
}


// bool QCollator::ignorePunctuation()


static void _init_f_ignorePunctuation_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_ignorePunctuation_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QCollator *)cls)->ignorePunctuation ());
}


// QLocale QCollator::locale()


static void _init_f_locale_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QLocale > ();
}

static void _call_f_locale_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QLocale > ((QLocale)((QCollator *)cls)->locale ());
}


// bool QCollator::numericMode()


static void _init_f_numericMode_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_numericMode_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QCollator *)cls)->numericMode ());
}


// bool QCollator::operator()(const QString &s1, const QString &s2)


static void _init_f_operator_func__c3942 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s1");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("s2");
  decl->add_arg<const QString & > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_f_operator_func__c3942 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  const QString &arg2 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<bool > ((bool)((QCollator *)cls)->operator() (arg1, arg2));
}


// QCollator &QCollator::operator=(const QCollator &)


static void _init_f_operator_eq__2226 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<const QCollator & > (argspec_0);
  decl->set_return<QCollator & > ();
}

static void _call_f_operator_eq__2226 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QCollator &arg1 = gsi::arg_reader<const QCollator & >() (args, heap);
  ret.write<QCollator & > ((QCollator &)((QCollator *)cls)->operator= (arg1));
}


// void QCollator::setCaseSensitivity(Qt::CaseSensitivity cs)


static void _init_f_setCaseSensitivity_2324 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("cs");
  decl->add_arg<const qt_gsi::Converter<Qt::CaseSensitivity>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setCaseSensitivity_2324 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<Qt::CaseSensitivity>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<Qt::CaseSensitivity>::target_type & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QCollator *)cls)->setCaseSensitivity (qt_gsi::QtToCppAdaptor<Qt::CaseSensitivity>(arg1).cref());
}


// void QCollator::setIgnorePunctuation(bool on)


static void _init_f_setIgnorePunctuation_864 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("on");
  decl->add_arg<bool > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setIgnorePunctuation_864 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  bool arg1 = gsi::arg_reader<bool >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QCollator *)cls)->setIgnorePunctuation (arg1);
}


// void QCollator::setLocale(const QLocale &locale)


static void _init_f_setLocale_1986 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("locale");
  decl->add_arg<const QLocale & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setLocale_1986 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QLocale &arg1 = gsi::arg_reader<const QLocale & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QCollator *)cls)->setLocale (arg1);
}


// void QCollator::setNumericMode(bool on)


static void _init_f_setNumericMode_864 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("on");
  decl->add_arg<bool > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setNumericMode_864 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  bool arg1 = gsi::arg_reader<bool >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QCollator *)cls)->setNumericMode (arg1);
}


// QCollatorSortKey QCollator::sortKey(const QString &string)


static void _init_f_sortKey_c2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("string");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<QCollatorSortKey > ();
}

static void _call_f_sortKey_c2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QCollatorSortKey > ((QCollatorSortKey)((QCollator *)cls)->sortKey (arg1));
}


// void QCollator::swap(QCollator &other)


static void _init_f_swap_1531 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<QCollator & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_swap_1531 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QCollator &arg1 = gsi::arg_reader<QCollator & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QCollator *)cls)->swap (arg1);
}



namespace gsi
{

static gsi::Methods methods_QCollator () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QCollator::QCollator(const QLocale &locale)\nThis method creates an object of class QCollator.", &_init_ctor_QCollator_1986, &_call_ctor_QCollator_1986);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QCollator::QCollator(const QCollator &)\nThis method creates an object of class QCollator.", &_init_ctor_QCollator_2226, &_call_ctor_QCollator_2226);
  methods += new qt_gsi::GenericMethod (":caseSensitivity", "@brief Method Qt::CaseSensitivity QCollator::caseSensitivity()\n", true, &_init_f_caseSensitivity_c0, &_call_f_caseSensitivity_c0);
  methods += new qt_gsi::GenericMethod ("compare", "@brief Method int QCollator::compare(const QString &s1, const QString &s2)\n", true, &_init_f_compare_c3942, &_call_f_compare_c3942);
  methods += new qt_gsi::GenericMethod ("compare", "@brief Method int QCollator::compare(const QStringRef &s1, const QStringRef &s2)\n", true, &_init_f_compare_c4512, &_call_f_compare_c4512);
  methods += new qt_gsi::GenericMethod ("compare", "@brief Method int QCollator::compare(const QChar *s1, int len1, const QChar *s2, int len2)\n", true, &_init_f_compare_c4770, &_call_f_compare_c4770);
  methods += new qt_gsi::GenericMethod (":ignorePunctuation", "@brief Method bool QCollator::ignorePunctuation()\n", true, &_init_f_ignorePunctuation_c0, &_call_f_ignorePunctuation_c0);
  methods += new qt_gsi::GenericMethod (":locale", "@brief Method QLocale QCollator::locale()\n", true, &_init_f_locale_c0, &_call_f_locale_c0);
  methods += new qt_gsi::GenericMethod (":numericMode", "@brief Method bool QCollator::numericMode()\n", true, &_init_f_numericMode_c0, &_call_f_numericMode_c0);
  methods += new qt_gsi::GenericMethod ("()", "@brief Method bool QCollator::operator()(const QString &s1, const QString &s2)\n", true, &_init_f_operator_func__c3942, &_call_f_operator_func__c3942);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QCollator &QCollator::operator=(const QCollator &)\n", false, &_init_f_operator_eq__2226, &_call_f_operator_eq__2226);
  methods += new qt_gsi::GenericMethod ("setCaseSensitivity|caseSensitivity=", "@brief Method void QCollator::setCaseSensitivity(Qt::CaseSensitivity cs)\n", false, &_init_f_setCaseSensitivity_2324, &_call_f_setCaseSensitivity_2324);
  methods += new qt_gsi::GenericMethod ("setIgnorePunctuation|ignorePunctuation=", "@brief Method void QCollator::setIgnorePunctuation(bool on)\n", false, &_init_f_setIgnorePunctuation_864, &_call_f_setIgnorePunctuation_864);
  methods += new qt_gsi::GenericMethod ("setLocale|locale=", "@brief Method void QCollator::setLocale(const QLocale &locale)\n", false, &_init_f_setLocale_1986, &_call_f_setLocale_1986);
  methods += new qt_gsi::GenericMethod ("setNumericMode|numericMode=", "@brief Method void QCollator::setNumericMode(bool on)\n", false, &_init_f_setNumericMode_864, &_call_f_setNumericMode_864);
  methods += new qt_gsi::GenericMethod ("sortKey", "@brief Method QCollatorSortKey QCollator::sortKey(const QString &string)\n", true, &_init_f_sortKey_c2025, &_call_f_sortKey_c2025);
  methods += new qt_gsi::GenericMethod ("swap", "@brief Method void QCollator::swap(QCollator &other)\n", false, &_init_f_swap_1531, &_call_f_swap_1531);
  return methods;
}

gsi::Class<QCollator> decl_QCollator ("QtCore", "QCollator",
  methods_QCollator (),
  "@qt\n@brief Binding of QCollator");


GSI_QTCORE_PUBLIC gsi::Class<QCollator> &qtdecl_QCollator () { return decl_QCollator; }

}

