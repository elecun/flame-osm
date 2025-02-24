/**
 * @file kvaser.can.control.hpp
 * @author Byunghun Hwang <bh.hwang@iae.re.kr>
 * @brief CAN Control using KVaser PCIE CAN
 * @version 0.1
 * @date 2025-02-24
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#ifndef FLAME_KVASER_CAN_CONTROL_HPP_INCLUDED
#define FLAME_KVASER_CAN_CONTROL_HPP_INCLUDED
 
#include <flame/component/object.hpp>
 
using namespace std;
// using namespace boost;
 
class kvaser_can_control : public flame::component::object {
    public:
        kvaser_can_control() = default;
        virtual ~kvaser_can_control() = default;
 
        /* common interface functions */
        bool on_init() override;
        void on_loop() override;
        void on_close() override;
        void on_message() override;
 
 }; /* class */
 
 EXPORT_COMPONENT_API
 
 
 #endif