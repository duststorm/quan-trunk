#ifndef QUAN_STM32_SYSTICK_HPP_INCLUDED
#define QUAN_STM32_SYSTICK_HPP_INCLUDED
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

#include <cstdint>
#include <quan/time.hpp>

#if defined QUAN_STM32F4
#include <stm32f4xx.h>
#elif defined QUAN_STM32F3
#include <stm32f3xx.h>
#elif defined QUAN_STM32F0
#include <stm32f0xx.h>
#else
#error need to define stm32 processor
#endif

namespace quan{namespace stm32{ namespace detail{

   inline void disable_systick_irq()
   {
      SysTick->CTRL &= ~SysTick_CTRL_TICKINT_Msk;
   }
   inline void enable_systick_irq()
   {
      SysTick->CTRL |= SysTick_CTRL_TICKINT_Msk;
   }
   struct systick_tick{
      static volatile int64_t current;
   };
   
}}}

namespace quan{ namespace stm32{

   inline quan::time_<int64_t>::ms millis()
   {
      quan::stm32::detail::disable_systick_irq();
      int64_t result = stm32::detail::systick_tick::current;
      quan::stm32::detail::enable_systick_irq();
      return quan::time_<int64_t>::ms{result};
   }

}}

#endif // QUAN_STM32_SYSTICK_HPP_INCLUDED
