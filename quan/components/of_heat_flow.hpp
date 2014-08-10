#ifndef QUAN_OF_HEAT_FLOW_HPP_INCLUDED
#define QUAN_OF_HEAT_FLOW_HPP_INCLUDED
#if (defined _MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif

// Copyright Andrew Little 2005
//
 

 
//
// See QUAN_ROOT/quan_matters/index.html for documentation.

#include <quan/components/of_named_quantity.hpp>

namespace quan{ namespace meta{ namespace components{

    struct of_heat_flow{

        static const char* abstract_quantity_name()
        {
            return "heat flow";
        }

        template<typename CharType>
        static const CharType* unprefixed_symbol();

        enum{
            extent = 1,
            prefix_offset = 0
        };

        typedef meta::dimension<
            meta::rational<2>, // length
            meta::rational<-3>, // time
            meta::rational<1>, // mass
            meta::rational<0>, // temperature
            meta::rational<0>, // current
            meta::rational<0>, // substance
            meta::rational<0> // intensity
        > dimension;

        typedef meta::abstract_quantity<
            dimension,
            of_heat_flow
        > abstract_quantity;

        typedef  of_heat_flow type;

    };

    template<>
    inline
    const char*
    of_heat_flow::unprefixed_symbol<char>()
    {
        return "W";
    }

    struct non_si_unit_of_heat_flow{
    };

}}}//quan::meta::components

#endif
