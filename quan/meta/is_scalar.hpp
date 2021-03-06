#ifndef QUAN_META_IS_SCALAR_HPP_INCLUDED
#define QUAN_META_IS_SCALAR_HPP_INCLUDED

/*
 Copyright (c) 2006-2013 Andy Little 

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
/*
    is T either a quantity or arithmetic
####################################################
    NOTE: this is not the same as std::is_scalar
    which allows pointers etc
####################################################
*/

#include <quan/config.hpp>
#ifndef __AVR__
#include <type_traits>
#else
#include <quan/std/tr1/is_arithmetic.hpp>
#endif
namespace quan{ namespace meta{

    template <typename T>
    struct is_scalar : std::is_arithmetic<T>{};

}}//quan::meta

#endif
