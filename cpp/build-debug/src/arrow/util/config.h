// Licensed to the Apache Software Foundation (ASF) under one
// or more contributor license agreements.  See the NOTICE file
// distributed with this work for additional information
// regarding copyright ownership.  The ASF licenses this file
// to you under the Apache License, Version 2.0 (the
// "License"); you may not use this file except in compliance
// with the License.  You may obtain a copy of the License at
//
//   http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing,
// software distributed under the License is distributed on an
// "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
// KIND, either express or implied.  See the License for the
// specific language governing permissions and limitations
// under the License.

#define ARROW_VERSION_MAJOR 10
#define ARROW_VERSION_MINOR 0
#define ARROW_VERSION_PATCH 0
#define ARROW_VERSION ((ARROW_VERSION_MAJOR * 1000) + ARROW_VERSION_MINOR) * 1000 + ARROW_VERSION_PATCH

#define ARROW_VERSION_STRING "10.0.0-SNAPSHOT"

#define ARROW_SO_VERSION "1000"
#define ARROW_FULL_SO_VERSION "1000.0.0"

#define ARROW_CXX_COMPILER_ID "AppleClang"
#define ARROW_CXX_COMPILER_VERSION "13.0.0.13000027"
#define ARROW_CXX_COMPILER_FLAGS " -Qunused-arguments -fcolor-diagnostics -ggdb -O0"

#define ARROW_BUILD_TYPE "DEBUG"

#define ARROW_GIT_ID "89c0214fa43f8d1bf2e19e3bae0fc3009df51e15"
#define ARROW_GIT_DESCRIPTION "apache-arrow-10.0.0.dev-346-g89c0214fa-dirty"

#define ARROW_PACKAGE_KIND ""

/* #undef ARROW_COMPUTE */
/* #undef ARROW_CSV */
/* #undef ARROW_CUDA */
/* #undef ARROW_DATASET */
/* #undef ARROW_FILESYSTEM */
#define ARROW_FLIGHT
/* #undef ARROW_FLIGHT_SQL */
#define ARROW_IPC
#define ARROW_JEMALLOC
#define ARROW_JEMALLOC_VENDORED
#define ARROW_JSON
/* #undef ARROW_ORC */
/* #undef ARROW_PARQUET */
/* #undef ARROW_SUBSTRAIT */

/* #undef ARROW_GCS */
/* #undef ARROW_S3 */
#define ARROW_USE_NATIVE_INT128
/* #undef ARROW_WITH_MUSL */
/* #undef ARROW_WITH_OPENTELEMETRY */
/* #undef ARROW_WITH_UCX */

#define GRPCPP_PP_INCLUDE
