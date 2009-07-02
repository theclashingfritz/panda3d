// Filename: p3dBoolObject.cxx
// Created by:  drose (30Jun09)
//
////////////////////////////////////////////////////////////////////
//
// PANDA 3D SOFTWARE
// Copyright (c) Carnegie Mellon University.  All rights reserved.
//
// All use of this software is subject to the terms of the revised BSD
// license.  You should have received a copy of this license along
// with this source code in a file named "LICENSE."
//
////////////////////////////////////////////////////////////////////

#include "p3dBoolObject.h"

////////////////////////////////////////////////////////////////////
//     Function: P3DBoolObject::Constructor
//       Access: Public
//  Description: 
////////////////////////////////////////////////////////////////////
P3DBoolObject::
P3DBoolObject(bool value) : 
  P3DObject(P3D_OT_bool),
  _value(value)
{
}

////////////////////////////////////////////////////////////////////
//     Function: P3DBoolObject::Copy Constructor
//       Access: Public
//  Description: 
////////////////////////////////////////////////////////////////////
P3DBoolObject::
P3DBoolObject(const P3DBoolObject &copy) :
  P3DObject(copy),
  _value(copy._value)
{
}

////////////////////////////////////////////////////////////////////
//     Function: P3DBoolObject::make_copy
//       Access: Public, Virtual
//  Description: 
////////////////////////////////////////////////////////////////////
P3DObject *P3DBoolObject::
make_copy() const {
  return new P3DBoolObject(*this);
}

////////////////////////////////////////////////////////////////////
//     Function: P3DBoolObject::get_bool
//       Access: Public, Virtual
//  Description: Returns the object value coerced to a boolean, if
//               possible.
////////////////////////////////////////////////////////////////////
bool P3DBoolObject::
get_bool() const {
  return _value;
}

////////////////////////////////////////////////////////////////////
//     Function: P3DBoolObject::get_int
//       Access: Public, Virtual
//  Description: Returns the object value coerced to an integer, if
//               possible.
////////////////////////////////////////////////////////////////////
int P3DBoolObject::
get_int() const {
  return _value;
}

////////////////////////////////////////////////////////////////////
//     Function: P3DBoolObject::make_string
//       Access: Public, Virtual
//  Description: Fills the indicated C++ string object with the value
//               of this object coerced to a string.
////////////////////////////////////////////////////////////////////
void P3DBoolObject::
make_string(string &value) const {
  if (_value) {
    value = "True";
  } else {
    value = "False";
  }
}

////////////////////////////////////////////////////////////////////
//     Function: P3DBoolObject::make_xml
//       Access: Public, Virtual
//  Description: Allocates and returns a new XML structure
//               corresponding to this value.
////////////////////////////////////////////////////////////////////
TiXmlElement *P3DBoolObject::
make_xml() const {
  TiXmlElement *xvalue = new TiXmlElement("value");
  xvalue->SetAttribute("type", "bool");
  xvalue->SetAttribute("value", (int)_value);
  return xvalue;
}