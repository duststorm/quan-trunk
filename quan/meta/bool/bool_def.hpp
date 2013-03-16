#ifndef QUAN_META_BOOL_BOOL_DEF_HPP_INCLUDED
#define QUAN_META_BOOL_BOOL_DEF_HPP_INCLUDED

/*
 Copyright (c) 2013 Andy Little 

 This program is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.
 
 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with this program. If not, see <http://www.gnu.org/licenses/>
*/

// See QUAN_ROOT/quan_matters/index.html for documentation.

#include <type_traits>

namespace quan{ namespace meta{

      template <bool B>
      struct bool_ : std::integral_constant<bool, B>{
         typedef bool_ type;
      };
}}

#endif
