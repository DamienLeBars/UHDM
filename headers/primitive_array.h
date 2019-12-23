/*
 Do not modify, auto-generated by model_gen.tcl

 Copyright 2019 Alain Dargelas

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

 http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 */

/*
 * File:   primitive_array.h
 * Author:
 *
 * Created on December 14, 2019, 10:03 PM
 */

#ifndef PRIMITIVE_ARRAY_H
#define PRIMITIVE_ARRAY_H

namespace UHDM {

  class primitive_array : public BaseClass {
  public:
    primitive_array(){}
    ~primitive_array() final {}
    
    BaseClass* get_vpiParent() const { return vpiParent_; }

    void set_vpiParent(BaseClass* data) { vpiParent_ = data; }

    int get_uhdmParentType() const { return uhdmParentType_; }

    void set_uhdmParentType(int data) { uhdmParentType_ = data; }

  private:
    
    BaseClass* vpiParent_;

    int uhdmParentType_;

  };

  class primitive_arrayFactory {
  friend Serializer;
  public:
  static primitive_array* make() {
    primitive_array* obj = new primitive_array();
    objects_.push_back(obj);
    return obj;
  }
  private:
    static std::vector<primitive_array*> objects_;
  };
 	      
  class VectorOfprimitive_arrayFactory {
  friend Serializer;
  public:
  static std::vector<primitive_array*>* make() {
    std::vector<primitive_array*>* obj = new std::vector<primitive_array*>();
    objects_.push_back(obj);
    return obj;
  }
  private:
  static std::vector<std::vector<primitive_array*>*> objects_;
  };

};

#endif
