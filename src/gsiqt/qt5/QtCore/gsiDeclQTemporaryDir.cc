
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2019 Matthias Koefferlein

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
*  @file gsiDeclQTemporaryDir.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QTemporaryDir>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include "gsiDeclQtCoreTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QTemporaryDir

//  Constructor QTemporaryDir::QTemporaryDir()


static void _init_ctor_QTemporaryDir_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QTemporaryDir> ();
}

static void _call_ctor_QTemporaryDir_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTemporaryDir *> (new QTemporaryDir ());
}


//  Constructor QTemporaryDir::QTemporaryDir(const QString &templateName)


static void _init_ctor_QTemporaryDir_2025 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("templateName");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return_new<QTemporaryDir> ();
}

static void _call_ctor_QTemporaryDir_2025 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ret.write<QTemporaryDir *> (new QTemporaryDir (arg1));
}


// bool QTemporaryDir::autoRemove()


static void _init_f_autoRemove_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_autoRemove_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QTemporaryDir *)cls)->autoRemove ());
}


// bool QTemporaryDir::isValid()


static void _init_f_isValid_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isValid_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QTemporaryDir *)cls)->isValid ());
}


// QString QTemporaryDir::path()


static void _init_f_path_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_path_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QTemporaryDir *)cls)->path ());
}


// bool QTemporaryDir::remove()


static void _init_f_remove_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_remove_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QTemporaryDir *)cls)->remove ());
}


// void QTemporaryDir::setAutoRemove(bool b)


static void _init_f_setAutoRemove_864 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("b");
  decl->add_arg<bool > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setAutoRemove_864 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  bool arg1 = gsi::arg_reader<bool >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTemporaryDir *)cls)->setAutoRemove (arg1);
}



namespace gsi
{

static gsi::Methods methods_QTemporaryDir () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QTemporaryDir::QTemporaryDir()\nThis method creates an object of class QTemporaryDir.", &_init_ctor_QTemporaryDir_0, &_call_ctor_QTemporaryDir_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QTemporaryDir::QTemporaryDir(const QString &templateName)\nThis method creates an object of class QTemporaryDir.", &_init_ctor_QTemporaryDir_2025, &_call_ctor_QTemporaryDir_2025);
  methods += new qt_gsi::GenericMethod (":autoRemove", "@brief Method bool QTemporaryDir::autoRemove()\n", true, &_init_f_autoRemove_c0, &_call_f_autoRemove_c0);
  methods += new qt_gsi::GenericMethod ("isValid?", "@brief Method bool QTemporaryDir::isValid()\n", true, &_init_f_isValid_c0, &_call_f_isValid_c0);
  methods += new qt_gsi::GenericMethod ("path", "@brief Method QString QTemporaryDir::path()\n", true, &_init_f_path_c0, &_call_f_path_c0);
  methods += new qt_gsi::GenericMethod ("remove", "@brief Method bool QTemporaryDir::remove()\n", false, &_init_f_remove_0, &_call_f_remove_0);
  methods += new qt_gsi::GenericMethod ("setAutoRemove|autoRemove=", "@brief Method void QTemporaryDir::setAutoRemove(bool b)\n", false, &_init_f_setAutoRemove_864, &_call_f_setAutoRemove_864);
  return methods;
}

gsi::Class<QTemporaryDir> decl_QTemporaryDir ("QtCore", "QTemporaryDir",
  methods_QTemporaryDir (),
  "@qt\n@brief Binding of QTemporaryDir");


GSI_QTCORE_PUBLIC gsi::Class<QTemporaryDir> &qtdecl_QTemporaryDir () { return decl_QTemporaryDir; }

}
