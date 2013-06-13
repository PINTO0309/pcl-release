/* Auto-generated by genmsg_cpp for file /work/ros/pkgs-trunk/point_cloud_perception/pcl/msg/PolygonMesh.msg */
#ifndef PCL_MESSAGE_POLYGONMESH_H
#define PCL_MESSAGE_POLYGONMESH_H
#include <string>
#include <vector>
#include <ostream>

// Include the correct Header path here
#include "std_msgs/Header.h"
#include "sensor_msgs/PointCloud2.h"
#include <pcl/Vertices.h>

namespace pcl
{
  struct PolygonMesh
  {
    PolygonMesh () : header (), cloud (), polygons ()
    {}

    ::std_msgs::Header  header;

    ::sensor_msgs::PointCloud2 cloud;

    std::vector< ::pcl::Vertices>  polygons;


  public:
    typedef boost::shared_ptr< ::pcl::PolygonMesh> Ptr;
    typedef boost::shared_ptr< ::pcl::PolygonMesh const> ConstPtr;
  }; // struct PolygonMesh

  typedef boost::shared_ptr< ::pcl::PolygonMesh> PolygonMeshPtr;
  typedef boost::shared_ptr< ::pcl::PolygonMesh const> PolygonMeshConstPtr;

  inline std::ostream& operator<<(std::ostream& s, const  ::pcl::PolygonMesh &v)
  {
    s << "header: " << std::endl;
    s << v.header;
    s << "cloud: " << std::endl;
    s << v.cloud;
    s << "polygons[]" << std::endl;
    for (size_t i = 0; i < v.polygons.size (); ++i)
    {
      s << "  polygons[" << i << "]: " << std::endl;
      s << v.polygons[i];
    }
    return (s);
  }

} // namespace pcl

#endif // PCL_MESSAGE_POLYGONMESH_H

