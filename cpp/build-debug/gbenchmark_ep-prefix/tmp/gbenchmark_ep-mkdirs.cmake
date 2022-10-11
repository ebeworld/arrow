# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/Users/bytedance/cpp/arrow/cpp/build-debug/gbenchmark_ep-prefix/src/gbenchmark_ep"
  "/Users/bytedance/cpp/arrow/cpp/build-debug/gbenchmark_ep-prefix/src/gbenchmark_ep-build"
  "/Users/bytedance/cpp/arrow/cpp/build-debug/gbenchmark_ep-prefix"
  "/Users/bytedance/cpp/arrow/cpp/build-debug/gbenchmark_ep-prefix/tmp"
  "/Users/bytedance/cpp/arrow/cpp/build-debug/gbenchmark_ep-prefix/src/gbenchmark_ep-stamp"
  "/Users/bytedance/cpp/arrow/cpp/build-debug/gbenchmark_ep-prefix/src"
  "/Users/bytedance/cpp/arrow/cpp/build-debug/gbenchmark_ep-prefix/src/gbenchmark_ep-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/Users/bytedance/cpp/arrow/cpp/build-debug/gbenchmark_ep-prefix/src/gbenchmark_ep-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/Users/bytedance/cpp/arrow/cpp/build-debug/gbenchmark_ep-prefix/src/gbenchmark_ep-stamp${cfgdir}") # cfgdir has leading slash
endif()
