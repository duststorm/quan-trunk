#ifndef QUAN_STM32_F0_RCC_HPP_INCLUDED
#define QUAN_STM32_F0_RCC_HPP_INCLUDED

#include <quan/stm32/f0/periph_map.hpp>
#include <quan/stm32/periph_reg.hpp>

namespace quan{ namespace stm32{


   struct rcc {
      typedef uint32_t value_type;
      static const uint32_t address = quan::stm32::periph_map::rcc;
      typedef rcc type;
      quan::stm32::periph_reg<type, 0x0>      cr;
      quan::stm32::periph_reg<type, 0x4>      cfgr;
      quan::stm32::periph_reg<type, 0x08>     cir;
      quan::stm32::periph_reg<type, 0x0C>     apb2rstr;
      quan::stm32::periph_reg<type, 0x10>     apb1rstr;
      quan::stm32::periph_reg<type, 0x14>     ahbenr;
      quan::stm32::periph_reg<type, 0x18>     apb2enr;
      quan::stm32::periph_reg<type, 0x1C>     apb1enr;
      quan::stm32::periph_reg<type, 0x20>     bdcr;
      quan::stm32::periph_reg<type, 0x24>     csr;
      quan::stm32::periph_reg<type, 0x28>     ahbrstr;
      quan::stm32::periph_reg<type, 0x2C>     cfgr2;
      quan::stm32::periph_reg<type, 0x30>     cfgr3;
      quan::stm32::periph_reg<type, 0x34>     cr2;

      static constexpr rcc* get(){ return reinterpret_cast<rcc*>(address);}

      private:
         rcc() = delete;
         rcc(rcc const &) = delete;
         rcc& operator = (rcc const & ) = delete;
   };

}} //quan::stm32


#endif	/* QUAN_STM32_F0_RCC_HPP_INCLUDED */

