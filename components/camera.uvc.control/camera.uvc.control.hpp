/**
 * @file camera.uvc.control.hpp
 * @author Byunghun Hwang <bh.hwang@iae.re.kr>
 * @brief UVC Camera Control Interface component
 * @version 0.1
 * @date 2025-02-24
 * 
 * @copyright Copyright (c) 2025
 * 
 */

 #ifndef FLAME_CAMERA_UVC_CONTROL_HPP_INCLUDED
 #define FLAME_CAMERA_UVC_CONTROL_HPP_INCLUDED
  
 #include <flame/component/object.hpp>
  
 using namespace std;
 // using namespace boost;
  
 class camera_uvc_control : public flame::component::object {
     public:
        camera_uvc_control() = default;
         virtual ~camera_uvc_control() = default;
  
         /* common interface functions */
         bool on_init() override;
         void on_loop() override;
         void on_close() override;
         void on_message() override;
  
  }; /* class */
  
  EXPORT_COMPONENT_API
  
  
  #endif