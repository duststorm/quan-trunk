#ifndef QUAN_META_GTE_HPP_INCLUDED
#define QUAN_META_GTE_HPP_INCLUDED


// Copyright Andrew Little 2005
//
 
 
 
//
// See QUAN_ROOT/quan_matters/index.html for documentation.

#include <quan/meta/bool.hpp>

namespace quan{ namespace meta{

      template<typename TL,typename TR>
      struct gte_ : bool_<((TL::value) >= (TR::value))>{};
            
}}

#endif
