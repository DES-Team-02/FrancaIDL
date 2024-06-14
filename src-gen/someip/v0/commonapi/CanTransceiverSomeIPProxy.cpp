/*
 * This file was generated by the CommonAPI Generators.
 * Used org.genivi.commonapi.someip 3.2.14.v202310241606.
 * Used org.franca.core 0.13.1.201807231814.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
 * If a copy of the MPL was not distributed with this file, You can obtain one at
 * http://mozilla.org/MPL/2.0/.
 */
#include <v0/commonapi/CanTransceiverSomeIPProxy.hpp>

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#define HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE
#endif

#include <CommonAPI/SomeIP/AddressTranslator.hpp>

#if defined (HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE)
#undef COMMONAPI_INTERNAL_COMPILATION
#undef HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE
#endif

namespace v0 {
namespace commonapi {

std::shared_ptr<CommonAPI::SomeIP::Proxy> createCanTransceiverSomeIPProxy(
    const CommonAPI::SomeIP::Address &_address,
    const std::shared_ptr<CommonAPI::SomeIP::ProxyConnection> &_connection) {
    return std::make_shared< CanTransceiverSomeIPProxy>(_address, _connection);
}

void initializeCanTransceiverSomeIPProxy() {
    CommonAPI::SomeIP::AddressTranslator::get()->insert(
        "local:commonapi.CanTransceiver:v0_1:commonapi.CanTransceiver",
        0xbb8, 0xbb9, 0, 1);
    CommonAPI::SomeIP::Factory::get()->registerProxyCreateMethod(
        "commonapi.CanTransceiver:v0_1",
        &createCanTransceiverSomeIPProxy);
}

INITIALIZER(registerCanTransceiverSomeIPProxy) {
    CommonAPI::SomeIP::Factory::get()->registerInterface(initializeCanTransceiverSomeIPProxy);
}

CanTransceiverSomeIPProxy::CanTransceiverSomeIPProxy(
    const CommonAPI::SomeIP::Address &_address,
    const std::shared_ptr<CommonAPI::SomeIP::ProxyConnection> &_connection)
        : CommonAPI::SomeIP::Proxy(_address, _connection),
          speed_(*this, CommonAPI::SomeIP::eventgroup_id_t(0xce4), CommonAPI::SomeIP::event_id_t(0x80e8), CommonAPI::SomeIP::method_id_t(0xce5), true, CommonAPI::SomeIP::reliability_type_e::RT_RELIABLE, false, static_cast< CommonAPI::SomeIP::IntegerDeployment<uint32_t>* >(nullptr)),
          rpm_(*this, CommonAPI::SomeIP::eventgroup_id_t(0xd48), CommonAPI::SomeIP::event_id_t(0x84d0), CommonAPI::SomeIP::method_id_t(0xd49), true, CommonAPI::SomeIP::reliability_type_e::RT_RELIABLE, false, static_cast< CommonAPI::SomeIP::IntegerDeployment<uint32_t>* >(nullptr)),
          sonarFront_(*this, CommonAPI::SomeIP::eventgroup_id_t(0xdac), CommonAPI::SomeIP::event_id_t(0x88b8), CommonAPI::SomeIP::method_id_t(0xdad), true, CommonAPI::SomeIP::reliability_type_e::RT_RELIABLE, false, static_cast< CommonAPI::SomeIP::IntegerDeployment<uint32_t>* >(nullptr)),
          sonarRear_(*this, CommonAPI::SomeIP::eventgroup_id_t(0xdac), CommonAPI::SomeIP::event_id_t(0x88b9), CommonAPI::SomeIP::method_id_t(0xdae), true, CommonAPI::SomeIP::reliability_type_e::RT_RELIABLE, false, static_cast< CommonAPI::SomeIP::IntegerDeployment<uint32_t>* >(nullptr)),
          distances_(*this, CommonAPI::SomeIP::eventgroup_id_t(0xdac), CommonAPI::SomeIP::event_id_t(0x88ba), CommonAPI::SomeIP::method_id_t(0xdaf), true, CommonAPI::SomeIP::reliability_type_e::RT_RELIABLE, false, static_cast< ::v0::commonapi::CanTransceiver_::SonarArrayStructDeployment_t* >(nullptr))
{
}

CanTransceiverSomeIPProxy::~CanTransceiverSomeIPProxy() {
}

CanTransceiverSomeIPProxy::SpeedAttribute& CanTransceiverSomeIPProxy::getSpeedAttribute() {
    return speed_;
}
CanTransceiverSomeIPProxy::RpmAttribute& CanTransceiverSomeIPProxy::getRpmAttribute() {
    return rpm_;
}
CanTransceiverSomeIPProxy::SonarFrontAttribute& CanTransceiverSomeIPProxy::getSonarFrontAttribute() {
    return sonarFront_;
}
CanTransceiverSomeIPProxy::SonarRearAttribute& CanTransceiverSomeIPProxy::getSonarRearAttribute() {
    return sonarRear_;
}
CanTransceiverSomeIPProxy::DistancesAttribute& CanTransceiverSomeIPProxy::getDistancesAttribute() {
    return distances_;
}


void CanTransceiverSomeIPProxy::getOwnVersion(uint16_t& ownVersionMajor, uint16_t& ownVersionMinor) const {
    ownVersionMajor = 0;
    ownVersionMinor = 1;
}

std::future<void> CanTransceiverSomeIPProxy::getCompletionFuture() {
    return CommonAPI::SomeIP::Proxy::getCompletionFuture();
}

} // namespace commonapi
} // namespace v0
