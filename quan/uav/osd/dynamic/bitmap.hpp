#ifndef QUAN_UAV_OSD_DYNAMIC_BITMAP_HPP_INCLUDED
#define QUAN_UAV_OSD_DYNAMIC_BITMAP_HPP_INCLUDED

#include <vector>

#include <quan/two_d/vect.hpp>
#include <quan/two_d/box.hpp>

#include <quan/uav/osd/api.hpp>
#include <quan/uav/osd/basic_bitmap.hpp>

namespace quan{ namespace uav{ namespace osd {namespace dynamic{

struct bitmap : quan::uav::osd::basic_bitmap{

   typedef  quan::uav::osd::pxp_type pos_type;
   typedef  quan::uav::osd::size_type size_type;
   typedef quan::uav::osd::colour_type colour;
   
   bitmap(std::string const & name_in,size_type const & size_in) 
    :m_name{name_in},
      m_size{size_in}, 
      m_data{static_cast<uint32_t>(size_in.x) * static_cast<uint32_t>(size_in.y),colour::transparent}
   {}

   // box is new size overlaid on old assuming old is at 0,0
   // N.B bitmap is text mode
   // bottom is at the top of the box as dispalyed
   // and top is at bottom
   // ie top is a larger integer value than bottom
   bool resize(quan::two_d::box<int> const & new_size);
   
   size_type get_size() const { return m_size;}
   std::string const & get_name() const { return m_name;}
   void set_name (std::string const & name){ m_name = name;}
   colour get_pixel_colour( pos_type const & p) const;
   bool set_pixel_colour( pos_type const & p, colour c);
   void destroy() { delete this;}
   bitmap* clone() const
   {
       return new bitmap(*this);
   }
   ~bitmap(){}
   private:
   bitmap( bitmap const & in) 
   : m_name{in.m_name}
      ,m_size{in.m_size}
      ,m_data{in.m_data}
   {}
   bitmap & operator = (bitmap const &) = delete;
   std::string m_name;
   size_type m_size;
   std::vector<colour> m_data;
};

}}}} // quan::uav::osd::dynamic

#endif // QUAN_UAV_OSD_DYNAMIC_BITMAP_HPP_INCLUDED
