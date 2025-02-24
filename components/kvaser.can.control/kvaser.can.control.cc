
#include "kvaser.can.control.hpp"
#include <flame/log.hpp>
#include <flame/config_def.hpp>


using namespace flame;

static kvaser_can_control* _instance = nullptr;
flame::component::object* create(){ if(!_instance) _instance = new kvaser_can_control(); return _instance; }
void release(){ if(_instance){ delete _instance; _instance = nullptr; }}

bool kvaser_can_control::on_init(){

    return true;
}

void kvaser_can_control::on_loop(){

}

void kvaser_can_control::on_close(){

    
}

void kvaser_can_control::on_message(){
    
}
