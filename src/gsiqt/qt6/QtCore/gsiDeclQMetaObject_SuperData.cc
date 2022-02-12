
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2022 Matthias Koefferlein

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
*  @file gsiDeclQMetaObject_SuperData.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QMetaObject>
#include <QMetaObject>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// struct QMetaObject::SuperData

//  Constructor QMetaObject::SuperData::SuperData()


static void _init_ctor_QMetaObject_SuperData_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QMetaObject::SuperData> ();
}

static void _call_ctor_QMetaObject_SuperData_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QMetaObject::SuperData *> (new QMetaObject::SuperData ());
}


//  Constructor QMetaObject::SuperData::SuperData(const QMetaObject *mo)


static void _init_ctor_QMetaObject_SuperData_2388 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("mo");
  decl->add_arg<const QMetaObject * > (argspec_0);
  decl->set_return_new<QMetaObject::SuperData> ();
}

static void _call_ctor_QMetaObject_SuperData_2388 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMetaObject *arg1 = gsi::arg_reader<const QMetaObject * >() (args, heap);
  ret.write<QMetaObject::SuperData *> (new QMetaObject::SuperData (arg1));
}


// const QMetaObject *QMetaObject::SuperData::operator->()


static void _init_f_operator_minus__gt__c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const QMetaObject * > ();
}

static void _call_f_operator_minus__gt__c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const QMetaObject * > ((const QMetaObject *)((QMetaObject::SuperData *)cls)->operator-> ());
}



namespace gsi
{

static gsi::Methods methods_QMetaObject_SuperData () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QMetaObject::SuperData::SuperData()\nThis method creates an object of class QMetaObject::SuperData.", &_init_ctor_QMetaObject_SuperData_0, &_call_ctor_QMetaObject_SuperData_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QMetaObject::SuperData::SuperData(const QMetaObject *mo)\nThis method creates an object of class QMetaObject::SuperData.", &_init_ctor_QMetaObject_SuperData_2388, &_call_ctor_QMetaObject_SuperData_2388);
  methods += new qt_gsi::GenericMethod ("->", "@brief Method const QMetaObject *QMetaObject::SuperData::operator->()\n", true, &_init_f_operator_minus__gt__c0, &_call_f_operator_minus__gt__c0);
  return methods;
}

gsi::Class<QMetaObject::SuperData> decl_QMetaObject_SuperData ("QtCore", "QMetaObject_SuperData",
  methods_QMetaObject_SuperData (),
  "@qt\n@brief Binding of QMetaObject::SuperData");

gsi::ClassExt<QMetaObject> decl_QMetaObject_SuperData_as_child (decl_QMetaObject_SuperData, "SuperData");

GSI_QTCORE_PUBLIC gsi::Class<QMetaObject::SuperData> &qtdecl_QMetaObject_SuperData () { return decl_QMetaObject_SuperData; }

}
