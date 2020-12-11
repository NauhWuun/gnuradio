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
/* BINDTOOL_HEADER_FILE(stream_demux.h)                                            */
/* BINDTOOL_HEADER_FILE_HASH(76f72d6993d70c9da3a497eacd72280a)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/blocks/stream_demux.h>
// pydoc.h is automatically generated in the build directory
#include <stream_demux_pydoc.h>

void bind_stream_demux(py::module& m)
{

    using stream_demux = ::gr::blocks::stream_demux;


    py::class_<stream_demux, gr::block, gr::basic_block, std::shared_ptr<stream_demux>>(
        m, "stream_demux", D(stream_demux))

        .def(py::init(&stream_demux::make),
             py::arg("itemsize"),
             py::arg("lengths"),
             D(stream_demux, make))


        ;
}