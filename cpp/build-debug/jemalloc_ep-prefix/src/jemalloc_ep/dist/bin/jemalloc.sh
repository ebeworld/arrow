#!/bin/sh

prefix=/Users/bytedance/cpp/arrow/cpp/build-debug/jemalloc_ep-prefix/src/jemalloc_ep/dist
exec_prefix=/Users/bytedance/cpp/arrow/cpp/build-debug/jemalloc_ep-prefix/src/jemalloc_ep/dist
libdir=/Users/bytedance/cpp/arrow/cpp/build-debug/jemalloc_ep-prefix/src/jemalloc_ep/dist//lib

DYLD_INSERT_LIBRARIES=${libdir}/libjemalloc.2.dylib
export DYLD_INSERT_LIBRARIES
exec "$@"
