
#include "camera.uvc.control.hpp"
#include <flame/log.hpp>
#include <flame/config_def.hpp>


using namespace flame;

static camera_uvc_control* _instance = nullptr;
flame::component::object* create(){ if(!_instance) _instance = new camera_uvc_control(); return _instance; }
void release(){ if(_instance){ delete _instance; _instance = nullptr; }}

bool camera_uvc_control::on_init(){

    return true;
}

void camera_uvc_control::on_loop(){

}

void camera_uvc_control::on_close(){

    
}

void camera_uvc_control::on_message(){
    
}
