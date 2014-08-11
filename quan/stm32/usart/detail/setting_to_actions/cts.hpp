#ifndef QUAN_STM32_USART_SETTING_TO_ACTIONS_CTS_HPP_INCLUDED
#define QUAN_STM32_USART_SETTING_TO_ACTIONS_CTS_HPP_INCLUDED
/*
 Copyright (c) 2003-2014 Andy Little.

 This program is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License or
 (at your option) any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program. If not, see http://www.gnu.org/licenses./
 */

#include <quan/stm32/usart/detail/setting_to_actions/settings_to_action_macro.hpp>

namespace quan{ namespace stm32{ namespace usart{ namespace detail{
 
   // Enable CTS (cr3 bit 9)
   QUAN_STM32_USART_SETTING_TO_ACTION(cts, cr3, 9)

}}}}

#endif // QUAN_STM32_USART_SETTING_TO_ACTIONS_CTS_HPP_INCLUDED
