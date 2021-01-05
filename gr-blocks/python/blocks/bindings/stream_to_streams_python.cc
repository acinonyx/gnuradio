/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(stream_to_streams.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(80ded9031fc5493e8a87d4efde05b03e)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/blocks/stream_to_streams.h>
// pydoc.h is automatically generated in the build directory
#include <stream_to_streams_pydoc.h>

void bind_stream_to_streams(py::module& m)
{

    using stream_to_streams = ::gr::blocks::stream_to_streams;


    py::class_<stream_to_streams,
               gr::sync_decimator,
               gr::sync_block,
               gr::block,
               gr::basic_block,
               std::shared_ptr<stream_to_streams>>(
        m, "stream_to_streams", D(stream_to_streams))

        .def(py::init(&stream_to_streams::make),
             py::arg("itemsize"),
             py::arg("nstreams"),
             D(stream_to_streams, make))


        ;
}