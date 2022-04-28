/*
 * Copyright (C) 2006-2020 Istituto Italiano di Tecnologia (IIT)
 * All rights reserved.
 *
 * This software may be modified and distributed under the terms of the
 * BSD-3-Clause license. See the accompanying LICENSE file for details.
 */

#ifndef YARP_TELEMETRY_RECORD_H
#define YARP_TELEMETRY_RECORD_H

#include <yarp/telemetry/experimental/api.h>

#include <vector>
#include <any>

#include <matioCpp/Span.h>

namespace yarp::telemetry::experimental {

/**
 * @brief A structure to represent a Record.
 *
 */
struct YARP_telemetry_API Record
{
    double m_ts;/**< timestamp */
    std::any m_datum;/**< the actual data of the record */
};

} // yarp::telemetry

#endif
