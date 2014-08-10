#ifndef QUAN_OF_AREA_MOMENT_OF_INERTIA_HPP_INCLUDED
#define QUAN_OF_AREA_MOMENT_OF_INERTIA_HPP_INCLUDED
#if (defined _MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif

// Copyright Andrew Little 2005
//
 

 
//
// See QUAN_ROOT/quan_matters/index.html for documentation.

#include <quan/components/of_named_quantity.hpp>
#include <quan/meta/name_anonymous_abstract_quantity.hpp>

namespace quan{ namespace meta{ namespace components{

    struct of_area_moment_of_inertia{

        static const char* abstract_quantity_name()
        {
            return "area_moment_of_inertia";
        }

        template<typename CharType>
        static const CharType* unprefixed_symbol();

        enum{
            extent = 1,
            prefix_offset = 0
        };

        typedef meta::dimension<
            meta::rational<4>, // length
            meta::rational<0>, // time
            meta::rational<0>, // mass
            meta::rational<0>, // temperature
            meta::rational<0>, // current
            meta::rational<0>, // substance
            meta::rational<0> // intensity
        > dimension;

        typedef meta::abstract_quantity<
            dimension,
            of_area_moment_of_inertia
        > abstract_quantity;

        typedef  of_area_moment_of_inertia type;
    };
 
    template<>
    inline
    const char*
    of_area_moment_of_inertia::unprefixed_symbol<char>()
    {
        return "m4";
    }

}//components

#ifdef QUAN_ENABLE_SELECTED_HOISTED_QUANTITIES
// enable hoisting of anonymous length
   template<>
   struct name_anonymous_abstract_quantity<
      abstract_quantity<
         quan::meta::components::of_area_moment_of_inertia::dimension,
         quan::meta::anonymous_quantity_traits
      >
   >{
      typedef components::of_area_moment_of_inertia::abstract_quantity type;
   };
#endif

}}//quan::meta

#endif
